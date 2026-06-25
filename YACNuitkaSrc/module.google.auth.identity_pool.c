/* Generated code for Python module 'google$auth$identity_pool'
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



/* The "module_google$auth$identity_pool" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$identity_pool;
PyDictObject *moduledict_google$auth$identity_pool;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_d7bb0385676dfebba595740a21db3a08;
PyObject *const_str_plain__path;
PyObject *const_str_plain__format_type;
PyObject *const_str_plain__subject_token_field_name;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_RefreshError;
PyObject *const_str_digest_fe7ae04f7c18fa52103a63a2b68cd266;
PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
PyObject *const_str_plain__TokenContent;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain__parse_token_data;
PyObject *const_str_plain_token_content;
PyObject *const_str_plain__url;
PyObject *const_str_plain__headers;
PyObject *const_str_plain_GET;
PyObject *const_tuple_str_plain_url_str_plain_method_str_plain_headers_tuple;
PyObject *const_str_plain_data;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_plain_status;
PyObject *const_int_pos_200;
PyObject *const_str_digest_d73e23c5fc35c6241680d6b00376b7f8;
PyObject *const_str_plain__trust_chain_path;
PyObject *const_str_plain__leaf_cert_callback;
PyObject *const_str_plain_OpenSSL;
PyObject *const_tuple_str_plain_crypto_tuple;
PyObject *const_str_plain_crypto;
PyObject *const_str_plain_load_certificate;
PyObject *const_str_plain_FILETYPE_PEM;
PyObject *const_str_plain__read_trust_chain;
PyObject *const_str_plain__X509Supplier;
PyObject *const_str_plain__encode_cert;
PyObject *const_str_plain_json;
PyObject *const_str_plain_dumps;
PyObject *const_str_plain_cert_chain;
PyObject *const_tuple_str_digest_41b71f64e17c7459bf42a41660ed2c41_tuple;
PyObject *const_tuple_bytes_digest_aa03b53f00f09b71d5b8d2120793323c_tuple;
PyObject *const_str_plain_strip;
PyObject *const_bytes_digest_aa03b53f00f09b71d5b8d2120793323c;
PyObject *const_str_plain_certificate_trust_chain;
PyObject *const_str_digest_dcc12ad505a3ad9f783548602fc23978;
PyObject *const_str_digest_41edb2ce37ba5f43cfcb3432eb8d27da;
PyObject *const_str_plain_base64;
PyObject *const_str_plain_b64encode;
PyObject *const_str_plain_dump_certificate;
PyObject *const_str_plain_FILETYPE_ASN1;
PyObject *const_str_plain_text;
PyObject *const_str_plain_content;
PyObject *const_str_plain_loads;
PyObject *const_tuple_type_KeyError_type_ValueError_tuple;
PyObject *const_str_digest_2b1add325ef55cbd411468d2fce02090;
PyObject *const_str_plain_location;
PyObject *const_tuple_str_digest_4193f99ef57bce1ee5e2f79f4f2305ad_tuple;
PyObject *const_str_plain_Credentials;
PyObject *const_str_plain_audience;
PyObject *const_str_plain_subject_token_type;
PyObject *const_str_plain_token_url;
PyObject *const_str_plain_credential_source;
PyObject *const_str_plain_InvalidValue;
PyObject *const_tuple_str_digest_713399c1dcd4a18a159b718657c6be2b_tuple;
PyObject *const_tuple_str_digest_66894139ab08283cc473c158a3178d3f_tuple;
PyObject *const_str_plain__subject_token_supplier;
PyObject *const_str_plain__credential_source_file;
PyObject *const_str_plain__credential_source_url;
PyObject *const_str_plain__credential_source_certificate;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain__credential_source_executable;
PyObject *const_str_plain_MalformedError;
PyObject *const_tuple_str_digest_aab9fd2126c607247a977a3871bdaf1e_tuple;
PyObject *const_tuple_str_plain_file_tuple;
PyObject *const_tuple_str_plain_url_tuple;
PyObject *const_tuple_str_plain_certificate_tuple;
PyObject *const_str_plain_environment_id;
PyObject *const_tuple_str_digest_457fc45a6a43cdccd831f3eb13f0fc8a_tuple;
PyObject *const_str_plain__validate_single_source;
PyObject *const_str_plain__validate_certificate_config;
PyObject *const_str_plain__validate_file_or_url_config;
PyObject *const_str_plain__FileSupplier;
PyObject *const_str_plain__credential_source_format_type;
PyObject *const_str_plain__credential_source_field_name;
PyObject *const_str_plain__UrlSupplier;
PyObject *const_str_plain__credential_source_headers;
PyObject *const_str_plain__get_cert_bytes;
PyObject *const_str_digest_4a7c1997d12345f37718846c154550fb;
PyObject *const_str_plain_get_subject_token;
PyObject *const_str_plain__supplier_context;
PyObject *const_tuple_str_digest_0c9630b3fe06b623b329abf33ae141a3_tuple;
PyObject *const_str_plain__mtls_helper;
PyObject *const_str_plain__get_workload_cert_and_key_paths;
PyObject *const_str_plain__certificate_config_location;
PyObject *const_str_plain__get_mtls_cert_and_key_paths;
PyObject *const_str_plain__read_cert_file;
PyObject *const_str_plain__create_default_metrics_options;
PyObject *const_str_plain__credential_source;
PyObject *const_str_plain_source;
PyObject *const_str_plain_url;
PyObject *const_str_plain_x509;
PyObject *const_str_plain_programmatic;
PyObject *const_str_plain__constructor_args;
PyObject *const_str_plain__has_custom_supplier;
PyObject *const_str_plain_update;
PyObject *const_str_plain_subject_token_supplier;
PyObject *const_tuple_str_plain_certificate_config_location_tuple;
PyObject *const_tuple_str_plain_use_default_certificate_config_tuple;
PyObject *const_tuple_str_plain_trust_chain_path_tuple;
PyObject *const_tuple_str_digest_498ddaa68e04f91230e9e3198b71b91c_tuple;
PyObject *const_tuple_str_digest_f7d900600e624b3129d94685e6b4101c_tuple;
PyObject *const_tuple_str_plain_headers_tuple;
PyObject *const_tuple_str_plain_type_tuple;
PyObject *const_tuple_str_plain_text_str_plain_json_tuple;
PyObject *const_str_digest_07bfc903f8a4c7a140830b9236f68f66;
PyObject *const_tuple_str_plain_subject_token_field_name_tuple;
PyObject *const_tuple_str_digest_d557b0cdc0911ede4c7ff2c5057c529e_tuple;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_a0951180aed9e1d10b48a27d590ad2d9;
PyObject *const_tuple_str_digest_e856526f3714eecc169d56f141ecf292_tuple;
PyObject *const_tuple_str_digest_ea9d32e98bf8310ce858e8532246114b_tuple;
PyObject *const_tuple_str_plain_subject_token_supplier_tuple;
PyObject *const_str_plain_from_info;
PyObject *const_str_digest_795355c9624f82b268843b88b9ea35ac;
PyObject *const_str_plain_from_file;
PyObject *const_str_digest_0552ef6c6dae574cab4e51b7e8731be8;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain__agent_identity_utils_tuple;
PyObject *const_str_plain__agent_identity_utils;
PyObject *const_str_plain_parse_certificate;
PyObject *const_str_plain_should_request_bound_token;
PyObject *const_str_plain_calculate_certificate_fingerprint;
PyObject *const_str_plain__perform_refresh_token;
PyObject *const_tuple_str_plain_cert_fingerprint_tuple;
PyObject *const_str_plain__handle_trust_boundary;
PyObject *const_str_digest_aaa21d2925c4b66857e0fc2b4583907f;
PyObject *const_str_digest_3e330d699e870fc2a5d61526c07c8a09;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Mapping_tuple;
PyObject *const_str_plain_collections;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_os;
PyObject *const_str_plain_NamedTuple;
PyObject *const_tuple_str_plain__helpers_tuple;
PyObject *const_str_plain__helpers;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_tuple_str_plain_external_account_tuple;
PyObject *const_str_plain_external_account;
PyObject *const_str_digest_587455d82fd83f874416fce4cf44fc5a;
PyObject *const_tuple_str_plain__mtls_helper_tuple;
PyObject *const_str_plain_metaclass;
PyObject *const_str_plain_ABCMeta;
PyObject *const_str_plain___prepare__;
PyObject *const_tuple_str_plain_SubjectTokenSupplier_tuple_empty_tuple;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_86c4186cb6e339e309dca99d5150bc7e;
PyObject *const_str_digest_edd0ed71a61af8cae1450a8b8bf9ef39;
PyObject *const_str_plain_SubjectTokenSupplier;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_55;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_abstractmethod;
PyObject *const_str_digest_83fa2fb09c64a91f72d0691b6fe5881f;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_07eb69041eecba7732b9a213326a4bd5;
PyObject *const_int_pos_84;
PyObject *const_str_plain_str;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_1b044300a33409337ed8665a25002633;
PyObject *const_int_pos_95;
PyObject *const_str_digest_565f6a2dde367206af64d83fe5ebf76c;
PyObject *const_str_plain_copy_docstring;
PyObject *const_str_digest_ae82c551d25fd9b320028e0d02e2931e;
PyObject *const_tuple_2f39796e96a099605feb891db24987b1_tuple;
PyObject *const_str_digest_15b6774c28ad5ed16ac93ad4e5310818;
PyObject *const_int_pos_116;
PyObject *const_str_digest_28085e64f58791e1c1546e8fcf5a6f5d;
PyObject *const_str_digest_6562805d29a072ba7f846e87bfc48969;
PyObject *const_tuple_75449aa060f10f3014a37aab2c187130_tuple;
PyObject *const_str_digest_0b317a9027cf154efa22300da4edfa5a;
PyObject *const_int_pos_146;
PyObject *const_str_digest_d4d19d12d24c52430f543e69e2c02f6e;
PyObject *const_str_digest_13266712e88c28fc4cd19c7c32af4f30;
PyObject *const_str_digest_dcac1c7e005916bc64279c7a6d371d56;
PyObject *const_str_digest_c3012d37836e9dc4ab7e2b2d4a7e4667;
PyObject *const_tuple_str_plain__trust_chain_path_str_plain__leaf_cert_callback_tuple;
PyObject *const_tuple_str_plain_text_none_tuple;
PyObject *const_str_digest_69ecd93410a2f9cfa37108b5932bf677;
PyObject *const_int_pos_255;
PyObject *const_str_plain__DEFAULT_TOKEN_URL;
PyObject *const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd;
PyObject *const_str_plain_retrieve_subject_token;
PyObject *const_str_digest_ee5b4eb753af0dbd321c5a140cc652e8;
PyObject *const_str_digest_e087e1b8cd7e8dc8f155eaa1e6f8bb88;
PyObject *const_str_digest_fef47d7e9261ac93e0badcfb54f0af55;
PyObject *const_str_plain__mtls_required;
PyObject *const_str_digest_92493e348986cd0510805d06669d9136;
PyObject *const_str_digest_4c5e1d2b34a82bcc3493b4fed9f36469;
PyObject *const_str_digest_223a6dab34ee5dbfcea6cb8787d661a1;
PyObject *const_str_digest_0942c1edbb706cce2ad2fe70cc0d77a1;
PyObject *const_str_digest_907a0abfb3c2c3d75700a4b18dcdc202;
PyObject *const_str_digest_e251ce69338b5d403d8b28add51a2db8;
PyObject *const_str_digest_73318f5cc89c934919e5a2d5e6c54a02;
PyObject *const_str_digest_235941431ecb9ca24eb20b88770edeba;
PyObject *const_str_digest_987cb2208d197b62244cc44a9c8137db;
PyObject *const_str_plain_refresh;
PyObject *const_str_digest_b8d96327bb876dc140fac3cfa41e9d75;
PyObject *const_tuple_fd26d292c07de83cbbf8c7bf66fd7ede_tuple;
PyObject *const_str_digest_10c3934f5117e6faad7e0d817399b49f;
PyObject *const_tuple_str_plain_source_tuple;
PyObject *const_str_digest_92f4fbe446909505f50f46ebd4aedca2;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_f14cc21c2f9a4589befac99f25403777_tuple;
PyObject *const_tuple_fe65d26b247e1fe4c0110ad94f5913ca_tuple;
PyObject *const_tuple_b9ed6719291b36d7763209737a9ff383_tuple;
PyObject *const_tuple_8d4111cfab30b2414e87142d5b9ccfc8_tuple;
PyObject *const_tuple_str_plain_self_str_plain_args_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_metrics_options_str_plain___class___tuple;
PyObject *const_tuple_str_plain_cert_str_plain_crypto_tuple;
PyObject *const_tuple_str_plain_self_str_plain_cert_path_str_underscore_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_33fae174fe7d12ca00964a83f6559675_tuple;
PyObject *const_tuple_a626036fba7e631f8a688a09ca608736_tuple;
PyObject *const_tuple_str_plain_self_str_plain_use_default_tuple;
PyObject *const_tuple_6e2d9a19b1cccff40ab03794924d36a7_tuple;
PyObject *const_tuple_ec41b572b15b555efd7530ea7d366869_tuple;
PyObject *const_tuple_7d97b446ddc9d50c99f487f737c1051e_tuple;
PyObject *const_tuple_df565bfa2ed372e26ed05a9c6d354be3_tuple;
PyObject *const_tuple_str_plain_self_str_plain_context_str_plain_request_tuple;
PyObject *const_tuple_f70f4061e8ff6b843a0b966e724a06e1_tuple;
PyObject *const_tuple_b2314d996c345952b40be56c3548d8a7_tuple;
PyObject *const_tuple_c740a0ab278c38a6f372f4869d644a7e_tuple;
PyObject *const_tuple_934df02c7b026d6c91f41e2141c56f6a_tuple;
PyObject *const_tuple_str_plain_self_str_plain_request_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[234];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.identity_pool"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_d7bb0385676dfebba595740a21db3a08);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__path);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__format_type);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__subject_token_field_name);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_fe7ae04f7c18fa52103a63a2b68cd266);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__TokenContent);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__parse_token_data);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_content);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__url);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__headers);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_GET);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_method_str_plain_headers_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_int_pos_200);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_d73e23c5fc35c6241680d6b00376b7f8);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__trust_chain_path);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__leaf_cert_callback);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_OpenSSL);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_crypto_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_crypto);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_certificate);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILETYPE_PEM);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__read_trust_chain);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__X509Supplier);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__encode_cert);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_dumps);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_cert_chain);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_41b71f64e17c7459bf42a41660ed2c41_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_aa03b53f00f09b71d5b8d2120793323c_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_aa03b53f00f09b71d5b8d2120793323c);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_certificate_trust_chain);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcc12ad505a3ad9f783548602fc23978);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_41edb2ce37ba5f43cfcb3432eb8d27da);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_base64);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_b64encode);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_dump_certificate);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILETYPE_ASN1);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_loads);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_type_KeyError_type_ValueError_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b1add325ef55cbd411468d2fce02090);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_location);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4193f99ef57bce1ee5e2f79f4f2305ad_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_Credentials);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_audience);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_subject_token_type);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_url);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_credential_source);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidValue);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_713399c1dcd4a18a159b718657c6be2b_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_66894139ab08283cc473c158a3178d3f_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain__subject_token_supplier);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source_file);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source_url);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source_certificate);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source_executable);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_MalformedError);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_aab9fd2126c607247a977a3871bdaf1e_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_certificate_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_environment_id);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_457fc45a6a43cdccd831f3eb13f0fc8a_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_single_source);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_certificate_config);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_file_or_url_config);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain__FileSupplier);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source_format_type);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source_field_name);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain__UrlSupplier);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source_headers);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_cert_bytes);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a7c1997d12345f37718846c154550fb);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_subject_token);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain__supplier_context);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0c9630b3fe06b623b329abf33ae141a3_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain__mtls_helper);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_workload_cert_and_key_paths);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain__certificate_config_location);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_mtls_cert_and_key_paths);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain__read_cert_file);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain__create_default_metrics_options);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_source);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_x509);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_programmatic);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain__constructor_args);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain__has_custom_supplier);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_subject_token_supplier);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_certificate_config_location_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_use_default_certificate_config_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_trust_chain_path_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_498ddaa68e04f91230e9e3198b71b91c_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f7d900600e624b3129d94685e6b4101c_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_str_plain_json_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_07bfc903f8a4c7a140830b9236f68f66);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_subject_token_field_name_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d557b0cdc0911ede4c7ff2c5057c529e_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0951180aed9e1d10b48a27d590ad2d9);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e856526f3714eecc169d56f141ecf292_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ea9d32e98bf8310ce858e8532246114b_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_subject_token_supplier_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_info);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_795355c9624f82b268843b88b9ea35ac);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_file);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_0552ef6c6dae574cab4e51b7e8731be8);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__agent_identity_utils_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain__agent_identity_utils);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_certificate);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_should_request_bound_token);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_calculate_certificate_fingerprint);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain__perform_refresh_token);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cert_fingerprint_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain__handle_trust_boundary);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_aaa21d2925c4b66857e0fc2b4583907f);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_3e330d699e870fc2a5d61526c07c8a09);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Mapping_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_collections);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain__helpers);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_external_account_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_external_account);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_587455d82fd83f874416fce4cf44fc5a);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__mtls_helper_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SubjectTokenSupplier_tuple_empty_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_86c4186cb6e339e309dca99d5150bc7e);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_edd0ed71a61af8cae1450a8b8bf9ef39);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_SubjectTokenSupplier);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_int_pos_55);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_83fa2fb09c64a91f72d0691b6fe5881f);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_07eb69041eecba7732b9a213326a4bd5);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_int_pos_84);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b044300a33409337ed8665a25002633);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_int_pos_95);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_565f6a2dde367206af64d83fe5ebf76c);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy_docstring);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae82c551d25fd9b320028e0d02e2931e);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_2f39796e96a099605feb891db24987b1_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_15b6774c28ad5ed16ac93ad4e5310818);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_int_pos_116);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_28085e64f58791e1c1546e8fcf5a6f5d);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_6562805d29a072ba7f846e87bfc48969);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_tuple_75449aa060f10f3014a37aab2c187130_tuple);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_0b317a9027cf154efa22300da4edfa5a);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_int_pos_146);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4d19d12d24c52430f543e69e2c02f6e);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_13266712e88c28fc4cd19c7c32af4f30);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcac1c7e005916bc64279c7a6d371d56);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3012d37836e9dc4ab7e2b2d4a7e4667);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__trust_chain_path_str_plain__leaf_cert_callback_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_none_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_69ecd93410a2f9cfa37108b5932bf677);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_int_pos_255);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TOKEN_URL);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_retrieve_subject_token);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee5b4eb753af0dbd321c5a140cc652e8);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_e087e1b8cd7e8dc8f155eaa1e6f8bb88);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_fef47d7e9261ac93e0badcfb54f0af55);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain__mtls_required);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_92493e348986cd0510805d06669d9136);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c5e1d2b34a82bcc3493b4fed9f36469);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_223a6dab34ee5dbfcea6cb8787d661a1);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_0942c1edbb706cce2ad2fe70cc0d77a1);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_digest_907a0abfb3c2c3d75700a4b18dcdc202);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_e251ce69338b5d403d8b28add51a2db8);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_digest_73318f5cc89c934919e5a2d5e6c54a02);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_235941431ecb9ca24eb20b88770edeba);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_987cb2208d197b62244cc44a9c8137db);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_fd26d292c07de83cbbf8c7bf66fd7ede_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_digest_10c3934f5117e6faad7e0d817399b49f);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_source_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_digest_92f4fbe446909505f50f46ebd4aedca2);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_f14cc21c2f9a4589befac99f25403777_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_fe65d26b247e1fe4c0110ad94f5913ca_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_b9ed6719291b36d7763209737a9ff383_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_8d4111cfab30b2414e87142d5b9ccfc8_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain___class___tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_metrics_options_str_plain___class___tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cert_str_plain_crypto_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cert_path_str_underscore_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_33fae174fe7d12ca00964a83f6559675_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_a626036fba7e631f8a688a09ca608736_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_use_default_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_6e2d9a19b1cccff40ab03794924d36a7_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_ec41b572b15b555efd7530ea7d366869_tuple);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_7d97b446ddc9d50c99f487f737c1051e_tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_df565bfa2ed372e26ed05a9c6d354be3_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_context_str_plain_request_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_tuple_f70f4061e8ff6b843a0b966e724a06e1_tuple);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_tuple_b2314d996c345952b40be56c3548d8a7_tuple);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_tuple_c740a0ab278c38a6f372f4869d644a7e_tuple);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_tuple_934df02c7b026d6c91f41e2141c56f6a_tuple);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
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
void checkModuleConstants_google$auth$identity_pool(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_d7bb0385676dfebba595740a21db3a08));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d7bb0385676dfebba595740a21db3a08);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__path);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__format_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__format_type);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__subject_token_field_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__subject_token_field_name);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RefreshError);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_fe7ae04f7c18fa52103a63a2b68cd266));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fe7ae04f7c18fa52103a63a2b68cd266);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__TokenContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__TokenContent);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__parse_token_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__parse_token_data);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_content);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__url);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__headers);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_GET));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GET);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_method_str_plain_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_url_str_plain_method_str_plain_headers_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_int_pos_200));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_200);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_d73e23c5fc35c6241680d6b00376b7f8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d73e23c5fc35c6241680d6b00376b7f8);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__trust_chain_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__trust_chain_path);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__leaf_cert_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__leaf_cert_callback);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_OpenSSL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OpenSSL);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_crypto_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_crypto_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_crypto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_crypto);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_certificate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_certificate);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILETYPE_PEM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILETYPE_PEM);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__read_trust_chain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__read_trust_chain);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__X509Supplier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__X509Supplier);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__encode_cert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__encode_cert);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_dumps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dumps);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_cert_chain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cert_chain);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_41b71f64e17c7459bf42a41660ed2c41_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_41b71f64e17c7459bf42a41660ed2c41_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_aa03b53f00f09b71d5b8d2120793323c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_digest_aa03b53f00f09b71d5b8d2120793323c_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_aa03b53f00f09b71d5b8d2120793323c));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_aa03b53f00f09b71d5b8d2120793323c);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_certificate_trust_chain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_certificate_trust_chain);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcc12ad505a3ad9f783548602fc23978));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcc12ad505a3ad9f783548602fc23978);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_41edb2ce37ba5f43cfcb3432eb8d27da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_41edb2ce37ba5f43cfcb3432eb8d27da);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_base64));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base64);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_b64encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_b64encode);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_dump_certificate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dump_certificate);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILETYPE_ASN1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILETYPE_ASN1);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_loads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loads);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_type_KeyError_type_ValueError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_KeyError_type_ValueError_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b1add325ef55cbd411468d2fce02090));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b1add325ef55cbd411468d2fce02090);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_location);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4193f99ef57bce1ee5e2f79f4f2305ad_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_4193f99ef57bce1ee5e2f79f4f2305ad_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_Credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Credentials);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_audience));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_audience);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_subject_token_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subject_token_type);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_url);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_credential_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credential_source);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidValue);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_713399c1dcd4a18a159b718657c6be2b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_713399c1dcd4a18a159b718657c6be2b_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_66894139ab08283cc473c158a3178d3f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_66894139ab08283cc473c158a3178d3f_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain__subject_token_supplier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__subject_token_supplier);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__credential_source_file);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__credential_source_url);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source_certificate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__credential_source_certificate);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source_executable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__credential_source_executable);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_MalformedError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MalformedError);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_aab9fd2126c607247a977a3871bdaf1e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_aab9fd2126c607247a977a3871bdaf1e_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_file_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_url_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_certificate_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_certificate_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_environment_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environment_id);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_457fc45a6a43cdccd831f3eb13f0fc8a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_457fc45a6a43cdccd831f3eb13f0fc8a_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_single_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__validate_single_source);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_certificate_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__validate_certificate_config);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_file_or_url_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__validate_file_or_url_config);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain__FileSupplier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FileSupplier);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source_format_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__credential_source_format_type);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source_field_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__credential_source_field_name);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain__UrlSupplier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UrlSupplier);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__credential_source_headers);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_cert_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_cert_bytes);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a7c1997d12345f37718846c154550fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a7c1997d12345f37718846c154550fb);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_subject_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_subject_token);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain__supplier_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__supplier_context);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0c9630b3fe06b623b329abf33ae141a3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_0c9630b3fe06b623b329abf33ae141a3_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain__mtls_helper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mtls_helper);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_workload_cert_and_key_paths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_workload_cert_and_key_paths);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain__certificate_config_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__certificate_config_location);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_mtls_cert_and_key_paths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_mtls_cert_and_key_paths);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain__read_cert_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__read_cert_file);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain__create_default_metrics_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__create_default_metrics_options);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__credential_source);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_source);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_x509));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x509);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_programmatic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_programmatic);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain__constructor_args));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__constructor_args);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain__has_custom_supplier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__has_custom_supplier);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_subject_token_supplier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subject_token_supplier);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_certificate_config_location_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_certificate_config_location_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_use_default_certificate_config_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_use_default_certificate_config_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_trust_chain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_trust_chain_path_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_498ddaa68e04f91230e9e3198b71b91c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_498ddaa68e04f91230e9e3198b71b91c_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f7d900600e624b3129d94685e6b4101c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_f7d900600e624b3129d94685e6b4101c_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_headers_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_str_plain_json_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_text_str_plain_json_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_07bfc903f8a4c7a140830b9236f68f66));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_07bfc903f8a4c7a140830b9236f68f66);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_subject_token_field_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_subject_token_field_name_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d557b0cdc0911ede4c7ff2c5057c529e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d557b0cdc0911ede4c7ff2c5057c529e_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0951180aed9e1d10b48a27d590ad2d9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a0951180aed9e1d10b48a27d590ad2d9);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e856526f3714eecc169d56f141ecf292_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e856526f3714eecc169d56f141ecf292_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ea9d32e98bf8310ce858e8532246114b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ea9d32e98bf8310ce858e8532246114b_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_subject_token_supplier_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_subject_token_supplier_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_info);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_795355c9624f82b268843b88b9ea35ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_795355c9624f82b268843b88b9ea35ac);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_file);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_0552ef6c6dae574cab4e51b7e8731be8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0552ef6c6dae574cab4e51b7e8731be8);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__agent_identity_utils_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__agent_identity_utils_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain__agent_identity_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__agent_identity_utils);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_certificate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_certificate);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_should_request_bound_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_should_request_bound_token);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_calculate_certificate_fingerprint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_calculate_certificate_fingerprint);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain__perform_refresh_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__perform_refresh_token);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cert_fingerprint_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cert_fingerprint_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain__handle_trust_boundary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__handle_trust_boundary);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_aaa21d2925c4b66857e0fc2b4583907f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aaa21d2925c4b66857e0fc2b4583907f);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_3e330d699e870fc2a5d61526c07c8a09));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3e330d699e870fc2a5d61526c07c8a09);
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
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NamedTuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__helpers_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain__helpers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__helpers);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_external_account_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_external_account_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_external_account));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_external_account);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_587455d82fd83f874416fce4cf44fc5a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_587455d82fd83f874416fce4cf44fc5a);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__mtls_helper_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__mtls_helper_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metaclass);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABCMeta);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SubjectTokenSupplier_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SubjectTokenSupplier_tuple_empty_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_86c4186cb6e339e309dca99d5150bc7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86c4186cb6e339e309dca99d5150bc7e);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_edd0ed71a61af8cae1450a8b8bf9ef39));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_edd0ed71a61af8cae1450a8b8bf9ef39);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_SubjectTokenSupplier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SubjectTokenSupplier);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_int_pos_55));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_55);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_83fa2fb09c64a91f72d0691b6fe5881f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_83fa2fb09c64a91f72d0691b6fe5881f);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_07eb69041eecba7732b9a213326a4bd5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_07eb69041eecba7732b9a213326a4bd5);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_int_pos_84));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_84);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b044300a33409337ed8665a25002633));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b044300a33409337ed8665a25002633);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_int_pos_95));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_95);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_565f6a2dde367206af64d83fe5ebf76c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_565f6a2dde367206af64d83fe5ebf76c);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy_docstring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy_docstring);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae82c551d25fd9b320028e0d02e2931e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae82c551d25fd9b320028e0d02e2931e);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_2f39796e96a099605feb891db24987b1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2f39796e96a099605feb891db24987b1_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_15b6774c28ad5ed16ac93ad4e5310818));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_15b6774c28ad5ed16ac93ad4e5310818);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_int_pos_116));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_116);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_28085e64f58791e1c1546e8fcf5a6f5d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28085e64f58791e1c1546e8fcf5a6f5d);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_6562805d29a072ba7f846e87bfc48969));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6562805d29a072ba7f846e87bfc48969);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_tuple_75449aa060f10f3014a37aab2c187130_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_75449aa060f10f3014a37aab2c187130_tuple);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_0b317a9027cf154efa22300da4edfa5a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0b317a9027cf154efa22300da4edfa5a);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_int_pos_146));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_146);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4d19d12d24c52430f543e69e2c02f6e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d4d19d12d24c52430f543e69e2c02f6e);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_13266712e88c28fc4cd19c7c32af4f30));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_13266712e88c28fc4cd19c7c32af4f30);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcac1c7e005916bc64279c7a6d371d56));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcac1c7e005916bc64279c7a6d371d56);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3012d37836e9dc4ab7e2b2d4a7e4667));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3012d37836e9dc4ab7e2b2d4a7e4667);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__trust_chain_path_str_plain__leaf_cert_callback_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__trust_chain_path_str_plain__leaf_cert_callback_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_text_none_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_69ecd93410a2f9cfa37108b5932bf677));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_69ecd93410a2f9cfa37108b5932bf677);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_int_pos_255));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_255);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TOKEN_URL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DEFAULT_TOKEN_URL);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_retrieve_subject_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retrieve_subject_token);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee5b4eb753af0dbd321c5a140cc652e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee5b4eb753af0dbd321c5a140cc652e8);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_e087e1b8cd7e8dc8f155eaa1e6f8bb88));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e087e1b8cd7e8dc8f155eaa1e6f8bb88);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_fef47d7e9261ac93e0badcfb54f0af55));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fef47d7e9261ac93e0badcfb54f0af55);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain__mtls_required));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mtls_required);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_92493e348986cd0510805d06669d9136));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_92493e348986cd0510805d06669d9136);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c5e1d2b34a82bcc3493b4fed9f36469));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c5e1d2b34a82bcc3493b4fed9f36469);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_223a6dab34ee5dbfcea6cb8787d661a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_223a6dab34ee5dbfcea6cb8787d661a1);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_0942c1edbb706cce2ad2fe70cc0d77a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0942c1edbb706cce2ad2fe70cc0d77a1);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_digest_907a0abfb3c2c3d75700a4b18dcdc202));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_907a0abfb3c2c3d75700a4b18dcdc202);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_e251ce69338b5d403d8b28add51a2db8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e251ce69338b5d403d8b28add51a2db8);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_digest_73318f5cc89c934919e5a2d5e6c54a02));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_73318f5cc89c934919e5a2d5e6c54a02);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_235941431ecb9ca24eb20b88770edeba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_235941431ecb9ca24eb20b88770edeba);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_987cb2208d197b62244cc44a9c8137db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_987cb2208d197b62244cc44a9c8137db);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_fd26d292c07de83cbbf8c7bf66fd7ede_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fd26d292c07de83cbbf8c7bf66fd7ede_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_digest_10c3934f5117e6faad7e0d817399b49f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_10c3934f5117e6faad7e0d817399b49f);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_source_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_source_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_digest_92f4fbe446909505f50f46ebd4aedca2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_92f4fbe446909505f50f46ebd4aedca2);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_f14cc21c2f9a4589befac99f25403777_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f14cc21c2f9a4589befac99f25403777_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_fe65d26b247e1fe4c0110ad94f5913ca_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fe65d26b247e1fe4c0110ad94f5913ca_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_b9ed6719291b36d7763209737a9ff383_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b9ed6719291b36d7763209737a9ff383_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_8d4111cfab30b2414e87142d5b9ccfc8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8d4111cfab30b2414e87142d5b9ccfc8_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain___class___tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_metrics_options_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_metrics_options_str_plain___class___tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cert_str_plain_crypto_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cert_str_plain_crypto_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cert_path_str_underscore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_cert_path_str_underscore_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_33fae174fe7d12ca00964a83f6559675_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_33fae174fe7d12ca00964a83f6559675_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_a626036fba7e631f8a688a09ca608736_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a626036fba7e631f8a688a09ca608736_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_use_default_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_use_default_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_6e2d9a19b1cccff40ab03794924d36a7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6e2d9a19b1cccff40ab03794924d36a7_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_ec41b572b15b555efd7530ea7d366869_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ec41b572b15b555efd7530ea7d366869_tuple);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_7d97b446ddc9d50c99f487f737c1051e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7d97b446ddc9d50c99f487f737c1051e_tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_df565bfa2ed372e26ed05a9c6d354be3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_df565bfa2ed372e26ed05a9c6d354be3_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_context_str_plain_request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_context_str_plain_request_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_tuple_f70f4061e8ff6b843a0b966e724a06e1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f70f4061e8ff6b843a0b966e724a06e1_tuple);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_tuple_b2314d996c345952b40be56c3548d8a7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b2314d996c345952b40be56c3548d8a7_tuple);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_tuple_c740a0ab278c38a6f372f4869d644a7e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c740a0ab278c38a6f372f4869d644a7e_tuple);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_tuple_934df02c7b026d6c91f41e2141c56f6a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_934df02c7b026d6c91f41e2141c56f6a_tuple);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 17
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
static PyObject *module_var_accessor_google$auth$identity_pool$Credentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$identity_pool$Mapping(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$identity_pool$NamedTuple(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NamedTuple);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NamedTuple, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NamedTuple);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NamedTuple, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$identity_pool$SubjectTokenSupplier(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_SubjectTokenSupplier);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SubjectTokenSupplier);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SubjectTokenSupplier, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SubjectTokenSupplier);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SubjectTokenSupplier, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_SubjectTokenSupplier);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_SubjectTokenSupplier);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SubjectTokenSupplier);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$identity_pool$_FileSupplier(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__FileSupplier);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FileSupplier);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FileSupplier, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FileSupplier);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FileSupplier, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__FileSupplier);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__FileSupplier);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__FileSupplier);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$identity_pool$_TokenContent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__TokenContent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TokenContent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TokenContent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TokenContent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TokenContent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__TokenContent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__TokenContent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__TokenContent);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$identity_pool$_UrlSupplier(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__UrlSupplier);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__UrlSupplier);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__UrlSupplier, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__UrlSupplier);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__UrlSupplier, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__UrlSupplier);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__UrlSupplier);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__UrlSupplier);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$identity_pool$_X509Supplier(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__X509Supplier);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__X509Supplier);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__X509Supplier, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__X509Supplier);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__X509Supplier, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__X509Supplier);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__X509Supplier);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__X509Supplier);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$identity_pool$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$identity_pool$_helpers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$identity_pool$_mtls_helper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__mtls_helper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__mtls_helper);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__mtls_helper, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__mtls_helper);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__mtls_helper, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__mtls_helper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__mtls_helper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__mtls_helper);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$identity_pool$_parse_token_data(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_token_data);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__parse_token_data);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__parse_token_data, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__parse_token_data);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__parse_token_data, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_token_data);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_token_data);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_token_data);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$identity_pool$abc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$identity_pool$base64(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base64);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base64, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base64);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base64, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$identity_pool$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$identity_pool$external_account(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_external_account);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_external_account);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_external_account);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_external_account);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$identity_pool$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$identity_pool->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$identity_pool->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$identity_pool->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_326497e5c561ab7710ec9974e4dce4f4;
static PyCodeObject *code_objects_cd3c5be9d349be9203f49250f9a7f32f;
static PyCodeObject *code_objects_a09f619201e1e91c3aad5b90f5e73de1;
static PyCodeObject *code_objects_8e7613bf44088d352933576a7f9f58e4;
static PyCodeObject *code_objects_ad6fb66ba82b9afe8d1d4ede1c45bea2;
static PyCodeObject *code_objects_92a5d9942d421769ba86c2705c1bf7b4;
static PyCodeObject *code_objects_c43d7d67f07bbac7dd0cf52d2330ae7f;
static PyCodeObject *code_objects_02fd4e308b1373708982e91063cc22c5;
static PyCodeObject *code_objects_b2b58dd9c5b09569f31ee2ef7ae30965;
static PyCodeObject *code_objects_ec77a0ef3a36b001363de1ed85e30e38;
static PyCodeObject *code_objects_ef4feaf2f871972832a50a97189e4eb3;
static PyCodeObject *code_objects_5e5b43dc9dc316fb50574f118b548d73;
static PyCodeObject *code_objects_15f0f7c3c14c0d1aeaed1270a87b57d9;
static PyCodeObject *code_objects_5808ed73e669ce90cb56ca1260af82bc;
static PyCodeObject *code_objects_9964c12e4a68006ad471a9bdb64a9b9a;
static PyCodeObject *code_objects_dae4cb4e8c7f446797a7c84c8544b05a;
static PyCodeObject *code_objects_c0ad230b8c3dbaf1b8c3f06f7777f2b3;
static PyCodeObject *code_objects_3daa972c1b33f0b036ec286985b42979;
static PyCodeObject *code_objects_c5fdc3de921d77a450471772d878f991;
static PyCodeObject *code_objects_51729947816d948afc79be967f5716bb;
static PyCodeObject *code_objects_c97f0ab34b35d9065c996ec4633b04d7;
static PyCodeObject *code_objects_95a3dfb3d19fe093b4fd7b5604b1524b;
static PyCodeObject *code_objects_cf25671faa8a54be4d944f1ca372b9d8;
static PyCodeObject *code_objects_4236cf8e1da87458b897c4f1f4f64388;
static PyCodeObject *code_objects_e77313cd72090689e1a1ce8474eea28e;
static PyCodeObject *code_objects_f576cadbe30f306e3a5908bcf48e230d;
static PyCodeObject *code_objects_0c4747525292e6fc075706b51f68da3b;
static PyCodeObject *code_objects_8f2708364ac545e5e82cc0f869583403;
static PyCodeObject *code_objects_608ef8c274465fb8076cee66d14cfd1c;
static PyCodeObject *code_objects_c2c39736953ec7ea172e9a9de1b20c68;
static PyCodeObject *code_objects_4863e2715d89bcdf591333149a8a5d49;
static PyCodeObject *code_objects_f37a76cf542dfa5ca57b4f6cc2c8d785;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_10c3934f5117e6faad7e0d817399b49f); CHECK_OBJECT(module_filename_obj);
code_objects_326497e5c561ab7710ec9974e4dce4f4 = MAKE_CODE_OBJECT(module_filename_obj, 493, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_a0951180aed9e1d10b48a27d590ad2d9, mod_consts.const_tuple_str_plain_source_tuple, NULL, 1, 0, 0);
code_objects_cd3c5be9d349be9203f49250f9a7f32f = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_92f4fbe446909505f50f46ebd4aedca2, mod_consts.const_str_digest_92f4fbe446909505f50f46ebd4aedca2, NULL, NULL, 0, 0, 0);
code_objects_a09f619201e1e91c3aad5b90f5e73de1 = MAKE_CODE_OBJECT(module_filename_obj, 255, 0, mod_consts.const_str_plain_Credentials, mod_consts.const_str_plain_Credentials, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8e7613bf44088d352933576a7f9f58e4 = MAKE_CODE_OBJECT(module_filename_obj, 55, 0, mod_consts.const_str_plain_SubjectTokenSupplier, mod_consts.const_str_plain_SubjectTokenSupplier, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ad6fb66ba82b9afe8d1d4ede1c45bea2 = MAKE_CODE_OBJECT(module_filename_obj, 95, 0, mod_consts.const_str_plain__FileSupplier, mod_consts.const_str_plain__FileSupplier, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_92a5d9942d421769ba86c2705c1bf7b4 = MAKE_CODE_OBJECT(module_filename_obj, 84, 0, mod_consts.const_str_plain__TokenContent, mod_consts.const_str_plain__TokenContent, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c43d7d67f07bbac7dd0cf52d2330ae7f = MAKE_CODE_OBJECT(module_filename_obj, 116, 0, mod_consts.const_str_plain__UrlSupplier, mod_consts.const_str_plain__UrlSupplier, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_02fd4e308b1373708982e91063cc22c5 = MAKE_CODE_OBJECT(module_filename_obj, 146, 0, mod_consts.const_str_plain__X509Supplier, mod_consts.const_str_plain__X509Supplier, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b2b58dd9c5b09569f31ee2ef7ae30965 = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd, mod_consts.const_tuple_f14cc21c2f9a4589befac99f25403777_tuple, NULL, 6, 0, 0);
code_objects_ec77a0ef3a36b001363de1ed85e30e38 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_565f6a2dde367206af64d83fe5ebf76c, mod_consts.const_tuple_fe65d26b247e1fe4c0110ad94f5913ca_tuple, NULL, 4, 0, 0);
code_objects_ef4feaf2f871972832a50a97189e4eb3 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_28085e64f58791e1c1546e8fcf5a6f5d, mod_consts.const_tuple_b9ed6719291b36d7763209737a9ff383_tuple, NULL, 5, 0, 0);
code_objects_5e5b43dc9dc316fb50574f118b548d73 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_d4d19d12d24c52430f543e69e2c02f6e, mod_consts.const_tuple_8d4111cfab30b2414e87142d5b9ccfc8_tuple, NULL, 3, 0, 0);
code_objects_15f0f7c3c14c0d1aeaed1270a87b57d9 = MAKE_CODE_OBJECT(module_filename_obj, 434, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__constructor_args, mod_consts.const_str_digest_0942c1edbb706cce2ad2fe70cc0d77a1, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain___class___tuple, NULL, 1, 0, 0);
code_objects_5808ed73e669ce90cb56ca1260af82bc = MAKE_CODE_OBJECT(module_filename_obj, 415, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__create_default_metrics_options, mod_consts.const_str_digest_4c5e1d2b34a82bcc3493b4fed9f36469, mod_consts.const_tuple_str_plain_self_str_plain_metrics_options_str_plain___class___tuple, NULL, 1, 0, 0);
code_objects_9964c12e4a68006ad471a9bdb64a9b9a = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__encode_cert, mod_consts.const_str_digest_c3012d37836e9dc4ab7e2b2d4a7e4667, mod_consts.const_tuple_str_plain_cert_str_plain_crypto_tuple, NULL, 1, 0, 0);
code_objects_dae4cb4e8c7f446797a7c84c8544b05a = MAKE_CODE_OBJECT(module_filename_obj, 408, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_cert_bytes, mod_consts.const_str_digest_fef47d7e9261ac93e0badcfb54f0af55, mod_consts.const_tuple_str_plain_self_str_plain_cert_path_str_underscore_tuple, NULL, 1, 0, 0);
code_objects_c0ad230b8c3dbaf1b8c3f06f7777f2b3 = MAKE_CODE_OBJECT(module_filename_obj, 398, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_mtls_cert_and_key_paths, mod_consts.const_str_digest_e087e1b8cd7e8dc8f155eaa1e6f8bb88, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3daa972c1b33f0b036ec286985b42979 = MAKE_CODE_OBJECT(module_filename_obj, 431, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__has_custom_supplier, mod_consts.const_str_digest_223a6dab34ee5dbfcea6cb8787d661a1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c5fdc3de921d77a450471772d878f991 = MAKE_CODE_OBJECT(module_filename_obj, 412, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__mtls_required, mod_consts.const_str_digest_92493e348986cd0510805d06669d9136, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_51729947816d948afc79be967f5716bb = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__parse_token_data, mod_consts.const_str_plain__parse_token_data, mod_consts.const_tuple_33fae174fe7d12ca00964a83f6559675_tuple, NULL, 3, 0, 0);
code_objects_c97f0ab34b35d9065c996ec4633b04d7 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__read_trust_chain, mod_consts.const_str_digest_dcac1c7e005916bc64279c7a6d371d56, mod_consts.const_tuple_a626036fba7e631f8a688a09ca608736_tuple, NULL, 1, 0, 0);
code_objects_95a3dfb3d19fe093b4fd7b5604b1524b = MAKE_CODE_OBJECT(module_filename_obj, 441, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__validate_certificate_config, mod_consts.const_str_digest_907a0abfb3c2c3d75700a4b18dcdc202, mod_consts.const_tuple_str_plain_self_str_plain_use_default_tuple, NULL, 1, 0, 0);
code_objects_cf25671faa8a54be4d944f1ca372b9d8 = MAKE_CODE_OBJECT(module_filename_obj, 460, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__validate_file_or_url_config, mod_consts.const_str_digest_e251ce69338b5d403d8b28add51a2db8, mod_consts.const_tuple_6e2d9a19b1cccff40ab03794924d36a7_tuple, NULL, 2, 0, 0);
code_objects_4236cf8e1da87458b897c4f1f4f64388 = MAKE_CODE_OBJECT(module_filename_obj, 486, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__validate_single_source, mod_consts.const_str_digest_73318f5cc89c934919e5a2d5e6c54a02, mod_consts.const_tuple_ec41b572b15b555efd7530ea7d366869_tuple, NULL, 1, 0, 0);
code_objects_e77313cd72090689e1a1ce8474eea28e = MAKE_CODE_OBJECT(module_filename_obj, 534, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_from_file, mod_consts.const_str_digest_987cb2208d197b62244cc44a9c8137db, mod_consts.const_tuple_7d97b446ddc9d50c99f487f737c1051e_tuple, NULL, 2, 0, 0);
code_objects_f576cadbe30f306e3a5908bcf48e230d = MAKE_CODE_OBJECT(module_filename_obj, 506, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_from_info, mod_consts.const_str_digest_235941431ecb9ca24eb20b88770edeba, mod_consts.const_tuple_df565bfa2ed372e26ed05a9c6d354be3_tuple, NULL, 2, 0, 0);
code_objects_0c4747525292e6fc075706b51f68da3b = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_subject_token, mod_consts.const_str_digest_83fa2fb09c64a91f72d0691b6fe5881f, mod_consts.const_tuple_str_plain_self_str_plain_context_str_plain_request_tuple, NULL, 3, 0, 0);
code_objects_8f2708364ac545e5e82cc0f869583403 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_subject_token, mod_consts.const_str_digest_ae82c551d25fd9b320028e0d02e2931e, mod_consts.const_tuple_f70f4061e8ff6b843a0b966e724a06e1_tuple, NULL, 3, 0, 0);
code_objects_608ef8c274465fb8076cee66d14cfd1c = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_subject_token, mod_consts.const_str_digest_6562805d29a072ba7f846e87bfc48969, mod_consts.const_tuple_b2314d996c345952b40be56c3548d8a7_tuple, NULL, 3, 0, 0);
code_objects_c2c39736953ec7ea172e9a9de1b20c68 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_subject_token, mod_consts.const_str_digest_13266712e88c28fc4cd19c7c32af4f30, mod_consts.const_tuple_c740a0ab278c38a6f372f4869d644a7e_tuple, NULL, 3, 0, 0);
code_objects_4863e2715d89bcdf591333149a8a5d49 = MAKE_CODE_OBJECT(module_filename_obj, 555, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_refresh, mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75, mod_consts.const_tuple_934df02c7b026d6c91f41e2141c56f6a_tuple, NULL, 2, 0, 0);
code_objects_f37a76cf542dfa5ca57b4f6cc2c8d785 = MAKE_CODE_OBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_retrieve_subject_token, mod_consts.const_str_digest_ee5b4eb753af0dbd321c5a140cc652e8, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__10__parse_token_data(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__11___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__12_retrieve_subject_token(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__14__get_cert_bytes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__15__mtls_required(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__16__create_default_metrics_options(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__17__has_custom_supplier(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__18__constructor_args(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__19__validate_certificate_config(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__1_get_subject_token(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__20__validate_file_or_url_config(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__21__validate_single_source(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__21__validate_single_source$$$function__1_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__22_from_info(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__23_from_file(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__24_refresh(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__2___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__3_get_subject_token(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__4___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__5_get_subject_token(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__6___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__7_get_subject_token(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__8__read_trust_chain(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__9__encode_cert(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_google$auth$identity_pool$$$function__1_get_subject_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_context = python_pars[1];
PyObject *par_request = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__1_get_subject_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__1_get_subject_token = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__1_get_subject_token)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__1_get_subject_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__1_get_subject_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__1_get_subject_token = MAKE_FUNCTION_FRAME(tstate, code_objects_0c4747525292e6fc075706b51f68da3b, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__1_get_subject_token->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__1_get_subject_token = cache_frame_frame_google$auth$identity_pool$$$function__1_get_subject_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__1_get_subject_token);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__1_get_subject_token) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = const_str_empty;
frame_frame_google$auth$identity_pool$$$function__1_get_subject_token->m_frame.f_lineno = 81;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 81;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__1_get_subject_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__1_get_subject_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__1_get_subject_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__1_get_subject_token,
    type_description_1,
    par_self,
    par_context,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__1_get_subject_token == cache_frame_frame_google$auth$identity_pool$$$function__1_get_subject_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__1_get_subject_token);
    cache_frame_frame_google$auth$identity_pool$$$function__1_get_subject_token = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__1_get_subject_token);

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


static PyObject *impl_google$auth$identity_pool$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *par_format_type = python_pars[2];
PyObject *par_subject_token_field_name = python_pars[3];
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ec77a0ef3a36b001363de1ed85e30e38, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__2___init__->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__2___init__ = cache_frame_frame_google$auth$identity_pool$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__2___init__);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_path);
tmp_assattr_value_1 = par_path;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__path, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_format_type);
tmp_assattr_value_2 = par_format_type;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__format_type, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_subject_token_field_name);
tmp_assattr_value_3 = par_subject_token_field_name;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__subject_token_field_name, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__2___init__,
    type_description_1,
    par_self,
    par_path,
    par_format_type,
    par_subject_token_field_name
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__2___init__ == cache_frame_frame_google$auth$identity_pool$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__2___init__);
    cache_frame_frame_google$auth$identity_pool$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__2___init__);

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
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_format_type);
Py_DECREF(par_format_type);
CHECK_OBJECT(par_subject_token_field_name);
Py_DECREF(par_subject_token_field_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_format_type);
Py_DECREF(par_format_type);
CHECK_OBJECT(par_subject_token_field_name);
Py_DECREF(par_subject_token_field_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$identity_pool$$$function__3_get_subject_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_context = python_pars[1];
PyObject *par_request = python_pars[2];
PyObject *var_file_obj = NULL;
PyObject *var_token_content = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__3_get_subject_token;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__3_get_subject_token = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__3_get_subject_token)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__3_get_subject_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__3_get_subject_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__3_get_subject_token = MAKE_FUNCTION_FRAME(tstate, code_objects_8f2708364ac545e5e82cc0f869583403, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__3_get_subject_token->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__3_get_subject_token = cache_frame_frame_google$auth$identity_pool$$$function__3_get_subject_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__3_get_subject_token);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__3_get_subject_token) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_exists_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_exists_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__path);
if (tmp_exists_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_1);
CHECK_OBJECT(tmp_exists_arg_1);
Py_DECREF(tmp_exists_arg_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_fe7ae04f7c18fa52103a63a2b68cd266;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__path);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 106;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__3_get_subject_token->m_frame.f_lineno = 106;
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

exception_lineno = 106;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__3_get_subject_token->m_frame.f_lineno = 106;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 106;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_open_filename_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_open_mode_1;
PyObject *tmp_open_encoding_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_open_filename_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__path);
if (tmp_open_filename_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_open_mode_1 = const_str_plain_r;
tmp_open_encoding_1 = mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb;
tmp_assign_source_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, tmp_open_encoding_1, NULL, NULL, NULL, NULL);
CHECK_OBJECT(tmp_open_filename_1);
Py_DECREF(tmp_open_filename_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_5 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$identity_pool$$$function__3_get_subject_token->m_frame.f_lineno = 108;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_6 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
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
assert(var_file_obj == NULL);
Py_INCREF(tmp_assign_source_5);
var_file_obj = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_7;
tmp_called_value_3 = module_var_accessor_google$auth$identity_pool$_TokenContent(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__TokenContent);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_file_obj);
tmp_called_instance_1 = var_file_obj;
frame_frame_google$auth$identity_pool$$$function__3_get_subject_token->m_frame.f_lineno = 109;
tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_read);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__path);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 109;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
frame_frame_google$auth$identity_pool$$$function__3_get_subject_token->m_frame.f_lineno = 109;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
assert(var_token_content == NULL);
var_token_content = tmp_assign_source_6;
}
goto try_end_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__3_get_subject_token, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__3_get_subject_token, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_7;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
frame_frame_google$auth$identity_pool$$$function__3_get_subject_token->m_frame.f_lineno = 108;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
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
    exception_lineno = 108;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$identity_pool$$$function__3_get_subject_token->m_frame)) {
        frame_frame_google$auth$identity_pool$$$function__3_get_subject_token->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_5;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 108;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$identity_pool$$$function__3_get_subject_token->m_frame)) {
        frame_frame_google$auth$identity_pool$$$function__3_get_subject_token->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_5;
branch_end_2:;
goto try_end_2;
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
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
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
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_google$auth$identity_pool$$$function__3_get_subject_token->m_frame.f_lineno = 108;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 108;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
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
frame_frame_google$auth$identity_pool$$$function__3_get_subject_token->m_frame.f_lineno = 108;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
goto try_end_4;
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
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_9;
tmp_called_value_7 = module_var_accessor_google$auth$identity_pool$_parse_token_data(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__parse_token_data);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (var_token_content == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token_content);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 112;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = var_token_content;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__format_type);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__subject_token_field_name);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 112;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__3_get_subject_token->m_frame.f_lineno = 111;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__3_get_subject_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__3_get_subject_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__3_get_subject_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__3_get_subject_token,
    type_description_1,
    par_self,
    par_context,
    par_request,
    var_file_obj,
    var_token_content
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__3_get_subject_token == cache_frame_frame_google$auth$identity_pool$$$function__3_get_subject_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__3_get_subject_token);
    cache_frame_frame_google$auth$identity_pool$$$function__3_get_subject_token = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__3_get_subject_token);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_file_obj);
CHECK_OBJECT(var_file_obj);
Py_DECREF(var_file_obj);
var_file_obj = NULL;
Py_XDECREF(var_token_content);
var_token_content = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_file_obj);
var_file_obj = NULL;
Py_XDECREF(var_token_content);
var_token_content = NULL;
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


static PyObject *impl_google$auth$identity_pool$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_url = python_pars[1];
PyObject *par_format_type = python_pars[2];
PyObject *par_subject_token_field_name = python_pars[3];
PyObject *par_headers = python_pars[4];
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ef4feaf2f871972832a50a97189e4eb3, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__4___init__->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__4___init__ = cache_frame_frame_google$auth$identity_pool$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__4___init__);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_url);
tmp_assattr_value_1 = par_url;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__url, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_format_type);
tmp_assattr_value_2 = par_format_type;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__format_type, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_subject_token_field_name);
tmp_assattr_value_3 = par_subject_token_field_name;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__subject_token_field_name, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_headers);
tmp_assattr_value_4 = par_headers;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__headers, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__4___init__,
    type_description_1,
    par_self,
    par_url,
    par_format_type,
    par_subject_token_field_name,
    par_headers
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__4___init__ == cache_frame_frame_google$auth$identity_pool$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__4___init__);
    cache_frame_frame_google$auth$identity_pool$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__4___init__);

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
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_format_type);
Py_DECREF(par_format_type);
CHECK_OBJECT(par_subject_token_field_name);
Py_DECREF(par_subject_token_field_name);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_format_type);
Py_DECREF(par_format_type);
CHECK_OBJECT(par_subject_token_field_name);
Py_DECREF(par_subject_token_field_name);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$identity_pool$$$function__5_get_subject_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_context = python_pars[1];
PyObject *par_request = python_pars[2];
PyObject *var_response = NULL;
PyObject *var_response_body = NULL;
PyObject *var_token_content = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__5_get_subject_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__5_get_subject_token = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__5_get_subject_token)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__5_get_subject_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__5_get_subject_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__5_get_subject_token = MAKE_FUNCTION_FRAME(tstate, code_objects_608ef8c274465fb8076cee66d14cfd1c, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__5_get_subject_token->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__5_get_subject_token = cache_frame_frame_google$auth$identity_pool$$$function__5_get_subject_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__5_get_subject_token);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__5_get_subject_token) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_request);
tmp_called_value_1 = par_request;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__url);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = mod_consts.const_str_plain_GET;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__headers);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 127;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__5_get_subject_token->m_frame.f_lineno = 127;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_url_str_plain_method_str_plain_headers_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_response == NULL);
var_response = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
bool tmp_condition_result_1;
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


exception_lineno = 132;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
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


exception_lineno = 131;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__5_get_subject_token->m_frame.f_lineno = 131;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_response);
tmp_expression_value_7 = var_response;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_data);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_response_body == NULL);
var_response_body = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_response);
tmp_expression_value_8 = var_response;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_200;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
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
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 137;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_d73e23c5fc35c6241680d6b00376b7f8;
CHECK_OBJECT(var_response_body);
tmp_args_element_value_2 = var_response_body;
frame_frame_google$auth$identity_pool$$$function__5_get_subject_token->m_frame.f_lineno = 137;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_raise_type_input_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_RefreshError,
        call_args
    );
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 137;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_9;
tmp_called_value_3 = module_var_accessor_google$auth$identity_pool$_TokenContent(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__TokenContent);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response_body);
tmp_args_element_value_3 = var_response_body;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__url);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__5_get_subject_token->m_frame.f_lineno = 140;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_token_content == NULL);
var_token_content = tmp_assign_source_3;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_11;
tmp_called_value_4 = module_var_accessor_google$auth$identity_pool$_parse_token_data(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__parse_token_data);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_token_content);
tmp_args_element_value_5 = var_token_content;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__format_type);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__subject_token_field_name);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 142;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__5_get_subject_token->m_frame.f_lineno = 141;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__5_get_subject_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__5_get_subject_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__5_get_subject_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__5_get_subject_token,
    type_description_1,
    par_self,
    par_context,
    par_request,
    var_response,
    var_response_body,
    var_token_content
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__5_get_subject_token == cache_frame_frame_google$auth$identity_pool$$$function__5_get_subject_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__5_get_subject_token);
    cache_frame_frame_google$auth$identity_pool$$$function__5_get_subject_token = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__5_get_subject_token);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_response);
CHECK_OBJECT(var_response);
Py_DECREF(var_response);
var_response = NULL;
CHECK_OBJECT(var_response_body);
CHECK_OBJECT(var_response_body);
Py_DECREF(var_response_body);
var_response_body = NULL;
CHECK_OBJECT(var_token_content);
CHECK_OBJECT(var_token_content);
Py_DECREF(var_token_content);
var_token_content = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_response_body);
var_response_body = NULL;
Py_XDECREF(var_token_content);
var_token_content = NULL;
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


static PyObject *impl_google$auth$identity_pool$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_trust_chain_path = python_pars[1];
PyObject *par_leaf_cert_callback = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__6___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__6___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__6___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__6___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__6___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__6___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5e5b43dc9dc316fb50574f118b548d73, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__6___init__->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__6___init__ = cache_frame_frame_google$auth$identity_pool$$$function__6___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__6___init__);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__6___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_trust_chain_path);
tmp_assattr_value_1 = par_trust_chain_path;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__trust_chain_path, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_leaf_cert_callback);
tmp_assattr_value_2 = par_leaf_cert_callback;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__leaf_cert_callback, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__6___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__6___init__,
    type_description_1,
    par_self,
    par_trust_chain_path,
    par_leaf_cert_callback
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__6___init__ == cache_frame_frame_google$auth$identity_pool$$$function__6___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__6___init__);
    cache_frame_frame_google$auth$identity_pool$$$function__6___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__6___init__);

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
CHECK_OBJECT(par_trust_chain_path);
Py_DECREF(par_trust_chain_path);
CHECK_OBJECT(par_leaf_cert_callback);
Py_DECREF(par_leaf_cert_callback);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_trust_chain_path);
Py_DECREF(par_trust_chain_path);
CHECK_OBJECT(par_leaf_cert_callback);
Py_DECREF(par_leaf_cert_callback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$identity_pool$$$function__7_get_subject_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_context = python_pars[1];
PyObject *par_request = python_pars[2];
PyObject *var_crypto = NULL;
PyObject *var_leaf_cert = NULL;
PyObject *var_trust_chain = NULL;
PyObject *var_cert_chain = NULL;
PyObject *var_first_cert = NULL;
PyObject *var_i = NULL;
PyObject *var_encoded = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__7_get_subject_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__7_get_subject_token = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__7_get_subject_token)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__7_get_subject_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__7_get_subject_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__7_get_subject_token = MAKE_FUNCTION_FRAME(tstate, code_objects_c2c39736953ec7ea172e9a9de1b20c68, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__7_get_subject_token->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__7_get_subject_token = cache_frame_frame_google$auth$identity_pool$$$function__7_get_subject_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__7_get_subject_token);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__7_get_subject_token) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_OpenSSL;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$identity_pool;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_crypto_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$identity_pool$$$function__7_get_subject_token->m_frame.f_lineno = 157;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$identity_pool,
        mod_consts.const_str_plain_crypto,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_crypto);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_crypto == NULL);
var_crypto = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_crypto);
tmp_expression_value_1 = var_crypto;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_load_certificate);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_crypto);
tmp_expression_value_2 = var_crypto;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_FILETYPE_PEM);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 160;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_google$auth$identity_pool$$$function__7_get_subject_token->m_frame.f_lineno = 160;
tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__leaf_cert_callback);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 160;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__7_get_subject_token->m_frame.f_lineno = 159;
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


exception_lineno = 159;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_leaf_cert == NULL);
var_leaf_cert = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_google$auth$identity_pool$$$function__7_get_subject_token->m_frame.f_lineno = 162;
tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__read_trust_chain);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_trust_chain == NULL);
var_trust_chain = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_cert_chain == NULL);
var_cert_chain = tmp_assign_source_4;
}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_cert_chain);
tmp_list_arg_value_1 = var_cert_chain;
tmp_called_instance_3 = module_var_accessor_google$auth$identity_pool$_X509Supplier(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__X509Supplier);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_leaf_cert);
tmp_args_element_value_3 = var_leaf_cert;
frame_frame_google$auth$identity_pool$$$function__7_get_subject_token->m_frame.f_lineno = 165;
tmp_item_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain__encode_cert, tmp_args_element_value_3);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
bool tmp_condition_result_1;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_trust_chain);
tmp_cmp_expr_left_1 = var_trust_chain;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_trust_chain);
tmp_len_arg_1 = var_trust_chain;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 0;
tmp_or_right_value_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_4;
tmp_called_instance_4 = module_var_accessor_google$auth$identity_pool$json(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cert_chain);
tmp_args_element_value_4 = var_cert_chain;
frame_frame_google$auth$identity_pool$$$function__7_get_subject_token->m_frame.f_lineno = 168;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_dumps, tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
tmp_expression_value_3 = module_var_accessor_google$auth$identity_pool$_X509Supplier(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__X509Supplier);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__encode_cert);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_trust_chain);
tmp_expression_value_4 = var_trust_chain;
tmp_subscript_value_1 = const_int_0;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 171;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__7_get_subject_token->m_frame.f_lineno = 171;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_first_cert == NULL);
var_first_cert = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_first_cert);
tmp_cmp_expr_left_3 = var_first_cert;
CHECK_OBJECT(var_cert_chain);
tmp_expression_value_5 = var_cert_chain;
tmp_subscript_value_2 = const_int_0;
tmp_cmp_expr_right_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, 0);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooooo";
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
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
CHECK_OBJECT(var_cert_chain);
tmp_list_arg_value_2 = var_cert_chain;
CHECK_OBJECT(var_first_cert);
tmp_item_value_2 = var_first_cert;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_no_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_len_arg_2;
tmp_xrange_low_1 = const_int_pos_1;
CHECK_OBJECT(var_trust_chain);
tmp_len_arg_2 = var_trust_chain;
tmp_xrange_high_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_xrange_high_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooooooo";
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
tmp_assign_source_7 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooo";
exception_lineno = 175;
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
    PyObject *old = var_i;
    var_i = tmp_assign_source_8;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
tmp_expression_value_6 = module_var_accessor_google$auth$identity_pool$_X509Supplier(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__X509Supplier);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__encode_cert);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_trust_chain);
tmp_expression_value_7 = var_trust_chain;
CHECK_OBJECT(var_i);
tmp_subscript_value_3 = var_i;
tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_3);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 176;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$identity_pool$$$function__7_get_subject_token->m_frame.f_lineno = 176;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_encoded;
    var_encoded = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(var_encoded);
tmp_cmp_expr_left_4 = var_encoded;
if (var_cert_chain == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cert_chain);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 178;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_8 = var_cert_chain;
tmp_subscript_value_4 = const_int_0;
tmp_cmp_expr_right_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_4, 0);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_5;
tmp_called_instance_5 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$identity_pool$$$function__7_get_subject_token->m_frame.f_lineno = 179;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_RefreshError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_41b71f64e17c7459bf42a41660ed2c41_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 179;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto try_except_handler_2;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
if (var_cert_chain == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cert_chain);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 183;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_3 = var_cert_chain;
CHECK_OBJECT(var_encoded);
tmp_item_value_3 = var_encoded;
tmp_result = LIST_APPEND0(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
branch_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooooooo";
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
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_7;
tmp_expression_value_9 = module_var_accessor_google$auth$identity_pool$json(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_dumps);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (var_cert_chain == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cert_chain);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 184;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = var_cert_chain;
frame_frame_google$auth$identity_pool$$$function__7_get_subject_token->m_frame.f_lineno = 184;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__7_get_subject_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__7_get_subject_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__7_get_subject_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__7_get_subject_token,
    type_description_1,
    par_self,
    par_context,
    par_request,
    var_crypto,
    var_leaf_cert,
    var_trust_chain,
    var_cert_chain,
    var_first_cert,
    var_i,
    var_encoded
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__7_get_subject_token == cache_frame_frame_google$auth$identity_pool$$$function__7_get_subject_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__7_get_subject_token);
    cache_frame_frame_google$auth$identity_pool$$$function__7_get_subject_token = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__7_get_subject_token);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_crypto);
CHECK_OBJECT(var_crypto);
Py_DECREF(var_crypto);
var_crypto = NULL;
CHECK_OBJECT(var_leaf_cert);
CHECK_OBJECT(var_leaf_cert);
Py_DECREF(var_leaf_cert);
var_leaf_cert = NULL;
CHECK_OBJECT(var_trust_chain);
CHECK_OBJECT(var_trust_chain);
Py_DECREF(var_trust_chain);
var_trust_chain = NULL;
Py_XDECREF(var_cert_chain);
var_cert_chain = NULL;
Py_XDECREF(var_first_cert);
var_first_cert = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_encoded);
var_encoded = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_crypto);
var_crypto = NULL;
Py_XDECREF(var_leaf_cert);
var_leaf_cert = NULL;
Py_XDECREF(var_trust_chain);
var_trust_chain = NULL;
Py_XDECREF(var_cert_chain);
var_cert_chain = NULL;
Py_XDECREF(var_first_cert);
var_first_cert = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_encoded);
var_encoded = NULL;
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


static PyObject *impl_google$auth$identity_pool$$$function__8__read_trust_chain(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_crypto = NULL;
PyObject *var_certificate_trust_chain = NULL;
PyObject *var_f = NULL;
PyObject *var_trust_chain_data = NULL;
PyObject *var_cert_blocks = NULL;
PyObject *var_cert_block = NULL;
PyObject *var_cert_data = NULL;
PyObject *var_cert = NULL;
PyObject *var_e = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain = MAKE_FUNCTION_FRAME(tstate, code_objects_c97f0ab34b35d9065c996ec4633b04d7, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain = cache_frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_OpenSSL;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$identity_pool;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_crypto_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = 189;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$identity_pool,
        mod_consts.const_str_plain_crypto,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_crypto);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_crypto == NULL);
var_crypto = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_certificate_trust_chain == NULL);
var_certificate_trust_chain = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__trust_chain_path);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__trust_chain_path);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_str_empty;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooooo";
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
CHECK_OBJECT(var_certificate_trust_chain);
tmp_return_value = var_certificate_trust_chain;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_open_filename_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_open_mode_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_open_filename_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__trust_chain_path);
if (tmp_open_filename_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_open_mode_1 = const_str_plain_rb;
tmp_assign_source_3 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
CHECK_OBJECT(tmp_open_filename_1);
Py_DECREF(tmp_open_filename_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = 197;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_5 = tmp_with_1__source;
tmp_assign_source_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___exit__);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_5;
}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_7 = tmp_with_1__enter;
assert(var_f == NULL);
Py_INCREF(tmp_assign_source_7);
var_f = tmp_assign_source_7;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_f);
tmp_called_instance_1 = var_f;
frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = 198;
tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_read);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
assert(var_trust_chain_data == NULL);
var_trust_chain_data = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_trust_chain_data);
tmp_expression_value_6 = var_trust_chain_data;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_split);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = 200;
tmp_assign_source_9 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_bytes_digest_aa03b53f00f09b71d5b8d2120793323c_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
assert(var_cert_blocks == NULL);
var_cert_blocks = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_cert_blocks);
tmp_iter_arg_1 = var_cert_blocks;
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_10;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_11 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooo";
exception_lineno = 201;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_12 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_cert_block;
    var_cert_block = tmp_assign_source_12;
    Py_INCREF(var_cert_block);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_cert_block);
tmp_expression_value_7 = var_cert_block;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_strip);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = 203;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 203;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
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
{
PyObject *tmp_assign_source_13;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_add_expr_left_1 = mod_consts.const_bytes_digest_aa03b53f00f09b71d5b8d2120793323c;
CHECK_OBJECT(var_cert_block);
tmp_add_expr_right_1 = var_cert_block;
tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_BYTES_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_cert_data;
    var_cert_data = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_2;
if (var_crypto == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_crypto);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 207;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_8 = var_crypto;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_load_certificate);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}
if (var_crypto == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_crypto);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 208;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_9 = var_crypto;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_FILETYPE_PEM);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 208;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_cert_data);
tmp_args_element_value_2 = var_cert_data;
frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = 207;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_cert;
    var_cert = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_certificate_trust_chain == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_certificate_trust_chain);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 210;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}

tmp_list_arg_value_1 = var_certificate_trust_chain;
CHECK_OBJECT(var_cert);
tmp_item_value_1 = var_cert;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto try_end_1;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_15); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_15);
var_e = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_raise_cause_1;
tmp_expression_value_10 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "oooooooooo";
    goto try_except_handler_9;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooo";
    goto try_except_handler_9;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_dcc12ad505a3ad9f783548602fc23978;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__trust_chain_path);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 214;
type_description_1 = "oooooooooo";
    goto try_except_handler_9;
}
frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = 213;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 213;
type_description_1 = "oooooooooo";
    goto try_except_handler_9;
}
frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = 212;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooo";
    goto try_except_handler_9;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 216;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooo";
goto try_except_handler_9;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_8;
// End of try:
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 205;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame)) {
        frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_8;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_6;
// End of try:
// End of try:
try_end_1:;
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
if (var_certificate_trust_chain == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_certificate_trust_chain);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 217;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}

tmp_return_value = var_certificate_trust_chain;
Py_INCREF(tmp_return_value);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
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
nuitka_bool tmp_assign_source_16;
tmp_assign_source_16 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_16;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = 197;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooooooooo";
    goto try_except_handler_10;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 197;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame)) {
        frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_10;
branch_no_5:;
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 197;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame)) {
        frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_10;
branch_end_4:;
goto try_end_3;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_4;
// End of try:
try_end_3:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_4;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_4:;
goto try_end_5;
// Return handler code:
try_return_handler_4:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = 197;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = tmp_with_1__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = 197;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_7);

exception_lineno = 197;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_6:;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_3;
// End of try:
try_end_5:;
goto try_end_6;
// Return handler code:
try_return_handler_3:;
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
try_except_handler_3:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_2;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_9);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_FileNotFoundError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_7;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_expression_value_13;
tmp_expression_value_12 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;
type_description_1 = "oooooooooo";
    goto try_except_handler_11;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooooooo";
    goto try_except_handler_11;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_41edb2ce37ba5f43cfcb3432eb8d27da;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_kw_call_arg_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__trust_chain_path);
if (tmp_kw_call_arg_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 220;
type_description_1 = "oooooooooo";
    goto try_except_handler_11;
}
frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = 220;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 220;
type_description_1 = "oooooooooo";
    goto try_except_handler_11;
}
frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = 219;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooooooo";
    goto try_except_handler_11;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooooooo";
    goto try_except_handler_11;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 219;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto try_except_handler_11;
}
goto branch_end_7;
branch_no_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 195;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame)) {
        frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_11;
branch_end_7:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_7:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain,
    type_description_1,
    par_self,
    var_crypto,
    var_certificate_trust_chain,
    var_f,
    var_trust_chain_data,
    var_cert_blocks,
    var_cert_block,
    var_cert_data,
    var_cert,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain == cache_frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain);
    cache_frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__8__read_trust_chain);

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
Py_XDECREF(var_crypto);
var_crypto = NULL;
Py_XDECREF(var_certificate_trust_chain);
var_certificate_trust_chain = NULL;
Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_trust_chain_data);
var_trust_chain_data = NULL;
Py_XDECREF(var_cert_blocks);
var_cert_blocks = NULL;
Py_XDECREF(var_cert_block);
var_cert_block = NULL;
Py_XDECREF(var_cert_data);
var_cert_data = NULL;
Py_XDECREF(var_cert);
var_cert = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_crypto);
var_crypto = NULL;
Py_XDECREF(var_certificate_trust_chain);
var_certificate_trust_chain = NULL;
Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_trust_chain_data);
var_trust_chain_data = NULL;
Py_XDECREF(var_cert_blocks);
var_cert_blocks = NULL;
Py_XDECREF(var_cert_block);
var_cert_block = NULL;
Py_XDECREF(var_cert_data);
var_cert_data = NULL;
Py_XDECREF(var_cert);
var_cert = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

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


static PyObject *impl_google$auth$identity_pool$$$function__9__encode_cert(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cert = python_pars[0];
PyObject *var_crypto = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__9__encode_cert;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__9__encode_cert = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__9__encode_cert)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__9__encode_cert);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__9__encode_cert == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__9__encode_cert = MAKE_FUNCTION_FRAME(tstate, code_objects_9964c12e4a68006ad471a9bdb64a9b9a, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__9__encode_cert->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__9__encode_cert = cache_frame_frame_google$auth$identity_pool$$$function__9__encode_cert;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__9__encode_cert);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__9__encode_cert) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_OpenSSL;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$identity_pool;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_crypto_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$identity_pool$$$function__9__encode_cert->m_frame.f_lineno = 226;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$identity_pool,
        mod_consts.const_str_plain_crypto,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_crypto);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_crypto == NULL);
var_crypto = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
tmp_expression_value_2 = module_var_accessor_google$auth$identity_pool$base64(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base64);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_b64encode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_crypto);
tmp_expression_value_3 = var_crypto;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dump_certificate);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 229;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_crypto);
tmp_expression_value_4 = var_crypto;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_FILETYPE_ASN1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_called_value_3);

exception_lineno = 229;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cert);
tmp_args_element_value_3 = par_cert;
frame_frame_google$auth$identity_pool$$$function__9__encode_cert->m_frame.f_lineno = 229;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 229;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__9__encode_cert->m_frame.f_lineno = 228;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__9__encode_cert->m_frame.f_lineno = 228;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__9__encode_cert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__9__encode_cert->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__9__encode_cert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__9__encode_cert,
    type_description_1,
    par_cert,
    var_crypto
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__9__encode_cert == cache_frame_frame_google$auth$identity_pool$$$function__9__encode_cert) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__9__encode_cert);
    cache_frame_frame_google$auth$identity_pool$$$function__9__encode_cert = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__9__encode_cert);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_crypto);
CHECK_OBJECT(var_crypto);
Py_DECREF(var_crypto);
var_crypto = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_crypto);
var_crypto = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$identity_pool$$$function__10__parse_token_data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_token_content = python_pars[0];
PyObject *par_format_type = python_pars[1];
PyObject *par_subject_token_field_name = python_pars[2];
PyObject *var_token = NULL;
PyObject *var_response_data = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__10__parse_token_data;
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
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__10__parse_token_data = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__10__parse_token_data)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__10__parse_token_data);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__10__parse_token_data == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__10__parse_token_data = MAKE_FUNCTION_FRAME(tstate, code_objects_51729947816d948afc79be967f5716bb, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__10__parse_token_data->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__10__parse_token_data = cache_frame_frame_google$auth$identity_pool$$$function__10__parse_token_data;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__10__parse_token_data);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__10__parse_token_data) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_format_type);
tmp_cmp_expr_left_1 = par_format_type;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_text;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_token_content);
tmp_expression_value_1 = par_token_content;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_content);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_1;
}
goto branch_end_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_google$auth$identity_pool$json(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_loads);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_token_content);
tmp_expression_value_3 = par_token_content;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_content);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 239;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$identity_pool$$$function__10__parse_token_data->m_frame.f_lineno = 239;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(var_response_data == NULL);
var_response_data = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_response_data);
tmp_expression_value_4 = var_response_data;
CHECK_OBJECT(par_subject_token_field_name);
tmp_subscript_value_1 = par_subject_token_field_name;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(var_token == NULL);
var_token = tmp_assign_source_3;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__10__parse_token_data, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__10__parse_token_data, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_KeyError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooo";
    goto try_except_handler_3;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_2_1;
tmp_expression_value_5 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_2b1add325ef55cbd411468d2fce02090;
CHECK_OBJECT(par_token_content);
tmp_expression_value_6 = par_token_content;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_location);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 245;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_subject_token_field_name);
tmp_kw_call_arg_value_2_1 = par_subject_token_field_name;
frame_frame_google$auth$identity_pool$$$function__10__parse_token_data->m_frame.f_lineno = 244;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 244;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
frame_frame_google$auth$identity_pool$$$function__10__parse_token_data->m_frame.f_lineno = 243;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 243;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto try_except_handler_3;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 237;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$identity_pool$$$function__10__parse_token_data->m_frame)) {
        frame_frame_google$auth$identity_pool$$$function__10__parse_token_data->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
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
branch_end_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_token);
tmp_operand_value_1 = var_token;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 249;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__10__parse_token_data->m_frame.f_lineno = 249;
tmp_raise_type_input_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_RefreshError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_4193f99ef57bce1ee5e2f79f4f2305ad_tuple, 0)
);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 249;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__10__parse_token_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__10__parse_token_data->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__10__parse_token_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__10__parse_token_data,
    type_description_1,
    par_token_content,
    par_format_type,
    par_subject_token_field_name,
    var_token,
    var_response_data
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__10__parse_token_data == cache_frame_frame_google$auth$identity_pool$$$function__10__parse_token_data) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__10__parse_token_data);
    cache_frame_frame_google$auth$identity_pool$$$function__10__parse_token_data = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__10__parse_token_data);

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
Py_XDECREF(var_response_data);
var_response_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_response_data);
var_response_data = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_token_content);
Py_DECREF(par_token_content);
CHECK_OBJECT(par_format_type);
Py_DECREF(par_format_type);
CHECK_OBJECT(par_subject_token_field_name);
Py_DECREF(par_subject_token_field_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_token_content);
Py_DECREF(par_token_content);
CHECK_OBJECT(par_format_type);
Py_DECREF(par_format_type);
CHECK_OBJECT(par_subject_token_field_name);
Py_DECREF(par_subject_token_field_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$identity_pool$$$function__11___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
PyObject *par_subject_token_supplier = python_pars[5];
PyObject *par_args = python_pars[6];
PyObject *par_kwargs = python_pars[7];
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__11___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__11___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__11___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__11___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__11___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__11___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b2b58dd9c5b09569f31ee2ef7ae30965, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__11___init__->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__11___init__ = cache_frame_frame_google$auth$identity_pool$$$function__11___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__11___init__);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__11___init__) == 2);

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
tmp_type_arg_value_1 = module_var_accessor_google$auth$identity_pool$Credentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$identity_pool, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooooooooN";
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


exception_lineno = 327;
type_description_1 = "ooooooooN";
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
CHECK_OBJECT(par_subject_token_supplier);
tmp_cmp_expr_left_2 = par_subject_token_supplier;
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
tmp_called_instance_1 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 336;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__11___init__->m_frame.f_lineno = 336;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_InvalidValue,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_713399c1dcd4a18a159b718657c6be2b_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 336;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooN";
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
CHECK_OBJECT(par_subject_token_supplier);
tmp_cmp_expr_left_4 = par_subject_token_supplier;
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
tmp_called_instance_2 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 340;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__11___init__->m_frame.f_lineno = 340;
tmp_raise_type_input_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_InvalidValue,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_66894139ab08283cc473c158a3178d3f_tuple, 0)
);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 340;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooN";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_subject_token_supplier);
tmp_cmp_expr_left_5 = par_subject_token_supplier;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_subject_token_supplier);
tmp_assattr_value_1 = par_subject_token_supplier;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__subject_token_supplier, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__credential_source_file, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__credential_source_url, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__credential_source_certificate, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_credential_source);
tmp_isinstance_inst_1 = par_credential_source;
tmp_isinstance_cls_1 = module_var_accessor_google$auth$identity_pool$Mapping(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 350;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
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
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__credential_source_executable, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__11___init__->m_frame.f_lineno = 352;
tmp_raise_type_input_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_MalformedError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_aab9fd2126c607247a977a3871bdaf1e_tuple, 0)
);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 352;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooN";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_credential_source);
tmp_expression_value_2 = par_credential_source;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__11___init__->m_frame.f_lineno = 355;
tmp_assattr_value_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_file_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__credential_source_file, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_credential_source);
tmp_expression_value_3 = par_credential_source;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__11___init__->m_frame.f_lineno = 356;
tmp_assattr_value_7 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_url_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__credential_source_url, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_credential_source);
tmp_expression_value_4 = par_credential_source;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__11___init__->m_frame.f_lineno = 357;
tmp_assattr_value_8 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_certificate_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assattr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__credential_source_certificate, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = mod_consts.const_str_plain_environment_id;
CHECK_OBJECT(par_credential_source);
tmp_cmp_expr_right_6 = par_credential_source;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_5 != false) {
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
tmp_called_instance_4 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__11___init__->m_frame.f_lineno = 362;
tmp_raise_type_input_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_MalformedError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_457fc45a6a43cdccd831f3eb13f0fc8a_tuple, 0)
);

if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 362;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooN";
goto frame_exception_exit_1;
}
branch_no_5:;
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_5 = par_self;
frame_frame_google$auth$identity_pool$$$function__11___init__->m_frame.f_lineno = 367;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain__validate_single_source);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__credential_source_certificate);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 369;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_called_instance_6 = par_self;
frame_frame_google$auth$identity_pool$$$function__11___init__->m_frame.f_lineno = 370;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain__validate_certificate_config);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_called_instance_7;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_7 = par_self;
CHECK_OBJECT(par_credential_source);
tmp_args_element_value_1 = par_credential_source;
frame_frame_google$auth$identity_pool$$$function__11___init__->m_frame.f_lineno = 372;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain__validate_file_or_url_config, tmp_args_element_value_1);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_end_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__credential_source_file);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 374;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_assattr_target_9;
tmp_called_value_4 = module_var_accessor_google$auth$identity_pool$_FileSupplier(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__FileSupplier);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 375;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__credential_source_file);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__credential_source_format_type);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 377;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__credential_source_field_name);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 378;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__11___init__->m_frame.f_lineno = 375;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assattr_value_9 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain__subject_token_supplier, tmp_assattr_value_9);
CHECK_OBJECT(tmp_assattr_value_9);
Py_DECREF(tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_expression_value_10;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__credential_source_url);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 380;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_14;
PyObject *tmp_assattr_target_10;
tmp_called_value_5 = module_var_accessor_google$auth$identity_pool$_UrlSupplier(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__UrlSupplier);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 381;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__credential_source_url);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__credential_source_format_type);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 383;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__credential_source_field_name);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 384;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__credential_source_headers);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 385;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__11___init__->m_frame.f_lineno = 381;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assattr_value_10 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assattr_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain__subject_token_supplier, tmp_assattr_value_10);
CHECK_OBJECT(tmp_assattr_value_10);
Py_DECREF(tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_16;
PyObject *tmp_assattr_target_11;
tmp_called_value_6 = module_var_accessor_google$auth$identity_pool$_X509Supplier(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__X509Supplier);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 388;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__trust_chain_path);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__get_cert_bytes);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_9);

exception_lineno = 389;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__11___init__->m_frame.f_lineno = 388;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assattr_value_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assattr_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain__subject_token_supplier, tmp_assattr_value_11);
CHECK_OBJECT(tmp_assattr_value_11);
Py_DECREF(tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
branch_end_8:;
branch_end_7:;
branch_end_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__11___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__11___init__,
    type_description_1,
    par_self,
    par_audience,
    par_subject_token_type,
    par_token_url,
    par_credential_source,
    par_subject_token_supplier,
    par_args,
    par_kwargs,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__11___init__ == cache_frame_frame_google$auth$identity_pool$$$function__11___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__11___init__);
    cache_frame_frame_google$auth$identity_pool$$$function__11___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__11___init__);

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
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);
CHECK_OBJECT(par_subject_token_type);
Py_DECREF(par_subject_token_type);
CHECK_OBJECT(par_token_url);
Py_DECREF(par_token_url);
CHECK_OBJECT(par_credential_source);
Py_DECREF(par_credential_source);
CHECK_OBJECT(par_subject_token_supplier);
Py_DECREF(par_subject_token_supplier);
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
CHECK_OBJECT(par_subject_token_supplier);
Py_DECREF(par_subject_token_supplier);
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


static PyObject *impl_google$auth$identity_pool$$$function__12_retrieve_subject_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token = MAKE_FUNCTION_FRAME(tstate, code_objects_f37a76cf542dfa5ca57b4f6cc2c8d785, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token = cache_frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__subject_token_supplier);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_get_subject_token);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__supplier_context);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 395;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_2 = par_request;
frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token->m_frame.f_lineno = 394;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token,
    type_description_1,
    par_self,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token == cache_frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token);
    cache_frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__12_retrieve_subject_token);

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


static PyObject *impl_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths = MAKE_FUNCTION_FRAME(tstate, code_objects_c0ad230b8c3dbaf1b8c3f06f7777f2b3, module_google$auth$identity_pool, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths = cache_frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__credential_source_certificate);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 400;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths->m_frame.f_lineno = 400;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_RefreshError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_0c9630b3fe06b623b329abf33ae141a3_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 400;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_google$auth$identity_pool$_mtls_helper(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mtls_helper);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 404;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__get_workload_cert_and_key_paths);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__certificate_config_location);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 405;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths->m_frame.f_lineno = 404;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths == cache_frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths);
    cache_frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths);

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


static PyObject *impl_google$auth$identity_pool$$$function__14__get_cert_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_cert_path = NULL;
PyObject *var__ = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes = MAKE_FUNCTION_FRAME(tstate, code_objects_dae4cb4e8c7f446797a7c84c8544b05a, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes = cache_frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes->m_frame.f_lineno = 409;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__get_mtls_cert_and_key_paths);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 409;
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 409;
type_description_1 = "ooo";
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



exception_lineno = 409;
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
assert(var_cert_path == NULL);
Py_INCREF(tmp_assign_source_4);
var_cert_path = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_5);
var__ = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
tmp_called_instance_2 = module_var_accessor_google$auth$identity_pool$_mtls_helper(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mtls_helper);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 410;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cert_path);
tmp_args_element_value_1 = var_cert_path;
frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes->m_frame.f_lineno = 410;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__read_cert_file, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes,
    type_description_1,
    par_self,
    var_cert_path,
    var__
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes == cache_frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes);
    cache_frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__14__get_cert_bytes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cert_path);
CHECK_OBJECT(var_cert_path);
Py_DECREF(var_cert_path);
var_cert_path = NULL;
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

Py_XDECREF(var_cert_path);
var_cert_path = NULL;
Py_XDECREF(var__);
var__ = NULL;
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


static PyObject *impl_google$auth$identity_pool$$$function__15__mtls_required(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__15__mtls_required;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__15__mtls_required = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__15__mtls_required)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__15__mtls_required);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__15__mtls_required == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__15__mtls_required = MAKE_FUNCTION_FRAME(tstate, code_objects_c5fdc3de921d77a450471772d878f991, module_google$auth$identity_pool, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__15__mtls_required->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__15__mtls_required = cache_frame_frame_google$auth$identity_pool$$$function__15__mtls_required;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__15__mtls_required);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__15__mtls_required) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__credential_source_certificate);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_return_value = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__15__mtls_required, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__15__mtls_required->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__15__mtls_required, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__15__mtls_required,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__15__mtls_required == cache_frame_frame_google$auth$identity_pool$$$function__15__mtls_required) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__15__mtls_required);
    cache_frame_frame_google$auth$identity_pool$$$function__15__mtls_required = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__15__mtls_required);

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


static PyObject *impl_google$auth$identity_pool$$$function__16__create_default_metrics_options(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_metrics_options = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options = MAKE_FUNCTION_FRAME(tstate, code_objects_5808ed73e669ce90cb56ca1260af82bc, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options = cache_frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$identity_pool$Credentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 416;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$identity_pool, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options->m_frame.f_lineno = 416;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__create_default_metrics_options);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
assert(var_metrics_options == NULL);
var_metrics_options = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__credential_source);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = module_var_accessor_google$auth$identity_pool$Mapping(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 420;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "ooN";
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__credential_source);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options->m_frame.f_lineno = 421;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_file_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 421;
type_description_1 = "ooN";
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
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = const_str_plain_file;
CHECK_OBJECT(var_metrics_options);
tmp_ass_subscribed_1 = var_metrics_options;
tmp_ass_subscript_1 = mod_consts.const_str_plain_source;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__credential_source);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options->m_frame.f_lineno = 423;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_url_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 423;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_url;
CHECK_OBJECT(var_metrics_options);
tmp_ass_subscribed_2 = var_metrics_options;
tmp_ass_subscript_2 = mod_consts.const_str_plain_source;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_plain_x509;
CHECK_OBJECT(var_metrics_options);
tmp_ass_subscribed_3 = var_metrics_options;
tmp_ass_subscript_3 = mod_consts.const_str_plain_source;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
}
branch_end_3:;
branch_end_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_plain_programmatic;
CHECK_OBJECT(var_metrics_options);
tmp_ass_subscribed_4 = var_metrics_options;
tmp_ass_subscript_4 = mod_consts.const_str_plain_source;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options,
    type_description_1,
    par_self,
    var_metrics_options,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options == cache_frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options);
    cache_frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__16__create_default_metrics_options);

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


static PyObject *impl_google$auth$identity_pool$$$function__17__has_custom_supplier(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier = MAKE_FUNCTION_FRAME(tstate, code_objects_3daa972c1b33f0b036ec286985b42979, module_google$auth$identity_pool, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier = cache_frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier) == 2);

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


exception_lineno = 432;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier == cache_frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier);
    cache_frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__17__has_custom_supplier);

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


static PyObject *impl_google$auth$identity_pool$$$function__18__constructor_args(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_args = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__18__constructor_args;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__18__constructor_args = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__18__constructor_args)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__18__constructor_args);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__18__constructor_args == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__18__constructor_args = MAKE_FUNCTION_FRAME(tstate, code_objects_15f0f7c3c14c0d1aeaed1270a87b57d9, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__18__constructor_args->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__18__constructor_args = cache_frame_frame_google$auth$identity_pool$$$function__18__constructor_args;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__18__constructor_args);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__18__constructor_args) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$identity_pool$Credentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 435;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$identity_pool, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__18__constructor_args->m_frame.f_lineno = 435;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__constructor_args);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
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
frame_frame_google$auth$identity_pool$$$function__18__constructor_args->m_frame.f_lineno = 437;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__has_custom_supplier);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 437;
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


exception_lineno = 438;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_subject_token_supplier;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__subject_token_supplier);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 438;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_google$auth$identity_pool$$$function__18__constructor_args->m_frame.f_lineno = 438;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__18__constructor_args, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__18__constructor_args->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__18__constructor_args, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__18__constructor_args,
    type_description_1,
    par_self,
    var_args,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__18__constructor_args == cache_frame_frame_google$auth$identity_pool$$$function__18__constructor_args) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__18__constructor_args);
    cache_frame_frame_google$auth$identity_pool$$$function__18__constructor_args = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__18__constructor_args);

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


static PyObject *impl_google$auth$identity_pool$$$function__19__validate_certificate_config(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_use_default = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config = MAKE_FUNCTION_FRAME(tstate, code_objects_95a3dfb3d19fe093b4fd7b5604b1524b, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config = cache_frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__credential_source_certificate);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config->m_frame.f_lineno = 442;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_certificate_config_location_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__certificate_config_location, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__credential_source_certificate);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config->m_frame.f_lineno = 445;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_use_default_certificate_config_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_use_default == NULL);
var_use_default = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__credential_source_certificate);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config->m_frame.f_lineno = 448;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_trust_chain_path_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__trust_chain_path, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__certificate_config_location);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 451;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_use_default);
tmp_truth_name_2 = CHECK_IF_TRUE(var_use_default);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 452;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config->m_frame.f_lineno = 452;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_MalformedError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_498ddaa68e04f91230e9e3198b71b91c_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 452;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__certificate_config_location);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_use_default);
tmp_operand_value_2 = var_use_default;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
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
tmp_called_instance_2 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 456;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config->m_frame.f_lineno = 456;
tmp_raise_type_input_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_MalformedError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_f7d900600e624b3129d94685e6b4101c_tuple, 0)
);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 456;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config,
    type_description_1,
    par_self,
    var_use_default
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config == cache_frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config);
    cache_frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__19__validate_certificate_config);

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
CHECK_OBJECT(var_use_default);
CHECK_OBJECT(var_use_default);
Py_DECREF(var_use_default);
var_use_default = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_use_default);
var_use_default = NULL;
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


static PyObject *impl_google$auth$identity_pool$$$function__20__validate_file_or_url_config(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_credential_source = python_pars[1];
PyObject *var_credential_source_format = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config = MAKE_FUNCTION_FRAME(tstate, code_objects_cf25671faa8a54be4d944f1ca372b9d8, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config = cache_frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config) == 2);

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


exception_lineno = 461;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config->m_frame.f_lineno = 461;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_headers_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__credential_source_headers, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
CHECK_OBJECT(par_credential_source);
tmp_expression_value_2 = par_credential_source;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = const_str_plain_format;
tmp_call_arg_element_2 = MAKE_DICT_EMPTY(tstate);
frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config->m_frame.f_lineno = 462;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_credential_source_format == NULL);
var_credential_source_format = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var_credential_source_format);
tmp_expression_value_3 = var_credential_source_format;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config->m_frame.f_lineno = 466;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_type_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 466;
type_description_1 = "ooo";
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
tmp_or_right_value_1 = mod_consts.const_str_plain_text;
Py_INCREF(tmp_or_right_value_1);
tmp_assattr_value_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assattr_value_2 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__credential_source_format_type, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__credential_source_format_type);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_tuple_str_plain_text_str_plain_json_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_6;
tmp_expression_value_5 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 469;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_MalformedError);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_07bfc903f8a4c7a140830b9236f68f66;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__credential_source_format_type);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 471;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config->m_frame.f_lineno = 470;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 470;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config->m_frame.f_lineno = 469;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 469;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__credential_source_format_type);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_json;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
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
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_credential_source_format);
tmp_expression_value_8 = var_credential_source_format;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config->m_frame.f_lineno = 476;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_subject_token_field_name_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__credential_source_field_name, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__credential_source_field_name);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 480;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config->m_frame.f_lineno = 480;
tmp_raise_type_input_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_MalformedError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_d557b0cdc0911ede4c7ff2c5057c529e_tuple, 0)
);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 480;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__credential_source_field_name, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_end_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config,
    type_description_1,
    par_self,
    par_credential_source,
    var_credential_source_format
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config == cache_frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config);
    cache_frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__20__validate_file_or_url_config);

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
CHECK_OBJECT(var_credential_source_format);
CHECK_OBJECT(var_credential_source_format);
Py_DECREF(var_credential_source_format);
var_credential_source_format = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_credential_source_format);
var_credential_source_format = NULL;
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


static PyObject *impl_google$auth$identity_pool$$$function__21__validate_single_source(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_credential_sources = NULL;
PyObject *var_valid_credential_sources = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__21__validate_single_source;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__21__validate_single_source = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__21__validate_single_source)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__21__validate_single_source);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__21__validate_single_source == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__21__validate_single_source = MAKE_FUNCTION_FRAME(tstate, code_objects_4236cf8e1da87458b897c4f1f4f64388, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__21__validate_single_source->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__21__validate_single_source = cache_frame_frame_google$auth$identity_pool$$$function__21__validate_single_source;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__21__validate_single_source);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__21__validate_single_source) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__credential_source_file);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyList_SET_ITEM(tmp_assign_source_1, 0, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__credential_source_url);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "ooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_1, 1, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__credential_source_certificate);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "ooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_1, 2, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
assert(var_credential_sources == NULL);
var_credential_sources = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = (PyObject *)&PyFilter_Type;

tmp_args_element_value_1 = MAKE_FUNCTION_google$auth$identity_pool$$$function__21__validate_single_source$$$function__1_lambda(tstate);

CHECK_OBJECT(var_credential_sources);
tmp_args_element_value_2 = var_credential_sources;
frame_frame_google$auth$identity_pool$$$function__21__validate_single_source->m_frame.f_lineno = 493;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_valid_credential_sources == NULL);
var_valid_credential_sources = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_valid_credential_sources);
tmp_len_arg_1 = var_valid_credential_sources;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = 1;
tmp_condition_result_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
tmp_called_instance_1 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 497;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__21__validate_single_source->m_frame.f_lineno = 497;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_MalformedError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_e856526f3714eecc169d56f141ecf292_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 497;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var_valid_credential_sources);
tmp_len_arg_2 = var_valid_credential_sources;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
assert(!(tmp_cmp_expr_left_2 == NULL));
tmp_cmp_expr_right_2 = 1;
tmp_condition_result_2 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_google$auth$identity_pool$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 501;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__21__validate_single_source->m_frame.f_lineno = 501;
tmp_raise_type_input_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_MalformedError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_ea9d32e98bf8310ce858e8532246114b_tuple, 0)
);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 501;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__21__validate_single_source, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__21__validate_single_source->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__21__validate_single_source, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__21__validate_single_source,
    type_description_1,
    par_self,
    var_credential_sources,
    var_valid_credential_sources
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__21__validate_single_source == cache_frame_frame_google$auth$identity_pool$$$function__21__validate_single_source) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__21__validate_single_source);
    cache_frame_frame_google$auth$identity_pool$$$function__21__validate_single_source = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__21__validate_single_source);

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
CHECK_OBJECT(var_credential_sources);
CHECK_OBJECT(var_credential_sources);
Py_DECREF(var_credential_sources);
var_credential_sources = NULL;
CHECK_OBJECT(var_valid_credential_sources);
CHECK_OBJECT(var_valid_credential_sources);
Py_DECREF(var_valid_credential_sources);
var_valid_credential_sources = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_credential_sources);
var_credential_sources = NULL;
Py_XDECREF(var_valid_credential_sources);
var_valid_credential_sources = NULL;
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


static PyObject *impl_google$auth$identity_pool$$$function__21__validate_single_source$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_source = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_source);
tmp_cmp_expr_left_1 = par_source;
tmp_cmp_expr_right_1 = Py_None;
tmp_return_value = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_source);
Py_DECREF(par_source);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$identity_pool$$$function__22_from_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_info = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_subject_token_supplier = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__22_from_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__22_from_info = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__22_from_info)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__22_from_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__22_from_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__22_from_info = MAKE_FUNCTION_FRAME(tstate, code_objects_f576cadbe30f306e3a5908bcf48e230d, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__22_from_info->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__22_from_info = cache_frame_frame_google$auth$identity_pool$$$function__22_from_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__22_from_info);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__22_from_info) == 2);

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


exception_lineno = 529;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$identity_pool$$$function__22_from_info->m_frame.f_lineno = 529;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_subject_token_supplier_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
assert(var_subject_token_supplier == NULL);
var_subject_token_supplier = tmp_assign_source_1;
}
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_dict_key_1 = mod_consts.const_str_plain_subject_token_supplier;
CHECK_OBJECT(var_subject_token_supplier);
tmp_dict_value_1 = var_subject_token_supplier;
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


exception_lineno = 530;
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
tmp_type_arg_value_1 = module_var_accessor_google$auth$identity_pool$Credentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 531;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_object_arg_value_1 = par_cls;
tmp_expression_value_2 = BUILTIN_SUPER2(tstate, moduledict_google$auth$identity_pool, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 531;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_from_info);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 531;
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


exception_lineno = 531;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__22_from_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__22_from_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__22_from_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__22_from_info,
    type_description_1,
    par_cls,
    par_info,
    par_kwargs,
    var_subject_token_supplier,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__22_from_info == cache_frame_frame_google$auth$identity_pool$$$function__22_from_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__22_from_info);
    cache_frame_frame_google$auth$identity_pool$$$function__22_from_info = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__22_from_info);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_subject_token_supplier);
CHECK_OBJECT(var_subject_token_supplier);
Py_DECREF(var_subject_token_supplier);
var_subject_token_supplier = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_subject_token_supplier);
var_subject_token_supplier = NULL;
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


static PyObject *impl_google$auth$identity_pool$$$function__23_from_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_filename = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__23_from_file;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__23_from_file = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__23_from_file)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__23_from_file);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__23_from_file == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__23_from_file = MAKE_FUNCTION_FRAME(tstate, code_objects_e77313cd72090689e1a1ce8474eea28e, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__23_from_file->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__23_from_file = cache_frame_frame_google$auth$identity_pool$$$function__23_from_file;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__23_from_file);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__23_from_file) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$identity_pool$Credentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 553;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_object_arg_value_1 = par_cls;
tmp_expression_value_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$identity_pool, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_file);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
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


exception_lineno = 553;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__23_from_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__23_from_file->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__23_from_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__23_from_file,
    type_description_1,
    par_cls,
    par_filename,
    par_kwargs,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__23_from_file == cache_frame_frame_google$auth$identity_pool$$$function__23_from_file) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__23_from_file);
    cache_frame_frame_google$auth$identity_pool$$$function__23_from_file = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__23_from_file);

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


static PyObject *impl_google$auth$identity_pool$$$function__24_refresh(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *var__agent_identity_utils = NULL;
PyObject *var_cert_fingerprint = NULL;
PyObject *var_cert_bytes = NULL;
PyObject *var_cert = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$function__24_refresh;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$identity_pool$$$function__24_refresh = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$identity_pool$$$function__24_refresh)) {
    Py_XDECREF(cache_frame_frame_google$auth$identity_pool$$$function__24_refresh);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$identity_pool$$$function__24_refresh == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$identity_pool$$$function__24_refresh = MAKE_FUNCTION_FRAME(tstate, code_objects_4863e2715d89bcdf591333149a8a5d49, module_google$auth$identity_pool, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$identity_pool$$$function__24_refresh->m_type_description == NULL);
frame_frame_google$auth$identity_pool$$$function__24_refresh = cache_frame_frame_google$auth$identity_pool$$$function__24_refresh;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$function__24_refresh);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$function__24_refresh) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$identity_pool;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain__agent_identity_utils_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$identity_pool$$$function__24_refresh->m_frame.f_lineno = 562;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$identity_pool,
        mod_consts.const_str_plain__agent_identity_utils,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__agent_identity_utils);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var__agent_identity_utils == NULL);
var__agent_identity_utils = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_None;
assert(var_cert_fingerprint == NULL);
Py_INCREF(tmp_assign_source_2);
var_cert_fingerprint = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__credential_source_certificate);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_google$auth$identity_pool$$$function__24_refresh->m_frame.f_lineno = 567;
tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__get_cert_bytes);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_cert_bytes == NULL);
var_cert_bytes = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var__agent_identity_utils);
tmp_called_instance_2 = var__agent_identity_utils;
CHECK_OBJECT(var_cert_bytes);
tmp_args_element_value_1 = var_cert_bytes;
frame_frame_google$auth$identity_pool$$$function__24_refresh->m_frame.f_lineno = 568;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_parse_certificate, tmp_args_element_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_cert == NULL);
var_cert = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
CHECK_OBJECT(var__agent_identity_utils);
tmp_called_instance_3 = var__agent_identity_utils;
CHECK_OBJECT(var_cert);
tmp_args_element_value_2 = var_cert;
frame_frame_google$auth$identity_pool$$$function__24_refresh->m_frame.f_lineno = 569;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_should_request_bound_token, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 569;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 569;
type_description_1 = "oooooo";
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
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var__agent_identity_utils);
tmp_called_instance_4 = var__agent_identity_utils;
CHECK_OBJECT(var_cert);
tmp_args_element_value_3 = var_cert;
frame_frame_google$auth$identity_pool$$$function__24_refresh->m_frame.f_lineno = 571;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_calculate_certificate_fingerprint, tmp_args_element_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 571;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cert_fingerprint;
    assert(old != NULL);
    var_cert_fingerprint = tmp_assign_source_5;
    Py_DECREF(old);
}

}
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__perform_refresh_token);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_1 = par_request;
CHECK_OBJECT(var_cert_fingerprint);
tmp_kw_call_dict_value_0_1 = var_cert_fingerprint;
frame_frame_google$auth$identity_pool$$$function__24_refresh->m_frame.f_lineno = 574;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_cert_fingerprint_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_called_instance_5 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_4 = par_request;
frame_frame_google$auth$identity_pool$$$function__24_refresh->m_frame.f_lineno = 575;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain__handle_trust_boundary, tmp_args_element_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$function__24_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$function__24_refresh->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$function__24_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$function__24_refresh,
    type_description_1,
    par_self,
    par_request,
    var__agent_identity_utils,
    var_cert_fingerprint,
    var_cert_bytes,
    var_cert
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$identity_pool$$$function__24_refresh == cache_frame_frame_google$auth$identity_pool$$$function__24_refresh) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$identity_pool$$$function__24_refresh);
    cache_frame_frame_google$auth$identity_pool$$$function__24_refresh = NULL;
}

assertFrameObject(frame_frame_google$auth$identity_pool$$$function__24_refresh);

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
CHECK_OBJECT(var__agent_identity_utils);
CHECK_OBJECT(var__agent_identity_utils);
Py_DECREF(var__agent_identity_utils);
var__agent_identity_utils = NULL;
CHECK_OBJECT(var_cert_fingerprint);
CHECK_OBJECT(var_cert_fingerprint);
Py_DECREF(var_cert_fingerprint);
var_cert_fingerprint = NULL;
Py_XDECREF(var_cert_bytes);
var_cert_bytes = NULL;
Py_XDECREF(var_cert);
var_cert = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__agent_identity_utils);
var__agent_identity_utils = NULL;
Py_XDECREF(var_cert_fingerprint);
var_cert_fingerprint = NULL;
Py_XDECREF(var_cert_bytes);
var_cert_bytes = NULL;
Py_XDECREF(var_cert);
var_cert = NULL;
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



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__10__parse_token_data(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__10__parse_token_data,
        mod_consts.const_str_plain__parse_token_data,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_51729947816d948afc79be967f5716bb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__11___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd,
#endif
        code_objects_b2b58dd9c5b09569f31ee2ef7ae30965,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        mod_consts.const_str_digest_4a7c1997d12345f37718846c154550fb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__12_retrieve_subject_token(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__12_retrieve_subject_token,
        mod_consts.const_str_plain_retrieve_subject_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ee5b4eb753af0dbd321c5a140cc652e8,
#endif
        code_objects_f37a76cf542dfa5ca57b4f6cc2c8d785,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths,
        mod_consts.const_str_plain__get_mtls_cert_and_key_paths,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e087e1b8cd7e8dc8f155eaa1e6f8bb88,
#endif
        code_objects_c0ad230b8c3dbaf1b8c3f06f7777f2b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__14__get_cert_bytes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__14__get_cert_bytes,
        mod_consts.const_str_plain__get_cert_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fef47d7e9261ac93e0badcfb54f0af55,
#endif
        code_objects_dae4cb4e8c7f446797a7c84c8544b05a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__15__mtls_required(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__15__mtls_required,
        mod_consts.const_str_plain__mtls_required,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_92493e348986cd0510805d06669d9136,
#endif
        code_objects_c5fdc3de921d77a450471772d878f991,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__16__create_default_metrics_options(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__16__create_default_metrics_options,
        mod_consts.const_str_plain__create_default_metrics_options,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4c5e1d2b34a82bcc3493b4fed9f36469,
#endif
        code_objects_5808ed73e669ce90cb56ca1260af82bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__17__has_custom_supplier(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__17__has_custom_supplier,
        mod_consts.const_str_plain__has_custom_supplier,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_223a6dab34ee5dbfcea6cb8787d661a1,
#endif
        code_objects_3daa972c1b33f0b036ec286985b42979,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__18__constructor_args(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__18__constructor_args,
        mod_consts.const_str_plain__constructor_args,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0942c1edbb706cce2ad2fe70cc0d77a1,
#endif
        code_objects_15f0f7c3c14c0d1aeaed1270a87b57d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__19__validate_certificate_config(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__19__validate_certificate_config,
        mod_consts.const_str_plain__validate_certificate_config,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_907a0abfb3c2c3d75700a4b18dcdc202,
#endif
        code_objects_95a3dfb3d19fe093b4fd7b5604b1524b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__1_get_subject_token(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__1_get_subject_token,
        mod_consts.const_str_plain_get_subject_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_83fa2fb09c64a91f72d0691b6fe5881f,
#endif
        code_objects_0c4747525292e6fc075706b51f68da3b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        mod_consts.const_str_digest_d7bb0385676dfebba595740a21db3a08,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__20__validate_file_or_url_config(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__20__validate_file_or_url_config,
        mod_consts.const_str_plain__validate_file_or_url_config,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e251ce69338b5d403d8b28add51a2db8,
#endif
        code_objects_cf25671faa8a54be4d944f1ca372b9d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__21__validate_single_source(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__21__validate_single_source,
        mod_consts.const_str_plain__validate_single_source,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_73318f5cc89c934919e5a2d5e6c54a02,
#endif
        code_objects_4236cf8e1da87458b897c4f1f4f64388,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__21__validate_single_source$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__21__validate_single_source$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a0951180aed9e1d10b48a27d590ad2d9,
#endif
        code_objects_326497e5c561ab7710ec9974e4dce4f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__22_from_info(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__22_from_info,
        mod_consts.const_str_plain_from_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_235941431ecb9ca24eb20b88770edeba,
#endif
        code_objects_f576cadbe30f306e3a5908bcf48e230d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        mod_consts.const_str_digest_795355c9624f82b268843b88b9ea35ac,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__23_from_file(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__23_from_file,
        mod_consts.const_str_plain_from_file,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_987cb2208d197b62244cc44a9c8137db,
#endif
        code_objects_e77313cd72090689e1a1ce8474eea28e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        mod_consts.const_str_digest_0552ef6c6dae574cab4e51b7e8731be8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__24_refresh(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__24_refresh,
        mod_consts.const_str_plain_refresh,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75,
#endif
        code_objects_4863e2715d89bcdf591333149a8a5d49,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        mod_consts.const_str_digest_aaa21d2925c4b66857e0fc2b4583907f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__2___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_565f6a2dde367206af64d83fe5ebf76c,
#endif
        code_objects_ec77a0ef3a36b001363de1ed85e30e38,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__3_get_subject_token(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__3_get_subject_token,
        mod_consts.const_str_plain_get_subject_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ae82c551d25fd9b320028e0d02e2931e,
#endif
        code_objects_8f2708364ac545e5e82cc0f869583403,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__4___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_28085e64f58791e1c1546e8fcf5a6f5d,
#endif
        code_objects_ef4feaf2f871972832a50a97189e4eb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__5_get_subject_token(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__5_get_subject_token,
        mod_consts.const_str_plain_get_subject_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6562805d29a072ba7f846e87bfc48969,
#endif
        code_objects_608ef8c274465fb8076cee66d14cfd1c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__6___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d4d19d12d24c52430f543e69e2c02f6e,
#endif
        code_objects_5e5b43dc9dc316fb50574f118b548d73,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__7_get_subject_token(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__7_get_subject_token,
        mod_consts.const_str_plain_get_subject_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_13266712e88c28fc4cd19c7c32af4f30,
#endif
        code_objects_c2c39736953ec7ea172e9a9de1b20c68,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__8__read_trust_chain(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__8__read_trust_chain,
        mod_consts.const_str_plain__read_trust_chain,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dcac1c7e005916bc64279c7a6d371d56,
#endif
        code_objects_c97f0ab34b35d9065c996ec4633b04d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$identity_pool$$$function__9__encode_cert(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$identity_pool$$$function__9__encode_cert,
        mod_consts.const_str_plain__encode_cert,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c3012d37836e9dc4ab7e2b2d4a7e4667,
#endif
        code_objects_9964c12e4a68006ad471a9bdb64a9b9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$identity_pool,
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

static function_impl_code const function_table_google$auth$identity_pool[] = {
impl_google$auth$identity_pool$$$function__21__validate_single_source$$$function__1_lambda,
impl_google$auth$identity_pool$$$function__1_get_subject_token,
impl_google$auth$identity_pool$$$function__2___init__,
impl_google$auth$identity_pool$$$function__3_get_subject_token,
impl_google$auth$identity_pool$$$function__4___init__,
impl_google$auth$identity_pool$$$function__5_get_subject_token,
impl_google$auth$identity_pool$$$function__6___init__,
impl_google$auth$identity_pool$$$function__7_get_subject_token,
impl_google$auth$identity_pool$$$function__8__read_trust_chain,
impl_google$auth$identity_pool$$$function__9__encode_cert,
impl_google$auth$identity_pool$$$function__10__parse_token_data,
impl_google$auth$identity_pool$$$function__11___init__,
impl_google$auth$identity_pool$$$function__12_retrieve_subject_token,
impl_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths,
impl_google$auth$identity_pool$$$function__14__get_cert_bytes,
impl_google$auth$identity_pool$$$function__15__mtls_required,
impl_google$auth$identity_pool$$$function__16__create_default_metrics_options,
impl_google$auth$identity_pool$$$function__17__has_custom_supplier,
impl_google$auth$identity_pool$$$function__18__constructor_args,
impl_google$auth$identity_pool$$$function__19__validate_certificate_config,
impl_google$auth$identity_pool$$$function__20__validate_file_or_url_config,
impl_google$auth$identity_pool$$$function__21__validate_single_source,
impl_google$auth$identity_pool$$$function__22_from_info,
impl_google$auth$identity_pool$$$function__23_from_file,
impl_google$auth$identity_pool$$$function__24_refresh,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$identity_pool);
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
        module_google$auth$identity_pool,
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
        function_table_google$auth$identity_pool,
        sizeof(function_table_google$auth$identity_pool) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.identity_pool";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$identity_pool(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$identity_pool");

    // Store the module for future use.
    module_google$auth$identity_pool = module;

    moduledict_google$auth$identity_pool = MODULE_DICT(module_google$auth$identity_pool);

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
        PRINT_STRING("google$auth$identity_pool: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$identity_pool: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$identity_pool: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.identity_pool" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$identity_pool\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$identity_pool,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$identity_pool,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$identity_pool,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$identity_pool,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$identity_pool,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$identity_pool);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$identity_pool);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
struct Nuitka_CellObject *outline_5_var___class__ = NULL;
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
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
PyObject *locals_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_55 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_google$auth$identity_pool$$$class__2__TokenContent_84 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$class__2__TokenContent_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_google$auth$identity_pool$$$class__3__FileSupplier_95 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$class__3__FileSupplier_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_google$auth$identity_pool$$$class__4__UrlSupplier_116 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$class__4__UrlSupplier_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_google$auth$identity_pool$$$class__5__X509Supplier_146 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$class__5__X509Supplier_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *locals_google$auth$identity_pool$$$class__6_Credentials_255 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$identity_pool$$$class__6_Credentials_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_3e330d699e870fc2a5d61526c07c8a09;
UPDATE_STRING_DICT0(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$identity_pool = MAKE_MODULE_FRAME(code_objects_cd3c5be9d349be9203f49250f9a7f32f, module_google$auth$identity_pool);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$identity_pool$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$identity_pool$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
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
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$identity_pool;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Mapping_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 39;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$identity_pool,
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


exception_lineno = 39;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_4);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool, exception_keeper_lineno_1);
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
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$identity_pool;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Mapping_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 42;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$auth$identity_pool,
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


exception_lineno = 42;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_5);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 38;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$identity_pool->m_frame)) {
        frame_frame_google$auth$identity_pool->m_frame.f_lineno = exception_tb->tb_lineno;
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
tmp_name_value_3 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$identity_pool;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 43;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_abc, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_base64;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$auth$identity_pool;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 44;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_base64, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$auth$identity_pool;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 45;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT0(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
tmp_import_name_from_3 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_3 == NULL));
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$auth$identity_pool,
        mod_consts.const_str_plain_NamedTuple,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_NamedTuple);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$auth$identity_pool;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain__helpers_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 49;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$auth$identity_pool,
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


exception_lineno = 49;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$auth$identity_pool;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 50;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$auth$identity_pool,
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


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$auth$identity_pool;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_external_account_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 51;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$auth$identity_pool,
        mod_consts.const_str_plain_external_account,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_external_account);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_external_account, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_587455d82fd83f874416fce4cf44fc5a;
tmp_globals_arg_value_9 = (PyObject *)moduledict_google$auth$identity_pool;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain__mtls_helper_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 52;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$auth$identity_pool,
        mod_consts.const_str_plain__mtls_helper,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain__mtls_helper);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__mtls_helper, tmp_assign_source_14);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_1 = module_var_accessor_google$auth$identity_pool$abc(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto try_except_handler_3;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_3;
}
tmp_assign_source_15 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
bool tmp_condition_result_2;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
tmp_key_value_1 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_key_value_2 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_16 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_16 == NULL) {
    tmp_assign_source_16 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_16);
}
assert(!(tmp_assign_source_16 == NULL));
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_16 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_16);
condexpr_end_1:;
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_16;
}
{
bool tmp_condition_result_3;
PyObject *tmp_key_value_3;
PyObject *tmp_dict_arg_value_3;
tmp_key_value_3 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_3 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_1__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_3;
}
branch_no_2:;
{
bool tmp_condition_result_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_3;
}
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_3;
}
tmp_args_value_1 = mod_consts.const_tuple_str_plain_SubjectTokenSupplier_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 55;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_17;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_3;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_10, tmp_default_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_3;
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


exception_lineno = 55;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_3;
}
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 55;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 55;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_4:;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_18;
}
branch_end_3:;
{
PyObject *tmp_assign_source_19;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_55 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_86c4186cb6e339e309dca99d5150bc7e;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_55, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_digest_edd0ed71a61af8cae1450a8b8bf9ef39;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_55, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_SubjectTokenSupplier;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_55, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_55;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_55, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
}
frame_frame_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_2 = MAKE_CLASS_FRAME(tstate, code_objects_8e7613bf44088d352933576a7f9f58e4, module_google$auth$identity_pool, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_2);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_2) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = PyObject_GetItem(locals_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_55, mod_consts.const_str_plain_abc);

if (tmp_called_instance_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_1 = module_var_accessor_google$auth$identity_pool$abc(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_1 = MAKE_FUNCTION_google$auth$identity_pool$$$function__1_get_subject_token(tstate);

frame_frame_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_2->m_frame.f_lineno = 62;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_55, mod_consts.const_str_plain_get_subject_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_55, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_2 = mod_consts.const_str_plain_SubjectTokenSupplier;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_55;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 55;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_20;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_19 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_19);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_55);
locals_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_55 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_55);
locals_google$auth$identity_pool$$$class__1_SubjectTokenSupplier_55 = NULL;
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
exception_lineno = 55;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_SubjectTokenSupplier, tmp_assign_source_19);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__prepared);
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
PyObject *tmp_assign_source_21;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_google$auth$identity_pool$NamedTuple(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NamedTuple);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;

    goto try_except_handler_6;
}
tmp_assign_source_21 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_3);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_22 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_1;
PyObject *tmp_type_arg_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_6;
}
tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_1, 0);
if (tmp_type_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_6;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_2);
CHECK_OBJECT(tmp_type_arg_2);
Py_DECREF(tmp_type_arg_2);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_6;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_24 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_24;
}
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_6;
}
tmp_tuple_element_4 = mod_consts.const_str_plain__TokenContent;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 84;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_25;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_6;
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
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_11, tmp_default_value_2);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_6;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_3;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_3 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_6;
}
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 84;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 84;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_26;
}
branch_end_5:;
{
PyObject *tmp_assign_source_27;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_google$auth$identity_pool$$$class__2__TokenContent_84 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_86c4186cb6e339e309dca99d5150bc7e;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__2__TokenContent_84, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_07eb69041eecba7732b9a213326a4bd5;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__2__TokenContent_84, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain__TokenContent;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__2__TokenContent_84, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_84;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__2__TokenContent_84, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_8;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__2__TokenContent_84, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_8;
}
frame_frame_google$auth$identity_pool$$$class__2__TokenContent_3 = MAKE_CLASS_FRAME(tstate, code_objects_92a5d9942d421769ba86c2705c1bf7b4, module_google$auth$identity_pool, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$class__2__TokenContent_3);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$class__2__TokenContent_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = PyObject_GetItem(locals_google$auth$identity_pool$$$class__2__TokenContent_84, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_1 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_ass_subscribed_1 = PyObject_GetItem(locals_google$auth$identity_pool$$$class__2__TokenContent_84, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_1);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_content;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = PyObject_GetItem(locals_google$auth$identity_pool$$$class__2__TokenContent_84, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_2 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_ass_subscribed_2 = PyObject_GetItem(locals_google$auth$identity_pool$$$class__2__TokenContent_84, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_2);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_location;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$class__2__TokenContent_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$class__2__TokenContent_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$class__2__TokenContent_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$class__2__TokenContent_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_google$auth$identity_pool$$$class__2__TokenContent_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_8;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__2__TokenContent_84, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_8;
}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_8;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__2__TokenContent_84, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_8;
}
branch_no_7:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain__TokenContent;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_google$auth$identity_pool$$$class__2__TokenContent_84;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 84;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_8;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_28;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_27 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_27);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_google$auth$identity_pool$$$class__2__TokenContent_84);
locals_google$auth$identity_pool$$$class__2__TokenContent_84 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$identity_pool$$$class__2__TokenContent_84);
locals_google$auth$identity_pool$$$class__2__TokenContent_84 = NULL;
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
exception_lineno = 84;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__TokenContent, tmp_assign_source_27);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
PyObject *tmp_assign_source_29;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_google$auth$identity_pool$SubjectTokenSupplier(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SubjectTokenSupplier);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;

    goto try_except_handler_9;
}
tmp_assign_source_29 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_29, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_30 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_2;
PyObject *tmp_type_arg_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_9;
}
tmp_condition_result_10 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_13 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_2, 0);
if (tmp_type_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_9;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_4);
CHECK_OBJECT(tmp_type_arg_4);
Py_DECREF(tmp_type_arg_4);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_9;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_32 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_32;
}
{
bool tmp_condition_result_11;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_9;
}
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_9;
}
tmp_tuple_element_8 = mod_consts.const_str_plain__FileSupplier;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 95;
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_33;
}
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_16 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_9;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_12, tmp_default_value_3);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_9;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_5;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_5 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_5);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_9;
}
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 95;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 95;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_9:;
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_34;
}
branch_end_8:;
{
PyObject *tmp_assign_source_35;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_google$auth$identity_pool$$$class__3__FileSupplier_95 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_86c4186cb6e339e309dca99d5150bc7e;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__3__FileSupplier_95, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_digest_1b044300a33409337ed8665a25002633;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__3__FileSupplier_95, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain__FileSupplier;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__3__FileSupplier_95, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_95;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__3__FileSupplier_95, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_11;
}
frame_frame_google$auth$identity_pool$$$class__3__FileSupplier_4 = MAKE_CLASS_FRAME(tstate, code_objects_ad6fb66ba82b9afe8d1d4ede1c45bea2, module_google$auth$identity_pool, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$class__3__FileSupplier_4);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$class__3__FileSupplier_4) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_google$auth$identity_pool$$$function__2___init__(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__3__FileSupplier_95, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_19 = PyObject_GetItem(locals_google$auth$identity_pool$$$class__3__FileSupplier_95, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_19 = module_var_accessor_google$auth$identity_pool$_helpers(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_expression_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_args_element_value_2 = PyObject_GetItem(locals_google$auth$identity_pool$$$class__3__FileSupplier_95, mod_consts.const_str_plain_SubjectTokenSupplier);

if (tmp_args_element_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_2 = module_var_accessor_google$auth$identity_pool$SubjectTokenSupplier(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SubjectTokenSupplier);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 103;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_args_element_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

frame_frame_google$auth$identity_pool$$$class__3__FileSupplier_4->m_frame.f_lineno = 103;
tmp_called_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_args_element_value_3 = MAKE_FUNCTION_google$auth$identity_pool$$$function__3_get_subject_token(tstate);

frame_frame_google$auth$identity_pool$$$class__3__FileSupplier_4->m_frame.f_lineno = 103;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__3__FileSupplier_95, mod_consts.const_str_plain_get_subject_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$class__3__FileSupplier_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$class__3__FileSupplier_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$class__3__FileSupplier_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$class__3__FileSupplier_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_google$auth$identity_pool$$$class__3__FileSupplier_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_11;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_2f39796e96a099605feb891db24987b1_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__3__FileSupplier_95, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_11;
}
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_11;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__3__FileSupplier_95, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_11;
}
branch_no_10:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_10 = mod_consts.const_str_plain__FileSupplier;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_google$auth$identity_pool$$$class__3__FileSupplier_95;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 95;
tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_11;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_36;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_35 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_35);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_google$auth$identity_pool$$$class__3__FileSupplier_95);
locals_google$auth$identity_pool$$$class__3__FileSupplier_95 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$identity_pool$$$class__3__FileSupplier_95);
locals_google$auth$identity_pool$$$class__3__FileSupplier_95 = NULL;
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
exception_lineno = 95;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__FileSupplier, tmp_assign_source_35);
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
PyObject *tmp_assign_source_37;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = module_var_accessor_google$auth$identity_pool$SubjectTokenSupplier(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SubjectTokenSupplier);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;

    goto try_except_handler_12;
}
tmp_assign_source_37 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_37, 0, tmp_tuple_element_11);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_38 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_14;
int tmp_truth_name_3;
PyObject *tmp_type_arg_6;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_12;
}
tmp_condition_result_14 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_20 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_3, 0);
if (tmp_type_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_12;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_6);
CHECK_OBJECT(tmp_type_arg_6);
Py_DECREF(tmp_type_arg_6);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_12;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_40 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_40;
}
{
bool tmp_condition_result_15;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_12;
}
tmp_condition_result_15 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_12;
}
tmp_tuple_element_12 = mod_consts.const_str_plain__UrlSupplier;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 116;
tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_41;
}
{
bool tmp_condition_result_16;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_23 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_12;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_16 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_24;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_24, tmp_name_value_13, tmp_default_value_4);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_12;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_25;
PyObject *tmp_type_arg_7;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_7 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_7);
assert(!(tmp_expression_value_25 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_12;
}
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 116;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 116;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_12:;
goto branch_end_11;
branch_no_11:;
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_42;
}
branch_end_11:;
{
PyObject *tmp_assign_source_43;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_google$auth$identity_pool$$$class__4__UrlSupplier_116 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_86c4186cb6e339e309dca99d5150bc7e;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__4__UrlSupplier_116, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_digest_15b6774c28ad5ed16ac93ad4e5310818;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__4__UrlSupplier_116, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain__UrlSupplier;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__4__UrlSupplier_116, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_116;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__4__UrlSupplier_116, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_14;
}
frame_frame_google$auth$identity_pool$$$class__4__UrlSupplier_5 = MAKE_CLASS_FRAME(tstate, code_objects_c43d7d67f07bbac7dd0cf52d2330ae7f, module_google$auth$identity_pool, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$class__4__UrlSupplier_5);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$class__4__UrlSupplier_5) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_google$auth$identity_pool$$$function__4___init__(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__4__UrlSupplier_116, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_26 = PyObject_GetItem(locals_google$auth$identity_pool$$$class__4__UrlSupplier_116, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_26 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_26 = module_var_accessor_google$auth$identity_pool$_helpers(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_26);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_args_element_value_4 = PyObject_GetItem(locals_google$auth$identity_pool$$$class__4__UrlSupplier_116, mod_consts.const_str_plain_SubjectTokenSupplier);

if (tmp_args_element_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_4 = module_var_accessor_google$auth$identity_pool$SubjectTokenSupplier(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SubjectTokenSupplier);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_args_element_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

frame_frame_google$auth$identity_pool$$$class__4__UrlSupplier_5->m_frame.f_lineno = 125;
tmp_called_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_args_element_value_5 = MAKE_FUNCTION_google$auth$identity_pool$$$function__5_get_subject_token(tstate);

frame_frame_google$auth$identity_pool$$$class__4__UrlSupplier_5->m_frame.f_lineno = 125;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__4__UrlSupplier_116, mod_consts.const_str_plain_get_subject_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$class__4__UrlSupplier_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$class__4__UrlSupplier_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$class__4__UrlSupplier_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$class__4__UrlSupplier_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_google$auth$identity_pool$$$class__4__UrlSupplier_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_14;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_75449aa060f10f3014a37aab2c187130_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__4__UrlSupplier_116, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_14;
}
{
nuitka_bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_14;
}
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__4__UrlSupplier_116, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_14;
}
branch_no_13:;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_12 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_14 = mod_consts.const_str_plain__UrlSupplier;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = locals_google$auth$identity_pool$$$class__4__UrlSupplier_116;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 116;
tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_14;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_44;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_43 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_43);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_google$auth$identity_pool$$$class__4__UrlSupplier_116);
locals_google$auth$identity_pool$$$class__4__UrlSupplier_116 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$identity_pool$$$class__4__UrlSupplier_116);
locals_google$auth$identity_pool$$$class__4__UrlSupplier_116 = NULL;
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
exception_lineno = 116;
goto try_except_handler_12;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__UrlSupplier, tmp_assign_source_43);
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
PyObject *tmp_assign_source_45;
PyObject *tmp_tuple_element_15;
tmp_tuple_element_15 = module_var_accessor_google$auth$identity_pool$SubjectTokenSupplier(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SubjectTokenSupplier);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;

    goto try_except_handler_15;
}
tmp_assign_source_45 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_45, 0, tmp_tuple_element_15);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_46 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_18;
int tmp_truth_name_4;
PyObject *tmp_type_arg_8;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_15;
}
tmp_condition_result_18 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_27 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_4, 0);
if (tmp_type_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_15;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_8);
CHECK_OBJECT(tmp_type_arg_8);
Py_DECREF(tmp_type_arg_8);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_15;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_48 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_48;
}
{
bool tmp_condition_result_19;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_28 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_15;
}
tmp_condition_result_19 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_29;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_15;
}
tmp_tuple_element_16 = mod_consts.const_str_plain__X509Supplier;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 146;
tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_49;
}
{
bool tmp_condition_result_20;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_30 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_15;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_20 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_20 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_31;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_31 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_31, tmp_name_value_14, tmp_default_value_5);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_15;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_32;
PyObject *tmp_type_arg_9;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_9 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_32 = BUILTIN_TYPE1(tmp_type_arg_9);
assert(!(tmp_expression_value_32 == NULL));
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_17);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_15;
}
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 146;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 146;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_15;
}
branch_no_15:;
goto branch_end_14;
branch_no_14:;
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_50;
}
branch_end_14:;
{
PyObject *tmp_assign_source_51;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_google$auth$identity_pool$$$class__5__X509Supplier_146 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_86c4186cb6e339e309dca99d5150bc7e;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__5__X509Supplier_146, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_digest_0b317a9027cf154efa22300da4edfa5a;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__5__X509Supplier_146, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_plain__X509Supplier;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__5__X509Supplier_146, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_int_pos_146;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__5__X509Supplier_146, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_17;
}
frame_frame_google$auth$identity_pool$$$class__5__X509Supplier_6 = MAKE_CLASS_FRAME(tstate, code_objects_02fd4e308b1373708982e91063cc22c5, module_google$auth$identity_pool, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$class__5__X509Supplier_6);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$class__5__X509Supplier_6) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_google$auth$identity_pool$$$function__6___init__(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__5__X509Supplier_146, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_33 = PyObject_GetItem(locals_google$auth$identity_pool$$$class__5__X509Supplier_146, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_33 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_33 = module_var_accessor_google$auth$identity_pool$_helpers(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_expression_value_33);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_args_element_value_6 = PyObject_GetItem(locals_google$auth$identity_pool$$$class__5__X509Supplier_146, mod_consts.const_str_plain_SubjectTokenSupplier);

if (tmp_args_element_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_6 = module_var_accessor_google$auth$identity_pool$SubjectTokenSupplier(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SubjectTokenSupplier);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_15);

exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_args_element_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

frame_frame_google$auth$identity_pool$$$class__5__X509Supplier_6->m_frame.f_lineno = 153;
tmp_called_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_args_element_value_7 = MAKE_FUNCTION_google$auth$identity_pool$$$function__7_get_subject_token(tstate);

frame_frame_google$auth$identity_pool$$$class__5__X509Supplier_6->m_frame.f_lineno = 153;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__5__X509Supplier_146, mod_consts.const_str_plain_get_subject_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$identity_pool$$$function__8__read_trust_chain(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__5__X509Supplier_146, mod_consts.const_str_plain__read_trust_chain, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$identity_pool$$$function__9__encode_cert(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__5__X509Supplier_146, mod_consts.const_str_plain__encode_cert, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_2 = "o";
    goto frame_exception_exit_6;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$class__5__X509Supplier_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$class__5__X509Supplier_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$class__5__X509Supplier_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$class__5__X509Supplier_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_google$auth$identity_pool$$$class__5__X509Supplier_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_17;
skip_nested_handling_5:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__trust_chain_path_str_plain__leaf_cert_callback_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__5__X509Supplier_146, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_17;
}
{
nuitka_bool tmp_condition_result_21;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_21 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_17;
}
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__5__X509Supplier_146, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_17;
}
branch_no_16:;
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_18 = mod_consts.const_str_plain__X509Supplier;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_18 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_18);
tmp_tuple_element_18 = locals_google$auth$identity_pool$$$class__5__X509Supplier_146;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 146;
tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_17;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_52;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_51 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_51);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_google$auth$identity_pool$$$class__5__X509Supplier_146);
locals_google$auth$identity_pool$$$class__5__X509Supplier_146 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$identity_pool$$$class__5__X509Supplier_146);
locals_google$auth$identity_pool$$$class__5__X509Supplier_146 = NULL;
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
exception_lineno = 146;
goto try_except_handler_15;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__X509Supplier, tmp_assign_source_51);
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
PyObject *tmp_assign_source_53;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_str_plain_text_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_53 = MAKE_FUNCTION_google$auth$identity_pool$$$function__10__parse_token_data(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_token_data, tmp_assign_source_53);
}
{
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_54;
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_34;
tmp_expression_value_34 = module_var_accessor_google$auth$identity_pool$external_account(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_external_account);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;

    goto try_except_handler_18;
}
tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_Credentials);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_18;
}
tmp_assign_source_54 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_54, 0, tmp_tuple_element_19);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_55 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
tmp_assign_source_56 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_22;
int tmp_truth_name_5;
PyObject *tmp_type_arg_10;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_18;
}
tmp_condition_result_22 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_35 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_35, tmp_subscript_value_5, 0);
if (tmp_type_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_18;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_10);
CHECK_OBJECT(tmp_type_arg_10);
Py_DECREF(tmp_type_arg_10);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_18;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_57 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_57;
}
{
bool tmp_condition_result_23;
PyObject *tmp_expression_value_36;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_36 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_18;
}
tmp_condition_result_23 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_37;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_37 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_18;
}
tmp_tuple_element_20 = mod_consts.const_str_plain_Credentials;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_20 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 255;
tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_58;
}
{
bool tmp_condition_result_24;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_38 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_18;
}
tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_24 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_24 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_mod_expr_left_6;
PyObject *tmp_mod_expr_right_6;
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_39;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_21 = BUILTIN_GETATTR(tstate, tmp_expression_value_39, tmp_name_value_15, tmp_default_value_6);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_18;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_40;
PyObject *tmp_type_arg_11;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_11 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_40 = BUILTIN_TYPE1(tmp_type_arg_11);
assert(!(tmp_expression_value_40 == NULL));
tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_21);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_18;
}
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 255;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 255;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_18;
}
branch_no_18:;
goto branch_end_17;
branch_no_17:;
{
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_59;
}
branch_end_17:;
{
PyObject *tmp_assign_source_60;
outline_5_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_google$auth$identity_pool$$$class__6_Credentials_255 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_86c4186cb6e339e309dca99d5150bc7e;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_digest_69ecd93410a2f9cfa37108b5932bf677;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_plain_Credentials;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_int_pos_255;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_20;
}
frame_frame_google$auth$identity_pool$$$class__6_Credentials_7 = MAKE_CLASS_FRAME(tstate, code_objects_a09f619201e1e91c3aad5b90f5e73de1, module_google$auth$identity_pool, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$identity_pool$$$class__6_Credentials_7);
assert(Py_REFCNT(frame_frame_google$auth$identity_pool$$$class__6_Credentials_7) == 2);

// Framed code:
{
PyObject *tmp_defaults_2;
PyObject *tmp_tuple_element_22;
PyObject *tmp_expression_value_41;
tmp_expression_value_41 = PyObject_GetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain_external_account);

if (tmp_expression_value_41 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_41 = module_var_accessor_google$auth$identity_pool$external_account(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_external_account);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
        Py_INCREF(tmp_expression_value_41);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain__DEFAULT_TOKEN_URL);
CHECK_OBJECT(tmp_expression_value_41);
Py_DECREF(tmp_expression_value_41);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_22);
tmp_tuple_element_22 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_22);
tmp_tuple_element_22 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_2, 2, tmp_tuple_element_22);

tmp_dictset_value = MAKE_FUNCTION_google$auth$identity_pool$$$function__11___init__(tstate, tmp_defaults_2);

tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_42;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_43;
PyObject *tmp_args_element_value_9;
tmp_expression_value_42 = PyObject_GetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_42 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_42 = module_var_accessor_google$auth$identity_pool$_helpers(tstate);
if (unlikely(tmp_expression_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 392;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
        Py_INCREF(tmp_expression_value_42);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
tmp_expression_value_43 = PyObject_GetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain_external_account);

if (tmp_expression_value_43 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_43 = module_var_accessor_google$auth$identity_pool$external_account(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_external_account);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_19);

exception_lineno = 392;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
        Py_INCREF(tmp_expression_value_43);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_Credentials);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_19);

exception_lineno = 392;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
frame_frame_google$auth$identity_pool$$$class__6_Credentials_7->m_frame.f_lineno = 392;
tmp_called_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_2 = "c";
    goto frame_exception_exit_7;
}

tmp_args_element_value_9 = MAKE_FUNCTION_google$auth$identity_pool$$$function__12_retrieve_subject_token(tstate);

frame_frame_google$auth$identity_pool$$$class__6_Credentials_7->m_frame.f_lineno = 392;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain_retrieve_subject_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$identity_pool$$$function__13__get_mtls_cert_and_key_paths(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain__get_mtls_cert_and_key_paths, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_2 = "c";
    goto frame_exception_exit_7;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$identity_pool$$$function__14__get_cert_bytes(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain__get_cert_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_2 = "c";
    goto frame_exception_exit_7;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$identity_pool$$$function__15__mtls_required(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain__mtls_required, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_2 = "c";
    goto frame_exception_exit_7;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$identity_pool$$$function__16__create_default_metrics_options(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain__create_default_metrics_options, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_2 = "c";
    goto frame_exception_exit_7;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$identity_pool$$$function__17__has_custom_supplier(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain__has_custom_supplier, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_2 = "c";
    goto frame_exception_exit_7;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$identity_pool$$$function__18__constructor_args(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain__constructor_args, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_2 = "c";
    goto frame_exception_exit_7;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$identity_pool$$$function__19__validate_certificate_config(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain__validate_certificate_config, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_2 = "c";
    goto frame_exception_exit_7;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$identity_pool$$$function__20__validate_file_or_url_config(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain__validate_file_or_url_config, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_2 = "c";
    goto frame_exception_exit_7;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$identity_pool$$$function__21__validate_single_source(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain__validate_single_source, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
{
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_10;
tmp_called_value_20 = PyObject_GetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, const_str_plain_classmethod);

if (tmp_called_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_20 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}


tmp_args_element_value_10 = MAKE_FUNCTION_google$auth$identity_pool$$$function__22_from_info(tstate);

frame_frame_google$auth$identity_pool$$$class__6_Credentials_7->m_frame.f_lineno = 505;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 505;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain_from_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_11;
tmp_called_value_21 = PyObject_GetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, const_str_plain_classmethod);

if (tmp_called_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_21 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}


tmp_args_element_value_11 = MAKE_FUNCTION_google$auth$identity_pool$$$function__23_from_file(tstate);

frame_frame_google$auth$identity_pool$$$class__6_Credentials_7->m_frame.f_lineno = 533;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 533;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain_from_file, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$identity_pool$$$function__24_refresh(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain_refresh, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
type_description_2 = "c";
    goto frame_exception_exit_7;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_7:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool$$$class__6_Credentials_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool$$$class__6_Credentials_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool$$$class__6_Credentials_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$identity_pool$$$class__6_Credentials_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_google$auth$identity_pool$$$class__6_Credentials_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_20;
skip_nested_handling_6:;
tmp_dictset_value = mod_consts.const_tuple_fd26d292c07de83cbbf8c7bf66fd7ede_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_20;
}
{
nuitka_bool tmp_condition_result_25;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_6__bases;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_6__bases_orig;
tmp_condition_result_25 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_20;
}
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_6__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$identity_pool$$$class__6_Credentials_255, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_20;
}
branch_no_19:;
{
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_22;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_23;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_22 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_23 = mod_consts.const_str_plain_Credentials;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_23 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_23);
tmp_tuple_element_23 = locals_google$auth$identity_pool$$$class__6_Credentials_255;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_google$auth$identity_pool->m_frame.f_lineno = 255;
tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_20;
}
assert(Nuitka_Cell_GET(outline_5_var___class__) == NULL);
Nuitka_Cell_SET(outline_5_var___class__, tmp_assign_source_61);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_5_var___class__));
tmp_assign_source_60 = Nuitka_Cell_GET(outline_5_var___class__);
Py_INCREF(tmp_assign_source_60);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_DECREF(locals_google$auth$identity_pool$$$class__6_Credentials_255);
locals_google$auth$identity_pool$$$class__6_Credentials_255 = NULL;
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$identity_pool$$$class__6_Credentials_255);
locals_google$auth$identity_pool$$$class__6_Credentials_255 = NULL;
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
exception_lineno = 255;
goto try_except_handler_18;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials, tmp_assign_source_60);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$identity_pool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$identity_pool->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$identity_pool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$identity_pool);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_7:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$identity_pool", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.identity_pool" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$identity_pool);
    return module_google$auth$identity_pool;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$identity_pool, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$identity_pool", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'google$oauth2$challenges'
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



/* The "module_google$oauth2$challenges" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$oauth2$challenges;
PyDictObject *moduledict_google$oauth2$challenges;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_getpass;
PyObject *const_str_digest_d1393466d637b3da00faebb1c0f21467;
PyObject *const_str_digest_a9d0119da4c7155caaa09e6b8e9b5710;
PyObject *const_str_digest_31580a370ec2138cab9c9af9b2be733b;
PyObject *const_str_digest_02792f89fd80fed690eadbbaaf005036;
PyObject *const_str_digest_ed3ce36d9ae7ff27fcf7b3fe9666c755;
PyObject *const_str_digest_19ce14cc7aca94b618a74e69cfcf5778;
PyObject *const_str_digest_503eff08783c19097ea0dafa77d026fa;
PyObject *const_str_plain_get_user_password;
PyObject *const_tuple_str_digest_7a94e520fd7996038d503ce68809c26b_tuple;
PyObject *const_str_space;
PyObject *const_str_plain_credential;
PyObject *const_str_plain_webauthn_handler_factory;
PyObject *const_str_plain_WebauthnHandlerFactory;
PyObject *const_str_plain_get_handler;
PyObject *const_str_plain_stderr;
PyObject *const_str_plain_write;
PyObject *const_tuple_str_digest_c809140d63d9d5749e35f2948b83ca6d_tuple;
PyObject *const_str_plain__obtain_challenge_input_webauthn;
PyObject *const_str_digest_3e2eb3cd3bc77ee0f048afd2177d82b4;
PyObject *const_str_digest_cb18cc84f720f7f8a971eee15f5cba62;
PyObject *const_str_digest_61e05557b545411082f9f8db28d82179;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_ReauthFailError;
PyObject *const_tuple_str_digest_27c6c9059e68cb31c5806f3f813e17b4_tuple;
PyObject *const_str_plain_securityKey;
PyObject *const_str_plain_challenges;
PyObject *const_str_plain_applicationId;
PyObject *const_str_plain_relyingPartyId;
PyObject *const_str_plain_keyHandle;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_str_plain_pyu2f;
PyObject *const_str_plain_model;
PyObject *const_str_plain_RegisteredKey;
PyObject *const_str_plain_base64;
PyObject *const_str_plain_urlsafe_b64decode;
PyObject *const_str_plain_challenge;
PyObject *const_str_plain_challenge_data;
PyObject *const_str_plain_key;
PyObject *const_str_plain_tries;
PyObject *const_str_plain_convenience;
PyObject *const_str_plain_authenticator;
PyObject *const_str_plain_CreateCompositeAuthenticator;
PyObject *const_str_plain_REAUTH_ORIGIN;
PyObject *const_str_plain_Authenticate;
PyObject *const_tuple_str_plain_print_callback_tuple;
PyObject *const_str_plain_errors;
PyObject *const_str_plain_U2FError;
PyObject *const_str_plain_code;
PyObject *const_str_plain_DEVICE_INELIGIBLE;
PyObject *const_tuple_str_digest_2dc0e3df690dceb0f85e5c99f6570e24_tuple;
PyObject *const_str_plain_TIMEOUT;
PyObject *const_tuple_str_digest_26fe9e3496738ce44ffc684a6770178d_tuple;
PyObject *const_str_plain_PluginError;
PyObject *const_str_digest_c4cf61eff1d165b0d09e8a35f6cc700c;
PyObject *const_str_plain_NoDeviceFoundError;
PyObject *const_tuple_str_digest_8221e50487b2eacade26f6fa52c38965_tuple;
PyObject *const_tuple_str_plain_securityKey_tuple;
PyObject *const_str_plain_InvalidValue;
PyObject *const_tuple_str_digest_6a454767179e9c347b2eae7c6047dbf4_tuple;
PyObject *const_tuple_str_plain_challenges_tuple;
PyObject *const_tuple_str_plain_applicationId_tuple;
PyObject *const_tuple_str_plain_relyingPartyId_tuple;
PyObject *const_tuple_str_digest_616b11ef0fd56e8af0add0bac37944fb_tuple;
PyObject *const_tuple_str_digest_ffd40486c6037cf11e412195f125ffd3_tuple;
PyObject *const_tuple_str_digest_f49a7d78ab2440053dc9d5d52c248518_tuple;
PyObject *const_tuple_str_plain_keyHandle_tuple;
PyObject *const_tuple_str_digest_718793f05aafeee836458af6e3500b8a_tuple;
PyObject *const_str_plain_self;
PyObject *const_str_plain__unpadded_urlsafe_b64recode;
PyObject *const_str_plain_allow_credentials;
PyObject *const_str_plain_PublicKeyCredentialDescriptor;
PyObject *const_tuple_str_plain_id_tuple;
PyObject *const_str_plain_AuthenticationExtensionsClientInputs;
PyObject *const_tuple_str_plain_appid_tuple;
PyObject *const_tuple_str_plain_challenge_tuple;
PyObject *const_tuple_str_digest_89e78ecc41724de11fd623559a2b4586_tuple;
PyObject *const_str_plain_GetRequest;
PyObject *const_str_plain_WEBAUTHN_TIMEOUT_MS;
PyObject *const_str_plain_preferred;
PyObject *const_tuple_f2efb5a5638b3efbd3aed4f952d06d4c_tuple;
PyObject *const_str_digest_1a10d49c171acdfe79019d9dad87a4e5;
PyObject *const_str_plain_clientData;
PyObject *const_str_plain_response;
PyObject *const_str_plain_client_data_json;
PyObject *const_str_plain_authenticatorData;
PyObject *const_str_plain_authenticator_data;
PyObject *const_str_plain_signatureData;
PyObject *const_str_plain_signature;
PyObject *const_str_plain_id;
PyObject *const_str_plain_securityKeyReplyType;
PyObject *const_int_pos_2;
PyObject *const_str_plain_urlsafe_b64encode;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_rstrip;
PyObject *const_tuple_str_chr_61_tuple;
PyObject *const_str_digest_1652a00dbd1dcbe4e47524d4222ef80c;
PyObject *const_str_plain_ReauthSamlChallengeFailError;
PyObject *const_str_plain_SAML_CHALLENGE_MESSAGE;
PyObject *const_str_digest_166ec5be39a33333d880dc6d38f13a39;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_sys;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain__helpers_tuple;
PyObject *const_str_plain__helpers;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
PyObject *const_tuple_str_plain_webauthn_handler_factory_tuple;
PyObject *const_str_digest_669dcc8b01b9a3bfbb4fd67e3a43785b;
PyObject *const_tuple_9f7ec66c90ad345cca61931da4e9b874_tuple;
PyObject *const_str_digest_71461d07e5aa3f06e7657a0724e6966e;
PyObject *const_str_digest_0d72a43129ad250073b6d5b47307cf17;
PyObject *const_int_pos_120000;
PyObject *const_str_plain_metaclass;
PyObject *const_str_plain_ABCMeta;
PyObject *const_str_plain___prepare__;
PyObject *const_tuple_str_plain_ReauthChallenge_tuple_empty_tuple;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_04f3045c17b3cdb3e855af8ec9d2e295;
PyObject *const_str_digest_a89098ae66b25c8dbb8c0801a333b493;
PyObject *const_str_plain_ReauthChallenge;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_55;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_property;
PyObject *const_str_plain_abstractmethod;
PyObject *const_str_digest_c0d8b8f1f3c3464a23683efb429a266e;
PyObject *const_str_plain_is_locally_eligible;
PyObject *const_str_digest_364535809cc5623664fcd233fc000901;
PyObject *const_str_plain_obtain_challenge_input;
PyObject *const_str_digest_a36281e0906edcd9c1908bfef7ebb27f;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_PasswordChallenge;
PyObject *const_str_digest_f2bd53598978ccb23018d91d314d670a;
PyObject *const_int_pos_88;
PyObject *const_str_plain_PASSWORD;
PyObject *const_str_digest_81884ec0e260ff7b0606e3ea212f4535;
PyObject *const_str_digest_0419ad4aa0210af65eb12c142187ec85;
PyObject *const_str_plain_copy_docstring;
PyObject *const_str_digest_530e6ac8359a288ddc1b51c7fa0dd595;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_SecurityKeyChallenge;
PyObject *const_str_digest_640e79eb58893aab22b6ceb8c65b74ba;
PyObject *const_int_pos_107;
PyObject *const_str_plain_SECURITY_KEY;
PyObject *const_str_digest_30043885bd9f35c534cc43ec7e7143c4;
PyObject *const_str_digest_fdbc34e695dbe42f3d92e7894e3fbc33;
PyObject *const_str_digest_a1e55d63d48b7c18aeb8e5bb566abe6c;
PyObject *const_str_digest_b9284c7063d7b2205582617da0b44a66;
PyObject *const_str_digest_7a829d2ff5d5a0908d4fd34056db660b;
PyObject *const_str_plain_SamlChallenge;
PyObject *const_str_digest_c11084c010f2652a4a4d920febbd03b0;
PyObject *const_int_pos_255;
PyObject *const_str_plain_SAML;
PyObject *const_str_digest_2e211d833eda3986f3fc9e11598a9a00;
PyObject *const_str_digest_b23808e8ea2eac4d9e8d1db9690fd9ca;
PyObject *const_str_digest_2a26bf50df930ddd4cb25d892d059285;
PyObject *const_str_plain_AVAILABLE_CHALLENGES;
PyObject *const_str_digest_6cd06f79e092d37213e0748021c09844;
PyObject *const_str_digest_aa06ddb4b5a8c86cf9cae7789a4aa5e4;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_7cd870d609c94866d86695edc42419df_tuple;
PyObject *const_tuple_str_plain_self_str_plain_s_str_plain_b_tuple;
PyObject *const_tuple_str_plain_text_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_unused_metadata_str_plain_passwd_tuple;
PyObject *const_tuple_str_plain_self_str_plain_metadata_tuple;
PyObject *const_tuple_5051ebf81c933de3b0501fc81714c646_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[173];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.oauth2.challenges"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_getpass);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1393466d637b3da00faebb1c0f21467);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9d0119da4c7155caaa09e6b8e9b5710);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_31580a370ec2138cab9c9af9b2be733b);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_02792f89fd80fed690eadbbaaf005036);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed3ce36d9ae7ff27fcf7b3fe9666c755);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_19ce14cc7aca94b618a74e69cfcf5778);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_503eff08783c19097ea0dafa77d026fa);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_user_password);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7a94e520fd7996038d503ce68809c26b_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_credential);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_webauthn_handler_factory);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebauthnHandlerFactory);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_handler);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_stderr);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c809140d63d9d5749e35f2948b83ca6d_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__obtain_challenge_input_webauthn);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_3e2eb3cd3bc77ee0f048afd2177d82b4);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb18cc84f720f7f8a971eee15f5cba62);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_61e05557b545411082f9f8db28d82179);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReauthFailError);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_27c6c9059e68cb31c5806f3f813e17b4_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_securityKey);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_challenges);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_applicationId);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_relyingPartyId);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_keyHandle);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_pyu2f);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_model);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_RegisteredKey);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_base64);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlsafe_b64decode);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_challenge);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_challenge_data);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_key);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_tries);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_convenience);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_authenticator);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateCompositeAuthenticator);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_REAUTH_ORIGIN);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_Authenticate);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_print_callback_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_errors);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_U2FError);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_code);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEVICE_INELIGIBLE);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2dc0e3df690dceb0f85e5c99f6570e24_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_TIMEOUT);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_26fe9e3496738ce44ffc684a6770178d_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_PluginError);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4cf61eff1d165b0d09e8a35f6cc700c);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoDeviceFoundError);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8221e50487b2eacade26f6fa52c38965_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_securityKey_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidValue);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6a454767179e9c347b2eae7c6047dbf4_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_challenges_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_applicationId_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_relyingPartyId_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_616b11ef0fd56e8af0add0bac37944fb_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ffd40486c6037cf11e412195f125ffd3_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f49a7d78ab2440053dc9d5d52c248518_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_keyHandle_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_718793f05aafeee836458af6e3500b8a_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain__unpadded_urlsafe_b64recode);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_allow_credentials);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_PublicKeyCredentialDescriptor);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_id_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_AuthenticationExtensionsClientInputs);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_appid_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_challenge_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_89e78ecc41724de11fd623559a2b4586_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetRequest);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_WEBAUTHN_TIMEOUT_MS);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_preferred);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_f2efb5a5638b3efbd3aed4f952d06d4c_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_1a10d49c171acdfe79019d9dad87a4e5);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_clientData);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_client_data_json);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_authenticatorData);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_authenticator_data);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_signatureData);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_signature);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_id);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_securityKeyReplyType);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlsafe_b64encode);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_61_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_1652a00dbd1dcbe4e47524d4222ef80c);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReauthSamlChallengeFailError);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_SAML_CHALLENGE_MESSAGE);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_166ec5be39a33333d880dc6d38f13a39);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain__helpers);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_webauthn_handler_factory_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_669dcc8b01b9a3bfbb4fd67e3a43785b);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_9f7ec66c90ad345cca61931da4e9b874_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_71461d07e5aa3f06e7657a0724e6966e);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d72a43129ad250073b6d5b47307cf17);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_int_pos_120000);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReauthChallenge_tuple_empty_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_04f3045c17b3cdb3e855af8ec9d2e295);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_a89098ae66b25c8dbb8c0801a333b493);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReauthChallenge);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_int_pos_55);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_c0d8b8f1f3c3464a23683efb429a266e);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_locally_eligible);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_364535809cc5623664fcd233fc000901);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_obtain_challenge_input);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_a36281e0906edcd9c1908bfef7ebb27f);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_PasswordChallenge);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2bd53598978ccb23018d91d314d670a);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_int_pos_88);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_PASSWORD);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_81884ec0e260ff7b0606e3ea212f4535);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_0419ad4aa0210af65eb12c142187ec85);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy_docstring);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_530e6ac8359a288ddc1b51c7fa0dd595);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_SecurityKeyChallenge);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_640e79eb58893aab22b6ceb8c65b74ba);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_int_pos_107);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_SECURITY_KEY);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_30043885bd9f35c534cc43ec7e7143c4);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_fdbc34e695dbe42f3d92e7894e3fbc33);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_a1e55d63d48b7c18aeb8e5bb566abe6c);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_b9284c7063d7b2205582617da0b44a66);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a829d2ff5d5a0908d4fd34056db660b);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_SamlChallenge);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_c11084c010f2652a4a4d920febbd03b0);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_int_pos_255);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_SAML);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e211d833eda3986f3fc9e11598a9a00);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_b23808e8ea2eac4d9e8d1db9690fd9ca);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a26bf50df930ddd4cb25d892d059285);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_AVAILABLE_CHALLENGES);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_6cd06f79e092d37213e0748021c09844);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa06ddb4b5a8c86cf9cae7789a4aa5e4);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_7cd870d609c94866d86695edc42419df_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_s_str_plain_b_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_unused_metadata_str_plain_passwd_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_metadata_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_5051ebf81c933de3b0501fc81714c646_tuple);
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
void checkModuleConstants_google$oauth2$challenges(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_getpass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getpass);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1393466d637b3da00faebb1c0f21467));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1393466d637b3da00faebb1c0f21467);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9d0119da4c7155caaa09e6b8e9b5710));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9d0119da4c7155caaa09e6b8e9b5710);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_31580a370ec2138cab9c9af9b2be733b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31580a370ec2138cab9c9af9b2be733b);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_02792f89fd80fed690eadbbaaf005036));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_02792f89fd80fed690eadbbaaf005036);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed3ce36d9ae7ff27fcf7b3fe9666c755));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed3ce36d9ae7ff27fcf7b3fe9666c755);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_19ce14cc7aca94b618a74e69cfcf5778));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_19ce14cc7aca94b618a74e69cfcf5778);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_503eff08783c19097ea0dafa77d026fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_503eff08783c19097ea0dafa77d026fa);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_user_password));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_user_password);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7a94e520fd7996038d503ce68809c26b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_7a94e520fd7996038d503ce68809c26b_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_credential));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credential);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_webauthn_handler_factory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_webauthn_handler_factory);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebauthnHandlerFactory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WebauthnHandlerFactory);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_handler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_handler);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_stderr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stderr);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c809140d63d9d5749e35f2948b83ca6d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c809140d63d9d5749e35f2948b83ca6d_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__obtain_challenge_input_webauthn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__obtain_challenge_input_webauthn);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_3e2eb3cd3bc77ee0f048afd2177d82b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3e2eb3cd3bc77ee0f048afd2177d82b4);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb18cc84f720f7f8a971eee15f5cba62));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cb18cc84f720f7f8a971eee15f5cba62);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_61e05557b545411082f9f8db28d82179));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_61e05557b545411082f9f8db28d82179);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReauthFailError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReauthFailError);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_27c6c9059e68cb31c5806f3f813e17b4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_27c6c9059e68cb31c5806f3f813e17b4_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_securityKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_securityKey);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_challenges));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_challenges);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_applicationId));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_applicationId);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_relyingPartyId));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_relyingPartyId);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_keyHandle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_keyHandle);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_pyu2f));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pyu2f);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_RegisteredKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RegisteredKey);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_base64));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base64);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlsafe_b64decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlsafe_b64decode);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_challenge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_challenge);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_challenge_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_challenge_data);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_tries));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tries);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_convenience));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_convenience);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_authenticator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_authenticator);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateCompositeAuthenticator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateCompositeAuthenticator);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_REAUTH_ORIGIN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REAUTH_ORIGIN);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_Authenticate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Authenticate);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_print_callback_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_print_callback_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_errors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_errors);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_U2FError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_U2FError);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEVICE_INELIGIBLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEVICE_INELIGIBLE);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2dc0e3df690dceb0f85e5c99f6570e24_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_2dc0e3df690dceb0f85e5c99f6570e24_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TIMEOUT);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_26fe9e3496738ce44ffc684a6770178d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_26fe9e3496738ce44ffc684a6770178d_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_PluginError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PluginError);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4cf61eff1d165b0d09e8a35f6cc700c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4cf61eff1d165b0d09e8a35f6cc700c);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoDeviceFoundError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoDeviceFoundError);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8221e50487b2eacade26f6fa52c38965_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8221e50487b2eacade26f6fa52c38965_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_securityKey_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_securityKey_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidValue);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6a454767179e9c347b2eae7c6047dbf4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_6a454767179e9c347b2eae7c6047dbf4_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_challenges_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_challenges_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_applicationId_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_applicationId_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_relyingPartyId_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_relyingPartyId_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_616b11ef0fd56e8af0add0bac37944fb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_616b11ef0fd56e8af0add0bac37944fb_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ffd40486c6037cf11e412195f125ffd3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ffd40486c6037cf11e412195f125ffd3_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f49a7d78ab2440053dc9d5d52c248518_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_f49a7d78ab2440053dc9d5d52c248518_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_keyHandle_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_keyHandle_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_718793f05aafeee836458af6e3500b8a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_718793f05aafeee836458af6e3500b8a_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain__unpadded_urlsafe_b64recode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unpadded_urlsafe_b64recode);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_allow_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_allow_credentials);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_PublicKeyCredentialDescriptor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PublicKeyCredentialDescriptor);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_id_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_AuthenticationExtensionsClientInputs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AuthenticationExtensionsClientInputs);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_appid_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_appid_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_challenge_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_challenge_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_89e78ecc41724de11fd623559a2b4586_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_89e78ecc41724de11fd623559a2b4586_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetRequest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetRequest);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_WEBAUTHN_TIMEOUT_MS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WEBAUTHN_TIMEOUT_MS);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_preferred));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_preferred);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_f2efb5a5638b3efbd3aed4f952d06d4c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f2efb5a5638b3efbd3aed4f952d06d4c_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_1a10d49c171acdfe79019d9dad87a4e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1a10d49c171acdfe79019d9dad87a4e5);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_clientData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clientData);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_client_data_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client_data_json);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_authenticatorData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_authenticatorData);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_authenticator_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_authenticator_data);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_signatureData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signatureData);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_signature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signature);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_securityKeyReplyType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_securityKeyReplyType);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlsafe_b64encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlsafe_b64encode);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rstrip);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_61_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_61_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_1652a00dbd1dcbe4e47524d4222ef80c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1652a00dbd1dcbe4e47524d4222ef80c);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReauthSamlChallengeFailError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReauthSamlChallengeFailError);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_SAML_CHALLENGE_MESSAGE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SAML_CHALLENGE_MESSAGE);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_166ec5be39a33333d880dc6d38f13a39));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_166ec5be39a33333d880dc6d38f13a39);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__helpers_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain__helpers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__helpers);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_webauthn_handler_factory_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_webauthn_handler_factory_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_669dcc8b01b9a3bfbb4fd67e3a43785b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_669dcc8b01b9a3bfbb4fd67e3a43785b);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_9f7ec66c90ad345cca61931da4e9b874_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9f7ec66c90ad345cca61931da4e9b874_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_71461d07e5aa3f06e7657a0724e6966e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71461d07e5aa3f06e7657a0724e6966e);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d72a43129ad250073b6d5b47307cf17));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d72a43129ad250073b6d5b47307cf17);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_int_pos_120000));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_120000);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metaclass);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABCMeta);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReauthChallenge_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ReauthChallenge_tuple_empty_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_04f3045c17b3cdb3e855af8ec9d2e295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04f3045c17b3cdb3e855af8ec9d2e295);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_a89098ae66b25c8dbb8c0801a333b493));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a89098ae66b25c8dbb8c0801a333b493);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReauthChallenge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReauthChallenge);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_int_pos_55));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_55);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_c0d8b8f1f3c3464a23683efb429a266e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c0d8b8f1f3c3464a23683efb429a266e);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_locally_eligible));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_locally_eligible);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_364535809cc5623664fcd233fc000901));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_364535809cc5623664fcd233fc000901);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_obtain_challenge_input));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_obtain_challenge_input);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_a36281e0906edcd9c1908bfef7ebb27f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a36281e0906edcd9c1908bfef7ebb27f);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_PasswordChallenge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PasswordChallenge);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2bd53598978ccb23018d91d314d670a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f2bd53598978ccb23018d91d314d670a);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_int_pos_88));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_88);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_PASSWORD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PASSWORD);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_81884ec0e260ff7b0606e3ea212f4535));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_81884ec0e260ff7b0606e3ea212f4535);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_0419ad4aa0210af65eb12c142187ec85));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0419ad4aa0210af65eb12c142187ec85);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy_docstring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy_docstring);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_530e6ac8359a288ddc1b51c7fa0dd595));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_530e6ac8359a288ddc1b51c7fa0dd595);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_SecurityKeyChallenge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SecurityKeyChallenge);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_640e79eb58893aab22b6ceb8c65b74ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_640e79eb58893aab22b6ceb8c65b74ba);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_int_pos_107));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_107);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_SECURITY_KEY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SECURITY_KEY);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_30043885bd9f35c534cc43ec7e7143c4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30043885bd9f35c534cc43ec7e7143c4);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_fdbc34e695dbe42f3d92e7894e3fbc33));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fdbc34e695dbe42f3d92e7894e3fbc33);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_a1e55d63d48b7c18aeb8e5bb566abe6c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a1e55d63d48b7c18aeb8e5bb566abe6c);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_b9284c7063d7b2205582617da0b44a66));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b9284c7063d7b2205582617da0b44a66);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a829d2ff5d5a0908d4fd34056db660b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a829d2ff5d5a0908d4fd34056db660b);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_SamlChallenge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SamlChallenge);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_c11084c010f2652a4a4d920febbd03b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c11084c010f2652a4a4d920febbd03b0);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_int_pos_255));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_255);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_SAML));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SAML);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e211d833eda3986f3fc9e11598a9a00));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2e211d833eda3986f3fc9e11598a9a00);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_b23808e8ea2eac4d9e8d1db9690fd9ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b23808e8ea2eac4d9e8d1db9690fd9ca);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a26bf50df930ddd4cb25d892d059285));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a26bf50df930ddd4cb25d892d059285);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_AVAILABLE_CHALLENGES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AVAILABLE_CHALLENGES);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_6cd06f79e092d37213e0748021c09844));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6cd06f79e092d37213e0748021c09844);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa06ddb4b5a8c86cf9cae7789a4aa5e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aa06ddb4b5a8c86cf9cae7789a4aa5e4);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_7cd870d609c94866d86695edc42419df_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7cd870d609c94866d86695edc42419df_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_s_str_plain_b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_s_str_plain_b_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_text_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_unused_metadata_str_plain_passwd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_unused_metadata_str_plain_passwd_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_metadata_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_metadata_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_5051ebf81c933de3b0501fc81714c646_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5051ebf81c933de3b0501fc81714c646_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 18
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
static PyObject *module_var_accessor_google$oauth2$challenges$AuthenticationExtensionsClientInputs(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthenticationExtensionsClientInputs);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AuthenticationExtensionsClientInputs);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AuthenticationExtensionsClientInputs, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AuthenticationExtensionsClientInputs);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AuthenticationExtensionsClientInputs, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthenticationExtensionsClientInputs);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthenticationExtensionsClientInputs);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthenticationExtensionsClientInputs);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$GetRequest(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_GetRequest);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetRequest);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetRequest, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetRequest);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetRequest, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_GetRequest);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_GetRequest);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GetRequest);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$PasswordChallenge(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_PasswordChallenge);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PasswordChallenge);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PasswordChallenge, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PasswordChallenge);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PasswordChallenge, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_PasswordChallenge);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_PasswordChallenge);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PasswordChallenge);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$PublicKeyCredentialDescriptor(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_PublicKeyCredentialDescriptor);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PublicKeyCredentialDescriptor);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PublicKeyCredentialDescriptor, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PublicKeyCredentialDescriptor);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PublicKeyCredentialDescriptor, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_PublicKeyCredentialDescriptor);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_PublicKeyCredentialDescriptor);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PublicKeyCredentialDescriptor);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$REAUTH_ORIGIN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_REAUTH_ORIGIN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REAUTH_ORIGIN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REAUTH_ORIGIN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REAUTH_ORIGIN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REAUTH_ORIGIN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_REAUTH_ORIGIN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_REAUTH_ORIGIN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_REAUTH_ORIGIN);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$ReauthChallenge(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_ReauthChallenge);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReauthChallenge);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReauthChallenge, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReauthChallenge);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReauthChallenge, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_ReauthChallenge);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_ReauthChallenge);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ReauthChallenge);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$SAML_CHALLENGE_MESSAGE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_SAML_CHALLENGE_MESSAGE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SAML_CHALLENGE_MESSAGE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SAML_CHALLENGE_MESSAGE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SAML_CHALLENGE_MESSAGE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SAML_CHALLENGE_MESSAGE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_SAML_CHALLENGE_MESSAGE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_SAML_CHALLENGE_MESSAGE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SAML_CHALLENGE_MESSAGE);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$SamlChallenge(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_SamlChallenge);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SamlChallenge);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SamlChallenge, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SamlChallenge);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SamlChallenge, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_SamlChallenge);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_SamlChallenge);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SamlChallenge);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$SecurityKeyChallenge(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_SecurityKeyChallenge);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SecurityKeyChallenge);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SecurityKeyChallenge, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SecurityKeyChallenge);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SecurityKeyChallenge, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_SecurityKeyChallenge);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_SecurityKeyChallenge);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SecurityKeyChallenge);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$WEBAUTHN_TIMEOUT_MS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_WEBAUTHN_TIMEOUT_MS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WEBAUTHN_TIMEOUT_MS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WEBAUTHN_TIMEOUT_MS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WEBAUTHN_TIMEOUT_MS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WEBAUTHN_TIMEOUT_MS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_WEBAUTHN_TIMEOUT_MS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_WEBAUTHN_TIMEOUT_MS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WEBAUTHN_TIMEOUT_MS);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$_helpers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$abc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$base64(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$get_user_password(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_get_user_password);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_user_password);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_user_password, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_user_password);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_user_password, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_get_user_password);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_get_user_password);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_user_password);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$getpass(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_getpass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getpass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getpass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getpass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getpass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_getpass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_getpass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_getpass);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$challenges$webauthn_handler_factory(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$challenges->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$challenges->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_webauthn_handler_factory);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$challenges->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_webauthn_handler_factory);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_webauthn_handler_factory, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_webauthn_handler_factory);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_webauthn_handler_factory, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_webauthn_handler_factory);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_webauthn_handler_factory);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_webauthn_handler_factory);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_3563a7dbcbda4c9a980330385ef6193f;
static PyCodeObject *code_objects_42a4b1711555188bbbf6b355b5ca6234;
static PyCodeObject *code_objects_8322d3cc8fdc5dc4ea929c72968200b8;
static PyCodeObject *code_objects_9ef789c305a6f24e514c307e6bb8bdb5;
static PyCodeObject *code_objects_e2461a2e3d3bddd976dfed3857188ed8;
static PyCodeObject *code_objects_213d350502d153c6775fa2f11a04ee40;
static PyCodeObject *code_objects_a94fd52e30368198d74626d112e67d6e;
static PyCodeObject *code_objects_f1721cd469be73bc82955db782800765;
static PyCodeObject *code_objects_d19f482458f820d89f2580bf50c1efb7;
static PyCodeObject *code_objects_ff5ff5745640978a40827fee930c5236;
static PyCodeObject *code_objects_2d1a7b66adeb87488c450f3de426a100;
static PyCodeObject *code_objects_dd8008692806c47ab06295595255cbbb;
static PyCodeObject *code_objects_063f25d5af2c25efe518b08ea707a79b;
static PyCodeObject *code_objects_d2d6015ff9901acf7fdd61abd7cab7d9;
static PyCodeObject *code_objects_1e9b3a981dd6953fa7a2507bb38f907a;
static PyCodeObject *code_objects_1a013a2a5b45982326da63498815702b;
static PyCodeObject *code_objects_5ccc824ff207896131047ec1ee64464e;
static PyCodeObject *code_objects_360297195a63146f82d692646fa98b8a;
static PyCodeObject *code_objects_344cfd6d68e1cde143fe4c6cc3adcd90;
static PyCodeObject *code_objects_b674a885c896a346a2926aa55818c545;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6cd06f79e092d37213e0748021c09844); CHECK_OBJECT(module_filename_obj);
code_objects_3563a7dbcbda4c9a980330385ef6193f = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_aa06ddb4b5a8c86cf9cae7789a4aa5e4, mod_consts.const_str_digest_aa06ddb4b5a8c86cf9cae7789a4aa5e4, NULL, NULL, 0, 0, 0);
code_objects_42a4b1711555188bbbf6b355b5ca6234 = MAKE_CODE_OBJECT(module_filename_obj, 88, 0, mod_consts.const_str_plain_PasswordChallenge, mod_consts.const_str_plain_PasswordChallenge, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8322d3cc8fdc5dc4ea929c72968200b8 = MAKE_CODE_OBJECT(module_filename_obj, 55, 0, mod_consts.const_str_plain_ReauthChallenge, mod_consts.const_str_plain_ReauthChallenge, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9ef789c305a6f24e514c307e6bb8bdb5 = MAKE_CODE_OBJECT(module_filename_obj, 255, 0, mod_consts.const_str_plain_SamlChallenge, mod_consts.const_str_plain_SamlChallenge, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e2461a2e3d3bddd976dfed3857188ed8 = MAKE_CODE_OBJECT(module_filename_obj, 107, 0, mod_consts.const_str_plain_SecurityKeyChallenge, mod_consts.const_str_plain_SecurityKeyChallenge, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_213d350502d153c6775fa2f11a04ee40 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__obtain_challenge_input_webauthn, mod_consts.const_str_digest_b9284c7063d7b2205582617da0b44a66, mod_consts.const_tuple_7cd870d609c94866d86695edc42419df_tuple, NULL, 3, 0, 0);
code_objects_a94fd52e30368198d74626d112e67d6e = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__unpadded_urlsafe_b64recode, mod_consts.const_str_digest_7a829d2ff5d5a0908d4fd34056db660b, mod_consts.const_tuple_str_plain_self_str_plain_s_str_plain_b_tuple, NULL, 2, 0, 0);
code_objects_f1721cd469be73bc82955db782800765 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_user_password, mod_consts.const_str_plain_get_user_password, mod_consts.const_tuple_str_plain_text_tuple, NULL, 1, 0, 0);
code_objects_d19f482458f820d89f2580bf50c1efb7 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_is_locally_eligible, mod_consts.const_str_digest_0419ad4aa0210af65eb12c142187ec85, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ff5ff5745640978a40827fee930c5236 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_is_locally_eligible, mod_consts.const_str_digest_364535809cc5623664fcd233fc000901, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2d1a7b66adeb87488c450f3de426a100 = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_is_locally_eligible, mod_consts.const_str_digest_b23808e8ea2eac4d9e8d1db9690fd9ca, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_dd8008692806c47ab06295595255cbbb = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_is_locally_eligible, mod_consts.const_str_digest_fdbc34e695dbe42f3d92e7894e3fbc33, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_063f25d5af2c25efe518b08ea707a79b = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_name, mod_consts.const_str_digest_81884ec0e260ff7b0606e3ea212f4535, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d2d6015ff9901acf7fdd61abd7cab7d9 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_name, mod_consts.const_str_digest_c0d8b8f1f3c3464a23683efb429a266e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1e9b3a981dd6953fa7a2507bb38f907a = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_name, mod_consts.const_str_digest_2e211d833eda3986f3fc9e11598a9a00, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1a013a2a5b45982326da63498815702b = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_name, mod_consts.const_str_digest_30043885bd9f35c534cc43ec7e7143c4, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5ccc824ff207896131047ec1ee64464e = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_obtain_challenge_input, mod_consts.const_str_digest_530e6ac8359a288ddc1b51c7fa0dd595, mod_consts.const_tuple_str_plain_self_str_plain_unused_metadata_str_plain_passwd_tuple, NULL, 2, 0, 0);
code_objects_360297195a63146f82d692646fa98b8a = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_obtain_challenge_input, mod_consts.const_str_digest_a36281e0906edcd9c1908bfef7ebb27f, mod_consts.const_tuple_str_plain_self_str_plain_metadata_tuple, NULL, 2, 0, 0);
code_objects_344cfd6d68e1cde143fe4c6cc3adcd90 = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_obtain_challenge_input, mod_consts.const_str_digest_2a26bf50df930ddd4cb25d892d059285, mod_consts.const_tuple_str_plain_self_str_plain_metadata_tuple, NULL, 2, 0, 0);
code_objects_b674a885c896a346a2926aa55818c545 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_obtain_challenge_input, mod_consts.const_str_digest_a1e55d63d48b7c18aeb8e5bb566abe6c, mod_consts.const_tuple_5051ebf81c933de3b0501fc81714c646_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__10_obtain_challenge_input(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__13_name(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__14_is_locally_eligible(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__15_obtain_challenge_input(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__1_get_user_password(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__2_name(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__3_is_locally_eligible(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__4_obtain_challenge_input(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__5_name(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__6_is_locally_eligible(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__7_obtain_challenge_input(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__8_name(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__9_is_locally_eligible(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_google$oauth2$challenges$$$function__1_get_user_password(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_text = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$oauth2$challenges$$$function__1_get_user_password;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$challenges$$$function__1_get_user_password = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$challenges$$$function__1_get_user_password)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$challenges$$$function__1_get_user_password);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$challenges$$$function__1_get_user_password == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$challenges$$$function__1_get_user_password = MAKE_FUNCTION_FRAME(tstate, code_objects_f1721cd469be73bc82955db782800765, module_google$oauth2$challenges, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$challenges$$$function__1_get_user_password->m_type_description == NULL);
frame_frame_google$oauth2$challenges$$$function__1_get_user_password = cache_frame_frame_google$oauth2$challenges$$$function__1_get_user_password;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$challenges$$$function__1_get_user_password);
assert(Py_REFCNT(frame_frame_google$oauth2$challenges$$$function__1_get_user_password) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_google$oauth2$challenges$getpass(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getpass);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_text);
tmp_args_element_value_1 = par_text;
frame_frame_google$oauth2$challenges$$$function__1_get_user_password->m_frame.f_lineno = 52;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getpass, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$function__1_get_user_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$challenges$$$function__1_get_user_password->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$function__1_get_user_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$challenges$$$function__1_get_user_password,
    type_description_1,
    par_text
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$challenges$$$function__1_get_user_password == cache_frame_frame_google$oauth2$challenges$$$function__1_get_user_password) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$challenges$$$function__1_get_user_password);
    cache_frame_frame_google$oauth2$challenges$$$function__1_get_user_password = NULL;
}

assertFrameObject(frame_frame_google$oauth2$challenges$$$function__1_get_user_password);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_text);
Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$challenges$$$function__2_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$oauth2$challenges$$$function__2_name;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$challenges$$$function__2_name = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$challenges$$$function__2_name)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$challenges$$$function__2_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$challenges$$$function__2_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$challenges$$$function__2_name = MAKE_FUNCTION_FRAME(tstate, code_objects_d2d6015ff9901acf7fdd61abd7cab7d9, module_google$oauth2$challenges, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$challenges$$$function__2_name->m_type_description == NULL);
frame_frame_google$oauth2$challenges$$$function__2_name = cache_frame_frame_google$oauth2$challenges$$$function__2_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$challenges$$$function__2_name);
assert(Py_REFCNT(frame_frame_google$oauth2$challenges$$$function__2_name) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_a9d0119da4c7155caaa09e6b8e9b5710;
frame_frame_google$oauth2$challenges$$$function__2_name->m_frame.f_lineno = 62;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 62;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$function__2_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$challenges$$$function__2_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$function__2_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$challenges$$$function__2_name,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$challenges$$$function__2_name == cache_frame_frame_google$oauth2$challenges$$$function__2_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$challenges$$$function__2_name);
    cache_frame_frame_google$oauth2$challenges$$$function__2_name = NULL;
}

assertFrameObject(frame_frame_google$oauth2$challenges$$$function__2_name);

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


static PyObject *impl_google$oauth2$challenges$$$function__3_is_locally_eligible(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible = MAKE_FUNCTION_FRAME(tstate, code_objects_ff5ff5745640978a40827fee930c5236, module_google$oauth2$challenges, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible->m_type_description == NULL);
frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible = cache_frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible);
assert(Py_REFCNT(frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_02792f89fd80fed690eadbbaaf005036;
frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible->m_frame.f_lineno = 68;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 68;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible == cache_frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible);
    cache_frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible = NULL;
}

assertFrameObject(frame_frame_google$oauth2$challenges$$$function__3_is_locally_eligible);

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


static PyObject *impl_google$oauth2$challenges$$$function__4_obtain_challenge_input(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_metadata = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input = MAKE_FUNCTION_FRAME(tstate, code_objects_360297195a63146f82d692646fa98b8a, module_google$oauth2$challenges, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input->m_type_description == NULL);
frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input = cache_frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input);
assert(Py_REFCNT(frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_19ce14cc7aca94b618a74e69cfcf5778;
frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input->m_frame.f_lineno = 85;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 85;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input,
    type_description_1,
    par_self,
    par_metadata
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input == cache_frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input);
    cache_frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input = NULL;
}

assertFrameObject(frame_frame_google$oauth2$challenges$$$function__4_obtain_challenge_input);

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
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$oauth2$challenges$$$function__7_obtain_challenge_input(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_unused_metadata = python_pars[1];
PyObject *var_passwd = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input = MAKE_FUNCTION_FRAME(tstate, code_objects_5ccc824ff207896131047ec1ee64464e, module_google$oauth2$challenges, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input->m_type_description == NULL);
frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input = cache_frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input);
assert(Py_REFCNT(frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_google$oauth2$challenges$get_user_password(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_user_password);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input->m_frame.f_lineno = 101;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_7a94e520fd7996038d503ce68809c26b_tuple);

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_passwd == NULL);
var_passwd = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_passwd);
tmp_operand_value_1 = var_passwd;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = mod_consts.const_str_space;
{
    PyObject *old = var_passwd;
    assert(old != NULL);
    var_passwd = tmp_assign_source_2;
    Py_INCREF(var_passwd);
    Py_DECREF(old);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input,
    type_description_1,
    par_self,
    par_unused_metadata,
    var_passwd
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input == cache_frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input);
    cache_frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input = NULL;
}

assertFrameObject(frame_frame_google$oauth2$challenges$$$function__7_obtain_challenge_input);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_credential;
CHECK_OBJECT(var_passwd);
tmp_dict_value_1 = var_passwd;
tmp_return_value = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_passwd);
CHECK_OBJECT(var_passwd);
Py_DECREF(var_passwd);
var_passwd = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_passwd);
var_passwd = NULL;
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
CHECK_OBJECT(par_unused_metadata);
Py_DECREF(par_unused_metadata);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_unused_metadata);
Py_DECREF(par_unused_metadata);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$challenges$$$function__10_obtain_challenge_input(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_metadata = python_pars[1];
PyObject *var_factory = NULL;
PyObject *var_webauthn_handler = NULL;
PyObject *var_pyu2f = NULL;
PyObject *var_sk = NULL;
PyObject *var_challenges = NULL;
PyObject *var_application_id = NULL;
PyObject *var_relying_party_id = NULL;
PyObject *var_application_parameters = NULL;
PyObject *var_challenge_data = NULL;
PyObject *var_c = NULL;
PyObject *var_kh = NULL;
PyObject *var_key = NULL;
PyObject *var_challenge = NULL;
PyObject *var_tries = NULL;
PyObject *var_app_id = NULL;
PyObject *var_api = NULL;
PyObject *var_response = NULL;
PyObject *var_e = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input = MAKE_FUNCTION_FRAME(tstate, code_objects_b674a885c896a346a2926aa55818c545, module_google$oauth2$challenges, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_type_description == NULL);
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input = cache_frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input);
assert(Py_REFCNT(frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$oauth2$challenges$webauthn_handler_factory(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_webauthn_handler_factory);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 122;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_WebauthnHandlerFactory);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_factory == NULL);
var_factory = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_factory);
tmp_called_instance_2 = var_factory;
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 123;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_handler);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_webauthn_handler == NULL);
var_webauthn_handler = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_webauthn_handler);
tmp_cmp_expr_left_1 = var_webauthn_handler;
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
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
tmp_expression_value_1 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stderr);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 125;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_write,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_c809140d63d9d5749e35f2948b83ca6d_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
CHECK_OBJECT(par_metadata);
tmp_args_element_value_1 = par_metadata;
CHECK_OBJECT(var_webauthn_handler);
tmp_args_element_value_2 = var_webauthn_handler;
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 126;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain__obtain_challenge_input_webauthn,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
branch_no_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_2 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
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
    exception_lineno = 121;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame)) {
        frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooooooo";
goto try_except_handler_3;
branch_no_2:;
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
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_3e2eb3cd3bc77ee0f048afd2177d82b4;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$oauth2$challenges;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 132;
tmp_assign_source_3 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(var_pyu2f == NULL);
var_pyu2f = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_cb18cc84f720f7f8a971eee15f5cba62;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$oauth2$challenges;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 133;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_pyu2f;
    assert(old != NULL);
    var_pyu2f = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_61e05557b545411082f9f8db28d82179;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$oauth2$challenges;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 134;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_pyu2f;
    assert(old != NULL);
    var_pyu2f = tmp_assign_source_5;
    Py_DECREF(old);
}

}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_ImportError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_5;
tmp_called_instance_5 = module_var_accessor_google$oauth2$challenges$exceptions(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_5;
}
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 136;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_ReauthFailError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_27c6c9059e68cb31c5806f3f813e17b4_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_5;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 136;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooo";
goto try_except_handler_5;
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 131;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame)) {
        frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooooooo";
goto try_except_handler_5;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
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
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_metadata);
tmp_expression_value_2 = par_metadata;
tmp_subscript_value_1 = mod_consts.const_str_plain_securityKey;
tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_sk == NULL);
var_sk = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_sk);
tmp_expression_value_3 = var_sk;
tmp_subscript_value_2 = mod_consts.const_str_plain_challenges;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_challenges == NULL);
var_challenges = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_sk);
tmp_expression_value_4 = var_sk;
tmp_subscript_value_3 = mod_consts.const_str_plain_applicationId;
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_application_id == NULL);
var_application_id = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(var_sk);
tmp_expression_value_5 = var_sk;
tmp_subscript_value_4 = mod_consts.const_str_plain_relyingPartyId;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_relying_party_id == NULL);
var_relying_party_id = tmp_assign_source_9;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_application_id);
tmp_cmp_expr_left_4 = var_application_id;
CHECK_OBJECT(var_relying_party_id);
tmp_cmp_expr_right_4 = var_relying_party_id;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_list_element_1;
CHECK_OBJECT(var_relying_party_id);
tmp_list_element_1 = var_relying_party_id;
tmp_assign_source_10 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_assign_source_10, 0, tmp_list_element_1);
CHECK_OBJECT(var_application_id);
tmp_list_element_1 = var_application_id;
PyList_SET_ITEM0(tmp_assign_source_10, 1, tmp_list_element_1);
assert(var_application_parameters == NULL);
var_application_parameters = tmp_assign_source_10;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_list_element_2;
CHECK_OBJECT(var_application_id);
tmp_list_element_2 = var_application_id;
tmp_assign_source_11 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_assign_source_11, 0, tmp_list_element_2);
assert(var_application_parameters == NULL);
var_application_parameters = tmp_assign_source_11;
}
branch_end_4:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_challenge_data == NULL);
var_challenge_data = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_challenges);
tmp_iter_arg_1 = var_challenges;
tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_13;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_14 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooo";
exception_lineno = 154;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_15 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_c;
    var_c = tmp_assign_source_15;
    Py_INCREF(var_c);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(var_c);
tmp_expression_value_7 = var_c;
tmp_subscript_value_5 = mod_consts.const_str_plain_keyHandle;
tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_5);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 155;
tmp_assign_source_16 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_kh;
    var_kh = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_3;
PyObject *tmp_bytearray_arg_1;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_4;
if (var_pyu2f == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pyu2f);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 156;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_expression_value_9 = var_pyu2f;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_model);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_RegisteredKey);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_called_instance_6 = module_var_accessor_google$oauth2$challenges$base64(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base64);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 156;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_kh);
tmp_args_element_value_4 = var_kh;
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 156;
tmp_bytearray_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_urlsafe_b64decode, tmp_args_element_value_4);
if (tmp_bytearray_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 156;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_args_element_value_3 = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_1);
CHECK_OBJECT(tmp_bytearray_arg_1);
Py_DECREF(tmp_bytearray_arg_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 156;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 156;
tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(var_c);
tmp_expression_value_11 = var_c;
tmp_subscript_value_6 = mod_consts.const_str_plain_challenge;
tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_6);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 157;
tmp_assign_source_18 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_challenge;
    var_challenge = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_5;
tmp_called_instance_7 = module_var_accessor_google$oauth2$challenges$base64(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base64);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_challenge);
tmp_args_element_value_5 = var_challenge;
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 158;
tmp_assign_source_19 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_urlsafe_b64decode, tmp_args_element_value_5);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_challenge;
    assert(old != NULL);
    var_challenge = tmp_assign_source_19;
    Py_DECREF(old);
}

}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
if (var_challenge_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_challenge_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 159;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_list_arg_value_1 = var_challenge_data;
tmp_dict_key_1 = mod_consts.const_str_plain_key;
CHECK_OBJECT(var_key);
tmp_dict_value_1 = var_key;
tmp_item_value_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_item_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_challenge;
CHECK_OBJECT(var_challenge);
tmp_dict_value_1 = var_challenge;
tmp_res = PyDict_SetItem(tmp_item_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = const_int_0;
assert(var_tries == NULL);
Py_INCREF(tmp_assign_source_20);
var_tries = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_application_parameters);
tmp_iter_arg_2 = var_application_parameters;
tmp_assign_source_21 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_21;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_22 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_22 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooo";
exception_lineno = 164;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_23 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_app_id;
    var_app_id = tmp_assign_source_23;
    Py_INCREF(var_app_id);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_tries == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tries);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 166;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_iadd_expr_left_1 = var_tries;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_24 = tmp_iadd_expr_left_1;
var_tries = tmp_assign_source_24;

}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_6;
if (var_pyu2f == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pyu2f);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 167;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_14 = var_pyu2f;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_convenience);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_authenticator);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_CreateCompositeAuthenticator);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_6 = module_var_accessor_google$oauth2$challenges$REAUTH_ORIGIN(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REAUTH_ORIGIN);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 168;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 167;
tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_api;
    var_api = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(var_api);
tmp_expression_value_15 = var_api;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_Authenticate);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_app_id);
tmp_kw_call_arg_value_0_1 = var_app_id;
if (var_challenge_data == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_challenge_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 171;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_arg_value_1_1 = var_challenge_data;
tmp_expression_value_17 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_17 == NULL));
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_stderr);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 171;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 171;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 170;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_print_callback_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_8;
}
assert(var_response == NULL);
var_response = tmp_assign_source_26;
}
{
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_securityKey;
CHECK_OBJECT(var_response);
tmp_dict_value_2 = var_response;
tmp_return_value = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto try_return_handler_7;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_6);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
if (var_pyu2f == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pyu2f);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 174;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_19 = var_pyu2f;
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_errors);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_U2FError);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_27); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_27;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(var_e);
tmp_expression_value_20 = var_e;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_code);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}
if (var_pyu2f == NULL) {
Py_DECREF(tmp_cmp_expr_left_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pyu2f);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 175;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_23 = var_pyu2f;
tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_errors);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 175;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_U2FError);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 175;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_DEVICE_INELIGIBLE);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 175;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_len_arg_1;
if (var_tries == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tries);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 177;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_cmp_expr_left_7 = var_tries;
CHECK_OBJECT(var_application_parameters);
tmp_len_arg_1 = var_application_parameters;
tmp_cmp_expr_right_7 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_cmp_expr_right_7 == NULL));
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_instance_8;
PyObject *tmp_expression_value_24;
PyObject *tmp_call_result_2;
tmp_expression_value_24 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_24 == NULL));
tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_stderr);
if (tmp_called_instance_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 178;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_8,
    mod_consts.const_str_plain_write,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_2dc0e3df690dceb0f85e5c99f6570e24_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_8);
Py_DECREF(tmp_called_instance_8);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_10;
branch_no_7:;
goto try_continue_handler_10;
branch_no_6:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(var_e);
tmp_expression_value_25 = var_e;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_code);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}
if (var_pyu2f == NULL) {
Py_DECREF(tmp_cmp_expr_left_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pyu2f);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 181;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_28 = var_pyu2f;
tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_errors);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 181;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_U2FError);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 181;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_TIMEOUT);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 181;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_instance_9;
PyObject *tmp_expression_value_29;
PyObject *tmp_call_result_3;
tmp_expression_value_29 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_29 == NULL));
tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_stderr);
if (tmp_called_instance_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 182;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_9,
    mod_consts.const_str_plain_write,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_26fe9e3496738ce44ffc684a6770178d_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_9);
Py_DECREF(tmp_called_instance_9);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
CHECK_OBJECT(var_e);
tmp_raise_type_input_2 = var_e;
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_10;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 186;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooo";
goto try_except_handler_10;
}
branch_end_8:;
goto try_end_5;
// Return handler code:
try_return_handler_10:;
Py_XDECREF(var_e);
var_e = NULL;

goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_9;
// try continue handler code:
try_continue_handler_10:;
Py_XDECREF(var_e);
var_e = NULL;

goto try_continue_handler_9;
// End of try:
try_end_5:;
Py_XDECREF(var_e);
var_e = NULL;

goto branch_end_5;
branch_no_5:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
tmp_cmp_expr_left_9 = EXC_TYPE(tstate);
if (var_pyu2f == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pyu2f);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 187;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_31 = var_pyu2f;
tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_errors);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_cmp_expr_right_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_PluginError);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_right_9);
Py_DECREF(tmp_cmp_expr_right_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_condition_result_9 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_28); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_28;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
tmp_expression_value_33 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_33 == NULL));
tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_stderr);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_c4cf61eff1d165b0d09e8a35f6cc700c;
CHECK_OBJECT(var_e);
tmp_kw_call_arg_value_1_2 = var_e;
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 188;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 188;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_11;
}
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 188;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
goto try_continue_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// try continue handler code:
try_continue_handler_11:;
Py_XDECREF(var_e);
var_e = NULL;

goto try_continue_handler_9;
// End of try:
goto branch_end_9;
branch_no_9:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
tmp_cmp_expr_left_10 = EXC_TYPE(tstate);
if (var_pyu2f == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pyu2f);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 190;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_35 = var_pyu2f;
tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_errors);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_cmp_expr_right_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_NoDeviceFoundError);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_cmp_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_right_10);
Py_DECREF(tmp_cmp_expr_right_10);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_instance_10;
PyObject *tmp_expression_value_36;
PyObject *tmp_call_result_5;
tmp_expression_value_36 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_36 == NULL));
tmp_called_instance_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_stderr);
if (tmp_called_instance_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
}
frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = 191;
tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_10,
    mod_consts.const_str_plain_write,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_8221e50487b2eacade26f6fa52c38965_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_10);
Py_DECREF(tmp_called_instance_10);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
goto branch_end_10;
branch_no_10:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 165;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame)) {
        frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooooooo";
goto try_except_handler_9;
branch_end_10:;
branch_end_9:;
branch_end_5:;
goto try_end_6;
// Return handler code:
try_return_handler_9:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_return_handler_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_7;
// try continue handler code:
try_continue_handler_9:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto loop_start_2;
// End of try:
try_end_6:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_7;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_7:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_7;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_2;
loop_end_2:;
goto try_end_8;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
CHECK_OBJECT(tmp_for_loop_2__iter_value);
Py_DECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_8:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input,
    type_description_1,
    par_self,
    par_metadata,
    var_factory,
    var_webauthn_handler,
    var_pyu2f,
    var_sk,
    var_challenges,
    var_application_id,
    var_relying_party_id,
    var_application_parameters,
    var_challenge_data,
    var_c,
    var_kh,
    var_key,
    var_challenge,
    var_tries,
    var_app_id,
    var_api,
    var_response,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input == cache_frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input);
    cache_frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input = NULL;
}

assertFrameObject(frame_frame_google$oauth2$challenges$$$function__10_obtain_challenge_input);

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
Py_XDECREF(var_factory);
var_factory = NULL;
Py_XDECREF(var_webauthn_handler);
var_webauthn_handler = NULL;
Py_XDECREF(var_pyu2f);
var_pyu2f = NULL;
Py_XDECREF(var_sk);
var_sk = NULL;
Py_XDECREF(var_challenges);
var_challenges = NULL;
Py_XDECREF(var_application_id);
var_application_id = NULL;
Py_XDECREF(var_relying_party_id);
var_relying_party_id = NULL;
Py_XDECREF(var_application_parameters);
var_application_parameters = NULL;
Py_XDECREF(var_challenge_data);
var_challenge_data = NULL;
Py_XDECREF(var_c);
var_c = NULL;
Py_XDECREF(var_kh);
var_kh = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_challenge);
var_challenge = NULL;
Py_XDECREF(var_tries);
var_tries = NULL;
Py_XDECREF(var_app_id);
var_app_id = NULL;
Py_XDECREF(var_api);
var_api = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_e);
var_e = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_factory);
var_factory = NULL;
Py_XDECREF(var_webauthn_handler);
var_webauthn_handler = NULL;
Py_XDECREF(var_pyu2f);
var_pyu2f = NULL;
Py_XDECREF(var_sk);
var_sk = NULL;
Py_XDECREF(var_challenges);
var_challenges = NULL;
Py_XDECREF(var_application_id);
var_application_id = NULL;
Py_XDECREF(var_relying_party_id);
var_relying_party_id = NULL;
Py_XDECREF(var_application_parameters);
var_application_parameters = NULL;
Py_XDECREF(var_challenge_data);
var_challenge_data = NULL;
Py_XDECREF(var_c);
var_c = NULL;
Py_XDECREF(var_kh);
var_kh = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_challenge);
var_challenge = NULL;
Py_XDECREF(var_tries);
var_tries = NULL;
Py_XDECREF(var_app_id);
var_app_id = NULL;
Py_XDECREF(var_api);
var_api = NULL;
Py_XDECREF(var_e);
var_e = NULL;
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
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_metadata = python_pars[1];
PyObject *par_webauthn_handler = python_pars[2];
PyObject *var_sk = NULL;
PyObject *var_challenges = NULL;
PyObject *var_application_id = NULL;
PyObject *var_relying_party_id = NULL;
PyObject *var_allow_credentials = NULL;
PyObject *var_challenge = NULL;
PyObject *var_kh = NULL;
PyObject *var_key_handle = NULL;
PyObject *var_extension = NULL;
PyObject *var_get_request = NULL;
PyObject *var_get_response = NULL;
PyObject *var_e = NULL;
PyObject *var_response = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn = MAKE_FUNCTION_FRAME(tstate, code_objects_213d350502d153c6775fa2f11a04ee40, module_google$oauth2$challenges, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_type_description == NULL);
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn = cache_frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn);
assert(Py_REFCNT(frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_metadata);
tmp_expression_value_1 = par_metadata;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 195;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_securityKey_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_sk == NULL);
var_sk = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_sk);
tmp_cmp_expr_left_1 = var_sk;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$oauth2$challenges$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 197;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_InvalidValue,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_6a454767179e9c347b2eae7c6047dbf4_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 197;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_sk);
tmp_expression_value_2 = var_sk;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 198;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_challenges_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_challenges == NULL);
var_challenges = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_sk);
tmp_expression_value_3 = var_sk;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 199;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_applicationId_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_application_id == NULL);
var_application_id = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_sk);
tmp_expression_value_4 = var_sk;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 200;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_relyingPartyId_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_relying_party_id == NULL);
var_relying_party_id = tmp_assign_source_4;
}
{
bool tmp_condition_result_2;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
nuitka_digit tmp_cmp_expr_right_3;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_challenges);
tmp_cmp_expr_left_2 = var_challenges;
tmp_cmp_expr_right_2 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_challenges);
tmp_len_arg_1 = var_challenges;
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = 1;
tmp_or_right_value_1 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
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
tmp_called_instance_2 = module_var_accessor_google$oauth2$challenges$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 202;
tmp_raise_type_input_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_InvalidValue,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_616b11ef0fd56e8af0add0bac37944fb_tuple, 0)
);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 202;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_application_id);
tmp_cmp_expr_left_4 = var_application_id;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
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
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_google$oauth2$challenges$exceptions(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 204;
tmp_raise_type_input_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_InvalidValue,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_ffd40486c6037cf11e412195f125ffd3_tuple, 0)
);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 204;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_relying_party_id);
tmp_cmp_expr_left_5 = var_relying_party_id;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_instance_4;
tmp_called_instance_4 = module_var_accessor_google$oauth2$challenges$exceptions(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 206;
tmp_raise_type_input_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_InvalidValue,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_f49a7d78ab2440053dc9d5d52c248518_tuple, 0)
);

if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 206;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_allow_credentials == NULL);
var_allow_credentials = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_challenges);
tmp_iter_arg_1 = var_challenges;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooooooooooooo";
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
type_description_1 = "oooooooooooooooo";
exception_lineno = 209;
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
    PyObject *old = var_challenge;
    var_challenge = tmp_assign_source_8;
    Py_INCREF(var_challenge);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_challenge);
tmp_expression_value_5 = var_challenge;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 210;
tmp_assign_source_9 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_keyHandle_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_kh;
    var_kh = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_kh);
tmp_cmp_expr_left_6 = var_kh;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_raise_type_input_5;
PyObject *tmp_called_instance_5;
tmp_called_instance_5 = module_var_accessor_google$oauth2$challenges$exceptions(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 212;
tmp_raise_type_input_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_InvalidValue,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_718793f05aafeee836458af6e3500b8a_tuple, 0)
);

if (tmp_raise_type_input_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_5 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_5);
CHECK_OBJECT(tmp_raise_type_input_5);
Py_DECREF(tmp_raise_type_input_5);
if (tmp_raise_type_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 212;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
goto try_except_handler_2;
}
branch_no_5:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 213;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_instance_6 = par_self;
CHECK_OBJECT(var_kh);
tmp_args_element_value_1 = var_kh;
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 213;
tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain__unpadded_urlsafe_b64recode, tmp_args_element_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_key_handle;
    var_key_handle = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_1;
if (var_allow_credentials == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_allow_credentials);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 214;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_allow_credentials;
tmp_called_value_6 = module_var_accessor_google$oauth2$challenges$PublicKeyCredentialDescriptor(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PublicKeyCredentialDescriptor);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_key_handle);
tmp_kw_call_value_0_1 = var_key_handle;
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 214;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_item_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_id_tuple);
}

if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooooooooooooo";
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
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_7;
PyObject *tmp_kw_call_value_0_2;
tmp_called_value_7 = module_var_accessor_google$oauth2$challenges$AuthenticationExtensionsClientInputs(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AuthenticationExtensionsClientInputs);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_application_id);
tmp_kw_call_value_0_2 = var_application_id;
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 216;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_assign_source_11 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, kw_values, mod_consts.const_tuple_str_plain_appid_tuple);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_extension == NULL);
var_extension = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_challenges);
tmp_expression_value_7 = var_challenges;
tmp_subscript_value_1 = const_int_0;
tmp_expression_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_1, 0);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 218;
tmp_assign_source_12 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain_challenge_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_challenge;
    var_challenge = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_challenge);
tmp_cmp_expr_left_7 = var_challenge;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_raise_type_input_6;
PyObject *tmp_called_instance_7;
tmp_called_instance_7 = module_var_accessor_google$oauth2$challenges$exceptions(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 220;
tmp_raise_type_input_6 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_7,
    mod_consts.const_str_plain_InvalidValue,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_89e78ecc41724de11fd623559a2b4586_tuple, 0)
);

if (tmp_raise_type_input_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_6 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_6);
CHECK_OBJECT(tmp_raise_type_input_6);
Py_DECREF(tmp_raise_type_input_6);
if (tmp_raise_type_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 220;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_9;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_2;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_kw_call_value_6_1;
tmp_called_value_9 = module_var_accessor_google$oauth2$challenges$GetRequest(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetRequest);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_3 = module_var_accessor_google$oauth2$challenges$REAUTH_ORIGIN(tstate);
if (unlikely(tmp_kw_call_value_0_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REAUTH_ORIGIN);
}

if (tmp_kw_call_value_0_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 223;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_relying_party_id);
tmp_kw_call_value_1_1 = var_relying_party_id;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 225;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_8 = par_self;
CHECK_OBJECT(var_challenge);
tmp_args_element_value_2 = var_challenge;
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 225;
tmp_kw_call_value_2_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain__unpadded_urlsafe_b64recode, tmp_args_element_value_2);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_3_1 = module_var_accessor_google$oauth2$challenges$WEBAUTHN_TIMEOUT_MS(tstate);
if (unlikely(tmp_kw_call_value_3_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WEBAUTHN_TIMEOUT_MS);
}

if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 226;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_allow_credentials == NULL) {
Py_DECREF(tmp_kw_call_value_2_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_allow_credentials);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 227;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_4_1 = var_allow_credentials;
tmp_kw_call_value_5_1 = mod_consts.const_str_plain_preferred;
CHECK_OBJECT(var_extension);
tmp_kw_call_value_6_1 = var_extension;
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 222;
{
    PyObject *kw_values[7] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1};

    tmp_assign_source_13 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_9, kw_values, mod_consts.const_tuple_f2efb5a5638b3efbd3aed4f952d06d4c_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_get_request == NULL);
var_get_request = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_webauthn_handler);
tmp_expression_value_8 = par_webauthn_handler;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_get);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_get_request);
tmp_args_element_value_3 = var_get_request;
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 233;
tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
assert(var_get_response == NULL);
var_get_response = tmp_assign_source_14;
}
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
tmp_cmp_expr_left_8 = EXC_TYPE(tstate);
tmp_cmp_expr_right_8 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
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
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_15); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_15);
var_e = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_expression_value_10 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_10 == NULL));
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_stderr);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_1a10d49c171acdfe79019d9dad87a4e5;
CHECK_OBJECT(var_e);
tmp_kw_call_arg_value_1_1 = var_e;
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 235;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 235;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = 235;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_raise_type_7;
PyObject *tmp_raise_type_input_7;
CHECK_OBJECT(var_e);
tmp_raise_type_input_7 = var_e;
tmp_raise_type_7 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_7);
if (tmp_raise_type_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 236;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
goto try_except_handler_5;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
goto branch_end_7;
branch_no_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 232;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame)) {
        frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooo";
goto try_except_handler_4;
branch_end_7:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_2:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
tmp_dict_key_1 = mod_consts.const_str_plain_clientData;
CHECK_OBJECT(var_get_response);
tmp_expression_value_12 = var_get_response;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_response);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_client_data_json);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = _PyDict_NewPresized( 6 );
{
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_authenticatorData;
CHECK_OBJECT(var_get_response);
tmp_expression_value_14 = var_get_response;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_response);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_authenticator_data);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_signatureData;
CHECK_OBJECT(var_get_response);
tmp_expression_value_16 = var_get_response;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_response);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_signature);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_applicationId;
CHECK_OBJECT(var_application_id);
tmp_dict_value_1 = var_application_id;
tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_keyHandle;
CHECK_OBJECT(var_get_response);
tmp_expression_value_17 = var_get_response;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_id);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "oooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_securityKeyReplyType;
tmp_dict_value_1 = mod_consts.const_int_pos_2;
tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_16);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_response == NULL);
var_response = tmp_assign_source_16;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn,
    type_description_1,
    par_self,
    par_metadata,
    par_webauthn_handler,
    var_sk,
    var_challenges,
    var_application_id,
    var_relying_party_id,
    var_allow_credentials,
    var_challenge,
    var_kh,
    var_key_handle,
    var_extension,
    var_get_request,
    var_get_response,
    var_e,
    var_response
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn == cache_frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn);
    cache_frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn = NULL;
}

assertFrameObject(frame_frame_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_securityKey;
CHECK_OBJECT(var_response);
tmp_dict_value_2 = var_response;
tmp_return_value = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_sk);
CHECK_OBJECT(var_sk);
Py_DECREF(var_sk);
var_sk = NULL;
CHECK_OBJECT(var_challenges);
CHECK_OBJECT(var_challenges);
Py_DECREF(var_challenges);
var_challenges = NULL;
CHECK_OBJECT(var_application_id);
CHECK_OBJECT(var_application_id);
Py_DECREF(var_application_id);
var_application_id = NULL;
CHECK_OBJECT(var_relying_party_id);
CHECK_OBJECT(var_relying_party_id);
Py_DECREF(var_relying_party_id);
var_relying_party_id = NULL;
Py_XDECREF(var_allow_credentials);
var_allow_credentials = NULL;
CHECK_OBJECT(var_challenge);
CHECK_OBJECT(var_challenge);
Py_DECREF(var_challenge);
var_challenge = NULL;
Py_XDECREF(var_kh);
var_kh = NULL;
Py_XDECREF(var_key_handle);
var_key_handle = NULL;
CHECK_OBJECT(var_extension);
CHECK_OBJECT(var_extension);
Py_DECREF(var_extension);
var_extension = NULL;
CHECK_OBJECT(var_get_request);
CHECK_OBJECT(var_get_request);
Py_DECREF(var_get_request);
var_get_request = NULL;
CHECK_OBJECT(var_get_response);
CHECK_OBJECT(var_get_response);
Py_DECREF(var_get_response);
var_get_response = NULL;
CHECK_OBJECT(var_response);
CHECK_OBJECT(var_response);
Py_DECREF(var_response);
var_response = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_sk);
var_sk = NULL;
Py_XDECREF(var_challenges);
var_challenges = NULL;
Py_XDECREF(var_application_id);
var_application_id = NULL;
Py_XDECREF(var_relying_party_id);
var_relying_party_id = NULL;
Py_XDECREF(var_allow_credentials);
var_allow_credentials = NULL;
Py_XDECREF(var_challenge);
var_challenge = NULL;
Py_XDECREF(var_kh);
var_kh = NULL;
Py_XDECREF(var_key_handle);
var_key_handle = NULL;
Py_XDECREF(var_extension);
var_extension = NULL;
Py_XDECREF(var_get_request);
var_get_request = NULL;
Py_XDECREF(var_get_response);
var_get_response = NULL;
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
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
CHECK_OBJECT(par_webauthn_handler);
Py_DECREF(par_webauthn_handler);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
CHECK_OBJECT(par_webauthn_handler);
Py_DECREF(par_webauthn_handler);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_s = python_pars[1];
PyObject *var_b = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode = MAKE_FUNCTION_FRAME(tstate, code_objects_a94fd52e30368198d74626d112e67d6e, module_google$oauth2$challenges, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode->m_type_description == NULL);
frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode = cache_frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode);
assert(Py_REFCNT(frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_google$oauth2$challenges$base64(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base64);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_s);
tmp_args_element_value_1 = par_s;
frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode->m_frame.f_lineno = 251;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_urlsafe_b64decode, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_b == NULL);
var_b = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_google$oauth2$challenges$base64(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base64);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_b);
tmp_args_element_value_2 = var_b;
frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode->m_frame.f_lineno = 252;
tmp_expression_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_urlsafe_b64encode, tmp_args_element_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode->m_frame.f_lineno = 252;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_rstrip);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode->m_frame.f_lineno = 252;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_chr_61_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode,
    type_description_1,
    par_self,
    par_s,
    var_b
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode == cache_frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode);
    cache_frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode = NULL;
}

assertFrameObject(frame_frame_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_b);
CHECK_OBJECT(var_b);
Py_DECREF(var_b);
var_b = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_b);
var_b = NULL;
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
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_s);
Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$challenges$$$function__15_obtain_challenge_input(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_metadata = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input = MAKE_FUNCTION_FRAME(tstate, code_objects_344cfd6d68e1cde143fe4c6cc3adcd90, module_google$oauth2$challenges, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input->m_type_description == NULL);
frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input = cache_frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input);
assert(Py_REFCNT(frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_google$oauth2$challenges$exceptions(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 275;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ReauthSamlChallengeFailError);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_google$oauth2$challenges$SAML_CHALLENGE_MESSAGE(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SAML_CHALLENGE_MESSAGE);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 275;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input->m_frame.f_lineno = 275;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 275;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input,
    type_description_1,
    par_self,
    par_metadata
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input == cache_frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input);
    cache_frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input = NULL;
}

assertFrameObject(frame_frame_google$oauth2$challenges$$$function__15_obtain_challenge_input);

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
CHECK_OBJECT(par_metadata);
Py_DECREF(par_metadata);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}



static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__10_obtain_challenge_input(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$challenges$$$function__10_obtain_challenge_input,
        mod_consts.const_str_plain_obtain_challenge_input,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a1e55d63d48b7c18aeb8e5bb566abe6c,
#endif
        code_objects_b674a885c896a346a2926aa55818c545,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$challenges,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn,
        mod_consts.const_str_plain__obtain_challenge_input_webauthn,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b9284c7063d7b2205582617da0b44a66,
#endif
        code_objects_213d350502d153c6775fa2f11a04ee40,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$challenges,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode,
        mod_consts.const_str_plain__unpadded_urlsafe_b64recode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7a829d2ff5d5a0908d4fd34056db660b,
#endif
        code_objects_a94fd52e30368198d74626d112e67d6e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$challenges,
        mod_consts.const_str_digest_1652a00dbd1dcbe4e47524d4222ef80c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__13_name(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_name,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2e211d833eda3986f3fc9e11598a9a00,
#endif
        code_objects_1e9b3a981dd6953fa7a2507bb38f907a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$challenges,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnGeneric(result, mod_consts.const_str_plain_SAML);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__14_is_locally_eligible(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_is_locally_eligible,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b23808e8ea2eac4d9e8d1db9690fd9ca,
#endif
        code_objects_2d1a7b66adeb87488c450f3de426a100,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$challenges,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__15_obtain_challenge_input(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$challenges$$$function__15_obtain_challenge_input,
        mod_consts.const_str_plain_obtain_challenge_input,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2a26bf50df930ddd4cb25d892d059285,
#endif
        code_objects_344cfd6d68e1cde143fe4c6cc3adcd90,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$challenges,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__1_get_user_password(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$challenges$$$function__1_get_user_password,
        mod_consts.const_str_plain_get_user_password,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f1721cd469be73bc82955db782800765,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$challenges,
        mod_consts.const_str_digest_d1393466d637b3da00faebb1c0f21467,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__2_name(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$challenges$$$function__2_name,
        const_str_plain_name,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c0d8b8f1f3c3464a23683efb429a266e,
#endif
        code_objects_d2d6015ff9901acf7fdd61abd7cab7d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$challenges,
        mod_consts.const_str_digest_31580a370ec2138cab9c9af9b2be733b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__3_is_locally_eligible(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$challenges$$$function__3_is_locally_eligible,
        mod_consts.const_str_plain_is_locally_eligible,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_364535809cc5623664fcd233fc000901,
#endif
        code_objects_ff5ff5745640978a40827fee930c5236,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$challenges,
        mod_consts.const_str_digest_ed3ce36d9ae7ff27fcf7b3fe9666c755,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__4_obtain_challenge_input(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$challenges$$$function__4_obtain_challenge_input,
        mod_consts.const_str_plain_obtain_challenge_input,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a36281e0906edcd9c1908bfef7ebb27f,
#endif
        code_objects_360297195a63146f82d692646fa98b8a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$challenges,
        mod_consts.const_str_digest_503eff08783c19097ea0dafa77d026fa,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__5_name(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_name,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_81884ec0e260ff7b0606e3ea212f4535,
#endif
        code_objects_063f25d5af2c25efe518b08ea707a79b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$challenges,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnGeneric(result, mod_consts.const_str_plain_PASSWORD);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__6_is_locally_eligible(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_is_locally_eligible,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0419ad4aa0210af65eb12c142187ec85,
#endif
        code_objects_d19f482458f820d89f2580bf50c1efb7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$challenges,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__7_obtain_challenge_input(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$challenges$$$function__7_obtain_challenge_input,
        mod_consts.const_str_plain_obtain_challenge_input,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_530e6ac8359a288ddc1b51c7fa0dd595,
#endif
        code_objects_5ccc824ff207896131047ec1ee64464e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$challenges,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__8_name(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_name,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_30043885bd9f35c534cc43ec7e7143c4,
#endif
        code_objects_1a013a2a5b45982326da63498815702b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$challenges,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnGeneric(result, mod_consts.const_str_plain_SECURITY_KEY);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$challenges$$$function__9_is_locally_eligible(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_is_locally_eligible,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fdbc34e695dbe42f3d92e7894e3fbc33,
#endif
        code_objects_dd8008692806c47ab06295595255cbbb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$challenges,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnTrue(result);

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

static function_impl_code const function_table_google$oauth2$challenges[] = {
impl_google$oauth2$challenges$$$function__1_get_user_password,
impl_google$oauth2$challenges$$$function__2_name,
impl_google$oauth2$challenges$$$function__3_is_locally_eligible,
impl_google$oauth2$challenges$$$function__4_obtain_challenge_input,
impl_google$oauth2$challenges$$$function__7_obtain_challenge_input,
impl_google$oauth2$challenges$$$function__10_obtain_challenge_input,
impl_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn,
impl_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode,
impl_google$oauth2$challenges$$$function__15_obtain_challenge_input,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$oauth2$challenges);
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
        module_google$oauth2$challenges,
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
        function_table_google$oauth2$challenges,
        sizeof(function_table_google$oauth2$challenges) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.oauth2.challenges";
#endif

// Internal entry point for module code.
PyObject *module_code_google$oauth2$challenges(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$oauth2$challenges");

    // Store the module for future use.
    module_google$oauth2$challenges = module;

    moduledict_google$oauth2$challenges = MODULE_DICT(module_google$oauth2$challenges);

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
        PRINT_STRING("google$oauth2$challenges: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$oauth2$challenges: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$oauth2$challenges: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.oauth2.challenges" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$oauth2$challenges\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$oauth2$challenges,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$oauth2$challenges,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$oauth2$challenges,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$oauth2$challenges,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$oauth2$challenges,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$oauth2$challenges);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$oauth2$challenges);
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

        UPDATE_STRING_DICT1(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var_challenge = NULL;
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
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$challenges;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
PyObject *locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$oauth2$challenges$$$class__1_ReauthChallenge_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88 = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$challenges$$$class__2_PasswordChallenge_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107 = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_google$oauth2$challenges$$$class__4_SamlChallenge_255 = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$challenges$$$class__4_SamlChallenge_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
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
tmp_assign_source_1 = mod_consts.const_str_digest_166ec5be39a33333d880dc6d38f13a39;
UPDATE_STRING_DICT0(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$oauth2$challenges = MAKE_MODULE_FRAME(code_objects_3563a7dbcbda4c9a980330385ef6193f, module_google$oauth2$challenges);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$challenges);
assert(Py_REFCNT(frame_frame_google$oauth2$challenges) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$oauth2$challenges$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$oauth2$challenges$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$oauth2$challenges;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 18;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_abc, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_base64;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$oauth2$challenges;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 19;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_base64, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_getpass;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$oauth2$challenges;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 20;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_getpass, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$oauth2$challenges;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain__helpers_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 23;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$oauth2$challenges,
        mod_consts.const_str_plain__helpers,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__helpers);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers, tmp_assign_source_8);
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
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$oauth2$challenges;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 24;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$oauth2$challenges,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$oauth2$challenges;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_webauthn_handler_factory_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 25;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$oauth2$challenges,
        mod_consts.const_str_plain_webauthn_handler_factory,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_webauthn_handler_factory);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_webauthn_handler_factory, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_669dcc8b01b9a3bfbb4fd67e3a43785b;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$oauth2$challenges;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_9f7ec66c90ad345cca61931da4e9b874_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 26;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$oauth2$challenges,
        mod_consts.const_str_plain_AuthenticationExtensionsClientInputs,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_AuthenticationExtensionsClientInputs);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthenticationExtensionsClientInputs, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$oauth2$challenges,
        mod_consts.const_str_plain_GetRequest,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_GetRequest);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_GetRequest, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$oauth2$challenges,
        mod_consts.const_str_plain_PublicKeyCredentialDescriptor,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_PublicKeyCredentialDescriptor);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_PublicKeyCredentialDescriptor, tmp_assign_source_14);
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
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_str_digest_71461d07e5aa3f06e7657a0724e6966e;
UPDATE_STRING_DICT0(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_REAUTH_ORIGIN, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_str_digest_0d72a43129ad250073b6d5b47307cf17;
UPDATE_STRING_DICT0(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_SAML_CHALLENGE_MESSAGE, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_int_pos_120000;
UPDATE_STRING_DICT0(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_WEBAUTHN_TIMEOUT_MS, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_google$oauth2$challenges$$$function__1_get_user_password(tstate);

UPDATE_STRING_DICT1(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_get_user_password, tmp_assign_source_18);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_1 = module_var_accessor_google$oauth2$challenges$abc(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto try_except_handler_2;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
}
tmp_assign_source_19 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
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
tmp_assign_source_20 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_20 == NULL) {
    tmp_assign_source_20 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_20);
}
assert(!(tmp_assign_source_20 == NULL));
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_20 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_20);
condexpr_end_1:;
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_20;
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


exception_lineno = 55;

    goto try_except_handler_2;
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


exception_lineno = 55;

    goto try_except_handler_2;
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
PyObject *tmp_assign_source_21;
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

    goto try_except_handler_2;
}
tmp_args_value_1 = mod_consts.const_tuple_str_plain_ReauthChallenge_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 55;
tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_21;
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


exception_lineno = 55;

    goto try_except_handler_2;
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
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
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
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
}
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 55;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 55;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_22;
}
branch_end_2:;
{
PyObject *tmp_assign_source_23;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_04f3045c17b3cdb3e855af8ec9d2e295;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_a89098ae66b25c8dbb8c0801a333b493;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_ReauthChallenge;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_55;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_4;
}
frame_frame_google$oauth2$challenges$$$class__1_ReauthChallenge_2 = MAKE_CLASS_FRAME(tstate, code_objects_8322d3cc8fdc5dc4ea929c72968200b8, module_google$oauth2$challenges, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$challenges$$$class__1_ReauthChallenge_2);
assert(Py_REFCNT(frame_frame_google$oauth2$challenges$$$class__1_ReauthChallenge_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = PyObject_GetItem(locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_instance_1 = PyObject_GetItem(locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55, mod_consts.const_str_plain_abc);

if (tmp_called_instance_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_1 = module_var_accessor_google$oauth2$challenges$abc(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_2 = MAKE_FUNCTION_google$oauth2$challenges$$$function__2_name(tstate);

frame_frame_google$oauth2$challenges$$$class__1_ReauthChallenge_2->m_frame.f_lineno = 59;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_google$oauth2$challenges$$$class__1_ReauthChallenge_2->m_frame.f_lineno = 58;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55, const_str_plain_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_4;
tmp_called_value_3 = PyObject_GetItem(locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_instance_2 = PyObject_GetItem(locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55, mod_consts.const_str_plain_abc);

if (tmp_called_instance_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_2 = module_var_accessor_google$oauth2$challenges$abc(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_4 = MAKE_FUNCTION_google$oauth2$challenges$$$function__3_is_locally_eligible(tstate);

frame_frame_google$oauth2$challenges$$$class__1_ReauthChallenge_2->m_frame.f_lineno = 65;
tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_google$oauth2$challenges$$$class__1_ReauthChallenge_2->m_frame.f_lineno = 64;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55, mod_consts.const_str_plain_is_locally_eligible, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_5;
tmp_called_instance_3 = PyObject_GetItem(locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55, mod_consts.const_str_plain_abc);

if (tmp_called_instance_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_3 = module_var_accessor_google$oauth2$challenges$abc(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_5 = MAKE_FUNCTION_google$oauth2$challenges$$$function__4_obtain_challenge_input(tstate);

frame_frame_google$oauth2$challenges$$$class__1_ReauthChallenge_2->m_frame.f_lineno = 70;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55, mod_consts.const_str_plain_obtain_challenge_input, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$class__1_ReauthChallenge_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$challenges$$$class__1_ReauthChallenge_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$class__1_ReauthChallenge_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$challenges$$$class__1_ReauthChallenge_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$oauth2$challenges$$$class__1_ReauthChallenge_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_4;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_2 = mod_consts.const_str_plain_ReauthChallenge;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 55;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_24;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_23 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_23);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55);
locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55);
locals_google$oauth2$challenges$$$class__1_ReauthChallenge_55 = NULL;
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
exception_lineno = 55;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_ReauthChallenge, tmp_assign_source_23);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_assign_source_25;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_google$oauth2$challenges$ReauthChallenge(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReauthChallenge);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;

    goto try_except_handler_5;
}
tmp_assign_source_25 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_3);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_26 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_5;
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


exception_lineno = 88;

    goto try_except_handler_5;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
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


exception_lineno = 88;

    goto try_except_handler_5;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_2);
CHECK_OBJECT(tmp_type_arg_2);
Py_DECREF(tmp_type_arg_2);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_28;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

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
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_5;
}
tmp_tuple_element_4 = mod_consts.const_str_plain_PasswordChallenge;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 88;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_29;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

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
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_9, tmp_default_value_2);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_5;
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


exception_lineno = 88;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_5);
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


exception_lineno = 88;

    goto try_except_handler_5;
}
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 88;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 88;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_30;
}
branch_end_4:;
{
PyObject *tmp_assign_source_31;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_04f3045c17b3cdb3e855af8ec9d2e295;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_f2bd53598978ccb23018d91d314d670a;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_PasswordChallenge;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_88;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_7;
}
frame_frame_google$oauth2$challenges$$$class__2_PasswordChallenge_3 = MAKE_CLASS_FRAME(tstate, code_objects_42a4b1711555188bbbf6b355b5ca6234, module_google$oauth2$challenges, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$challenges$$$class__2_PasswordChallenge_3);
assert(Py_REFCNT(frame_frame_google$oauth2$challenges$$$class__2_PasswordChallenge_3) == 2);

// Framed code:
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_6;
tmp_called_value_6 = PyObject_GetItem(locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88, mod_consts.const_str_plain_property);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}


tmp_args_element_value_6 = MAKE_FUNCTION_google$oauth2$challenges$$$function__5_name(tstate);

frame_frame_google$oauth2$challenges$$$class__2_PasswordChallenge_3->m_frame.f_lineno = 91;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88, const_str_plain_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_7;
tmp_called_value_7 = PyObject_GetItem(locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88, mod_consts.const_str_plain_property);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}


tmp_args_element_value_7 = MAKE_FUNCTION_google$oauth2$challenges$$$function__6_is_locally_eligible(tstate);

frame_frame_google$oauth2$challenges$$$class__2_PasswordChallenge_3->m_frame.f_lineno = 95;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88, mod_consts.const_str_plain_is_locally_eligible, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_expression_value_13 = PyObject_GetItem(locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_13 = module_var_accessor_google$oauth2$challenges$_helpers(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_args_element_value_8 = PyObject_GetItem(locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88, mod_consts.const_str_plain_ReauthChallenge);

if (tmp_args_element_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_8 = module_var_accessor_google$oauth2$challenges$ReauthChallenge(tstate);
if (unlikely(tmp_args_element_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReauthChallenge);
}

if (tmp_args_element_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_args_element_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_google$oauth2$challenges$$$class__2_PasswordChallenge_3->m_frame.f_lineno = 99;
tmp_called_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

tmp_args_element_value_9 = MAKE_FUNCTION_google$oauth2$challenges$$$function__7_obtain_challenge_input(tstate);

frame_frame_google$oauth2$challenges$$$class__2_PasswordChallenge_3->m_frame.f_lineno = 99;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88, mod_consts.const_str_plain_obtain_challenge_input, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$class__2_PasswordChallenge_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$challenges$$$class__2_PasswordChallenge_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$class__2_PasswordChallenge_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$challenges$$$class__2_PasswordChallenge_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_google$oauth2$challenges$$$class__2_PasswordChallenge_3);

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
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_7;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

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
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_PasswordChallenge;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 88;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_32;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_31 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_31);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88);
locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88);
locals_google$oauth2$challenges$$$class__2_PasswordChallenge_88 = NULL;
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
exception_lineno = 88;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_PasswordChallenge, tmp_assign_source_31);
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
PyObject *tmp_assign_source_33;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_google$oauth2$challenges$ReauthChallenge(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReauthChallenge);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;

    goto try_except_handler_8;
}
tmp_assign_source_33 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_34 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_2;
PyObject *tmp_type_arg_4;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_8;
}
tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_14 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_2, 0);
if (tmp_type_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_8;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_4);
CHECK_OBJECT(tmp_type_arg_4);
Py_DECREF(tmp_type_arg_4);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_8;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_36 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_36;
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


exception_lineno = 107;

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
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_8;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_SecurityKeyChallenge;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 107;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_37;
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


exception_lineno = 107;

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
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_18;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_18, tmp_name_value_10, tmp_default_value_3);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_8;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_19;
PyObject *tmp_type_arg_5;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_5 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_5);
assert(!(tmp_expression_value_19 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
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


exception_lineno = 107;

    goto try_except_handler_8;
}
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 107;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 107;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_38;
}
branch_end_7:;
{
PyObject *tmp_assign_source_39;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_04f3045c17b3cdb3e855af8ec9d2e295;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_digest_640e79eb58893aab22b6ceb8c65b74ba;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_SecurityKeyChallenge;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_107;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_10;
}
frame_frame_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_4 = MAKE_CLASS_FRAME(tstate, code_objects_e2461a2e3d3bddd976dfed3857188ed8, module_google$oauth2$challenges, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_4);
assert(Py_REFCNT(frame_frame_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_4) == 2);

// Framed code:
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_10;
tmp_called_value_12 = PyObject_GetItem(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107, mod_consts.const_str_plain_property);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_10 = MAKE_FUNCTION_google$oauth2$challenges$$$function__8_name(tstate);

frame_frame_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_4->m_frame.f_lineno = 110;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107, const_str_plain_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_11;
tmp_called_value_13 = PyObject_GetItem(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107, mod_consts.const_str_plain_property);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_11 = MAKE_FUNCTION_google$oauth2$challenges$$$function__9_is_locally_eligible(tstate);

frame_frame_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_4->m_frame.f_lineno = 114;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107, mod_consts.const_str_plain_is_locally_eligible, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_expression_value_20 = PyObject_GetItem(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_20 = module_var_accessor_google$oauth2$challenges$_helpers(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_expression_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_args_element_value_12 = PyObject_GetItem(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107, mod_consts.const_str_plain_ReauthChallenge);

if (tmp_args_element_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_12 = module_var_accessor_google$oauth2$challenges$ReauthChallenge(tstate);
if (unlikely(tmp_args_element_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReauthChallenge);
}

if (tmp_args_element_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_15);

exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_args_element_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

frame_frame_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_4->m_frame.f_lineno = 118;
tmp_called_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_args_element_value_13 = MAKE_FUNCTION_google$oauth2$challenges$$$function__10_obtain_challenge_input(tstate);

frame_frame_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_4->m_frame.f_lineno = 118;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107, mod_consts.const_str_plain_obtain_challenge_input, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$challenges$$$function__11__obtain_challenge_input_webauthn(tstate);

tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107, mod_consts.const_str_plain__obtain_challenge_input_webauthn, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$challenges$$$function__12__unpadded_urlsafe_b64recode(tstate);

tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107, mod_consts.const_str_plain__unpadded_urlsafe_b64recode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_4);

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
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_10;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

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
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_10;
}
branch_no_9:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_10 = mod_consts.const_str_plain_SecurityKeyChallenge;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 107;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_10;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_40;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_39 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_39);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107);
locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107);
locals_google$oauth2$challenges$$$class__3_SecurityKeyChallenge_107 = NULL;
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
exception_lineno = 107;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_SecurityKeyChallenge, tmp_assign_source_39);
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
PyObject *tmp_assign_source_41;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = module_var_accessor_google$oauth2$challenges$ReauthChallenge(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReauthChallenge);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;

    goto try_except_handler_11;
}
tmp_assign_source_41 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_11);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_42 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_3;
PyObject *tmp_type_arg_6;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_11;
}
tmp_condition_result_13 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_21 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_3, 0);
if (tmp_type_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_11;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_6);
CHECK_OBJECT(tmp_type_arg_6);
Py_DECREF(tmp_type_arg_6);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_11;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_44 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_44;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

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
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_11;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_SamlChallenge;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 255;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_45;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_24 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

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
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_25;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_25, tmp_name_value_11, tmp_default_value_4);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_11;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_26;
PyObject *tmp_type_arg_7;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_7 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_26 = BUILTIN_TYPE1(tmp_type_arg_7);
assert(!(tmp_expression_value_26 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_13);
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


exception_lineno = 255;

    goto try_except_handler_11;
}
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 255;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 255;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_46;
}
branch_end_10:;
{
PyObject *tmp_assign_source_47;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_google$oauth2$challenges$$$class__4_SamlChallenge_255 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_04f3045c17b3cdb3e855af8ec9d2e295;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__4_SamlChallenge_255, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_digest_c11084c010f2652a4a4d920febbd03b0;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__4_SamlChallenge_255, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_SamlChallenge;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__4_SamlChallenge_255, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_255;
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__4_SamlChallenge_255, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_13;
}
frame_frame_google$oauth2$challenges$$$class__4_SamlChallenge_5 = MAKE_CLASS_FRAME(tstate, code_objects_9ef789c305a6f24e514c307e6bb8bdb5, module_google$oauth2$challenges, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$challenges$$$class__4_SamlChallenge_5);
assert(Py_REFCNT(frame_frame_google$oauth2$challenges$$$class__4_SamlChallenge_5) == 2);

// Framed code:
{
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_14;
tmp_called_value_18 = PyObject_GetItem(locals_google$oauth2$challenges$$$class__4_SamlChallenge_255, mod_consts.const_str_plain_property);

if (tmp_called_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_18 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}


tmp_args_element_value_14 = MAKE_FUNCTION_google$oauth2$challenges$$$function__13_name(tstate);

frame_frame_google$oauth2$challenges$$$class__4_SamlChallenge_5->m_frame.f_lineno = 263;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__4_SamlChallenge_255, const_str_plain_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_15;
tmp_called_value_19 = PyObject_GetItem(locals_google$oauth2$challenges$$$class__4_SamlChallenge_255, mod_consts.const_str_plain_property);

if (tmp_called_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_19 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}


tmp_args_element_value_15 = MAKE_FUNCTION_google$oauth2$challenges$$$function__14_is_locally_eligible(tstate);

frame_frame_google$oauth2$challenges$$$class__4_SamlChallenge_5->m_frame.f_lineno = 267;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__4_SamlChallenge_255, mod_consts.const_str_plain_is_locally_eligible, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$challenges$$$function__15_obtain_challenge_input(tstate);

tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__4_SamlChallenge_255, mod_consts.const_str_plain_obtain_challenge_input, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges$$$class__4_SamlChallenge_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$challenges$$$class__4_SamlChallenge_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges$$$class__4_SamlChallenge_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$challenges$$$class__4_SamlChallenge_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_google$oauth2$challenges$$$class__4_SamlChallenge_5);

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
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__4_SamlChallenge_255, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

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
tmp_res = PyObject_SetItem(locals_google$oauth2$challenges$$$class__4_SamlChallenge_255, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_13;
}
branch_no_12:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_20;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_20 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_14 = mod_consts.const_str_plain_SamlChallenge;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = locals_google$oauth2$challenges$$$class__4_SamlChallenge_255;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 255;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_13;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_48;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_47 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_47);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_google$oauth2$challenges$$$class__4_SamlChallenge_255);
locals_google$oauth2$challenges$$$class__4_SamlChallenge_255 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$oauth2$challenges$$$class__4_SamlChallenge_255);
locals_google$oauth2$challenges$$$class__4_SamlChallenge_255 = NULL;
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
exception_lineno = 255;
goto try_except_handler_11;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_SamlChallenge, tmp_assign_source_47);
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
PyObject *tmp_assign_source_49;
// Tried code:
{
PyObject *tmp_assign_source_50;
PyObject *tmp_iter_arg_1;
PyObject *tmp_tuple_element_15;
PyObject *tmp_called_value_21;
tmp_called_value_21 = module_var_accessor_google$oauth2$challenges$SecurityKeyChallenge(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SecurityKeyChallenge);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 278;

    goto try_except_handler_14;
}
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 280;
tmp_tuple_element_15 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_21);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_14;
}
tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_called_value_22;
PyObject *tmp_called_value_23;
PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_15);
tmp_called_value_22 = module_var_accessor_google$oauth2$challenges$PasswordChallenge(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PasswordChallenge);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 278;

    goto tuple_build_exception_5;
}
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 280;
tmp_tuple_element_15 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_22);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_15);
tmp_called_value_23 = module_var_accessor_google$oauth2$challenges$SamlChallenge(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SamlChallenge);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 278;

    goto tuple_build_exception_5;
}
frame_frame_google$oauth2$challenges->m_frame.f_lineno = 280;
tmp_tuple_element_15 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_23);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_iter_arg_1, 2, tmp_tuple_element_15);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_iter_arg_1);
goto try_except_handler_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_assign_source_50 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_50 == NULL));
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_51;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_52;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_52 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_52 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 278;
        goto try_except_handler_15;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_52;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_53;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_assign_source_53 = tmp_dictcontraction_1__iter_value_0;
{
    PyObject *old = outline_4_var_challenge;
    outline_4_var_challenge = tmp_assign_source_53;
    Py_INCREF(outline_4_var_challenge);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_expression_value_27;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_4_var_challenge);
tmp_expression_value_27 = outline_4_var_challenge;
tmp_dictset38_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain_name);
if (tmp_dictset38_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;

    goto try_except_handler_15;
}
CHECK_OBJECT(outline_4_var_challenge);
tmp_dictset38_value_1 = outline_4_var_challenge;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_key_1);
Py_DECREF(tmp_dictset38_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;

    goto try_except_handler_15;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;

    goto try_except_handler_15;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_assign_source_49 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_assign_source_49);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
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
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
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
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_XDECREF(outline_4_var_challenge);
outline_4_var_challenge = NULL;
goto outline_result_9;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_4_var_challenge);
outline_4_var_challenge = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 278;
goto frame_exception_exit_1;
outline_result_9:;
UPDATE_STRING_DICT1(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)mod_consts.const_str_plain_AVAILABLE_CHALLENGES, tmp_assign_source_49);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$challenges, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$challenges->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$challenges, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$oauth2$challenges);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_5:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$oauth2$challenges", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.oauth2.challenges" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$oauth2$challenges);
    return module_google$oauth2$challenges;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$challenges, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$oauth2$challenges", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

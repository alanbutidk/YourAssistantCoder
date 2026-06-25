/* Generated code for Python module 'google$auth$exceptions'
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



/* The "module_google$auth$exceptions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$exceptions;
PyDictObject *moduledict_google$auth$exceptions;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_GoogleAuthError;
PyObject *const_str_plain_retryable;
PyObject *const_str_plain__retryable;
PyObject *const_str_plain_ReauthFailError;
PyObject *const_str_digest_ef422cb718407287fe827a180041e840;
PyObject *const_str_digest_5ad819f55ef4694c271ff87fac854d24;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_tuple_type_Exception_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_9c754f3997648344cda997f9dda0ce3b;
PyObject *const_str_digest_5070ed7e7abaa2b00f0d9c717ba88bea;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_18;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_26de6258b546da94e17adedc091138bc;
PyObject *const_str_plain_property;
PyObject *const_str_digest_e638b1c020577cb978e5b68dacc2fc08;
PyObject *const_tuple_str_plain__retryable_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_TransportError;
PyObject *const_str_digest_8f8973511263b12696b3a604a3a97566;
PyObject *const_int_pos_31;
PyObject *const_str_plain_RefreshError;
PyObject *const_str_digest_e457d53639a19060f3dc68569f2ad6ad;
PyObject *const_int_pos_35;
PyObject *const_str_plain_UserAccessTokenError;
PyObject *const_str_digest_824ed81634f06a647cde4abb564bd165;
PyObject *const_int_pos_40;
PyObject *const_str_plain_DefaultCredentialsError;
PyObject *const_str_digest_4468d420669c76d04a1b18d5475b1c75;
PyObject *const_int_pos_44;
PyObject *const_str_plain_MutualTLSChannelError;
PyObject *const_str_digest_fac0eafb9c8b43704f848db086e4aa39;
PyObject *const_int_pos_48;
PyObject *const_str_plain_ClientCertError;
PyObject *const_str_digest_066cf2851c578a93d5ff573dfe59159d;
PyObject *const_int_pos_53;
PyObject *const_str_digest_b87f8944583dba48d511d571ef6474c8;
PyObject *const_str_plain_OAuthError;
PyObject *const_str_digest_d63f4be1a9f1230d9b9cfa569d016736;
PyObject *const_int_pos_61;
PyObject *const_str_digest_c5bf5ea2be9524ddb95b8f7491dc4ebe;
PyObject *const_int_pos_66;
PyObject *const_tuple_none_tuple;
PyObject *const_str_digest_65442c192b1e5af42e50affa01357e6b;
PyObject *const_str_plain_ReauthSamlChallengeFailError;
PyObject *const_str_digest_f0cc151d07c1597db8f5ba337073ae53;
PyObject *const_int_pos_75;
PyObject *const_str_plain_MalformedError;
PyObject *const_str_digest_cf47c49edf67ead1afd7d959961a812d;
PyObject *const_int_pos_79;
PyObject *const_str_plain_InvalidResource;
PyObject *const_str_digest_06a0effa7178664b9e33ad8924cc304d;
PyObject *const_int_pos_83;
PyObject *const_str_plain_InvalidOperation;
PyObject *const_str_digest_72fc2aaf882ecd2843c787a620bea305;
PyObject *const_int_pos_87;
PyObject *const_str_plain_InvalidValue;
PyObject *const_str_digest_ca17d2ea9aa3bd849a5226be0ccc4d2b;
PyObject *const_int_pos_91;
PyObject *const_str_plain_InvalidType;
PyObject *const_str_digest_fb16b8dbae5da291db232be3db2bb21d;
PyObject *const_int_pos_95;
PyObject *const_str_plain_OSError;
PyObject *const_str_digest_e868277d88bef776fc3e60e339435301;
PyObject *const_int_pos_99;
PyObject *const_str_plain_TimeoutError;
PyObject *const_str_digest_8927150c38d130cd9a3deecc6967b384;
PyObject *const_int_pos_103;
PyObject *const_str_plain_ResponseError;
PyObject *const_str_digest_31e0ff7874b2d7e4692e8e997bb6be1f;
PyObject *const_int_pos_107;
PyObject *const_str_digest_7cb1d1d22966d469490caf6f9878cd9b;
PyObject *const_str_digest_33bdc6c9de3a2838e2868b2ba0d2a5e3;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_a3dc6f2053c758810f49f101544f4930_tuple;
PyObject *const_tuple_899c8b1d174704d59463466c77da1055_tuple;
PyObject *const_tuple_str_plain_self_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[83];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.exceptions"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_GoogleAuthError);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_retryable);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__retryable);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReauthFailError);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef422cb718407287fe827a180041e840);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ad819f55ef4694c271ff87fac854d24);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_5070ed7e7abaa2b00f0d9c717ba88bea);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_int_pos_18);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_26de6258b546da94e17adedc091138bc);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_e638b1c020577cb978e5b68dacc2fc08);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__retryable_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_TransportError);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f8973511263b12696b3a604a3a97566);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_int_pos_31);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_e457d53639a19060f3dc68569f2ad6ad);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_int_pos_35);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_UserAccessTokenError);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_824ed81634f06a647cde4abb564bd165);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_int_pos_40);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_DefaultCredentialsError);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_4468d420669c76d04a1b18d5475b1c75);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_int_pos_44);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_MutualTLSChannelError);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_fac0eafb9c8b43704f848db086e4aa39);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_int_pos_48);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClientCertError);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_066cf2851c578a93d5ff573dfe59159d);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_int_pos_53);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_b87f8944583dba48d511d571ef6474c8);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_OAuthError);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_d63f4be1a9f1230d9b9cfa569d016736);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_int_pos_61);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5bf5ea2be9524ddb95b8f7491dc4ebe);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_int_pos_66);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_65442c192b1e5af42e50affa01357e6b);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReauthSamlChallengeFailError);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_f0cc151d07c1597db8f5ba337073ae53);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_int_pos_75);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_MalformedError);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf47c49edf67ead1afd7d959961a812d);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_int_pos_79);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidResource);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_06a0effa7178664b9e33ad8924cc304d);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_int_pos_83);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidOperation);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_72fc2aaf882ecd2843c787a620bea305);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_int_pos_87);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidValue);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca17d2ea9aa3bd849a5226be0ccc4d2b);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_int_pos_91);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidType);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb16b8dbae5da291db232be3db2bb21d);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_int_pos_95);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_OSError);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_e868277d88bef776fc3e60e339435301);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_int_pos_99);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutError);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_8927150c38d130cd9a3deecc6967b384);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_int_pos_103);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseError);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_31e0ff7874b2d7e4692e8e997bb6be1f);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_int_pos_107);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_7cb1d1d22966d469490caf6f9878cd9b);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_33bdc6c9de3a2838e2868b2ba0d2a5e3);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_a3dc6f2053c758810f49f101544f4930_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_899c8b1d174704d59463466c77da1055_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
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
void checkModuleConstants_google$auth$exceptions(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_GoogleAuthError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GoogleAuthError);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_retryable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retryable);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__retryable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__retryable);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReauthFailError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReauthFailError);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef422cb718407287fe827a180041e840));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ef422cb718407287fe827a180041e840);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ad819f55ef4694c271ff87fac854d24));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ad819f55ef4694c271ff87fac854d24);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_Exception_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_5070ed7e7abaa2b00f0d9c717ba88bea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5070ed7e7abaa2b00f0d9c717ba88bea);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_int_pos_18));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_18);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_26de6258b546da94e17adedc091138bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_26de6258b546da94e17adedc091138bc);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_e638b1c020577cb978e5b68dacc2fc08));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e638b1c020577cb978e5b68dacc2fc08);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__retryable_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__retryable_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_TransportError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TransportError);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f8973511263b12696b3a604a3a97566));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8f8973511263b12696b3a604a3a97566);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_int_pos_31));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_31);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RefreshError);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_e457d53639a19060f3dc68569f2ad6ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e457d53639a19060f3dc68569f2ad6ad);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_int_pos_35));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_35);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_UserAccessTokenError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UserAccessTokenError);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_824ed81634f06a647cde4abb564bd165));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_824ed81634f06a647cde4abb564bd165);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_int_pos_40));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_40);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_DefaultCredentialsError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DefaultCredentialsError);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_4468d420669c76d04a1b18d5475b1c75));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4468d420669c76d04a1b18d5475b1c75);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_int_pos_44));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_44);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_MutualTLSChannelError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MutualTLSChannelError);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_fac0eafb9c8b43704f848db086e4aa39));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fac0eafb9c8b43704f848db086e4aa39);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_int_pos_48));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_48);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClientCertError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClientCertError);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_066cf2851c578a93d5ff573dfe59159d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_066cf2851c578a93d5ff573dfe59159d);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_int_pos_53));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_53);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_b87f8944583dba48d511d571ef6474c8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b87f8944583dba48d511d571ef6474c8);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_OAuthError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OAuthError);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_d63f4be1a9f1230d9b9cfa569d016736));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d63f4be1a9f1230d9b9cfa569d016736);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_int_pos_61));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_61);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5bf5ea2be9524ddb95b8f7491dc4ebe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5bf5ea2be9524ddb95b8f7491dc4ebe);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_int_pos_66));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_66);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_65442c192b1e5af42e50affa01357e6b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_65442c192b1e5af42e50affa01357e6b);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReauthSamlChallengeFailError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReauthSamlChallengeFailError);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_f0cc151d07c1597db8f5ba337073ae53));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f0cc151d07c1597db8f5ba337073ae53);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_int_pos_75));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_75);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_MalformedError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MalformedError);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf47c49edf67ead1afd7d959961a812d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf47c49edf67ead1afd7d959961a812d);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_int_pos_79));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_79);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidResource);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_06a0effa7178664b9e33ad8924cc304d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_06a0effa7178664b9e33ad8924cc304d);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_int_pos_83));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_83);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidOperation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidOperation);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_72fc2aaf882ecd2843c787a620bea305));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72fc2aaf882ecd2843c787a620bea305);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_int_pos_87));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_87);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidValue);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca17d2ea9aa3bd849a5226be0ccc4d2b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca17d2ea9aa3bd849a5226be0ccc4d2b);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_int_pos_91));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_91);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidType);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb16b8dbae5da291db232be3db2bb21d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb16b8dbae5da291db232be3db2bb21d);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_int_pos_95));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_95);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_OSError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OSError);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_e868277d88bef776fc3e60e339435301));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e868277d88bef776fc3e60e339435301);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_int_pos_99));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_99);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TimeoutError);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_8927150c38d130cd9a3deecc6967b384));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8927150c38d130cd9a3deecc6967b384);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_int_pos_103));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_103);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseError);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_31e0ff7874b2d7e4692e8e997bb6be1f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31e0ff7874b2d7e4692e8e997bb6be1f);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_int_pos_107));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_107);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_7cb1d1d22966d469490caf6f9878cd9b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7cb1d1d22966d469490caf6f9878cd9b);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_33bdc6c9de3a2838e2868b2ba0d2a5e3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_33bdc6c9de3a2838e2868b2ba0d2a5e3);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_a3dc6f2053c758810f49f101544f4930_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a3dc6f2053c758810f49f101544f4930_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_899c8b1d174704d59463466c77da1055_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_899c8b1d174704d59463466c77da1055_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 5
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
static PyObject *module_var_accessor_google$auth$exceptions$DefaultCredentialsError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_DefaultCredentialsError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DefaultCredentialsError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DefaultCredentialsError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DefaultCredentialsError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DefaultCredentialsError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_DefaultCredentialsError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_DefaultCredentialsError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DefaultCredentialsError);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$exceptions$GoogleAuthError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_GoogleAuthError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GoogleAuthError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GoogleAuthError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GoogleAuthError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GoogleAuthError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_GoogleAuthError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_GoogleAuthError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GoogleAuthError);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$exceptions$ReauthFailError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ReauthFailError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReauthFailError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReauthFailError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReauthFailError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReauthFailError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ReauthFailError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ReauthFailError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ReauthFailError);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$exceptions$RefreshError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RefreshError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RefreshError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RefreshError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RefreshError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RefreshError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RefreshError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RefreshError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RefreshError);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$exceptions$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$exceptions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_bdf6b152780dedab0a029561c27adb4c;
static PyCodeObject *code_objects_e7bf2a84046f855ef99f5c2755529081;
static PyCodeObject *code_objects_cf9690d58d7f635d9cb8735d50b9a2a5;
static PyCodeObject *code_objects_81af262ba80b3be0fde2edae70a1ad07;
static PyCodeObject *code_objects_c41a70b9d66a65f6a1d09ff2aab8e9fa;
static PyCodeObject *code_objects_d222a3fb5c33930a9e1fb16957383156;
static PyCodeObject *code_objects_7fb04eff8358596ceebbf19f65d1c161;
static PyCodeObject *code_objects_24703ab1a0565a8b6bf4bc3ebe5f879e;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_7cb1d1d22966d469490caf6f9878cd9b); CHECK_OBJECT(module_filename_obj);
code_objects_bdf6b152780dedab0a029561c27adb4c = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_33bdc6c9de3a2838e2868b2ba0d2a5e3, mod_consts.const_str_digest_33bdc6c9de3a2838e2868b2ba0d2a5e3, NULL, NULL, 0, 0, 0);
code_objects_e7bf2a84046f855ef99f5c2755529081 = MAKE_CODE_OBJECT(module_filename_obj, 53, 0, mod_consts.const_str_plain_ClientCertError, mod_consts.const_str_plain_ClientCertError, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_cf9690d58d7f635d9cb8735d50b9a2a5 = MAKE_CODE_OBJECT(module_filename_obj, 18, 0, mod_consts.const_str_plain_GoogleAuthError, mod_consts.const_str_plain_GoogleAuthError, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_81af262ba80b3be0fde2edae70a1ad07 = MAKE_CODE_OBJECT(module_filename_obj, 66, 0, mod_consts.const_str_plain_ReauthFailError, mod_consts.const_str_plain_ReauthFailError, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c41a70b9d66a65f6a1d09ff2aab8e9fa = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_26de6258b546da94e17adedc091138bc, mod_consts.const_tuple_a3dc6f2053c758810f49f101544f4930_tuple, NULL, 1, 0, 0);
code_objects_d222a3fb5c33930a9e1fb16957383156 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_65442c192b1e5af42e50affa01357e6b, mod_consts.const_tuple_899c8b1d174704d59463466c77da1055_tuple, NULL, 2, 0, 0);
code_objects_7fb04eff8358596ceebbf19f65d1c161 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_retryable, mod_consts.const_str_digest_b87f8944583dba48d511d571ef6474c8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_24703ab1a0565a8b6bf4bc3ebe5f879e = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_retryable, mod_consts.const_str_digest_e638b1c020577cb978e5b68dacc2fc08, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$auth$exceptions$$$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$exceptions$$$function__2_retryable(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$exceptions$$$function__3_retryable(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$exceptions$$$function__4___init__(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_google$auth$exceptions$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_retryable = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$exceptions$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$exceptions$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$exceptions$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$exceptions$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$exceptions$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$exceptions$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c41a70b9d66a65f6a1d09ff2aab8e9fa, module_google$auth$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$exceptions$$$function__1___init__->m_type_description == NULL);
frame_frame_google$auth$exceptions$$$function__1___init__ = cache_frame_frame_google$auth$exceptions$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$exceptions$$$function__1___init__);
assert(Py_REFCNT(frame_frame_google$auth$exceptions$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$exceptions$GoogleAuthError(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GoogleAuthError);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain_retryable;
tmp_default_value_1 = Py_False;
tmp_assign_source_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_assign_source_1 == NULL) {
    tmp_assign_source_1 = tmp_default_value_1;
    Py_INCREF(tmp_assign_source_1);
}
assert(!(tmp_assign_source_1 == NULL));
assert(var_retryable == NULL);
var_retryable = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_retryable);
tmp_assattr_value_1 = var_retryable;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__retryable, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$exceptions$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$exceptions$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$exceptions$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$exceptions$$$function__1___init__,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    var_retryable,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$exceptions$$$function__1___init__ == cache_frame_frame_google$auth$exceptions$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$exceptions$$$function__1___init__);
    cache_frame_frame_google$auth$exceptions$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$exceptions$$$function__1___init__);

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
CHECK_OBJECT(var_retryable);
CHECK_OBJECT(var_retryable);
Py_DECREF(var_retryable);
var_retryable = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_retryable);
var_retryable = NULL;
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


static PyObject *impl_google$auth$exceptions$$$function__2_retryable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$exceptions$$$function__2_retryable;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$exceptions$$$function__2_retryable = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$exceptions$$$function__2_retryable)) {
    Py_XDECREF(cache_frame_frame_google$auth$exceptions$$$function__2_retryable);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$exceptions$$$function__2_retryable == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$exceptions$$$function__2_retryable = MAKE_FUNCTION_FRAME(tstate, code_objects_24703ab1a0565a8b6bf4bc3ebe5f879e, module_google$auth$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$exceptions$$$function__2_retryable->m_type_description == NULL);
frame_frame_google$auth$exceptions$$$function__2_retryable = cache_frame_frame_google$auth$exceptions$$$function__2_retryable;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$exceptions$$$function__2_retryable);
assert(Py_REFCNT(frame_frame_google$auth$exceptions$$$function__2_retryable) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__retryable);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$exceptions$$$function__2_retryable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$exceptions$$$function__2_retryable->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$exceptions$$$function__2_retryable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$exceptions$$$function__2_retryable,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$exceptions$$$function__2_retryable == cache_frame_frame_google$auth$exceptions$$$function__2_retryable) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$exceptions$$$function__2_retryable);
    cache_frame_frame_google$auth$exceptions$$$function__2_retryable = NULL;
}

assertFrameObject(frame_frame_google$auth$exceptions$$$function__2_retryable);

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


static PyObject *impl_google$auth$exceptions$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$exceptions$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$exceptions$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$exceptions$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$exceptions$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$exceptions$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$exceptions$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d222a3fb5c33930a9e1fb16957383156, module_google$auth$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$exceptions$$$function__4___init__->m_type_description == NULL);
frame_frame_google$auth$exceptions$$$function__4___init__ = cache_frame_frame_google$auth$exceptions$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$exceptions$$$function__4___init__);
assert(Py_REFCNT(frame_frame_google$auth$exceptions$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$exceptions$ReauthFailError(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReauthFailError);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_ef422cb718407287fe827a180041e840;
CHECK_OBJECT(par_message);
tmp_kw_call_arg_value_1_1 = par_message;
frame_frame_google$auth$exceptions$$$function__4___init__->m_frame.f_lineno = 71;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 71;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$exceptions$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$exceptions$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$exceptions$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$exceptions$$$function__4___init__,
    type_description_1,
    par_self,
    par_message,
    par_kwargs,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$exceptions$$$function__4___init__ == cache_frame_frame_google$auth$exceptions$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$exceptions$$$function__4___init__);
    cache_frame_frame_google$auth$exceptions$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$exceptions$$$function__4___init__);

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
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$auth$exceptions$$$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$exceptions$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_26de6258b546da94e17adedc091138bc,
#endif
        code_objects_c41a70b9d66a65f6a1d09ff2aab8e9fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$exceptions$$$function__2_retryable(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$exceptions$$$function__2_retryable,
        mod_consts.const_str_plain_retryable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e638b1c020577cb978e5b68dacc2fc08,
#endif
        code_objects_24703ab1a0565a8b6bf4bc3ebe5f879e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$exceptions$$$function__3_retryable(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_retryable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b87f8944583dba48d511d571ef6474c8,
#endif
        code_objects_7fb04eff8358596ceebbf19f65d1c161,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$exceptions,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$exceptions$$$function__4___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$exceptions$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_65442c192b1e5af42e50affa01357e6b,
#endif
        code_objects_d222a3fb5c33930a9e1fb16957383156,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$exceptions,
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

static function_impl_code const function_table_google$auth$exceptions[] = {
impl_google$auth$exceptions$$$function__1___init__,
impl_google$auth$exceptions$$$function__2_retryable,
impl_google$auth$exceptions$$$function__4___init__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$exceptions);
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
        module_google$auth$exceptions,
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
        function_table_google$auth$exceptions,
        sizeof(function_table_google$auth$exceptions) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.exceptions";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$exceptions(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$exceptions");

    // Store the module for future use.
    module_google$auth$exceptions = module;

    moduledict_google$auth$exceptions = MODULE_DICT(module_google$auth$exceptions);

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
        PRINT_STRING("google$auth$exceptions: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$exceptions: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$exceptions: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.exceptions" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$exceptions\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$exceptions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$exceptions);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$exceptions, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$exceptions);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
struct Nuitka_CellObject *outline_8_var___class__ = NULL;
PyObject *outline_9_var___class__ = NULL;
PyObject *outline_10_var___class__ = NULL;
PyObject *outline_11_var___class__ = NULL;
PyObject *outline_12_var___class__ = NULL;
PyObject *outline_13_var___class__ = NULL;
PyObject *outline_14_var___class__ = NULL;
PyObject *outline_15_var___class__ = NULL;
PyObject *outline_16_var___class__ = NULL;
PyObject *outline_17_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_1__bases = NULL;
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
struct Nuitka_FrameObject *frame_frame_google$auth$exceptions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_google$auth$exceptions$$$class__1_GoogleAuthError_18 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$auth$exceptions$$$class__1_GoogleAuthError_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_google$auth$exceptions$$$class__2_TransportError_31 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_google$auth$exceptions$$$class__3_RefreshError_35 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_google$auth$exceptions$$$class__4_UserAccessTokenError_40 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_google$auth$exceptions$$$class__5_DefaultCredentialsError_44 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_google$auth$exceptions$$$class__6_MutualTLSChannelError_48 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_google$auth$exceptions$$$class__7_ClientCertError_53 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$exceptions$$$class__7_ClientCertError_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
PyObject *locals_google$auth$exceptions$$$class__8_OAuthError_61 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
PyObject *locals_google$auth$exceptions$$$class__9_ReauthFailError_66 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$exceptions$$$class__9_ReauthFailError_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
PyObject *locals_google$auth$exceptions$$$class__10_ReauthSamlChallengeFailError_75 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
PyObject *locals_google$auth$exceptions$$$class__11_MalformedError_79 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
PyObject *locals_google$auth$exceptions$$$class__12_InvalidResource_83 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
PyObject *locals_google$auth$exceptions$$$class__13_InvalidOperation_87 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_38;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
PyObject *locals_google$auth$exceptions$$$class__14_InvalidValue_91 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_40;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_41;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_42;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
PyObject *locals_google$auth$exceptions$$$class__15_InvalidType_95 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_43;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_44;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_45;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
PyObject *locals_google$auth$exceptions$$$class__16_OSError_99 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_46;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_47;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_48;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
PyObject *locals_google$auth$exceptions$$$class__17_TimeoutError_103 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_49;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_50;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_51;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
PyObject *locals_google$auth$exceptions$$$class__18_ResponseError_107 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_52;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_53;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_54;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_5ad819f55ef4694c271ff87fac854d24;
UPDATE_STRING_DICT0(moduledict_google$auth$exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$exceptions = MAKE_MODULE_FRAME(code_objects_bdf6b152780dedab0a029561c27adb4c, module_google$auth$exceptions);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$exceptions);
assert(Py_REFCNT(frame_frame_google$auth$exceptions) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$exceptions$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$exceptions$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$exceptions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_Exception_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_4 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
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


exception_lineno = 18;

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


exception_lineno = 18;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_6 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_6;
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


exception_lineno = 18;

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
PyObject *tmp_assign_source_7;
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


exception_lineno = 18;

    goto try_except_handler_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_GoogleAuthError;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 18;
tmp_assign_source_7 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_7;
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


exception_lineno = 18;

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
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_1 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_1, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

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


exception_lineno = 18;

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


exception_lineno = 18;

    goto try_except_handler_1;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 18;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 18;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_8;
}
branch_end_1:;
{
PyObject *tmp_assign_source_9;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$auth$exceptions$$$class__1_GoogleAuthError_18 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__1_GoogleAuthError_18, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_5070ed7e7abaa2b00f0d9c717ba88bea;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__1_GoogleAuthError_18, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_GoogleAuthError;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__1_GoogleAuthError_18, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_18;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__1_GoogleAuthError_18, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
frame_frame_google$auth$exceptions$$$class__1_GoogleAuthError_2 = MAKE_CLASS_FRAME(tstate, code_objects_cf9690d58d7f635d9cb8735d50b9a2a5, module_google$auth$exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$exceptions$$$class__1_GoogleAuthError_2);
assert(Py_REFCNT(frame_frame_google$auth$exceptions$$$class__1_GoogleAuthError_2) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_google$auth$exceptions$$$function__1___init__(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__1_GoogleAuthError_18, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = PyObject_GetItem(locals_google$auth$exceptions$$$class__1_GoogleAuthError_18, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_1 = MAKE_FUNCTION_google$auth$exceptions$$$function__2_retryable(tstate);

frame_frame_google$auth$exceptions$$$class__1_GoogleAuthError_2->m_frame.f_lineno = 26;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__1_GoogleAuthError_18, mod_consts.const_str_plain_retryable, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$exceptions$$$class__1_GoogleAuthError_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$exceptions$$$class__1_GoogleAuthError_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$exceptions$$$class__1_GoogleAuthError_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$exceptions$$$class__1_GoogleAuthError_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$auth$exceptions$$$class__1_GoogleAuthError_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__retryable_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__1_GoogleAuthError_18, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_Exception_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_Exception_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__1_GoogleAuthError_18, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_3 = mod_consts.const_str_plain_GoogleAuthError;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_google$auth$exceptions$$$class__1_GoogleAuthError_18;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 18;
tmp_assign_source_10 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_10);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_9 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_9);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_google$auth$exceptions$$$class__1_GoogleAuthError_18);
locals_google$auth$exceptions$$$class__1_GoogleAuthError_18 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__1_GoogleAuthError_18);
locals_google$auth$exceptions$$$class__1_GoogleAuthError_18 = NULL;
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
exception_lineno = 18;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_GoogleAuthError, tmp_assign_source_9);
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
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = module_var_accessor_google$auth$exceptions$GoogleAuthError(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GoogleAuthError);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto try_except_handler_4;
}
tmp_assign_source_11 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_11, 0, tmp_tuple_element_4);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_12 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

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
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_4;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_4;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_14 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_14;
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


exception_lineno = 31;

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
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_4;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_TransportError;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 31;
tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_15;
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


exception_lineno = 31;

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
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_2 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_2, tmp_default_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_4;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_4;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 31;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 31;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_16;
}
branch_end_4:;
{
PyObject *tmp_assign_source_17;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_google$auth$exceptions$$$class__2_TransportError_31 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__2_TransportError_31, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_8f8973511263b12696b3a604a3a97566;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__2_TransportError_31, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_TransportError;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__2_TransportError_31, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_31;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__2_TransportError_31, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_6;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__2_TransportError_31, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

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


exception_lineno = 31;

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
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__2_TransportError_31, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_6;
}
branch_no_6:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_7 = mod_consts.const_str_plain_TransportError;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = locals_google$auth$exceptions$$$class__2_TransportError_31;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 31;
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_18;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_17 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_17);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_google$auth$exceptions$$$class__2_TransportError_31);
locals_google$auth$exceptions$$$class__2_TransportError_31 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__2_TransportError_31);
locals_google$auth$exceptions$$$class__2_TransportError_31 = NULL;
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
exception_lineno = 31;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_TransportError, tmp_assign_source_17);
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
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_tuple_element_8;
tmp_tuple_element_8 = module_var_accessor_google$auth$exceptions$GoogleAuthError(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GoogleAuthError);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto try_except_handler_7;
}
tmp_assign_source_19 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_19, 0, tmp_tuple_element_8);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_20 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_7;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_13 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_7;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_7;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_22 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_22;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_7;
}
tmp_tuple_element_9 = mod_consts.const_str_plain_RefreshError;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 35;
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_23;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_16 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_7;
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
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_3, tmp_default_value_3);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_7;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_10);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_7;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 35;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 35;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_24;
}
branch_end_7:;
{
PyObject *tmp_assign_source_25;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_google$auth$exceptions$$$class__3_RefreshError_35 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__3_RefreshError_35, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_e457d53639a19060f3dc68569f2ad6ad;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__3_RefreshError_35, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_RefreshError;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__3_RefreshError_35, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_35;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__3_RefreshError_35, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_9;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__3_RefreshError_35, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_9;
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


exception_lineno = 35;

    goto try_except_handler_9;
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
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__3_RefreshError_35, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_9;
}
branch_no_9:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_11 = mod_consts.const_str_plain_RefreshError;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_google$auth$exceptions$$$class__3_RefreshError_35;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 35;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_9;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_26;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_25 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_25);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_google$auth$exceptions$$$class__3_RefreshError_35);
locals_google$auth$exceptions$$$class__3_RefreshError_35 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__3_RefreshError_35);
locals_google$auth$exceptions$$$class__3_RefreshError_35 = NULL;
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
exception_lineno = 35;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RefreshError, tmp_assign_source_25);
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_27;
PyObject *tmp_tuple_element_12;
tmp_tuple_element_12 = module_var_accessor_google$auth$exceptions$GoogleAuthError(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GoogleAuthError);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto try_except_handler_10;
}
tmp_assign_source_27 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_27, 0, tmp_tuple_element_12);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_28 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_10;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_19 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_10;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_10;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_30 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_30;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_10;
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
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_10;
}
tmp_tuple_element_13 = mod_consts.const_str_plain_UserAccessTokenError;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 40;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_31;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_22 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_10;
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
PyObject *tmp_tuple_element_14;
PyObject *tmp_expression_value_23;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_14 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_4, tmp_default_value_4);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_10;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_14);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_10;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 40;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 40;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_32;
}
branch_end_10:;
{
PyObject *tmp_assign_source_33;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_google$auth$exceptions$$$class__4_UserAccessTokenError_40 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__4_UserAccessTokenError_40, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_824ed81634f06a647cde4abb564bd165;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__4_UserAccessTokenError_40, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_UserAccessTokenError;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__4_UserAccessTokenError_40, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_40;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__4_UserAccessTokenError_40, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_12;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__4_UserAccessTokenError_40, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_12;
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


exception_lineno = 40;

    goto try_except_handler_12;
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
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__4_UserAccessTokenError_40, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_12;
}
branch_no_12:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_15 = mod_consts.const_str_plain_UserAccessTokenError;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_15);
tmp_tuple_element_15 = locals_google$auth$exceptions$$$class__4_UserAccessTokenError_40;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 40;
tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_12;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_34;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_33 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_33);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_google$auth$exceptions$$$class__4_UserAccessTokenError_40);
locals_google$auth$exceptions$$$class__4_UserAccessTokenError_40 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__4_UserAccessTokenError_40);
locals_google$auth$exceptions$$$class__4_UserAccessTokenError_40 = NULL;
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
exception_lineno = 40;
goto try_except_handler_10;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_UserAccessTokenError, tmp_assign_source_33);
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
PyObject *tmp_assign_source_35;
PyObject *tmp_tuple_element_16;
tmp_tuple_element_16 = module_var_accessor_google$auth$exceptions$GoogleAuthError(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GoogleAuthError);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto try_except_handler_13;
}
tmp_assign_source_35 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_35, 0, tmp_tuple_element_16);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_36 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_13;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_25 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_13;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_13;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_38 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_38;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_13;
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
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_13;
}
tmp_tuple_element_17 = mod_consts.const_str_plain_DefaultCredentialsError;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 44;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_39;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_28 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_13;
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
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_18 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_5, tmp_default_value_5);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_13;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_30;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_18);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_13;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 44;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 44;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_40;
}
branch_end_13:;
{
PyObject *tmp_assign_source_41;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_google$auth$exceptions$$$class__5_DefaultCredentialsError_44 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__5_DefaultCredentialsError_44, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_digest_4468d420669c76d04a1b18d5475b1c75;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__5_DefaultCredentialsError_44, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_DefaultCredentialsError;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__5_DefaultCredentialsError_44, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_44;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__5_DefaultCredentialsError_44, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_15;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__5_DefaultCredentialsError_44, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_15;
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


exception_lineno = 44;

    goto try_except_handler_15;
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
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__5_DefaultCredentialsError_44, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_15;
}
branch_no_15:;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_11 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_19 = mod_consts.const_str_plain_DefaultCredentialsError;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_19 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_19);
tmp_tuple_element_19 = locals_google$auth$exceptions$$$class__5_DefaultCredentialsError_44;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 44;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_15;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_42;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_41 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_41);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_google$auth$exceptions$$$class__5_DefaultCredentialsError_44);
locals_google$auth$exceptions$$$class__5_DefaultCredentialsError_44 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__5_DefaultCredentialsError_44);
locals_google$auth$exceptions$$$class__5_DefaultCredentialsError_44 = NULL;
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
exception_lineno = 44;
goto try_except_handler_13;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_DefaultCredentialsError, tmp_assign_source_41);
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
{
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_tuple_element_20;
tmp_tuple_element_20 = module_var_accessor_google$auth$exceptions$GoogleAuthError(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GoogleAuthError);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto try_except_handler_16;
}
tmp_assign_source_43 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_43, 0, tmp_tuple_element_20);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_44 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_16;
}
tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_31 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_6, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_16;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_16;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_46 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_46;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_16;
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
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_21;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_16;
}
tmp_tuple_element_21 = mod_consts.const_str_plain_MutualTLSChannelError;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_21 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 48;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_47;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_34 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_16;
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
PyObject *tmp_tuple_element_22;
PyObject *tmp_expression_value_35;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_35 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_22 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_6, tmp_default_value_6);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_16;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_36;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_36 == NULL));
tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_22);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_16;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 48;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 48;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_16;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_48;
}
branch_end_16:;
{
PyObject *tmp_assign_source_49;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_google$auth$exceptions$$$class__6_MutualTLSChannelError_48 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__6_MutualTLSChannelError_48, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_digest_fac0eafb9c8b43704f848db086e4aa39;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__6_MutualTLSChannelError_48, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_plain_MutualTLSChannelError;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__6_MutualTLSChannelError_48, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_int_pos_48;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__6_MutualTLSChannelError_48, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_18;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__6_MutualTLSChannelError_48, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_18;
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


exception_lineno = 48;

    goto try_except_handler_18;
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
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__6_MutualTLSChannelError_48, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_18;
}
branch_no_18:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_23;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_13 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_23 = mod_consts.const_str_plain_MutualTLSChannelError;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_23 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_23);
tmp_tuple_element_23 = locals_google$auth$exceptions$$$class__6_MutualTLSChannelError_48;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 48;
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_18;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_50;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_49 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_49);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_google$auth$exceptions$$$class__6_MutualTLSChannelError_48);
locals_google$auth$exceptions$$$class__6_MutualTLSChannelError_48 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__6_MutualTLSChannelError_48);
locals_google$auth$exceptions$$$class__6_MutualTLSChannelError_48 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_17;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 48;
goto try_except_handler_16;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_MutualTLSChannelError, tmp_assign_source_49);
}
goto try_end_6;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
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
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
PyObject *tmp_assign_source_51;
PyObject *tmp_tuple_element_24;
tmp_tuple_element_24 = module_var_accessor_google$auth$exceptions$GoogleAuthError(tstate);
if (unlikely(tmp_tuple_element_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GoogleAuthError);
}

if (tmp_tuple_element_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto try_except_handler_19;
}
tmp_assign_source_51 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_51, 0, tmp_tuple_element_24);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_52 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_19;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_37 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_7, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_19;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_19;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_54 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_54;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_38 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_19;
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
PyObject *tmp_assign_source_55;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_39;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_25;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_19;
}
tmp_tuple_element_25 = mod_consts.const_str_plain_ClientCertError;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_25 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 53;
tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_55;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_40;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_40 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_19;
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
PyObject *tmp_tuple_element_26;
PyObject *tmp_expression_value_41;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_41 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_26 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_7, tmp_default_value_7);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_19;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_42;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_42 == NULL));
tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_26);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_19;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_19;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 53;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 53;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_19;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_56;
tmp_assign_source_56 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_56;
}
branch_end_19:;
{
PyObject *tmp_assign_source_57;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_google$auth$exceptions$$$class__7_ClientCertError_53 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__7_ClientCertError_53, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_digest_066cf2851c578a93d5ff573dfe59159d;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__7_ClientCertError_53, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_plain_ClientCertError;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__7_ClientCertError_53, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_int_pos_53;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__7_ClientCertError_53, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_21;
}
frame_frame_google$auth$exceptions$$$class__7_ClientCertError_3 = MAKE_CLASS_FRAME(tstate, code_objects_e7bf2a84046f855ef99f5c2755529081, module_google$auth$exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$exceptions$$$class__7_ClientCertError_3);
assert(Py_REFCNT(frame_frame_google$auth$exceptions$$$class__7_ClientCertError_3) == 2);

// Framed code:
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_2;
tmp_called_value_15 = PyObject_GetItem(locals_google$auth$exceptions$$$class__7_ClientCertError_53, mod_consts.const_str_plain_property);

if (tmp_called_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_15 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}


tmp_args_element_value_2 = MAKE_FUNCTION_google$auth$exceptions$$$function__3_retryable(tstate);

frame_frame_google$auth$exceptions$$$class__7_ClientCertError_3->m_frame.f_lineno = 56;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__7_ClientCertError_53, mod_consts.const_str_plain_retryable, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$exceptions$$$class__7_ClientCertError_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$exceptions$$$class__7_ClientCertError_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$exceptions$$$class__7_ClientCertError_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$exceptions$$$class__7_ClientCertError_3,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_google$auth$exceptions$$$class__7_ClientCertError_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_21;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__7_ClientCertError_53, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_21;
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


exception_lineno = 53;

    goto try_except_handler_21;
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
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__7_ClientCertError_53, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_21;
}
branch_no_21:;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_27 = mod_consts.const_str_plain_ClientCertError;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_27 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_27);
tmp_tuple_element_27 = locals_google$auth$exceptions$$$class__7_ClientCertError_53;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 53;
tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_21;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_58;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_57 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_57);
goto try_return_handler_21;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
Py_DECREF(locals_google$auth$exceptions$$$class__7_ClientCertError_53);
locals_google$auth$exceptions$$$class__7_ClientCertError_53 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__7_ClientCertError_53);
locals_google$auth$exceptions$$$class__7_ClientCertError_53 = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_20;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 53;
goto try_except_handler_19;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientCertError, tmp_assign_source_57);
}
goto try_end_7;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
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
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
PyObject *tmp_assign_source_59;
PyObject *tmp_tuple_element_28;
tmp_tuple_element_28 = module_var_accessor_google$auth$exceptions$GoogleAuthError(tstate);
if (unlikely(tmp_tuple_element_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GoogleAuthError);
}

if (tmp_tuple_element_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;

    goto try_except_handler_22;
}
tmp_assign_source_59 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_59, 0, tmp_tuple_element_28);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_60 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_22;
}
tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_43 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_8, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_22;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_22;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_62 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_62;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_44;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_44 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_22;
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
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_45;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_29;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_22;
}
tmp_tuple_element_29 = mod_consts.const_str_plain_OAuthError;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_29 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 61;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_63;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_46;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_46 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_22;
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
PyObject *tmp_tuple_element_30;
PyObject *tmp_expression_value_47;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_47 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_30 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_8, tmp_default_value_8);
if (tmp_tuple_element_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_22;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_48;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_48 == NULL));
tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_tuple_element_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_30);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_22;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_22;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 61;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 61;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_22;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_64;
tmp_assign_source_64 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_64;
}
branch_end_22:;
{
PyObject *tmp_assign_source_65;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_google$auth$exceptions$$$class__8_OAuthError_61 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__8_OAuthError_61, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_str_digest_d63f4be1a9f1230d9b9cfa569d016736;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__8_OAuthError_61, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_str_plain_OAuthError;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__8_OAuthError_61, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_int_pos_61;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__8_OAuthError_61, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_24;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__8_OAuthError_61, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_24;
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


exception_lineno = 61;

    goto try_except_handler_24;
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
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__8_OAuthError_61, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_24;
}
branch_no_24:;
{
PyObject *tmp_assign_source_66;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_18 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_31 = mod_consts.const_str_plain_OAuthError;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_31 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_31);
tmp_tuple_element_31 = locals_google$auth$exceptions$$$class__8_OAuthError_61;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 61;
tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_24;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_66;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_65 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_65);
goto try_return_handler_24;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
Py_DECREF(locals_google$auth$exceptions$$$class__8_OAuthError_61);
locals_google$auth$exceptions$$$class__8_OAuthError_61 = NULL;
goto try_return_handler_23;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__8_OAuthError_61);
locals_google$auth$exceptions$$$class__8_OAuthError_61 = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto try_except_handler_23;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 61;
goto try_except_handler_22;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_OAuthError, tmp_assign_source_65);
}
goto try_end_8;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
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
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
PyObject *tmp_assign_source_67;
PyObject *tmp_tuple_element_32;
tmp_tuple_element_32 = module_var_accessor_google$auth$exceptions$RefreshError(tstate);
if (unlikely(tmp_tuple_element_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RefreshError);
}

if (tmp_tuple_element_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;

    goto try_except_handler_25;
}
tmp_assign_source_67 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_67, 0, tmp_tuple_element_32);
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_67;
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_68 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_68;
}
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_69;
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_49;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_25;
}
tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_49 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_49, tmp_subscript_value_9, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_25;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_25;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_70 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_70;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_50;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_50 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_25;
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
PyObject *tmp_assign_source_71;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_51;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_33;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_51 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_25;
}
tmp_tuple_element_33 = mod_consts.const_str_plain_ReauthFailError;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_33 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 66;
tmp_assign_source_71 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_71;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_52;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_52 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_25;
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
PyObject *tmp_tuple_element_34;
PyObject *tmp_expression_value_53;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_53 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_34 = BUILTIN_GETATTR(tstate, tmp_expression_value_53, tmp_name_value_9, tmp_default_value_9);
if (tmp_tuple_element_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_25;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_54;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_54 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_54 == NULL));
tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_54);
Py_DECREF(tmp_expression_value_54);
if (tmp_tuple_element_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_34);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_25;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_25;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 66;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 66;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_25;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_72;
tmp_assign_source_72 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_72;
}
branch_end_25:;
{
PyObject *tmp_assign_source_73;
outline_8_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_google$auth$exceptions$$$class__9_ReauthFailError_66 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__9_ReauthFailError_66, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_str_digest_c5bf5ea2be9524ddb95b8f7491dc4ebe;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__9_ReauthFailError_66, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_str_plain_ReauthFailError;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__9_ReauthFailError_66, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_int_pos_66;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__9_ReauthFailError_66, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_27;
}
frame_frame_google$auth$exceptions$$$class__9_ReauthFailError_4 = MAKE_CLASS_FRAME(tstate, code_objects_81af262ba80b3be0fde2edae70a1ad07, module_google$auth$exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$exceptions$$$class__9_ReauthFailError_4);
assert(Py_REFCNT(frame_frame_google$auth$exceptions$$$class__9_ReauthFailError_4) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_google$auth$exceptions$$$function__4___init__(tstate, tmp_defaults_1);

tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__9_ReauthFailError_66, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$exceptions$$$class__9_ReauthFailError_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$exceptions$$$class__9_ReauthFailError_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$exceptions$$$class__9_ReauthFailError_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$exceptions$$$class__9_ReauthFailError_4,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_google$auth$exceptions$$$class__9_ReauthFailError_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_27;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__9_ReauthFailError_66, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_27;
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


exception_lineno = 66;

    goto try_except_handler_27;
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
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__9_ReauthFailError_66, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_27;
}
branch_no_27:;
{
PyObject *tmp_assign_source_74;
PyObject *tmp_called_value_20;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_35;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_20 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_35 = mod_consts.const_str_plain_ReauthFailError;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_35 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_35);
tmp_tuple_element_35 = locals_google$auth$exceptions$$$class__9_ReauthFailError_66;
PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 66;
tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_27;
}
assert(Nuitka_Cell_GET(outline_8_var___class__) == NULL);
Nuitka_Cell_SET(outline_8_var___class__, tmp_assign_source_74);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_8_var___class__));
tmp_assign_source_73 = Nuitka_Cell_GET(outline_8_var___class__);
Py_INCREF(tmp_assign_source_73);
goto try_return_handler_27;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_27:;
Py_DECREF(locals_google$auth$exceptions$$$class__9_ReauthFailError_66);
locals_google$auth$exceptions$$$class__9_ReauthFailError_66 = NULL;
goto try_return_handler_26;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__9_ReauthFailError_66);
locals_google$auth$exceptions$$$class__9_ReauthFailError_66 = NULL;
// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto try_except_handler_26;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 66;
goto try_except_handler_25;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ReauthFailError, tmp_assign_source_73);
}
goto try_end_9;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
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
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
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
PyObject *tmp_assign_source_75;
PyObject *tmp_tuple_element_36;
tmp_tuple_element_36 = module_var_accessor_google$auth$exceptions$ReauthFailError(tstate);
if (unlikely(tmp_tuple_element_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReauthFailError);
}

if (tmp_tuple_element_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto try_except_handler_28;
}
tmp_assign_source_75 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_75, 0, tmp_tuple_element_36);
assert(tmp_class_container$class_creation_10__bases_orig == NULL);
tmp_class_container$class_creation_10__bases_orig = tmp_assign_source_75;
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_direct_call_arg1_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_direct_call_arg1_10 = tmp_class_container$class_creation_10__bases_orig;
Py_INCREF(tmp_direct_call_arg1_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10};
    tmp_assign_source_76 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_10__bases == NULL);
tmp_class_container$class_creation_10__bases = tmp_assign_source_76;
}
{
PyObject *tmp_assign_source_77;
tmp_assign_source_77 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__class_decl_dict == NULL);
tmp_class_container$class_creation_10__class_decl_dict = tmp_assign_source_77;
}
{
PyObject *tmp_assign_source_78;
PyObject *tmp_metaclass_value_10;
nuitka_bool tmp_condition_result_37;
int tmp_truth_name_10;
PyObject *tmp_type_arg_19;
PyObject *tmp_expression_value_55;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_container$class_creation_10__bases);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_28;
}
tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_expression_value_55 = tmp_class_container$class_creation_10__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_55, tmp_subscript_value_10, 0);
if (tmp_type_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_28;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_28;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_10);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_10__bases;
tmp_assign_source_78 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
CHECK_OBJECT(tmp_metaclass_value_10);
Py_DECREF(tmp_metaclass_value_10);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_10__metaclass == NULL);
tmp_class_container$class_creation_10__metaclass = tmp_assign_source_78;
}
{
bool tmp_condition_result_38;
PyObject *tmp_expression_value_56;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_56 = tmp_class_container$class_creation_10__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_28;
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
PyObject *tmp_assign_source_79;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_57;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_37;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_57 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_28;
}
tmp_tuple_element_37 = mod_consts.const_str_plain_ReauthSamlChallengeFailError;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_37 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 75;
tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_79;
}
{
bool tmp_condition_result_39;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_58;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_expression_value_58 = tmp_class_container$class_creation_10__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_28;
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
PyObject *tmp_tuple_element_38;
PyObject *tmp_expression_value_59;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_59 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_38 = BUILTIN_GETATTR(tstate, tmp_expression_value_59, tmp_name_value_10, tmp_default_value_10);
if (tmp_tuple_element_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_28;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_60;
PyObject *tmp_type_arg_20;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_type_arg_20 = tmp_class_container$class_creation_10__prepared;
tmp_expression_value_60 = BUILTIN_TYPE1(tmp_type_arg_20);
assert(!(tmp_expression_value_60 == NULL));
tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_60);
Py_DECREF(tmp_expression_value_60);
if (tmp_tuple_element_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_38);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_28;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_28;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 75;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 75;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_28;
}
branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_80;
tmp_assign_source_80 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_80;
}
branch_end_28:;
{
PyObject *tmp_assign_source_81;
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_10__prepared;
locals_google$auth$exceptions$$$class__10_ReauthSamlChallengeFailError_75 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__10_ReauthSamlChallengeFailError_75, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_str_digest_f0cc151d07c1597db8f5ba337073ae53;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__10_ReauthSamlChallengeFailError_75, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_str_plain_ReauthSamlChallengeFailError;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__10_ReauthSamlChallengeFailError_75, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_int_pos_75;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__10_ReauthSamlChallengeFailError_75, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_30;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__10_ReauthSamlChallengeFailError_75, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_30;
}
{
nuitka_bool tmp_condition_result_40;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_cmp_expr_left_10 = tmp_class_container$class_creation_10__bases;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_cmp_expr_right_10 = tmp_class_container$class_creation_10__bases_orig;
tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_30;
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
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__10_ReauthSamlChallengeFailError_75, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_30;
}
branch_no_30:;
{
PyObject *tmp_assign_source_82;
PyObject *tmp_called_value_22;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_39;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_called_value_22 = tmp_class_container$class_creation_10__metaclass;
tmp_tuple_element_39 = mod_consts.const_str_plain_ReauthSamlChallengeFailError;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_39 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_39);
tmp_tuple_element_39 = locals_google$auth$exceptions$$$class__10_ReauthSamlChallengeFailError_75;
PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_20 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 75;
tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_30;
}
assert(outline_9_var___class__ == NULL);
outline_9_var___class__ = tmp_assign_source_82;
}
CHECK_OBJECT(outline_9_var___class__);
tmp_assign_source_81 = outline_9_var___class__;
Py_INCREF(tmp_assign_source_81);
goto try_return_handler_30;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_30:;
Py_DECREF(locals_google$auth$exceptions$$$class__10_ReauthSamlChallengeFailError_75);
locals_google$auth$exceptions$$$class__10_ReauthSamlChallengeFailError_75 = NULL;
goto try_return_handler_29;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__10_ReauthSamlChallengeFailError_75);
locals_google$auth$exceptions$$$class__10_ReauthSamlChallengeFailError_75 = NULL;
// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto try_except_handler_29;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
CHECK_OBJECT(outline_9_var___class__);
CHECK_OBJECT(outline_9_var___class__);
Py_DECREF(outline_9_var___class__);
outline_9_var___class__ = NULL;
goto outline_result_20;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto outline_exception_10;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_10:;
exception_lineno = 75;
goto try_except_handler_28;
outline_result_20:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ReauthSamlChallengeFailError, tmp_assign_source_81);
}
goto try_end_10;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
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
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
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
PyObject *tmp_assign_source_83;
PyObject *tmp_tuple_element_40;
tmp_tuple_element_40 = module_var_accessor_google$auth$exceptions$DefaultCredentialsError(tstate);
if (unlikely(tmp_tuple_element_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DefaultCredentialsError);
}

if (tmp_tuple_element_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;

    goto try_except_handler_31;
}
tmp_assign_source_83 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_83, 0, tmp_tuple_element_40);
tmp_tuple_element_40 = PyExc_ValueError;
PyTuple_SET_ITEM0(tmp_assign_source_83, 1, tmp_tuple_element_40);
assert(tmp_class_container$class_creation_11__bases_orig == NULL);
tmp_class_container$class_creation_11__bases_orig = tmp_assign_source_83;
}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_direct_call_arg1_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_direct_call_arg1_11 = tmp_class_container$class_creation_11__bases_orig;
Py_INCREF(tmp_direct_call_arg1_11);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_11};
    tmp_assign_source_84 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_11__bases == NULL);
tmp_class_container$class_creation_11__bases = tmp_assign_source_84;
}
{
PyObject *tmp_assign_source_85;
tmp_assign_source_85 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__class_decl_dict == NULL);
tmp_class_container$class_creation_11__class_decl_dict = tmp_assign_source_85;
}
{
PyObject *tmp_assign_source_86;
PyObject *tmp_metaclass_value_11;
nuitka_bool tmp_condition_result_41;
int tmp_truth_name_11;
PyObject *tmp_type_arg_21;
PyObject *tmp_expression_value_61;
PyObject *tmp_subscript_value_11;
PyObject *tmp_bases_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_container$class_creation_11__bases);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_31;
}
tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_11;
} else {
    goto condexpr_false_11;
}
condexpr_true_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_expression_value_61 = tmp_class_container$class_creation_11__bases;
tmp_subscript_value_11 = const_int_0;
tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_61, tmp_subscript_value_11, 0);
if (tmp_type_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_31;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
CHECK_OBJECT(tmp_type_arg_21);
Py_DECREF(tmp_type_arg_21);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_31;
}
goto condexpr_end_11;
condexpr_false_11:;
tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_11);
condexpr_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_11__bases;
tmp_assign_source_86 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
CHECK_OBJECT(tmp_metaclass_value_11);
Py_DECREF(tmp_metaclass_value_11);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_11__metaclass == NULL);
tmp_class_container$class_creation_11__metaclass = tmp_assign_source_86;
}
{
bool tmp_condition_result_42;
PyObject *tmp_expression_value_62;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_62 = tmp_class_container$class_creation_11__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_62, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_31;
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
PyObject *tmp_assign_source_87;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_63;
PyObject *tmp_args_value_21;
PyObject *tmp_tuple_element_41;
PyObject *tmp_kwargs_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_63 = tmp_class_container$class_creation_11__metaclass;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_31;
}
tmp_tuple_element_41 = mod_consts.const_str_plain_MalformedError;
tmp_args_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_41 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_21 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 79;
tmp_assign_source_87 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_21, tmp_kwargs_value_21);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_value_21);
Py_DECREF(tmp_args_value_21);
if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_87;
}
{
bool tmp_condition_result_43;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_64;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_expression_value_64 = tmp_class_container$class_creation_11__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_31;
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
PyObject *tmp_tuple_element_42;
PyObject *tmp_expression_value_65;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_11;
tmp_mod_expr_left_11 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_65 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_11 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_42 = BUILTIN_GETATTR(tstate, tmp_expression_value_65, tmp_name_value_11, tmp_default_value_11);
if (tmp_tuple_element_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_31;
}
tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_66;
PyObject *tmp_type_arg_22;
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_type_arg_22 = tmp_class_container$class_creation_11__prepared;
tmp_expression_value_66 = BUILTIN_TYPE1(tmp_type_arg_22);
assert(!(tmp_expression_value_66 == NULL));
tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_66);
Py_DECREF(tmp_expression_value_66);
if (tmp_tuple_element_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_42);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_11);
goto try_except_handler_31;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
CHECK_OBJECT(tmp_mod_expr_right_11);
Py_DECREF(tmp_mod_expr_right_11);
if (tmp_make_exception_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_31;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 79;
tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_11);
CHECK_OBJECT(tmp_make_exception_arg_11);
Py_DECREF(tmp_make_exception_arg_11);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 79;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_31;
}
branch_no_32:;
goto branch_end_31;
branch_no_31:;
{
PyObject *tmp_assign_source_88;
tmp_assign_source_88 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_88;
}
branch_end_31:;
{
PyObject *tmp_assign_source_89;
{
PyObject *tmp_set_locals_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_set_locals_11 = tmp_class_container$class_creation_11__prepared;
locals_google$auth$exceptions$$$class__11_MalformedError_79 = tmp_set_locals_11;
Py_INCREF(tmp_set_locals_11);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__11_MalformedError_79, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_str_digest_cf47c49edf67ead1afd7d959961a812d;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__11_MalformedError_79, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_str_plain_MalformedError;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__11_MalformedError_79, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_int_pos_79;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__11_MalformedError_79, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_33;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__11_MalformedError_79, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_33;
}
{
nuitka_bool tmp_condition_result_44;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_cmp_expr_left_11 = tmp_class_container$class_creation_11__bases;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_cmp_expr_right_11 = tmp_class_container$class_creation_11__bases_orig;
tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_33;
}
if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
    goto branch_yes_33;
} else {
    goto branch_no_33;
}
}
branch_yes_33:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_11__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__11_MalformedError_79, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_33;
}
branch_no_33:;
{
PyObject *tmp_assign_source_90;
PyObject *tmp_called_value_24;
PyObject *tmp_args_value_22;
PyObject *tmp_tuple_element_43;
PyObject *tmp_kwargs_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_called_value_24 = tmp_class_container$class_creation_11__metaclass;
tmp_tuple_element_43 = mod_consts.const_str_plain_MalformedError;
tmp_args_value_22 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_43 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_43);
tmp_tuple_element_43 = locals_google$auth$exceptions$$$class__11_MalformedError_79;
PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_22 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 79;
tmp_assign_source_90 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_22, tmp_kwargs_value_22);
CHECK_OBJECT(tmp_args_value_22);
Py_DECREF(tmp_args_value_22);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_33;
}
assert(outline_10_var___class__ == NULL);
outline_10_var___class__ = tmp_assign_source_90;
}
CHECK_OBJECT(outline_10_var___class__);
tmp_assign_source_89 = outline_10_var___class__;
Py_INCREF(tmp_assign_source_89);
goto try_return_handler_33;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_33:;
Py_DECREF(locals_google$auth$exceptions$$$class__11_MalformedError_79);
locals_google$auth$exceptions$$$class__11_MalformedError_79 = NULL;
goto try_return_handler_32;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__11_MalformedError_79);
locals_google$auth$exceptions$$$class__11_MalformedError_79 = NULL;
// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto try_except_handler_32;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_32:;
CHECK_OBJECT(outline_10_var___class__);
CHECK_OBJECT(outline_10_var___class__);
Py_DECREF(outline_10_var___class__);
outline_10_var___class__ = NULL;
goto outline_result_22;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto outline_exception_11;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_11:;
exception_lineno = 79;
goto try_except_handler_31;
outline_result_22:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_MalformedError, tmp_assign_source_89);
}
goto try_end_11;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
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
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
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
PyObject *tmp_assign_source_91;
PyObject *tmp_tuple_element_44;
tmp_tuple_element_44 = module_var_accessor_google$auth$exceptions$DefaultCredentialsError(tstate);
if (unlikely(tmp_tuple_element_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DefaultCredentialsError);
}

if (tmp_tuple_element_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;

    goto try_except_handler_34;
}
tmp_assign_source_91 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_91, 0, tmp_tuple_element_44);
tmp_tuple_element_44 = PyExc_ValueError;
PyTuple_SET_ITEM0(tmp_assign_source_91, 1, tmp_tuple_element_44);
assert(tmp_class_container$class_creation_12__bases_orig == NULL);
tmp_class_container$class_creation_12__bases_orig = tmp_assign_source_91;
}
{
PyObject *tmp_assign_source_92;
PyObject *tmp_direct_call_arg1_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_direct_call_arg1_12 = tmp_class_container$class_creation_12__bases_orig;
Py_INCREF(tmp_direct_call_arg1_12);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_12};
    tmp_assign_source_92 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_34;
}
assert(tmp_class_container$class_creation_12__bases == NULL);
tmp_class_container$class_creation_12__bases = tmp_assign_source_92;
}
{
PyObject *tmp_assign_source_93;
tmp_assign_source_93 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__class_decl_dict == NULL);
tmp_class_container$class_creation_12__class_decl_dict = tmp_assign_source_93;
}
{
PyObject *tmp_assign_source_94;
PyObject *tmp_metaclass_value_12;
nuitka_bool tmp_condition_result_45;
int tmp_truth_name_12;
PyObject *tmp_type_arg_23;
PyObject *tmp_expression_value_67;
PyObject *tmp_subscript_value_12;
PyObject *tmp_bases_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_container$class_creation_12__bases);
if (tmp_truth_name_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_34;
}
tmp_condition_result_45 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_12;
} else {
    goto condexpr_false_12;
}
condexpr_true_12:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_expression_value_67 = tmp_class_container$class_creation_12__bases;
tmp_subscript_value_12 = const_int_0;
tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_67, tmp_subscript_value_12, 0);
if (tmp_type_arg_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_34;
}
tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
CHECK_OBJECT(tmp_type_arg_23);
Py_DECREF(tmp_type_arg_23);
if (tmp_metaclass_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_34;
}
goto condexpr_end_12;
condexpr_false_12:;
tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_12);
condexpr_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_bases_value_12 = tmp_class_container$class_creation_12__bases;
tmp_assign_source_94 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
CHECK_OBJECT(tmp_metaclass_value_12);
Py_DECREF(tmp_metaclass_value_12);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_34;
}
assert(tmp_class_container$class_creation_12__metaclass == NULL);
tmp_class_container$class_creation_12__metaclass = tmp_assign_source_94;
}
{
bool tmp_condition_result_46;
PyObject *tmp_expression_value_68;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_68 = tmp_class_container$class_creation_12__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_68, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_34;
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
PyObject *tmp_assign_source_95;
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_69;
PyObject *tmp_args_value_23;
PyObject *tmp_tuple_element_45;
PyObject *tmp_kwargs_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_69 = tmp_class_container$class_creation_12__metaclass;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_34;
}
tmp_tuple_element_45 = mod_consts.const_str_plain_InvalidResource;
tmp_args_value_23 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_45 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_23 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 83;
tmp_assign_source_95 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_23, tmp_kwargs_value_23);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_value_23);
Py_DECREF(tmp_args_value_23);
if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_34;
}
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_95;
}
{
bool tmp_condition_result_47;
PyObject *tmp_operand_value_12;
PyObject *tmp_expression_value_70;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_expression_value_70 = tmp_class_container$class_creation_12__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_70, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_34;
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
PyObject *tmp_tuple_element_46;
PyObject *tmp_expression_value_71;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_12;
tmp_mod_expr_left_12 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_71 = tmp_class_container$class_creation_12__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_12 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_46 = BUILTIN_GETATTR(tstate, tmp_expression_value_71, tmp_name_value_12, tmp_default_value_12);
if (tmp_tuple_element_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_34;
}
tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_72;
PyObject *tmp_type_arg_24;
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_type_arg_24 = tmp_class_container$class_creation_12__prepared;
tmp_expression_value_72 = BUILTIN_TYPE1(tmp_type_arg_24);
assert(!(tmp_expression_value_72 == NULL));
tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_72);
Py_DECREF(tmp_expression_value_72);
if (tmp_tuple_element_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_46);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_mod_expr_right_12);
goto try_except_handler_34;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_make_exception_arg_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
CHECK_OBJECT(tmp_mod_expr_right_12);
Py_DECREF(tmp_mod_expr_right_12);
if (tmp_make_exception_arg_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_34;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 83;
tmp_raise_type_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_12);
CHECK_OBJECT(tmp_make_exception_arg_12);
Py_DECREF(tmp_make_exception_arg_12);
assert(!(tmp_raise_type_12 == NULL));
exception_state.exception_value = tmp_raise_type_12;
exception_lineno = 83;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_34;
}
branch_no_35:;
goto branch_end_34;
branch_no_34:;
{
PyObject *tmp_assign_source_96;
tmp_assign_source_96 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_96;
}
branch_end_34:;
{
PyObject *tmp_assign_source_97;
{
PyObject *tmp_set_locals_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_set_locals_12 = tmp_class_container$class_creation_12__prepared;
locals_google$auth$exceptions$$$class__12_InvalidResource_83 = tmp_set_locals_12;
Py_INCREF(tmp_set_locals_12);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__12_InvalidResource_83, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_str_digest_06a0effa7178664b9e33ad8924cc304d;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__12_InvalidResource_83, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidResource;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__12_InvalidResource_83, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_int_pos_83;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__12_InvalidResource_83, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_36;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__12_InvalidResource_83, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_36;
}
{
nuitka_bool tmp_condition_result_48;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_cmp_expr_left_12 = tmp_class_container$class_creation_12__bases;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_cmp_expr_right_12 = tmp_class_container$class_creation_12__bases_orig;
tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_36;
}
if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
    goto branch_yes_36;
} else {
    goto branch_no_36;
}
}
branch_yes_36:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_12__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__12_InvalidResource_83, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_36;
}
branch_no_36:;
{
PyObject *tmp_assign_source_98;
PyObject *tmp_called_value_26;
PyObject *tmp_args_value_24;
PyObject *tmp_tuple_element_47;
PyObject *tmp_kwargs_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_called_value_26 = tmp_class_container$class_creation_12__metaclass;
tmp_tuple_element_47 = mod_consts.const_str_plain_InvalidResource;
tmp_args_value_24 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_47 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_47);
tmp_tuple_element_47 = locals_google$auth$exceptions$$$class__12_InvalidResource_83;
PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_24 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 83;
tmp_assign_source_98 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_24, tmp_kwargs_value_24);
CHECK_OBJECT(tmp_args_value_24);
Py_DECREF(tmp_args_value_24);
if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_36;
}
assert(outline_11_var___class__ == NULL);
outline_11_var___class__ = tmp_assign_source_98;
}
CHECK_OBJECT(outline_11_var___class__);
tmp_assign_source_97 = outline_11_var___class__;
Py_INCREF(tmp_assign_source_97);
goto try_return_handler_36;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_36:;
Py_DECREF(locals_google$auth$exceptions$$$class__12_InvalidResource_83);
locals_google$auth$exceptions$$$class__12_InvalidResource_83 = NULL;
goto try_return_handler_35;
// Exception handler code:
try_except_handler_36:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__12_InvalidResource_83);
locals_google$auth$exceptions$$$class__12_InvalidResource_83 = NULL;
// Re-raise.
exception_state = exception_keeper_name_34;
exception_lineno = exception_keeper_lineno_34;

goto try_except_handler_35;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_35:;
CHECK_OBJECT(outline_11_var___class__);
CHECK_OBJECT(outline_11_var___class__);
Py_DECREF(outline_11_var___class__);
outline_11_var___class__ = NULL;
goto outline_result_24;
// Exception handler code:
try_except_handler_35:;
exception_keeper_lineno_35 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_35 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_35;
exception_lineno = exception_keeper_lineno_35;

goto outline_exception_12;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_12:;
exception_lineno = 83;
goto try_except_handler_34;
outline_result_24:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidResource, tmp_assign_source_97);
}
goto try_end_12;
// Exception handler code:
try_except_handler_34:;
exception_keeper_lineno_36 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_36 = exception_state;
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
exception_state = exception_keeper_name_36;
exception_lineno = exception_keeper_lineno_36;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
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
PyObject *tmp_assign_source_99;
PyObject *tmp_tuple_element_48;
tmp_tuple_element_48 = module_var_accessor_google$auth$exceptions$DefaultCredentialsError(tstate);
if (unlikely(tmp_tuple_element_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DefaultCredentialsError);
}

if (tmp_tuple_element_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto try_except_handler_37;
}
tmp_assign_source_99 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_99, 0, tmp_tuple_element_48);
tmp_tuple_element_48 = PyExc_ValueError;
PyTuple_SET_ITEM0(tmp_assign_source_99, 1, tmp_tuple_element_48);
assert(tmp_class_container$class_creation_13__bases_orig == NULL);
tmp_class_container$class_creation_13__bases_orig = tmp_assign_source_99;
}
{
PyObject *tmp_assign_source_100;
PyObject *tmp_direct_call_arg1_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_direct_call_arg1_13 = tmp_class_container$class_creation_13__bases_orig;
Py_INCREF(tmp_direct_call_arg1_13);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_13};
    tmp_assign_source_100 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_37;
}
assert(tmp_class_container$class_creation_13__bases == NULL);
tmp_class_container$class_creation_13__bases = tmp_assign_source_100;
}
{
PyObject *tmp_assign_source_101;
tmp_assign_source_101 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__class_decl_dict == NULL);
tmp_class_container$class_creation_13__class_decl_dict = tmp_assign_source_101;
}
{
PyObject *tmp_assign_source_102;
PyObject *tmp_metaclass_value_13;
nuitka_bool tmp_condition_result_49;
int tmp_truth_name_13;
PyObject *tmp_type_arg_25;
PyObject *tmp_expression_value_73;
PyObject *tmp_subscript_value_13;
PyObject *tmp_bases_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_container$class_creation_13__bases);
if (tmp_truth_name_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_37;
}
tmp_condition_result_49 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_13;
} else {
    goto condexpr_false_13;
}
condexpr_true_13:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_expression_value_73 = tmp_class_container$class_creation_13__bases;
tmp_subscript_value_13 = const_int_0;
tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_73, tmp_subscript_value_13, 0);
if (tmp_type_arg_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_37;
}
tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
CHECK_OBJECT(tmp_type_arg_25);
Py_DECREF(tmp_type_arg_25);
if (tmp_metaclass_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_37;
}
goto condexpr_end_13;
condexpr_false_13:;
tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_13);
condexpr_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_bases_value_13 = tmp_class_container$class_creation_13__bases;
tmp_assign_source_102 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
CHECK_OBJECT(tmp_metaclass_value_13);
Py_DECREF(tmp_metaclass_value_13);
if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_37;
}
assert(tmp_class_container$class_creation_13__metaclass == NULL);
tmp_class_container$class_creation_13__metaclass = tmp_assign_source_102;
}
{
bool tmp_condition_result_50;
PyObject *tmp_expression_value_74;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_74 = tmp_class_container$class_creation_13__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_74, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_37;
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
PyObject *tmp_assign_source_103;
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_75;
PyObject *tmp_args_value_25;
PyObject *tmp_tuple_element_49;
PyObject *tmp_kwargs_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_75 = tmp_class_container$class_creation_13__metaclass;
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_37;
}
tmp_tuple_element_49 = mod_consts.const_str_plain_InvalidOperation;
tmp_args_value_25 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_49);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_49 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_49);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_25 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 87;
tmp_assign_source_103 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_25, tmp_kwargs_value_25);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_value_25);
Py_DECREF(tmp_args_value_25);
if (tmp_assign_source_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_37;
}
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_103;
}
{
bool tmp_condition_result_51;
PyObject *tmp_operand_value_13;
PyObject *tmp_expression_value_76;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_expression_value_76 = tmp_class_container$class_creation_13__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_37;
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
PyObject *tmp_tuple_element_50;
PyObject *tmp_expression_value_77;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_13;
tmp_mod_expr_left_13 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_77 = tmp_class_container$class_creation_13__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_13 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_50 = BUILTIN_GETATTR(tstate, tmp_expression_value_77, tmp_name_value_13, tmp_default_value_13);
if (tmp_tuple_element_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_37;
}
tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_78;
PyObject *tmp_type_arg_26;
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_50);
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_type_arg_26 = tmp_class_container$class_creation_13__prepared;
tmp_expression_value_78 = BUILTIN_TYPE1(tmp_type_arg_26);
assert(!(tmp_expression_value_78 == NULL));
tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_78);
Py_DECREF(tmp_expression_value_78);
if (tmp_tuple_element_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_50);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_mod_expr_right_13);
goto try_except_handler_37;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_make_exception_arg_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
CHECK_OBJECT(tmp_mod_expr_right_13);
Py_DECREF(tmp_mod_expr_right_13);
if (tmp_make_exception_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_37;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 87;
tmp_raise_type_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_13);
CHECK_OBJECT(tmp_make_exception_arg_13);
Py_DECREF(tmp_make_exception_arg_13);
assert(!(tmp_raise_type_13 == NULL));
exception_state.exception_value = tmp_raise_type_13;
exception_lineno = 87;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_37;
}
branch_no_38:;
goto branch_end_37;
branch_no_37:;
{
PyObject *tmp_assign_source_104;
tmp_assign_source_104 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_104;
}
branch_end_37:;
{
PyObject *tmp_assign_source_105;
{
PyObject *tmp_set_locals_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_set_locals_13 = tmp_class_container$class_creation_13__prepared;
locals_google$auth$exceptions$$$class__13_InvalidOperation_87 = tmp_set_locals_13;
Py_INCREF(tmp_set_locals_13);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__13_InvalidOperation_87, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_str_digest_72fc2aaf882ecd2843c787a620bea305;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__13_InvalidOperation_87, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidOperation;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__13_InvalidOperation_87, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_int_pos_87;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__13_InvalidOperation_87, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_39;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__13_InvalidOperation_87, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_39;
}
{
nuitka_bool tmp_condition_result_52;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_cmp_expr_left_13 = tmp_class_container$class_creation_13__bases;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_cmp_expr_right_13 = tmp_class_container$class_creation_13__bases_orig;
tmp_condition_result_52 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_condition_result_52 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_39;
}
if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
    goto branch_yes_39;
} else {
    goto branch_no_39;
}
}
branch_yes_39:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_13__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__13_InvalidOperation_87, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_39;
}
branch_no_39:;
{
PyObject *tmp_assign_source_106;
PyObject *tmp_called_value_28;
PyObject *tmp_args_value_26;
PyObject *tmp_tuple_element_51;
PyObject *tmp_kwargs_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_called_value_28 = tmp_class_container$class_creation_13__metaclass;
tmp_tuple_element_51 = mod_consts.const_str_plain_InvalidOperation;
tmp_args_value_26 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_51);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_51 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_51);
tmp_tuple_element_51 = locals_google$auth$exceptions$$$class__13_InvalidOperation_87;
PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_51);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_26 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 87;
tmp_assign_source_106 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_26, tmp_kwargs_value_26);
CHECK_OBJECT(tmp_args_value_26);
Py_DECREF(tmp_args_value_26);
if (tmp_assign_source_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_39;
}
assert(outline_12_var___class__ == NULL);
outline_12_var___class__ = tmp_assign_source_106;
}
CHECK_OBJECT(outline_12_var___class__);
tmp_assign_source_105 = outline_12_var___class__;
Py_INCREF(tmp_assign_source_105);
goto try_return_handler_39;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_39:;
Py_DECREF(locals_google$auth$exceptions$$$class__13_InvalidOperation_87);
locals_google$auth$exceptions$$$class__13_InvalidOperation_87 = NULL;
goto try_return_handler_38;
// Exception handler code:
try_except_handler_39:;
exception_keeper_lineno_37 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_37 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__13_InvalidOperation_87);
locals_google$auth$exceptions$$$class__13_InvalidOperation_87 = NULL;
// Re-raise.
exception_state = exception_keeper_name_37;
exception_lineno = exception_keeper_lineno_37;

goto try_except_handler_38;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_38:;
CHECK_OBJECT(outline_12_var___class__);
CHECK_OBJECT(outline_12_var___class__);
Py_DECREF(outline_12_var___class__);
outline_12_var___class__ = NULL;
goto outline_result_26;
// Exception handler code:
try_except_handler_38:;
exception_keeper_lineno_38 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_38 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_38;
exception_lineno = exception_keeper_lineno_38;

goto outline_exception_13;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_13:;
exception_lineno = 87;
goto try_except_handler_37;
outline_result_26:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidOperation, tmp_assign_source_105);
}
goto try_end_13;
// Exception handler code:
try_except_handler_37:;
exception_keeper_lineno_39 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_39 = exception_state;
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
exception_state = exception_keeper_name_39;
exception_lineno = exception_keeper_lineno_39;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
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
PyObject *tmp_assign_source_107;
PyObject *tmp_tuple_element_52;
tmp_tuple_element_52 = module_var_accessor_google$auth$exceptions$DefaultCredentialsError(tstate);
if (unlikely(tmp_tuple_element_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DefaultCredentialsError);
}

if (tmp_tuple_element_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;

    goto try_except_handler_40;
}
tmp_assign_source_107 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_107, 0, tmp_tuple_element_52);
tmp_tuple_element_52 = PyExc_ValueError;
PyTuple_SET_ITEM0(tmp_assign_source_107, 1, tmp_tuple_element_52);
assert(tmp_class_container$class_creation_14__bases_orig == NULL);
tmp_class_container$class_creation_14__bases_orig = tmp_assign_source_107;
}
{
PyObject *tmp_assign_source_108;
PyObject *tmp_direct_call_arg1_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_direct_call_arg1_14 = tmp_class_container$class_creation_14__bases_orig;
Py_INCREF(tmp_direct_call_arg1_14);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_14};
    tmp_assign_source_108 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_108 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_40;
}
assert(tmp_class_container$class_creation_14__bases == NULL);
tmp_class_container$class_creation_14__bases = tmp_assign_source_108;
}
{
PyObject *tmp_assign_source_109;
tmp_assign_source_109 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__class_decl_dict == NULL);
tmp_class_container$class_creation_14__class_decl_dict = tmp_assign_source_109;
}
{
PyObject *tmp_assign_source_110;
PyObject *tmp_metaclass_value_14;
nuitka_bool tmp_condition_result_53;
int tmp_truth_name_14;
PyObject *tmp_type_arg_27;
PyObject *tmp_expression_value_79;
PyObject *tmp_subscript_value_14;
PyObject *tmp_bases_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_container$class_creation_14__bases);
if (tmp_truth_name_14 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_40;
}
tmp_condition_result_53 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_14;
} else {
    goto condexpr_false_14;
}
condexpr_true_14:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_expression_value_79 = tmp_class_container$class_creation_14__bases;
tmp_subscript_value_14 = const_int_0;
tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_79, tmp_subscript_value_14, 0);
if (tmp_type_arg_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_40;
}
tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
CHECK_OBJECT(tmp_type_arg_27);
Py_DECREF(tmp_type_arg_27);
if (tmp_metaclass_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_40;
}
goto condexpr_end_14;
condexpr_false_14:;
tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_14);
condexpr_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_bases_value_14 = tmp_class_container$class_creation_14__bases;
tmp_assign_source_110 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
CHECK_OBJECT(tmp_metaclass_value_14);
Py_DECREF(tmp_metaclass_value_14);
if (tmp_assign_source_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_40;
}
assert(tmp_class_container$class_creation_14__metaclass == NULL);
tmp_class_container$class_creation_14__metaclass = tmp_assign_source_110;
}
{
bool tmp_condition_result_54;
PyObject *tmp_expression_value_80;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_80 = tmp_class_container$class_creation_14__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_80, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_40;
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
PyObject *tmp_assign_source_111;
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_81;
PyObject *tmp_args_value_27;
PyObject *tmp_tuple_element_53;
PyObject *tmp_kwargs_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_81 = tmp_class_container$class_creation_14__metaclass;
tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_40;
}
tmp_tuple_element_53 = mod_consts.const_str_plain_InvalidValue;
tmp_args_value_27 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_53);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_53 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_53);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_27 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 91;
tmp_assign_source_111 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_27, tmp_kwargs_value_27);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_value_27);
Py_DECREF(tmp_args_value_27);
if (tmp_assign_source_111 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_40;
}
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_111;
}
{
bool tmp_condition_result_55;
PyObject *tmp_operand_value_14;
PyObject *tmp_expression_value_82;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_expression_value_82 = tmp_class_container$class_creation_14__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_82, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_40;
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
PyObject *tmp_tuple_element_54;
PyObject *tmp_expression_value_83;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_14;
tmp_mod_expr_left_14 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_83 = tmp_class_container$class_creation_14__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_14 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_54 = BUILTIN_GETATTR(tstate, tmp_expression_value_83, tmp_name_value_14, tmp_default_value_14);
if (tmp_tuple_element_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_40;
}
tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_84;
PyObject *tmp_type_arg_28;
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_54);
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_type_arg_28 = tmp_class_container$class_creation_14__prepared;
tmp_expression_value_84 = BUILTIN_TYPE1(tmp_type_arg_28);
assert(!(tmp_expression_value_84 == NULL));
tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_84);
Py_DECREF(tmp_expression_value_84);
if (tmp_tuple_element_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_54);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_mod_expr_right_14);
goto try_except_handler_40;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_make_exception_arg_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
CHECK_OBJECT(tmp_mod_expr_right_14);
Py_DECREF(tmp_mod_expr_right_14);
if (tmp_make_exception_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_40;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 91;
tmp_raise_type_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_14);
CHECK_OBJECT(tmp_make_exception_arg_14);
Py_DECREF(tmp_make_exception_arg_14);
assert(!(tmp_raise_type_14 == NULL));
exception_state.exception_value = tmp_raise_type_14;
exception_lineno = 91;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_40;
}
branch_no_41:;
goto branch_end_40;
branch_no_40:;
{
PyObject *tmp_assign_source_112;
tmp_assign_source_112 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_112;
}
branch_end_40:;
{
PyObject *tmp_assign_source_113;
{
PyObject *tmp_set_locals_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_set_locals_14 = tmp_class_container$class_creation_14__prepared;
locals_google$auth$exceptions$$$class__14_InvalidValue_91 = tmp_set_locals_14;
Py_INCREF(tmp_set_locals_14);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__14_InvalidValue_91, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_42;
}
tmp_dictset_value = mod_consts.const_str_digest_ca17d2ea9aa3bd849a5226be0ccc4d2b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__14_InvalidValue_91, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_42;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidValue;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__14_InvalidValue_91, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_42;
}
tmp_dictset_value = mod_consts.const_int_pos_91;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__14_InvalidValue_91, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_42;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__14_InvalidValue_91, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_42;
}
{
nuitka_bool tmp_condition_result_56;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_cmp_expr_left_14 = tmp_class_container$class_creation_14__bases;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_cmp_expr_right_14 = tmp_class_container$class_creation_14__bases_orig;
tmp_condition_result_56 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_56 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_42;
}
if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
    goto branch_yes_42;
} else {
    goto branch_no_42;
}
}
branch_yes_42:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_14__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__14_InvalidValue_91, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_42;
}
branch_no_42:;
{
PyObject *tmp_assign_source_114;
PyObject *tmp_called_value_30;
PyObject *tmp_args_value_28;
PyObject *tmp_tuple_element_55;
PyObject *tmp_kwargs_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_called_value_30 = tmp_class_container$class_creation_14__metaclass;
tmp_tuple_element_55 = mod_consts.const_str_plain_InvalidValue;
tmp_args_value_28 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_55);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_55 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_55);
tmp_tuple_element_55 = locals_google$auth$exceptions$$$class__14_InvalidValue_91;
PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_55);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_28 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 91;
tmp_assign_source_114 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_28, tmp_kwargs_value_28);
CHECK_OBJECT(tmp_args_value_28);
Py_DECREF(tmp_args_value_28);
if (tmp_assign_source_114 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_42;
}
assert(outline_13_var___class__ == NULL);
outline_13_var___class__ = tmp_assign_source_114;
}
CHECK_OBJECT(outline_13_var___class__);
tmp_assign_source_113 = outline_13_var___class__;
Py_INCREF(tmp_assign_source_113);
goto try_return_handler_42;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_42:;
Py_DECREF(locals_google$auth$exceptions$$$class__14_InvalidValue_91);
locals_google$auth$exceptions$$$class__14_InvalidValue_91 = NULL;
goto try_return_handler_41;
// Exception handler code:
try_except_handler_42:;
exception_keeper_lineno_40 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_40 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__14_InvalidValue_91);
locals_google$auth$exceptions$$$class__14_InvalidValue_91 = NULL;
// Re-raise.
exception_state = exception_keeper_name_40;
exception_lineno = exception_keeper_lineno_40;

goto try_except_handler_41;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_41:;
CHECK_OBJECT(outline_13_var___class__);
CHECK_OBJECT(outline_13_var___class__);
Py_DECREF(outline_13_var___class__);
outline_13_var___class__ = NULL;
goto outline_result_28;
// Exception handler code:
try_except_handler_41:;
exception_keeper_lineno_41 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_41 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_41;
exception_lineno = exception_keeper_lineno_41;

goto outline_exception_14;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_14:;
exception_lineno = 91;
goto try_except_handler_40;
outline_result_28:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidValue, tmp_assign_source_113);
}
goto try_end_14;
// Exception handler code:
try_except_handler_40:;
exception_keeper_lineno_42 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_42 = exception_state;
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
exception_state = exception_keeper_name_42;
exception_lineno = exception_keeper_lineno_42;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
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
PyObject *tmp_assign_source_115;
PyObject *tmp_tuple_element_56;
tmp_tuple_element_56 = module_var_accessor_google$auth$exceptions$DefaultCredentialsError(tstate);
if (unlikely(tmp_tuple_element_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DefaultCredentialsError);
}

if (tmp_tuple_element_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;

    goto try_except_handler_43;
}
tmp_assign_source_115 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_115, 0, tmp_tuple_element_56);
tmp_tuple_element_56 = PyExc_TypeError;
PyTuple_SET_ITEM0(tmp_assign_source_115, 1, tmp_tuple_element_56);
assert(tmp_class_container$class_creation_15__bases_orig == NULL);
tmp_class_container$class_creation_15__bases_orig = tmp_assign_source_115;
}
{
PyObject *tmp_assign_source_116;
PyObject *tmp_direct_call_arg1_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_direct_call_arg1_15 = tmp_class_container$class_creation_15__bases_orig;
Py_INCREF(tmp_direct_call_arg1_15);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_15};
    tmp_assign_source_116 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_116 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_43;
}
assert(tmp_class_container$class_creation_15__bases == NULL);
tmp_class_container$class_creation_15__bases = tmp_assign_source_116;
}
{
PyObject *tmp_assign_source_117;
tmp_assign_source_117 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__class_decl_dict == NULL);
tmp_class_container$class_creation_15__class_decl_dict = tmp_assign_source_117;
}
{
PyObject *tmp_assign_source_118;
PyObject *tmp_metaclass_value_15;
nuitka_bool tmp_condition_result_57;
int tmp_truth_name_15;
PyObject *tmp_type_arg_29;
PyObject *tmp_expression_value_85;
PyObject *tmp_subscript_value_15;
PyObject *tmp_bases_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_container$class_creation_15__bases);
if (tmp_truth_name_15 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_43;
}
tmp_condition_result_57 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_15;
} else {
    goto condexpr_false_15;
}
condexpr_true_15:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_expression_value_85 = tmp_class_container$class_creation_15__bases;
tmp_subscript_value_15 = const_int_0;
tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_85, tmp_subscript_value_15, 0);
if (tmp_type_arg_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_43;
}
tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
CHECK_OBJECT(tmp_type_arg_29);
Py_DECREF(tmp_type_arg_29);
if (tmp_metaclass_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_43;
}
goto condexpr_end_15;
condexpr_false_15:;
tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_15);
condexpr_end_15:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_bases_value_15 = tmp_class_container$class_creation_15__bases;
tmp_assign_source_118 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
CHECK_OBJECT(tmp_metaclass_value_15);
Py_DECREF(tmp_metaclass_value_15);
if (tmp_assign_source_118 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_43;
}
assert(tmp_class_container$class_creation_15__metaclass == NULL);
tmp_class_container$class_creation_15__metaclass = tmp_assign_source_118;
}
{
bool tmp_condition_result_58;
PyObject *tmp_expression_value_86;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_86 = tmp_class_container$class_creation_15__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_86, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_43;
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
PyObject *tmp_assign_source_119;
PyObject *tmp_called_value_31;
PyObject *tmp_expression_value_87;
PyObject *tmp_args_value_29;
PyObject *tmp_tuple_element_57;
PyObject *tmp_kwargs_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_87 = tmp_class_container$class_creation_15__metaclass;
tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_43;
}
tmp_tuple_element_57 = mod_consts.const_str_plain_InvalidType;
tmp_args_value_29 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_57);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_57 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_57);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_29 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 95;
tmp_assign_source_119 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_29, tmp_kwargs_value_29);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_value_29);
Py_DECREF(tmp_args_value_29);
if (tmp_assign_source_119 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_43;
}
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_119;
}
{
bool tmp_condition_result_59;
PyObject *tmp_operand_value_15;
PyObject *tmp_expression_value_88;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_expression_value_88 = tmp_class_container$class_creation_15__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_88, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_43;
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
PyObject *tmp_tuple_element_58;
PyObject *tmp_expression_value_89;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_15;
tmp_mod_expr_left_15 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_89 = tmp_class_container$class_creation_15__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_15 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_58 = BUILTIN_GETATTR(tstate, tmp_expression_value_89, tmp_name_value_15, tmp_default_value_15);
if (tmp_tuple_element_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_43;
}
tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_90;
PyObject *tmp_type_arg_30;
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_58);
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_type_arg_30 = tmp_class_container$class_creation_15__prepared;
tmp_expression_value_90 = BUILTIN_TYPE1(tmp_type_arg_30);
assert(!(tmp_expression_value_90 == NULL));
tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_90);
Py_DECREF(tmp_expression_value_90);
if (tmp_tuple_element_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_58);
}
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_mod_expr_right_15);
goto try_except_handler_43;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_make_exception_arg_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
CHECK_OBJECT(tmp_mod_expr_right_15);
Py_DECREF(tmp_mod_expr_right_15);
if (tmp_make_exception_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_43;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 95;
tmp_raise_type_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_15);
CHECK_OBJECT(tmp_make_exception_arg_15);
Py_DECREF(tmp_make_exception_arg_15);
assert(!(tmp_raise_type_15 == NULL));
exception_state.exception_value = tmp_raise_type_15;
exception_lineno = 95;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_43;
}
branch_no_44:;
goto branch_end_43;
branch_no_43:;
{
PyObject *tmp_assign_source_120;
tmp_assign_source_120 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_120;
}
branch_end_43:;
{
PyObject *tmp_assign_source_121;
{
PyObject *tmp_set_locals_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_set_locals_15 = tmp_class_container$class_creation_15__prepared;
locals_google$auth$exceptions$$$class__15_InvalidType_95 = tmp_set_locals_15;
Py_INCREF(tmp_set_locals_15);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__15_InvalidType_95, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_45;
}
tmp_dictset_value = mod_consts.const_str_digest_fb16b8dbae5da291db232be3db2bb21d;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__15_InvalidType_95, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_45;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidType;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__15_InvalidType_95, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_45;
}
tmp_dictset_value = mod_consts.const_int_pos_95;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__15_InvalidType_95, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_45;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__15_InvalidType_95, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_45;
}
{
nuitka_bool tmp_condition_result_60;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_cmp_expr_left_15 = tmp_class_container$class_creation_15__bases;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_cmp_expr_right_15 = tmp_class_container$class_creation_15__bases_orig;
tmp_condition_result_60 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_condition_result_60 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_45;
}
if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
    goto branch_yes_45;
} else {
    goto branch_no_45;
}
}
branch_yes_45:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_15__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__15_InvalidType_95, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_45;
}
branch_no_45:;
{
PyObject *tmp_assign_source_122;
PyObject *tmp_called_value_32;
PyObject *tmp_args_value_30;
PyObject *tmp_tuple_element_59;
PyObject *tmp_kwargs_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_called_value_32 = tmp_class_container$class_creation_15__metaclass;
tmp_tuple_element_59 = mod_consts.const_str_plain_InvalidType;
tmp_args_value_30 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_59);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_59 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_59);
tmp_tuple_element_59 = locals_google$auth$exceptions$$$class__15_InvalidType_95;
PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_59);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_30 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 95;
tmp_assign_source_122 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_30, tmp_kwargs_value_30);
CHECK_OBJECT(tmp_args_value_30);
Py_DECREF(tmp_args_value_30);
if (tmp_assign_source_122 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_45;
}
assert(outline_14_var___class__ == NULL);
outline_14_var___class__ = tmp_assign_source_122;
}
CHECK_OBJECT(outline_14_var___class__);
tmp_assign_source_121 = outline_14_var___class__;
Py_INCREF(tmp_assign_source_121);
goto try_return_handler_45;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_45:;
Py_DECREF(locals_google$auth$exceptions$$$class__15_InvalidType_95);
locals_google$auth$exceptions$$$class__15_InvalidType_95 = NULL;
goto try_return_handler_44;
// Exception handler code:
try_except_handler_45:;
exception_keeper_lineno_43 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_43 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__15_InvalidType_95);
locals_google$auth$exceptions$$$class__15_InvalidType_95 = NULL;
// Re-raise.
exception_state = exception_keeper_name_43;
exception_lineno = exception_keeper_lineno_43;

goto try_except_handler_44;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_44:;
CHECK_OBJECT(outline_14_var___class__);
CHECK_OBJECT(outline_14_var___class__);
Py_DECREF(outline_14_var___class__);
outline_14_var___class__ = NULL;
goto outline_result_30;
// Exception handler code:
try_except_handler_44:;
exception_keeper_lineno_44 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_44 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_44;
exception_lineno = exception_keeper_lineno_44;

goto outline_exception_15;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_15:;
exception_lineno = 95;
goto try_except_handler_43;
outline_result_30:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidType, tmp_assign_source_121);
}
goto try_end_15;
// Exception handler code:
try_except_handler_43:;
exception_keeper_lineno_45 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_45 = exception_state;
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
exception_state = exception_keeper_name_45;
exception_lineno = exception_keeper_lineno_45;

goto frame_exception_exit_1;
// End of try:
try_end_15:;
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
PyObject *tmp_assign_source_123;
PyObject *tmp_tuple_element_60;
tmp_tuple_element_60 = module_var_accessor_google$auth$exceptions$DefaultCredentialsError(tstate);
if (unlikely(tmp_tuple_element_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DefaultCredentialsError);
}

if (tmp_tuple_element_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;

    goto try_except_handler_46;
}
tmp_assign_source_123 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_123, 0, tmp_tuple_element_60);
tmp_tuple_element_60 = PyExc_EnvironmentError;
PyTuple_SET_ITEM0(tmp_assign_source_123, 1, tmp_tuple_element_60);
assert(tmp_class_container$class_creation_16__bases_orig == NULL);
tmp_class_container$class_creation_16__bases_orig = tmp_assign_source_123;
}
{
PyObject *tmp_assign_source_124;
PyObject *tmp_direct_call_arg1_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_direct_call_arg1_16 = tmp_class_container$class_creation_16__bases_orig;
Py_INCREF(tmp_direct_call_arg1_16);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_16};
    tmp_assign_source_124 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_124 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_46;
}
assert(tmp_class_container$class_creation_16__bases == NULL);
tmp_class_container$class_creation_16__bases = tmp_assign_source_124;
}
{
PyObject *tmp_assign_source_125;
tmp_assign_source_125 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__class_decl_dict == NULL);
tmp_class_container$class_creation_16__class_decl_dict = tmp_assign_source_125;
}
{
PyObject *tmp_assign_source_126;
PyObject *tmp_metaclass_value_16;
nuitka_bool tmp_condition_result_61;
int tmp_truth_name_16;
PyObject *tmp_type_arg_31;
PyObject *tmp_expression_value_91;
PyObject *tmp_subscript_value_16;
PyObject *tmp_bases_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_container$class_creation_16__bases);
if (tmp_truth_name_16 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_46;
}
tmp_condition_result_61 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_16;
} else {
    goto condexpr_false_16;
}
condexpr_true_16:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_expression_value_91 = tmp_class_container$class_creation_16__bases;
tmp_subscript_value_16 = const_int_0;
tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_91, tmp_subscript_value_16, 0);
if (tmp_type_arg_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_46;
}
tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
CHECK_OBJECT(tmp_type_arg_31);
Py_DECREF(tmp_type_arg_31);
if (tmp_metaclass_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_46;
}
goto condexpr_end_16;
condexpr_false_16:;
tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_16);
condexpr_end_16:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_bases_value_16 = tmp_class_container$class_creation_16__bases;
tmp_assign_source_126 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
CHECK_OBJECT(tmp_metaclass_value_16);
Py_DECREF(tmp_metaclass_value_16);
if (tmp_assign_source_126 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_46;
}
assert(tmp_class_container$class_creation_16__metaclass == NULL);
tmp_class_container$class_creation_16__metaclass = tmp_assign_source_126;
}
{
bool tmp_condition_result_62;
PyObject *tmp_expression_value_92;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_92 = tmp_class_container$class_creation_16__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_92, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_46;
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
PyObject *tmp_assign_source_127;
PyObject *tmp_called_value_33;
PyObject *tmp_expression_value_93;
PyObject *tmp_args_value_31;
PyObject *tmp_tuple_element_61;
PyObject *tmp_kwargs_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_93 = tmp_class_container$class_creation_16__metaclass;
tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_46;
}
tmp_tuple_element_61 = mod_consts.const_str_plain_OSError;
tmp_args_value_31 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_61);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_61 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_61);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_31 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 99;
tmp_assign_source_127 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_31, tmp_kwargs_value_31);
CHECK_OBJECT(tmp_called_value_33);
Py_DECREF(tmp_called_value_33);
CHECK_OBJECT(tmp_args_value_31);
Py_DECREF(tmp_args_value_31);
if (tmp_assign_source_127 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_46;
}
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_127;
}
{
bool tmp_condition_result_63;
PyObject *tmp_operand_value_16;
PyObject *tmp_expression_value_94;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_expression_value_94 = tmp_class_container$class_creation_16__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_94, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_46;
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
PyObject *tmp_tuple_element_62;
PyObject *tmp_expression_value_95;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_16;
tmp_mod_expr_left_16 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_95 = tmp_class_container$class_creation_16__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_16 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_62 = BUILTIN_GETATTR(tstate, tmp_expression_value_95, tmp_name_value_16, tmp_default_value_16);
if (tmp_tuple_element_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_46;
}
tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_96;
PyObject *tmp_type_arg_32;
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_62);
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_type_arg_32 = tmp_class_container$class_creation_16__prepared;
tmp_expression_value_96 = BUILTIN_TYPE1(tmp_type_arg_32);
assert(!(tmp_expression_value_96 == NULL));
tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_96);
Py_DECREF(tmp_expression_value_96);
if (tmp_tuple_element_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_62);
}
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_mod_expr_right_16);
goto try_except_handler_46;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_make_exception_arg_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
CHECK_OBJECT(tmp_mod_expr_right_16);
Py_DECREF(tmp_mod_expr_right_16);
if (tmp_make_exception_arg_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_46;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 99;
tmp_raise_type_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_16);
CHECK_OBJECT(tmp_make_exception_arg_16);
Py_DECREF(tmp_make_exception_arg_16);
assert(!(tmp_raise_type_16 == NULL));
exception_state.exception_value = tmp_raise_type_16;
exception_lineno = 99;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_46;
}
branch_no_47:;
goto branch_end_46;
branch_no_46:;
{
PyObject *tmp_assign_source_128;
tmp_assign_source_128 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_128;
}
branch_end_46:;
{
PyObject *tmp_assign_source_129;
{
PyObject *tmp_set_locals_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_set_locals_16 = tmp_class_container$class_creation_16__prepared;
locals_google$auth$exceptions$$$class__16_OSError_99 = tmp_set_locals_16;
Py_INCREF(tmp_set_locals_16);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__16_OSError_99, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_48;
}
tmp_dictset_value = mod_consts.const_str_digest_e868277d88bef776fc3e60e339435301;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__16_OSError_99, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_48;
}
tmp_dictset_value = mod_consts.const_str_plain_OSError;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__16_OSError_99, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_48;
}
tmp_dictset_value = mod_consts.const_int_pos_99;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__16_OSError_99, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_48;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__16_OSError_99, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_48;
}
{
nuitka_bool tmp_condition_result_64;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_cmp_expr_left_16 = tmp_class_container$class_creation_16__bases;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_cmp_expr_right_16 = tmp_class_container$class_creation_16__bases_orig;
tmp_condition_result_64 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
if (tmp_condition_result_64 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_48;
}
if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
    goto branch_yes_48;
} else {
    goto branch_no_48;
}
}
branch_yes_48:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_16__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__16_OSError_99, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_48;
}
branch_no_48:;
{
PyObject *tmp_assign_source_130;
PyObject *tmp_called_value_34;
PyObject *tmp_args_value_32;
PyObject *tmp_tuple_element_63;
PyObject *tmp_kwargs_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_called_value_34 = tmp_class_container$class_creation_16__metaclass;
tmp_tuple_element_63 = mod_consts.const_str_plain_OSError;
tmp_args_value_32 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_63);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_63 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_63);
tmp_tuple_element_63 = locals_google$auth$exceptions$$$class__16_OSError_99;
PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_63);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_32 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 99;
tmp_assign_source_130 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_32, tmp_kwargs_value_32);
CHECK_OBJECT(tmp_args_value_32);
Py_DECREF(tmp_args_value_32);
if (tmp_assign_source_130 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_48;
}
assert(outline_15_var___class__ == NULL);
outline_15_var___class__ = tmp_assign_source_130;
}
CHECK_OBJECT(outline_15_var___class__);
tmp_assign_source_129 = outline_15_var___class__;
Py_INCREF(tmp_assign_source_129);
goto try_return_handler_48;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_48:;
Py_DECREF(locals_google$auth$exceptions$$$class__16_OSError_99);
locals_google$auth$exceptions$$$class__16_OSError_99 = NULL;
goto try_return_handler_47;
// Exception handler code:
try_except_handler_48:;
exception_keeper_lineno_46 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_46 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__16_OSError_99);
locals_google$auth$exceptions$$$class__16_OSError_99 = NULL;
// Re-raise.
exception_state = exception_keeper_name_46;
exception_lineno = exception_keeper_lineno_46;

goto try_except_handler_47;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_47:;
CHECK_OBJECT(outline_15_var___class__);
CHECK_OBJECT(outline_15_var___class__);
Py_DECREF(outline_15_var___class__);
outline_15_var___class__ = NULL;
goto outline_result_32;
// Exception handler code:
try_except_handler_47:;
exception_keeper_lineno_47 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_47 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_47;
exception_lineno = exception_keeper_lineno_47;

goto outline_exception_16;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_16:;
exception_lineno = 99;
goto try_except_handler_46;
outline_result_32:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_OSError, tmp_assign_source_129);
}
goto try_end_16;
// Exception handler code:
try_except_handler_46:;
exception_keeper_lineno_48 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_48 = exception_state;
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
exception_state = exception_keeper_name_48;
exception_lineno = exception_keeper_lineno_48;

goto frame_exception_exit_1;
// End of try:
try_end_16:;
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
PyObject *tmp_assign_source_131;
PyObject *tmp_tuple_element_64;
tmp_tuple_element_64 = module_var_accessor_google$auth$exceptions$GoogleAuthError(tstate);
if (unlikely(tmp_tuple_element_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GoogleAuthError);
}

if (tmp_tuple_element_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;

    goto try_except_handler_49;
}
tmp_assign_source_131 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_131, 0, tmp_tuple_element_64);
assert(tmp_class_container$class_creation_17__bases_orig == NULL);
tmp_class_container$class_creation_17__bases_orig = tmp_assign_source_131;
}
{
PyObject *tmp_assign_source_132;
PyObject *tmp_direct_call_arg1_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_direct_call_arg1_17 = tmp_class_container$class_creation_17__bases_orig;
Py_INCREF(tmp_direct_call_arg1_17);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_17};
    tmp_assign_source_132 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_132 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_49;
}
assert(tmp_class_container$class_creation_17__bases == NULL);
tmp_class_container$class_creation_17__bases = tmp_assign_source_132;
}
{
PyObject *tmp_assign_source_133;
tmp_assign_source_133 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__class_decl_dict == NULL);
tmp_class_container$class_creation_17__class_decl_dict = tmp_assign_source_133;
}
{
PyObject *tmp_assign_source_134;
PyObject *tmp_metaclass_value_17;
nuitka_bool tmp_condition_result_65;
int tmp_truth_name_17;
PyObject *tmp_type_arg_33;
PyObject *tmp_expression_value_97;
PyObject *tmp_subscript_value_17;
PyObject *tmp_bases_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_container$class_creation_17__bases);
if (tmp_truth_name_17 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_49;
}
tmp_condition_result_65 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_17;
} else {
    goto condexpr_false_17;
}
condexpr_true_17:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_expression_value_97 = tmp_class_container$class_creation_17__bases;
tmp_subscript_value_17 = const_int_0;
tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_97, tmp_subscript_value_17, 0);
if (tmp_type_arg_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_49;
}
tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
CHECK_OBJECT(tmp_type_arg_33);
Py_DECREF(tmp_type_arg_33);
if (tmp_metaclass_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_49;
}
goto condexpr_end_17;
condexpr_false_17:;
tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_17);
condexpr_end_17:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_bases_value_17 = tmp_class_container$class_creation_17__bases;
tmp_assign_source_134 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
CHECK_OBJECT(tmp_metaclass_value_17);
Py_DECREF(tmp_metaclass_value_17);
if (tmp_assign_source_134 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_49;
}
assert(tmp_class_container$class_creation_17__metaclass == NULL);
tmp_class_container$class_creation_17__metaclass = tmp_assign_source_134;
}
{
bool tmp_condition_result_66;
PyObject *tmp_expression_value_98;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_98 = tmp_class_container$class_creation_17__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_98, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_49;
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
PyObject *tmp_assign_source_135;
PyObject *tmp_called_value_35;
PyObject *tmp_expression_value_99;
PyObject *tmp_args_value_33;
PyObject *tmp_tuple_element_65;
PyObject *tmp_kwargs_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_99 = tmp_class_container$class_creation_17__metaclass;
tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_49;
}
tmp_tuple_element_65 = mod_consts.const_str_plain_TimeoutError;
tmp_args_value_33 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_65);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_65 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_65);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_33 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 103;
tmp_assign_source_135 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_33, tmp_kwargs_value_33);
CHECK_OBJECT(tmp_called_value_35);
Py_DECREF(tmp_called_value_35);
CHECK_OBJECT(tmp_args_value_33);
Py_DECREF(tmp_args_value_33);
if (tmp_assign_source_135 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_49;
}
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_135;
}
{
bool tmp_condition_result_67;
PyObject *tmp_operand_value_17;
PyObject *tmp_expression_value_100;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_expression_value_100 = tmp_class_container$class_creation_17__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_100, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_49;
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
PyObject *tmp_tuple_element_66;
PyObject *tmp_expression_value_101;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_17;
tmp_mod_expr_left_17 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_101 = tmp_class_container$class_creation_17__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_17 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_66 = BUILTIN_GETATTR(tstate, tmp_expression_value_101, tmp_name_value_17, tmp_default_value_17);
if (tmp_tuple_element_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_49;
}
tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_102;
PyObject *tmp_type_arg_34;
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_66);
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_type_arg_34 = tmp_class_container$class_creation_17__prepared;
tmp_expression_value_102 = BUILTIN_TYPE1(tmp_type_arg_34);
assert(!(tmp_expression_value_102 == NULL));
tmp_tuple_element_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_102);
Py_DECREF(tmp_expression_value_102);
if (tmp_tuple_element_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_66);
}
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_mod_expr_right_17);
goto try_except_handler_49;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
tmp_make_exception_arg_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
CHECK_OBJECT(tmp_mod_expr_right_17);
Py_DECREF(tmp_mod_expr_right_17);
if (tmp_make_exception_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_49;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 103;
tmp_raise_type_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_17);
CHECK_OBJECT(tmp_make_exception_arg_17);
Py_DECREF(tmp_make_exception_arg_17);
assert(!(tmp_raise_type_17 == NULL));
exception_state.exception_value = tmp_raise_type_17;
exception_lineno = 103;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_49;
}
branch_no_50:;
goto branch_end_49;
branch_no_49:;
{
PyObject *tmp_assign_source_136;
tmp_assign_source_136 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_136;
}
branch_end_49:;
{
PyObject *tmp_assign_source_137;
{
PyObject *tmp_set_locals_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_set_locals_17 = tmp_class_container$class_creation_17__prepared;
locals_google$auth$exceptions$$$class__17_TimeoutError_103 = tmp_set_locals_17;
Py_INCREF(tmp_set_locals_17);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__17_TimeoutError_103, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_51;
}
tmp_dictset_value = mod_consts.const_str_digest_8927150c38d130cd9a3deecc6967b384;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__17_TimeoutError_103, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_51;
}
tmp_dictset_value = mod_consts.const_str_plain_TimeoutError;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__17_TimeoutError_103, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_51;
}
tmp_dictset_value = mod_consts.const_int_pos_103;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__17_TimeoutError_103, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_51;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__17_TimeoutError_103, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_51;
}
{
nuitka_bool tmp_condition_result_68;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_cmp_expr_left_17 = tmp_class_container$class_creation_17__bases;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_cmp_expr_right_17 = tmp_class_container$class_creation_17__bases_orig;
tmp_condition_result_68 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_condition_result_68 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_51;
}
if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
    goto branch_yes_51;
} else {
    goto branch_no_51;
}
}
branch_yes_51:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_17__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__17_TimeoutError_103, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_51;
}
branch_no_51:;
{
PyObject *tmp_assign_source_138;
PyObject *tmp_called_value_36;
PyObject *tmp_args_value_34;
PyObject *tmp_tuple_element_67;
PyObject *tmp_kwargs_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_called_value_36 = tmp_class_container$class_creation_17__metaclass;
tmp_tuple_element_67 = mod_consts.const_str_plain_TimeoutError;
tmp_args_value_34 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_67);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_67 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_67);
tmp_tuple_element_67 = locals_google$auth$exceptions$$$class__17_TimeoutError_103;
PyTuple_SET_ITEM0(tmp_args_value_34, 2, tmp_tuple_element_67);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_34 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 103;
tmp_assign_source_138 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_34, tmp_kwargs_value_34);
CHECK_OBJECT(tmp_args_value_34);
Py_DECREF(tmp_args_value_34);
if (tmp_assign_source_138 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_51;
}
assert(outline_16_var___class__ == NULL);
outline_16_var___class__ = tmp_assign_source_138;
}
CHECK_OBJECT(outline_16_var___class__);
tmp_assign_source_137 = outline_16_var___class__;
Py_INCREF(tmp_assign_source_137);
goto try_return_handler_51;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_51:;
Py_DECREF(locals_google$auth$exceptions$$$class__17_TimeoutError_103);
locals_google$auth$exceptions$$$class__17_TimeoutError_103 = NULL;
goto try_return_handler_50;
// Exception handler code:
try_except_handler_51:;
exception_keeper_lineno_49 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_49 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__17_TimeoutError_103);
locals_google$auth$exceptions$$$class__17_TimeoutError_103 = NULL;
// Re-raise.
exception_state = exception_keeper_name_49;
exception_lineno = exception_keeper_lineno_49;

goto try_except_handler_50;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_50:;
CHECK_OBJECT(outline_16_var___class__);
CHECK_OBJECT(outline_16_var___class__);
Py_DECREF(outline_16_var___class__);
outline_16_var___class__ = NULL;
goto outline_result_34;
// Exception handler code:
try_except_handler_50:;
exception_keeper_lineno_50 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_50 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_50;
exception_lineno = exception_keeper_lineno_50;

goto outline_exception_17;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_17:;
exception_lineno = 103;
goto try_except_handler_49;
outline_result_34:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutError, tmp_assign_source_137);
}
goto try_end_17;
// Exception handler code:
try_except_handler_49:;
exception_keeper_lineno_51 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_51 = exception_state;
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
exception_state = exception_keeper_name_51;
exception_lineno = exception_keeper_lineno_51;

goto frame_exception_exit_1;
// End of try:
try_end_17:;
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
PyObject *tmp_assign_source_139;
PyObject *tmp_tuple_element_68;
tmp_tuple_element_68 = module_var_accessor_google$auth$exceptions$GoogleAuthError(tstate);
if (unlikely(tmp_tuple_element_68 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GoogleAuthError);
}

if (tmp_tuple_element_68 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;

    goto try_except_handler_52;
}
tmp_assign_source_139 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_139, 0, tmp_tuple_element_68);
assert(tmp_class_container$class_creation_18__bases_orig == NULL);
tmp_class_container$class_creation_18__bases_orig = tmp_assign_source_139;
}
{
PyObject *tmp_assign_source_140;
PyObject *tmp_direct_call_arg1_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_direct_call_arg1_18 = tmp_class_container$class_creation_18__bases_orig;
Py_INCREF(tmp_direct_call_arg1_18);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_18};
    tmp_assign_source_140 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_140 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_52;
}
assert(tmp_class_container$class_creation_18__bases == NULL);
tmp_class_container$class_creation_18__bases = tmp_assign_source_140;
}
{
PyObject *tmp_assign_source_141;
tmp_assign_source_141 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_18__class_decl_dict == NULL);
tmp_class_container$class_creation_18__class_decl_dict = tmp_assign_source_141;
}
{
PyObject *tmp_assign_source_142;
PyObject *tmp_metaclass_value_18;
nuitka_bool tmp_condition_result_69;
int tmp_truth_name_18;
PyObject *tmp_type_arg_35;
PyObject *tmp_expression_value_103;
PyObject *tmp_subscript_value_18;
PyObject *tmp_bases_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_truth_name_18 = CHECK_IF_TRUE(tmp_class_container$class_creation_18__bases);
if (tmp_truth_name_18 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_52;
}
tmp_condition_result_69 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_69 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_18;
} else {
    goto condexpr_false_18;
}
condexpr_true_18:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_expression_value_103 = tmp_class_container$class_creation_18__bases;
tmp_subscript_value_18 = const_int_0;
tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_103, tmp_subscript_value_18, 0);
if (tmp_type_arg_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_52;
}
tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_35);
CHECK_OBJECT(tmp_type_arg_35);
Py_DECREF(tmp_type_arg_35);
if (tmp_metaclass_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_52;
}
goto condexpr_end_18;
condexpr_false_18:;
tmp_metaclass_value_18 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_18);
condexpr_end_18:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_bases_value_18 = tmp_class_container$class_creation_18__bases;
tmp_assign_source_142 = SELECT_METACLASS(tstate, tmp_metaclass_value_18, tmp_bases_value_18);
CHECK_OBJECT(tmp_metaclass_value_18);
Py_DECREF(tmp_metaclass_value_18);
if (tmp_assign_source_142 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_52;
}
assert(tmp_class_container$class_creation_18__metaclass == NULL);
tmp_class_container$class_creation_18__metaclass = tmp_assign_source_142;
}
{
bool tmp_condition_result_70;
PyObject *tmp_expression_value_104;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_104 = tmp_class_container$class_creation_18__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_104, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_52;
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
PyObject *tmp_assign_source_143;
PyObject *tmp_called_value_37;
PyObject *tmp_expression_value_105;
PyObject *tmp_args_value_35;
PyObject *tmp_tuple_element_69;
PyObject *tmp_kwargs_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_105 = tmp_class_container$class_creation_18__metaclass;
tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_52;
}
tmp_tuple_element_69 = mod_consts.const_str_plain_ResponseError;
tmp_args_value_35 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_69);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_69 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_69);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_35 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 107;
tmp_assign_source_143 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_35, tmp_kwargs_value_35);
CHECK_OBJECT(tmp_called_value_37);
Py_DECREF(tmp_called_value_37);
CHECK_OBJECT(tmp_args_value_35);
Py_DECREF(tmp_args_value_35);
if (tmp_assign_source_143 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_52;
}
assert(tmp_class_container$class_creation_18__prepared == NULL);
tmp_class_container$class_creation_18__prepared = tmp_assign_source_143;
}
{
bool tmp_condition_result_71;
PyObject *tmp_operand_value_18;
PyObject *tmp_expression_value_106;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_expression_value_106 = tmp_class_container$class_creation_18__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_106, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_52;
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
PyObject *tmp_tuple_element_70;
PyObject *tmp_expression_value_107;
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_18;
tmp_mod_expr_left_18 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_107 = tmp_class_container$class_creation_18__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_18 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_70 = BUILTIN_GETATTR(tstate, tmp_expression_value_107, tmp_name_value_18, tmp_default_value_18);
if (tmp_tuple_element_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_52;
}
tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_108;
PyObject *tmp_type_arg_36;
PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_70);
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_type_arg_36 = tmp_class_container$class_creation_18__prepared;
tmp_expression_value_108 = BUILTIN_TYPE1(tmp_type_arg_36);
assert(!(tmp_expression_value_108 == NULL));
tmp_tuple_element_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_108);
Py_DECREF(tmp_expression_value_108);
if (tmp_tuple_element_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_70);
}
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_mod_expr_right_18);
goto try_except_handler_52;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_make_exception_arg_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
CHECK_OBJECT(tmp_mod_expr_right_18);
Py_DECREF(tmp_mod_expr_right_18);
if (tmp_make_exception_arg_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_52;
}
frame_frame_google$auth$exceptions->m_frame.f_lineno = 107;
tmp_raise_type_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_18);
CHECK_OBJECT(tmp_make_exception_arg_18);
Py_DECREF(tmp_make_exception_arg_18);
assert(!(tmp_raise_type_18 == NULL));
exception_state.exception_value = tmp_raise_type_18;
exception_lineno = 107;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_52;
}
branch_no_53:;
goto branch_end_52;
branch_no_52:;
{
PyObject *tmp_assign_source_144;
tmp_assign_source_144 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_18__prepared == NULL);
tmp_class_container$class_creation_18__prepared = tmp_assign_source_144;
}
branch_end_52:;
{
PyObject *tmp_assign_source_145;
{
PyObject *tmp_set_locals_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_set_locals_18 = tmp_class_container$class_creation_18__prepared;
locals_google$auth$exceptions$$$class__18_ResponseError_107 = tmp_set_locals_18;
Py_INCREF(tmp_set_locals_18);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c754f3997648344cda997f9dda0ce3b;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__18_ResponseError_107, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_54;
}
tmp_dictset_value = mod_consts.const_str_digest_31e0ff7874b2d7e4692e8e997bb6be1f;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__18_ResponseError_107, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_54;
}
tmp_dictset_value = mod_consts.const_str_plain_ResponseError;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__18_ResponseError_107, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_54;
}
tmp_dictset_value = mod_consts.const_int_pos_107;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__18_ResponseError_107, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_54;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__18_ResponseError_107, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_54;
}
{
nuitka_bool tmp_condition_result_72;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_cmp_expr_left_18 = tmp_class_container$class_creation_18__bases;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_cmp_expr_right_18 = tmp_class_container$class_creation_18__bases_orig;
tmp_condition_result_72 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_condition_result_72 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_54;
}
if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
    goto branch_yes_54;
} else {
    goto branch_no_54;
}
}
branch_yes_54:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_18__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$exceptions$$$class__18_ResponseError_107, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_54;
}
branch_no_54:;
{
PyObject *tmp_assign_source_146;
PyObject *tmp_called_value_38;
PyObject *tmp_args_value_36;
PyObject *tmp_tuple_element_71;
PyObject *tmp_kwargs_value_36;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_called_value_38 = tmp_class_container$class_creation_18__metaclass;
tmp_tuple_element_71 = mod_consts.const_str_plain_ResponseError;
tmp_args_value_36 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_71);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_71 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_71);
tmp_tuple_element_71 = locals_google$auth$exceptions$$$class__18_ResponseError_107;
PyTuple_SET_ITEM0(tmp_args_value_36, 2, tmp_tuple_element_71);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_36 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_google$auth$exceptions->m_frame.f_lineno = 107;
tmp_assign_source_146 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_36, tmp_kwargs_value_36);
CHECK_OBJECT(tmp_args_value_36);
Py_DECREF(tmp_args_value_36);
if (tmp_assign_source_146 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_54;
}
assert(outline_17_var___class__ == NULL);
outline_17_var___class__ = tmp_assign_source_146;
}
CHECK_OBJECT(outline_17_var___class__);
tmp_assign_source_145 = outline_17_var___class__;
Py_INCREF(tmp_assign_source_145);
goto try_return_handler_54;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_54:;
Py_DECREF(locals_google$auth$exceptions$$$class__18_ResponseError_107);
locals_google$auth$exceptions$$$class__18_ResponseError_107 = NULL;
goto try_return_handler_53;
// Exception handler code:
try_except_handler_54:;
exception_keeper_lineno_52 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_52 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$exceptions$$$class__18_ResponseError_107);
locals_google$auth$exceptions$$$class__18_ResponseError_107 = NULL;
// Re-raise.
exception_state = exception_keeper_name_52;
exception_lineno = exception_keeper_lineno_52;

goto try_except_handler_53;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_53:;
CHECK_OBJECT(outline_17_var___class__);
CHECK_OBJECT(outline_17_var___class__);
Py_DECREF(outline_17_var___class__);
outline_17_var___class__ = NULL;
goto outline_result_36;
// Exception handler code:
try_except_handler_53:;
exception_keeper_lineno_53 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_53 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_53;
exception_lineno = exception_keeper_lineno_53;

goto outline_exception_18;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_18:;
exception_lineno = 107;
goto try_except_handler_52;
outline_result_36:;
UPDATE_STRING_DICT1(moduledict_google$auth$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseError, tmp_assign_source_145);
}
goto try_end_18;
// Exception handler code:
try_except_handler_52:;
exception_keeper_lineno_54 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_54 = exception_state;
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
exception_state = exception_keeper_name_54;
exception_lineno = exception_keeper_lineno_54;

goto frame_exception_exit_1;
// End of try:
try_end_18:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$exceptions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$exceptions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$exceptions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$exceptions);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$exceptions", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.exceptions" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$exceptions);
    return module_google$auth$exceptions;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$exceptions, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$exceptions", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

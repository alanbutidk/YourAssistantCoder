/* Generated code for Python module 'websockets$uri'
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



/* The "module_websockets$uri" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websockets$uri;
PyDictObject *moduledict_websockets$uri;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_query;
PyObject *const_str_chr_63;
PyObject *const_str_plain_username;
PyObject *const_str_plain_password;
PyObject *const_str_plain_urllib;
PyObject *const_str_plain_parse;
PyObject *const_str_plain_urlparse;
PyObject *const_str_plain_scheme;
PyObject *const_tuple_str_plain_ws_str_plain_wss_tuple;
PyObject *const_str_plain_InvalidURI;
PyObject *const_str_digest_6f8fd44cd090c2f4a487c0b0fac9d515;
PyObject *const_str_plain_hostname;
PyObject *const_str_digest_72cb87b8a65ba1b47ca3d2a812ed510f;
PyObject *const_str_plain_fragment;
PyObject *const_str_digest_c098964baac0de4645369d9cca0d5411;
PyObject *const_str_plain_wss;
PyObject *const_str_plain_port;
PyObject *const_int_pos_443;
PyObject *const_int_pos_80;
PyObject *const_str_digest_96f9d2ef120553601e15a5158898def1;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_tuple_str_plain_idna_tuple;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_quote;
PyObject *const_str_plain_DELIMS;
PyObject *const_tuple_str_plain_safe_tuple;
PyObject *const_str_plain_WebSocketURI;
PyObject *const_str_digest_64fdb7f4dc7c5bccbb891137e8cd91ce;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_dataclasses;
PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_str_plain_InvalidURI_tuple;
PyObject *const_str_plain_parse_uri;
PyObject *const_str_digest_c22e444ef6f0e6cf1a87476c8e236a1e;
PyObject *const_str_plain_dataclass;
PyObject *const_str_digest_07ee62b518dad6201e118182b8e4b7f5;
PyObject *const_str_digest_c091888e629d5b965ad84833f7a465ff;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_17;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_bool;
PyObject *const_str_plain_secure;
PyObject *const_str_plain_str;
PyObject *const_str_plain_host;
PyObject *const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain_resource_name;
PyObject *const_str_digest_04a3d27dc98bfe7071e002d9f56b4417;
PyObject *const_dict_0b69f43b015eedc796157a0db786181c;
PyObject *const_str_plain_user_info;
PyObject *const_str_digest_081f6e12f7267017acd14aad7fabb215;
PyObject *const_str_plain___static_attributes__;
PyObject *const_dict_fd633955ef62a7431282d1e935431ceb;
PyObject *const_str_digest_f7fe0150db3038a2fb8edcfd420df8cc;
PyObject *const_str_digest_d5e9b726e69acb465bef0b481a8b4900;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_03ddf2860883c1d4dfd11e576586849e_tuple;
PyObject *const_tuple_str_plain_self_str_plain_resource_name_tuple;
PyObject *const_tuple_str_plain_self_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[63];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("websockets.uri"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_query);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_chr_63);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_username);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_password);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_urllib);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ws_str_plain_wss_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidURI);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f8fd44cd090c2f4a487c0b0fac9d515);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_hostname);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_72cb87b8a65ba1b47ca3d2a812ed510f);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_fragment);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_c098964baac0de4645369d9cca0d5411);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_wss);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_int_pos_443);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_int_pos_80);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_96f9d2ef120553601e15a5158898def1);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_idna_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_quote);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_DELIMS);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_safe_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebSocketURI);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_64fdb7f4dc7c5bccbb891137e8cd91ce);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InvalidURI_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_uri);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_c22e444ef6f0e6cf1a87476c8e236a1e);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_07ee62b518dad6201e118182b8e4b7f5);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_c091888e629d5b965ad84833f7a465ff);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_int_pos_17);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_secure);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_resource_name);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_04a3d27dc98bfe7071e002d9f56b4417);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_dict_0b69f43b015eedc796157a0db786181c);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_info);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_081f6e12f7267017acd14aad7fabb215);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_dict_fd633955ef62a7431282d1e935431ceb);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7fe0150db3038a2fb8edcfd420df8cc);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5e9b726e69acb465bef0b481a8b4900);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_03ddf2860883c1d4dfd11e576586849e_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_resource_name_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
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
void checkModuleConstants_websockets$uri(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_query);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_chr_63));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_63);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_username));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_username);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_password));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_password);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_urllib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urllib);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlparse);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ws_str_plain_wss_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ws_str_plain_wss_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidURI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidURI);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f8fd44cd090c2f4a487c0b0fac9d515));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f8fd44cd090c2f4a487c0b0fac9d515);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_hostname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hostname);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_72cb87b8a65ba1b47ca3d2a812ed510f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72cb87b8a65ba1b47ca3d2a812ed510f);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_fragment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fragment);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_c098964baac0de4645369d9cca0d5411));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c098964baac0de4645369d9cca0d5411);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_wss));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wss);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_port);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_int_pos_443));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_443);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_int_pos_80));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_80);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_96f9d2ef120553601e15a5158898def1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_96f9d2ef120553601e15a5158898def1);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_idna_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_idna_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_quote));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_quote);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_DELIMS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DELIMS);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_safe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_safe_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebSocketURI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WebSocketURI);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_64fdb7f4dc7c5bccbb891137e8cd91ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_64fdb7f4dc7c5bccbb891137e8cd91ce);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InvalidURI_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InvalidURI_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_uri));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_uri);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_c22e444ef6f0e6cf1a87476c8e236a1e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c22e444ef6f0e6cf1a87476c8e236a1e);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclass);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_07ee62b518dad6201e118182b8e4b7f5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_07ee62b518dad6201e118182b8e4b7f5);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_c091888e629d5b965ad84833f7a465ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c091888e629d5b965ad84833f7a465ff);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_int_pos_17));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_17);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_secure));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_secure);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_host);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_resource_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resource_name);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_04a3d27dc98bfe7071e002d9f56b4417));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04a3d27dc98bfe7071e002d9f56b4417);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_dict_0b69f43b015eedc796157a0db786181c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0b69f43b015eedc796157a0db786181c);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_info);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_081f6e12f7267017acd14aad7fabb215));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_081f6e12f7267017acd14aad7fabb215);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_dict_fd633955ef62a7431282d1e935431ceb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fd633955ef62a7431282d1e935431ceb);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7fe0150db3038a2fb8edcfd420df8cc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f7fe0150db3038a2fb8edcfd420df8cc);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5e9b726e69acb465bef0b481a8b4900));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5e9b726e69acb465bef0b481a8b4900);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_03ddf2860883c1d4dfd11e576586849e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_03ddf2860883c1d4dfd11e576586849e_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_resource_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_resource_name_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 6
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
static PyObject *module_var_accessor_websockets$uri$DELIMS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$uri->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$uri->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_DELIMS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$uri->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DELIMS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DELIMS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DELIMS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DELIMS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_DELIMS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_DELIMS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DELIMS);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$uri$InvalidURI(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$uri->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$uri->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURI);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$uri->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidURI);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidURI, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidURI);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidURI, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURI);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURI);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURI);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$uri$WebSocketURI(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$uri->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$uri->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_WebSocketURI);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$uri->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WebSocketURI);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WebSocketURI, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WebSocketURI);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WebSocketURI, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_WebSocketURI);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_WebSocketURI);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WebSocketURI);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$uri$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$uri->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$uri->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$uri->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$uri$dataclasses(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$uri->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$uri->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$uri->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclasses);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclasses, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclasses);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclasses, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
    }

    return result;
}

static PyObject *module_var_accessor_websockets$uri$urllib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_websockets$uri->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_websockets$uri->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_websockets$uri->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_3cfb00b00d92f1ecf5245e44db697a5f;
static PyCodeObject *code_objects_706339e859360a15c6762f34b2fbe7d7;
static PyCodeObject *code_objects_95f583e2417e08599c1b027302302d78;
static PyCodeObject *code_objects_08a338b50506a3e854f16be872aad650;
static PyCodeObject *code_objects_25ebf9ac76659f621991d6a741d3cff4;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_f7fe0150db3038a2fb8edcfd420df8cc); CHECK_OBJECT(module_filename_obj);
code_objects_3cfb00b00d92f1ecf5245e44db697a5f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_d5e9b726e69acb465bef0b481a8b4900, mod_consts.const_str_digest_d5e9b726e69acb465bef0b481a8b4900, NULL, NULL, 0, 0, 0);
code_objects_706339e859360a15c6762f34b2fbe7d7 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WebSocketURI, mod_consts.const_str_plain_WebSocketURI, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_95f583e2417e08599c1b027302302d78 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse_uri, mod_consts.const_str_plain_parse_uri, mod_consts.const_tuple_03ddf2860883c1d4dfd11e576586849e_tuple, NULL, 1, 0, 0);
code_objects_08a338b50506a3e854f16be872aad650 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_resource_name, mod_consts.const_str_digest_04a3d27dc98bfe7071e002d9f56b4417, mod_consts.const_tuple_str_plain_self_str_plain_resource_name_tuple, NULL, 1, 0, 0);
code_objects_25ebf9ac76659f621991d6a741d3cff4 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_info, mod_consts.const_str_digest_081f6e12f7267017acd14aad7fabb215, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_websockets$uri$$$function__1_resource_name(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$uri$$$function__2_user_info(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$uri$$$function__3_parse_uri(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_websockets$uri$$$function__1_resource_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_resource_name = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$uri$$$function__1_resource_name;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$uri$$$function__1_resource_name = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$uri$$$function__1_resource_name)) {
    Py_XDECREF(cache_frame_frame_websockets$uri$$$function__1_resource_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$uri$$$function__1_resource_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$uri$$$function__1_resource_name = MAKE_FUNCTION_FRAME(tstate, code_objects_08a338b50506a3e854f16be872aad650, module_websockets$uri, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$uri$$$function__1_resource_name->m_type_description == NULL);
frame_frame_websockets$uri$$$function__1_resource_name = cache_frame_frame_websockets$uri$$$function__1_resource_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$uri$$$function__1_resource_name);
assert(Py_REFCNT(frame_frame_websockets$uri$$$function__1_resource_name) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_path);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 44;
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
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_path);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_resource_name == NULL);
var_resource_name = tmp_assign_source_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_str_slash;
assert(var_resource_name == NULL);
Py_INCREF(tmp_assign_source_2);
var_resource_name = tmp_assign_source_2;
}
branch_end_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_query);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 48;
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
PyObject *tmp_assign_source_3;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_resource_name);
tmp_iadd_expr_left_1 = var_resource_name;
tmp_add_expr_left_1 = mod_consts.const_str_chr_63;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_query);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = tmp_iadd_expr_left_1;
var_resource_name = tmp_assign_source_3;

}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$uri$$$function__1_resource_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$uri$$$function__1_resource_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$uri$$$function__1_resource_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$uri$$$function__1_resource_name,
    type_description_1,
    par_self,
    var_resource_name
);


// Release cached frame if used for exception.
if (frame_frame_websockets$uri$$$function__1_resource_name == cache_frame_frame_websockets$uri$$$function__1_resource_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$uri$$$function__1_resource_name);
    cache_frame_frame_websockets$uri$$$function__1_resource_name = NULL;
}

assertFrameObject(frame_frame_websockets$uri$$$function__1_resource_name);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_resource_name);
tmp_return_value = var_resource_name;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_resource_name);
CHECK_OBJECT(var_resource_name);
Py_DECREF(var_resource_name);
var_resource_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_resource_name);
var_resource_name = NULL;
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


static PyObject *impl_websockets$uri$$$function__2_user_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_websockets$uri$$$function__2_user_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$uri$$$function__2_user_info = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_websockets$uri$$$function__2_user_info)) {
    Py_XDECREF(cache_frame_frame_websockets$uri$$$function__2_user_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$uri$$$function__2_user_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$uri$$$function__2_user_info = MAKE_FUNCTION_FRAME(tstate, code_objects_25ebf9ac76659f621991d6a741d3cff4, module_websockets$uri, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$uri$$$function__2_user_info->m_type_description == NULL);
frame_frame_websockets$uri$$$function__2_user_info = cache_frame_frame_websockets$uri$$$function__2_user_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$uri$$$function__2_user_info);
assert(Py_REFCNT(frame_frame_websockets$uri$$$function__2_user_info) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_username);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_password);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "o";
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
PyObject *tmp_raise_type_1;
frame_frame_websockets$uri$$$function__2_user_info->m_frame.f_lineno = 56;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 56;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_username);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_password);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$uri$$$function__2_user_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$uri$$$function__2_user_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$uri$$$function__2_user_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$uri$$$function__2_user_info,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_websockets$uri$$$function__2_user_info == cache_frame_frame_websockets$uri$$$function__2_user_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$uri$$$function__2_user_info);
    cache_frame_frame_websockets$uri$$$function__2_user_info = NULL;
}

assertFrameObject(frame_frame_websockets$uri$$$function__2_user_info);

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


static PyObject *impl_websockets$uri$$$function__3_parse_uri(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_uri = python_pars[0];
PyObject *var_parsed = NULL;
PyObject *var_secure = NULL;
PyObject *var_host = NULL;
PyObject *var_port = NULL;
PyObject *var_path = NULL;
PyObject *var_query = NULL;
PyObject *var_username = NULL;
PyObject *var_password = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$uri$$$function__3_parse_uri;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_websockets$uri$$$function__3_parse_uri = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_websockets$uri$$$function__3_parse_uri)) {
    Py_XDECREF(cache_frame_frame_websockets$uri$$$function__3_parse_uri);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_websockets$uri$$$function__3_parse_uri == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_websockets$uri$$$function__3_parse_uri = MAKE_FUNCTION_FRAME(tstate, code_objects_95f583e2417e08599c1b027302302d78, module_websockets$uri, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_websockets$uri$$$function__3_parse_uri->m_type_description == NULL);
frame_frame_websockets$uri$$$function__3_parse_uri = cache_frame_frame_websockets$uri$$$function__3_parse_uri;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$uri$$$function__3_parse_uri);
assert(Py_REFCNT(frame_frame_websockets$uri$$$function__3_parse_uri) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_websockets$uri$urllib(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_parse);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_uri);
tmp_args_element_value_1 = par_uri;
frame_frame_websockets$uri$$$function__3_parse_uri->m_frame.f_lineno = 74;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_urlparse, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_parsed == NULL);
var_parsed = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_parsed);
tmp_expression_value_2 = var_parsed;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_scheme);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_tuple_str_plain_ws_str_plain_wss_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooooo";
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
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_websockets$uri$InvalidURI(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURI);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_uri);
tmp_args_element_value_2 = par_uri;
tmp_args_element_value_3 = mod_consts.const_str_digest_6f8fd44cd090c2f4a487c0b0fac9d515;
frame_frame_websockets$uri$$$function__3_parse_uri->m_frame.f_lineno = 76;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 76;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_parsed);
tmp_expression_value_3 = var_parsed;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_hostname);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_2 = module_var_accessor_websockets$uri$InvalidURI(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURI);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_uri);
tmp_args_element_value_4 = par_uri;
tmp_args_element_value_5 = mod_consts.const_str_digest_72cb87b8a65ba1b47ca3d2a812ed510f;
frame_frame_websockets$uri$$$function__3_parse_uri->m_frame.f_lineno = 78;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_raise_type_input_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 78;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_parsed);
tmp_expression_value_4 = var_parsed;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_fragment);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = const_str_empty;
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooooo";
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
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_3 = module_var_accessor_websockets$uri$InvalidURI(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURI);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_uri);
tmp_args_element_value_6 = par_uri;
tmp_args_element_value_7 = mod_consts.const_str_digest_c098964baac0de4645369d9cca0d5411;
frame_frame_websockets$uri$$$function__3_parse_uri->m_frame.f_lineno = 80;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_raise_type_input_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 80;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_parsed);
tmp_expression_value_5 = var_parsed;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_scheme);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_wss;
tmp_assign_source_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_secure == NULL);
var_secure = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_parsed);
tmp_expression_value_6 = var_parsed;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_hostname);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_host == NULL);
var_host = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_7;
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
CHECK_OBJECT(var_parsed);
tmp_expression_value_7 = var_parsed;
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_port);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 84;
type_description_1 = "ooooooooo";
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
CHECK_OBJECT(var_secure);
tmp_truth_name_1 = CHECK_IF_TRUE(var_secure);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_or_right_value_1 = mod_consts.const_int_pos_443;
goto condexpr_end_1;
condexpr_false_1:;
tmp_or_right_value_1 = mod_consts.const_int_pos_80;
condexpr_end_1:;
Py_INCREF(tmp_or_right_value_1);
tmp_assign_source_4 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_4 = tmp_or_left_value_1;
or_end_1:;
assert(var_port == NULL);
var_port = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_parsed);
tmp_expression_value_8 = var_parsed;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_path);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_path == NULL);
var_path = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_parsed);
tmp_expression_value_9 = var_parsed;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_query);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_query == NULL);
var_query = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_parsed);
tmp_expression_value_10 = var_parsed;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_username);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_username == NULL);
var_username = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_parsed);
tmp_expression_value_11 = var_parsed;
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_password);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_password == NULL);
var_password = tmp_assign_source_8;
}
{
bool tmp_condition_result_5;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_username);
tmp_cmp_expr_left_5 = var_username;
tmp_cmp_expr_right_5 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_password);
tmp_cmp_expr_left_6 = var_password;
tmp_cmp_expr_right_6 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
tmp_condition_result_5 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_5 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_4 = module_var_accessor_websockets$uri$InvalidURI(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURI);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_uri);
tmp_args_element_value_8 = par_uri;
tmp_args_element_value_9 = mod_consts.const_str_digest_96f9d2ef120553601e15a5158898def1;
frame_frame_websockets$uri$$$function__3_parse_uri->m_frame.f_lineno = 92;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_raise_type_input_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 92;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
// Tried code:
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_uri);
tmp_expression_value_12 = par_uri;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_encode);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
frame_frame_websockets$uri$$$function__3_parse_uri->m_frame.f_lineno = 95;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$uri$$$function__3_parse_uri, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$uri$$$function__3_parse_uri, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_cmp_expr_left_7 = EXC_TYPE(tstate);
tmp_cmp_expr_right_7 = PyExc_UnicodeEncodeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_host);
tmp_expression_value_14 = var_host;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_encode);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
frame_frame_websockets$uri$$$function__3_parse_uri->m_frame.f_lineno = 99;
tmp_expression_value_13 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_idna_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
frame_frame_websockets$uri$$$function__3_parse_uri->m_frame.f_lineno = 99;
tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_host;
    assert(old != NULL);
    var_host = tmp_assign_source_9;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_16 = module_var_accessor_websockets$uri$urllib(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_parse);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_quote);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_path);
tmp_kw_call_arg_value_0_1 = var_path;
tmp_kw_call_dict_value_0_1 = module_var_accessor_websockets$uri$DELIMS(tstate);
if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DELIMS);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 100;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
frame_frame_websockets$uri$$$function__3_parse_uri->m_frame.f_lineno = 100;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts.const_tuple_str_plain_safe_tuple);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_path;
    assert(old != NULL);
    var_path = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_expression_value_18 = module_var_accessor_websockets$uri$urllib(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_parse);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_quote);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_query);
tmp_kw_call_arg_value_0_2 = var_query;
tmp_kw_call_dict_value_0_2 = module_var_accessor_websockets$uri$DELIMS(tstate);
if (unlikely(tmp_kw_call_dict_value_0_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DELIMS);
}

if (tmp_kw_call_dict_value_0_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
frame_frame_websockets$uri$$$function__3_parse_uri->m_frame.f_lineno = 101;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts.const_tuple_str_plain_safe_tuple);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_query;
    assert(old != NULL);
    var_query = tmp_assign_source_11;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_username);
tmp_cmp_expr_left_8 = var_username;
tmp_cmp_expr_right_8 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_password);
tmp_cmp_expr_left_9 = var_password;
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_5;
frame_frame_websockets$uri$$$function__3_parse_uri->m_frame.f_lineno = 103;
tmp_raise_type_5 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 103;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto try_except_handler_3;
}
branch_no_7:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_3;
tmp_expression_value_20 = module_var_accessor_websockets$uri$urllib(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_parse);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_quote);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_username);
tmp_kw_call_arg_value_0_3 = var_username;
tmp_kw_call_dict_value_0_3 = module_var_accessor_websockets$uri$DELIMS(tstate);
if (unlikely(tmp_kw_call_dict_value_0_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DELIMS);
}

if (tmp_kw_call_dict_value_0_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
frame_frame_websockets$uri$$$function__3_parse_uri->m_frame.f_lineno = 104;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts.const_tuple_str_plain_safe_tuple);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_username;
    assert(old != NULL);
    var_username = tmp_assign_source_12;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_dict_value_0_4;
tmp_expression_value_22 = module_var_accessor_websockets$uri$urllib(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_parse);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_quote);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_password);
tmp_kw_call_arg_value_0_4 = var_password;
tmp_kw_call_dict_value_0_4 = module_var_accessor_websockets$uri$DELIMS(tstate);
if (unlikely(tmp_kw_call_dict_value_0_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DELIMS);
}

if (tmp_kw_call_dict_value_0_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 105;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
frame_frame_websockets$uri$$$function__3_parse_uri->m_frame.f_lineno = 105;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_11, args, kw_values, mod_consts.const_tuple_str_plain_safe_tuple);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_password;
    assert(old != NULL);
    var_password = tmp_assign_source_13;
    Py_DECREF(old);
}

}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 94;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_websockets$uri$$$function__3_parse_uri->m_frame)) {
        frame_frame_websockets$uri$$$function__3_parse_uri->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_3;
branch_end_5:;
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
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_called_value_12 = module_var_accessor_websockets$uri$WebSocketURI(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebSocketURI);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_secure);
tmp_args_element_value_10 = var_secure;
CHECK_OBJECT(var_host);
tmp_args_element_value_11 = var_host;
CHECK_OBJECT(var_port);
tmp_args_element_value_12 = var_port;
CHECK_OBJECT(var_path);
tmp_args_element_value_13 = var_path;
CHECK_OBJECT(var_query);
tmp_args_element_value_14 = var_query;
CHECK_OBJECT(var_username);
tmp_args_element_value_15 = var_username;
CHECK_OBJECT(var_password);
tmp_args_element_value_16 = var_password;
frame_frame_websockets$uri$$$function__3_parse_uri->m_frame.f_lineno = 107;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_12, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$uri$$$function__3_parse_uri, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$uri$$$function__3_parse_uri->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$uri$$$function__3_parse_uri, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$uri$$$function__3_parse_uri,
    type_description_1,
    par_uri,
    var_parsed,
    var_secure,
    var_host,
    var_port,
    var_path,
    var_query,
    var_username,
    var_password
);


// Release cached frame if used for exception.
if (frame_frame_websockets$uri$$$function__3_parse_uri == cache_frame_frame_websockets$uri$$$function__3_parse_uri) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_websockets$uri$$$function__3_parse_uri);
    cache_frame_frame_websockets$uri$$$function__3_parse_uri = NULL;
}

assertFrameObject(frame_frame_websockets$uri$$$function__3_parse_uri);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_parsed);
CHECK_OBJECT(var_parsed);
Py_DECREF(var_parsed);
var_parsed = NULL;
CHECK_OBJECT(var_secure);
CHECK_OBJECT(var_secure);
Py_DECREF(var_secure);
var_secure = NULL;
CHECK_OBJECT(var_host);
CHECK_OBJECT(var_host);
Py_DECREF(var_host);
var_host = NULL;
CHECK_OBJECT(var_port);
CHECK_OBJECT(var_port);
Py_DECREF(var_port);
var_port = NULL;
CHECK_OBJECT(var_path);
CHECK_OBJECT(var_path);
Py_DECREF(var_path);
var_path = NULL;
CHECK_OBJECT(var_query);
CHECK_OBJECT(var_query);
Py_DECREF(var_query);
var_query = NULL;
CHECK_OBJECT(var_username);
CHECK_OBJECT(var_username);
Py_DECREF(var_username);
var_username = NULL;
CHECK_OBJECT(var_password);
CHECK_OBJECT(var_password);
Py_DECREF(var_password);
var_password = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_parsed);
var_parsed = NULL;
Py_XDECREF(var_secure);
var_secure = NULL;
Py_XDECREF(var_host);
var_host = NULL;
Py_XDECREF(var_port);
var_port = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_query);
var_query = NULL;
Py_XDECREF(var_username);
var_username = NULL;
Py_XDECREF(var_password);
var_password = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_uri);
Py_DECREF(par_uri);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_uri);
Py_DECREF(par_uri);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_websockets$uri$$$function__1_resource_name(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$uri$$$function__1_resource_name,
        mod_consts.const_str_plain_resource_name,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_04a3d27dc98bfe7071e002d9f56b4417,
#endif
        code_objects_08a338b50506a3e854f16be872aad650,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$uri,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$uri$$$function__2_user_info(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$uri$$$function__2_user_info,
        mod_consts.const_str_plain_user_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_081f6e12f7267017acd14aad7fabb215,
#endif
        code_objects_25ebf9ac76659f621991d6a741d3cff4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$uri,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$uri$$$function__3_parse_uri(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$uri$$$function__3_parse_uri,
        mod_consts.const_str_plain_parse_uri,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_95f583e2417e08599c1b027302302d78,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$uri,
        mod_consts.const_str_digest_64fdb7f4dc7c5bccbb891137e8cd91ce,
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

static function_impl_code const function_table_websockets$uri[] = {
impl_websockets$uri$$$function__1_resource_name,
impl_websockets$uri$$$function__2_user_info,
impl_websockets$uri$$$function__3_parse_uri,
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

    return Nuitka_Function_GetFunctionState(function, function_table_websockets$uri);
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
        module_websockets$uri,
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
        function_table_websockets$uri,
        sizeof(function_table_websockets$uri) / sizeof(function_impl_code)
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
static char const *module_full_name = "websockets.uri";
#endif

// Internal entry point for module code.
PyObject *module_code_websockets$uri(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("websockets$uri");

    // Store the module for future use.
    module_websockets$uri = module;

    moduledict_websockets$uri = MODULE_DICT(module_websockets$uri);

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
        PRINT_STRING("websockets$uri: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("websockets$uri: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("websockets$uri: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "websockets.uri" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwebsockets$uri\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_websockets$uri,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_websockets$uri,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_websockets$uri,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_websockets$uri,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_websockets$uri,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_websockets$uri);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_websockets$uri);
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

        UPDATE_STRING_DICT1(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_websockets$uri;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_websockets$uri$$$class__1_WebSocketURI_17 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_websockets$uri$$$class__1_WebSocketURI_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_websockets$uri = MAKE_MODULE_FRAME(code_objects_3cfb00b00d92f1ecf5245e44db697a5f, module_websockets$uri);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$uri);
assert(Py_REFCNT(frame_frame_websockets$uri) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_websockets$uri$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_websockets$uri$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_1 = (PyObject *)moduledict_websockets$uri;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_websockets$uri->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
tmp_globals_arg_value_2 = (PyObject *)moduledict_websockets$uri;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_websockets$uri->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_websockets$uri;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_InvalidURI_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_websockets$uri->m_frame.f_lineno = 6;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_websockets$uri,
        mod_consts.const_str_plain_InvalidURI,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_InvalidURI);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURI, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_LIST2(tstate, mod_consts.const_str_plain_parse_uri,mod_consts.const_str_plain_WebSocketURI);
UPDATE_STRING_DICT1(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_str_digest_c22e444ef6f0e6cf1a87476c8e236a1e;
UPDATE_STRING_DICT0(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_DELIMS, tmp_assign_source_9);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_websockets$uri$dataclasses(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclasses);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 16;

    goto try_except_handler_1;
}
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_websockets$uri$$$class__1_WebSocketURI_17 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_07ee62b518dad6201e118182b8e4b7f5;
tmp_result = DICT_SET_ITEM(locals_websockets$uri$$$class__1_WebSocketURI_17, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_c091888e629d5b965ad84833f7a465ff;
tmp_result = DICT_SET_ITEM(locals_websockets$uri$$$class__1_WebSocketURI_17, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_WebSocketURI;
tmp_result = DICT_SET_ITEM(locals_websockets$uri$$$class__1_WebSocketURI_17, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_17;
tmp_result = DICT_SET_ITEM(locals_websockets$uri$$$class__1_WebSocketURI_17, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_websockets$uri$$$class__1_WebSocketURI_17, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_websockets$uri$$$class__1_WebSocketURI_2 = MAKE_CLASS_FRAME(tstate, code_objects_706339e859360a15c6762f34b2fbe7d7, module_websockets$uri, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_websockets$uri$$$class__1_WebSocketURI_2);
assert(Py_REFCNT(frame_frame_websockets$uri$$$class__1_WebSocketURI_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_bool;
tmp_ass_subscribed_1 = DICT_GET_ITEM0(tstate, locals_websockets$uri$$$class__1_WebSocketURI_17, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_secure;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_2 = DICT_GET_ITEM0(tstate, locals_websockets$uri$$$class__1_WebSocketURI_17, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 35;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_host;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = const_str_plain_int;
tmp_ass_subscribed_3 = DICT_GET_ITEM0(tstate, locals_websockets$uri$$$class__1_WebSocketURI_17, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_port;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_4 = DICT_GET_ITEM0(tstate, locals_websockets$uri$$$class__1_WebSocketURI_17, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = const_str_plain_path;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_5 = DICT_GET_ITEM0(tstate, locals_websockets$uri$$$class__1_WebSocketURI_17, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_query;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = Py_None;
tmp_result = DICT_SET_ITEM(locals_websockets$uri$$$class__1_WebSocketURI_17, mod_consts.const_str_plain_username, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_6 = DICT_GET_ITEM0(tstate, locals_websockets$uri$$$class__1_WebSocketURI_17, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_username;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = Py_None;
tmp_result = DICT_SET_ITEM(locals_websockets$uri$$$class__1_WebSocketURI_17, mod_consts.const_str_plain_password, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_7 = DICT_GET_ITEM0(tstate, locals_websockets$uri$$$class__1_WebSocketURI_17, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 40;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_password;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_1;
tmp_called_value_1 = (PyObject *)&PyProperty_Type;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_2 = MAKE_FUNCTION_websockets$uri$$$function__1_resource_name(tstate, tmp_annotations_1);

frame_frame_websockets$uri$$$class__1_WebSocketURI_2->m_frame.f_lineno = 42;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_websockets$uri$$$class__1_WebSocketURI_17, mod_consts.const_str_plain_resource_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_2;
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_0b69f43b015eedc796157a0db786181c);

tmp_args_element_value_3 = MAKE_FUNCTION_websockets$uri$$$function__2_user_info(tstate, tmp_annotations_2);

frame_frame_websockets$uri$$$class__1_WebSocketURI_2->m_frame.f_lineno = 52;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_websockets$uri$$$class__1_WebSocketURI_17, mod_consts.const_str_plain_user_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$uri$$$class__1_WebSocketURI_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$uri$$$class__1_WebSocketURI_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$uri$$$class__1_WebSocketURI_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_websockets$uri$$$class__1_WebSocketURI_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_websockets$uri$$$class__1_WebSocketURI_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_websockets$uri$$$class__1_WebSocketURI_17, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_3 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_WebSocketURI;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_websockets$uri$$$class__1_WebSocketURI_17;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_websockets$uri->m_frame.f_lineno = 17;
tmp_assign_source_13 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_13;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_args_element_value_1 = outline_0_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_websockets$uri$$$class__1_WebSocketURI_17);
locals_websockets$uri$$$class__1_WebSocketURI_17 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_websockets$uri$$$class__1_WebSocketURI_17);
locals_websockets$uri$$$class__1_WebSocketURI_17 = NULL;
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
exception_lineno = 17;
goto try_except_handler_1;
outline_result_2:;
frame_frame_websockets$uri->m_frame.f_lineno = 16;
tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dataclass, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_WebSocketURI, tmp_assign_source_12);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_websockets$uri, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_websockets$uri->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_websockets$uri, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_websockets$uri);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_fd633955ef62a7431282d1e935431ceb);

tmp_assign_source_14 = MAKE_FUNCTION_websockets$uri$$$function__3_parse_uri(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_websockets$uri, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_uri, tmp_assign_source_14);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("websockets$uri", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "websockets.uri" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_websockets$uri);
    return module_websockets$uri;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$uri, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("websockets$uri", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'anthropic$lib$credentials$_auth'
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



/* The "module_anthropic$lib$credentials$_auth" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$lib$credentials$_auth;
PyDictObject *moduledict_anthropic$lib$credentials$_auth;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__warn_once_lock;
PyObject *const_str_plain__warn_once_seen;
PyObject *const_str_plain_add;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_log;
PyObject *const_str_plain_warning;
PyObject *const_str_digest_61fdf87e627d5e4fcb7afbfb37bfb1ba;
PyObject *const_str_plain__warn_once;
PyObject *const_str_digest_425363a9df9da9fab0c721b6bffe437f;
PyObject *const_str_digest_1e835efd192da531c1338d1a413c72f2;
PyObject *const_str_digest_73562ec1742d5722eaec89a810cc2db6;
PyObject *const_str_digest_5adee2454323fc9adca481be558f8135;
PyObject *const_str_digest_f968a6886f0e3a535990bce60de50c7c;
PyObject *const_str_digest_b66c28da89d9d15dea7a780d078d2b03;
PyObject *const_str_plain__token_cache;
PyObject *const_str_plain_headers;
PyObject *const_tuple_str_digest_8a6c5cb14128eaa26ba83ab806364a09_tuple;
PyObject *const_tuple_str_plain_Authorization_tuple;
PyObject *const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7;
PyObject *const_str_plain_Authorization;
PyObject *const_tuple_str_digest_23a18424c7eecf41c1fa0adea4459fea_str_empty_tuple;
PyObject *const_tuple_str_chr_44_tuple;
PyObject *const_str_plain_strip;
PyObject *const_str_plain_OAUTH_API_BETA_HEADER;
PyObject *const_str_plain_append;
PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyObject *const_str_digest_23a18424c7eecf41c1fa0adea4459fea;
PyObject *const_str_plain_self;
PyObject *const_str_plain__has_static_credential;
PyObject *const_str_plain_request;
PyObject *const_str_plain_get_token;
PyObject *const_str_plain__apply;
PyObject *const_str_plain_sync_auth_flow;
PyObject *const_str_digest_26b1d09a2a736d6274395f7e42d7d274;
PyObject *const_str_plain_asyncify;
PyObject *const_str_plain_async_auth_flow;
PyObject *const_str_digest_d0f6c85f7fe27a3d51dc7d62a21dc72a;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_threading;
PyObject *const_str_plain_Generator;
PyObject *const_str_plain_AsyncGenerator;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_override_tuple;
PyObject *const_str_plain_override;
PyObject *const_str_plain_httpx;
PyObject *const_str_plain__cache;
PyObject *const_tuple_str_plain_TokenCache_tuple;
PyObject *const_str_plain_TokenCache;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_asyncify_tuple;
PyObject *const_int_pos_3;
PyObject *const_str_plain__constants;
PyObject *const_tuple_str_plain_OAUTH_API_BETA_HEADER_tuple;
PyObject *const_str_plain_AccessTokenAuth;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_12077b699f71048e2f93e4a4128e95bb_tuple;
PyObject *const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706;
PyObject *const_str_plain_Lock;
PyObject *const_str_digest_6cce459256b974cf0cc7e3025d9ab414;
PyObject *const_dict_8a241258504cc80a5f2ec27c1f4afd9f;
PyObject *const_dict_9fe41cb5c17afdc7d99445d352ce78f9;
PyObject *const_str_plain_warn_explicit_static_shadows_credentials;
PyObject *const_dict_546e0ddea848ea0ec1f825b78a1677db;
PyObject *const_str_plain_warn_env_static_shadows_auto_discovery;
PyObject *const_str_plain_Auth;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_12077b699f71048e2f93e4a4128e95bb;
PyObject *const_str_digest_b07e9eb33a84b977aad41254606a08e4;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_65;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_requires_response_body;
PyObject *const_dict_004d4996bf7360a5a94b0cd0d987eaf0;
PyObject *const_str_digest_27603c78c0f57873301441670c40c7ca;
PyObject *const_dict_729274797a1c2ec12d3ef0676da65b29;
PyObject *const_str_digest_bf0dd412d15eb2237fec7c0609364a68;
PyObject *const_dict_c39d8d7567874ff23d0aeaf4824c7228;
PyObject *const_str_digest_a6b34d8b2b75b414323d517567f68311;
PyObject *const_dict_e8197e1e85eaabc0f573b0fc22b70190;
PyObject *const_dict_34d502353adc1cca8ea8bd388eb1c214;
PyObject *const_tuple_str_plain__token_cache_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_99def9c55bf81559e1b5bcaa1ce93094;
PyObject *const_str_digest_a831ff6317c7d2e73415fec045d2f9b3;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_token_cache_tuple;
PyObject *const_tuple_0f92a0d0958d5857beb51b7f6b1eb350_tuple;
PyObject *const_tuple_str_plain_request_tuple;
PyObject *const_tuple_str_plain_key_str_plain_message_str_plain_args_tuple;
PyObject *const_tuple_str_plain_self_str_plain_request_str_plain_token_tuple;
PyObject *const_tuple_str_plain_env_var_tuple;
PyObject *const_tuple_str_plain_param_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[99];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.lib.credentials._auth"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__warn_once_lock);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__warn_once_seen);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_warning);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_61fdf87e627d5e4fcb7afbfb37bfb1ba);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__warn_once);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_425363a9df9da9fab0c721b6bffe437f);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e835efd192da531c1338d1a413c72f2);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_73562ec1742d5722eaec89a810cc2db6);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_5adee2454323fc9adca481be558f8135);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_f968a6886f0e3a535990bce60de50c7c);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_b66c28da89d9d15dea7a780d078d2b03);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__token_cache);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8a6c5cb14128eaa26ba83ab806364a09_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Authorization_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_Authorization);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_23a18424c7eecf41c1fa0adea4459fea_str_empty_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_44_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_OAUTH_API_BETA_HEADER);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_23a18424c7eecf41c1fa0adea4459fea);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__has_static_credential);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_token);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__apply);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_sync_auth_flow);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_26b1d09a2a736d6274395f7e42d7d274);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_asyncify);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_auth_flow);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0f6c85f7fe27a3d51dc7d62a21dc72a);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_threading);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generator);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncGenerator);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_override_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_override);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_httpx);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__cache);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TokenCache_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_TokenCache);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_asyncify_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__constants);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OAUTH_API_BETA_HEADER_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_AccessTokenAuth);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_12077b699f71048e2f93e4a4128e95bb_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_Lock);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_dict_8a241258504cc80a5f2ec27c1f4afd9f);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_dict_9fe41cb5c17afdc7d99445d352ce78f9);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn_explicit_static_shadows_credentials);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_dict_546e0ddea848ea0ec1f825b78a1677db);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn_env_static_shadows_auto_discovery);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_Auth);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_12077b699f71048e2f93e4a4128e95bb);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_b07e9eb33a84b977aad41254606a08e4);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_int_pos_65);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_requires_response_body);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_dict_004d4996bf7360a5a94b0cd0d987eaf0);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_27603c78c0f57873301441670c40c7ca);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_dict_729274797a1c2ec12d3ef0676da65b29);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf0dd412d15eb2237fec7c0609364a68);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_dict_c39d8d7567874ff23d0aeaf4824c7228);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6b34d8b2b75b414323d517567f68311);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_dict_e8197e1e85eaabc0f573b0fc22b70190);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_dict_34d502353adc1cca8ea8bd388eb1c214);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__token_cache_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_99def9c55bf81559e1b5bcaa1ce93094);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_a831ff6317c7d2e73415fec045d2f9b3);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_token_cache_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_0f92a0d0958d5857beb51b7f6b1eb350_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_str_plain_message_str_plain_args_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_token_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_env_var_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_param_tuple);
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
void checkModuleConstants_anthropic$lib$credentials$_auth(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__warn_once_lock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__warn_once_lock);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__warn_once_seen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__warn_once_seen);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_warning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warning);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_61fdf87e627d5e4fcb7afbfb37bfb1ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_61fdf87e627d5e4fcb7afbfb37bfb1ba);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__warn_once));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__warn_once);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_425363a9df9da9fab0c721b6bffe437f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_425363a9df9da9fab0c721b6bffe437f);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e835efd192da531c1338d1a413c72f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e835efd192da531c1338d1a413c72f2);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_73562ec1742d5722eaec89a810cc2db6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_73562ec1742d5722eaec89a810cc2db6);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_5adee2454323fc9adca481be558f8135));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5adee2454323fc9adca481be558f8135);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_f968a6886f0e3a535990bce60de50c7c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f968a6886f0e3a535990bce60de50c7c);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_b66c28da89d9d15dea7a780d078d2b03));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b66c28da89d9d15dea7a780d078d2b03);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__token_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__token_cache);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8a6c5cb14128eaa26ba83ab806364a09_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8a6c5cb14128eaa26ba83ab806364a09_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Authorization_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Authorization_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_Authorization));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Authorization);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_23a18424c7eecf41c1fa0adea4459fea_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_23a18424c7eecf41c1fa0adea4459fea_str_empty_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_44_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_44_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_OAUTH_API_BETA_HEADER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OAUTH_API_BETA_HEADER);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_23a18424c7eecf41c1fa0adea4459fea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_23a18424c7eecf41c1fa0adea4459fea);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__has_static_credential));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__has_static_credential);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_token);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__apply));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__apply);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_sync_auth_flow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sync_auth_flow);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_26b1d09a2a736d6274395f7e42d7d274));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_26b1d09a2a736d6274395f7e42d7d274);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_asyncify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asyncify);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_auth_flow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_auth_flow);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0f6c85f7fe27a3d51dc7d62a21dc72a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d0f6c85f7fe27a3d51dc7d62a21dc72a);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_threading));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_threading);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generator);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncGenerator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncGenerator);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_override_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_override_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_override));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_override);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_httpx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httpx);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cache);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TokenCache_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TokenCache_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_TokenCache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TokenCache);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_asyncify_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_asyncify_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__constants));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__constants);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OAUTH_API_BETA_HEADER_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_OAUTH_API_BETA_HEADER_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_AccessTokenAuth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AccessTokenAuth);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_12077b699f71048e2f93e4a4128e95bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_12077b699f71048e2f93e4a4128e95bb_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_Lock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Lock);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_dict_8a241258504cc80a5f2ec27c1f4afd9f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8a241258504cc80a5f2ec27c1f4afd9f);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_dict_9fe41cb5c17afdc7d99445d352ce78f9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9fe41cb5c17afdc7d99445d352ce78f9);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn_explicit_static_shadows_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn_explicit_static_shadows_credentials);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_dict_546e0ddea848ea0ec1f825b78a1677db));
CHECK_OBJECT_DEEP(mod_consts.const_dict_546e0ddea848ea0ec1f825b78a1677db);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn_env_static_shadows_auto_discovery));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn_env_static_shadows_auto_discovery);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_Auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Auth);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_12077b699f71048e2f93e4a4128e95bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_12077b699f71048e2f93e4a4128e95bb);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_b07e9eb33a84b977aad41254606a08e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b07e9eb33a84b977aad41254606a08e4);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_int_pos_65));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_65);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_requires_response_body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_requires_response_body);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_dict_004d4996bf7360a5a94b0cd0d987eaf0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_004d4996bf7360a5a94b0cd0d987eaf0);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_27603c78c0f57873301441670c40c7ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_27603c78c0f57873301441670c40c7ca);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_dict_729274797a1c2ec12d3ef0676da65b29));
CHECK_OBJECT_DEEP(mod_consts.const_dict_729274797a1c2ec12d3ef0676da65b29);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf0dd412d15eb2237fec7c0609364a68));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bf0dd412d15eb2237fec7c0609364a68);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_dict_c39d8d7567874ff23d0aeaf4824c7228));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c39d8d7567874ff23d0aeaf4824c7228);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6b34d8b2b75b414323d517567f68311));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a6b34d8b2b75b414323d517567f68311);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_dict_e8197e1e85eaabc0f573b0fc22b70190));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8197e1e85eaabc0f573b0fc22b70190);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_dict_34d502353adc1cca8ea8bd388eb1c214));
CHECK_OBJECT_DEEP(mod_consts.const_dict_34d502353adc1cca8ea8bd388eb1c214);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__token_cache_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__token_cache_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_99def9c55bf81559e1b5bcaa1ce93094));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_99def9c55bf81559e1b5bcaa1ce93094);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_a831ff6317c7d2e73415fec045d2f9b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a831ff6317c7d2e73415fec045d2f9b3);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_token_cache_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_token_cache_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_0f92a0d0958d5857beb51b7f6b1eb350_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0f92a0d0958d5857beb51b7f6b1eb350_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_request_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_str_plain_message_str_plain_args_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_str_plain_message_str_plain_args_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_token_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_env_var_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_env_var_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_param_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 12
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
static PyObject *module_var_accessor_anthropic$lib$credentials$_auth$OAUTH_API_BETA_HEADER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$credentials$_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$credentials$_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_OAUTH_API_BETA_HEADER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$credentials$_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OAUTH_API_BETA_HEADER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OAUTH_API_BETA_HEADER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OAUTH_API_BETA_HEADER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OAUTH_API_BETA_HEADER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_OAUTH_API_BETA_HEADER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_OAUTH_API_BETA_HEADER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OAUTH_API_BETA_HEADER);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$credentials$_auth$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$credentials$_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$credentials$_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$credentials$_auth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$credentials$_auth$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$credentials$_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$credentials$_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$credentials$_auth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$credentials$_auth$_warn_once(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$credentials$_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$credentials$_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__warn_once);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$credentials$_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__warn_once);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__warn_once, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__warn_once);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__warn_once, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__warn_once);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__warn_once);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__warn_once);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$credentials$_auth$_warn_once_lock(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$credentials$_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$credentials$_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__warn_once_lock);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$credentials$_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__warn_once_lock);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__warn_once_lock, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__warn_once_lock);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__warn_once_lock, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__warn_once_lock);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__warn_once_lock);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__warn_once_lock);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$credentials$_auth$_warn_once_seen(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$credentials$_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$credentials$_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__warn_once_seen);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$credentials$_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__warn_once_seen);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__warn_once_seen, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__warn_once_seen);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__warn_once_seen, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__warn_once_seen);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__warn_once_seen);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__warn_once_seen);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$credentials$_auth$asyncify(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$credentials$_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$credentials$_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncify);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$credentials$_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asyncify);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asyncify, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asyncify);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asyncify, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncify);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncify);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncify);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$credentials$_auth$httpx(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$credentials$_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$credentials$_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$credentials$_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_httpx);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_httpx, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_httpx);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_httpx, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$credentials$_auth$log(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$credentials$_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$credentials$_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$credentials$_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_log);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_log, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_log);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_log, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$credentials$_auth$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$credentials$_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$credentials$_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$credentials$_auth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$credentials$_auth$override(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$credentials$_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$credentials$_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$credentials$_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_override);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_override, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_override);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_override, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$credentials$_auth$threading(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$credentials$_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$credentials$_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$credentials$_auth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_a87e28c60cd2665410cf60aa41a8d027;
static PyCodeObject *code_objects_1e3383a4a131edfcfaa9e9d584c05fa5;
static PyCodeObject *code_objects_005b7bc991bbf35eab5c93be7aff1ebd;
static PyCodeObject *code_objects_42e459aed14210a34f313bdd581b2fb4;
static PyCodeObject *code_objects_1bffc26f075fd59b8f15a0f55ec65936;
static PyCodeObject *code_objects_aefc1bc27f25734eb299ef19e8b09325;
static PyCodeObject *code_objects_2d9a96bf956cac6f8e9e9242f670ad59;
static PyCodeObject *code_objects_717f95dfd4e42730c2e32a157081f7c8;
static PyCodeObject *code_objects_15e662eba848e2e3921c54a31f730876;
static PyCodeObject *code_objects_eff507c038f498e8cbdaaf8a4065705c;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_99def9c55bf81559e1b5bcaa1ce93094); CHECK_OBJECT(module_filename_obj);
code_objects_a87e28c60cd2665410cf60aa41a8d027 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_a831ff6317c7d2e73415fec045d2f9b3, mod_consts.const_str_digest_a831ff6317c7d2e73415fec045d2f9b3, NULL, NULL, 0, 0, 0);
code_objects_1e3383a4a131edfcfaa9e9d584c05fa5 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AccessTokenAuth, mod_consts.const_str_plain_AccessTokenAuth, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_005b7bc991bbf35eab5c93be7aff1ebd = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_27603c78c0f57873301441670c40c7ca, mod_consts.const_tuple_str_plain_self_str_plain_token_cache_tuple, NULL, 2, 0, 0);
code_objects_42e459aed14210a34f313bdd581b2fb4 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__apply, mod_consts.const_str_digest_a6b34d8b2b75b414323d517567f68311, mod_consts.const_tuple_0f92a0d0958d5857beb51b7f6b1eb350_tuple, NULL, 3, 0, 0);
code_objects_1bffc26f075fd59b8f15a0f55ec65936 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__has_static_credential, mod_consts.const_str_digest_bf0dd412d15eb2237fec7c0609364a68, mod_consts.const_tuple_str_plain_request_tuple, NULL, 1, 0, 0);
code_objects_aefc1bc27f25734eb299ef19e8b09325 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__warn_once, mod_consts.const_str_plain__warn_once, mod_consts.const_tuple_str_plain_key_str_plain_message_str_plain_args_tuple, NULL, 2, 0, 0);
code_objects_2d9a96bf956cac6f8e9e9242f670ad59 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_async_auth_flow, mod_consts.const_str_digest_d0f6c85f7fe27a3d51dc7d62a21dc72a, mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_token_tuple, NULL, 2, 0, 0);
code_objects_717f95dfd4e42730c2e32a157081f7c8 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sync_auth_flow, mod_consts.const_str_digest_26b1d09a2a736d6274395f7e42d7d274, mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_token_tuple, NULL, 2, 0, 0);
code_objects_15e662eba848e2e3921c54a31f730876 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_warn_env_static_shadows_auto_discovery, mod_consts.const_str_plain_warn_env_static_shadows_auto_discovery, mod_consts.const_tuple_str_plain_env_var_tuple, NULL, 1, 0, 0);
code_objects_eff507c038f498e8cbdaaf8a4065705c = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_warn_explicit_static_shadows_credentials, mod_consts.const_str_plain_warn_explicit_static_shadows_credentials, mod_consts.const_tuple_str_plain_param_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_anthropic$lib$credentials$_auth$$$function__7_sync_auth_flow$$$genobj__1_sync_auth_flow(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_anthropic$lib$credentials$_auth$$$function__8_async_auth_flow$$$asyncgen__1_async_auth_flow(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__1__warn_once(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__4___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__5__has_static_credential(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__6__apply(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__7_sync_auth_flow(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__8_async_auth_flow(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anthropic$lib$credentials$_auth$$$function__1__warn_once(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_key = python_pars[0];
PyObject *par_message = python_pars[1];
PyObject *par_args = python_pars[2];
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once = MAKE_FUNCTION_FRAME(tstate, code_objects_aefc1bc27f25734eb299ef19e8b09325, module_anthropic$lib$credentials$_auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once->m_type_description == NULL);
frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once = cache_frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once);
assert(Py_REFCNT(frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = module_var_accessor_anthropic$lib$credentials$_auth$_warn_once_lock(tstate);
if (unlikely(tmp_assign_source_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__warn_once_lock);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
assert(tmp_with_1__source == NULL);
Py_INCREF(tmp_assign_source_1);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once->m_frame.f_lineno = 24;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_key);
tmp_cmp_expr_left_1 = par_key;
tmp_cmp_expr_right_1 = module_var_accessor_anthropic$lib$credentials$_auth$_warn_once_seen(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__warn_once_seen);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_anthropic$lib$credentials$_auth$_warn_once_seen(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__warn_once_seen);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once->m_frame.f_lineno = 27;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_add, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_2 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_2 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once->m_frame.f_lineno = 24;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooo";
    goto try_except_handler_4;
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
    exception_lineno = 24;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once->m_frame)) {
        frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_4;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 24;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once->m_frame)) {
        frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_4;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
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
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once->m_frame.f_lineno = 24;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once->m_frame.f_lineno = 24;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 24;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once->m_frame.f_lineno = 24;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_5:;
goto try_end_4;
// Return handler code:
try_return_handler_1:;
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
try_except_handler_1:;
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
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_5;
tmp_expression_value_3 = module_var_accessor_anthropic$lib$credentials$_auth$log(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_warning);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_tuple_element_1 = par_message;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_args);
tmp_direct_call_arg3_1 = par_args;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_call_result_5 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once,
    type_description_1,
    par_key,
    par_message,
    par_args
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once == cache_frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once);
    cache_frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$credentials$_auth$$$function__1__warn_once);

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
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_param = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials = MAKE_FUNCTION_FRAME(tstate, code_objects_eff507c038f498e8cbdaaf8a4065705c, module_anthropic$lib$credentials$_auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials->m_type_description == NULL);
frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials = cache_frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials);
assert(Py_REFCNT(frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_anthropic$lib$credentials$_auth$_warn_once(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__warn_once);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_425363a9df9da9fab0c721b6bffe437f;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_param);
tmp_format_value_1 = par_param;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "o";
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
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
tmp_args_element_value_2 = mod_consts.const_str_digest_1e835efd192da531c1338d1a413c72f2;
CHECK_OBJECT(par_param);
tmp_args_element_value_3 = par_param;
frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials->m_frame.f_lineno = 38;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials,
    type_description_1,
    par_param
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials == cache_frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials);
    cache_frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials);

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
CHECK_OBJECT(par_param);
Py_DECREF(par_param);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_param);
Py_DECREF(par_param);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_env_var = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery = MAKE_FUNCTION_FRAME(tstate, code_objects_15e662eba848e2e3921c54a31f730876, module_anthropic$lib$credentials$_auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery->m_type_description == NULL);
frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery = cache_frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery);
assert(Py_REFCNT(frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_1 = module_var_accessor_anthropic$lib$credentials$_auth$_warn_once(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__warn_once);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_5adee2454323fc9adca481be558f8135;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_env_var);
tmp_format_value_1 = par_env_var;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "o";
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
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
tmp_args_element_value_2 = mod_consts.const_str_digest_f968a6886f0e3a535990bce60de50c7c;
CHECK_OBJECT(par_env_var);
tmp_args_element_value_3 = par_env_var;
CHECK_OBJECT(par_env_var);
tmp_args_element_value_4 = par_env_var;
frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery->m_frame.f_lineno = 56;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery,
    type_description_1,
    par_env_var
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery == cache_frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery);
    cache_frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery);

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
CHECK_OBJECT(par_env_var);
Py_DECREF(par_env_var);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_env_var);
Py_DECREF(par_env_var);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$credentials$_auth$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_token_cache = python_pars[1];
struct Nuitka_FrameObject *frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_005b7bc991bbf35eab5c93be7aff1ebd, module_anthropic$lib$credentials$_auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__->m_type_description == NULL);
frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__ = cache_frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__);
assert(Py_REFCNT(frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_token_cache);
tmp_assattr_value_1 = par_token_cache;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__token_cache, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__,
    type_description_1,
    par_self,
    par_token_cache
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__ == cache_frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__);
    cache_frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$credentials$_auth$$$function__4___init__);

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
CHECK_OBJECT(par_token_cache);
Py_DECREF(par_token_cache);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_token_cache);
Py_DECREF(par_token_cache);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$credentials$_auth$$$function__5__has_static_credential(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential = MAKE_FUNCTION_FRAME(tstate, code_objects_1bffc26f075fd59b8f15a0f55ec65936, module_anthropic$lib$credentials$_auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential->m_type_description == NULL);
frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential = cache_frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential);
assert(Py_REFCNT(frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_request);
tmp_expression_value_2 = par_request;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_headers);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential->m_frame.f_lineno = 86;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_8a6c5cb14128eaa26ba83ab806364a09_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 86;
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
CHECK_OBJECT(par_request);
tmp_expression_value_4 = par_request;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_headers);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential->m_frame.f_lineno = 86;
tmp_or_right_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_Authorization_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_value_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_value_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential,
    type_description_1,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential == cache_frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential);
    cache_frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$credentials$_auth$$$function__5__has_static_credential);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$credentials$_auth$$$function__6__apply(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *par_token = python_pars[2];
PyObject *var_existing_beta = NULL;
PyObject *var_existing_flags = NULL;
PyObject *outline_0_var_flag = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply;
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
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply = MAKE_FUNCTION_FRAME(tstate, code_objects_42e459aed14210a34f313bdd581b2fb4, module_anthropic$lib$credentials$_auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply->m_type_description == NULL);
frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply = cache_frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply);
assert(Py_REFCNT(frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_ass_subscript_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_token);
tmp_format_value_1 = par_token;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
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
tmp_ass_subvalue_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_ass_subvalue_1 == NULL));
CHECK_OBJECT(par_request);
tmp_expression_value_1 = par_request;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_headers);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 89;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_Authorization;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_request);
tmp_expression_value_3 = par_request;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_headers);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply->m_frame.f_lineno = 90;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_23a18424c7eecf41c1fa0adea4459fea_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_existing_beta == NULL);
var_existing_beta = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_existing_beta);
tmp_expression_value_4 = var_existing_beta;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_split);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply->m_frame.f_lineno = 99;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_chr_44_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
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
exception_lineno = 99;
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
    PyObject *old = outline_0_var_flag;
    outline_0_var_flag = tmp_assign_source_6;
    Py_INCREF(outline_0_var_flag);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(outline_0_var_flag);
tmp_expression_value_5 = outline_0_var_flag;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_strip);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply->m_frame.f_lineno = 99;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 99;
type_description_1 = "ooooo";
    goto try_except_handler_3;
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
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_flag);
tmp_expression_value_6 = outline_0_var_flag;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_strip);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply->m_frame.f_lineno = 99;
tmp_append_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
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
Py_XDECREF(outline_0_var_flag);
outline_0_var_flag = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_flag);
outline_0_var_flag = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 99;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_existing_flags == NULL);
var_existing_flags = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_anthropic$lib$credentials$_auth$OAUTH_API_BETA_HEADER(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OAUTH_API_BETA_HEADER);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_existing_flags);
tmp_cmp_expr_right_1 = var_existing_flags;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooo";
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
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_existing_flags);
tmp_expression_value_7 = var_existing_flags;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_append);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_anthropic$lib$credentials$_auth$OAUTH_API_BETA_HEADER(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OAUTH_API_BETA_HEADER);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 101;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply->m_frame.f_lineno = 101;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_ass_subscript_2;
tmp_str_arg_value_1 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
CHECK_OBJECT(var_existing_flags);
tmp_iterable_value_1 = var_existing_flags;
tmp_ass_subvalue_2 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_expression_value_8 = par_request;
tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_headers);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 102;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_digest_23a18424c7eecf41c1fa0adea4459fea;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply,
    type_description_1,
    par_self,
    par_request,
    par_token,
    var_existing_beta,
    var_existing_flags
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply == cache_frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply);
    cache_frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$credentials$_auth$$$function__6__apply);

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
CHECK_OBJECT(var_existing_beta);
CHECK_OBJECT(var_existing_beta);
Py_DECREF(var_existing_beta);
var_existing_beta = NULL;
CHECK_OBJECT(var_existing_flags);
CHECK_OBJECT(var_existing_flags);
Py_DECREF(var_existing_flags);
var_existing_flags = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_existing_beta);
var_existing_beta = NULL;
Py_XDECREF(var_existing_flags);
var_existing_flags = NULL;
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
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$credentials$_auth$$$function__7_sync_auth_flow(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_request = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_request;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_anthropic$lib$credentials$_auth$$$function__7_sync_auth_flow$$$genobj__1_sync_auth_flow(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_request);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
par_request = NULL;
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
struct anthropic$lib$credentials$_auth$$$function__7_sync_auth_flow$$$genobj__1_sync_auth_flow_locals {
PyObject *var_token;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anthropic$lib$credentials$_auth$$$function__7_sync_auth_flow$$$genobj__1_sync_auth_flow_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$lib$credentials$_auth$$$function__7_sync_auth_flow$$$genobj__1_sync_auth_flow_locals *generator_heap = (struct anthropic$lib$credentials$_auth$$$function__7_sync_auth_flow$$$genobj__1_sync_auth_flow_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_token = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;
generator_heap->tmp_return_value = NULL;

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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_717f95dfd4e42730c2e32a157081f7c8, module_anthropic$lib$credentials$_auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__has_static_credential);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 106;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_1);

generator_heap->exception_lineno = 106;
generator_heap->type_description_1 = "cco";
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
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 107;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
Py_INCREF(tmp_expression_value_2);
generator->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 107;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
generator_heap->tmp_return_value = Py_None;
Py_INCREF(generator_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 109;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__token_cache);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 109;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 109;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_token);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 109;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_token == NULL);
generator_heap->var_token = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__apply);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
CHECK_OBJECT(generator_heap->var_token);
tmp_args_element_value_3 = generator_heap->var_token;
generator->m_frame->m_frame.f_lineno = 110;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_expression_value_5;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(generator->m_closure[0]);
Py_INCREF(tmp_expression_value_5);
generator->m_yield_return_index = 2;
return tmp_expression_value_5;
yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(generator));
#endif
Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

goto function_return_exit;

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
    generator->m_closure[1],
    generator->m_closure[0],
    generator_heap->var_token
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
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_token);
generator_heap->var_token = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:
try_end_1:;
CHECK_OBJECT(generator_heap->var_token);
CHECK_OBJECT(generator_heap->var_token);
Py_DECREF(generator_heap->var_token);
generator_heap->var_token = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif


    return NULL;

}

static PyObject *MAKE_GENERATOR_anthropic$lib$credentials$_auth$$$function__7_sync_auth_flow$$$genobj__1_sync_auth_flow(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        anthropic$lib$credentials$_auth$$$function__7_sync_auth_flow$$$genobj__1_sync_auth_flow_context,
        module_anthropic$lib$credentials$_auth,
        mod_consts.const_str_plain_sync_auth_flow,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_26b1d09a2a736d6274395f7e42d7d274,
#endif
        code_objects_717f95dfd4e42730c2e32a157081f7c8,
        closure,
        2,
#if 1
        sizeof(struct anthropic$lib$credentials$_auth$$$function__7_sync_auth_flow$$$genobj__1_sync_auth_flow_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anthropic$lib$credentials$_auth$$$function__8_async_auth_flow(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_request = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_request;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_ASYNCGEN_anthropic$lib$credentials$_auth$$$function__8_async_auth_flow$$$asyncgen__1_async_auth_flow(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_request);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
par_request = NULL;
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
struct anthropic$lib$credentials$_auth$$$function__8_async_auth_flow$$$asyncgen__1_async_auth_flow_locals {
PyObject *var_token;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anthropic$lib$credentials$_auth$$$function__8_async_auth_flow$$$asyncgen__1_async_auth_flow_context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$lib$credentials$_auth$$$function__8_async_auth_flow$$$asyncgen__1_async_auth_flow_locals *asyncgen_heap = (struct anthropic$lib$credentials$_auth$$$function__8_async_auth_flow$$$asyncgen__1_async_auth_flow_locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->var_token = NULL;
asyncgen_heap->type_description_1 = NULL;
asyncgen_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_2d9a96bf956cac6f8e9e9242f670ad59, module_anthropic$lib$credentials$_auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
asyncgen->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(asyncgen->m_frame);
assert(Py_REFCNT(asyncgen->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(asyncgen->m_frame, (PyObject *)asyncgen);

assert(asyncgen->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, asyncgen->m_frame);
assert(Py_REFCNT(asyncgen->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 115;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__has_static_credential);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 115;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 115;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
asyncgen->m_frame->m_frame.f_lineno = 115;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 115;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_call_result_1);

asyncgen_heap->exception_lineno = 115;
asyncgen_heap->type_description_1 = "cco";
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
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 116;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
Py_INCREF(tmp_expression_value_2);
asyncgen->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 116;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
asyncgen->m_frame->m_frame.f_lineno = 121;
tmp_called_value_3 = module_var_accessor_anthropic$lib$credentials$_auth$asyncify(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_asyncify);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 121;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 121;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__token_cache);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 121;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_get_token);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 121;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 121;
tmp_called_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 121;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 121;
tmp_expression_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 121;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 121;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 2;
asyncgen->m_yield_from = tmp_expression_value_3;
asyncgen->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 121;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = yield_return_value;
assert(asyncgen_heap->var_token == NULL);
asyncgen_heap->var_token = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 122;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__apply);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 122;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 122;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
CHECK_OBJECT(asyncgen_heap->var_token);
tmp_args_element_value_4 = asyncgen_heap->var_token;
asyncgen->m_frame->m_frame.f_lineno = 122;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 122;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_expression_value_8;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 123;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
Py_INCREF(tmp_expression_value_8);
asyncgen->m_yield_return_index = 3;
return tmp_expression_value_8;
yield_return_3:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 123;
asyncgen_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(asyncgen));
#endif
Py_CLEAR(EXC_VALUE_F(asyncgen));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(asyncgen));
#endif
#endif

goto try_return_handler_1;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &asyncgen_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state, exception_tb);
    } else if ((asyncgen_heap->exception_lineno != 0) && (exception_tb->tb_frame != &asyncgen->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    asyncgen->m_frame,
    asyncgen_heap->type_description_1,
    asyncgen->m_closure[1],
    asyncgen->m_closure[0],
    asyncgen_heap->var_token
);


    // Release cached frame if used for exception.
    if (asyncgen->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(asyncgen->m_frame);
}

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(asyncgen_heap->var_token);
asyncgen_heap->var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_1 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_1 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_token);
asyncgen_heap->var_token = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_1;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&asyncgen_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
    return NULL;
    function_return_exit:;

    return NULL;

}

static PyObject *MAKE_ASYNCGEN_anthropic$lib$credentials$_auth$$$function__8_async_auth_flow$$$asyncgen__1_async_auth_flow(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        anthropic$lib$credentials$_auth$$$function__8_async_auth_flow$$$asyncgen__1_async_auth_flow_context,
        module_anthropic$lib$credentials$_auth,
        mod_consts.const_str_plain_async_auth_flow,
        mod_consts.const_str_digest_d0f6c85f7fe27a3d51dc7d62a21dc72a,
        code_objects_2d9a96bf956cac6f8e9e9242f670ad59,
        closure,
        2,
#if 1
        sizeof(struct anthropic$lib$credentials$_auth$$$function__8_async_auth_flow$$$asyncgen__1_async_auth_flow_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__1__warn_once(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$credentials$_auth$$$function__1__warn_once,
        mod_consts.const_str_plain__warn_once,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_aefc1bc27f25734eb299ef19e8b09325,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$credentials$_auth,
        mod_consts.const_str_digest_61fdf87e627d5e4fcb7afbfb37bfb1ba,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials,
        mod_consts.const_str_plain_warn_explicit_static_shadows_credentials,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_eff507c038f498e8cbdaaf8a4065705c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$credentials$_auth,
        mod_consts.const_str_digest_73562ec1742d5722eaec89a810cc2db6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery,
        mod_consts.const_str_plain_warn_env_static_shadows_auto_discovery,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_15e662eba848e2e3921c54a31f730876,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$credentials$_auth,
        mod_consts.const_str_digest_b66c28da89d9d15dea7a780d078d2b03,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__4___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$credentials$_auth$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_27603c78c0f57873301441670c40c7ca,
#endif
        code_objects_005b7bc991bbf35eab5c93be7aff1ebd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$credentials$_auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__5__has_static_credential(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$credentials$_auth$$$function__5__has_static_credential,
        mod_consts.const_str_plain__has_static_credential,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bf0dd412d15eb2237fec7c0609364a68,
#endif
        code_objects_1bffc26f075fd59b8f15a0f55ec65936,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$credentials$_auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__6__apply(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$credentials$_auth$$$function__6__apply,
        mod_consts.const_str_plain__apply,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a6b34d8b2b75b414323d517567f68311,
#endif
        code_objects_42e459aed14210a34f313bdd581b2fb4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$credentials$_auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__7_sync_auth_flow(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$credentials$_auth$$$function__7_sync_auth_flow,
        mod_consts.const_str_plain_sync_auth_flow,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_26b1d09a2a736d6274395f7e42d7d274,
#endif
        code_objects_717f95dfd4e42730c2e32a157081f7c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$credentials$_auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__8_async_auth_flow(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$credentials$_auth$$$function__8_async_auth_flow,
        mod_consts.const_str_plain_async_auth_flow,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d0f6c85f7fe27a3d51dc7d62a21dc72a,
#endif
        code_objects_2d9a96bf956cac6f8e9e9242f670ad59,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$credentials$_auth,
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

static function_impl_code const function_table_anthropic$lib$credentials$_auth[] = {
impl_anthropic$lib$credentials$_auth$$$function__1__warn_once,
impl_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials,
impl_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery,
impl_anthropic$lib$credentials$_auth$$$function__4___init__,
impl_anthropic$lib$credentials$_auth$$$function__5__has_static_credential,
impl_anthropic$lib$credentials$_auth$$$function__6__apply,
impl_anthropic$lib$credentials$_auth$$$function__7_sync_auth_flow,
impl_anthropic$lib$credentials$_auth$$$function__8_async_auth_flow,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$lib$credentials$_auth);
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
        module_anthropic$lib$credentials$_auth,
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
        function_table_anthropic$lib$credentials$_auth,
        sizeof(function_table_anthropic$lib$credentials$_auth) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.lib.credentials._auth";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$lib$credentials$_auth(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$lib$credentials$_auth");

    // Store the module for future use.
    module_anthropic$lib$credentials$_auth = module;

    moduledict_anthropic$lib$credentials$_auth = MODULE_DICT(module_anthropic$lib$credentials$_auth);

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
        PRINT_STRING("anthropic$lib$credentials$_auth: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$lib$credentials$_auth: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$lib$credentials$_auth: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib.credentials._auth" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$lib$credentials$_auth\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$lib$credentials$_auth,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$credentials$_auth,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$credentials$_auth,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$credentials$_auth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$credentials$_auth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$lib$credentials$_auth);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$lib$credentials$_auth);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$credentials$_auth;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$lib$credentials$_auth = MAKE_MODULE_FRAME(code_objects_a87e28c60cd2665410cf60aa41a8d027, module_anthropic$lib$credentials$_auth);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$credentials$_auth);
assert(Py_REFCNT(frame_frame_anthropic$lib$credentials$_auth) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$lib$credentials$_auth$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$lib$credentials$_auth$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$lib$credentials$_auth;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$lib$credentials$_auth->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_threading;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$lib$credentials$_auth;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_anthropic$lib$credentials$_auth->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_threading, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_8);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$lib$credentials$_auth,
        mod_consts.const_str_plain_Generator,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Generator);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_Generator, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$lib$credentials$_auth,
        mod_consts.const_str_plain_AsyncGenerator,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_AsyncGenerator);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncGenerator, tmp_assign_source_10);
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
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anthropic$lib$credentials$_auth;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_override_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_anthropic$lib$credentials$_auth->m_frame.f_lineno = 6;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anthropic$lib$credentials$_auth,
        mod_consts.const_str_plain_override,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_override);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_override, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_httpx;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anthropic$lib$credentials$_auth;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_anthropic$lib$credentials$_auth->m_frame.f_lineno = 8;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__cache;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anthropic$lib$credentials$_auth;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_TokenCache_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_anthropic$lib$credentials$_auth->m_frame.f_lineno = 10;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anthropic$lib$credentials$_auth,
        mod_consts.const_str_plain_TokenCache,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_TokenCache);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_TokenCache, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anthropic$lib$credentials$_auth;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_asyncify_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$credentials$_auth->m_frame.f_lineno = 11;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anthropic$lib$credentials$_auth,
        mod_consts.const_str_plain_asyncify,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_asyncify);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncify, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__constants;
tmp_globals_arg_value_7 = (PyObject *)moduledict_anthropic$lib$credentials$_auth;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_OAUTH_API_BETA_HEADER_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_anthropic$lib$credentials$_auth->m_frame.f_lineno = 12;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anthropic$lib$credentials$_auth,
        mod_consts.const_str_plain_OAUTH_API_BETA_HEADER,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_OAUTH_API_BETA_HEADER);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_OAUTH_API_BETA_HEADER, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_AccessTokenAuth);
UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_anthropic$lib$credentials$_auth$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 16;

    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$credentials$_auth->m_frame.f_lineno = 16;
tmp_assign_source_17 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_12077b699f71048e2f93e4a4128e95bb_tuple, 0)
);

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_log, tmp_assign_source_17);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706;
tmp_ass_subscribed_1 = module_var_accessor_anthropic$lib$credentials$_auth$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 16;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_log;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_anthropic$lib$credentials$_auth$threading(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 18;

    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$credentials$_auth->m_frame.f_lineno = 18;
tmp_assign_source_18 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_Lock);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__warn_once_lock, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = PySet_New(NULL);
UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__warn_once_seen, tmp_assign_source_19);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414;
tmp_ass_subscribed_2 = module_var_accessor_anthropic$lib$credentials$_auth$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain__warn_once_seen;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_8a241258504cc80a5f2ec27c1f4afd9f);

tmp_assign_source_20 = MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__1__warn_once(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__warn_once, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_9fe41cb5c17afdc7d99445d352ce78f9);

tmp_assign_source_21 = MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__2_warn_explicit_static_shadows_credentials(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_warn_explicit_static_shadows_credentials, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_546e0ddea848ea0ec1f825b78a1677db);

tmp_assign_source_22 = MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__3_warn_env_static_shadows_auto_discovery(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_warn_env_static_shadows_auto_discovery, tmp_assign_source_22);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_anthropic$lib$credentials$_auth$httpx(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_httpx);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto try_except_handler_2;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Auth);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_2;
}
tmp_assign_source_23 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_23, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_24 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

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
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_26 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_26;
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


exception_lineno = 65;

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
PyObject *tmp_assign_source_27;
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


exception_lineno = 65;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_AccessTokenAuth;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anthropic$lib$credentials$_auth->m_frame.f_lineno = 65;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_27;
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


exception_lineno = 65;

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
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

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


exception_lineno = 65;

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


exception_lineno = 65;

    goto try_except_handler_2;
}
frame_frame_anthropic$lib$credentials$_auth->m_frame.f_lineno = 65;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 65;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_28;
}
branch_end_1:;
{
PyObject *tmp_assign_source_29;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_12077b699f71048e2f93e4a4128e95bb;
tmp_res = PyObject_SetItem(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_b07e9eb33a84b977aad41254606a08e4;
tmp_res = PyObject_SetItem(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_AccessTokenAuth;
tmp_res = PyObject_SetItem(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_65;
tmp_res = PyObject_SetItem(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_4;
}
frame_frame_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_2 = MAKE_CLASS_FRAME(tstate, code_objects_1e3383a4a131edfcfaa9e9d584c05fa5, module_anthropic$lib$credentials$_auth, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_2);
assert(Py_REFCNT(frame_frame_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_2) == 2);

// Framed code:
tmp_dictset_value = Py_False;
tmp_res = PyObject_SetItem(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65, mod_consts.const_str_plain_requires_response_body, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_004d4996bf7360a5a94b0cd0d987eaf0);

tmp_dictset_value = MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__4___init__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_5;
tmp_called_value_2 = PyObject_GetItem(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65, const_str_plain_staticmethod);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_729274797a1c2ec12d3ef0676da65b29);

tmp_args_element_value_1 = MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__5__has_static_credential(tstate, tmp_annotations_5);

frame_frame_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_2->m_frame.f_lineno = 84;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65, mod_consts.const_str_plain__has_static_credential, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_c39d8d7567874ff23d0aeaf4824c7228);

tmp_dictset_value = MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__6__apply(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65, mod_consts.const_str_plain__apply, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_7;
tmp_called_value_3 = PyObject_GetItem(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65, mod_consts.const_str_plain_override);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = module_var_accessor_anthropic$lib$credentials$_auth$override(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_e8197e1e85eaabc0f573b0fc22b70190);

tmp_args_element_value_2 = MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__7_sync_auth_flow(tstate, tmp_annotations_7);

frame_frame_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_2->m_frame.f_lineno = 104;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65, mod_consts.const_str_plain_sync_auth_flow, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_8;
tmp_called_value_4 = PyObject_GetItem(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65, mod_consts.const_str_plain_override);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = module_var_accessor_anthropic$lib$credentials$_auth$override(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_34d502353adc1cca8ea8bd388eb1c214);

tmp_args_element_value_3 = MAKE_FUNCTION_anthropic$lib$credentials$_auth$$$function__8_async_auth_flow(tstate, tmp_annotations_8);

frame_frame_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_2->m_frame.f_lineno = 113;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65, mod_consts.const_str_plain_async_auth_flow, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__token_cache_tuple;
tmp_res = PyObject_SetItem(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

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


exception_lineno = 65;

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
tmp_res = PyObject_SetItem(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_AccessTokenAuth;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anthropic$lib$credentials$_auth->m_frame.f_lineno = 65;
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_30;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_29 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_29);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65);
locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65);
locals_anthropic$lib$credentials$_auth$$$class__1_AccessTokenAuth_65 = NULL;
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
exception_lineno = 65;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_AccessTokenAuth, tmp_assign_source_29);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$credentials$_auth, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$credentials$_auth->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$credentials$_auth, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$lib$credentials$_auth);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$lib$credentials$_auth", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib.credentials._auth" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$lib$credentials$_auth);
    return module_anthropic$lib$credentials$_auth;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$credentials$_auth, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$lib$credentials$_auth", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

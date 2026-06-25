/* Generated code for Python module 'textual$keys'
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



/* The "module_textual$keys" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$keys;
PyDictObject *moduledict_textual$keys;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_value;
PyObject *const_str_plain_KEY_TO_UNICODE_NAME;
PyObject *const_str_digest_fad85658383c0df97583f43512ef2f8a;
PyObject *const_str_plain_KEY_ALIASES;
PyObject *const_str_digest_e7afabebf8ef1440b03add46db6f004e;
PyObject *const_str_plain_KEY_DISPLAY_ALIASES;
PyObject *const_str_plain_REPLACED_KEYS;
PyObject *const_str_plain__get_unicode_name_from_key;
PyObject *const_str_plain_unicodedata;
PyObject *const_str_plain_lookup;
PyObject *const_str_plain_unicode_name;
PyObject *const_str_plain_isprintable;
PyObject *const_str_digest_622fb5079f158f8619f680599fb53997;
PyObject *const_str_plain_rpartition;
PyObject *const_tuple_str_chr_43_tuple;
PyObject *const_str_plain_replace;
PyObject *const_tuple_str_underscore_str_space_tuple;
PyObject *const_str_plain_upper;
PyObject *const_str_digest_ef727271d3ddfc637356d00009a0aae8;
PyObject *const_str_plain_isalnum;
PyObject *const_tuple_str_chr_45_str_underscore_tuple;
PyObject *const_tuple_str_space_str_underscore_tuple;
PyObject *const_str_plain_ASCII_KEY_NAMES;
PyObject *const_str_plain_KEY_NAME_REPLACEMENTS;
PyObject *const_str_digest_2c9b049c78dfc9a5e31df16c92131846;
PyObject *const_tuple_str_chr_44_tuple;
PyObject *const_str_plain_strip;
PyObject *const_str_chr_44;
PyObject *const_str_digest_70f308a0b368541cf3fcbc377634721c;
PyObject *const_str_plain__character_to_key;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_257413b475337c395e105c79423b6180;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_enum;
PyObject *const_tuple_str_plain_Enum_tuple;
PyObject *const_str_plain_Enum;
PyObject *const_str_plain_lru_cache;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_Keys;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_4bd1e91230116e9da2a8532fbb7fd77b;
PyObject *const_str_digest_b48fc827c9b8da35821f0989484cdb78;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_9;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_property;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_digest_f40af1456abfb531c34a52fd4ceba45c;
PyObject *const_str_plain_escape;
PyObject *const_str_plain_Escape;
PyObject *const_str_digest_ca5753c417e0ecbf89e3bb0c68d1babf;
PyObject *const_str_plain_ShiftEscape;
PyObject *const_str_plain_return;
PyObject *const_str_plain_Return;
PyObject *const_str_digest_30d3e1330cbd1108ff6954a7d6319f57;
PyObject *const_str_plain_ControlAt;
PyObject *const_str_digest_bcedb8f265204c78ead3fe8ea7de2934;
PyObject *const_str_plain_ControlA;
PyObject *const_str_digest_0dffc11c55eb16445b34ac17605839de;
PyObject *const_str_plain_ControlB;
PyObject *const_str_digest_ca425b260b4514d6b265bb3b8c379fee;
PyObject *const_str_plain_ControlC;
PyObject *const_str_digest_dc8a1095fcf389f33726dff551a19934;
PyObject *const_str_plain_ControlD;
PyObject *const_str_digest_2b62260542bdd7282ea74b8fdc7b67b8;
PyObject *const_str_plain_ControlE;
PyObject *const_str_digest_ec0e71e9b6b6b452a1d4f75267b20b56;
PyObject *const_str_plain_ControlF;
PyObject *const_str_digest_dcd74d9b89afb543d307964126ae6e53;
PyObject *const_str_plain_ControlG;
PyObject *const_str_digest_7607605efc9364fb0dad017b75b4155f;
PyObject *const_str_plain_ControlH;
PyObject *const_str_digest_57ab7d99a30021e541d9f0574dd5eb0e;
PyObject *const_str_plain_ControlI;
PyObject *const_str_digest_e1090ebf138eab0b3a481ac0a5170741;
PyObject *const_str_plain_ControlJ;
PyObject *const_str_digest_fb16a2df0c12c1a66ce902ad4b3115b3;
PyObject *const_str_plain_ControlK;
PyObject *const_str_digest_408394bc7cbb98d5dba63ec1fc0030f8;
PyObject *const_str_plain_ControlL;
PyObject *const_str_digest_00aee79b629314f5bd54cf77d9838075;
PyObject *const_str_plain_ControlM;
PyObject *const_str_digest_406591cf1960a73b2489c7acdf934cd8;
PyObject *const_str_plain_ControlN;
PyObject *const_str_digest_2cc9b10a86c82745acd0c3f49d4d1380;
PyObject *const_str_plain_ControlO;
PyObject *const_str_digest_ca73df66d4de29cb1deb57c67bf67263;
PyObject *const_str_plain_ControlP;
PyObject *const_str_digest_dd36da76c3d170d25d5117d1c097b2fb;
PyObject *const_str_plain_ControlQ;
PyObject *const_str_digest_c78d7bca3c45e82cd28b8b58cab7f9dd;
PyObject *const_str_plain_ControlR;
PyObject *const_str_digest_f1708b51f222981da897333c41801eaa;
PyObject *const_str_plain_ControlS;
PyObject *const_str_digest_448ef0fc0f8a5f6bfd07152d510ea9fc;
PyObject *const_str_plain_ControlT;
PyObject *const_str_digest_45620439f749c050a7dd80c8cef47abe;
PyObject *const_str_plain_ControlU;
PyObject *const_str_digest_0301e485e7519b6fa19445c2b272d053;
PyObject *const_str_plain_ControlV;
PyObject *const_str_digest_85e451786b6ffa3c1045314e0c350aab;
PyObject *const_str_plain_ControlW;
PyObject *const_str_digest_d4e03dfd9712f257a953981cf0934fbd;
PyObject *const_str_plain_ControlX;
PyObject *const_str_digest_34b20b541ca4a9eb915d76ea01fc0f15;
PyObject *const_str_plain_ControlY;
PyObject *const_str_digest_67c801cd21173604beea7e3ebb818afe;
PyObject *const_str_plain_ControlZ;
PyObject *const_str_digest_42fa8ff487466d7bb8f1d4388bdc768d;
PyObject *const_str_plain_Control1;
PyObject *const_str_digest_e9f5a3b11239ef392f01e5ab59eaffb6;
PyObject *const_str_plain_Control2;
PyObject *const_str_digest_a5ef4f90d01803ae1e18a8e9df225244;
PyObject *const_str_plain_Control3;
PyObject *const_str_digest_ed21b8632b9e892910a8e6dde81031b4;
PyObject *const_str_plain_Control4;
PyObject *const_str_digest_6400a030fac0aa2c40dcc6d4f1387f2a;
PyObject *const_str_plain_Control5;
PyObject *const_str_digest_6e3f212ff6ec155d7f48eae4397dbd7c;
PyObject *const_str_plain_Control6;
PyObject *const_str_digest_179f3f41d82658e5ec92a1de560b8505;
PyObject *const_str_plain_Control7;
PyObject *const_str_digest_7f5046c15296ca1327176648c6cc3d18;
PyObject *const_str_plain_Control8;
PyObject *const_str_digest_1ed0156ab039d7d85fc6f9a57b8c6dd1;
PyObject *const_str_plain_Control9;
PyObject *const_str_digest_8da22a7738041978dfc95fae3b00b310;
PyObject *const_str_plain_Control0;
PyObject *const_str_digest_3fdae57bf403add22eff303712d037c4;
PyObject *const_str_plain_ControlShift1;
PyObject *const_str_digest_0c9b772786429e726d4c8218f450fcf3;
PyObject *const_str_plain_ControlShift2;
PyObject *const_str_digest_876025e2bdbb248b660b8f76bef521f1;
PyObject *const_str_plain_ControlShift3;
PyObject *const_str_digest_6bbf38777794fd631d769a40a4020594;
PyObject *const_str_plain_ControlShift4;
PyObject *const_str_digest_36dd1a6def72601031206d28a4a88946;
PyObject *const_str_plain_ControlShift5;
PyObject *const_str_digest_467ee2171159545db73ad7f7aa5b29bf;
PyObject *const_str_plain_ControlShift6;
PyObject *const_str_digest_2c69d0b6d9fa3ee68846db89bd689880;
PyObject *const_str_plain_ControlShift7;
PyObject *const_str_digest_3dc6929fcb5c8346df80c27471ea02b6;
PyObject *const_str_plain_ControlShift8;
PyObject *const_str_digest_3fb7296c639fe027cbd36ba3629afc50;
PyObject *const_str_plain_ControlShift9;
PyObject *const_str_digest_f4cac00956dec08c7f8e19dd2ae1006e;
PyObject *const_str_plain_ControlShift0;
PyObject *const_str_digest_431704394b408b0abffc0234971b8be5;
PyObject *const_str_plain_ControlBackslash;
PyObject *const_str_digest_257c8c39adeb20891e0f1b8f027f234c;
PyObject *const_str_plain_ControlSquareClose;
PyObject *const_str_digest_5a01ebad1e3bf70395fb9048376f432d;
PyObject *const_str_plain_ControlCircumflex;
PyObject *const_str_digest_3fbe5f5f37154e822ada15ea0282ec73;
PyObject *const_str_plain_ControlUnderscore;
PyObject *const_str_plain_left;
PyObject *const_str_plain_Left;
PyObject *const_str_plain_right;
PyObject *const_str_plain_Right;
PyObject *const_str_plain_up;
PyObject *const_str_plain_Up;
PyObject *const_str_plain_down;
PyObject *const_str_plain_Down;
PyObject *const_str_plain_home;
PyObject *const_str_plain_Home;
PyObject *const_str_plain_End;
PyObject *const_str_plain_insert;
PyObject *const_str_plain_Insert;
PyObject *const_str_plain_delete;
PyObject *const_str_plain_Delete;
PyObject *const_str_plain_pageup;
PyObject *const_str_plain_PageUp;
PyObject *const_str_plain_pagedown;
PyObject *const_str_plain_PageDown;
PyObject *const_str_digest_d37cb692cfe4d8063be31b713836fe0b;
PyObject *const_str_plain_ControlLeft;
PyObject *const_str_digest_a99e06b9bd98e45e9db91e3181d31a7e;
PyObject *const_str_plain_ControlRight;
PyObject *const_str_digest_d84ba25c0612e7399a8eab5c72b46692;
PyObject *const_str_plain_ControlUp;
PyObject *const_str_digest_fca3886d2d02e281dd103d1f67e5f371;
PyObject *const_str_plain_ControlDown;
PyObject *const_str_digest_6af762a7f6deb81671c013fe563da8bf;
PyObject *const_str_plain_ControlHome;
PyObject *const_str_digest_b41bdc720dbf1ea271225db5c38d9cad;
PyObject *const_str_plain_ControlEnd;
PyObject *const_str_digest_e88412426d7bfb8028eee70a7621c4d3;
PyObject *const_str_plain_ControlInsert;
PyObject *const_str_digest_782e50f7df1b384ae0398e545ad84467;
PyObject *const_str_plain_ControlDelete;
PyObject *const_str_digest_237948707709a2b7669cf75787cbbda7;
PyObject *const_str_plain_ControlPageUp;
PyObject *const_str_digest_6e99e0d5448b2313e314549c7b443122;
PyObject *const_str_plain_ControlPageDown;
PyObject *const_str_digest_f410f914ee587d62c889ae9a709b3342;
PyObject *const_str_plain_ShiftLeft;
PyObject *const_str_digest_6bbaff8e334e51a2e117608cd70dd79b;
PyObject *const_str_plain_ShiftRight;
PyObject *const_str_digest_f78ad742b430aa14baef127b1b29318c;
PyObject *const_str_plain_ShiftUp;
PyObject *const_str_digest_cf339dbdc18919c80363cffadf0016d6;
PyObject *const_str_plain_ShiftDown;
PyObject *const_str_digest_7b11a7fd656eb00b43cabddd345e97ce;
PyObject *const_str_plain_ShiftHome;
PyObject *const_str_digest_4ba3322bed4d34dbafbbe1c8b4a7dde1;
PyObject *const_str_plain_ShiftEnd;
PyObject *const_str_digest_8730e5ddae8f9a6f8616f1660f9540f3;
PyObject *const_str_plain_ShiftInsert;
PyObject *const_str_digest_ed8e8c6a3ce854e35441b2b12c704727;
PyObject *const_str_plain_ShiftDelete;
PyObject *const_str_digest_70a96ac626dd38c9abbf118cccd7ed2e;
PyObject *const_str_plain_ShiftPageUp;
PyObject *const_str_digest_2fabe4c48a3cc228908247a6d933cb17;
PyObject *const_str_plain_ShiftPageDown;
PyObject *const_str_digest_017e53923b3a251543b7cad8878d418c;
PyObject *const_str_plain_ControlShiftLeft;
PyObject *const_str_digest_cef459680f635742f259a0aeb4e1c39a;
PyObject *const_str_plain_ControlShiftRight;
PyObject *const_str_digest_3d75097cc4846356c9ebad175b020429;
PyObject *const_str_plain_ControlShiftUp;
PyObject *const_str_digest_2be4d47bbe791e881f959cf40b8af593;
PyObject *const_str_plain_ControlShiftDown;
PyObject *const_str_digest_36f7b34d34ba7a4d04a3a3376e3cc240;
PyObject *const_str_plain_ControlShiftHome;
PyObject *const_str_digest_cd2054bbfafdb2f296ccec8e59de9a02;
PyObject *const_str_plain_ControlShiftEnd;
PyObject *const_str_digest_6e0784eb25ca3cde966126537fa9bab0;
PyObject *const_str_plain_ControlShiftInsert;
PyObject *const_str_digest_5059be596fa6b06862bb7a75a2d70e85;
PyObject *const_str_plain_ControlShiftDelete;
PyObject *const_str_digest_ae6babd8b0a1ba7a81b7a3b744a67cdd;
PyObject *const_str_plain_ControlShiftPageUp;
PyObject *const_str_digest_adccd1be55646c031dd2d515393fd7e1;
PyObject *const_str_plain_ControlShiftPageDown;
PyObject *const_str_digest_ac6935a32730d8fc796ab576cb4b39c3;
PyObject *const_str_plain_BackTab;
PyObject *const_str_plain_f1;
PyObject *const_str_plain_F1;
PyObject *const_str_plain_f2;
PyObject *const_str_plain_F2;
PyObject *const_str_plain_f3;
PyObject *const_str_plain_F3;
PyObject *const_str_plain_f4;
PyObject *const_str_plain_F4;
PyObject *const_str_plain_f5;
PyObject *const_str_plain_F5;
PyObject *const_str_plain_f6;
PyObject *const_str_plain_F6;
PyObject *const_str_plain_f7;
PyObject *const_str_plain_F7;
PyObject *const_str_plain_f8;
PyObject *const_str_plain_F8;
PyObject *const_str_plain_f9;
PyObject *const_str_plain_F9;
PyObject *const_str_plain_f10;
PyObject *const_str_plain_F10;
PyObject *const_str_plain_f11;
PyObject *const_str_plain_F11;
PyObject *const_str_plain_f12;
PyObject *const_str_plain_F12;
PyObject *const_str_plain_f13;
PyObject *const_str_plain_F13;
PyObject *const_str_plain_f14;
PyObject *const_str_plain_F14;
PyObject *const_str_plain_f15;
PyObject *const_str_plain_F15;
PyObject *const_str_plain_f16;
PyObject *const_str_plain_F16;
PyObject *const_str_plain_f17;
PyObject *const_str_plain_F17;
PyObject *const_str_plain_f18;
PyObject *const_str_plain_F18;
PyObject *const_str_plain_f19;
PyObject *const_str_plain_F19;
PyObject *const_str_plain_f20;
PyObject *const_str_plain_F20;
PyObject *const_str_plain_f21;
PyObject *const_str_plain_F21;
PyObject *const_str_plain_f22;
PyObject *const_str_plain_F22;
PyObject *const_str_plain_f23;
PyObject *const_str_plain_F23;
PyObject *const_str_plain_f24;
PyObject *const_str_plain_F24;
PyObject *const_str_digest_3456caec15976e53fb582dbd62266b48;
PyObject *const_str_plain_ControlF1;
PyObject *const_str_digest_1a5c895a2946da8e659171043dcf75e7;
PyObject *const_str_plain_ControlF2;
PyObject *const_str_digest_d238fda937093c760f3fa6d72dacedec;
PyObject *const_str_plain_ControlF3;
PyObject *const_str_digest_b807a75f132476c5ec27d2911a6d64b5;
PyObject *const_str_plain_ControlF4;
PyObject *const_str_digest_c2482fd31b687ff4e24286c169fa1717;
PyObject *const_str_plain_ControlF5;
PyObject *const_str_digest_43c554db18e5fe0c223e540327f24d8b;
PyObject *const_str_plain_ControlF6;
PyObject *const_str_digest_f8d028f5ba24b63110ee819fd44959de;
PyObject *const_str_plain_ControlF7;
PyObject *const_str_digest_6f9e59cf4bfaf19fcd7aa001a8d759d6;
PyObject *const_str_plain_ControlF8;
PyObject *const_str_digest_0a62835b93442cb993cd2703404236ff;
PyObject *const_str_plain_ControlF9;
PyObject *const_str_digest_f4ef1695cb0efa40d130e9a802b19071;
PyObject *const_str_plain_ControlF10;
PyObject *const_str_digest_abcc99939cc338628ab23008b7fec2b6;
PyObject *const_str_plain_ControlF11;
PyObject *const_str_digest_77f7668d3252510b6a9391c58c0e2d45;
PyObject *const_str_plain_ControlF12;
PyObject *const_str_digest_3a03cf659c2772878eeb7e792edf9d53;
PyObject *const_str_plain_ControlF13;
PyObject *const_str_digest_80c75c1c9cc2fd2f76cd3c22cd4ada3c;
PyObject *const_str_plain_ControlF14;
PyObject *const_str_digest_a86dfe64219a1890ed99cf4ba38083a0;
PyObject *const_str_plain_ControlF15;
PyObject *const_str_digest_dd6b59ceb22f4e14e36db67cd0c37c23;
PyObject *const_str_plain_ControlF16;
PyObject *const_str_digest_5e6fbdd64f7992c012459cca431e1f90;
PyObject *const_str_plain_ControlF17;
PyObject *const_str_digest_1c5f92411617856116fa927c399dd545;
PyObject *const_str_plain_ControlF18;
PyObject *const_str_digest_72ce5d7b5913db12fa2c8303f2abbe71;
PyObject *const_str_plain_ControlF19;
PyObject *const_str_digest_04e1496d756f156f62cfb92a15e54dbc;
PyObject *const_str_plain_ControlF20;
PyObject *const_str_digest_06d18f0f3ce62ffd30b1bb6dfbd9eed0;
PyObject *const_str_plain_ControlF21;
PyObject *const_str_digest_fc76c10d5f24a618321c7ca5216e907a;
PyObject *const_str_plain_ControlF22;
PyObject *const_str_digest_f38fd246aff961e4bf6ccdd7cf2f50e5;
PyObject *const_str_plain_ControlF23;
PyObject *const_str_digest_ab944a33bed9ea53dd116d2906a6cf64;
PyObject *const_str_plain_ControlF24;
PyObject *const_str_angle_any;
PyObject *const_str_plain_Any;
PyObject *const_str_digest_0998c7a60f43616ce9fd3b2f9338a53b;
PyObject *const_str_plain_ScrollUp;
PyObject *const_str_digest_14163513979fb3132ace058feff35177;
PyObject *const_str_plain_ScrollDown;
PyObject *const_str_angle_ignore;
PyObject *const_str_plain_Ignore;
PyObject *const_str_digest_14a9d0454d43784e4753de1157591232;
PyObject *const_str_plain_ControlSpace;
PyObject *const_str_plain_tab;
PyObject *const_str_plain_Tab;
PyObject *const_str_plain_space;
PyObject *const_str_plain_Space;
PyObject *const_str_plain_enter;
PyObject *const_str_plain_Enter;
PyObject *const_str_plain_backspace;
PyObject *const_str_plain_Backspace;
PyObject *const_str_plain_ShiftControlLeft;
PyObject *const_str_plain_ShiftControlRight;
PyObject *const_str_plain_ShiftControlHome;
PyObject *const_str_plain_ShiftControlEnd;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_dict_3db02825e119933ad84c8240dcfceff7;
PyObject *const_dict_85bb3133f04b00be40b1b77179d61c6b;
PyObject *const_dict_db33bfb71a490d0f03cc53d9f182e628;
PyObject *const_dict_8759e1a9632c93f20e44ed4b7c96f5bc;
PyObject *const_dict_d3244e89f9ca1765029e9c2ca01922d7;
PyObject *const_dict_420e509c618028b64be4c57c39d7009d;
PyObject *const_dict_778375f2fc1409fb1258428f30384592;
PyObject *const_str_plain__get_key_aliases;
PyObject *const_tuple_int_pos_1024_tuple;
PyObject *const_str_plain_format_key;
PyObject *const_dict_4c27da9b681bf103a76c2e7b9e555d46;
PyObject *const_str_plain_key_to_character;
PyObject *const_dict_56acd67f60b561438df177796104f77c;
PyObject *const_dict_a36f3c8d8bfe682f9cf8524c46e2cebb;
PyObject *const_str_plain__normalize_key_list;
PyObject *const_str_digest_62916240d0fb251425567b8f8be2a533;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_key_tuple;
PyObject *const_str_digest_0c5aacb1c60164b499c2fe2c86db96bf;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_character_str_plain_key_tuple;
PyObject *const_tuple_str_plain_key_tuple;
PyObject *const_tuple_str_plain_keys_str_plain_keys_list_tuple;
PyObject *const_tuple_4a06602db72648341b4943d611e7f0e2_tuple;
PyObject *const_tuple_str_plain_key_str_underscore_str_plain_separator_tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[386];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.keys"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_TO_UNICODE_NAME);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_fad85658383c0df97583f43512ef2f8a);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_ALIASES);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_e7afabebf8ef1440b03add46db6f004e);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_DISPLAY_ALIASES);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_REPLACED_KEYS);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_unicode_name_from_key);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_unicodedata);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_lookup);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_unicode_name);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_isprintable);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_622fb5079f158f8619f680599fb53997);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_rpartition);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_43_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_str_space_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_upper);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef727271d3ddfc637356d00009a0aae8);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_isalnum);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_45_str_underscore_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_space_str_underscore_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_ASCII_KEY_NAMES);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c9b049c78dfc9a5e31df16c92131846);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_44_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_chr_44);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_70f308a0b368541cf3fcbc377634721c);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__character_to_key);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_257413b475337c395e105c79423b6180);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Enum_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_Enum);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_Keys);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_4bd1e91230116e9da2a8532fbb7fd77b);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_b48fc827c9b8da35821f0989484cdb78);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_int_pos_9);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_f40af1456abfb531c34a52fd4ceba45c);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_escape);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_Escape);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca5753c417e0ecbf89e3bb0c68d1babf);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftEscape);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_Return);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_30d3e1330cbd1108ff6954a7d6319f57);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlAt);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_bcedb8f265204c78ead3fe8ea7de2934);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlA);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_0dffc11c55eb16445b34ac17605839de);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlB);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca425b260b4514d6b265bb3b8c379fee);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlC);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc8a1095fcf389f33726dff551a19934);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlD);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b62260542bdd7282ea74b8fdc7b67b8);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlE);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_ec0e71e9b6b6b452a1d4f75267b20b56);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcd74d9b89afb543d307964126ae6e53);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlG);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_7607605efc9364fb0dad017b75b4155f);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlH);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_57ab7d99a30021e541d9f0574dd5eb0e);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlI);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1090ebf138eab0b3a481ac0a5170741);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlJ);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb16a2df0c12c1a66ce902ad4b3115b3);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlK);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_408394bc7cbb98d5dba63ec1fc0030f8);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlL);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_00aee79b629314f5bd54cf77d9838075);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlM);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_406591cf1960a73b2489c7acdf934cd8);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlN);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_2cc9b10a86c82745acd0c3f49d4d1380);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlO);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca73df66d4de29cb1deb57c67bf67263);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlP);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd36da76c3d170d25d5117d1c097b2fb);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlQ);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_c78d7bca3c45e82cd28b8b58cab7f9dd);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlR);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_f1708b51f222981da897333c41801eaa);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlS);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_448ef0fc0f8a5f6bfd07152d510ea9fc);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlT);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_45620439f749c050a7dd80c8cef47abe);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlU);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_0301e485e7519b6fa19445c2b272d053);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlV);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_85e451786b6ffa3c1045314e0c350aab);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlW);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4e03dfd9712f257a953981cf0934fbd);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlX);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_34b20b541ca4a9eb915d76ea01fc0f15);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlY);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_67c801cd21173604beea7e3ebb818afe);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlZ);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_42fa8ff487466d7bb8f1d4388bdc768d);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_Control1);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_e9f5a3b11239ef392f01e5ab59eaffb6);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_Control2);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5ef4f90d01803ae1e18a8e9df225244);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_Control3);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed21b8632b9e892910a8e6dde81031b4);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_Control4);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_6400a030fac0aa2c40dcc6d4f1387f2a);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_Control5);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e3f212ff6ec155d7f48eae4397dbd7c);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_Control6);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_179f3f41d82658e5ec92a1de560b8505);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_Control7);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_7f5046c15296ca1327176648c6cc3d18);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_Control8);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ed0156ab039d7d85fc6f9a57b8c6dd1);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_Control9);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_8da22a7738041978dfc95fae3b00b310);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_Control0);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fdae57bf403add22eff303712d037c4);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift1);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c9b772786429e726d4c8218f450fcf3);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift2);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_876025e2bdbb248b660b8f76bef521f1);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift3);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_6bbf38777794fd631d769a40a4020594);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift4);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_36dd1a6def72601031206d28a4a88946);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift5);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_467ee2171159545db73ad7f7aa5b29bf);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift6);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c69d0b6d9fa3ee68846db89bd689880);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift7);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_3dc6929fcb5c8346df80c27471ea02b6);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift8);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fb7296c639fe027cbd36ba3629afc50);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift9);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_f4cac00956dec08c7f8e19dd2ae1006e);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift0);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_431704394b408b0abffc0234971b8be5);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlBackslash);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_257c8c39adeb20891e0f1b8f027f234c);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlSquareClose);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a01ebad1e3bf70395fb9048376f432d);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlCircumflex);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fbe5f5f37154e822ada15ea0282ec73);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlUnderscore);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_left);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_Left);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_right);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_Right);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_up);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_Up);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_down);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_Down);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_home);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_Home);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_End);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_insert);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_Insert);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_Delete);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_pageup);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_PageUp);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_pagedown);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_PageDown);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_d37cb692cfe4d8063be31b713836fe0b);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlLeft);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_a99e06b9bd98e45e9db91e3181d31a7e);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlRight);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_d84ba25c0612e7399a8eab5c72b46692);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlUp);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_fca3886d2d02e281dd103d1f67e5f371);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlDown);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_6af762a7f6deb81671c013fe563da8bf);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlHome);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_b41bdc720dbf1ea271225db5c38d9cad);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlEnd);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_e88412426d7bfb8028eee70a7621c4d3);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlInsert);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_782e50f7df1b384ae0398e545ad84467);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlDelete);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_237948707709a2b7669cf75787cbbda7);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlPageUp);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e99e0d5448b2313e314549c7b443122);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlPageDown);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_f410f914ee587d62c889ae9a709b3342);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftLeft);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_6bbaff8e334e51a2e117608cd70dd79b);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftRight);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_f78ad742b430aa14baef127b1b29318c);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftUp);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf339dbdc18919c80363cffadf0016d6);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftDown);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b11a7fd656eb00b43cabddd345e97ce);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftHome);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ba3322bed4d34dbafbbe1c8b4a7dde1);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftEnd);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_digest_8730e5ddae8f9a6f8616f1660f9540f3);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftInsert);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed8e8c6a3ce854e35441b2b12c704727);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftDelete);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_digest_70a96ac626dd38c9abbf118cccd7ed2e);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftPageUp);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fabe4c48a3cc228908247a6d933cb17);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftPageDown);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_digest_017e53923b3a251543b7cad8878d418c);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftLeft);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_digest_cef459680f635742f259a0aeb4e1c39a);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftRight);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d75097cc4846356c9ebad175b020429);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftUp);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_digest_2be4d47bbe791e881f959cf40b8af593);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftDown);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_digest_36f7b34d34ba7a4d04a3a3376e3cc240);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftHome);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_digest_cd2054bbfafdb2f296ccec8e59de9a02);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftEnd);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e0784eb25ca3cde966126537fa9bab0);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftInsert);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_digest_5059be596fa6b06862bb7a75a2d70e85);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftDelete);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae6babd8b0a1ba7a81b7a3b744a67cdd);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftPageUp);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_digest_adccd1be55646c031dd2d515393fd7e1);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftPageDown);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac6935a32730d8fc796ab576cb4b39c3);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_str_plain_BackTab);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_plain_f1);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_plain_F1);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_str_plain_f2);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_str_plain_F2);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_str_plain_f3);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_str_plain_F3);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_str_plain_f4);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_str_plain_F4);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_str_plain_f5);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_str_plain_F5);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_str_plain_f6);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_str_plain_F6);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_str_plain_f7);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_str_plain_F7);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_str_plain_f8);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_str_plain_F8);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_str_plain_f9);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_str_plain_F9);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_str_plain_f10);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_str_plain_F10);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_str_plain_f11);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_str_plain_F11);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_str_plain_f12);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_str_plain_F12);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_str_plain_f13);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_str_plain_F13);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_str_plain_f14);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_str_plain_F14);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_str_plain_f15);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_str_plain_F15);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_str_plain_f16);
mod_consts_hash[272] = DEEP_HASH(tstate, mod_consts.const_str_plain_F16);
mod_consts_hash[273] = DEEP_HASH(tstate, mod_consts.const_str_plain_f17);
mod_consts_hash[274] = DEEP_HASH(tstate, mod_consts.const_str_plain_F17);
mod_consts_hash[275] = DEEP_HASH(tstate, mod_consts.const_str_plain_f18);
mod_consts_hash[276] = DEEP_HASH(tstate, mod_consts.const_str_plain_F18);
mod_consts_hash[277] = DEEP_HASH(tstate, mod_consts.const_str_plain_f19);
mod_consts_hash[278] = DEEP_HASH(tstate, mod_consts.const_str_plain_F19);
mod_consts_hash[279] = DEEP_HASH(tstate, mod_consts.const_str_plain_f20);
mod_consts_hash[280] = DEEP_HASH(tstate, mod_consts.const_str_plain_F20);
mod_consts_hash[281] = DEEP_HASH(tstate, mod_consts.const_str_plain_f21);
mod_consts_hash[282] = DEEP_HASH(tstate, mod_consts.const_str_plain_F21);
mod_consts_hash[283] = DEEP_HASH(tstate, mod_consts.const_str_plain_f22);
mod_consts_hash[284] = DEEP_HASH(tstate, mod_consts.const_str_plain_F22);
mod_consts_hash[285] = DEEP_HASH(tstate, mod_consts.const_str_plain_f23);
mod_consts_hash[286] = DEEP_HASH(tstate, mod_consts.const_str_plain_F23);
mod_consts_hash[287] = DEEP_HASH(tstate, mod_consts.const_str_plain_f24);
mod_consts_hash[288] = DEEP_HASH(tstate, mod_consts.const_str_plain_F24);
mod_consts_hash[289] = DEEP_HASH(tstate, mod_consts.const_str_digest_3456caec15976e53fb582dbd62266b48);
mod_consts_hash[290] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF1);
mod_consts_hash[291] = DEEP_HASH(tstate, mod_consts.const_str_digest_1a5c895a2946da8e659171043dcf75e7);
mod_consts_hash[292] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF2);
mod_consts_hash[293] = DEEP_HASH(tstate, mod_consts.const_str_digest_d238fda937093c760f3fa6d72dacedec);
mod_consts_hash[294] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF3);
mod_consts_hash[295] = DEEP_HASH(tstate, mod_consts.const_str_digest_b807a75f132476c5ec27d2911a6d64b5);
mod_consts_hash[296] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF4);
mod_consts_hash[297] = DEEP_HASH(tstate, mod_consts.const_str_digest_c2482fd31b687ff4e24286c169fa1717);
mod_consts_hash[298] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF5);
mod_consts_hash[299] = DEEP_HASH(tstate, mod_consts.const_str_digest_43c554db18e5fe0c223e540327f24d8b);
mod_consts_hash[300] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF6);
mod_consts_hash[301] = DEEP_HASH(tstate, mod_consts.const_str_digest_f8d028f5ba24b63110ee819fd44959de);
mod_consts_hash[302] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF7);
mod_consts_hash[303] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f9e59cf4bfaf19fcd7aa001a8d759d6);
mod_consts_hash[304] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF8);
mod_consts_hash[305] = DEEP_HASH(tstate, mod_consts.const_str_digest_0a62835b93442cb993cd2703404236ff);
mod_consts_hash[306] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF9);
mod_consts_hash[307] = DEEP_HASH(tstate, mod_consts.const_str_digest_f4ef1695cb0efa40d130e9a802b19071);
mod_consts_hash[308] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF10);
mod_consts_hash[309] = DEEP_HASH(tstate, mod_consts.const_str_digest_abcc99939cc338628ab23008b7fec2b6);
mod_consts_hash[310] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF11);
mod_consts_hash[311] = DEEP_HASH(tstate, mod_consts.const_str_digest_77f7668d3252510b6a9391c58c0e2d45);
mod_consts_hash[312] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF12);
mod_consts_hash[313] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a03cf659c2772878eeb7e792edf9d53);
mod_consts_hash[314] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF13);
mod_consts_hash[315] = DEEP_HASH(tstate, mod_consts.const_str_digest_80c75c1c9cc2fd2f76cd3c22cd4ada3c);
mod_consts_hash[316] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF14);
mod_consts_hash[317] = DEEP_HASH(tstate, mod_consts.const_str_digest_a86dfe64219a1890ed99cf4ba38083a0);
mod_consts_hash[318] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF15);
mod_consts_hash[319] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd6b59ceb22f4e14e36db67cd0c37c23);
mod_consts_hash[320] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF16);
mod_consts_hash[321] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e6fbdd64f7992c012459cca431e1f90);
mod_consts_hash[322] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF17);
mod_consts_hash[323] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c5f92411617856116fa927c399dd545);
mod_consts_hash[324] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF18);
mod_consts_hash[325] = DEEP_HASH(tstate, mod_consts.const_str_digest_72ce5d7b5913db12fa2c8303f2abbe71);
mod_consts_hash[326] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF19);
mod_consts_hash[327] = DEEP_HASH(tstate, mod_consts.const_str_digest_04e1496d756f156f62cfb92a15e54dbc);
mod_consts_hash[328] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF20);
mod_consts_hash[329] = DEEP_HASH(tstate, mod_consts.const_str_digest_06d18f0f3ce62ffd30b1bb6dfbd9eed0);
mod_consts_hash[330] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF21);
mod_consts_hash[331] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc76c10d5f24a618321c7ca5216e907a);
mod_consts_hash[332] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF22);
mod_consts_hash[333] = DEEP_HASH(tstate, mod_consts.const_str_digest_f38fd246aff961e4bf6ccdd7cf2f50e5);
mod_consts_hash[334] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF23);
mod_consts_hash[335] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab944a33bed9ea53dd116d2906a6cf64);
mod_consts_hash[336] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF24);
mod_consts_hash[337] = DEEP_HASH(tstate, mod_consts.const_str_angle_any);
mod_consts_hash[338] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[339] = DEEP_HASH(tstate, mod_consts.const_str_digest_0998c7a60f43616ce9fd3b2f9338a53b);
mod_consts_hash[340] = DEEP_HASH(tstate, mod_consts.const_str_plain_ScrollUp);
mod_consts_hash[341] = DEEP_HASH(tstate, mod_consts.const_str_digest_14163513979fb3132ace058feff35177);
mod_consts_hash[342] = DEEP_HASH(tstate, mod_consts.const_str_plain_ScrollDown);
mod_consts_hash[343] = DEEP_HASH(tstate, mod_consts.const_str_angle_ignore);
mod_consts_hash[344] = DEEP_HASH(tstate, mod_consts.const_str_plain_Ignore);
mod_consts_hash[345] = DEEP_HASH(tstate, mod_consts.const_str_digest_14a9d0454d43784e4753de1157591232);
mod_consts_hash[346] = DEEP_HASH(tstate, mod_consts.const_str_plain_ControlSpace);
mod_consts_hash[347] = DEEP_HASH(tstate, mod_consts.const_str_plain_tab);
mod_consts_hash[348] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tab);
mod_consts_hash[349] = DEEP_HASH(tstate, mod_consts.const_str_plain_space);
mod_consts_hash[350] = DEEP_HASH(tstate, mod_consts.const_str_plain_Space);
mod_consts_hash[351] = DEEP_HASH(tstate, mod_consts.const_str_plain_enter);
mod_consts_hash[352] = DEEP_HASH(tstate, mod_consts.const_str_plain_Enter);
mod_consts_hash[353] = DEEP_HASH(tstate, mod_consts.const_str_plain_backspace);
mod_consts_hash[354] = DEEP_HASH(tstate, mod_consts.const_str_plain_Backspace);
mod_consts_hash[355] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftControlLeft);
mod_consts_hash[356] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftControlRight);
mod_consts_hash[357] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftControlHome);
mod_consts_hash[358] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftControlEnd);
mod_consts_hash[359] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[360] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[361] = DEEP_HASH(tstate, mod_consts.const_dict_3db02825e119933ad84c8240dcfceff7);
mod_consts_hash[362] = DEEP_HASH(tstate, mod_consts.const_dict_85bb3133f04b00be40b1b77179d61c6b);
mod_consts_hash[363] = DEEP_HASH(tstate, mod_consts.const_dict_db33bfb71a490d0f03cc53d9f182e628);
mod_consts_hash[364] = DEEP_HASH(tstate, mod_consts.const_dict_8759e1a9632c93f20e44ed4b7c96f5bc);
mod_consts_hash[365] = DEEP_HASH(tstate, mod_consts.const_dict_d3244e89f9ca1765029e9c2ca01922d7);
mod_consts_hash[366] = DEEP_HASH(tstate, mod_consts.const_dict_420e509c618028b64be4c57c39d7009d);
mod_consts_hash[367] = DEEP_HASH(tstate, mod_consts.const_dict_778375f2fc1409fb1258428f30384592);
mod_consts_hash[368] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_key_aliases);
mod_consts_hash[369] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_tuple);
mod_consts_hash[370] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_key);
mod_consts_hash[371] = DEEP_HASH(tstate, mod_consts.const_dict_4c27da9b681bf103a76c2e7b9e555d46);
mod_consts_hash[372] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_to_character);
mod_consts_hash[373] = DEEP_HASH(tstate, mod_consts.const_dict_56acd67f60b561438df177796104f77c);
mod_consts_hash[374] = DEEP_HASH(tstate, mod_consts.const_dict_a36f3c8d8bfe682f9cf8524c46e2cebb);
mod_consts_hash[375] = DEEP_HASH(tstate, mod_consts.const_str_plain__normalize_key_list);
mod_consts_hash[376] = DEEP_HASH(tstate, mod_consts.const_str_digest_62916240d0fb251425567b8f8be2a533);
mod_consts_hash[377] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_key_tuple);
mod_consts_hash[378] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c5aacb1c60164b499c2fe2c86db96bf);
mod_consts_hash[379] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[380] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_character_str_plain_key_tuple);
mod_consts_hash[381] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple);
mod_consts_hash[382] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_keys_str_plain_keys_list_tuple);
mod_consts_hash[383] = DEEP_HASH(tstate, mod_consts.const_tuple_4a06602db72648341b4943d611e7f0e2_tuple);
mod_consts_hash[384] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_str_underscore_str_plain_separator_tuple);
mod_consts_hash[385] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
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
void checkModuleConstants_textual$keys(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_TO_UNICODE_NAME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KEY_TO_UNICODE_NAME);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_fad85658383c0df97583f43512ef2f8a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fad85658383c0df97583f43512ef2f8a);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_ALIASES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KEY_ALIASES);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_e7afabebf8ef1440b03add46db6f004e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e7afabebf8ef1440b03add46db6f004e);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_DISPLAY_ALIASES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KEY_DISPLAY_ALIASES);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_REPLACED_KEYS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REPLACED_KEYS);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_unicode_name_from_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_unicode_name_from_key);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_unicodedata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unicodedata);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_lookup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lookup);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_unicode_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unicode_name);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_isprintable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isprintable);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_622fb5079f158f8619f680599fb53997));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_622fb5079f158f8619f680599fb53997);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_rpartition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rpartition);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_43_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_43_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_str_space_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_underscore_str_space_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_upper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_upper);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef727271d3ddfc637356d00009a0aae8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ef727271d3ddfc637356d00009a0aae8);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_isalnum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isalnum);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_45_str_underscore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_45_str_underscore_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_space_str_underscore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_space_str_underscore_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_ASCII_KEY_NAMES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ASCII_KEY_NAMES);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c9b049c78dfc9a5e31df16c92131846));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2c9b049c78dfc9a5e31df16c92131846);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_44_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_44_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_chr_44));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_44);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_70f308a0b368541cf3fcbc377634721c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_70f308a0b368541cf3fcbc377634721c);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__character_to_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__character_to_key);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_257413b475337c395e105c79423b6180));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_257413b475337c395e105c79423b6180);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enum);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Enum_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Enum_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_Enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Enum);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lru_cache);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_Keys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Keys);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_4bd1e91230116e9da2a8532fbb7fd77b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4bd1e91230116e9da2a8532fbb7fd77b);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_b48fc827c9b8da35821f0989484cdb78));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b48fc827c9b8da35821f0989484cdb78);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_int_pos_9));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_9);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_f40af1456abfb531c34a52fd4ceba45c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f40af1456abfb531c34a52fd4ceba45c);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_escape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_escape);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_Escape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Escape);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca5753c417e0ecbf89e3bb0c68d1babf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca5753c417e0ecbf89e3bb0c68d1babf);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftEscape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShiftEscape);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_Return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Return);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_30d3e1330cbd1108ff6954a7d6319f57));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30d3e1330cbd1108ff6954a7d6319f57);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlAt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlAt);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_bcedb8f265204c78ead3fe8ea7de2934));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bcedb8f265204c78ead3fe8ea7de2934);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlA));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlA);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_0dffc11c55eb16445b34ac17605839de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0dffc11c55eb16445b34ac17605839de);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlB));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlB);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca425b260b4514d6b265bb3b8c379fee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca425b260b4514d6b265bb3b8c379fee);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlC);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc8a1095fcf389f33726dff551a19934));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc8a1095fcf389f33726dff551a19934);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlD);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b62260542bdd7282ea74b8fdc7b67b8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b62260542bdd7282ea74b8fdc7b67b8);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlE);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_ec0e71e9b6b6b452a1d4f75267b20b56));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ec0e71e9b6b6b452a1d4f75267b20b56);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcd74d9b89afb543d307964126ae6e53));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcd74d9b89afb543d307964126ae6e53);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlG);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_7607605efc9364fb0dad017b75b4155f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7607605efc9364fb0dad017b75b4155f);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlH);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_57ab7d99a30021e541d9f0574dd5eb0e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_57ab7d99a30021e541d9f0574dd5eb0e);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlI);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1090ebf138eab0b3a481ac0a5170741));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e1090ebf138eab0b3a481ac0a5170741);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlJ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlJ);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb16a2df0c12c1a66ce902ad4b3115b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb16a2df0c12c1a66ce902ad4b3115b3);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlK);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_408394bc7cbb98d5dba63ec1fc0030f8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_408394bc7cbb98d5dba63ec1fc0030f8);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlL);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_00aee79b629314f5bd54cf77d9838075));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_00aee79b629314f5bd54cf77d9838075);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlM);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_406591cf1960a73b2489c7acdf934cd8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_406591cf1960a73b2489c7acdf934cd8);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlN);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_2cc9b10a86c82745acd0c3f49d4d1380));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2cc9b10a86c82745acd0c3f49d4d1380);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlO);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca73df66d4de29cb1deb57c67bf67263));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca73df66d4de29cb1deb57c67bf67263);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlP);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd36da76c3d170d25d5117d1c097b2fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd36da76c3d170d25d5117d1c097b2fb);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlQ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlQ);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_c78d7bca3c45e82cd28b8b58cab7f9dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c78d7bca3c45e82cd28b8b58cab7f9dd);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlR);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_f1708b51f222981da897333c41801eaa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f1708b51f222981da897333c41801eaa);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlS);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_448ef0fc0f8a5f6bfd07152d510ea9fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_448ef0fc0f8a5f6bfd07152d510ea9fc);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlT);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_45620439f749c050a7dd80c8cef47abe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45620439f749c050a7dd80c8cef47abe);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlU));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlU);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_0301e485e7519b6fa19445c2b272d053));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0301e485e7519b6fa19445c2b272d053);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlV));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlV);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_85e451786b6ffa3c1045314e0c350aab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85e451786b6ffa3c1045314e0c350aab);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlW);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4e03dfd9712f257a953981cf0934fbd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d4e03dfd9712f257a953981cf0934fbd);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlX);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_34b20b541ca4a9eb915d76ea01fc0f15));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34b20b541ca4a9eb915d76ea01fc0f15);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlY);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_67c801cd21173604beea7e3ebb818afe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_67c801cd21173604beea7e3ebb818afe);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlZ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlZ);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_42fa8ff487466d7bb8f1d4388bdc768d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_42fa8ff487466d7bb8f1d4388bdc768d);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_Control1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Control1);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_e9f5a3b11239ef392f01e5ab59eaffb6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e9f5a3b11239ef392f01e5ab59eaffb6);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_Control2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Control2);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5ef4f90d01803ae1e18a8e9df225244));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a5ef4f90d01803ae1e18a8e9df225244);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_Control3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Control3);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed21b8632b9e892910a8e6dde81031b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed21b8632b9e892910a8e6dde81031b4);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_Control4));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Control4);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_6400a030fac0aa2c40dcc6d4f1387f2a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6400a030fac0aa2c40dcc6d4f1387f2a);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_Control5));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Control5);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e3f212ff6ec155d7f48eae4397dbd7c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e3f212ff6ec155d7f48eae4397dbd7c);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_Control6));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Control6);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_179f3f41d82658e5ec92a1de560b8505));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_179f3f41d82658e5ec92a1de560b8505);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_Control7));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Control7);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_7f5046c15296ca1327176648c6cc3d18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7f5046c15296ca1327176648c6cc3d18);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_Control8));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Control8);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ed0156ab039d7d85fc6f9a57b8c6dd1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ed0156ab039d7d85fc6f9a57b8c6dd1);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_Control9));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Control9);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_8da22a7738041978dfc95fae3b00b310));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8da22a7738041978dfc95fae3b00b310);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_Control0));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Control0);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fdae57bf403add22eff303712d037c4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fdae57bf403add22eff303712d037c4);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShift1);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c9b772786429e726d4c8218f450fcf3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c9b772786429e726d4c8218f450fcf3);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShift2);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_876025e2bdbb248b660b8f76bef521f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_876025e2bdbb248b660b8f76bef521f1);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShift3);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_6bbf38777794fd631d769a40a4020594));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6bbf38777794fd631d769a40a4020594);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift4));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShift4);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_36dd1a6def72601031206d28a4a88946));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36dd1a6def72601031206d28a4a88946);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift5));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShift5);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_467ee2171159545db73ad7f7aa5b29bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_467ee2171159545db73ad7f7aa5b29bf);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift6));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShift6);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c69d0b6d9fa3ee68846db89bd689880));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2c69d0b6d9fa3ee68846db89bd689880);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift7));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShift7);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_3dc6929fcb5c8346df80c27471ea02b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3dc6929fcb5c8346df80c27471ea02b6);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift8));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShift8);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fb7296c639fe027cbd36ba3629afc50));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fb7296c639fe027cbd36ba3629afc50);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift9));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShift9);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_f4cac00956dec08c7f8e19dd2ae1006e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f4cac00956dec08c7f8e19dd2ae1006e);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShift0));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShift0);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_431704394b408b0abffc0234971b8be5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_431704394b408b0abffc0234971b8be5);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlBackslash));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlBackslash);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_257c8c39adeb20891e0f1b8f027f234c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_257c8c39adeb20891e0f1b8f027f234c);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlSquareClose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlSquareClose);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a01ebad1e3bf70395fb9048376f432d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a01ebad1e3bf70395fb9048376f432d);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlCircumflex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlCircumflex);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fbe5f5f37154e822ada15ea0282ec73));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fbe5f5f37154e822ada15ea0282ec73);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlUnderscore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlUnderscore);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_left));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_left);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_Left));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Left);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_right));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_right);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_Right));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Right);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_up));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_up);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_Up));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Up);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_down));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_down);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_Down));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Down);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_home));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_home);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_Home));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Home);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_End));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_End);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_insert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_insert);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_Insert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Insert);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delete);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_Delete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Delete);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_pageup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pageup);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_PageUp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PageUp);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_pagedown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pagedown);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_PageDown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PageDown);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_d37cb692cfe4d8063be31b713836fe0b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d37cb692cfe4d8063be31b713836fe0b);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlLeft));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlLeft);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_a99e06b9bd98e45e9db91e3181d31a7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a99e06b9bd98e45e9db91e3181d31a7e);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlRight));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlRight);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_d84ba25c0612e7399a8eab5c72b46692));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d84ba25c0612e7399a8eab5c72b46692);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlUp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlUp);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_fca3886d2d02e281dd103d1f67e5f371));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fca3886d2d02e281dd103d1f67e5f371);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlDown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlDown);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_6af762a7f6deb81671c013fe563da8bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6af762a7f6deb81671c013fe563da8bf);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlHome));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlHome);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_b41bdc720dbf1ea271225db5c38d9cad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b41bdc720dbf1ea271225db5c38d9cad);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlEnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlEnd);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_e88412426d7bfb8028eee70a7621c4d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e88412426d7bfb8028eee70a7621c4d3);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlInsert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlInsert);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_782e50f7df1b384ae0398e545ad84467));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_782e50f7df1b384ae0398e545ad84467);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlDelete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlDelete);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_237948707709a2b7669cf75787cbbda7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_237948707709a2b7669cf75787cbbda7);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlPageUp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlPageUp);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e99e0d5448b2313e314549c7b443122));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e99e0d5448b2313e314549c7b443122);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlPageDown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlPageDown);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_f410f914ee587d62c889ae9a709b3342));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f410f914ee587d62c889ae9a709b3342);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftLeft));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShiftLeft);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_6bbaff8e334e51a2e117608cd70dd79b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6bbaff8e334e51a2e117608cd70dd79b);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftRight));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShiftRight);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_f78ad742b430aa14baef127b1b29318c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f78ad742b430aa14baef127b1b29318c);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftUp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShiftUp);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf339dbdc18919c80363cffadf0016d6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf339dbdc18919c80363cffadf0016d6);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftDown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShiftDown);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b11a7fd656eb00b43cabddd345e97ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b11a7fd656eb00b43cabddd345e97ce);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftHome));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShiftHome);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ba3322bed4d34dbafbbe1c8b4a7dde1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ba3322bed4d34dbafbbe1c8b4a7dde1);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftEnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShiftEnd);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_digest_8730e5ddae8f9a6f8616f1660f9540f3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8730e5ddae8f9a6f8616f1660f9540f3);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftInsert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShiftInsert);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed8e8c6a3ce854e35441b2b12c704727));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed8e8c6a3ce854e35441b2b12c704727);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftDelete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShiftDelete);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_digest_70a96ac626dd38c9abbf118cccd7ed2e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_70a96ac626dd38c9abbf118cccd7ed2e);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftPageUp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShiftPageUp);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fabe4c48a3cc228908247a6d933cb17));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2fabe4c48a3cc228908247a6d933cb17);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftPageDown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShiftPageDown);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_digest_017e53923b3a251543b7cad8878d418c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_017e53923b3a251543b7cad8878d418c);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftLeft));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShiftLeft);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_digest_cef459680f635742f259a0aeb4e1c39a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cef459680f635742f259a0aeb4e1c39a);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftRight));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShiftRight);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d75097cc4846356c9ebad175b020429));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d75097cc4846356c9ebad175b020429);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftUp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShiftUp);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_digest_2be4d47bbe791e881f959cf40b8af593));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2be4d47bbe791e881f959cf40b8af593);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftDown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShiftDown);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_digest_36f7b34d34ba7a4d04a3a3376e3cc240));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36f7b34d34ba7a4d04a3a3376e3cc240);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftHome));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShiftHome);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_digest_cd2054bbfafdb2f296ccec8e59de9a02));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cd2054bbfafdb2f296ccec8e59de9a02);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftEnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShiftEnd);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e0784eb25ca3cde966126537fa9bab0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e0784eb25ca3cde966126537fa9bab0);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftInsert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShiftInsert);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_digest_5059be596fa6b06862bb7a75a2d70e85));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5059be596fa6b06862bb7a75a2d70e85);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftDelete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShiftDelete);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae6babd8b0a1ba7a81b7a3b744a67cdd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae6babd8b0a1ba7a81b7a3b744a67cdd);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftPageUp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShiftPageUp);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_digest_adccd1be55646c031dd2d515393fd7e1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_adccd1be55646c031dd2d515393fd7e1);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlShiftPageDown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlShiftPageDown);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac6935a32730d8fc796ab576cb4b39c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac6935a32730d8fc796ab576cb4b39c3);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_str_plain_BackTab));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BackTab);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_plain_f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f1);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_plain_F1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F1);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_str_plain_f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f2);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_str_plain_F2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F2);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_str_plain_f3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f3);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_str_plain_F3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F3);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_str_plain_f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f4);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_str_plain_F4));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F4);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_str_plain_f5));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f5);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_str_plain_F5));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F5);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_str_plain_f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f6);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_str_plain_F6));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F6);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_str_plain_f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f7);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_str_plain_F7));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F7);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_str_plain_f8));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f8);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_str_plain_F8));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F8);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_str_plain_f9));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f9);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_str_plain_F9));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F9);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_str_plain_f10));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f10);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_str_plain_F10));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F10);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_str_plain_f11));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f11);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_str_plain_F11));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F11);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_str_plain_f12));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f12);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_str_plain_F12));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F12);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_str_plain_f13));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f13);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_str_plain_F13));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F13);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_str_plain_f14));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f14);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_str_plain_F14));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F14);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_str_plain_f15));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f15);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_str_plain_F15));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F15);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_str_plain_f16));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f16);
assert(mod_consts_hash[272] == DEEP_HASH(tstate, mod_consts.const_str_plain_F16));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F16);
assert(mod_consts_hash[273] == DEEP_HASH(tstate, mod_consts.const_str_plain_f17));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f17);
assert(mod_consts_hash[274] == DEEP_HASH(tstate, mod_consts.const_str_plain_F17));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F17);
assert(mod_consts_hash[275] == DEEP_HASH(tstate, mod_consts.const_str_plain_f18));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f18);
assert(mod_consts_hash[276] == DEEP_HASH(tstate, mod_consts.const_str_plain_F18));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F18);
assert(mod_consts_hash[277] == DEEP_HASH(tstate, mod_consts.const_str_plain_f19));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f19);
assert(mod_consts_hash[278] == DEEP_HASH(tstate, mod_consts.const_str_plain_F19));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F19);
assert(mod_consts_hash[279] == DEEP_HASH(tstate, mod_consts.const_str_plain_f20));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f20);
assert(mod_consts_hash[280] == DEEP_HASH(tstate, mod_consts.const_str_plain_F20));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F20);
assert(mod_consts_hash[281] == DEEP_HASH(tstate, mod_consts.const_str_plain_f21));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f21);
assert(mod_consts_hash[282] == DEEP_HASH(tstate, mod_consts.const_str_plain_F21));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F21);
assert(mod_consts_hash[283] == DEEP_HASH(tstate, mod_consts.const_str_plain_f22));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f22);
assert(mod_consts_hash[284] == DEEP_HASH(tstate, mod_consts.const_str_plain_F22));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F22);
assert(mod_consts_hash[285] == DEEP_HASH(tstate, mod_consts.const_str_plain_f23));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f23);
assert(mod_consts_hash[286] == DEEP_HASH(tstate, mod_consts.const_str_plain_F23));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F23);
assert(mod_consts_hash[287] == DEEP_HASH(tstate, mod_consts.const_str_plain_f24));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f24);
assert(mod_consts_hash[288] == DEEP_HASH(tstate, mod_consts.const_str_plain_F24));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F24);
assert(mod_consts_hash[289] == DEEP_HASH(tstate, mod_consts.const_str_digest_3456caec15976e53fb582dbd62266b48));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3456caec15976e53fb582dbd62266b48);
assert(mod_consts_hash[290] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF1);
assert(mod_consts_hash[291] == DEEP_HASH(tstate, mod_consts.const_str_digest_1a5c895a2946da8e659171043dcf75e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1a5c895a2946da8e659171043dcf75e7);
assert(mod_consts_hash[292] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF2);
assert(mod_consts_hash[293] == DEEP_HASH(tstate, mod_consts.const_str_digest_d238fda937093c760f3fa6d72dacedec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d238fda937093c760f3fa6d72dacedec);
assert(mod_consts_hash[294] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF3);
assert(mod_consts_hash[295] == DEEP_HASH(tstate, mod_consts.const_str_digest_b807a75f132476c5ec27d2911a6d64b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b807a75f132476c5ec27d2911a6d64b5);
assert(mod_consts_hash[296] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF4));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF4);
assert(mod_consts_hash[297] == DEEP_HASH(tstate, mod_consts.const_str_digest_c2482fd31b687ff4e24286c169fa1717));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c2482fd31b687ff4e24286c169fa1717);
assert(mod_consts_hash[298] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF5));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF5);
assert(mod_consts_hash[299] == DEEP_HASH(tstate, mod_consts.const_str_digest_43c554db18e5fe0c223e540327f24d8b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43c554db18e5fe0c223e540327f24d8b);
assert(mod_consts_hash[300] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF6));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF6);
assert(mod_consts_hash[301] == DEEP_HASH(tstate, mod_consts.const_str_digest_f8d028f5ba24b63110ee819fd44959de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f8d028f5ba24b63110ee819fd44959de);
assert(mod_consts_hash[302] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF7));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF7);
assert(mod_consts_hash[303] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f9e59cf4bfaf19fcd7aa001a8d759d6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f9e59cf4bfaf19fcd7aa001a8d759d6);
assert(mod_consts_hash[304] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF8));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF8);
assert(mod_consts_hash[305] == DEEP_HASH(tstate, mod_consts.const_str_digest_0a62835b93442cb993cd2703404236ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0a62835b93442cb993cd2703404236ff);
assert(mod_consts_hash[306] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF9));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF9);
assert(mod_consts_hash[307] == DEEP_HASH(tstate, mod_consts.const_str_digest_f4ef1695cb0efa40d130e9a802b19071));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f4ef1695cb0efa40d130e9a802b19071);
assert(mod_consts_hash[308] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF10));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF10);
assert(mod_consts_hash[309] == DEEP_HASH(tstate, mod_consts.const_str_digest_abcc99939cc338628ab23008b7fec2b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_abcc99939cc338628ab23008b7fec2b6);
assert(mod_consts_hash[310] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF11));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF11);
assert(mod_consts_hash[311] == DEEP_HASH(tstate, mod_consts.const_str_digest_77f7668d3252510b6a9391c58c0e2d45));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_77f7668d3252510b6a9391c58c0e2d45);
assert(mod_consts_hash[312] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF12));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF12);
assert(mod_consts_hash[313] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a03cf659c2772878eeb7e792edf9d53));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a03cf659c2772878eeb7e792edf9d53);
assert(mod_consts_hash[314] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF13));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF13);
assert(mod_consts_hash[315] == DEEP_HASH(tstate, mod_consts.const_str_digest_80c75c1c9cc2fd2f76cd3c22cd4ada3c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80c75c1c9cc2fd2f76cd3c22cd4ada3c);
assert(mod_consts_hash[316] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF14));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF14);
assert(mod_consts_hash[317] == DEEP_HASH(tstate, mod_consts.const_str_digest_a86dfe64219a1890ed99cf4ba38083a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a86dfe64219a1890ed99cf4ba38083a0);
assert(mod_consts_hash[318] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF15));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF15);
assert(mod_consts_hash[319] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd6b59ceb22f4e14e36db67cd0c37c23));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd6b59ceb22f4e14e36db67cd0c37c23);
assert(mod_consts_hash[320] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF16));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF16);
assert(mod_consts_hash[321] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e6fbdd64f7992c012459cca431e1f90));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e6fbdd64f7992c012459cca431e1f90);
assert(mod_consts_hash[322] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF17));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF17);
assert(mod_consts_hash[323] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c5f92411617856116fa927c399dd545));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c5f92411617856116fa927c399dd545);
assert(mod_consts_hash[324] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF18));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF18);
assert(mod_consts_hash[325] == DEEP_HASH(tstate, mod_consts.const_str_digest_72ce5d7b5913db12fa2c8303f2abbe71));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72ce5d7b5913db12fa2c8303f2abbe71);
assert(mod_consts_hash[326] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF19));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF19);
assert(mod_consts_hash[327] == DEEP_HASH(tstate, mod_consts.const_str_digest_04e1496d756f156f62cfb92a15e54dbc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04e1496d756f156f62cfb92a15e54dbc);
assert(mod_consts_hash[328] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF20));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF20);
assert(mod_consts_hash[329] == DEEP_HASH(tstate, mod_consts.const_str_digest_06d18f0f3ce62ffd30b1bb6dfbd9eed0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_06d18f0f3ce62ffd30b1bb6dfbd9eed0);
assert(mod_consts_hash[330] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF21));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF21);
assert(mod_consts_hash[331] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc76c10d5f24a618321c7ca5216e907a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fc76c10d5f24a618321c7ca5216e907a);
assert(mod_consts_hash[332] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF22));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF22);
assert(mod_consts_hash[333] == DEEP_HASH(tstate, mod_consts.const_str_digest_f38fd246aff961e4bf6ccdd7cf2f50e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f38fd246aff961e4bf6ccdd7cf2f50e5);
assert(mod_consts_hash[334] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF23));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF23);
assert(mod_consts_hash[335] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab944a33bed9ea53dd116d2906a6cf64));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab944a33bed9ea53dd116d2906a6cf64);
assert(mod_consts_hash[336] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlF24));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlF24);
assert(mod_consts_hash[337] == DEEP_HASH(tstate, mod_consts.const_str_angle_any));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_any);
assert(mod_consts_hash[338] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[339] == DEEP_HASH(tstate, mod_consts.const_str_digest_0998c7a60f43616ce9fd3b2f9338a53b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0998c7a60f43616ce9fd3b2f9338a53b);
assert(mod_consts_hash[340] == DEEP_HASH(tstate, mod_consts.const_str_plain_ScrollUp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ScrollUp);
assert(mod_consts_hash[341] == DEEP_HASH(tstate, mod_consts.const_str_digest_14163513979fb3132ace058feff35177));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_14163513979fb3132ace058feff35177);
assert(mod_consts_hash[342] == DEEP_HASH(tstate, mod_consts.const_str_plain_ScrollDown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ScrollDown);
assert(mod_consts_hash[343] == DEEP_HASH(tstate, mod_consts.const_str_angle_ignore));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_ignore);
assert(mod_consts_hash[344] == DEEP_HASH(tstate, mod_consts.const_str_plain_Ignore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Ignore);
assert(mod_consts_hash[345] == DEEP_HASH(tstate, mod_consts.const_str_digest_14a9d0454d43784e4753de1157591232));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_14a9d0454d43784e4753de1157591232);
assert(mod_consts_hash[346] == DEEP_HASH(tstate, mod_consts.const_str_plain_ControlSpace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ControlSpace);
assert(mod_consts_hash[347] == DEEP_HASH(tstate, mod_consts.const_str_plain_tab));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tab);
assert(mod_consts_hash[348] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tab));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tab);
assert(mod_consts_hash[349] == DEEP_HASH(tstate, mod_consts.const_str_plain_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_space);
assert(mod_consts_hash[350] == DEEP_HASH(tstate, mod_consts.const_str_plain_Space));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Space);
assert(mod_consts_hash[351] == DEEP_HASH(tstate, mod_consts.const_str_plain_enter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enter);
assert(mod_consts_hash[352] == DEEP_HASH(tstate, mod_consts.const_str_plain_Enter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Enter);
assert(mod_consts_hash[353] == DEEP_HASH(tstate, mod_consts.const_str_plain_backspace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_backspace);
assert(mod_consts_hash[354] == DEEP_HASH(tstate, mod_consts.const_str_plain_Backspace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Backspace);
assert(mod_consts_hash[355] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftControlLeft));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShiftControlLeft);
assert(mod_consts_hash[356] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftControlRight));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShiftControlRight);
assert(mod_consts_hash[357] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftControlHome));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShiftControlHome);
assert(mod_consts_hash[358] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShiftControlEnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ShiftControlEnd);
assert(mod_consts_hash[359] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[360] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[361] == DEEP_HASH(tstate, mod_consts.const_dict_3db02825e119933ad84c8240dcfceff7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3db02825e119933ad84c8240dcfceff7);
assert(mod_consts_hash[362] == DEEP_HASH(tstate, mod_consts.const_dict_85bb3133f04b00be40b1b77179d61c6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_85bb3133f04b00be40b1b77179d61c6b);
assert(mod_consts_hash[363] == DEEP_HASH(tstate, mod_consts.const_dict_db33bfb71a490d0f03cc53d9f182e628));
CHECK_OBJECT_DEEP(mod_consts.const_dict_db33bfb71a490d0f03cc53d9f182e628);
assert(mod_consts_hash[364] == DEEP_HASH(tstate, mod_consts.const_dict_8759e1a9632c93f20e44ed4b7c96f5bc));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8759e1a9632c93f20e44ed4b7c96f5bc);
assert(mod_consts_hash[365] == DEEP_HASH(tstate, mod_consts.const_dict_d3244e89f9ca1765029e9c2ca01922d7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d3244e89f9ca1765029e9c2ca01922d7);
assert(mod_consts_hash[366] == DEEP_HASH(tstate, mod_consts.const_dict_420e509c618028b64be4c57c39d7009d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_420e509c618028b64be4c57c39d7009d);
assert(mod_consts_hash[367] == DEEP_HASH(tstate, mod_consts.const_dict_778375f2fc1409fb1258428f30384592));
CHECK_OBJECT_DEEP(mod_consts.const_dict_778375f2fc1409fb1258428f30384592);
assert(mod_consts_hash[368] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_key_aliases));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_key_aliases);
assert(mod_consts_hash[369] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1024_tuple);
assert(mod_consts_hash[370] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_format_key);
assert(mod_consts_hash[371] == DEEP_HASH(tstate, mod_consts.const_dict_4c27da9b681bf103a76c2e7b9e555d46));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4c27da9b681bf103a76c2e7b9e555d46);
assert(mod_consts_hash[372] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_to_character));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key_to_character);
assert(mod_consts_hash[373] == DEEP_HASH(tstate, mod_consts.const_dict_56acd67f60b561438df177796104f77c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_56acd67f60b561438df177796104f77c);
assert(mod_consts_hash[374] == DEEP_HASH(tstate, mod_consts.const_dict_a36f3c8d8bfe682f9cf8524c46e2cebb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a36f3c8d8bfe682f9cf8524c46e2cebb);
assert(mod_consts_hash[375] == DEEP_HASH(tstate, mod_consts.const_str_plain__normalize_key_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__normalize_key_list);
assert(mod_consts_hash[376] == DEEP_HASH(tstate, mod_consts.const_str_digest_62916240d0fb251425567b8f8be2a533));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_62916240d0fb251425567b8f8be2a533);
assert(mod_consts_hash[377] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_key_tuple);
assert(mod_consts_hash[378] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c5aacb1c60164b499c2fe2c86db96bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c5aacb1c60164b499c2fe2c86db96bf);
assert(mod_consts_hash[379] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[380] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_character_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_character_str_plain_key_tuple);
assert(mod_consts_hash[381] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_tuple);
assert(mod_consts_hash[382] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_keys_str_plain_keys_list_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_keys_str_plain_keys_list_tuple);
assert(mod_consts_hash[383] == DEEP_HASH(tstate, mod_consts.const_tuple_4a06602db72648341b4943d611e7f0e2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4a06602db72648341b4943d611e7f0e2_tuple);
assert(mod_consts_hash[384] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_str_underscore_str_plain_separator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_str_underscore_str_plain_separator_tuple);
assert(mod_consts_hash[385] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
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
static PyObject *module_var_accessor_textual$keys$ASCII_KEY_NAMES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$keys->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$keys->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_ASCII_KEY_NAMES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$keys->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ASCII_KEY_NAMES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ASCII_KEY_NAMES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ASCII_KEY_NAMES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ASCII_KEY_NAMES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_ASCII_KEY_NAMES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_ASCII_KEY_NAMES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ASCII_KEY_NAMES);
    }

    return result;
}

static PyObject *module_var_accessor_textual$keys$Enum(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$keys->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$keys->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$keys->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
    }

    return result;
}

static PyObject *module_var_accessor_textual$keys$KEY_ALIASES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$keys->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$keys->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_ALIASES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$keys->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEY_ALIASES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEY_ALIASES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEY_ALIASES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEY_ALIASES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_ALIASES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_ALIASES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_ALIASES);
    }

    return result;
}

static PyObject *module_var_accessor_textual$keys$KEY_DISPLAY_ALIASES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$keys->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$keys->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_DISPLAY_ALIASES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$keys->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEY_DISPLAY_ALIASES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEY_DISPLAY_ALIASES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEY_DISPLAY_ALIASES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEY_DISPLAY_ALIASES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_DISPLAY_ALIASES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_DISPLAY_ALIASES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_DISPLAY_ALIASES);
    }

    return result;
}

static PyObject *module_var_accessor_textual$keys$KEY_NAME_REPLACEMENTS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$keys->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$keys->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$keys->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
    }

    return result;
}

static PyObject *module_var_accessor_textual$keys$KEY_TO_UNICODE_NAME(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$keys->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$keys->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_TO_UNICODE_NAME);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$keys->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEY_TO_UNICODE_NAME);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEY_TO_UNICODE_NAME, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEY_TO_UNICODE_NAME);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEY_TO_UNICODE_NAME, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_TO_UNICODE_NAME);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_TO_UNICODE_NAME);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_TO_UNICODE_NAME);
    }

    return result;
}

static PyObject *module_var_accessor_textual$keys$REPLACED_KEYS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$keys->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$keys->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_REPLACED_KEYS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$keys->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REPLACED_KEYS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REPLACED_KEYS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REPLACED_KEYS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REPLACED_KEYS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_REPLACED_KEYS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_REPLACED_KEYS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_REPLACED_KEYS);
    }

    return result;
}

static PyObject *module_var_accessor_textual$keys$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$keys->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$keys->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$keys->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$keys$_character_to_key(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$keys->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$keys->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain__character_to_key);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$keys->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__character_to_key);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__character_to_key, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__character_to_key);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__character_to_key, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain__character_to_key);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain__character_to_key);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__character_to_key);
    }

    return result;
}

static PyObject *module_var_accessor_textual$keys$_get_unicode_name_from_key(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$keys->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$keys->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain__get_unicode_name_from_key);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$keys->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_unicode_name_from_key);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_unicode_name_from_key, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_unicode_name_from_key);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_unicode_name_from_key, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain__get_unicode_name_from_key);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain__get_unicode_name_from_key);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_unicode_name_from_key);
    }

    return result;
}

static PyObject *module_var_accessor_textual$keys$lru_cache(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$keys->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$keys->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$keys->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lru_cache);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lru_cache, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lru_cache);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lru_cache, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }

    return result;
}

static PyObject *module_var_accessor_textual$keys$unicodedata(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$keys->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$keys->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$keys->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unicodedata);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unicodedata, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unicodedata);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unicodedata, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5840d542f102c2d46db47602c9319ec5;
static PyCodeObject *code_objects_e9955a7963f9c4f177c6dc0866663670;
static PyCodeObject *code_objects_82b7616740d130e5eed07994dc765c08;
static PyCodeObject *code_objects_2d726ac3c9c0d8090c3cd12fbfce9d52;
static PyCodeObject *code_objects_eeab22da607ca5a4234fdc2cccdbdd22;
static PyCodeObject *code_objects_1ef651646ce0b8e0429d3cdceb71f215;
static PyCodeObject *code_objects_bf5c5d87a4a5e688d6e18ea2e4ad0860;
static PyCodeObject *code_objects_45c14d3476b41db48c4cd27e0a7d1354;
static PyCodeObject *code_objects_2d4e746101dff9248d7cb0006de3daac;
static PyCodeObject *code_objects_5b17a6fa62fd94fdb24cdf35a60ebfbc;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_62916240d0fb251425567b8f8be2a533); CHECK_OBJECT(module_filename_obj);
code_objects_5840d542f102c2d46db47602c9319ec5 = MAKE_CODE_OBJECT(module_filename_obj, 366, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_257413b475337c395e105c79423b6180, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_key_tuple, NULL, 1, 0, 0);
code_objects_e9955a7963f9c4f177c6dc0866663670 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_0c5aacb1c60164b499c2fe2c86db96bf, mod_consts.const_str_digest_0c5aacb1c60164b499c2fe2c86db96bf, NULL, NULL, 0, 0, 0);
code_objects_82b7616740d130e5eed07994dc765c08 = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Keys, mod_consts.const_str_plain_Keys, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2d726ac3c9c0d8090c3cd12fbfce9d52 = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__character_to_key, mod_consts.const_str_plain__character_to_key, mod_consts.const_tuple_str_plain_character_str_plain_key_tuple, NULL, 1, 0, 0);
code_objects_eeab22da607ca5a4234fdc2cccdbdd22 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_key_aliases, mod_consts.const_str_plain__get_key_aliases, mod_consts.const_tuple_str_plain_key_tuple, NULL, 1, 0, 0);
code_objects_1ef651646ce0b8e0429d3cdceb71f215 = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_unicode_name_from_key, mod_consts.const_str_plain__get_unicode_name_from_key, mod_consts.const_tuple_str_plain_key_tuple, NULL, 1, 0, 0);
code_objects_bf5c5d87a4a5e688d6e18ea2e4ad0860 = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__normalize_key_list, mod_consts.const_str_plain__normalize_key_list, mod_consts.const_tuple_str_plain_keys_str_plain_keys_list_tuple, NULL, 1, 0, 0);
code_objects_45c14d3476b41db48c4cd27e0a7d1354 = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_format_key, mod_consts.const_str_plain_format_key, mod_consts.const_tuple_4a06602db72648341b4943d611e7f0e2_tuple, NULL, 1, 0, 0);
code_objects_2d4e746101dff9248d7cb0006de3daac = MAKE_CODE_OBJECT(module_filename_obj, 312, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_key_to_character, mod_consts.const_str_plain_key_to_character, mod_consts.const_tuple_str_plain_key_str_underscore_str_plain_separator_tuple, NULL, 1, 0, 0);
code_objects_5b17a6fa62fd94fdb24cdf35a60ebfbc = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_value, mod_consts.const_str_digest_f40af1456abfb531c34a52fd4ceba45c, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$keys$$$function__7__normalize_key_list$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$keys$$$function__1_value(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$keys$$$function__2__get_unicode_name_from_key(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$keys$$$function__3__get_key_aliases(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$keys$$$function__4_format_key(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$keys$$$function__5_key_to_character(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$keys$$$function__6__character_to_key(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$keys$$$function__7__normalize_key_list(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$keys$$$function__1_value(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$keys$$$function__1_value;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$keys$$$function__1_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$keys$$$function__1_value)) {
    Py_XDECREF(cache_frame_frame_textual$keys$$$function__1_value);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$keys$$$function__1_value == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$keys$$$function__1_value = MAKE_FUNCTION_FRAME(tstate, code_objects_5b17a6fa62fd94fdb24cdf35a60ebfbc, module_textual$keys, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$keys$$$function__1_value->m_type_description == NULL);
frame_frame_textual$keys$$$function__1_value = cache_frame_frame_textual$keys$$$function__1_value;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$keys$$$function__1_value);
assert(Py_REFCNT(frame_frame_textual$keys$$$function__1_value) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 19;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_textual$keys, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$keys$$$function__1_value, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$keys$$$function__1_value->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$keys$$$function__1_value, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$keys$$$function__1_value,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$keys$$$function__1_value == cache_frame_frame_textual$keys$$$function__1_value) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$keys$$$function__1_value);
    cache_frame_frame_textual$keys$$$function__1_value = NULL;
}

assertFrameObject(frame_frame_textual$keys$$$function__1_value);

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


static PyObject *impl_textual$keys$$$function__2__get_unicode_name_from_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_key = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$keys$$$function__2__get_unicode_name_from_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$keys$$$function__2__get_unicode_name_from_key = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$keys$$$function__2__get_unicode_name_from_key)) {
    Py_XDECREF(cache_frame_frame_textual$keys$$$function__2__get_unicode_name_from_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$keys$$$function__2__get_unicode_name_from_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$keys$$$function__2__get_unicode_name_from_key = MAKE_FUNCTION_FRAME(tstate, code_objects_1ef651646ce0b8e0429d3cdceb71f215, module_textual$keys, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$keys$$$function__2__get_unicode_name_from_key->m_type_description == NULL);
frame_frame_textual$keys$$$function__2__get_unicode_name_from_key = cache_frame_frame_textual$keys$$$function__2__get_unicode_name_from_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$keys$$$function__2__get_unicode_name_from_key);
assert(Py_REFCNT(frame_frame_textual$keys$$$function__2__get_unicode_name_from_key) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_textual$keys$KEY_TO_UNICODE_NAME(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEY_TO_UNICODE_NAME);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
CHECK_OBJECT(par_key);
tmp_args_element_value_2 = par_key;
frame_frame_textual$keys$$$function__2__get_unicode_name_from_key->m_frame.f_lineno = 281;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$keys$$$function__2__get_unicode_name_from_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$keys$$$function__2__get_unicode_name_from_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$keys$$$function__2__get_unicode_name_from_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$keys$$$function__2__get_unicode_name_from_key,
    type_description_1,
    par_key
);


// Release cached frame if used for exception.
if (frame_frame_textual$keys$$$function__2__get_unicode_name_from_key == cache_frame_frame_textual$keys$$$function__2__get_unicode_name_from_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$keys$$$function__2__get_unicode_name_from_key);
    cache_frame_frame_textual$keys$$$function__2__get_unicode_name_from_key = NULL;
}

assertFrameObject(frame_frame_textual$keys$$$function__2__get_unicode_name_from_key);

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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_key);
Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$keys$$$function__3__get_key_aliases(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_key = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$keys$$$function__3__get_key_aliases;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$keys$$$function__3__get_key_aliases = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$keys$$$function__3__get_key_aliases)) {
    Py_XDECREF(cache_frame_frame_textual$keys$$$function__3__get_key_aliases);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$keys$$$function__3__get_key_aliases == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$keys$$$function__3__get_key_aliases = MAKE_FUNCTION_FRAME(tstate, code_objects_eeab22da607ca5a4234fdc2cccdbdd22, module_textual$keys, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$keys$$$function__3__get_key_aliases->m_type_description == NULL);
frame_frame_textual$keys$$$function__3__get_key_aliases = cache_frame_frame_textual$keys$$$function__3__get_key_aliases;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$keys$$$function__3__get_key_aliases);
assert(Py_REFCNT(frame_frame_textual$keys$$$function__3__get_key_aliases) == 2);

// Framed code:
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_key);
tmp_list_element_1 = par_key;
tmp_add_expr_left_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_add_expr_left_1, 0, tmp_list_element_1);
tmp_expression_value_1 = module_var_accessor_textual$keys$KEY_ALIASES(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEY_ALIASES);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 286;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 286;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 0);
frame_frame_textual$keys$$$function__3__get_key_aliases->m_frame.f_lineno = 286;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_add_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 286;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$keys$$$function__3__get_key_aliases, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$keys$$$function__3__get_key_aliases->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$keys$$$function__3__get_key_aliases, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$keys$$$function__3__get_key_aliases,
    type_description_1,
    par_key
);


// Release cached frame if used for exception.
if (frame_frame_textual$keys$$$function__3__get_key_aliases == cache_frame_frame_textual$keys$$$function__3__get_key_aliases) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$keys$$$function__3__get_key_aliases);
    cache_frame_frame_textual$keys$$$function__3__get_key_aliases = NULL;
}

assertFrameObject(frame_frame_textual$keys$$$function__3__get_key_aliases);

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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_key);
Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$keys$$$function__4_format_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_key = python_pars[0];
PyObject *var_display_alias = NULL;
PyObject *var_original_key = NULL;
PyObject *var_tentative_unicode_name = NULL;
PyObject *var_unicode_name = NULL;
nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_textual$keys$$$function__4_format_key;
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
static struct Nuitka_FrameObject *cache_frame_frame_textual$keys$$$function__4_format_key = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$keys$$$function__4_format_key)) {
    Py_XDECREF(cache_frame_frame_textual$keys$$$function__4_format_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$keys$$$function__4_format_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$keys$$$function__4_format_key = MAKE_FUNCTION_FRAME(tstate, code_objects_45c14d3476b41db48c4cd27e0a7d1354, module_textual$keys, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$keys$$$function__4_format_key->m_type_description == NULL);
frame_frame_textual$keys$$$function__4_format_key = cache_frame_frame_textual$keys$$$function__4_format_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$keys$$$function__4_format_key);
assert(Py_REFCNT(frame_frame_textual$keys$$$function__4_format_key) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_textual$keys$KEY_DISPLAY_ALIASES(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEY_DISPLAY_ALIASES);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 295;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
frame_frame_textual$keys$$$function__4_format_key->m_frame.f_lineno = 295;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_display_alias == NULL);
var_display_alias = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_display_alias);
tmp_truth_name_1 = CHECK_IF_TRUE(var_display_alias);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooo";
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
CHECK_OBJECT(var_display_alias);
tmp_return_value = var_display_alias;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_2 = module_var_accessor_textual$keys$REPLACED_KEYS(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REPLACED_KEYS);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_2 = par_key;
CHECK_OBJECT(par_key);
tmp_args_element_value_3 = par_key;
frame_frame_textual$keys$$$function__4_format_key->m_frame.f_lineno = 299;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_original_key == NULL);
var_original_key = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_3 = module_var_accessor_textual$keys$_get_unicode_name_from_key(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_unicode_name_from_key);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 300;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_original_key);
tmp_args_element_value_4 = var_original_key;
frame_frame_textual$keys$$$function__4_format_key->m_frame.f_lineno = 300;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_tentative_unicode_name == NULL);
var_tentative_unicode_name = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
tmp_called_instance_1 = module_var_accessor_textual$keys$unicodedata(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 302;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_tentative_unicode_name);
tmp_args_element_value_5 = var_tentative_unicode_name;
frame_frame_textual$keys$$$function__4_format_key->m_frame.f_lineno = 302;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_lookup, tmp_args_element_value_5);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(var_unicode_name == NULL);
var_unicode_name = tmp_assign_source_5;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_6;
}
// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$keys$$$function__4_format_key, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$keys$$$function__4_format_key, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_KeyError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
    exception_lineno = 301;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$keys$$$function__4_format_key->m_frame)) {
        frame_frame_textual$keys$$$function__4_format_key->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
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
{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_try_except_1__unhandled_indicator;
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
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
int tmp_truth_name_2;
if (var_unicode_name == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicode_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 306;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = var_unicode_name;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_isprintable);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$keys$$$function__4_format_key->m_frame.f_lineno = 306;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 306;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
if (var_unicode_name == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicode_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 307;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_unicode_name;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;
branch_no_3:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$keys$$$function__4_format_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$keys$$$function__4_format_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$keys$$$function__4_format_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$keys$$$function__4_format_key,
    type_description_1,
    par_key,
    var_display_alias,
    var_original_key,
    var_tentative_unicode_name,
    var_unicode_name
);


// Release cached frame if used for exception.
if (frame_frame_textual$keys$$$function__4_format_key == cache_frame_frame_textual$keys$$$function__4_format_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$keys$$$function__4_format_key);
    cache_frame_frame_textual$keys$$$function__4_format_key = NULL;
}

assertFrameObject(frame_frame_textual$keys$$$function__4_format_key);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_tentative_unicode_name);
tmp_return_value = var_tentative_unicode_name;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_display_alias);
CHECK_OBJECT(var_display_alias);
Py_DECREF(var_display_alias);
var_display_alias = NULL;
Py_XDECREF(var_original_key);
var_original_key = NULL;
Py_XDECREF(var_tentative_unicode_name);
var_tentative_unicode_name = NULL;
Py_XDECREF(var_unicode_name);
var_unicode_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_display_alias);
var_display_alias = NULL;
Py_XDECREF(var_original_key);
var_original_key = NULL;
Py_XDECREF(var_tentative_unicode_name);
var_tentative_unicode_name = NULL;
Py_XDECREF(var_unicode_name);
var_unicode_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_key);
Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$keys$$$function__5_key_to_character(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_key = python_pars[0];
PyObject *var__ = NULL;
PyObject *var_separator = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$keys$$$function__5_key_to_character;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_textual$keys$$$function__5_key_to_character = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$keys$$$function__5_key_to_character)) {
    Py_XDECREF(cache_frame_frame_textual$keys$$$function__5_key_to_character);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$keys$$$function__5_key_to_character == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$keys$$$function__5_key_to_character = MAKE_FUNCTION_FRAME(tstate, code_objects_2d4e746101dff9248d7cb0006de3daac, module_textual$keys, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$keys$$$function__5_key_to_character->m_type_description == NULL);
frame_frame_textual$keys$$$function__5_key_to_character = cache_frame_frame_textual$keys$$$function__5_key_to_character;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$keys$$$function__5_key_to_character);
assert(Py_REFCNT(frame_frame_textual$keys$$$function__5_key_to_character) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_key);
tmp_expression_value_1 = par_key;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_rpartition);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_textual$keys$$$function__5_key_to_character->m_frame.f_lineno = 321;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_chr_43_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 321;
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 321;
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 321;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 321;
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
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_5);
var__ = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_separator == NULL);
Py_INCREF(tmp_assign_source_6);
var_separator = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = par_key;
    assert(old != NULL);
    par_key = tmp_assign_source_7;
    Py_INCREF(par_key);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_separator);
tmp_truth_name_1 = CHECK_IF_TRUE(var_separator);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooo";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_key);
tmp_len_arg_1 = par_key;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 1;
tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(par_key);
tmp_return_value = par_key;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
// Tried code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_expression_value_2 = module_var_accessor_textual$keys$unicodedata(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 330;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_lookup);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_expression_value_3 = module_var_accessor_textual$keys$KEY_TO_UNICODE_NAME(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEY_TO_UNICODE_NAME);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 330;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_key);
tmp_subscript_value_1 = par_key;
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 330;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
frame_frame_textual$keys$$$function__5_key_to_character->m_frame.f_lineno = 330;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$keys$$$function__5_key_to_character, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$keys$$$function__5_key_to_character, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_KeyError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
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
    exception_lineno = 329;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$keys$$$function__5_key_to_character->m_frame)) {
        frame_frame_textual$keys$$$function__5_key_to_character->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_5;
branch_no_3:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
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
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_4;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_4:;
// Tried code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
tmp_expression_value_4 = module_var_accessor_textual$keys$unicodedata(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 334;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_lookup);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(par_key);
tmp_expression_value_6 = par_key;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_replace);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 334;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
frame_frame_textual$keys$$$function__5_key_to_character->m_frame.f_lineno = 334;
tmp_expression_value_5 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_5, mod_consts.const_tuple_str_underscore_str_space_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 334;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_upper);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 334;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
frame_frame_textual$keys$$$function__5_key_to_character->m_frame.f_lineno = 334;
tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 334;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
frame_frame_textual$keys$$$function__5_key_to_character->m_frame.f_lineno = 334;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$keys$$$function__5_key_to_character, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$keys$$$function__5_key_to_character, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_KeyError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 333;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$keys$$$function__5_key_to_character->m_frame)) {
        frame_frame_textual$keys$$$function__5_key_to_character->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_7;
branch_no_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_6;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_6:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$keys$$$function__5_key_to_character, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$keys$$$function__5_key_to_character->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$keys$$$function__5_key_to_character, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$keys$$$function__5_key_to_character,
    type_description_1,
    par_key,
    var__,
    var_separator
);


// Release cached frame if used for exception.
if (frame_frame_textual$keys$$$function__5_key_to_character == cache_frame_frame_textual$keys$$$function__5_key_to_character) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$keys$$$function__5_key_to_character);
    cache_frame_frame_textual$keys$$$function__5_key_to_character = NULL;
}

assertFrameObject(frame_frame_textual$keys$$$function__5_key_to_character);

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
CHECK_OBJECT(par_key);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
par_key = NULL;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
CHECK_OBJECT(var_separator);
CHECK_OBJECT(var_separator);
Py_DECREF(var_separator);
var_separator = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_key);
par_key = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_separator);
var_separator = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

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


static PyObject *impl_textual$keys$$$function__6__character_to_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
PyObject *var_key = NULL;
struct Nuitka_FrameObject *frame_frame_textual$keys$$$function__6__character_to_key;
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
static struct Nuitka_FrameObject *cache_frame_frame_textual$keys$$$function__6__character_to_key = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$keys$$$function__6__character_to_key)) {
    Py_XDECREF(cache_frame_frame_textual$keys$$$function__6__character_to_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$keys$$$function__6__character_to_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$keys$$$function__6__character_to_key = MAKE_FUNCTION_FRAME(tstate, code_objects_2d726ac3c9c0d8090c3cd12fbfce9d52, module_textual$keys, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$keys$$$function__6__character_to_key->m_type_description == NULL);
frame_frame_textual$keys$$$function__6__character_to_key = cache_frame_frame_textual$keys$$$function__6__character_to_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$keys$$$function__6__character_to_key);
assert(Py_REFCNT(frame_frame_textual$keys$$$function__6__character_to_key) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_character);
tmp_expression_value_1 = par_character;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_isalnum);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$keys$$$function__6__character_to_key->m_frame.f_lineno = 346;
tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_textual$keys$unicodedata(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 349;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_1 = par_character;
frame_frame_textual$keys$$$function__6__character_to_key->m_frame.f_lineno = 349;
tmp_expression_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain_name, tmp_args_element_value_1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_textual$keys$$$function__6__character_to_key->m_frame.f_lineno = 349;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_replace);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_textual$keys$$$function__6__character_to_key->m_frame.f_lineno = 349;
tmp_expression_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_chr_45_str_underscore_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_replace);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_textual$keys$$$function__6__character_to_key->m_frame.f_lineno = 349;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_space_str_underscore_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(var_key == NULL);
var_key = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$keys$$$function__6__character_to_key, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$keys$$$function__6__character_to_key, exception_keeper_lineno_1);
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_5 = module_var_accessor_textual$keys$ASCII_KEY_NAMES(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ASCII_KEY_NAMES);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_2 = par_character;
CHECK_OBJECT(par_character);
tmp_args_element_value_3 = par_character;
frame_frame_textual$keys$$$function__6__character_to_key->m_frame.f_lineno = 352;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oo";
    goto try_except_handler_3;
}
assert(var_key == NULL);
var_key = tmp_assign_source_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 347;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$keys$$$function__6__character_to_key->m_frame)) {
        frame_frame_textual$keys$$$function__6__character_to_key->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_end_2:;
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
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_character);
tmp_assign_source_3 = par_character;
assert(var_key == NULL);
Py_INCREF(tmp_assign_source_3);
var_key = tmp_assign_source_3;
}
branch_end_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_6 = module_var_accessor_textual$keys$KEY_NAME_REPLACEMENTS(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 355;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_key);
tmp_args_element_value_4 = var_key;
CHECK_OBJECT(var_key);
tmp_args_element_value_5 = var_key;
frame_frame_textual$keys$$$function__6__character_to_key->m_frame.f_lineno = 355;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_key;
    assert(old != NULL);
    var_key = tmp_assign_source_4;
    Py_DECREF(old);
}

}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$keys$$$function__6__character_to_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$keys$$$function__6__character_to_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$keys$$$function__6__character_to_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$keys$$$function__6__character_to_key,
    type_description_1,
    par_character,
    var_key
);


// Release cached frame if used for exception.
if (frame_frame_textual$keys$$$function__6__character_to_key == cache_frame_frame_textual$keys$$$function__6__character_to_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$keys$$$function__6__character_to_key);
    cache_frame_frame_textual$keys$$$function__6__character_to_key = NULL;
}

assertFrameObject(frame_frame_textual$keys$$$function__6__character_to_key);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_key);
tmp_return_value = var_key;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_key);
CHECK_OBJECT(var_key);
Py_DECREF(var_key);
var_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_key);
var_key = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$keys$$$function__7__normalize_key_list(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_keys = python_pars[0];
PyObject *var_keys_list = NULL;
PyObject *outline_0_var_key = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$keys$$$function__7__normalize_key_list;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$keys$$$function__7__normalize_key_list = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$keys$$$function__7__normalize_key_list)) {
    Py_XDECREF(cache_frame_frame_textual$keys$$$function__7__normalize_key_list);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$keys$$$function__7__normalize_key_list == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$keys$$$function__7__normalize_key_list = MAKE_FUNCTION_FRAME(tstate, code_objects_bf5c5d87a4a5e688d6e18ea2e4ad0860, module_textual$keys, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$keys$$$function__7__normalize_key_list->m_type_description == NULL);
frame_frame_textual$keys$$$function__7__normalize_key_list = cache_frame_frame_textual$keys$$$function__7__normalize_key_list;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$keys$$$function__7__normalize_key_list);
assert(Py_REFCNT(frame_frame_textual$keys$$$function__7__normalize_key_list) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_keys);
tmp_expression_value_1 = par_keys;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_textual$keys$$$function__7__normalize_key_list->m_frame.f_lineno = 365;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_chr_44_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oo";
exception_lineno = 365;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_key;
    outline_0_var_key = tmp_assign_source_5;
    Py_INCREF(outline_0_var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_key);
tmp_expression_value_2 = outline_0_var_key;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_strip);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "oo";
    goto try_except_handler_3;
}
frame_frame_textual$keys$$$function__7__normalize_key_list->m_frame.f_lineno = 365;
tmp_append_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "oo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "oo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_1);
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
Py_XDECREF(outline_0_var_key);
outline_0_var_key = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_key);
outline_0_var_key = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 365;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_keys_list == NULL);
var_keys_list = tmp_assign_source_1;
}
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_chr_44;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_keys_list);
tmp_iter_arg_2 = var_keys_list;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_6;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_iterable_value_1 = MAKE_GENERATOR_textual$keys$$$function__7__normalize_key_list$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$keys$$$function__7__normalize_key_list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$keys$$$function__7__normalize_key_list->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$keys$$$function__7__normalize_key_list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$keys$$$function__7__normalize_key_list,
    type_description_1,
    par_keys,
    var_keys_list
);


// Release cached frame if used for exception.
if (frame_frame_textual$keys$$$function__7__normalize_key_list == cache_frame_frame_textual$keys$$$function__7__normalize_key_list) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$keys$$$function__7__normalize_key_list);
    cache_frame_frame_textual$keys$$$function__7__normalize_key_list = NULL;
}

assertFrameObject(frame_frame_textual$keys$$$function__7__normalize_key_list);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_keys_list);
CHECK_OBJECT(var_keys_list);
Py_DECREF(var_keys_list);
var_keys_list = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_keys_list);
var_keys_list = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_keys);
Py_DECREF(par_keys);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_keys);
Py_DECREF(par_keys);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct textual$keys$$$function__7__normalize_key_list$$$genexpr__1_genexpr_locals {
PyObject *var_key;
PyObject *tmp_iter_value_0;
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

static PyObject *textual$keys$$$function__7__normalize_key_list$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$keys$$$function__7__normalize_key_list$$$genexpr__1_genexpr_locals *generator_heap = (struct textual$keys$$$function__7__normalize_key_list$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_key = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5840d542f102c2d46db47602c9319ec5, module_textual$keys, sizeof(void *)+sizeof(void *));
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
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 366;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_key;
    generator_heap->var_key = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_key);
tmp_len_arg_1 = generator_heap->var_key;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 367;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = 1;
tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_1 = module_var_accessor_textual$keys$_character_to_key(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__character_to_key);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 367;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_key);
tmp_args_element_value_1 = generator_heap->var_key;
generator->m_frame->m_frame.f_lineno = 367;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 367;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(generator_heap->var_key);
tmp_expression_value_1 = generator_heap->var_key;
Py_INCREF(tmp_expression_value_1);
condexpr_end_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(bool), &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(nuitka_digit), &tmp_len_arg_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(bool), &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(nuitka_digit), &tmp_len_arg_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 367;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 366;
generator_heap->type_description_1 = "No";
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

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
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
    NULL,
    generator_heap->var_key
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

Py_XDECREF(generator_heap->var_key);
generator_heap->var_key = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_key);
generator_heap->var_key = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$keys$$$function__7__normalize_key_list$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$keys$$$function__7__normalize_key_list$$$genexpr__1_genexpr_context,
        module_textual$keys,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_257413b475337c395e105c79423b6180,
#endif
        code_objects_5840d542f102c2d46db47602c9319ec5,
        closure,
        1,
#if 1
        sizeof(struct textual$keys$$$function__7__normalize_key_list$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_textual$keys$$$function__1_value(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$keys$$$function__1_value,
        mod_consts.const_str_plain_value,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f40af1456abfb531c34a52fd4ceba45c,
#endif
        code_objects_5b17a6fa62fd94fdb24cdf35a60ebfbc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$keys,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$keys$$$function__2__get_unicode_name_from_key(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$keys$$$function__2__get_unicode_name_from_key,
        mod_consts.const_str_plain__get_unicode_name_from_key,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1ef651646ce0b8e0429d3cdceb71f215,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$keys,
        mod_consts.const_str_digest_fad85658383c0df97583f43512ef2f8a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$keys$$$function__3__get_key_aliases(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$keys$$$function__3__get_key_aliases,
        mod_consts.const_str_plain__get_key_aliases,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_eeab22da607ca5a4234fdc2cccdbdd22,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$keys,
        mod_consts.const_str_digest_e7afabebf8ef1440b03add46db6f004e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$keys$$$function__4_format_key(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$keys$$$function__4_format_key,
        mod_consts.const_str_plain_format_key,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_45c14d3476b41db48c4cd27e0a7d1354,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$keys,
        mod_consts.const_str_digest_622fb5079f158f8619f680599fb53997,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$keys$$$function__5_key_to_character(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$keys$$$function__5_key_to_character,
        mod_consts.const_str_plain_key_to_character,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2d4e746101dff9248d7cb0006de3daac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$keys,
        mod_consts.const_str_digest_ef727271d3ddfc637356d00009a0aae8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$keys$$$function__6__character_to_key(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$keys$$$function__6__character_to_key,
        mod_consts.const_str_plain__character_to_key,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2d726ac3c9c0d8090c3cd12fbfce9d52,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$keys,
        mod_consts.const_str_digest_2c9b049c78dfc9a5e31df16c92131846,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$keys$$$function__7__normalize_key_list(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$keys$$$function__7__normalize_key_list,
        mod_consts.const_str_plain__normalize_key_list,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bf5c5d87a4a5e688d6e18ea2e4ad0860,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$keys,
        mod_consts.const_str_digest_70f308a0b368541cf3fcbc377634721c,
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

static function_impl_code const function_table_textual$keys[] = {
impl_textual$keys$$$function__1_value,
impl_textual$keys$$$function__2__get_unicode_name_from_key,
impl_textual$keys$$$function__3__get_key_aliases,
impl_textual$keys$$$function__4_format_key,
impl_textual$keys$$$function__5_key_to_character,
impl_textual$keys$$$function__6__character_to_key,
impl_textual$keys$$$function__7__normalize_key_list,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$keys);
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
        module_textual$keys,
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
        function_table_textual$keys,
        sizeof(function_table_textual$keys) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.keys";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$keys(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$keys");

    // Store the module for future use.
    module_textual$keys = module;

    moduledict_textual$keys = MODULE_DICT(module_textual$keys);

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
        PRINT_STRING("textual$keys: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$keys: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$keys: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.keys" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$keys\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$keys,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$keys,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$keys,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$keys,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$keys,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$keys);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$keys, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$keys, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$keys, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$keys);
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

        UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var_key = NULL;
PyObject *outline_1_var_value = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$keys;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_textual$keys$$$class__1_Keys_9 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$keys$$$class__1_Keys_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$keys, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$keys, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$keys = MAKE_MODULE_FRAME(code_objects_e9955a7963f9c4f177c6dc0866663670, module_textual$keys);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$keys);
assert(Py_REFCNT(frame_frame_textual$keys) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$keys$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$keys$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$keys, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_unicodedata;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$keys;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$keys->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata, tmp_assign_source_5);
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
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$keys;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Enum_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$keys->m_frame.f_lineno = 4;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$keys,
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


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
tmp_import_name_from_2 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_import_name_from_2 == NULL));
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$keys,
        mod_consts.const_str_plain_lru_cache,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_lru_cache);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache, tmp_assign_source_7);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
tmp_assign_source_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_8, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$keys$Enum(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_assign_source_8, 1, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_9 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
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


exception_lineno = 9;

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


exception_lineno = 9;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_11 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_11;
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


exception_lineno = 9;

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
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Keys;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$keys->m_frame.f_lineno = 9;
tmp_assign_source_12 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_12;
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


exception_lineno = 9;

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
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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


exception_lineno = 9;

    goto try_except_handler_1;
}
frame_frame_textual$keys->m_frame.f_lineno = 9;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 9;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_13;
}
branch_end_1:;
{
PyObject *tmp_assign_source_14;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$keys$$$class__1_Keys_9 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4bd1e91230116e9da2a8532fbb7fd77b;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_b48fc827c9b8da35821f0989484cdb78;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_Keys;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_9;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
frame_frame_textual$keys$$$class__1_Keys_2 = MAKE_CLASS_FRAME(tstate, code_objects_82b7616740d130e5eed07994dc765c08, module_textual$keys, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$keys$$$class__1_Keys_2);
assert(Py_REFCNT(frame_frame_textual$keys$$$class__1_Keys_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_called_value_2 = PyObject_GetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_args_element_value_1 = MAKE_FUNCTION_textual$keys$$$function__1_value(tstate, tmp_annotations_1, tmp_closure_1);

frame_frame_textual$keys$$$class__1_Keys_2->m_frame.f_lineno = 17;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_value, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = mod_consts.const_str_plain_escape;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Escape, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_ca5753c417e0ecbf89e3bb0c68d1babf;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ShiftEscape, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_return;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Return, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_30d3e1330cbd1108ff6954a7d6319f57;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlAt, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_bcedb8f265204c78ead3fe8ea7de2934;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlA, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_0dffc11c55eb16445b34ac17605839de;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlB, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_ca425b260b4514d6b265bb3b8c379fee;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlC, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_dc8a1095fcf389f33726dff551a19934;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlD, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_2b62260542bdd7282ea74b8fdc7b67b8;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_ec0e71e9b6b6b452a1d4f75267b20b56;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_dcd74d9b89afb543d307964126ae6e53;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlG, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_7607605efc9364fb0dad017b75b4155f;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlH, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_57ab7d99a30021e541d9f0574dd5eb0e;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlI, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_e1090ebf138eab0b3a481ac0a5170741;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlJ, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_fb16a2df0c12c1a66ce902ad4b3115b3;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlK, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_408394bc7cbb98d5dba63ec1fc0030f8;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlL, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_00aee79b629314f5bd54cf77d9838075;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlM, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_406591cf1960a73b2489c7acdf934cd8;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_2cc9b10a86c82745acd0c3f49d4d1380;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlO, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_ca73df66d4de29cb1deb57c67bf67263;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlP, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_dd36da76c3d170d25d5117d1c097b2fb;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlQ, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_c78d7bca3c45e82cd28b8b58cab7f9dd;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlR, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_f1708b51f222981da897333c41801eaa;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_448ef0fc0f8a5f6bfd07152d510ea9fc;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_45620439f749c050a7dd80c8cef47abe;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlU, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_0301e485e7519b6fa19445c2b272d053;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlV, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_85e451786b6ffa3c1045314e0c350aab;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlW, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_d4e03dfd9712f257a953981cf0934fbd;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_34b20b541ca4a9eb915d76ea01fc0f15;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlY, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_67c801cd21173604beea7e3ebb818afe;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlZ, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_42fa8ff487466d7bb8f1d4388bdc768d;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Control1, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_e9f5a3b11239ef392f01e5ab59eaffb6;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Control2, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_a5ef4f90d01803ae1e18a8e9df225244;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Control3, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_ed21b8632b9e892910a8e6dde81031b4;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Control4, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_6400a030fac0aa2c40dcc6d4f1387f2a;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Control5, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_6e3f212ff6ec155d7f48eae4397dbd7c;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Control6, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_179f3f41d82658e5ec92a1de560b8505;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Control7, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_7f5046c15296ca1327176648c6cc3d18;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Control8, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_1ed0156ab039d7d85fc6f9a57b8c6dd1;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Control9, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_8da22a7738041978dfc95fae3b00b310;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Control0, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_3fdae57bf403add22eff303712d037c4;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShift1, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_0c9b772786429e726d4c8218f450fcf3;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShift2, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_876025e2bdbb248b660b8f76bef521f1;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShift3, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_6bbf38777794fd631d769a40a4020594;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShift4, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_36dd1a6def72601031206d28a4a88946;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShift5, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_467ee2171159545db73ad7f7aa5b29bf;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShift6, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_2c69d0b6d9fa3ee68846db89bd689880;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShift7, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_3dc6929fcb5c8346df80c27471ea02b6;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShift8, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_3fb7296c639fe027cbd36ba3629afc50;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShift9, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_f4cac00956dec08c7f8e19dd2ae1006e;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShift0, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_431704394b408b0abffc0234971b8be5;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlBackslash, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_257c8c39adeb20891e0f1b8f027f234c;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlSquareClose, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_5a01ebad1e3bf70395fb9048376f432d;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlCircumflex, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_3fbe5f5f37154e822ada15ea0282ec73;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlUnderscore, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_left;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Left, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_right;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Right, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_up;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Up, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_down;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Down, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_home;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Home, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = const_str_plain_end;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_End, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_insert;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Insert, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_delete;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Delete, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_pageup;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_PageUp, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_pagedown;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_PageDown, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_d37cb692cfe4d8063be31b713836fe0b;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlLeft, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_a99e06b9bd98e45e9db91e3181d31a7e;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlRight, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_d84ba25c0612e7399a8eab5c72b46692;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlUp, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_fca3886d2d02e281dd103d1f67e5f371;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlDown, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_6af762a7f6deb81671c013fe563da8bf;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlHome, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_b41bdc720dbf1ea271225db5c38d9cad;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlEnd, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_e88412426d7bfb8028eee70a7621c4d3;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlInsert, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_782e50f7df1b384ae0398e545ad84467;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlDelete, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_237948707709a2b7669cf75787cbbda7;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlPageUp, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_6e99e0d5448b2313e314549c7b443122;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlPageDown, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_f410f914ee587d62c889ae9a709b3342;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ShiftLeft, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_6bbaff8e334e51a2e117608cd70dd79b;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ShiftRight, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_f78ad742b430aa14baef127b1b29318c;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ShiftUp, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_cf339dbdc18919c80363cffadf0016d6;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ShiftDown, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_7b11a7fd656eb00b43cabddd345e97ce;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ShiftHome, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_4ba3322bed4d34dbafbbe1c8b4a7dde1;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ShiftEnd, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_8730e5ddae8f9a6f8616f1660f9540f3;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ShiftInsert, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_ed8e8c6a3ce854e35441b2b12c704727;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ShiftDelete, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_70a96ac626dd38c9abbf118cccd7ed2e;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ShiftPageUp, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_2fabe4c48a3cc228908247a6d933cb17;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ShiftPageDown, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_017e53923b3a251543b7cad8878d418c;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShiftLeft, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_cef459680f635742f259a0aeb4e1c39a;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShiftRight, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_3d75097cc4846356c9ebad175b020429;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShiftUp, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_2be4d47bbe791e881f959cf40b8af593;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShiftDown, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_36f7b34d34ba7a4d04a3a3376e3cc240;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShiftHome, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_cd2054bbfafdb2f296ccec8e59de9a02;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShiftEnd, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_6e0784eb25ca3cde966126537fa9bab0;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShiftInsert, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_5059be596fa6b06862bb7a75a2d70e85;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShiftDelete, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_ae6babd8b0a1ba7a81b7a3b744a67cdd;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShiftPageUp, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_adccd1be55646c031dd2d515393fd7e1;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShiftPageDown, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_ac6935a32730d8fc796ab576cb4b39c3;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_BackTab, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f1;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F1, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f2;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F2, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f3;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F3, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f4;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F4, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f5;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F5, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f6;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F6, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f7;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F7, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f8;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F8, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f9;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F9, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f10;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F10, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f11;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F11, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f12;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F12, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f13;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F13, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f14;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F14, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f15;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F15, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f16;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F16, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f17;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F17, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f18;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F18, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f19;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F19, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f20;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F20, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f21;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F21, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f22;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F22, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f23;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F23, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_f24;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_F24, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_3456caec15976e53fb582dbd62266b48;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF1, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_1a5c895a2946da8e659171043dcf75e7;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF2, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_d238fda937093c760f3fa6d72dacedec;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF3, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_b807a75f132476c5ec27d2911a6d64b5;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF4, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_c2482fd31b687ff4e24286c169fa1717;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF5, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_43c554db18e5fe0c223e540327f24d8b;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF6, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_f8d028f5ba24b63110ee819fd44959de;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF7, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_6f9e59cf4bfaf19fcd7aa001a8d759d6;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF8, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_0a62835b93442cb993cd2703404236ff;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF9, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_f4ef1695cb0efa40d130e9a802b19071;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF10, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_abcc99939cc338628ab23008b7fec2b6;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF11, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_77f7668d3252510b6a9391c58c0e2d45;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF12, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_3a03cf659c2772878eeb7e792edf9d53;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF13, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_80c75c1c9cc2fd2f76cd3c22cd4ada3c;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF14, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_a86dfe64219a1890ed99cf4ba38083a0;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF15, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_dd6b59ceb22f4e14e36db67cd0c37c23;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF16, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_5e6fbdd64f7992c012459cca431e1f90;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF17, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_1c5f92411617856116fa927c399dd545;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF18, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_72ce5d7b5913db12fa2c8303f2abbe71;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF19, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_04e1496d756f156f62cfb92a15e54dbc;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF20, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_06d18f0f3ce62ffd30b1bb6dfbd9eed0;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF21, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_fc76c10d5f24a618321c7ca5216e907a;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF22, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_f38fd246aff961e4bf6ccdd7cf2f50e5;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF23, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_ab944a33bed9ea53dd116d2906a6cf64;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlF24, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_angle_any;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Any, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_0998c7a60f43616ce9fd3b2f9338a53b;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ScrollUp, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_14163513979fb3132ace058feff35177;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ScrollDown, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_angle_ignore;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Ignore, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_14a9d0454d43784e4753de1157591232;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlSpace, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_tab;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Tab, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_space;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Space, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_enter;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Enter, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_backspace;
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_Backspace, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShiftLeft);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ControlShiftLeft);

exception_lineno = 197;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ShiftControlLeft, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShiftRight);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ControlShiftRight);

exception_lineno = 198;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ShiftControlRight, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShiftHome);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ControlShiftHome);

exception_lineno = 199;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ShiftControlHome, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ControlShiftEnd);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ControlShiftEnd);

exception_lineno = 200;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain_ShiftControlEnd, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$keys$$$class__1_Keys_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$keys$$$class__1_Keys_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$keys$$$class__1_Keys_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$keys$$$class__1_Keys_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$keys$$$class__1_Keys_2);

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
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

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


exception_lineno = 9;

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
tmp_res = PyObject_SetItem(locals_textual$keys$$$class__1_Keys_9, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Keys;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_textual$keys$$$class__1_Keys_9;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$keys->m_frame.f_lineno = 9;
tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_15);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_14 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_14);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_textual$keys$$$class__1_Keys_9);
locals_textual$keys$$$class__1_Keys_9 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$keys$$$class__1_Keys_9);
locals_textual$keys$$$class__1_Keys_9 = NULL;
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
exception_lineno = 9;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_Keys, tmp_assign_source_14);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_class_container$class_creation_1__bases_orig);
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
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = DICT_COPY(tstate, mod_consts.const_dict_3db02825e119933ad84c8240dcfceff7);
UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_1;
PyObject *tmp_dict_arg_1;
tmp_dict_arg_1 = module_var_accessor_textual$keys$KEY_NAME_REPLACEMENTS(tstate);
assert(!(tmp_dict_arg_1 == NULL));
tmp_iter_arg_1 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
assert(!(tmp_iter_arg_1 == NULL));
tmp_assign_source_18 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;

    goto try_except_handler_4;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_19;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_20 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 213;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_21 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;

    goto try_except_handler_6;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_22 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;

    goto try_except_handler_7;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_23 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;

    goto try_except_handler_7;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_23;
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



exception_lineno = 213;

    goto try_except_handler_7;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_6;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_5;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_24 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_1_var_key;
    outline_1_var_key = tmp_assign_source_24;
    Py_INCREF(outline_1_var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_25 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_1_var_value;
    outline_1_var_value = tmp_assign_source_25;
    Py_INCREF(outline_1_var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_1_var_value);
tmp_dictset38_key_1 = outline_1_var_value;
CHECK_OBJECT(outline_1_var_key);
tmp_dictset38_value_1 = outline_1_var_key;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;

    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;

    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_assign_source_17 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_assign_source_17);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
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
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_1_var_key);
outline_1_var_key = NULL;
Py_XDECREF(outline_1_var_value);
outline_1_var_value = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_key);
outline_1_var_key = NULL;
Py_XDECREF(outline_1_var_value);
outline_1_var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 213;
goto frame_exception_exit_1;
outline_result_3:;
UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_REPLACED_KEYS, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = DICT_COPY(tstate, mod_consts.const_dict_85bb3133f04b00be40b1b77179d61c6b);
UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_TO_UNICODE_NAME, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_db33bfb71a490d0f03cc53d9f182e628);
UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_ALIASES, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = DICT_COPY(tstate, mod_consts.const_dict_8759e1a9632c93f20e44ed4b7c96f5bc);
UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_DISPLAY_ALIASES, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = DICT_COPY(tstate, mod_consts.const_dict_d3244e89f9ca1765029e9c2ca01922d7);
UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_ASCII_KEY_NAMES, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_420e509c618028b64be4c57c39d7009d);

tmp_assign_source_30 = MAKE_FUNCTION_textual$keys$$$function__2__get_unicode_name_from_key(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain__get_unicode_name_from_key, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_778375f2fc1409fb1258428f30384592);

tmp_assign_source_31 = MAKE_FUNCTION_textual$keys$$$function__3__get_key_aliases(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain__get_key_aliases, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_4;
tmp_called_value_5 = module_var_accessor_textual$keys$lru_cache(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;

    goto frame_exception_exit_1;
}
frame_frame_textual$keys->m_frame.f_lineno = 289;
tmp_called_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_int_pos_1024_tuple);

if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto frame_exception_exit_1;
}
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_420e509c618028b64be4c57c39d7009d);

tmp_args_element_value_2 = MAKE_FUNCTION_textual$keys$$$function__4_format_key(tstate, tmp_annotations_4);

frame_frame_textual$keys->m_frame.f_lineno = 289;
tmp_assign_source_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_format_key, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_5;
tmp_called_value_7 = module_var_accessor_textual$keys$lru_cache(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;

    goto frame_exception_exit_1;
}
frame_frame_textual$keys->m_frame.f_lineno = 311;
tmp_called_value_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_int_pos_1024_tuple);

if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;

    goto frame_exception_exit_1;
}
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_4c27da9b681bf103a76c2e7b9e555d46);

tmp_args_element_value_3 = MAKE_FUNCTION_textual$keys$$$function__5_key_to_character(tstate, tmp_annotations_5);

frame_frame_textual$keys->m_frame.f_lineno = 311;
tmp_assign_source_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain_key_to_character, tmp_assign_source_33);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$keys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$keys->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$keys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$keys);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_56acd67f60b561438df177796104f77c);

tmp_assign_source_34 = MAKE_FUNCTION_textual$keys$$$function__6__character_to_key(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain__character_to_key, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_a36f3c8d8bfe682f9cf8524c46e2cebb);

tmp_assign_source_35 = MAKE_FUNCTION_textual$keys$$$function__7__normalize_key_list(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_textual$keys, (Nuitka_StringObject *)mod_consts.const_str_plain__normalize_key_list, tmp_assign_source_35);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$keys", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.keys" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$keys);
    return module_textual$keys;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$keys, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$keys", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

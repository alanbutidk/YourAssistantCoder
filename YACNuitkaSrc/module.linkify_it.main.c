/* Generated code for Python module 'linkify_it$main'
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



/* The "module_linkify_it$main" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_linkify_it$main;
PyDictObject *moduledict_linkify_it$main;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_re;
PyObject *const_str_plain_sub;
PyObject *const_str_digest_2b5bc195df5e6006390ee2c75c96e23f;
PyObject *const_str_digest_2fe71b40974e92f7a4ed2043bfd21fa9;
PyObject *const_str_plain_index;
PyObject *const_str_digest_5a1a12be9855a138c41fd11242d4af0b;
PyObject *const_str_digest_076de46bf0c237a26e359476742abba1;
PyObject *const_str_chr_39;
PyObject *const_str_chr_40;
PyObject *const_str_chr_41;
PyObject *const_str_plain__index;
PyObject *const_str_plain__last_index;
PyObject *const_str_plain__text_cache;
PyObject *const_str_plain__schema;
PyObject *const_str_plain_schema;
PyObject *const_str_plain_last_index;
PyObject *const_str_plain_raw;
PyObject *const_str_plain_text;
PyObject *const_str_plain_url;
PyObject *const_tuple_str_plain_http_tuple;
PyObject *const_str_digest_e41e7eeda719ec0b98e622eed81c1021;
PyObject *const_str_plain_src_auth;
PyObject *const_str_plain_src_host_port_strict;
PyObject *const_str_plain_src_path;
PyObject *const_str_plain_http;
PyObject *const_str_plain_search;
PyObject *const_str_plain_IGNORECASE;
PyObject *const_tuple_str_plain_flags_tuple;
PyObject *const_str_plain_group;
PyObject *const_tuple_str_plain_not_http_tuple;
PyObject *const_str_chr_94;
PyObject *const_str_digest_145b8b17ab6196a6302e832e56b75800;
PyObject *const_str_plain_src_domain;
PyObject *const_str_digest_5ff4082802365aae91cb2cd00c02d110;
PyObject *const_str_plain_src_domain_root;
PyObject *const_str_plain_src_port;
PyObject *const_str_plain_src_host_terminator;
PyObject *const_str_plain_not_http;
PyObject *const_int_pos_3;
PyObject *const_str_chr_58;
PyObject *const_tuple_int_0_tuple;
PyObject *const_tuple_str_plain_mailto_tuple;
PyObject *const_str_plain_src_email_name;
PyObject *const_str_chr_64;
PyObject *const_str_plain_src_host_strict;
PyObject *const_str_plain_mailto;
PyObject *const_str_plain_func;
PyObject *const_str_digest_9a791bd0ef10253f1e89f630f97b1a58;
PyObject *const_str_plain_regex;
PyObject *const_str_digest_f980854454706b7c9eb2d49a6b00e290;
PyObject *const_str_plain_self;
PyObject *const_str_plain_normalize;
PyObject *const_str_plain_Match;
PyObject *const_str_plain__compiled;
PyObject *const_dict_fed71deb6e77035f3a68bee967e245c9;
PyObject *const_str_plain_default_options;
PyObject *const_str_digest_1f107b5592452b1ca3d9912cb6908233;
PyObject *const_str_plain_validate;
PyObject *const_str_plain__validate_http;
PyObject *const_str_digest_8e2c70a5a0f80d40d559344c9edb38f3;
PyObject *const_str_digest_72e6227b83a1043eb932d0c0ee7901b8;
PyObject *const_str_digest_13971ae58b983978540cbb4bbf3b1360;
PyObject *const_str_plain__validate_double_slash;
PyObject *const_str_digest_59c33d34518c98b50110b8b5b227fe48;
PyObject *const_str_plain__validate_mailto;
PyObject *const_str_plain_default_schemas;
PyObject *const_str_digest_432ac424e0e7a46cb18bb44e5ab4e371;
PyObject *const_str_plain_tlds_2ch_src_re;
PyObject *const_list_b86b7fff8354fc143025b57125d1b527_list;
PyObject *const_str_plain_tlds_default;
PyObject *const_str_plain_update;
PyObject *const_str_plain__opts;
PyObject *const_str_plain__schemas;
PyObject *const_str_plain__tlds;
PyObject *const_str_plain__tlds_replaced;
PyObject *const_str_plain__compile;
PyObject *const_str_plain_build_re;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_deepcopy;
PyObject *const_str_plain__on_compile;
PyObject *const_str_plain_append;
PyObject *const_str_plain_src_xn;
PyObject *const_str_chr_124;
PyObject *const_str_plain_src_tlds;
PyObject *const_str_plain_untpl;
PyObject *const_str_digest_43ce19c7636690b8f3d205941e7cc38b;
PyObject *const_str_plain_tpl_email_fuzzy;
PyObject *const_str_plain_email_fuzzy;
PyObject *const_str_plain_tpl_link_fuzzy;
PyObject *const_str_plain_link_fuzzy;
PyObject *const_str_plain_tpl_link_no_ip_fuzzy;
PyObject *const_str_plain_link_no_ip_fuzzy;
PyObject *const_str_plain_tpl_host_fuzzy_test;
PyObject *const_str_plain_host_fuzzy_test;
PyObject *const_str_plain_items;
PyObject *const_dict_2be64c18c2ba44ac79d86a26f3b61da1;
PyObject *const_tuple_str_plain_validate_tuple;
PyObject *const_str_plain_RE_TYPE;
PyObject *const_str_plain__create_validator;
PyObject *const_str_plain_MethodType;
PyObject *const_str_plain_FunctionType;
PyObject *const_str_plain_LinkifyIt;
PyObject *const_str_plain_SchemaError;
PyObject *const_tuple_str_plain_normalize_tuple;
PyObject *const_str_plain__create_normalizer;
PyObject *const_str_plain_aliases;
PyObject *const_str_plain__escape_re;
PyObject *const_str_digest_c8b3d4bf4d7079f3e044c74d046e5f88;
PyObject *const_str_plain_src_ZPCc;
PyObject *const_str_digest_7174c388a6fb32076c1a9a544f1f89be;
PyObject *const_str_plain_schema_test;
PyObject *const_str_plain_schema_search;
PyObject *const_str_plain_schema_at_start;
PyObject *const_str_digest_785357e4228cd01595442309a893b3db;
PyObject *const_str_digest_c4800cd4b7f4ff49de35572fba939821;
PyObject *const_str_plain_pretest;
PyObject *const_str_plain__reset_scan_cache;
PyObject *const_str_digest_0b3d8613f1c725018ad3fc859bc6b856;
PyObject *const_str_plain_replace;
PyObject *const_str_digest_4c4551cb997157afe3f5879b83cf36fd;
PyObject *const_str_digest_028a8d8b52d5c73a872abe583047f749;
PyObject *const_str_digest_80345a83bfd733f0b98d1e5eaa7356f4;
PyObject *const_str_plain_finditer;
PyObject *const_str_plain_groups;
PyObject *const_str_plain_test_schema_at;
PyObject *const_int_pos_2;
PyObject *const_str_plain_start;
PyObject *const_tuple_str_plain_fuzzy_link_tuple;
PyObject *const_tuple_str_digest_1f107b5592452b1ca3d9912cb6908233_tuple;
PyObject *const_tuple_str_plain_fuzzy_ip_tuple;
PyObject *const_tuple_str_plain_fuzzy_email_tuple;
PyObject *const_tuple_str_digest_59c33d34518c98b50110b8b5b227fe48_tuple;
PyObject *const_str_plain__index_of;
PyObject *const_str_digest_727a98a2ba8ea0edb605e42563c09dc3;
PyObject *const_str_digest_62cbbec4d6e4dae0d31069741c4b1535;
PyObject *const_str_digest_453d5357fae4900c4d0e481e3ff57351;
PyObject *const_str_plain__create_match;
PyObject *const_str_plain_test;
PyObject *const_str_plain_tail;
PyObject *const_str_plain_result;
PyObject *const_str_plain_shift;
PyObject *const_str_digest_6528643a15bbf15dd70cc6c3adda95b4;
PyObject *const_str_digest_d95a093e424ce26a0771bb86b370d4bf;
PyObject *const_str_plain_extend;
PyObject *const_str_plain_sorted;
PyObject *const_dict_20f16b30e1951d468c3080dfc46b8748;
PyObject *const_str_digest_67845612039f625c4969a8b35aa23c63;
PyObject *const_str_digest_7c06a402579f6f9d9db7f3e04da983fc;
PyObject *const_str_digest_f3e3b3ce1263053e44c8863acf343d95;
PyObject *const_str_digest_42c58ca76c7358db8bf06cafcd21ac6e;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_ucre;
PyObject *const_tuple_str_plain_build_re_tuple;
PyObject *const_tuple_str_empty_tuple;
PyObject *const_tuple_type_Exception_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_3608c08372d8bc24f99f76a759a6e0fa;
PyObject *const_str_digest_6b3ca4a9129cbb14a0a166a88507096c;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_24;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_532893dea9d9676970dda8d0bb5d132a;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_9cf04f85e4c1c9bbc7e2bb16ecf2d1dd;
PyObject *const_int_pos_32;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_b131589db03bda498bd43985fb3ba801;
PyObject *const_str_digest_8aa20829481a290cb085ff6fa9e26858;
PyObject *const_tuple_c2d2e3278b6512038538f1d1be4307cc_tuple;
PyObject *const_str_digest_d08fb44dfc2f4584ca27b6d591a42510;
PyObject *const_int_pos_66;
PyObject *const_str_digest_e20049532541c25f568671115bb2f168;
PyObject *const_str_digest_9195a20d6ff875491de4f276b7716113;
PyObject *const_str_digest_e4b48846ab44d4d3d09c9c8337a16c2d;
PyObject *const_str_digest_6c0a07a109a4097832add04594f3037a;
PyObject *const_str_digest_d06d42786bbe6b4350b2bc591cbb6d90;
PyObject *const_str_digest_c56e137e19f179c792667bda59a1aea2;
PyObject *const_str_digest_da4ec12f10fb85b975c583c08f72c2d9;
PyObject *const_tuple_none_none_tuple;
PyObject *const_str_digest_7d882a62afd24a20297b88aefee0536e;
PyObject *const_str_digest_e9d810c75a33758e7cf5fee1ee90116a;
PyObject *const_str_plain_add;
PyObject *const_str_digest_a5e2f4697253e5e11014381cb9f92b38;
PyObject *const_str_plain_set;
PyObject *const_str_digest_b084b0862292aa69581c77930eef71cd;
PyObject *const_str_digest_c3e714077525e1b7cbd27d070730ce22;
PyObject *const_str_digest_a83896f06ce103d2c5eb407afd687946;
PyObject *const_str_digest_f81d3aca3d43db1d81143691880cbbfb;
PyObject *const_str_plain_match;
PyObject *const_str_digest_649626aa05a795e673c17f141e82afde;
PyObject *const_str_plain_match_at_start;
PyObject *const_str_digest_fbac77b33113858fbf4e5ac211d2e2cd;
PyObject *const_tuple_false_tuple;
PyObject *const_str_plain_tlds;
PyObject *const_str_digest_22d8d09e85cb13fcbe88e4b9e18a2eef;
PyObject *const_str_digest_e7a5ffba8c80a260e3f041e4832c9d61;
PyObject *const_str_digest_7f3504c586763d69d681a95364dd08a1;
PyObject *const_str_digest_8d9ecf201a27f01e1787c3d6e4b89d96;
PyObject *const_tuple_f3f51b90ed64accf1eed389ad25e01a0_tuple;
PyObject *const_str_digest_0c270e98865e594b05d0c2fd0f29aa18;
PyObject *const_str_digest_4e0a1325e9c69fb04ef8297ac16e2f1d;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_schemas_str_plain_options_tuple;
PyObject *const_tuple_7f8656af3c6d6707a60b61982f4d3f09_tuple;
PyObject *const_tuple_767a40093b95a5d38f077a250cce51b4_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_6817b22ad3de67d920ef4f9c053edec7_tuple;
PyObject *const_tuple_str_plain_self_str_plain_shift_str_plain_match_tuple;
PyObject *const_tuple_str_plain_self_str_plain_func_tuple;
PyObject *const_tuple_str_plain_self_str_plain_regex_str_plain_func_tuple;
PyObject *const_tuple_str_plain_string_tuple;
PyObject *const_tuple_str_plain_text_str_plain_search_value_str_plain_result_tuple;
PyObject *const_tuple_cb6cd02a66adc8bb4ff9dbe24785bd7e_tuple;
PyObject *const_tuple_str_plain_self_str_plain_schema_str_plain_definition_tuple;
PyObject *const_tuple_str_plain_match_str_plain_self_tuple;
PyObject *const_tuple_d8b2a87f52e766225c7e648f654535a3_tuple;
PyObject *const_tuple_str_plain_regex_tuple;
PyObject *const_tuple_f39e0a442b6f0a667cbce6a7748dad25_tuple;
PyObject *const_tuple_5fe66f9238c5a9a525f05a12fb07b8e5_tuple;
PyObject *const_tuple_str_plain_self_str_plain_match_tuple;
PyObject *const_tuple_str_plain_self_str_plain_text_tuple;
PyObject *const_tuple_str_plain_self_str_plain_options_tuple;
PyObject *const_tuple_8a0bab4e653bba3996f59abeb0abc803_tuple;
PyObject *const_tuple_979fd7028b220cce85f27133a04b2ec9_tuple;
PyObject *const_tuple_d7eface55a1aad863bc28308f8764e95_tuple;
PyObject *const_tuple_str_plain_tpl_str_plain_self_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[231];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("linkify_it.main"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_sub);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b5bc195df5e6006390ee2c75c96e23f);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fe71b40974e92f7a4ed2043bfd21fa9);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_index);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a1a12be9855a138c41fd11242d4af0b);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_076de46bf0c237a26e359476742abba1);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_chr_39);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_chr_40);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__index);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__last_index);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__text_cache);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__schema);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_last_index);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_http_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_e41e7eeda719ec0b98e622eed81c1021);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_src_auth);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_src_host_port_strict);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_src_path);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_http);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_search);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_IGNORECASE);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_flags_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_group);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_not_http_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_chr_94);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_145b8b17ab6196a6302e832e56b75800);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_src_domain);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ff4082802365aae91cb2cd00c02d110);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_src_domain_root);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_src_port);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_src_host_terminator);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_not_http);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_chr_58);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mailto_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_src_email_name);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_chr_64);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_src_host_strict);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_mailto);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_func);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a791bd0ef10253f1e89f630f97b1a58);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_regex);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_f980854454706b7c9eb2d49a6b00e290);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalize);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_Match);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__compiled);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_dict_fed71deb6e77035f3a68bee967e245c9);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_options);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_1f107b5592452b1ca3d9912cb6908233);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_http);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e2c70a5a0f80d40d559344c9edb38f3);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_72e6227b83a1043eb932d0c0ee7901b8);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_double_slash);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_59c33d34518c98b50110b8b5b227fe48);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_mailto);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_schemas);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_432ac424e0e7a46cb18bb44e5ab4e371);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_tlds_2ch_src_re);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_list_b86b7fff8354fc143025b57125d1b527_list);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_tlds_default);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain__opts);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain__schemas);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain__tlds);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain__tlds_replaced);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__compile);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_build_re);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_deepcopy);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain__on_compile);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_src_xn);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_chr_124);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_src_tlds);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_untpl);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_43ce19c7636690b8f3d205941e7cc38b);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_tpl_email_fuzzy);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_email_fuzzy);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_tpl_link_fuzzy);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_link_fuzzy);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_tpl_link_no_ip_fuzzy);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_link_no_ip_fuzzy);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_tpl_host_fuzzy_test);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_host_fuzzy_test);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_dict_2be64c18c2ba44ac79d86a26f3b61da1);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_validate_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_RE_TYPE);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain__create_validator);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_MethodType);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_FunctionType);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_LinkifyIt);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_SchemaError);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_normalize_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain__create_normalizer);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_aliases);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain__escape_re);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8b3d4bf4d7079f3e044c74d046e5f88);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_src_ZPCc);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_7174c388a6fb32076c1a9a544f1f89be);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema_test);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema_search);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema_at_start);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_785357e4228cd01595442309a893b3db);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4800cd4b7f4ff49de35572fba939821);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_pretest);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain__reset_scan_cache);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_0b3d8613f1c725018ad3fc859bc6b856);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c4551cb997157afe3f5879b83cf36fd);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_028a8d8b52d5c73a872abe583047f749);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_80345a83bfd733f0b98d1e5eaa7356f4);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_finditer);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_groups);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_test_schema_at);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fuzzy_link_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1f107b5592452b1ca3d9912cb6908233_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fuzzy_ip_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fuzzy_email_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_59c33d34518c98b50110b8b5b227fe48_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain__index_of);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_727a98a2ba8ea0edb605e42563c09dc3);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_62cbbec4d6e4dae0d31069741c4b1535);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_453d5357fae4900c4d0e481e3ff57351);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain__create_match);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_test);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_tail);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_result);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_shift);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_6528643a15bbf15dd70cc6c3adda95b4);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_d95a093e424ce26a0771bb86b370d4bf);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_extend);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_sorted);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_dict_20f16b30e1951d468c3080dfc46b8748);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_67845612039f625c4969a8b35aa23c63);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c06a402579f6f9d9db7f3e04da983fc);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3e3b3ce1263053e44c8863acf343d95);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_42c58ca76c7358db8bf06cafcd21ac6e);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_ucre);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_build_re_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_3608c08372d8bc24f99f76a759a6e0fa);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b3ca4a9129cbb14a0a166a88507096c);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_int_pos_24);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_532893dea9d9676970dda8d0bb5d132a);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_9cf04f85e4c1c9bbc7e2bb16ecf2d1dd);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_b131589db03bda498bd43985fb3ba801);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_8aa20829481a290cb085ff6fa9e26858);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_c2d2e3278b6512038538f1d1be4307cc_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_d08fb44dfc2f4584ca27b6d591a42510);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_int_pos_66);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_e20049532541c25f568671115bb2f168);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_9195a20d6ff875491de4f276b7716113);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_e4b48846ab44d4d3d09c9c8337a16c2d);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_6c0a07a109a4097832add04594f3037a);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_d06d42786bbe6b4350b2bc591cbb6d90);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_c56e137e19f179c792667bda59a1aea2);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_da4ec12f10fb85b975c583c08f72c2d9);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d882a62afd24a20297b88aefee0536e);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_e9d810c75a33758e7cf5fee1ee90116a);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5e2f4697253e5e11014381cb9f92b38);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_set);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_b084b0862292aa69581c77930eef71cd);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3e714077525e1b7cbd27d070730ce22);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_a83896f06ce103d2c5eb407afd687946);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_f81d3aca3d43db1d81143691880cbbfb);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_649626aa05a795e673c17f141e82afde);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_match_at_start);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_fbac77b33113858fbf4e5ac211d2e2cd);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_tlds);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_22d8d09e85cb13fcbe88e4b9e18a2eef);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_digest_e7a5ffba8c80a260e3f041e4832c9d61);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_7f3504c586763d69d681a95364dd08a1);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d9ecf201a27f01e1787c3d6e4b89d96);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_f3f51b90ed64accf1eed389ad25e01a0_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c270e98865e594b05d0c2fd0f29aa18);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e0a1325e9c69fb04ef8297ac16e2f1d);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_schemas_str_plain_options_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_7f8656af3c6d6707a60b61982f4d3f09_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_767a40093b95a5d38f077a250cce51b4_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_6817b22ad3de67d920ef4f9c053edec7_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_shift_str_plain_match_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_func_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_regex_str_plain_func_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_string_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_str_plain_search_value_str_plain_result_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_cb6cd02a66adc8bb4ff9dbe24785bd7e_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_schema_str_plain_definition_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_match_str_plain_self_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_d8b2a87f52e766225c7e648f654535a3_tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_regex_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_f39e0a442b6f0a667cbce6a7748dad25_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_5fe66f9238c5a9a525f05a12fb07b8e5_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_match_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_text_tuple);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_options_tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_8a0bab4e653bba3996f59abeb0abc803_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_979fd7028b220cce85f27133a04b2ec9_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_tuple_d7eface55a1aad863bc28308f8764e95_tuple);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tpl_str_plain_self_tuple);
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
void checkModuleConstants_linkify_it$main(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_sub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sub);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b5bc195df5e6006390ee2c75c96e23f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b5bc195df5e6006390ee2c75c96e23f);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fe71b40974e92f7a4ed2043bfd21fa9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2fe71b40974e92f7a4ed2043bfd21fa9);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_index);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a1a12be9855a138c41fd11242d4af0b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a1a12be9855a138c41fd11242d4af0b);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_076de46bf0c237a26e359476742abba1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_076de46bf0c237a26e359476742abba1);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_chr_39));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_39);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_chr_40));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_40);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_chr_41));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_41);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__index);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__last_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__last_index);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__text_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__text_cache);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__schema);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_last_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_last_index);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_http_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_http_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_e41e7eeda719ec0b98e622eed81c1021));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e41e7eeda719ec0b98e622eed81c1021);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_src_auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src_auth);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_src_host_port_strict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src_host_port_strict);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_src_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src_path);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_http));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_search);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_IGNORECASE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IGNORECASE);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_flags_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_flags_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_group);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_not_http_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_not_http_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_chr_94));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_94);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_145b8b17ab6196a6302e832e56b75800));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_145b8b17ab6196a6302e832e56b75800);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_src_domain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src_domain);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ff4082802365aae91cb2cd00c02d110));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ff4082802365aae91cb2cd00c02d110);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_src_domain_root));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src_domain_root);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_src_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src_port);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_src_host_terminator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src_host_terminator);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_not_http));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_not_http);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_chr_58));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_58);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mailto_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_mailto_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_src_email_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src_email_name);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_chr_64));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_64);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_src_host_strict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src_host_strict);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_mailto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mailto);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_func));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_func);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a791bd0ef10253f1e89f630f97b1a58));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9a791bd0ef10253f1e89f630f97b1a58);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_regex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_regex);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_f980854454706b7c9eb2d49a6b00e290));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f980854454706b7c9eb2d49a6b00e290);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalize);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_Match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Match);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__compiled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compiled);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_dict_fed71deb6e77035f3a68bee967e245c9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fed71deb6e77035f3a68bee967e245c9);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_options);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_1f107b5592452b1ca3d9912cb6908233));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1f107b5592452b1ca3d9912cb6908233);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_http));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__validate_http);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e2c70a5a0f80d40d559344c9edb38f3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e2c70a5a0f80d40d559344c9edb38f3);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_72e6227b83a1043eb932d0c0ee7901b8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72e6227b83a1043eb932d0c0ee7901b8);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_double_slash));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__validate_double_slash);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_59c33d34518c98b50110b8b5b227fe48));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59c33d34518c98b50110b8b5b227fe48);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_mailto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__validate_mailto);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_schemas));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_schemas);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_432ac424e0e7a46cb18bb44e5ab4e371));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_432ac424e0e7a46cb18bb44e5ab4e371);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_tlds_2ch_src_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tlds_2ch_src_re);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_list_b86b7fff8354fc143025b57125d1b527_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_b86b7fff8354fc143025b57125d1b527_list);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_tlds_default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tlds_default);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain__opts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__opts);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain__schemas));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__schemas);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain__tlds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__tlds);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain__tlds_replaced));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__tlds_replaced);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__compile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compile);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_build_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_build_re);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_deepcopy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deepcopy);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain__on_compile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__on_compile);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_src_xn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src_xn);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_chr_124));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_124);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_src_tlds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src_tlds);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_untpl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_untpl);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_43ce19c7636690b8f3d205941e7cc38b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43ce19c7636690b8f3d205941e7cc38b);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_tpl_email_fuzzy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tpl_email_fuzzy);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_email_fuzzy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_email_fuzzy);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_tpl_link_fuzzy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tpl_link_fuzzy);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_link_fuzzy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_link_fuzzy);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_tpl_link_no_ip_fuzzy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tpl_link_no_ip_fuzzy);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_link_no_ip_fuzzy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_link_no_ip_fuzzy);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_tpl_host_fuzzy_test));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tpl_host_fuzzy_test);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_host_fuzzy_test));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_host_fuzzy_test);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_dict_2be64c18c2ba44ac79d86a26f3b61da1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2be64c18c2ba44ac79d86a26f3b61da1);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_validate_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_validate_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_RE_TYPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RE_TYPE);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain__create_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__create_validator);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_MethodType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MethodType);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_FunctionType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FunctionType);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_LinkifyIt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LinkifyIt);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_SchemaError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SchemaError);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_normalize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_normalize_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain__create_normalizer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__create_normalizer);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_aliases));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aliases);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain__escape_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__escape_re);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8b3d4bf4d7079f3e044c74d046e5f88));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c8b3d4bf4d7079f3e044c74d046e5f88);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_src_ZPCc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src_ZPCc);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_7174c388a6fb32076c1a9a544f1f89be));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7174c388a6fb32076c1a9a544f1f89be);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema_test));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema_test);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema_search);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema_at_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema_at_start);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_785357e4228cd01595442309a893b3db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_785357e4228cd01595442309a893b3db);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4800cd4b7f4ff49de35572fba939821));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4800cd4b7f4ff49de35572fba939821);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_pretest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pretest);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain__reset_scan_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__reset_scan_cache);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_0b3d8613f1c725018ad3fc859bc6b856));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0b3d8613f1c725018ad3fc859bc6b856);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c4551cb997157afe3f5879b83cf36fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c4551cb997157afe3f5879b83cf36fd);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_028a8d8b52d5c73a872abe583047f749));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_028a8d8b52d5c73a872abe583047f749);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_80345a83bfd733f0b98d1e5eaa7356f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80345a83bfd733f0b98d1e5eaa7356f4);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_finditer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_finditer);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_groups));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_groups);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_test_schema_at));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_test_schema_at);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fuzzy_link_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_fuzzy_link_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1f107b5592452b1ca3d9912cb6908233_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_1f107b5592452b1ca3d9912cb6908233_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fuzzy_ip_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_fuzzy_ip_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fuzzy_email_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_fuzzy_email_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_59c33d34518c98b50110b8b5b227fe48_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_59c33d34518c98b50110b8b5b227fe48_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain__index_of));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__index_of);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_727a98a2ba8ea0edb605e42563c09dc3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_727a98a2ba8ea0edb605e42563c09dc3);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_62cbbec4d6e4dae0d31069741c4b1535));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_62cbbec4d6e4dae0d31069741c4b1535);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_453d5357fae4900c4d0e481e3ff57351));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_453d5357fae4900c4d0e481e3ff57351);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain__create_match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__create_match);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_test));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_test);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_tail));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tail);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_result);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_shift));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shift);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_6528643a15bbf15dd70cc6c3adda95b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6528643a15bbf15dd70cc6c3adda95b4);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_d95a093e424ce26a0771bb86b370d4bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d95a093e424ce26a0771bb86b370d4bf);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_extend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extend);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_sorted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sorted);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_dict_20f16b30e1951d468c3080dfc46b8748));
CHECK_OBJECT_DEEP(mod_consts.const_dict_20f16b30e1951d468c3080dfc46b8748);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_67845612039f625c4969a8b35aa23c63));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_67845612039f625c4969a8b35aa23c63);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c06a402579f6f9d9db7f3e04da983fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c06a402579f6f9d9db7f3e04da983fc);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3e3b3ce1263053e44c8863acf343d95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3e3b3ce1263053e44c8863acf343d95);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_42c58ca76c7358db8bf06cafcd21ac6e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_42c58ca76c7358db8bf06cafcd21ac6e);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_ucre));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ucre);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_build_re_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_build_re_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_empty_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_Exception_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_3608c08372d8bc24f99f76a759a6e0fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3608c08372d8bc24f99f76a759a6e0fa);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b3ca4a9129cbb14a0a166a88507096c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6b3ca4a9129cbb14a0a166a88507096c);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_int_pos_24));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_24);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_532893dea9d9676970dda8d0bb5d132a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_532893dea9d9676970dda8d0bb5d132a);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_9cf04f85e4c1c9bbc7e2bb16ecf2d1dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9cf04f85e4c1c9bbc7e2bb16ecf2d1dd);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_int_pos_32));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_32);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_b131589db03bda498bd43985fb3ba801));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b131589db03bda498bd43985fb3ba801);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_8aa20829481a290cb085ff6fa9e26858));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8aa20829481a290cb085ff6fa9e26858);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_c2d2e3278b6512038538f1d1be4307cc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c2d2e3278b6512038538f1d1be4307cc_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_d08fb44dfc2f4584ca27b6d591a42510));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d08fb44dfc2f4584ca27b6d591a42510);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_int_pos_66));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_66);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_e20049532541c25f568671115bb2f168));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e20049532541c25f568671115bb2f168);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_9195a20d6ff875491de4f276b7716113));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9195a20d6ff875491de4f276b7716113);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_e4b48846ab44d4d3d09c9c8337a16c2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e4b48846ab44d4d3d09c9c8337a16c2d);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_6c0a07a109a4097832add04594f3037a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6c0a07a109a4097832add04594f3037a);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_d06d42786bbe6b4350b2bc591cbb6d90));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d06d42786bbe6b4350b2bc591cbb6d90);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_c56e137e19f179c792667bda59a1aea2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c56e137e19f179c792667bda59a1aea2);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_da4ec12f10fb85b975c583c08f72c2d9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da4ec12f10fb85b975c583c08f72c2d9);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d882a62afd24a20297b88aefee0536e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d882a62afd24a20297b88aefee0536e);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_e9d810c75a33758e7cf5fee1ee90116a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e9d810c75a33758e7cf5fee1ee90116a);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5e2f4697253e5e11014381cb9f92b38));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a5e2f4697253e5e11014381cb9f92b38);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_b084b0862292aa69581c77930eef71cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b084b0862292aa69581c77930eef71cd);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3e714077525e1b7cbd27d070730ce22));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3e714077525e1b7cbd27d070730ce22);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_a83896f06ce103d2c5eb407afd687946));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a83896f06ce103d2c5eb407afd687946);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_f81d3aca3d43db1d81143691880cbbfb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f81d3aca3d43db1d81143691880cbbfb);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_649626aa05a795e673c17f141e82afde));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_649626aa05a795e673c17f141e82afde);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_match_at_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match_at_start);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_fbac77b33113858fbf4e5ac211d2e2cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fbac77b33113858fbf4e5ac211d2e2cd);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_tlds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tlds);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_22d8d09e85cb13fcbe88e4b9e18a2eef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22d8d09e85cb13fcbe88e4b9e18a2eef);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_digest_e7a5ffba8c80a260e3f041e4832c9d61));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e7a5ffba8c80a260e3f041e4832c9d61);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_7f3504c586763d69d681a95364dd08a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7f3504c586763d69d681a95364dd08a1);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d9ecf201a27f01e1787c3d6e4b89d96));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8d9ecf201a27f01e1787c3d6e4b89d96);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_f3f51b90ed64accf1eed389ad25e01a0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f3f51b90ed64accf1eed389ad25e01a0_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c270e98865e594b05d0c2fd0f29aa18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c270e98865e594b05d0c2fd0f29aa18);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e0a1325e9c69fb04ef8297ac16e2f1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4e0a1325e9c69fb04ef8297ac16e2f1d);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_schemas_str_plain_options_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_schemas_str_plain_options_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_7f8656af3c6d6707a60b61982f4d3f09_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7f8656af3c6d6707a60b61982f4d3f09_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_767a40093b95a5d38f077a250cce51b4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_767a40093b95a5d38f077a250cce51b4_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_6817b22ad3de67d920ef4f9c053edec7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6817b22ad3de67d920ef4f9c053edec7_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_shift_str_plain_match_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_shift_str_plain_match_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_func_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_func_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_regex_str_plain_func_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_regex_str_plain_func_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_string_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_string_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_str_plain_search_value_str_plain_result_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_text_str_plain_search_value_str_plain_result_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_cb6cd02a66adc8bb4ff9dbe24785bd7e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cb6cd02a66adc8bb4ff9dbe24785bd7e_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_schema_str_plain_definition_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_schema_str_plain_definition_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_match_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_match_str_plain_self_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_d8b2a87f52e766225c7e648f654535a3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d8b2a87f52e766225c7e648f654535a3_tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_regex_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_regex_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_f39e0a442b6f0a667cbce6a7748dad25_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f39e0a442b6f0a667cbce6a7748dad25_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_5fe66f9238c5a9a525f05a12fb07b8e5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5fe66f9238c5a9a525f05a12fb07b8e5_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_match_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_match_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_text_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_text_tuple);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_options_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_options_tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_8a0bab4e653bba3996f59abeb0abc803_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8a0bab4e653bba3996f59abeb0abc803_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_979fd7028b220cce85f27133a04b2ec9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_979fd7028b220cce85f27133a04b2ec9_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_tuple_d7eface55a1aad863bc28308f8764e95_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d7eface55a1aad863bc28308f8764e95_tuple);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tpl_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_tpl_str_plain_self_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 10
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
static PyObject *module_var_accessor_linkify_it$main$LinkifyIt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_linkify_it$main->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_linkify_it$main->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_LinkifyIt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_linkify_it$main->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LinkifyIt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LinkifyIt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LinkifyIt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LinkifyIt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_LinkifyIt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_LinkifyIt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LinkifyIt);
    }

    return result;
}

static PyObject *module_var_accessor_linkify_it$main$Match(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_linkify_it$main->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_linkify_it$main->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_Match);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_linkify_it$main->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Match);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Match, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Match);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Match, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_Match);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_Match);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Match);
    }

    return result;
}

static PyObject *module_var_accessor_linkify_it$main$RE_TYPE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_linkify_it$main->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_linkify_it$main->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_TYPE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_linkify_it$main->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RE_TYPE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RE_TYPE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RE_TYPE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RE_TYPE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_TYPE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_TYPE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_TYPE);
    }

    return result;
}

static PyObject *module_var_accessor_linkify_it$main$SchemaError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_linkify_it$main->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_linkify_it$main->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_linkify_it$main->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SchemaError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SchemaError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SchemaError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SchemaError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaError);
    }

    return result;
}

static PyObject *module_var_accessor_linkify_it$main$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_linkify_it$main->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_linkify_it$main->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_linkify_it$main->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_linkify_it$main$_escape_re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_linkify_it$main->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_linkify_it$main->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain__escape_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_linkify_it$main->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__escape_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__escape_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__escape_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__escape_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain__escape_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain__escape_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__escape_re);
    }

    return result;
}

static PyObject *module_var_accessor_linkify_it$main$_index_of(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_linkify_it$main->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_linkify_it$main->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain__index_of);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_linkify_it$main->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__index_of);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__index_of, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__index_of);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__index_of, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain__index_of);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain__index_of);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__index_of);
    }

    return result;
}

static PyObject *module_var_accessor_linkify_it$main$build_re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_linkify_it$main->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_linkify_it$main->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_build_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_linkify_it$main->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_build_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_build_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_build_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_build_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_build_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_build_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_build_re);
    }

    return result;
}

static PyObject *module_var_accessor_linkify_it$main$copy(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_linkify_it$main->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_linkify_it$main->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_linkify_it$main->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
    }

    return result;
}

static PyObject *module_var_accessor_linkify_it$main$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_linkify_it$main->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_linkify_it$main->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_linkify_it$main->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_8aa124487a2a9d454bd20ba4a8f24dc4;
static PyCodeObject *code_objects_efc2f34f304432cfd444cccf742c1c78;
static PyCodeObject *code_objects_3aefe6649194d2406c746dc6aad67651;
static PyCodeObject *code_objects_d53443ac3962f215474a4b10ef409374;
static PyCodeObject *code_objects_2da477f8be4030981f75472c0ccf1db8;
static PyCodeObject *code_objects_bcce927205a9e594705c7c09551f3176;
static PyCodeObject *code_objects_5c46894d34b19e2cf47fe95b2e33c5fb;
static PyCodeObject *code_objects_3a99cc121e82ab200fc6232d4b30ffa2;
static PyCodeObject *code_objects_e80dd1ac5438f707aafb4c3356cf68ee;
static PyCodeObject *code_objects_d6b84881652e6021a867367261e583b8;
static PyCodeObject *code_objects_86f578480448c0ad8599e78d28b8f05d;
static PyCodeObject *code_objects_2ee3ef687e935fed18396943cb3e1c0d;
static PyCodeObject *code_objects_d1d9369d81c92d7c5982bcae506247f2;
static PyCodeObject *code_objects_37e0a0fb16eeb27955931330d8d95c65;
static PyCodeObject *code_objects_b4d41e2a05c4a53435420ebcfcbbca9a;
static PyCodeObject *code_objects_da9ee8dc08d21e0c83fc3eac704d769d;
static PyCodeObject *code_objects_ddaa7b63824f1f4fab832d0340e9560e;
static PyCodeObject *code_objects_1fce047ec31f542ba849da372b3786f4;
static PyCodeObject *code_objects_b9d4e337a24e486690bdcc2e7b31852e;
static PyCodeObject *code_objects_796bfec33fd1005af8f9e7043ffa59bd;
static PyCodeObject *code_objects_662c3efc3c8b10932ae651841752fd14;
static PyCodeObject *code_objects_51c86ecc11943ac638a72469bd638517;
static PyCodeObject *code_objects_8c370e4ee89e98fa86283b4ca0e7daf3;
static PyCodeObject *code_objects_72004d8b61e01d033c0c262bbad5cf55;
static PyCodeObject *code_objects_ba9efc468569454750920f8afe138b5b;
static PyCodeObject *code_objects_5e23c10465925d4aceb5584f7b8ee7df;
static PyCodeObject *code_objects_df26d7b4b8f8d72714d9880617d07d4e;
static PyCodeObject *code_objects_544fc05c3ca5ad4fbec2f2aa992741c0;
static PyCodeObject *code_objects_ff4887a33de1aca760da6c3cb5a01e77;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_0c270e98865e594b05d0c2fd0f29aa18); CHECK_OBJECT(module_filename_obj);
code_objects_8aa124487a2a9d454bd20ba4a8f24dc4 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_4e0a1325e9c69fb04ef8297ac16e2f1d, mod_consts.const_str_digest_4e0a1325e9c69fb04ef8297ac16e2f1d, NULL, NULL, 0, 0, 0);
code_objects_efc2f34f304432cfd444cccf742c1c78 = MAKE_CODE_OBJECT(module_filename_obj, 24, 0, mod_consts.const_str_plain_SchemaError, mod_consts.const_str_plain_SchemaError, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3aefe6649194d2406c746dc6aad67651 = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_7d882a62afd24a20297b88aefee0536e, mod_consts.const_tuple_str_plain_self_str_plain_schemas_str_plain_options_tuple, NULL, 3, 0, 0);
code_objects_d53443ac3962f215474a4b10ef409374 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_8aa20829481a290cb085ff6fa9e26858, mod_consts.const_tuple_7f8656af3c6d6707a60b61982f4d3f09_tuple, NULL, 3, 0, 0);
code_objects_2da477f8be4030981f75472c0ccf1db8 = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_532893dea9d9676970dda8d0bb5d132a, mod_consts.const_tuple_767a40093b95a5d38f077a250cce51b4_tuple, mod_consts.const_tuple_str_plain___class___tuple, 3, 0, 0);
code_objects_bcce927205a9e594705c7c09551f3176 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_b131589db03bda498bd43985fb3ba801, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5c46894d34b19e2cf47fe95b2e33c5fb = MAKE_CODE_OBJECT(module_filename_obj, 251, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__compile, mod_consts.const_str_digest_e9d810c75a33758e7cf5fee1ee90116a, mod_consts.const_tuple_6817b22ad3de67d920ef4f9c053edec7_tuple, NULL, 1, 0, 0);
code_objects_3a99cc121e82ab200fc6232d4b30ffa2 = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__create_match, mod_consts.const_str_digest_da4ec12f10fb85b975c583c08f72c2d9, mod_consts.const_tuple_str_plain_self_str_plain_shift_str_plain_match_tuple, NULL, 2, 0, 0);
code_objects_e80dd1ac5438f707aafb4c3356cf68ee = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__create_normalizer, mod_consts.const_str_digest_c56e137e19f179c792667bda59a1aea2, mod_consts.const_tuple_str_plain_self_str_plain_func_tuple, NULL, 1, 0, 0);
code_objects_d6b84881652e6021a867367261e583b8 = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__create_validator, mod_consts.const_str_digest_d06d42786bbe6b4350b2bc591cbb6d90, mod_consts.const_tuple_str_plain_self_str_plain_regex_str_plain_func_tuple, NULL, 2, 0, 0);
code_objects_86f578480448c0ad8599e78d28b8f05d = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__escape_re, mod_consts.const_str_plain__escape_re, mod_consts.const_tuple_str_plain_string_tuple, NULL, 1, 0, 0);
code_objects_2ee3ef687e935fed18396943cb3e1c0d = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__index_of, mod_consts.const_str_plain__index_of, mod_consts.const_tuple_str_plain_text_str_plain_search_value_str_plain_result_tuple, NULL, 2, 0, 0);
code_objects_d1d9369d81c92d7c5982bcae506247f2 = MAKE_CODE_OBJECT(module_filename_obj, 640, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__on_compile, mod_consts.const_str_digest_8d9ecf201a27f01e1787c3d6e4b89d96, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_37e0a0fb16eeb27955931330d8d95c65 = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__reset_scan_cache, mod_consts.const_str_digest_6c0a07a109a4097832add04594f3037a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b4d41e2a05c4a53435420ebcfcbbca9a = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__validate_double_slash, mod_consts.const_str_digest_9195a20d6ff875491de4f276b7716113, mod_consts.const_tuple_cb6cd02a66adc8bb4ff9dbe24785bd7e_tuple, NULL, 3, 0, 0);
code_objects_da9ee8dc08d21e0c83fc3eac704d769d = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__validate_http, mod_consts.const_str_digest_e20049532541c25f568671115bb2f168, mod_consts.const_tuple_cb6cd02a66adc8bb4ff9dbe24785bd7e_tuple, NULL, 3, 0, 0);
code_objects_ddaa7b63824f1f4fab832d0340e9560e = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__validate_mailto, mod_consts.const_str_digest_e4b48846ab44d4d3d09c9c8337a16c2d, mod_consts.const_tuple_cb6cd02a66adc8bb4ff9dbe24785bd7e_tuple, NULL, 3, 0, 0);
code_objects_1fce047ec31f542ba849da372b3786f4 = MAKE_CODE_OBJECT(module_filename_obj, 374, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_add, mod_consts.const_str_digest_a5e2f4697253e5e11014381cb9f92b38, mod_consts.const_tuple_str_plain_self_str_plain_schema_str_plain_definition_tuple, NULL, 3, 0, 0);
code_objects_b9d4e337a24e486690bdcc2e7b31852e = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_func, mod_consts.const_str_digest_f980854454706b7c9eb2d49a6b00e290, mod_consts.const_tuple_str_plain_match_str_plain_self_tuple, mod_consts.const_tuple_str_plain_self_tuple, 1, 0, 0);
code_objects_796bfec33fd1005af8f9e7043ffa59bd = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_func, mod_consts.const_str_digest_9a791bd0ef10253f1e89f630f97b1a58, mod_consts.const_tuple_d8b2a87f52e766225c7e648f654535a3_tuple, mod_consts.const_tuple_str_plain_regex_tuple, 2, 0, 0);
code_objects_662c3efc3c8b10932ae651841752fd14 = MAKE_CODE_OBJECT(module_filename_obj, 521, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_match, mod_consts.const_str_digest_649626aa05a795e673c17f141e82afde, mod_consts.const_tuple_f39e0a442b6f0a667cbce6a7748dad25_tuple, NULL, 2, 0, 0);
code_objects_51c86ecc11943ac638a72469bd638517 = MAKE_CODE_OBJECT(module_filename_obj, 563, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_match_at_start, mod_consts.const_str_digest_fbac77b33113858fbf4e5ac211d2e2cd, mod_consts.const_tuple_5fe66f9238c5a9a525f05a12fb07b8e5_tuple, NULL, 2, 0, 0);
code_objects_8c370e4ee89e98fa86283b4ca0e7daf3 = MAKE_CODE_OBJECT(module_filename_obj, 626, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_normalize, mod_consts.const_str_digest_e7a5ffba8c80a260e3f041e4832c9d61, mod_consts.const_tuple_str_plain_self_str_plain_match_tuple, NULL, 2, 0, 0);
code_objects_72004d8b61e01d033c0c262bbad5cf55 = MAKE_CODE_OBJECT(module_filename_obj, 487, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_pretest, mod_consts.const_str_digest_a83896f06ce103d2c5eb407afd687946, mod_consts.const_tuple_str_plain_self_str_plain_text_tuple, NULL, 2, 0, 0);
code_objects_ba9efc468569454750920f8afe138b5b = MAKE_CODE_OBJECT(module_filename_obj, 394, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_set, mod_consts.const_str_digest_b084b0862292aa69581c77930eef71cd, mod_consts.const_tuple_str_plain_self_str_plain_options_tuple, NULL, 2, 0, 0);
code_objects_5e23c10465925d4aceb5584f7b8ee7df = MAKE_CODE_OBJECT(module_filename_obj, 409, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_test, mod_consts.const_str_digest_c3e714077525e1b7cbd27d070730ce22, mod_consts.const_tuple_8a0bab4e653bba3996f59abeb0abc803_tuple, NULL, 2, 0, 0);
code_objects_df26d7b4b8f8d72714d9880617d07d4e = MAKE_CODE_OBJECT(module_filename_obj, 504, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_test_schema_at, mod_consts.const_str_digest_f81d3aca3d43db1d81143691880cbbfb, mod_consts.const_tuple_979fd7028b220cce85f27133a04b2ec9_tuple, NULL, 4, 0, 0);
code_objects_544fc05c3ca5ad4fbec2f2aa992741c0 = MAKE_CODE_OBJECT(module_filename_obj, 595, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_tlds, mod_consts.const_str_digest_22d8d09e85cb13fcbe88e4b9e18a2eef, mod_consts.const_tuple_d7eface55a1aad863bc28308f8764e95_tuple, NULL, 3, 0, 0);
code_objects_ff4887a33de1aca760da6c3cb5a01e77 = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_untpl, mod_consts.const_str_digest_43ce19c7636690b8f3d205941e7cc38b, mod_consts.const_tuple_str_plain_tpl_str_plain_self_tuple, mod_consts.const_tuple_str_plain_self_tuple, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__10__create_validator(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__10__create_validator$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__11__create_normalizer(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__11__create_normalizer$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__12__create_match(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__13___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__14__compile(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__14__compile$$$function__1_untpl(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__15_add(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__16_set(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__17_test(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__18_pretest(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__19_test_schema_at(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__1__escape_re(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__20_match(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__21_match_at_start(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__22_tlds(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__23_normalize(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__24__on_compile(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__2__index_of(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__3___init__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__4___repr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__5___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__6__validate_http(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__7__validate_double_slash(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__8__validate_mailto(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__9__reset_scan_cache(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_linkify_it$main$$$function__1__escape_re(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_string = python_pars[0];
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__1__escape_re;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__1__escape_re = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__1__escape_re)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__1__escape_re);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__1__escape_re == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__1__escape_re = MAKE_FUNCTION_FRAME(tstate, code_objects_86f578480448c0ad8599e78d28b8f05d, module_linkify_it$main, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__1__escape_re->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__1__escape_re = cache_frame_frame_linkify_it$main$$$function__1__escape_re;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__1__escape_re);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__1__escape_re) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_1 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_2b5bc195df5e6006390ee2c75c96e23f;
tmp_args_element_value_2 = mod_consts.const_str_digest_2fe71b40974e92f7a4ed2043bfd21fa9;
CHECK_OBJECT(par_string);
tmp_args_element_value_3 = par_string;
frame_frame_linkify_it$main$$$function__1__escape_re->m_frame.f_lineno = 12;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_sub,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__1__escape_re, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__1__escape_re->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__1__escape_re, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__1__escape_re,
    type_description_1,
    par_string
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__1__escape_re == cache_frame_frame_linkify_it$main$$$function__1__escape_re) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__1__escape_re);
    cache_frame_frame_linkify_it$main$$$function__1__escape_re = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__1__escape_re);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_string);
Py_DECREF(par_string);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_string);
Py_DECREF(par_string);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__2__index_of(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_text = python_pars[0];
PyObject *par_search_value = python_pars[1];
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__2__index_of;
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
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__2__index_of = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__2__index_of)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__2__index_of);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__2__index_of == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__2__index_of = MAKE_FUNCTION_FRAME(tstate, code_objects_2ee3ef687e935fed18396943cb3e1c0d, module_linkify_it$main, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__2__index_of->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__2__index_of = cache_frame_frame_linkify_it$main$$$function__2__index_of;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__2__index_of);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__2__index_of) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_text);
tmp_expression_value_1 = par_text;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_index);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_search_value);
tmp_args_element_value_1 = par_search_value;
frame_frame_linkify_it$main$$$function__2__index_of->m_frame.f_lineno = 17;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(var_result == NULL);
var_result = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__2__index_of, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__2__index_of, exception_keeper_lineno_1);
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
tmp_assign_source_2 = const_int_neg_1;
assert(var_result == NULL);
Py_INCREF(tmp_assign_source_2);
var_result = tmp_assign_source_2;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 16;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_linkify_it$main$$$function__2__index_of->m_frame)) {
        frame_frame_linkify_it$main$$$function__2__index_of->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_end_1:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__2__index_of, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__2__index_of->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__2__index_of, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__2__index_of,
    type_description_1,
    par_text,
    par_search_value,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__2__index_of == cache_frame_frame_linkify_it$main$$$function__2__index_of) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__2__index_of);
    cache_frame_frame_linkify_it$main$$$function__2__index_of = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__2__index_of);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_result);
tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
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
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_search_value);
Py_DECREF(par_search_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_search_value);
Py_DECREF(par_search_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_val = python_pars[2];
PyObject *var_message = NULL;
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2da477f8be4030981f75472c0ccf1db8, module_linkify_it$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__3___init__->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__3___init__ = cache_frame_frame_linkify_it$main$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__3___init__);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__3___init__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_5a1a12be9855a138c41fd11242d4af0b;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_name);
tmp_format_value_1 = par_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooooc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_076de46bf0c237a26e359476742abba1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_val);
tmp_format_value_2 = par_val;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooooc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_39;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_1 == NULL));
assert(var_message == NULL);
var_message = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 29;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_linkify_it$main, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_message);
tmp_args_element_value_1 = var_message;
frame_frame_linkify_it$main$$$function__3___init__->m_frame.f_lineno = 29;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain___init__, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__3___init__,
    type_description_1,
    par_self,
    par_name,
    par_val,
    var_message,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__3___init__ == cache_frame_frame_linkify_it$main$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__3___init__);
    cache_frame_frame_linkify_it$main$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__3___init__);

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
CHECK_OBJECT(var_message);
CHECK_OBJECT(var_message);
Py_DECREF(var_message);
var_message = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_message);
var_message = NULL;
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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_val);
Py_DECREF(par_val);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_val);
Py_DECREF(par_val);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__4___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__4___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__4___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__4___repr__)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__4___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__4___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__4___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_bcce927205a9e594705c7c09551f3176, module_linkify_it$main, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__4___repr__->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__4___repr__ = cache_frame_frame_linkify_it$main$$$function__4___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__4___repr__);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__4___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___module__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 6);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_40;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_5);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__4___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__4___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__4___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__4___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__4___repr__ == cache_frame_frame_linkify_it$main$$$function__4___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__4___repr__);
    cache_frame_frame_linkify_it$main$$$function__4___repr__ = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__4___repr__);

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


static PyObject *impl_linkify_it$main$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_linkifyit = python_pars[1];
PyObject *par_shift = python_pars[2];
PyObject *var_start = NULL;
PyObject *var_end = NULL;
PyObject *var_text = NULL;
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d53443ac3962f215474a4b10ef409374, module_linkify_it$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__5___init__->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__5___init__ = cache_frame_frame_linkify_it$main$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__5___init__);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_linkifyit);
tmp_expression_value_1 = par_linkifyit;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__index);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_start == NULL);
var_start = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_linkifyit);
tmp_expression_value_2 = par_linkifyit;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__last_index);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_end == NULL);
var_end = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(par_linkifyit);
tmp_expression_value_4 = par_linkifyit;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__text_cache);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_start);
tmp_start_value_1 = var_start;
CHECK_OBJECT(var_end);
tmp_stop_value_1 = var_end;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_text == NULL);
var_text = tmp_assign_source_3;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_linkifyit);
tmp_expression_value_6 = par_linkifyit;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__schema);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__5___init__->m_frame.f_lineno = 58;
tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_schema, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var_start);
tmp_add_expr_left_1 = var_start;
CHECK_OBJECT(par_shift);
tmp_add_expr_right_1 = par_shift;
tmp_assattr_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_index, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_end);
tmp_add_expr_left_2 = var_end;
CHECK_OBJECT(par_shift);
tmp_add_expr_right_2 = par_shift;
tmp_assattr_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_last_index, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(var_text);
tmp_assattr_value_4 = var_text;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_raw, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(var_text);
tmp_assattr_value_5 = var_text;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_text, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(var_text);
tmp_assattr_value_6 = var_text;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_url, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__5___init__,
    type_description_1,
    par_self,
    par_linkifyit,
    par_shift,
    var_start,
    var_end,
    var_text
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__5___init__ == cache_frame_frame_linkify_it$main$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__5___init__);
    cache_frame_frame_linkify_it$main$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__5___init__);

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
CHECK_OBJECT(var_start);
CHECK_OBJECT(var_start);
Py_DECREF(var_start);
var_start = NULL;
CHECK_OBJECT(var_end);
CHECK_OBJECT(var_end);
Py_DECREF(var_end);
var_end = NULL;
CHECK_OBJECT(var_text);
CHECK_OBJECT(var_text);
Py_DECREF(var_text);
var_text = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_end);
var_end = NULL;
Py_XDECREF(var_text);
var_text = NULL;
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
CHECK_OBJECT(par_linkifyit);
Py_DECREF(par_linkifyit);
CHECK_OBJECT(par_shift);
Py_DECREF(par_shift);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_linkifyit);
Py_DECREF(par_linkifyit);
CHECK_OBJECT(par_shift);
Py_DECREF(par_shift);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__6__validate_http(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_text = python_pars[1];
PyObject *par_pos = python_pars[2];
PyObject *var_tail = NULL;
PyObject *var_founds = NULL;
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__6__validate_http;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__6__validate_http = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__6__validate_http)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__6__validate_http);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__6__validate_http == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__6__validate_http = MAKE_FUNCTION_FRAME(tstate, code_objects_da9ee8dc08d21e0c83fc3eac704d769d, module_linkify_it$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__6__validate_http->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__6__validate_http = cache_frame_frame_linkify_it$main$$$function__6__validate_http;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__6__validate_http);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__6__validate_http) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(par_text);
tmp_expression_value_1 = par_text;
CHECK_OBJECT(par_pos);
tmp_start_value_1 = par_pos;
tmp_stop_value_1 = Py_None;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_tail == NULL);
var_tail = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_re);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__6__validate_http->m_frame.f_lineno = 109;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_http_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_ass_subscript_1;
tmp_add_expr_left_3 = mod_consts.const_str_digest_e41e7eeda719ec0b98e622eed81c1021;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_re);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_str_plain_src_auth;
tmp_add_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_re);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 115;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = mod_consts.const_str_plain_src_host_port_strict;
tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 115;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_re);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 116;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = mod_consts.const_str_plain_src_path;
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 116;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_re);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 112;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_http;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_5;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_14;
tmp_expression_value_11 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_search);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_re);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 119;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = mod_consts.const_str_plain_http;
tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 119;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_tail);
tmp_kw_call_arg_value_1_1 = var_tail;
tmp_expression_value_14 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 119;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_IGNORECASE);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 119;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__6__validate_http->m_frame.f_lineno = 119;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_founds == NULL);
var_founds = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_founds);
tmp_truth_name_1 = CHECK_IF_TRUE(var_founds);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_len_arg_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_founds);
tmp_called_instance_1 = var_founds;
frame_frame_linkify_it$main$$$function__6__validate_http->m_frame.f_lineno = 121;
tmp_len_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_group);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__6__validate_http, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__6__validate_http->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__6__validate_http, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__6__validate_http,
    type_description_1,
    par_self,
    par_text,
    par_pos,
    var_tail,
    var_founds
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__6__validate_http == cache_frame_frame_linkify_it$main$$$function__6__validate_http) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__6__validate_http);
    cache_frame_frame_linkify_it$main$$$function__6__validate_http = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__6__validate_http);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_tail);
CHECK_OBJECT(var_tail);
Py_DECREF(var_tail);
var_tail = NULL;
CHECK_OBJECT(var_founds);
CHECK_OBJECT(var_founds);
Py_DECREF(var_founds);
var_founds = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_tail);
var_tail = NULL;
Py_XDECREF(var_founds);
var_founds = NULL;
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
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_pos);
Py_DECREF(par_pos);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_pos);
Py_DECREF(par_pos);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__7__validate_double_slash(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_text = python_pars[1];
PyObject *par_pos = python_pars[2];
PyObject *var_tail = NULL;
PyObject *var_founds = NULL;
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__7__validate_double_slash;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__7__validate_double_slash = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__7__validate_double_slash)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__7__validate_double_slash);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__7__validate_double_slash == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__7__validate_double_slash = MAKE_FUNCTION_FRAME(tstate, code_objects_b4d41e2a05c4a53435420ebcfcbbca9a, module_linkify_it$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__7__validate_double_slash->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__7__validate_double_slash = cache_frame_frame_linkify_it$main$$$function__7__validate_double_slash;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__7__validate_double_slash);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__7__validate_double_slash) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(par_text);
tmp_expression_value_1 = par_text;
CHECK_OBJECT(par_pos);
tmp_start_value_1 = par_pos;
tmp_stop_value_1 = Py_None;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_tail == NULL);
var_tail = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_re);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__7__validate_double_slash->m_frame.f_lineno = 128;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_not_http_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
PyObject *tmp_add_expr_left_9;
PyObject *tmp_add_expr_right_9;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_7;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_ass_subscript_1;
tmp_add_expr_left_9 = mod_consts.const_str_chr_94;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_re);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_str_plain_src_auth;
tmp_add_expr_right_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_add_expr_right_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
CHECK_OBJECT(tmp_add_expr_right_9);
Py_DECREF(tmp_add_expr_right_9);
if (tmp_add_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_8 = mod_consts.const_str_digest_145b8b17ab6196a6302e832e56b75800;
tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_8, tmp_add_expr_right_8);
CHECK_OBJECT(tmp_add_expr_left_8);
Py_DECREF(tmp_add_expr_left_8);
if (tmp_add_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_re);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_7);

exception_lineno = 135;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = mod_consts.const_str_plain_src_domain;
tmp_add_expr_right_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_add_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_7);

exception_lineno = 135;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_left_7);
Py_DECREF(tmp_add_expr_left_7);
CHECK_OBJECT(tmp_add_expr_right_7);
Py_DECREF(tmp_add_expr_right_7);
if (tmp_add_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_6 = mod_consts.const_str_digest_5ff4082802365aae91cb2cd00c02d110;
tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_left_6);
Py_DECREF(tmp_add_expr_left_6);
if (tmp_add_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_re);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_5);

exception_lineno = 137;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = mod_consts.const_str_plain_src_domain_root;
tmp_add_expr_right_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_add_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_5);

exception_lineno = 137;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
CHECK_OBJECT(tmp_add_expr_right_5);
Py_DECREF(tmp_add_expr_right_5);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_4 = mod_consts.const_str_chr_41;
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_re);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 139;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = mod_consts.const_str_plain_src_port;
tmp_add_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 139;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_re);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 140;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_6 = mod_consts.const_str_plain_src_host_terminator;
tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 140;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_re);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 141;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_7 = mod_consts.const_str_plain_src_path;
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_7);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 141;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_re);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 131;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_not_http;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_17;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_8;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_20;
tmp_expression_value_17 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_search);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_19 = par_self;
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_re);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 144;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_8 = mod_consts.const_str_plain_not_http;
tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_8);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 144;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_tail);
tmp_kw_call_arg_value_1_1 = var_tail;
tmp_expression_value_20 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 144;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_IGNORECASE);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 144;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__7__validate_double_slash->m_frame.f_lineno = 144;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_founds == NULL);
var_founds = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_founds);
tmp_truth_name_1 = CHECK_IF_TRUE(var_founds);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_9;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(par_pos);
tmp_cmp_expr_left_1 = par_pos;
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_3;
tmp_and_left_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_text);
tmp_expression_value_21 = par_text;
CHECK_OBJECT(par_pos);
tmp_sub_expr_left_1 = par_pos;
tmp_sub_expr_right_1 = mod_consts.const_int_pos_3;
tmp_subscript_value_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_subscript_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_9);
CHECK_OBJECT(tmp_subscript_value_9);
Py_DECREF(tmp_subscript_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_chr_58;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_10;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
CHECK_OBJECT(par_pos);
tmp_cmp_expr_left_3 = par_pos;
tmp_cmp_expr_right_3 = mod_consts.const_int_pos_3;
tmp_and_left_value_2 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_text);
tmp_expression_value_22 = par_text;
CHECK_OBJECT(par_pos);
tmp_sub_expr_left_2 = par_pos;
tmp_sub_expr_right_2 = mod_consts.const_int_pos_3;
tmp_subscript_value_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_subscript_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = const_str_slash;
tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_4 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;
{
PyObject *tmp_len_arg_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_founds);
tmp_called_instance_1 = var_founds;
frame_frame_linkify_it$main$$$function__7__validate_double_slash->m_frame.f_lineno = 152;
tmp_len_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__7__validate_double_slash, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__7__validate_double_slash->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__7__validate_double_slash, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__7__validate_double_slash,
    type_description_1,
    par_self,
    par_text,
    par_pos,
    var_tail,
    var_founds
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__7__validate_double_slash == cache_frame_frame_linkify_it$main$$$function__7__validate_double_slash) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__7__validate_double_slash);
    cache_frame_frame_linkify_it$main$$$function__7__validate_double_slash = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__7__validate_double_slash);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_tail);
CHECK_OBJECT(var_tail);
Py_DECREF(var_tail);
var_tail = NULL;
CHECK_OBJECT(var_founds);
CHECK_OBJECT(var_founds);
Py_DECREF(var_founds);
var_founds = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_tail);
var_tail = NULL;
Py_XDECREF(var_founds);
var_founds = NULL;
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
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_pos);
Py_DECREF(par_pos);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_pos);
Py_DECREF(par_pos);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__8__validate_mailto(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_text = python_pars[1];
PyObject *par_pos = python_pars[2];
PyObject *var_tail = NULL;
PyObject *var_founds = NULL;
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__8__validate_mailto;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__8__validate_mailto = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__8__validate_mailto)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__8__validate_mailto);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__8__validate_mailto == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__8__validate_mailto = MAKE_FUNCTION_FRAME(tstate, code_objects_ddaa7b63824f1f4fab832d0340e9560e, module_linkify_it$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__8__validate_mailto->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__8__validate_mailto = cache_frame_frame_linkify_it$main$$$function__8__validate_mailto;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__8__validate_mailto);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__8__validate_mailto) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(par_text);
tmp_expression_value_1 = par_text;
CHECK_OBJECT(par_pos);
tmp_start_value_1 = par_pos;
tmp_stop_value_1 = Py_None;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_tail == NULL);
var_tail = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_re);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__8__validate_mailto->m_frame.f_lineno = 159;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_mailto_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_ass_subscript_1;
tmp_add_expr_left_3 = mod_consts.const_str_chr_94;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_re);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_str_plain_src_email_name;
tmp_add_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = mod_consts.const_str_chr_64;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_re);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 161;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = mod_consts.const_str_plain_src_host_strict;
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 161;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_re);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 160;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_mailto;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_4;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_12;
tmp_expression_value_9 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_search);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_re);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 164;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = mod_consts.const_str_plain_mailto;
tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 164;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_tail);
tmp_kw_call_arg_value_1_1 = var_tail;
tmp_expression_value_12 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 164;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_IGNORECASE);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 164;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__8__validate_mailto->m_frame.f_lineno = 164;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_founds == NULL);
var_founds = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_founds);
tmp_truth_name_1 = CHECK_IF_TRUE(var_founds);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_len_arg_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_founds);
tmp_called_instance_1 = var_founds;
frame_frame_linkify_it$main$$$function__8__validate_mailto->m_frame.f_lineno = 166;
tmp_len_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__8__validate_mailto, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__8__validate_mailto->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__8__validate_mailto, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__8__validate_mailto,
    type_description_1,
    par_self,
    par_text,
    par_pos,
    var_tail,
    var_founds
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__8__validate_mailto == cache_frame_frame_linkify_it$main$$$function__8__validate_mailto) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__8__validate_mailto);
    cache_frame_frame_linkify_it$main$$$function__8__validate_mailto = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__8__validate_mailto);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_tail);
CHECK_OBJECT(var_tail);
Py_DECREF(var_tail);
var_tail = NULL;
CHECK_OBJECT(var_founds);
CHECK_OBJECT(var_founds);
Py_DECREF(var_founds);
var_founds = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_tail);
var_tail = NULL;
Py_XDECREF(var_founds);
var_founds = NULL;
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
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_pos);
Py_DECREF(par_pos);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_pos);
Py_DECREF(par_pos);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__9__reset_scan_cache(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__9__reset_scan_cache;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__9__reset_scan_cache = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__9__reset_scan_cache)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__9__reset_scan_cache);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__9__reset_scan_cache == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__9__reset_scan_cache = MAKE_FUNCTION_FRAME(tstate, code_objects_37e0a0fb16eeb27955931330d8d95c65, module_linkify_it$main, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__9__reset_scan_cache->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__9__reset_scan_cache = cache_frame_frame_linkify_it$main$$$function__9__reset_scan_cache;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__9__reset_scan_cache);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__9__reset_scan_cache) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = const_int_neg_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__index, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = const_str_empty;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__text_cache, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__9__reset_scan_cache, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__9__reset_scan_cache->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__9__reset_scan_cache, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__9__reset_scan_cache,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__9__reset_scan_cache == cache_frame_frame_linkify_it$main$$$function__9__reset_scan_cache) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__9__reset_scan_cache);
    cache_frame_frame_linkify_it$main$$$function__9__reset_scan_cache = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__9__reset_scan_cache);

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


static PyObject *impl_linkify_it$main$$$function__10__create_validator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_CellObject *par_regex = Nuitka_Cell_New1(python_pars[1]);
PyObject *var_func = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_regex;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_1 = MAKE_FUNCTION_linkify_it$main$$$function__10__create_validator$$$function__1_func(tstate, tmp_closure_1);

assert(var_func == NULL);
var_func = tmp_assign_source_1;
}
// Tried code:
CHECK_OBJECT(var_func);
tmp_return_value = var_func;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_regex);
CHECK_OBJECT(par_regex);
Py_DECREF(par_regex);
par_regex = NULL;
CHECK_OBJECT(var_func);
CHECK_OBJECT(var_func);
Py_DECREF(var_func);
var_func = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_linkify_it$main$$$function__10__create_validator$$$function__1_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_text = python_pars[0];
PyObject *par_pos = python_pars[1];
PyObject *var_tail = NULL;
PyObject *var_founds = NULL;
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func = MAKE_FUNCTION_FRAME(tstate, code_objects_796bfec33fd1005af8f9e7043ffa59bd, module_linkify_it$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func = cache_frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(par_text);
tmp_expression_value_1 = par_text;
CHECK_OBJECT(par_pos);
tmp_start_value_1 = par_pos;
tmp_stop_value_1 = Py_None;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
assert(var_tail == NULL);
var_tail = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_regex);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 177;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_isinstance_inst_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ooooc";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_search);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_regex);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 178;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(var_tail);
tmp_kw_call_arg_value_1_1 = var_tail;
tmp_expression_value_3 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 178;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_IGNORECASE);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 178;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func->m_frame.f_lineno = 178;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
assert(var_founds == NULL);
var_founds = tmp_assign_source_2;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_4 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_search);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_regex);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 181;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(var_tail);
tmp_args_element_value_2 = var_tail;
frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func->m_frame.f_lineno = 181;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
assert(var_founds == NULL);
var_founds = tmp_assign_source_3;
}
branch_end_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_founds);
tmp_truth_name_1 = CHECK_IF_TRUE(var_founds);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_len_arg_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_founds);
tmp_called_instance_1 = var_founds;
frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func->m_frame.f_lineno = 184;
tmp_len_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func,
    type_description_1,
    par_text,
    par_pos,
    var_tail,
    var_founds,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func == cache_frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func);
    cache_frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__10__create_validator$$$function__1_func);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_tail);
CHECK_OBJECT(var_tail);
Py_DECREF(var_tail);
var_tail = NULL;
CHECK_OBJECT(var_founds);
CHECK_OBJECT(var_founds);
Py_DECREF(var_founds);
var_founds = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_tail);
var_tail = NULL;
Py_XDECREF(var_founds);
var_founds = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_pos);
Py_DECREF(par_pos);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_pos);
Py_DECREF(par_pos);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__11__create_normalizer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *var_func = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_1 = MAKE_FUNCTION_linkify_it$main$$$function__11__create_normalizer$$$function__1_func(tstate, tmp_closure_1);

assert(var_func == NULL);
var_func = tmp_assign_source_1;
}
// Tried code:
CHECK_OBJECT(var_func);
tmp_return_value = var_func;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(var_func);
CHECK_OBJECT(var_func);
Py_DECREF(var_func);
var_func = NULL;
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


static PyObject *impl_linkify_it$main$$$function__11__create_normalizer$$$function__1_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_match = python_pars[0];
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func = MAKE_FUNCTION_FRAME(tstate, code_objects_b9d4e337a24e486690bdcc2e7b31852e, module_linkify_it$main, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func = cache_frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_match);
tmp_args_element_value_1 = par_match;
frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func->m_frame.f_lineno = 192;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_normalize, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func,
    type_description_1,
    par_match,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func == cache_frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func);
    cache_frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__11__create_normalizer$$$function__1_func);

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
CHECK_OBJECT(par_match);
Py_DECREF(par_match);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_match);
Py_DECREF(par_match);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__12__create_match(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_shift = python_pars[1];
PyObject *var_match = NULL;
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__12__create_match;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__12__create_match = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__12__create_match)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__12__create_match);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__12__create_match == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__12__create_match = MAKE_FUNCTION_FRAME(tstate, code_objects_3a99cc121e82ab200fc6232d4b30ffa2, module_linkify_it$main, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__12__create_match->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__12__create_match = cache_frame_frame_linkify_it$main$$$function__12__create_match;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__12__create_match);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__12__create_match) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_linkify_it$main$Match(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Match);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_shift);
tmp_args_element_value_2 = par_shift;
frame_frame_linkify_it$main$$$function__12__create_match->m_frame.f_lineno = 197;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_match == NULL);
var_match = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__compiled);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_match);
tmp_expression_value_4 = var_match;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_schema);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_2);

exception_lineno = 198;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_str_plain_normalize;
tmp_called_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_match);
tmp_args_element_value_3 = var_match;
frame_frame_linkify_it$main$$$function__12__create_match->m_frame.f_lineno = 198;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__12__create_match, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__12__create_match->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__12__create_match, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__12__create_match,
    type_description_1,
    par_self,
    par_shift,
    var_match
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__12__create_match == cache_frame_frame_linkify_it$main$$$function__12__create_match) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__12__create_match);
    cache_frame_frame_linkify_it$main$$$function__12__create_match = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__12__create_match);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_match);
tmp_return_value = var_match;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_match);
CHECK_OBJECT(var_match);
Py_DECREF(var_match);
var_match = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_match);
var_match = NULL;
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
CHECK_OBJECT(par_shift);
Py_DECREF(par_shift);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_shift);
Py_DECREF(par_shift);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__13___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_schemas = python_pars[1];
PyObject *par_options = python_pars[2];
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__13___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__13___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__13___init__)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__13___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__13___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__13___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3aefe6649194d2406c746dc6aad67651, module_linkify_it$main, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__13___init__->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__13___init__ = cache_frame_frame_linkify_it$main$$$function__13___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__13___init__);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__13___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = DICT_COPY(tstate, mod_consts.const_dict_fed71deb6e77035f3a68bee967e245c9);
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_default_options, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_2;
tmp_dict_key_1 = mod_consts.const_str_digest_1f107b5592452b1ca3d9912cb6908233;
tmp_dict_key_2 = mod_consts.const_str_plain_validate;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__validate_http);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_assattr_value_2 = _PyDict_NewPresized( 5 );
{
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_expression_value_3;
tmp_res = PyDict_SetItem(tmp_assattr_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_8e2c70a5a0f80d40d559344c9edb38f3;
tmp_dict_value_1 = mod_consts.const_str_digest_1f107b5592452b1ca3d9912cb6908233;
tmp_res = PyDict_SetItem(tmp_assattr_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_72e6227b83a1043eb932d0c0ee7901b8;
tmp_dict_value_1 = mod_consts.const_str_digest_1f107b5592452b1ca3d9912cb6908233;
tmp_res = PyDict_SetItem(tmp_assattr_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360;
tmp_dict_key_3 = mod_consts.const_str_plain_validate;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__validate_double_slash);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_res = PyDict_SetItem(tmp_assattr_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_59c33d34518c98b50110b8b5b227fe48;
tmp_dict_key_4 = mod_consts.const_str_plain_validate;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__validate_mailto);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_res = PyDict_SetItem(tmp_assattr_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assattr_value_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_default_schemas, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = mod_consts.const_str_digest_432ac424e0e7a46cb18bb44e5ab4e371;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_tlds_2ch_src_re, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = LIST_COPY(tstate, mod_consts.const_list_b86b7fff8354fc143025b57125d1b527_list);
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_tlds_default, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_options);
tmp_truth_name_1 = CHECK_IF_TRUE(par_options);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
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
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_default_options);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_update);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_options);
tmp_args_element_value_1 = par_options;
frame_frame_linkify_it$main$$$function__13___init__->m_frame.f_lineno = 225;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_default_options);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__opts, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_assattr_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_default_options);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__opts, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_end_1:;
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
tmp_assattr_value_7 = const_int_neg_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__index, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
tmp_assattr_value_8 = const_int_neg_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__last_index, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
tmp_assattr_value_9 = const_str_empty;
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain__schema, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_assattr_target_10;
tmp_assattr_value_10 = const_str_empty;
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain__text_cache, tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_schemas);
tmp_truth_name_2 = CHECK_IF_TRUE(par_schemas);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_default_schemas);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_update);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_schemas);
tmp_args_element_value_2 = par_schemas;
frame_frame_linkify_it$main$$$function__13___init__->m_frame.f_lineno = 237;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_expression_value_10;
PyObject *tmp_assattr_target_11;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_assattr_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_default_schemas);
if (tmp_assattr_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain__schemas, tmp_assattr_value_11);
CHECK_OBJECT(tmp_assattr_value_11);
Py_DECREF(tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_expression_value_11;
PyObject *tmp_assattr_target_12;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_assattr_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_default_schemas);
if (tmp_assattr_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_12 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain__schemas, tmp_assattr_value_12);
CHECK_OBJECT(tmp_assattr_value_12);
Py_DECREF(tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_end_2:;
{
PyObject *tmp_assattr_value_13;
PyObject *tmp_assattr_target_13;
tmp_assattr_value_13 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_assattr_target_13 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts.const_str_plain__compiled, tmp_assattr_value_13);
CHECK_OBJECT(tmp_assattr_value_13);
Py_DECREF(tmp_assattr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_14;
PyObject *tmp_expression_value_12;
PyObject *tmp_assattr_target_14;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_assattr_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_tlds_default);
if (tmp_assattr_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_14 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts.const_str_plain__tlds, tmp_assattr_value_14);
CHECK_OBJECT(tmp_assattr_value_14);
Py_DECREF(tmp_assattr_value_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_15;
PyObject *tmp_assattr_target_15;
tmp_assattr_value_15 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_15 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts.const_str_plain__tlds_replaced, tmp_assattr_value_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_16;
PyObject *tmp_assattr_target_16;
tmp_assattr_value_16 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_assattr_target_16 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts.const_str_plain_re, tmp_assattr_value_16);
CHECK_OBJECT(tmp_assattr_value_16);
Py_DECREF(tmp_assattr_value_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_linkify_it$main$$$function__13___init__->m_frame.f_lineno = 249;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__compile);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__13___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__13___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__13___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__13___init__,
    type_description_1,
    par_self,
    par_schemas,
    par_options
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__13___init__ == cache_frame_frame_linkify_it$main$$$function__13___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__13___init__);
    cache_frame_frame_linkify_it$main$$$function__13___init__ = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__13___init__);

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
CHECK_OBJECT(par_schemas);
Py_DECREF(par_schemas);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_schemas);
Py_DECREF(par_schemas);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__14__compile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *var_tlds = NULL;
PyObject *var_untpl = NULL;
PyObject *var_aliases = NULL;
PyObject *var_name = NULL;
PyObject *var_val = NULL;
PyObject *var_compiled = NULL;
PyObject *var_alias = NULL;
PyObject *var_slist = NULL;
PyObject *var_re_schema_test = NULL;
PyObject *outline_0_var_name = NULL;
PyObject *outline_0_var_val = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__14__compile;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
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
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__14__compile = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__14__compile)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__14__compile);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__14__compile == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__14__compile = MAKE_FUNCTION_FRAME(tstate, code_objects_5c46894d34b19e2cf47fe95b2e33c5fb, module_linkify_it$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__14__compile->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__14__compile = cache_frame_frame_linkify_it$main$$$function__14__compile;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__14__compile);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__14__compile) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_value_1 = module_var_accessor_linkify_it$main$build_re(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_build_re);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__opts);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 255;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_assattr_target_1 = Nuitka_Cell_GET(par_self);
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_re, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_linkify_it$main$copy(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_deepcopy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_3 = Nuitka_Cell_GET(par_self);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__tlds);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 258;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 258;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
assert(var_tlds == NULL);
var_tlds = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_called_instance_1 = Nuitka_Cell_GET(par_self);
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 260;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__on_compile);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_4 = Nuitka_Cell_GET(par_self);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__tlds_replaced);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "cooooooooo";
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_tlds);
tmp_expression_value_5 = var_tlds;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_append);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_6 = Nuitka_Cell_GET(par_self);
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_tlds_2ch_src_re);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 263;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 263;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_1:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_tlds);
tmp_expression_value_7 = var_tlds;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_append);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_9 = Nuitka_Cell_GET(par_self);
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_re);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 264;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_src_xn;
tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 264;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 264;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_ass_subscript_1;
tmp_str_arg_value_1 = mod_consts.const_str_chr_124;
CHECK_OBJECT(var_tlds);
tmp_iterable_value_1 = var_tlds;
tmp_ass_subvalue_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_10 = Nuitka_Cell_GET(par_self);
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_re);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 266;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_src_tlds;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_2;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_2 = MAKE_FUNCTION_linkify_it$main$$$function__14__compile$$$function__1_untpl(tstate, tmp_closure_1);

assert(var_untpl == NULL);
var_untpl = tmp_assign_source_2;
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_untpl);
tmp_called_value_5 = var_untpl;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_12 = Nuitka_Cell_GET(par_self);
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_re);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_str_plain_tpl_email_fuzzy;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 271;
tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_13 = Nuitka_Cell_GET(par_self);
tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_re);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 271;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_email_fuzzy;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_ass_subscript_3;
CHECK_OBJECT(var_untpl);
tmp_called_value_6 = var_untpl;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_15 = Nuitka_Cell_GET(par_self);
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_re);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = mod_consts.const_str_plain_tpl_link_fuzzy;
tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 273;
tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_16 = Nuitka_Cell_GET(par_self);
tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_re);
if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_3);

exception_lineno = 273;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_link_fuzzy;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_expression_value_19;
PyObject *tmp_ass_subscript_4;
CHECK_OBJECT(var_untpl);
tmp_called_value_7 = var_untpl;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_18 = Nuitka_Cell_GET(par_self);
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_re);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = mod_consts.const_str_plain_tpl_link_no_ip_fuzzy;
tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 275;
tmp_ass_subvalue_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_19 = Nuitka_Cell_GET(par_self);
tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_re);
if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_4);

exception_lineno = 275;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_link_no_ip_fuzzy;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_expression_value_22;
PyObject *tmp_ass_subscript_5;
CHECK_OBJECT(var_untpl);
tmp_called_value_8 = var_untpl;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_21 = Nuitka_Cell_GET(par_self);
tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_re);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = mod_consts.const_str_plain_tpl_host_fuzzy_test;
tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 277;
tmp_ass_subvalue_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_ass_subvalue_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_22 = Nuitka_Cell_GET(par_self);
tmp_ass_subscribed_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_re);
if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_5);

exception_lineno = 277;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_host_fuzzy_test;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
CHECK_OBJECT(tmp_ass_subvalue_5);
Py_DECREF(tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_aliases == NULL);
var_aliases = tmp_assign_source_3;
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_assattr_target_2 = Nuitka_Cell_GET(par_self);
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__compiled, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_24 = Nuitka_Cell_GET(par_self);
tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain__schemas);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 287;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "cooooooooo";
exception_lineno = 287;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "cooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;
type_description_1 = "cooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;
type_description_1 = "cooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;
type_description_1 = "cooooooooo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_9;
    Py_INCREF(var_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_val;
    var_val = tmp_assign_source_10;
    Py_INCREF(var_val);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_val);
tmp_cmp_expr_left_1 = var_val;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
goto loop_start_1;
branch_no_2:;
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = DICT_COPY(tstate, mod_consts.const_dict_2be64c18c2ba44ac79d86a26f3b61da1);
{
    PyObject *old = var_compiled;
    var_compiled = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_expression_value_25;
PyObject *tmp_ass_subscript_6;
CHECK_OBJECT(var_compiled);
tmp_ass_subvalue_6 = var_compiled;
if (Nuitka_Cell_GET(par_self) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 294;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_25 = Nuitka_Cell_GET(par_self);
tmp_ass_subscribed_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain__compiled);
if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_name);
tmp_ass_subscript_6 = var_name;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_val);
tmp_isinstance_inst_1 = var_val;
tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(var_val);
tmp_expression_value_26 = var_val;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, const_str_plain_get);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 297;
tmp_isinstance_inst_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_plain_validate_tuple);

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_isinstance_inst_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_isinstance_cls_2 = module_var_accessor_linkify_it$main$RE_TYPE(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RE_TYPE);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_2);

exception_lineno = 297;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_inst_2);
Py_DECREF(tmp_isinstance_inst_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_28;
if (Nuitka_Cell_GET(par_self) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 298;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_27 = Nuitka_Cell_GET(par_self);
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain__create_validator);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_val);
tmp_expression_value_28 = var_val;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, const_str_plain_get);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 298;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 298;
tmp_args_element_value_9 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_12, mod_consts.const_tuple_str_plain_validate_tuple);

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 298;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 298;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_compiled);
tmp_dictset_dict = var_compiled;
tmp_dictset_key = mod_consts.const_str_plain_validate;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(var_val);
tmp_expression_value_29 = var_val;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, const_str_plain_get);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 299;
tmp_isinstance_inst_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_13, mod_consts.const_tuple_str_plain_validate_tuple);

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_isinstance_inst_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_isinstance_cls_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
CHECK_OBJECT(tmp_isinstance_inst_3);
Py_DECREF(tmp_isinstance_inst_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_30;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_31;
if (Nuitka_Cell_GET(par_self) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 300;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_30 = Nuitka_Cell_GET(par_self);
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain__create_validator);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_val);
tmp_expression_value_31 = var_val;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, const_str_plain_get);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 300;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 300;
tmp_args_element_value_10 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_15, mod_consts.const_tuple_str_plain_validate_tuple);

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 300;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 300;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_compiled);
tmp_dictset_dict = var_compiled;
tmp_dictset_key = mod_consts.const_str_plain_validate;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(var_val);
tmp_expression_value_32 = var_val;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, const_str_plain_get);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 301;
tmp_isinstance_inst_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_16, mod_consts.const_tuple_str_plain_validate_tuple);

CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
if (tmp_isinstance_inst_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_33 = IMPORT_HARD_TYPES();
assert(!(tmp_expression_value_33 == NULL));
tmp_isinstance_cls_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_MethodType);
if (tmp_isinstance_cls_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_4);

exception_lineno = 301;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
CHECK_OBJECT(tmp_isinstance_inst_4);
Py_DECREF(tmp_isinstance_inst_4);
CHECK_OBJECT(tmp_isinstance_cls_4);
Py_DECREF(tmp_isinstance_cls_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(var_val);
tmp_expression_value_34 = var_val;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, const_str_plain_get);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 302;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_17, mod_consts.const_tuple_str_plain_validate_tuple);

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_compiled);
tmp_dictset_dict = var_compiled;
tmp_dictset_key = mod_consts.const_str_plain_validate;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_isinstance_inst_5;
PyObject *tmp_isinstance_cls_5;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_35;
PyObject *tmp_expression_value_36;
CHECK_OBJECT(var_val);
tmp_expression_value_35 = var_val;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, const_str_plain_get);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 304;
tmp_isinstance_inst_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_18, mod_consts.const_tuple_str_plain_validate_tuple);

CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_isinstance_inst_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_36 = IMPORT_HARD_TYPES();
assert(!(tmp_expression_value_36 == NULL));
tmp_isinstance_cls_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_FunctionType);
if (tmp_isinstance_cls_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_5);

exception_lineno = 304;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
CHECK_OBJECT(tmp_isinstance_inst_5);
Py_DECREF(tmp_isinstance_inst_5);
CHECK_OBJECT(tmp_isinstance_cls_5);
Py_DECREF(tmp_isinstance_cls_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_expression_value_37;
PyObject *tmp_name_value_1;
PyObject *tmp_value_value_1;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_38;
PyObject *tmp_capi_result_1;
tmp_expression_value_37 = module_var_accessor_linkify_it$main$LinkifyIt(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LinkifyIt);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 305;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_name_value_1 = mod_consts.const_str_plain_func;
CHECK_OBJECT(var_val);
tmp_expression_value_38 = var_val;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, const_str_plain_get);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 305;
tmp_value_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_19, mod_consts.const_tuple_str_plain_validate_tuple);

CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_capi_result_1 = BUILTIN_SETATTR(tmp_expression_value_37, tmp_name_value_1, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_expression_value_39;
if (Nuitka_Cell_GET(par_self) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 306;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_39 = Nuitka_Cell_GET(par_self);
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_func);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_compiled);
tmp_dictset_dict = var_compiled;
tmp_dictset_key = mod_consts.const_str_plain_validate;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_called_value_20 = module_var_accessor_linkify_it$main$SchemaError(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SchemaError);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_11 = var_name;
CHECK_OBJECT(var_val);
tmp_args_element_value_12 = var_val;
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 308;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 308;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "cooooooooo";
goto try_except_handler_2;
}
branch_end_7:;
branch_end_6:;
branch_end_5:;
branch_end_4:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_isinstance_inst_6;
PyObject *tmp_isinstance_cls_6;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
CHECK_OBJECT(var_val);
tmp_expression_value_40 = var_val;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, const_str_plain_get);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 310;
tmp_isinstance_inst_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_21, mod_consts.const_tuple_str_plain_normalize_tuple);

CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
if (tmp_isinstance_inst_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_41 = IMPORT_HARD_TYPES();
assert(!(tmp_expression_value_41 == NULL));
tmp_isinstance_cls_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_MethodType);
if (tmp_isinstance_cls_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_6);

exception_lineno = 310;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_6, tmp_isinstance_cls_6);
CHECK_OBJECT(tmp_isinstance_inst_6);
Py_DECREF(tmp_isinstance_inst_6);
CHECK_OBJECT(tmp_isinstance_cls_6);
Py_DECREF(tmp_isinstance_cls_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_42;
CHECK_OBJECT(var_val);
tmp_expression_value_42 = var_val;
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, const_str_plain_get);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 311;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_22, mod_consts.const_tuple_str_plain_normalize_tuple);

CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_compiled);
tmp_dictset_dict = var_compiled;
tmp_dictset_key = mod_consts.const_str_plain_normalize;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
goto branch_end_8;
branch_no_8:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_isinstance_inst_7;
PyObject *tmp_isinstance_cls_7;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_43;
PyObject *tmp_expression_value_44;
CHECK_OBJECT(var_val);
tmp_expression_value_43 = var_val;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, const_str_plain_get);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 313;
tmp_isinstance_inst_7 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_23, mod_consts.const_tuple_str_plain_normalize_tuple);

CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
if (tmp_isinstance_inst_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_44 = IMPORT_HARD_TYPES();
assert(!(tmp_expression_value_44 == NULL));
tmp_isinstance_cls_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_FunctionType);
if (tmp_isinstance_cls_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_7);

exception_lineno = 313;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_7, tmp_isinstance_cls_7);
CHECK_OBJECT(tmp_isinstance_inst_7);
Py_DECREF(tmp_isinstance_inst_7);
CHECK_OBJECT(tmp_isinstance_cls_7);
Py_DECREF(tmp_isinstance_cls_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_expression_value_45;
PyObject *tmp_name_value_2;
PyObject *tmp_value_value_2;
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_46;
PyObject *tmp_capi_result_2;
tmp_expression_value_45 = module_var_accessor_linkify_it$main$LinkifyIt(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LinkifyIt);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 314;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_name_value_2 = mod_consts.const_str_plain_func;
CHECK_OBJECT(var_val);
tmp_expression_value_46 = var_val;
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, const_str_plain_get);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 314;
tmp_value_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_24, mod_consts.const_tuple_str_plain_normalize_tuple);

CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
if (tmp_value_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_capi_result_2 = BUILTIN_SETATTR(tmp_expression_value_45, tmp_name_value_2, tmp_value_value_2);
CHECK_OBJECT(tmp_value_value_2);
Py_DECREF(tmp_value_value_2);
if (tmp_capi_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_expression_value_47;
if (Nuitka_Cell_GET(par_self) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 315;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_47 = Nuitka_Cell_GET(par_self);
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_func);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_compiled);
tmp_dictset_dict = var_compiled;
tmp_dictset_key = mod_consts.const_str_plain_normalize;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
goto branch_end_9;
branch_no_9:;
{
bool tmp_condition_result_10;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_48;
CHECK_OBJECT(var_val);
tmp_expression_value_48 = var_val;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, const_str_plain_get);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 316;
tmp_operand_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_25, mod_consts.const_tuple_str_plain_normalize_tuple);

CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_called_instance_2;
if (Nuitka_Cell_GET(par_self) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 317;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_called_instance_2 = Nuitka_Cell_GET(par_self);
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 317;
tmp_dictset_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__create_normalizer);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_compiled);
tmp_dictset_dict = var_compiled;
tmp_dictset_key = mod_consts.const_str_plain_normalize;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_26;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_value_26 = module_var_accessor_linkify_it$main$SchemaError(tstate);
if (unlikely(tmp_called_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SchemaError);
}

if (tmp_called_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 319;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_13 = var_name;
CHECK_OBJECT(var_val);
tmp_args_element_value_14 = var_val;
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 319;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_raise_type_input_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_26, call_args);
}

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 319;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "cooooooooo";
goto try_except_handler_2;
}
branch_end_10:;
branch_end_9:;
branch_end_8:;
goto loop_start_1;
branch_no_3:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_isinstance_inst_8;
PyObject *tmp_isinstance_cls_8;
CHECK_OBJECT(var_val);
tmp_isinstance_inst_8 = var_val;
tmp_isinstance_cls_8 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_8, tmp_isinstance_cls_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_aliases == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_aliases);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 324;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_aliases;
CHECK_OBJECT(var_name);
tmp_item_value_1 = var_name;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto loop_start_1;
branch_no_11:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_called_value_27 = module_var_accessor_linkify_it$main$SchemaError(tstate);
if (unlikely(tmp_called_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SchemaError);
}

if (tmp_called_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_15 = var_name;
CHECK_OBJECT(var_val);
tmp_args_element_value_16 = var_val;
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 327;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_raise_type_input_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_27, call_args);
}

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 327;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "cooooooooo";
goto try_except_handler_2;
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "cooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_3;
if (var_aliases == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_aliases);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 332;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_3 = var_aliases;
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_12;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_13 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "cooooooooo";
exception_lineno = 332;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_14 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_alias;
    var_alias = tmp_assign_source_14;
    Py_INCREF(var_alias);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_28;
PyObject *tmp_expression_value_49;
PyObject *tmp_expression_value_50;
PyObject *tmp_args_element_value_17;
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_51;
PyObject *tmp_expression_value_52;
PyObject *tmp_args_element_value_18;
if (Nuitka_Cell_GET(par_self) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 333;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_50 = Nuitka_Cell_GET(par_self);
tmp_expression_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain__compiled);
if (tmp_expression_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(par_self) == NULL) {
Py_DECREF(tmp_called_value_28);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 333;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_52 = Nuitka_Cell_GET(par_self);
tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain__schemas);
if (tmp_expression_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_28);

exception_lineno = 333;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_51);
Py_DECREF(tmp_expression_value_51);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_28);

exception_lineno = 333;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_alias);
tmp_args_element_value_18 = var_alias;
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 333;
tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_28);

exception_lineno = 333;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 333;
tmp_operand_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
goto loop_start_2;
branch_no_12:;
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_expression_value_53;
PyObject *tmp_expression_value_54;
PyObject *tmp_expression_value_55;
PyObject *tmp_subscript_value_6;
PyObject *tmp_expression_value_56;
PyObject *tmp_expression_value_57;
PyObject *tmp_subscript_value_7;
PyObject *tmp_subscript_value_8;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_expression_value_58;
PyObject *tmp_expression_value_59;
PyObject *tmp_subscript_value_9;
PyObject *tmp_ass_subscript_7;
if (Nuitka_Cell_GET(par_self) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 336;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_55 = Nuitka_Cell_GET(par_self);
tmp_expression_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain__compiled);
if (tmp_expression_value_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(par_self) == NULL) {
Py_DECREF(tmp_expression_value_54);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 336;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_57 = Nuitka_Cell_GET(par_self);
tmp_expression_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain__schemas);
if (tmp_expression_value_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_54);

exception_lineno = 336;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_alias);
tmp_subscript_value_7 = var_alias;
tmp_subscript_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_7);
CHECK_OBJECT(tmp_expression_value_56);
Py_DECREF(tmp_expression_value_56);
if (tmp_subscript_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_54);

exception_lineno = 336;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
tmp_expression_value_53 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_54, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_54);
Py_DECREF(tmp_expression_value_54);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_expression_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
tmp_subscript_value_8 = mod_consts.const_str_plain_validate;
tmp_ass_subvalue_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_8);
CHECK_OBJECT(tmp_expression_value_53);
Py_DECREF(tmp_expression_value_53);
if (tmp_ass_subvalue_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(par_self) == NULL) {
Py_DECREF(tmp_ass_subvalue_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 336;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_59 = Nuitka_Cell_GET(par_self);
tmp_expression_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain__compiled);
if (tmp_expression_value_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_7);

exception_lineno = 336;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_alias);
tmp_subscript_value_9 = var_alias;
tmp_ass_subscribed_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_9);
CHECK_OBJECT(tmp_expression_value_58);
Py_DECREF(tmp_expression_value_58);
if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_7);

exception_lineno = 336;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_validate;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
CHECK_OBJECT(tmp_ass_subvalue_7);
Py_DECREF(tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_expression_value_60;
PyObject *tmp_expression_value_61;
PyObject *tmp_expression_value_62;
PyObject *tmp_subscript_value_10;
PyObject *tmp_expression_value_63;
PyObject *tmp_expression_value_64;
PyObject *tmp_subscript_value_11;
PyObject *tmp_subscript_value_12;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_expression_value_65;
PyObject *tmp_expression_value_66;
PyObject *tmp_subscript_value_13;
PyObject *tmp_ass_subscript_8;
if (Nuitka_Cell_GET(par_self) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 339;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_62 = Nuitka_Cell_GET(par_self);
tmp_expression_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts.const_str_plain__compiled);
if (tmp_expression_value_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(par_self) == NULL) {
Py_DECREF(tmp_expression_value_61);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 339;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_64 = Nuitka_Cell_GET(par_self);
tmp_expression_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts.const_str_plain__schemas);
if (tmp_expression_value_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_61);

exception_lineno = 339;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_alias);
tmp_subscript_value_11 = var_alias;
tmp_subscript_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_11);
CHECK_OBJECT(tmp_expression_value_63);
Py_DECREF(tmp_expression_value_63);
if (tmp_subscript_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_61);

exception_lineno = 339;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
tmp_expression_value_60 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_10);
CHECK_OBJECT(tmp_expression_value_61);
Py_DECREF(tmp_expression_value_61);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_expression_value_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
tmp_subscript_value_12 = mod_consts.const_str_plain_normalize;
tmp_ass_subvalue_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_12);
CHECK_OBJECT(tmp_expression_value_60);
Py_DECREF(tmp_expression_value_60);
if (tmp_ass_subvalue_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(par_self) == NULL) {
Py_DECREF(tmp_ass_subvalue_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 339;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_66 = Nuitka_Cell_GET(par_self);
tmp_expression_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts.const_str_plain__compiled);
if (tmp_expression_value_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_8);

exception_lineno = 339;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_alias);
tmp_subscript_value_13 = var_alias;
tmp_ass_subscribed_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_13);
CHECK_OBJECT(tmp_expression_value_65);
Py_DECREF(tmp_expression_value_65);
if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_8);

exception_lineno = 339;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_normalize;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
CHECK_OBJECT(tmp_ass_subvalue_8);
Py_DECREF(tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "cooooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_expression_value_67;
PyObject *tmp_ass_subscript_9;
tmp_dict_key_1 = mod_consts.const_str_plain_validate;
tmp_dict_value_1 = Py_None;
tmp_ass_subvalue_9 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_called_instance_3;
tmp_res = PyDict_SetItem(tmp_ass_subvalue_9, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_normalize;
if (Nuitka_Cell_GET(par_self) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 344;
type_description_1 = "cooooooooo";
    goto dict_build_exception_1;
}

tmp_called_instance_3 = Nuitka_Cell_GET(par_self);
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 344;
tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain__create_normalizer);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "cooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_ass_subvalue_9, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_ass_subvalue_9);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
if (Nuitka_Cell_GET(par_self) == NULL) {
Py_DECREF(tmp_ass_subvalue_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 344;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_67 = Nuitka_Cell_GET(par_self);
tmp_ass_subscribed_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts.const_str_plain__compiled);
if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_9);

exception_lineno = 344;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_9 = const_str_empty;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
CHECK_OBJECT(tmp_ass_subscribed_9);
Py_DECREF(tmp_ass_subscribed_9);
CHECK_OBJECT(tmp_ass_subvalue_9);
Py_DECREF(tmp_ass_subvalue_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_str_arg_value_2;
PyObject *tmp_iterable_value_2;
tmp_str_arg_value_2 = mod_consts.const_str_chr_124;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_4;
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_68;
PyObject *tmp_expression_value_69;
if (Nuitka_Cell_GET(par_self) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 352;
type_description_1 = "cooooooooo";
    goto try_except_handler_6;
}

tmp_expression_value_69 = Nuitka_Cell_GET(par_self);
tmp_expression_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain__compiled);
if (tmp_expression_value_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "cooooooooo";
    goto try_except_handler_6;
}
tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_68);
Py_DECREF(tmp_expression_value_68);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "cooooooooo";
    goto try_except_handler_6;
}
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 352;
tmp_iter_arg_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_30);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "cooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "cooooooooo";
    goto try_except_handler_6;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_17;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_3 = tmp_listcomp_1__$0;
tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_18 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "cooooooooo";
exception_lineno = 350;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_iter_arg_5 = tmp_listcomp_1__iter_value_0;
tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "cooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
    tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "cooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
    tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_21 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "cooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
    tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "cooooooooo";
    goto try_except_handler_9;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_8;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
tmp_assign_source_22 = tmp_listcomp$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_name;
    outline_0_var_name = tmp_assign_source_22;
    Py_INCREF(outline_0_var_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
tmp_assign_source_23 = tmp_listcomp$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_val;
    outline_0_var_val = tmp_assign_source_23;
    Py_INCREF(outline_0_var_val);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_13;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_1;
bool tmp_tmp_and_left_value_1_cbool_1;
int tmp_truth_name_1;
CHECK_OBJECT(outline_0_var_name);
tmp_len_arg_1 = outline_0_var_name;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "cooooooooo";
    goto try_except_handler_7;
}
tmp_cmp_expr_right_2 = 0;
tmp_tmp_and_left_value_1_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_and_left_value_1 = tmp_tmp_and_left_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(outline_0_var_val);
tmp_truth_name_1 = CHECK_IF_TRUE(outline_0_var_val);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "cooooooooo";
    goto try_except_handler_7;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_13 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_13 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_31;
PyObject *tmp_args_element_value_19;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_value_31 = module_var_accessor_linkify_it$main$_escape_re(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__escape_re);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 350;
type_description_1 = "cooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(outline_0_var_name);
tmp_args_element_value_19 = outline_0_var_name;
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 351;
tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_19);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "cooooooooo";
    goto try_except_handler_7;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "cooooooooo";
    goto try_except_handler_7;
}
}
branch_no_13:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "cooooooooo";
    goto try_except_handler_7;
}
goto loop_start_3;
loop_end_3:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_iterable_value_2 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_iterable_value_2);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
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
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_XDECREF(outline_0_var_name);
outline_0_var_name = NULL;
Py_XDECREF(outline_0_var_val);
outline_0_var_val = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_name);
outline_0_var_name = NULL;
Py_XDECREF(outline_0_var_val);
outline_0_var_val = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 350;
goto frame_exception_exit_1;
outline_result_1:;
tmp_assign_source_15 = UNICODE_JOIN(tstate, tmp_str_arg_value_2, tmp_iterable_value_2);
CHECK_OBJECT(tmp_iterable_value_2);
Py_DECREF(tmp_iterable_value_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
assert(var_slist == NULL);
var_slist = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_expression_value_70;
PyObject *tmp_expression_value_71;
PyObject *tmp_subscript_value_14;
tmp_add_expr_left_4 = mod_consts.const_str_digest_c8b3d4bf4d7079f3e044c74d046e5f88;
if (Nuitka_Cell_GET(par_self) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 358;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_71 = Nuitka_Cell_GET(par_self);
tmp_expression_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts.const_str_plain_re);
if (tmp_expression_value_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_14 = mod_consts.const_str_plain_src_ZPCc;
tmp_add_expr_right_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_70, tmp_subscript_value_14);
CHECK_OBJECT(tmp_expression_value_70);
Py_DECREF(tmp_expression_value_70);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_3 = mod_consts.const_str_digest_7174c388a6fb32076c1a9a544f1f89be;
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_slist);
tmp_add_expr_right_2 = var_slist;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_chr_41;
tmp_assign_source_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
assert(var_re_schema_test == NULL);
var_re_schema_test = tmp_assign_source_24;
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_expression_value_72;
PyObject *tmp_ass_subscript_10;
CHECK_OBJECT(var_re_schema_test);
tmp_ass_subvalue_10 = var_re_schema_test;
if (Nuitka_Cell_GET(par_self) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 362;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_72 = Nuitka_Cell_GET(par_self);
tmp_ass_subscribed_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts.const_str_plain_re);
if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_schema_test;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
CHECK_OBJECT(tmp_ass_subscribed_10);
Py_DECREF(tmp_ass_subscribed_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_expression_value_73;
PyObject *tmp_ass_subscript_11;
CHECK_OBJECT(var_re_schema_test);
tmp_ass_subvalue_11 = var_re_schema_test;
if (Nuitka_Cell_GET(par_self) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 363;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_73 = Nuitka_Cell_GET(par_self);
tmp_ass_subscribed_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts.const_str_plain_re);
if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_schema_search;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
CHECK_OBJECT(tmp_ass_subscribed_11);
Py_DECREF(tmp_ass_subscribed_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_expression_value_74;
PyObject *tmp_expression_value_75;
PyObject *tmp_subscript_value_15;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_expression_value_76;
PyObject *tmp_ass_subscript_12;
tmp_add_expr_left_5 = mod_consts.const_str_chr_94;
if (Nuitka_Cell_GET(par_self) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 364;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_75 = Nuitka_Cell_GET(par_self);
tmp_expression_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts.const_str_plain_re);
if (tmp_expression_value_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_15 = mod_consts.const_str_plain_schema_search;
tmp_add_expr_right_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_74, tmp_subscript_value_15);
CHECK_OBJECT(tmp_expression_value_74);
Py_DECREF(tmp_expression_value_74);
if (tmp_add_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_12 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_right_5);
Py_DECREF(tmp_add_expr_right_5);
if (tmp_ass_subvalue_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(par_self) == NULL) {
Py_DECREF(tmp_ass_subvalue_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 364;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_76 = Nuitka_Cell_GET(par_self);
tmp_ass_subscribed_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts.const_str_plain_re);
if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_12);

exception_lineno = 364;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_12 = mod_consts.const_str_plain_schema_at_start;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
CHECK_OBJECT(tmp_ass_subscribed_12);
Py_DECREF(tmp_ass_subscribed_12);
CHECK_OBJECT(tmp_ass_subvalue_12);
Py_DECREF(tmp_ass_subvalue_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_13;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
PyObject *tmp_add_expr_left_9;
PyObject *tmp_add_expr_right_9;
PyObject *tmp_expression_value_77;
PyObject *tmp_expression_value_78;
PyObject *tmp_subscript_value_16;
PyObject *tmp_ass_subscribed_13;
PyObject *tmp_expression_value_79;
PyObject *tmp_ass_subscript_13;
tmp_add_expr_left_9 = mod_consts.const_str_chr_40;
CHECK_OBJECT(var_re_schema_test);
tmp_add_expr_right_9 = var_re_schema_test;
tmp_add_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
if (tmp_add_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_8 = mod_consts.const_str_digest_785357e4228cd01595442309a893b3db;
tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_8, tmp_add_expr_right_8);
CHECK_OBJECT(tmp_add_expr_left_8);
Py_DECREF(tmp_add_expr_left_8);
if (tmp_add_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(par_self) == NULL) {
Py_DECREF(tmp_add_expr_left_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 367;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_78 = Nuitka_Cell_GET(par_self);
tmp_expression_value_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts.const_str_plain_re);
if (tmp_expression_value_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_7);

exception_lineno = 367;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_16 = mod_consts.const_str_plain_host_fuzzy_test;
tmp_add_expr_right_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_77, tmp_subscript_value_16);
CHECK_OBJECT(tmp_expression_value_77);
Py_DECREF(tmp_expression_value_77);
if (tmp_add_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_7);

exception_lineno = 367;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_left_7);
Py_DECREF(tmp_add_expr_left_7);
CHECK_OBJECT(tmp_add_expr_right_7);
Py_DECREF(tmp_add_expr_right_7);
if (tmp_add_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_6 = mod_consts.const_str_digest_c4800cd4b7f4ff49de35572fba939821;
tmp_ass_subvalue_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_left_6);
Py_DECREF(tmp_add_expr_left_6);
if (tmp_ass_subvalue_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(par_self) == NULL) {
Py_DECREF(tmp_ass_subvalue_13);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 366;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_79 = Nuitka_Cell_GET(par_self);
tmp_ass_subscribed_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts.const_str_plain_re);
if (tmp_ass_subscribed_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_13);

exception_lineno = 366;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_13 = mod_consts.const_str_plain_pretest;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
CHECK_OBJECT(tmp_ass_subscribed_13);
Py_DECREF(tmp_ass_subscribed_13);
CHECK_OBJECT(tmp_ass_subvalue_13);
Py_DECREF(tmp_ass_subvalue_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_4;
if (Nuitka_Cell_GET(par_self) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 372;
type_description_1 = "cooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_4 = Nuitka_Cell_GET(par_self);
frame_frame_linkify_it$main$$$function__14__compile->m_frame.f_lineno = 372;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain__reset_scan_cache);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "cooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__14__compile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__14__compile->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__14__compile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__14__compile,
    type_description_1,
    par_self,
    var_tlds,
    var_untpl,
    var_aliases,
    var_name,
    var_val,
    var_compiled,
    var_alias,
    var_slist,
    var_re_schema_test
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__14__compile == cache_frame_frame_linkify_it$main$$$function__14__compile) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__14__compile);
    cache_frame_frame_linkify_it$main$$$function__14__compile = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__14__compile);

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
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(var_tlds);
CHECK_OBJECT(var_tlds);
Py_DECREF(var_tlds);
var_tlds = NULL;
CHECK_OBJECT(var_untpl);
CHECK_OBJECT(var_untpl);
Py_DECREF(var_untpl);
var_untpl = NULL;
Py_XDECREF(var_aliases);
var_aliases = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_val);
var_val = NULL;
Py_XDECREF(var_compiled);
var_compiled = NULL;
Py_XDECREF(var_alias);
var_alias = NULL;
CHECK_OBJECT(var_slist);
CHECK_OBJECT(var_slist);
Py_DECREF(var_slist);
var_slist = NULL;
CHECK_OBJECT(var_re_schema_test);
CHECK_OBJECT(var_re_schema_test);
Py_DECREF(var_re_schema_test);
var_re_schema_test = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
Py_XDECREF(var_tlds);
var_tlds = NULL;
Py_XDECREF(var_untpl);
var_untpl = NULL;
Py_XDECREF(var_aliases);
var_aliases = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_val);
var_val = NULL;
Py_XDECREF(var_compiled);
var_compiled = NULL;
Py_XDECREF(var_alias);
var_alias = NULL;
Py_XDECREF(var_slist);
var_slist = NULL;
Py_XDECREF(var_re_schema_test);
var_re_schema_test = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

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


static PyObject *impl_linkify_it$main$$$function__14__compile$$$function__1_untpl(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_tpl = python_pars[0];
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl = MAKE_FUNCTION_FRAME(tstate, code_objects_ff4887a33de1aca760da6c3cb5a01e77, module_linkify_it$main, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl = cache_frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_tpl);
tmp_expression_value_1 = par_tpl;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_replace);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_4c4551cb997157afe3f5879b83cf36fd;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 269;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_re);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 269;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_src_tlds;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 269;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl->m_frame.f_lineno = 269;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl,
    type_description_1,
    par_tpl,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl == cache_frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl);
    cache_frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__14__compile$$$function__1_untpl);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_tpl);
Py_DECREF(par_tpl);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_tpl);
Py_DECREF(par_tpl);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__15_add(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_schema = python_pars[1];
PyObject *par_definition = python_pars[2];
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__15_add;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__15_add = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__15_add)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__15_add);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__15_add == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__15_add = MAKE_FUNCTION_FRAME(tstate, code_objects_1fce047ec31f542ba849da372b3786f4, module_linkify_it$main, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__15_add->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__15_add = cache_frame_frame_linkify_it$main$$$function__15_add;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__15_add);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__15_add) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_definition);
tmp_ass_subvalue_1 = par_definition;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__schemas);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_schema);
tmp_ass_subscript_1 = par_schema;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_linkify_it$main$$$function__15_add->m_frame.f_lineno = 391;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__compile);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__15_add, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__15_add->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__15_add, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__15_add,
    type_description_1,
    par_self,
    par_schema,
    par_definition
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__15_add == cache_frame_frame_linkify_it$main$$$function__15_add) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__15_add);
    cache_frame_frame_linkify_it$main$$$function__15_add = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__15_add);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_schema);
Py_DECREF(par_schema);
CHECK_OBJECT(par_definition);
Py_DECREF(par_definition);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_schema);
Py_DECREF(par_schema);
CHECK_OBJECT(par_definition);
Py_DECREF(par_definition);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__16_set(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_options = python_pars[1];
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__16_set;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__16_set = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__16_set)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__16_set);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__16_set == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__16_set = MAKE_FUNCTION_FRAME(tstate, code_objects_ba9efc468569454750920f8afe138b5b, module_linkify_it$main, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__16_set->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__16_set = cache_frame_frame_linkify_it$main$$$function__16_set;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__16_set);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__16_set) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__opts);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_update);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_options);
tmp_args_element_value_1 = par_options;
frame_frame_linkify_it$main$$$function__16_set->m_frame.f_lineno = 406;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__16_set, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__16_set->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__16_set, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__16_set,
    type_description_1,
    par_self,
    par_options
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__16_set == cache_frame_frame_linkify_it$main$$$function__16_set) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__16_set);
    cache_frame_frame_linkify_it$main$$$function__16_set = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__16_set);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__17_test(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_text = python_pars[1];
PyObject *var_regex = NULL;
PyObject *var_last_index = NULL;
PyObject *var_matched_iter = NULL;
PyObject *var_matched = NULL;
PyObject *var_m = NULL;
PyObject *var_length = NULL;
PyObject *var_matched_tld = NULL;
PyObject *var_tld_pos = NULL;
PyObject *var_pattern = NULL;
PyObject *var_ml = NULL;
PyObject *var_shift = NULL;
PyObject *var_at_pos = NULL;
PyObject *var_me = NULL;
PyObject *var_next_shift = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__17_test;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__17_test = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__17_test)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__17_test);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__17_test == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__17_test = MAKE_FUNCTION_FRAME(tstate, code_objects_5e23c10465925d4aceb5584f7b8ee7df, module_linkify_it$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__17_test->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__17_test = cache_frame_frame_linkify_it$main$$$function__17_test;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__17_test);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__17_test) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_text);
tmp_assattr_value_1 = par_text;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__text_cache, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = const_int_neg_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__index, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_text);
tmp_len_arg_1 = par_text;
tmp_operand_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
assert(!(tmp_res == -1));
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_4;
int tmp_truth_name_1;
tmp_expression_value_1 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 425;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_search);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_re);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 425;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_schema_test;
tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 425;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_text);
tmp_kw_call_arg_value_1_1 = par_text;
tmp_expression_value_4 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 425;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_IGNORECASE);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 425;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 425;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 425;
type_description_1 = "oooooooooooooooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_re);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_str_plain_schema_search;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_regex == NULL);
var_regex = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_int_0;
assert(var_last_index == NULL);
Py_INCREF(tmp_assign_source_2);
var_last_index = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_expression_value_9;
tmp_expression_value_7 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 428;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_finditer);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_regex);
tmp_kw_call_arg_value_0_2 = var_regex;
CHECK_OBJECT(par_text);
tmp_expression_value_8 = par_text;
CHECK_OBJECT(var_last_index);
tmp_start_value_1 = var_last_index;
tmp_stop_value_1 = Py_None;
tmp_subscript_value_3 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_3 == NULL));
tmp_kw_call_arg_value_1_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_kw_call_arg_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 428;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);

exception_lineno = 428;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_IGNORECASE);
if (tmp_kw_call_dict_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);

exception_lineno = 428;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 428;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
CHECK_OBJECT(tmp_kw_call_dict_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_0_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_matched_iter == NULL);
var_matched_iter = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_matched_iter);
tmp_iter_arg_1 = var_matched_iter;
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
exception_lineno = 429;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_6 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_matched;
    var_matched = tmp_assign_source_6;
    Py_INCREF(var_matched);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_matched);
tmp_called_instance_1 = var_matched;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 430;
tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_end,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_last_index;
    var_last_index = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_matched);
tmp_called_instance_2 = var_matched;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 431;
tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_group);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_8 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_10;
PyObject *tmp_called_instance_3;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_called_instance_4;
PyObject *tmp_subscript_value_5;
PyTuple_SET_ITEM(tmp_assign_source_8, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_matched);
tmp_called_instance_3 = var_matched;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 431;
tmp_expression_value_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_groups);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_subscript_value_4 = const_int_0;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_4, 0);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_matched);
tmp_called_instance_4 = var_matched;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 431;
tmp_expression_value_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_groups);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_subscript_value_5 = const_int_pos_1;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_5, 1);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_8);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
{
    PyObject *old = var_m;
    var_m = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_6;
PyObject *tmp_args_element_value_3;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 432;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_12 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_test_schema_at);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
if (par_text == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_text);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 432;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = par_text;
CHECK_OBJECT(var_m);
tmp_expression_value_13 = var_m;
tmp_subscript_value_6 = mod_consts.const_int_pos_2;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_6, 2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 432;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_last_index);
tmp_args_element_value_3 = var_last_index;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 432;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_length;
    var_length = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(var_length);
tmp_truth_name_2 = CHECK_IF_TRUE(var_length);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_7;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_m);
tmp_expression_value_14 = var_m;
tmp_subscript_value_7 = mod_consts.const_int_pos_2;
tmp_assattr_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_7, 2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_assattr_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 434;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__schema, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_instance_5;
PyObject *tmp_len_arg_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_8;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(var_matched);
tmp_called_instance_5 = var_matched;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 435;
tmp_add_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_start,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_m);
tmp_expression_value_15 = var_m;
tmp_subscript_value_8 = const_int_pos_1;
tmp_len_arg_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_8, 1);
if (tmp_len_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 435;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
CHECK_OBJECT(tmp_len_arg_2);
Py_DECREF(tmp_len_arg_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 435;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assattr_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_assattr_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 435;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__index, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_called_instance_6;
PyObject *tmp_len_arg_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_9;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(var_matched);
tmp_called_instance_6 = var_matched;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 436;
tmp_add_expr_left_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain_start,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_m);
tmp_expression_value_16 = var_m;
tmp_subscript_value_9 = const_int_0;
tmp_len_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_9, 0);
if (tmp_len_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 436;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_3 = BUILTIN_LEN(tstate, tmp_len_arg_3);
CHECK_OBJECT(tmp_len_arg_3);
Py_DECREF(tmp_len_arg_3);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 436;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_length);
tmp_add_expr_right_2 = var_length;
tmp_assattr_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_assattr_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 436;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__last_index, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
}
goto loop_end_1;
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
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
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_call_result_2;
int tmp_truth_name_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_call_result_3;
int tmp_truth_name_4;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 439;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_18 = par_self;
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain__opts);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 439;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_fuzzy_link_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 439;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 439;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_20 = par_self;
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain__compiled);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 439;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_1f107b5592452b1ca3d9912cb6908233_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 439;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
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
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_21;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_10;
PyObject *tmp_kw_call_arg_value_1_3;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_expression_value_24;
tmp_expression_value_21 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 441;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_search);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_self == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 442;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_23 = par_self;
tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_re);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 442;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_10 = mod_consts.const_str_plain_host_fuzzy_test;
tmp_kw_call_arg_value_0_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_10);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_kw_call_arg_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 442;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_text == NULL) {
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_kw_call_arg_value_0_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_text);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 442;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_1_3 = par_text;
tmp_expression_value_24 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_kw_call_arg_value_0_3);

exception_lineno = 442;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_IGNORECASE);
if (tmp_kw_call_dict_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_kw_call_arg_value_0_3);

exception_lineno = 442;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 441;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_0_3);
CHECK_OBJECT(tmp_kw_call_dict_value_0_3);
Py_DECREF(tmp_kw_call_dict_value_0_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_matched_tld == NULL);
var_matched_tld = tmp_assign_source_10;
}
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_5;
CHECK_OBJECT(var_matched_tld);
tmp_truth_name_5 = CHECK_IF_TRUE(var_matched_tld);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_7;
CHECK_OBJECT(var_matched_tld);
tmp_called_instance_7 = var_matched_tld;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 445;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_7,
    mod_consts.const_str_plain_start,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_tld_pos == NULL);
var_tld_pos = tmp_assign_source_11;
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = const_int_neg_1;
assert(var_tld_pos == NULL);
Py_INCREF(tmp_assign_source_12);
var_tld_pos = tmp_assign_source_12;
}
branch_end_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_tld_pos);
tmp_cmp_expr_left_1 = var_tld_pos;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_6 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
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
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_25;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_26;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 450;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_25 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain__index);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_0;
tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_tld_pos);
tmp_cmp_expr_left_3 = var_tld_pos;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 450;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_26 = par_self;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain__index);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_7 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_call_result_4;
int tmp_truth_name_6;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 451;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_28 = par_self;
tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain__opts);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 451;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_fuzzy_ip_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 451;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_11;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 452;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_30 = par_self;
tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_re);
if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_11 = mod_consts.const_str_plain_link_fuzzy;
tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_11);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_pattern == NULL);
var_pattern = tmp_assign_source_13;
}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_12;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 454;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_32 = par_self;
tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_re);
if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_12 = mod_consts.const_str_plain_link_no_ip_fuzzy;
tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_12);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_pattern == NULL);
var_pattern = tmp_assign_source_14;
}
branch_end_8:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_33;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_arg_value_1_4;
PyObject *tmp_kw_call_dict_value_0_4;
PyObject *tmp_expression_value_34;
tmp_expression_value_33 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 456;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_search);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pattern);
tmp_kw_call_arg_value_0_4 = var_pattern;
if (par_text == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_text);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 456;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_1_4 = par_text;
tmp_expression_value_34 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 456;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_IGNORECASE);
if (tmp_kw_call_dict_value_0_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 456;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 456;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_kw_call_dict_value_0_4);
Py_DECREF(tmp_kw_call_dict_value_0_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ml == NULL);
var_ml = tmp_assign_source_15;
}
{
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_7;
CHECK_OBJECT(var_ml);
tmp_truth_name_7 = CHECK_IF_TRUE(var_ml);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 457;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_called_instance_8;
PyObject *tmp_len_arg_4;
PyObject *tmp_expression_value_35;
PyObject *tmp_called_instance_9;
PyObject *tmp_subscript_value_13;
CHECK_OBJECT(var_ml);
tmp_called_instance_8 = var_ml;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 458;
tmp_add_expr_left_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_8,
    mod_consts.const_str_plain_start,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ml);
tmp_called_instance_9 = var_ml;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 458;
tmp_expression_value_35 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts.const_str_plain_groups);
if (tmp_expression_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_4);

exception_lineno = 458;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_13 = const_int_0;
tmp_len_arg_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_35, tmp_subscript_value_13, 0);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
if (tmp_len_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_4);

exception_lineno = 458;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_4 = BUILTIN_LEN(tstate, tmp_len_arg_4);
CHECK_OBJECT(tmp_len_arg_4);
Py_DECREF(tmp_len_arg_4);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_4);

exception_lineno = 458;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_shift == NULL);
var_shift = tmp_assign_source_16;
}
{
nuitka_bool tmp_condition_result_10;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_36;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_37;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 460;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_36 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain__index);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = const_int_0;
tmp_or_left_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_shift);
tmp_cmp_expr_left_5 = var_shift;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 460;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_37 = par_self;
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain__index);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_10 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = const_str_empty;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 461;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__schema, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(var_shift);
tmp_assattr_value_7 = var_shift;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 462;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__index, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_called_instance_10;
PyObject *tmp_len_arg_5;
PyObject *tmp_called_instance_11;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(var_ml);
tmp_called_instance_10 = var_ml;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 463;
tmp_add_expr_left_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_10,
    mod_consts.const_str_plain_start,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_add_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ml);
tmp_called_instance_11 = var_ml;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 463;
tmp_len_arg_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_11, mod_consts.const_str_plain_group);
if (tmp_len_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_5);

exception_lineno = 463;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_5 = BUILTIN_LEN(tstate, tmp_len_arg_5);
CHECK_OBJECT(tmp_len_arg_5);
Py_DECREF(tmp_len_arg_5);
if (tmp_add_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_5);

exception_lineno = 463;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
CHECK_OBJECT(tmp_add_expr_right_5);
Py_DECREF(tmp_add_expr_right_5);
if (tmp_assattr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_self == NULL) {
Py_DECREF(tmp_assattr_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 463;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__last_index, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_10:;
branch_no_9:;
branch_no_7:;
branch_no_6:;
branch_no_4:;
{
nuitka_bool tmp_condition_result_11;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_38;
PyObject *tmp_expression_value_39;
PyObject *tmp_call_result_5;
int tmp_truth_name_8;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_call_result_6;
int tmp_truth_name_9;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 465;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_39 = par_self;
tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain__opts);
if (tmp_expression_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_38);
Py_DECREF(tmp_expression_value_38);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 465;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_plain_fuzzy_email_tuple);

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_call_result_5);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_5);

exception_lineno = 465;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 465;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_41 = par_self;
tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain__compiled);
if (tmp_expression_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 465;
tmp_call_result_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_digest_59c33d34518c98b50110b8b5b227fe48_tuple);

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_call_result_6);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_6);

exception_lineno = 465;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
tmp_condition_result_11 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_11 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_11 = module_var_accessor_linkify_it$main$_index_of(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__index_of);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 467;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_text == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_text);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 467;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = par_text;
tmp_args_element_value_5 = mod_consts.const_str_chr_64;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 467;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_at_pos == NULL);
var_at_pos = tmp_assign_source_17;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_at_pos);
tmp_cmp_expr_left_6 = var_at_pos;
tmp_cmp_expr_right_6 = const_int_0;
tmp_condition_result_12 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_42;
PyObject *tmp_kw_call_arg_value_0_5;
PyObject *tmp_expression_value_43;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_14;
PyObject *tmp_kw_call_arg_value_1_5;
PyObject *tmp_kw_call_dict_value_0_5;
PyObject *tmp_expression_value_45;
tmp_expression_value_42 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 471;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_search);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_self == NULL) {
Py_DECREF(tmp_called_value_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 471;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_44 = par_self;
tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_re);
if (tmp_expression_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 471;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_14 = mod_consts.const_str_plain_email_fuzzy;
tmp_kw_call_arg_value_0_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_14);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_kw_call_arg_value_0_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 471;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_text == NULL) {
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_kw_call_arg_value_0_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_text);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 471;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_1_5 = par_text;
tmp_expression_value_45 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_kw_call_arg_value_0_5);

exception_lineno = 471;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_IGNORECASE);
if (tmp_kw_call_dict_value_0_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_kw_call_arg_value_0_5);

exception_lineno = 471;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 471;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_5};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_12, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_kw_call_arg_value_0_5);
Py_DECREF(tmp_kw_call_arg_value_0_5);
CHECK_OBJECT(tmp_kw_call_dict_value_0_5);
Py_DECREF(tmp_kw_call_dict_value_0_5);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_me == NULL);
var_me = tmp_assign_source_18;
}
{
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_10;
CHECK_OBJECT(var_me);
tmp_truth_name_10 = CHECK_IF_TRUE(var_me);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_called_instance_12;
PyObject *tmp_len_arg_6;
PyObject *tmp_expression_value_46;
PyObject *tmp_called_instance_13;
PyObject *tmp_subscript_value_15;
CHECK_OBJECT(var_me);
tmp_called_instance_12 = var_me;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 473;
tmp_add_expr_left_6 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_12,
    mod_consts.const_str_plain_start,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_add_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_me);
tmp_called_instance_13 = var_me;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 473;
tmp_expression_value_46 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_13, mod_consts.const_str_plain_groups);
if (tmp_expression_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_6);

exception_lineno = 473;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_15 = const_int_0;
tmp_len_arg_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_46, tmp_subscript_value_15, 0);
CHECK_OBJECT(tmp_expression_value_46);
Py_DECREF(tmp_expression_value_46);
if (tmp_len_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_6);

exception_lineno = 473;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_6 = BUILTIN_LEN(tstate, tmp_len_arg_6);
CHECK_OBJECT(tmp_len_arg_6);
Py_DECREF(tmp_len_arg_6);
if (tmp_add_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_6);

exception_lineno = 473;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_left_6);
Py_DECREF(tmp_add_expr_left_6);
CHECK_OBJECT(tmp_add_expr_right_6);
Py_DECREF(tmp_add_expr_right_6);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_shift;
    var_shift = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_called_instance_14;
PyObject *tmp_len_arg_7;
PyObject *tmp_called_instance_15;
CHECK_OBJECT(var_me);
tmp_called_instance_14 = var_me;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 474;
tmp_add_expr_left_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_14,
    mod_consts.const_str_plain_start,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_add_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_me);
tmp_called_instance_15 = var_me;
frame_frame_linkify_it$main$$$function__17_test->m_frame.f_lineno = 474;
tmp_len_arg_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_15, mod_consts.const_str_plain_group);
if (tmp_len_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_7);

exception_lineno = 474;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_7 = BUILTIN_LEN(tstate, tmp_len_arg_7);
CHECK_OBJECT(tmp_len_arg_7);
Py_DECREF(tmp_len_arg_7);
if (tmp_add_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_7);

exception_lineno = 474;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_left_7);
Py_DECREF(tmp_add_expr_left_7);
CHECK_OBJECT(tmp_add_expr_right_7);
Py_DECREF(tmp_add_expr_right_7);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_next_shift == NULL);
var_next_shift = tmp_assign_source_20;
}
{
nuitka_bool tmp_condition_result_14;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_47;
int tmp_or_left_truth_4;
nuitka_bool tmp_or_left_value_4;
nuitka_bool tmp_or_right_value_4;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_48;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_expression_value_49;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_50;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 477;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_47 = par_self;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain__index);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = const_int_0;
tmp_or_left_value_3 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(var_shift);
tmp_cmp_expr_left_8 = var_shift;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 478;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_48 = par_self;
tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain__index);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_4 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_or_left_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
CHECK_OBJECT(var_shift);
tmp_cmp_expr_left_9 = var_shift;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 479;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_49 = par_self;
tmp_cmp_expr_right_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain__index);
if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_right_9);
Py_DECREF(tmp_cmp_expr_right_9);
if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_next_shift);
tmp_cmp_expr_left_10 = var_next_shift;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 479;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_50 = par_self;
tmp_cmp_expr_right_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain__last_index);
if (tmp_cmp_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_right_10);
Py_DECREF(tmp_cmp_expr_right_10);
if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_4 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_or_right_value_4 = tmp_and_left_value_3;
and_end_3:;
tmp_or_right_value_3 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_or_right_value_3 = tmp_or_left_value_4;
or_end_4:;
tmp_condition_result_14 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_condition_result_14 = tmp_or_left_value_3;
or_end_3:;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
tmp_assattr_value_9 = mod_consts.const_str_digest_59c33d34518c98b50110b8b5b227fe48;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 481;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain__schema, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_assattr_target_10;
CHECK_OBJECT(var_shift);
tmp_assattr_value_10 = var_shift;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 482;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain__index, tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
CHECK_OBJECT(var_next_shift);
tmp_assattr_value_11 = var_next_shift;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 483;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain__last_index, tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_14:;
branch_no_13:;
branch_no_12:;
branch_no_11:;
{
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_expression_value_51;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 485;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_51 = par_self;
tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain__index);
if (tmp_cmp_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_11 = const_int_0;
tmp_return_value = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "oooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__17_test, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__17_test->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__17_test, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__17_test,
    type_description_1,
    par_self,
    par_text,
    var_regex,
    var_last_index,
    var_matched_iter,
    var_matched,
    var_m,
    var_length,
    var_matched_tld,
    var_tld_pos,
    var_pattern,
    var_ml,
    var_shift,
    var_at_pos,
    var_me,
    var_next_shift
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__17_test == cache_frame_frame_linkify_it$main$$$function__17_test) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__17_test);
    cache_frame_frame_linkify_it$main$$$function__17_test = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__17_test);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_regex);
var_regex = NULL;
Py_XDECREF(var_last_index);
var_last_index = NULL;
Py_XDECREF(var_matched_iter);
var_matched_iter = NULL;
Py_XDECREF(var_matched);
var_matched = NULL;
Py_XDECREF(var_m);
var_m = NULL;
Py_XDECREF(var_length);
var_length = NULL;
Py_XDECREF(var_matched_tld);
var_matched_tld = NULL;
Py_XDECREF(var_tld_pos);
var_tld_pos = NULL;
Py_XDECREF(var_pattern);
var_pattern = NULL;
Py_XDECREF(var_ml);
var_ml = NULL;
Py_XDECREF(var_shift);
var_shift = NULL;
Py_XDECREF(var_at_pos);
var_at_pos = NULL;
Py_XDECREF(var_me);
var_me = NULL;
Py_XDECREF(var_next_shift);
var_next_shift = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_regex);
var_regex = NULL;
Py_XDECREF(var_last_index);
var_last_index = NULL;
Py_XDECREF(var_matched_iter);
var_matched_iter = NULL;
Py_XDECREF(var_matched);
var_matched = NULL;
Py_XDECREF(var_m);
var_m = NULL;
Py_XDECREF(var_length);
var_length = NULL;
Py_XDECREF(var_matched_tld);
var_matched_tld = NULL;
Py_XDECREF(var_tld_pos);
var_tld_pos = NULL;
Py_XDECREF(var_pattern);
var_pattern = NULL;
Py_XDECREF(var_ml);
var_ml = NULL;
Py_XDECREF(var_shift);
var_shift = NULL;
Py_XDECREF(var_at_pos);
var_at_pos = NULL;
Py_XDECREF(var_me);
var_me = NULL;
Py_XDECREF(var_next_shift);
var_next_shift = NULL;
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
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__18_pretest(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_text = python_pars[1];
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__18_pretest;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__18_pretest = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__18_pretest)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__18_pretest);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__18_pretest == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__18_pretest = MAKE_FUNCTION_FRAME(tstate, code_objects_72004d8b61e01d033c0c262bbad5cf55, module_linkify_it$main, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__18_pretest->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__18_pretest = cache_frame_frame_linkify_it$main$$$function__18_pretest;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__18_pretest);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__18_pretest) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_4;
int tmp_truth_name_1;
tmp_expression_value_1 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 499;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_search);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_re);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 499;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_pretest;
tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 499;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_text);
tmp_kw_call_arg_value_1_1 = par_text;
tmp_expression_value_4 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 499;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_IGNORECASE);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 499;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__18_pretest->m_frame.f_lineno = 499;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 499;
type_description_1 = "oo";
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__18_pretest, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__18_pretest->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__18_pretest, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__18_pretest,
    type_description_1,
    par_self,
    par_text
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__18_pretest == cache_frame_frame_linkify_it$main$$$function__18_pretest) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__18_pretest);
    cache_frame_frame_linkify_it$main$$$function__18_pretest = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__18_pretest);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__19_test_schema_at(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_text = python_pars[1];
PyObject *par_name = python_pars[2];
PyObject *par_position = python_pars[3];
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__19_test_schema_at;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__19_test_schema_at = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__19_test_schema_at)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__19_test_schema_at);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__19_test_schema_at == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__19_test_schema_at = MAKE_FUNCTION_FRAME(tstate, code_objects_df26d7b4b8f8d72714d9880617d07d4e, module_linkify_it$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__19_test_schema_at->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__19_test_schema_at = cache_frame_frame_linkify_it$main$$$function__19_test_schema_at;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__19_test_schema_at);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__19_test_schema_at) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__compiled);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_expression_value_3 = par_name;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_lower);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 517;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__19_test_schema_at->m_frame.f_lineno = 517;
tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 517;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__19_test_schema_at->m_frame.f_lineno = 517;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oooo";
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
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__compiled);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_expression_value_7 = par_name;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_lower);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 519;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__19_test_schema_at->m_frame.f_lineno = 519;
tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 519;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__19_test_schema_at->m_frame.f_lineno = 519;
tmp_expression_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__19_test_schema_at->m_frame.f_lineno = 519;
tmp_called_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_validate_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_text);
tmp_args_element_value_3 = par_text;
CHECK_OBJECT(par_position);
tmp_args_element_value_4 = par_position;
frame_frame_linkify_it$main$$$function__19_test_schema_at->m_frame.f_lineno = 519;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__19_test_schema_at, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__19_test_schema_at->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__19_test_schema_at, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__19_test_schema_at,
    type_description_1,
    par_self,
    par_text,
    par_name,
    par_position
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__19_test_schema_at == cache_frame_frame_linkify_it$main$$$function__19_test_schema_at) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__19_test_schema_at);
    cache_frame_frame_linkify_it$main$$$function__19_test_schema_at = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__19_test_schema_at);

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
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_position);
Py_DECREF(par_position);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_position);
Py_DECREF(par_position);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__20_match(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_text = python_pars[1];
PyObject *var_shift = NULL;
PyObject *var_result = NULL;
PyObject *var_tail = NULL;
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__20_match;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__20_match = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_int_0;
assert(var_shift == NULL);
Py_INCREF(tmp_assign_source_1);
var_shift = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_result == NULL);
var_result = tmp_assign_source_2;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__20_match)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__20_match);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__20_match == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__20_match = MAKE_FUNCTION_FRAME(tstate, code_objects_662c3efc3c8b10932ae651841752fd14, module_linkify_it$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__20_match->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__20_match = cache_frame_frame_linkify_it$main$$$function__20_match;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__20_match);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__20_match) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__index);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_and_left_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__text_cache);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_text);
tmp_cmp_expr_right_2 = par_text;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_result);
tmp_list_arg_value_1 = var_result;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_shift);
tmp_args_element_value_1 = var_shift;
frame_frame_linkify_it$main$$$function__20_match->m_frame.f_lineno = 545;
tmp_item_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__create_match, tmp_args_element_value_1);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 545;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__last_index);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 546;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_shift;
    assert(old != NULL);
    var_shift = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_4;
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(var_shift);
tmp_truth_name_1 = CHECK_IF_TRUE(var_shift);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_text);
tmp_expression_value_4 = par_text;
CHECK_OBJECT(var_shift);
tmp_start_value_1 = var_shift;
tmp_stop_value_1 = Py_None;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_text);
tmp_assign_source_4 = par_text;
Py_INCREF(tmp_assign_source_4);
condexpr_end_1:;
assert(var_tail == NULL);
var_tail = tmp_assign_source_4;
}
loop_start_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 552;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_test);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (var_tail == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tail);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 552;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = var_tail;
frame_frame_linkify_it$main$$$function__20_match->m_frame.f_lineno = 552;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
goto loop_end_1;
branch_no_2:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_3;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 553;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_2 = var_result;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 553;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__create_match);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (var_shift == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shift);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 553;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = var_shift;
frame_frame_linkify_it$main$$$function__20_match->m_frame.f_lineno = 553;
tmp_item_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_start_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_stop_value_2;
if (var_tail == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tail);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 555;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = var_tail;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 555;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = par_self;
tmp_start_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__last_index);
if (tmp_start_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_2 = Py_None;
tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
CHECK_OBJECT(tmp_start_value_2);
Py_DECREF(tmp_start_value_2);
assert(!(tmp_subscript_value_2 == NULL));
tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_tail;
    var_tail = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_expression_value_9;
if (var_shift == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shift);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 556;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_shift;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 556;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = par_self;
tmp_iadd_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__last_index);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = tmp_iadd_expr_left_1;
var_shift = tmp_assign_source_6;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
bool tmp_condition_result_4;
PyObject *tmp_len_arg_1;
PyObject *tmp_capi_result_1;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 558;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = var_result;
tmp_capi_result_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 559;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__20_match, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__20_match->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__20_match, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__20_match,
    type_description_1,
    par_self,
    par_text,
    var_shift,
    var_result,
    var_tail
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__20_match == cache_frame_frame_linkify_it$main$$$function__20_match) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__20_match);
    cache_frame_frame_linkify_it$main$$$function__20_match = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__20_match);

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
Py_XDECREF(var_shift);
var_shift = NULL;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_tail);
var_tail = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_shift);
var_shift = NULL;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_tail);
var_tail = NULL;
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
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__21_match_at_start(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_text = python_pars[1];
PyObject *var_founds = NULL;
PyObject *var_m = NULL;
PyObject *var_length = NULL;
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__21_match_at_start;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__21_match_at_start = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__21_match_at_start)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__21_match_at_start);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__21_match_at_start == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__21_match_at_start = MAKE_FUNCTION_FRAME(tstate, code_objects_51c86ecc11943ac638a72469bd638517, module_linkify_it$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__21_match_at_start->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__21_match_at_start = cache_frame_frame_linkify_it$main$$$function__21_match_at_start;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__21_match_at_start);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__21_match_at_start) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_text);
tmp_assattr_value_1 = par_text;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__text_cache, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = const_int_neg_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__index, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_text);
tmp_len_arg_1 = par_text;
tmp_operand_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 577;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
assert(!(tmp_res == -1));
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_4;
tmp_expression_value_1 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 580;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_search);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_re);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 580;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_schema_at_start;
tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 580;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_text);
tmp_kw_call_arg_value_1_1 = par_text;
tmp_expression_value_4 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 580;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_IGNORECASE);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 580;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__21_match_at_start->m_frame.f_lineno = 580;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_founds == NULL);
var_founds = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_founds);
tmp_operand_value_2 = var_founds;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_founds);
tmp_called_instance_1 = var_founds;
frame_frame_linkify_it$main$$$function__21_match_at_start->m_frame.f_lineno = 584;
tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_group);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_instance_3;
PyObject *tmp_subscript_value_3;
PyTuple_SET_ITEM(tmp_assign_source_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_founds);
tmp_called_instance_2 = var_founds;
frame_frame_linkify_it$main$$$function__21_match_at_start->m_frame.f_lineno = 584;
tmp_expression_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_groups);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_subscript_value_2 = const_int_0;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, 0);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_2, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_founds);
tmp_called_instance_3 = var_founds;
frame_frame_linkify_it$main$$$function__21_match_at_start->m_frame.f_lineno = 584;
tmp_expression_value_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_groups);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_subscript_value_3 = const_int_pos_1;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_3, 1);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_2, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
assert(var_m == NULL);
var_m = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_len_arg_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_test_schema_at);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 585;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_text);
tmp_args_element_value_1 = par_text;
CHECK_OBJECT(var_m);
tmp_expression_value_8 = var_m;
tmp_subscript_value_4 = mod_consts.const_int_pos_2;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_4, 2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 585;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_expression_value_9 = var_m;
tmp_subscript_value_5 = const_int_0;
tmp_len_arg_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_5, 0);
if (tmp_len_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 585;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = BUILTIN_LEN(tstate, tmp_len_arg_2);
CHECK_OBJECT(tmp_len_arg_2);
Py_DECREF(tmp_len_arg_2);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 585;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__21_match_at_start->m_frame.f_lineno = 585;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 585;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_length == NULL);
var_length = tmp_assign_source_3;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(var_length);
tmp_operand_value_3 = var_length;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 586;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_6;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_m);
tmp_expression_value_10 = var_m;
tmp_subscript_value_6 = mod_consts.const_int_pos_2;
tmp_assattr_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_6, 2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__schema, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_instance_4;
PyObject *tmp_len_arg_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_7;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(var_founds);
tmp_called_instance_4 = var_founds;
frame_frame_linkify_it$main$$$function__21_match_at_start->m_frame.f_lineno = 590;
tmp_add_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_start,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 590;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_expression_value_11 = var_m;
tmp_subscript_value_7 = const_int_pos_1;
tmp_len_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_7, 1);
if (tmp_len_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 590;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
CHECK_OBJECT(tmp_len_arg_3);
Py_DECREF(tmp_len_arg_3);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 590;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 590;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__index, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 590;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_called_instance_5;
PyObject *tmp_len_arg_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_8;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(var_founds);
tmp_called_instance_5 = var_founds;
frame_frame_linkify_it$main$$$function__21_match_at_start->m_frame.f_lineno = 591;
tmp_add_expr_left_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_start,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_expression_value_12 = var_m;
tmp_subscript_value_8 = const_int_0;
tmp_len_arg_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_8, 0);
if (tmp_len_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 591;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_3 = BUILTIN_LEN(tstate, tmp_len_arg_4);
CHECK_OBJECT(tmp_len_arg_4);
Py_DECREF(tmp_len_arg_4);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 591;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_length);
tmp_add_expr_right_2 = var_length;
tmp_assattr_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__last_index, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_6;
CHECK_OBJECT(par_self);
tmp_called_instance_6 = par_self;
frame_frame_linkify_it$main$$$function__21_match_at_start->m_frame.f_lineno = 593;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain__create_match,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__21_match_at_start, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__21_match_at_start->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__21_match_at_start, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__21_match_at_start,
    type_description_1,
    par_self,
    par_text,
    var_founds,
    var_m,
    var_length
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__21_match_at_start == cache_frame_frame_linkify_it$main$$$function__21_match_at_start) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__21_match_at_start);
    cache_frame_frame_linkify_it$main$$$function__21_match_at_start = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__21_match_at_start);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_founds);
var_founds = NULL;
Py_XDECREF(var_m);
var_m = NULL;
Py_XDECREF(var_length);
var_length = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_founds);
var_founds = NULL;
Py_XDECREF(var_m);
var_m = NULL;
Py_XDECREF(var_length);
var_length = NULL;
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
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__22_tlds(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_list_tlds = python_pars[1];
PyObject *par_keep_old = python_pars[2];
PyObject *var__list = NULL;
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__22_tlds;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__22_tlds = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__22_tlds)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__22_tlds);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__22_tlds == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__22_tlds = MAKE_FUNCTION_FRAME(tstate, code_objects_544fc05c3ca5ad4fbec2f2aa992741c0, module_linkify_it$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__22_tlds->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__22_tlds = cache_frame_frame_linkify_it$main$$$function__22_tlds;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__22_tlds);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__22_tlds) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_list_element_1;
CHECK_OBJECT(par_list_tlds);
tmp_isinstance_inst_1 = par_list_tlds;
tmp_isinstance_cls_1 = (PyObject *)&PyList_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_list_tlds);
tmp_assign_source_1 = par_list_tlds;
Py_INCREF(tmp_assign_source_1);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_list_tlds);
tmp_list_element_1 = par_list_tlds;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_assign_source_1, 0, tmp_list_element_1);
condexpr_end_1:;
assert(var__list == NULL);
var__list = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_keep_old);
tmp_operand_value_1 = par_keep_old;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 614;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var__list);
tmp_assattr_value_1 = var__list;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__tlds, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 615;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__tlds_replaced, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_linkify_it$main$$$function__22_tlds->m_frame.f_lineno = 617;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__compile);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 617;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__tlds);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_extend);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__list);
tmp_args_element_value_1 = var__list;
frame_frame_linkify_it$main$$$function__22_tlds->m_frame.f_lineno = 620;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_set_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_assattr_target_3;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_sorted);
assert(tmp_called_value_2 != NULL);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_set_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__tlds);
if (tmp_set_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 621;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_list_arg_1 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 621;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 621;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_20f16b30e1951d468c3080dfc46b8748);
frame_frame_linkify_it$main$$$function__22_tlds->m_frame.f_lineno = 621;
tmp_assattr_value_3 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 621;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__tlds, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 621;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_linkify_it$main$$$function__22_tlds->m_frame.f_lineno = 623;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__compile);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 623;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__22_tlds, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__22_tlds->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__22_tlds, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__22_tlds,
    type_description_1,
    par_self,
    par_list_tlds,
    par_keep_old,
    var__list
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__22_tlds == cache_frame_frame_linkify_it$main$$$function__22_tlds) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__22_tlds);
    cache_frame_frame_linkify_it$main$$$function__22_tlds = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__22_tlds);

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
CHECK_OBJECT(var__list);
CHECK_OBJECT(var__list);
Py_DECREF(var__list);
var__list = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__list);
var__list = NULL;
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
CHECK_OBJECT(par_list_tlds);
Py_DECREF(par_list_tlds);
CHECK_OBJECT(par_keep_old);
Py_DECREF(par_keep_old);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_list_tlds);
Py_DECREF(par_list_tlds);
CHECK_OBJECT(par_keep_old);
Py_DECREF(par_keep_old);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_linkify_it$main$$$function__23_normalize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_match = python_pars[1];
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$function__23_normalize;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_linkify_it$main$$$function__23_normalize = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_linkify_it$main$$$function__23_normalize)) {
    Py_XDECREF(cache_frame_frame_linkify_it$main$$$function__23_normalize);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_linkify_it$main$$$function__23_normalize == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_linkify_it$main$$$function__23_normalize = MAKE_FUNCTION_FRAME(tstate, code_objects_8c370e4ee89e98fa86283b4ca0e7daf3, module_linkify_it$main, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_linkify_it$main$$$function__23_normalize->m_type_description == NULL);
frame_frame_linkify_it$main$$$function__23_normalize = cache_frame_frame_linkify_it$main$$$function__23_normalize;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$function__23_normalize);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$function__23_normalize) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_match);
tmp_expression_value_1 = par_match;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_schema);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 632;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 632;
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_1;
tmp_add_expr_left_1 = mod_consts.const_str_digest_7c06a402579f6f9d9db7f3e04da983fc;
CHECK_OBJECT(par_match);
tmp_expression_value_2 = par_match;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_url);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 633;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 633;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_match);
tmp_assattr_target_1 = par_match;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_url, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 633;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_match);
tmp_expression_value_3 = par_match;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_schema);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 635;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_59c33d34518c98b50110b8b5b227fe48;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 635;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 635;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_expression_value_4 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 635;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_search);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 635;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_f3e3b3ce1263053e44c8863acf343d95;
CHECK_OBJECT(par_match);
tmp_expression_value_5 = par_match;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_url);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 636;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 636;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_IGNORECASE);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 636;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main$$$function__23_normalize->m_frame.f_lineno = 635;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 635;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 635;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_assattr_target_2;
tmp_add_expr_left_2 = mod_consts.const_str_digest_59c33d34518c98b50110b8b5b227fe48;
CHECK_OBJECT(par_match);
tmp_expression_value_7 = par_match;
tmp_add_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_url);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 638;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 638;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_match);
tmp_assattr_target_2 = par_match;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_url, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 638;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$function__23_normalize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$function__23_normalize->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$function__23_normalize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$function__23_normalize,
    type_description_1,
    par_self,
    par_match
);


// Release cached frame if used for exception.
if (frame_frame_linkify_it$main$$$function__23_normalize == cache_frame_frame_linkify_it$main$$$function__23_normalize) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_linkify_it$main$$$function__23_normalize);
    cache_frame_frame_linkify_it$main$$$function__23_normalize = NULL;
}

assertFrameObject(frame_frame_linkify_it$main$$$function__23_normalize);

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
CHECK_OBJECT(par_match);
Py_DECREF(par_match);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_match);
Py_DECREF(par_match);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__10__create_validator(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__10__create_validator,
        mod_consts.const_str_plain__create_validator,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d06d42786bbe6b4350b2bc591cbb6d90,
#endif
        code_objects_d6b84881652e6021a867367261e583b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__10__create_validator$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__10__create_validator$$$function__1_func,
        mod_consts.const_str_plain_func,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9a791bd0ef10253f1e89f630f97b1a58,
#endif
        code_objects_796bfec33fd1005af8f9e7043ffa59bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__11__create_normalizer(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__11__create_normalizer,
        mod_consts.const_str_plain__create_normalizer,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c56e137e19f179c792667bda59a1aea2,
#endif
        code_objects_e80dd1ac5438f707aafb4c3356cf68ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__11__create_normalizer$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__11__create_normalizer$$$function__1_func,
        mod_consts.const_str_plain_func,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f980854454706b7c9eb2d49a6b00e290,
#endif
        code_objects_b9d4e337a24e486690bdcc2e7b31852e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__12__create_match(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__12__create_match,
        mod_consts.const_str_plain__create_match,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_da4ec12f10fb85b975c583c08f72c2d9,
#endif
        code_objects_3a99cc121e82ab200fc6232d4b30ffa2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__13___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__13___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7d882a62afd24a20297b88aefee0536e,
#endif
        code_objects_3aefe6649194d2406c746dc6aad67651,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__14__compile(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__14__compile,
        mod_consts.const_str_plain__compile,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e9d810c75a33758e7cf5fee1ee90116a,
#endif
        code_objects_5c46894d34b19e2cf47fe95b2e33c5fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        mod_consts.const_str_digest_0b3d8613f1c725018ad3fc859bc6b856,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__14__compile$$$function__1_untpl(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__14__compile$$$function__1_untpl,
        mod_consts.const_str_plain_untpl,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_43ce19c7636690b8f3d205941e7cc38b,
#endif
        code_objects_ff4887a33de1aca760da6c3cb5a01e77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__15_add(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__15_add,
        mod_consts.const_str_plain_add,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a5e2f4697253e5e11014381cb9f92b38,
#endif
        code_objects_1fce047ec31f542ba849da372b3786f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        mod_consts.const_str_digest_028a8d8b52d5c73a872abe583047f749,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__16_set(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__16_set,
        mod_consts.const_str_plain_set,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b084b0862292aa69581c77930eef71cd,
#endif
        code_objects_ba9efc468569454750920f8afe138b5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        mod_consts.const_str_digest_80345a83bfd733f0b98d1e5eaa7356f4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__17_test(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__17_test,
        mod_consts.const_str_plain_test,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c3e714077525e1b7cbd27d070730ce22,
#endif
        code_objects_5e23c10465925d4aceb5584f7b8ee7df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        mod_consts.const_str_digest_727a98a2ba8ea0edb605e42563c09dc3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__18_pretest(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__18_pretest,
        mod_consts.const_str_plain_pretest,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a83896f06ce103d2c5eb407afd687946,
#endif
        code_objects_72004d8b61e01d033c0c262bbad5cf55,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        mod_consts.const_str_digest_62cbbec4d6e4dae0d31069741c4b1535,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__19_test_schema_at(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__19_test_schema_at,
        mod_consts.const_str_plain_test_schema_at,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f81d3aca3d43db1d81143691880cbbfb,
#endif
        code_objects_df26d7b4b8f8d72714d9880617d07d4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        mod_consts.const_str_digest_453d5357fae4900c4d0e481e3ff57351,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__1__escape_re(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__1__escape_re,
        mod_consts.const_str_plain__escape_re,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_86f578480448c0ad8599e78d28b8f05d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__20_match(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__20_match,
        mod_consts.const_str_plain_match,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_649626aa05a795e673c17f141e82afde,
#endif
        code_objects_662c3efc3c8b10932ae651841752fd14,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        mod_consts.const_str_digest_6528643a15bbf15dd70cc6c3adda95b4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__21_match_at_start(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__21_match_at_start,
        mod_consts.const_str_plain_match_at_start,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fbac77b33113858fbf4e5ac211d2e2cd,
#endif
        code_objects_51c86ecc11943ac638a72469bd638517,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        mod_consts.const_str_digest_d95a093e424ce26a0771bb86b370d4bf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__22_tlds(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__22_tlds,
        mod_consts.const_str_plain_tlds,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_22d8d09e85cb13fcbe88e4b9e18a2eef,
#endif
        code_objects_544fc05c3ca5ad4fbec2f2aa992741c0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        mod_consts.const_str_digest_67845612039f625c4969a8b35aa23c63,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__23_normalize(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__23_normalize,
        mod_consts.const_str_plain_normalize,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e7a5ffba8c80a260e3f041e4832c9d61,
#endif
        code_objects_8c370e4ee89e98fa86283b4ca0e7daf3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        mod_consts.const_str_digest_42c58ca76c7358db8bf06cafcd21ac6e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__24__on_compile(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain__on_compile,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8d9ecf201a27f01e1787c3d6e4b89d96,
#endif
        code_objects_d1d9369d81c92d7c5982bcae506247f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        mod_consts.const_str_digest_7f3504c586763d69d681a95364dd08a1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__2__index_of(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__2__index_of,
        mod_consts.const_str_plain__index_of,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2ee3ef687e935fed18396943cb3e1c0d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__3___init__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_532893dea9d9676970dda8d0bb5d132a,
#endif
        code_objects_2da477f8be4030981f75472c0ccf1db8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__4___repr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__4___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b131589db03bda498bd43985fb3ba801,
#endif
        code_objects_bcce927205a9e594705c7c09551f3176,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__5___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8aa20829481a290cb085ff6fa9e26858,
#endif
        code_objects_d53443ac3962f215474a4b10ef409374,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__6__validate_http(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__6__validate_http,
        mod_consts.const_str_plain__validate_http,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e20049532541c25f568671115bb2f168,
#endif
        code_objects_da9ee8dc08d21e0c83fc3eac704d769d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__7__validate_double_slash(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__7__validate_double_slash,
        mod_consts.const_str_plain__validate_double_slash,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9195a20d6ff875491de4f276b7716113,
#endif
        code_objects_b4d41e2a05c4a53435420ebcfcbbca9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__8__validate_mailto(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__8__validate_mailto,
        mod_consts.const_str_plain__validate_mailto,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e4b48846ab44d4d3d09c9c8337a16c2d,
#endif
        code_objects_ddaa7b63824f1f4fab832d0340e9560e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_linkify_it$main$$$function__9__reset_scan_cache(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_linkify_it$main$$$function__9__reset_scan_cache,
        mod_consts.const_str_plain__reset_scan_cache,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6c0a07a109a4097832add04594f3037a,
#endif
        code_objects_37e0a0fb16eeb27955931330d8d95c65,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_linkify_it$main,
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

static function_impl_code const function_table_linkify_it$main[] = {
impl_linkify_it$main$$$function__10__create_validator$$$function__1_func,
impl_linkify_it$main$$$function__11__create_normalizer$$$function__1_func,
impl_linkify_it$main$$$function__14__compile$$$function__1_untpl,
impl_linkify_it$main$$$function__1__escape_re,
impl_linkify_it$main$$$function__2__index_of,
impl_linkify_it$main$$$function__3___init__,
impl_linkify_it$main$$$function__4___repr__,
impl_linkify_it$main$$$function__5___init__,
impl_linkify_it$main$$$function__6__validate_http,
impl_linkify_it$main$$$function__7__validate_double_slash,
impl_linkify_it$main$$$function__8__validate_mailto,
impl_linkify_it$main$$$function__9__reset_scan_cache,
impl_linkify_it$main$$$function__10__create_validator,
impl_linkify_it$main$$$function__11__create_normalizer,
impl_linkify_it$main$$$function__12__create_match,
impl_linkify_it$main$$$function__13___init__,
impl_linkify_it$main$$$function__14__compile,
impl_linkify_it$main$$$function__15_add,
impl_linkify_it$main$$$function__16_set,
impl_linkify_it$main$$$function__17_test,
impl_linkify_it$main$$$function__18_pretest,
impl_linkify_it$main$$$function__19_test_schema_at,
impl_linkify_it$main$$$function__20_match,
impl_linkify_it$main$$$function__21_match_at_start,
impl_linkify_it$main$$$function__22_tlds,
impl_linkify_it$main$$$function__23_normalize,
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

    return Nuitka_Function_GetFunctionState(function, function_table_linkify_it$main);
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
        module_linkify_it$main,
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
        function_table_linkify_it$main,
        sizeof(function_table_linkify_it$main) / sizeof(function_impl_code)
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
static char const *module_full_name = "linkify_it.main";
#endif

// Internal entry point for module code.
PyObject *module_code_linkify_it$main(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("linkify_it$main");

    // Store the module for future use.
    module_linkify_it$main = module;

    moduledict_linkify_it$main = MODULE_DICT(module_linkify_it$main);

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
        PRINT_STRING("linkify_it$main: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("linkify_it$main: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("linkify_it$main: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "linkify_it.main" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initlinkify_it$main\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_linkify_it$main,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_linkify_it$main,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_linkify_it$main,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_linkify_it$main,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_linkify_it$main,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_linkify_it$main);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_linkify_it$main);
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

        UPDATE_STRING_DICT1(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_linkify_it$main;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_linkify_it$main$$$class__1_SchemaError_24 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_linkify_it$main$$$class__1_SchemaError_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_linkify_it$main$$$class__2_Match_32 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_linkify_it$main$$$class__3_LinkifyIt_66 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_linkify_it$main = MAKE_MODULE_FRAME(code_objects_8aa124487a2a9d454bd20ba4a8f24dc4, module_linkify_it$main);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main);
assert(Py_REFCNT(frame_frame_linkify_it$main) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_linkify_it$main$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_linkify_it$main$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_copy;
tmp_globals_arg_value_1 = (PyObject *)moduledict_linkify_it$main;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_linkify_it$main->m_frame.f_lineno = 1;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_copy, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_2 = (PyObject *)moduledict_linkify_it$main;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_linkify_it$main->m_frame.f_lineno = 2;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPES();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_ucre;
tmp_globals_arg_value_3 = (PyObject *)moduledict_linkify_it$main;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_build_re_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_linkify_it$main->m_frame.f_lineno = 5;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_linkify_it$main,
        mod_consts.const_str_plain_build_re,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_build_re);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_build_re, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_type_arg_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_linkify_it$main$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 8;

    goto frame_exception_exit_1;
}
frame_frame_linkify_it$main->m_frame.f_lineno = 8;
tmp_type_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_empty_tuple, 0)
);

if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
tmp_assign_source_8 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_TYPE, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;

tmp_assign_source_9 = MAKE_FUNCTION_linkify_it$main$$$function__1__escape_re(tstate);

UPDATE_STRING_DICT1(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain__escape_re, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;

tmp_assign_source_10 = MAKE_FUNCTION_linkify_it$main$$$function__2__index_of(tstate);

UPDATE_STRING_DICT1(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain__index_of, tmp_assign_source_10);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_Exception_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_11 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

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
tmp_type_arg_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_2);
CHECK_OBJECT(tmp_type_arg_2);
Py_DECREF(tmp_type_arg_2);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_13 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_13;
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


exception_lineno = 24;

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
PyObject *tmp_assign_source_14;
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


exception_lineno = 24;

    goto try_except_handler_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_SchemaError;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_linkify_it$main->m_frame.f_lineno = 24;
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_14;
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


exception_lineno = 24;

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
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_3;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_3 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

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


exception_lineno = 24;

    goto try_except_handler_1;
}
frame_frame_linkify_it$main->m_frame.f_lineno = 24;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 24;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
}
branch_end_1:;
{
PyObject *tmp_assign_source_16;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_linkify_it$main$$$class__1_SchemaError_24 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_3608c08372d8bc24f99f76a759a6e0fa;
tmp_res = PyObject_SetItem(locals_linkify_it$main$$$class__1_SchemaError_24, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_6b3ca4a9129cbb14a0a166a88507096c;
tmp_res = PyObject_SetItem(locals_linkify_it$main$$$class__1_SchemaError_24, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_SchemaError;
tmp_res = PyObject_SetItem(locals_linkify_it$main$$$class__1_SchemaError_24, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_24;
tmp_res = PyObject_SetItem(locals_linkify_it$main$$$class__1_SchemaError_24, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
}
frame_frame_linkify_it$main$$$class__1_SchemaError_2 = MAKE_CLASS_FRAME(tstate, code_objects_efc2f34f304432cfd444cccf742c1c78, module_linkify_it$main, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_linkify_it$main$$$class__1_SchemaError_2);
assert(Py_REFCNT(frame_frame_linkify_it$main$$$class__1_SchemaError_2) == 2);

// Framed code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__3___init__(tstate, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_linkify_it$main$$$class__1_SchemaError_24, const_str_plain___init__, tmp_dictset_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main$$$class__1_SchemaError_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main$$$class__1_SchemaError_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main$$$class__1_SchemaError_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_linkify_it$main$$$class__1_SchemaError_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_linkify_it$main$$$class__1_SchemaError_2);

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
tmp_res = PyObject_SetItem(locals_linkify_it$main$$$class__1_SchemaError_24, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

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


exception_lineno = 24;

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
tmp_res = PyObject_SetItem(locals_linkify_it$main$$$class__1_SchemaError_24, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_3 = mod_consts.const_str_plain_SchemaError;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_linkify_it$main$$$class__1_SchemaError_24;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_linkify_it$main->m_frame.f_lineno = 24;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_17);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_16 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_16);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_linkify_it$main$$$class__1_SchemaError_24);
locals_linkify_it$main$$$class__1_SchemaError_24 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_linkify_it$main$$$class__1_SchemaError_24);
locals_linkify_it$main$$$class__1_SchemaError_24 = NULL;
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
exception_lineno = 24;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaError, tmp_assign_source_16);
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
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_linkify_it$main$$$class__2_Match_32 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_3608c08372d8bc24f99f76a759a6e0fa;
tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__2_Match_32, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_9cf04f85e4c1c9bbc7e2bb16ecf2d1dd;
tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__2_Match_32, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Match;
tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__2_Match_32, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__2_Match_32, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__4___repr__(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__2_Match_32, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__5___init__(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__2_Match_32, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_c2d2e3278b6512038538f1d1be4307cc_tuple;
tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__2_Match_32, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_3;
tmp_called_value_3 = (PyObject *)&PyType_Type;
tmp_tuple_element_4 = mod_consts.const_str_plain_Match;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_linkify_it$main$$$class__2_Match_32;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_linkify_it$main->m_frame.f_lineno = 32;
tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_21;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_20 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_20);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_linkify_it$main$$$class__2_Match_32);
locals_linkify_it$main$$$class__2_Match_32 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_linkify_it$main$$$class__2_Match_32);
locals_linkify_it$main$$$class__2_Match_32 = NULL;
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
exception_lineno = 32;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_Match, tmp_assign_source_20);
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
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_linkify_it$main$$$class__3_LinkifyIt_66 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_3608c08372d8bc24f99f76a759a6e0fa;
tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_d08fb44dfc2f4584ca27b6d591a42510;
tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_LinkifyIt;
tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_66;
tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__6__validate_http(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain__validate_http, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__7__validate_double_slash(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain__validate_double_slash, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__8__validate_mailto(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain__validate_mailto, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__9__reset_scan_cache(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain__reset_scan_cache, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__10__create_validator(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain__create_validator, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__11__create_normalizer(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain__create_normalizer, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__12__create_match(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain__create_match, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__13___init__(tstate, tmp_defaults_1);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__14__compile(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain__compile, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__15_add(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain_add, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__16_set(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain_set, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__17_test(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain_test, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__18_pretest(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain_pretest, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__19_test_schema_at(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain_test_schema_at, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__20_match(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain_match, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__21_match_at_start(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain_match_at_start, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_false_tuple;
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__22_tlds(tstate, tmp_defaults_2);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain_tlds, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__23_normalize(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain_normalize, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_linkify_it$main$$$function__24__on_compile(tstate);

tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain__on_compile, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_f3f51b90ed64accf1eed389ad25e01a0_tuple;
tmp_result = DICT_SET_ITEM(locals_linkify_it$main$$$class__3_LinkifyIt_66, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_4;
tmp_called_value_4 = (PyObject *)&PyType_Type;
tmp_tuple_element_5 = mod_consts.const_str_plain_LinkifyIt;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_linkify_it$main$$$class__3_LinkifyIt_66;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_linkify_it$main->m_frame.f_lineno = 66;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_9;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_25;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_24 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_24);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_linkify_it$main$$$class__3_LinkifyIt_66);
locals_linkify_it$main$$$class__3_LinkifyIt_66 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_linkify_it$main$$$class__3_LinkifyIt_66);
locals_linkify_it$main$$$class__3_LinkifyIt_66 = NULL;
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
exception_lineno = 66;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_linkify_it$main, (Nuitka_StringObject *)mod_consts.const_str_plain_LinkifyIt, tmp_assign_source_24);
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_linkify_it$main, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_linkify_it$main->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_linkify_it$main, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_linkify_it$main);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("linkify_it$main", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "linkify_it.main" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_linkify_it$main);
    return module_linkify_it$main;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_linkify_it$main, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("linkify_it$main", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

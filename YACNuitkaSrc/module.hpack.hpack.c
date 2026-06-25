/* Generated code for Python module 'hpack$hpack'
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



/* The "module_hpack$hpack" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_hpack$hpack;
PyDictObject *moduledict_hpack$hpack;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_digest_a3a4c5beeb969ca27bf3f3f39b5115e8;
PyObject *const_str_plain_log;
PyObject *const_str_plain_debug;
PyObject *const_str_digest_7e22b1fa6fa155d2f3a1351be7d2e17a;
PyObject *const_str_digest_d7822ae0c2d38fec9a62af31c42c2ca7;
PyObject *const_int_pos_8;
PyObject *const_str_digest_7ce481d7321ae057cb87e86191bf46e7;
PyObject *const_str_plain__PREFIX_BIT_MAX_NUMBERS;
PyObject *const_str_plain_integer;
PyObject *const_int_pos_128;
PyObject *const_str_plain_elements;
PyObject *const_int_pos_127;
PyObject *const_int_pos_7;
PyObject *const_str_digest_33d9b4637e3850f8b83c68cc895a895c;
PyObject *const_int_pos_255;
PyObject *const_str_plain_index;
PyObject *const_str_plain_number;
PyObject *const_str_plain_shift;
PyObject *const_str_digest_9cfa77c0116902d14173a3c9c32bff4b;
PyObject *const_str_plain_HPACKDecodingError;
PyObject *const_str_digest_9e7ce147a0728e9cce16661feea38dcf;
PyObject *const_str_digest_d6f4b216690ff262d3a76e5fbddcc6be;
PyObject *const_str_digest_b6d4211b536d4465b3fd167f7c7c1e16;
PyObject *const_str_plain_header_dict;
PyObject *const_str_digest_549e12ccf1a88a6f212c1fdb9569b1d2;
PyObject *const_str_plain_sorted;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_0668512dc9ee5ad667f56a15494321f7;
PyObject *const_tuple_str_plain_key_tuple;
PyObject *const_str_plain__dict_to_iterable;
PyObject *const_str_plain__to_bytes;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_bytes_chr_58_tuple;
PyObject *const_str_plain_encode;
PyObject *const_str_digest_8b8d33443997c17abea71f9c5f05e605;
PyObject *const_str_plain_HeaderTable;
PyObject *const_str_plain_header_table;
PyObject *const_str_plain_HuffmanEncoder;
PyObject *const_str_plain_REQUEST_CODES;
PyObject *const_str_plain_REQUEST_CODES_LENGTH;
PyObject *const_str_plain_huffman_coder;
PyObject *const_str_plain_table_size_changes;
PyObject *const_str_plain_maxsize;
PyObject *const_str_digest_8514096279fdceba1dfa5f9c0227b251;
PyObject *const_str_plain_resized;
PyObject *const_str_plain_append;
PyObject *const_str_plain__encode_table_size_change;
PyObject *const_str_plain_HeaderTuple;
PyObject *const_str_plain_indexable;
PyObject *const_int_pos_2;
PyObject *const_str_plain_header_block;
PyObject *const_str_plain_self;
PyObject *const_str_plain_add;
PyObject *const_str_plain_huffman;
PyObject *const_str_digest_d3716ab1c61cb57fd1983829d7da9719;
PyObject *const_str_digest_69dcb966aecc33e4c7eebc78ec5eba8c;
PyObject *const_str_digest_557a79e53c64ee1daf8a42c7db2bc36d;
PyObject *const_str_plain_INDEX_INCREMENTAL;
PyObject *const_str_plain_INDEX_NEVER;
PyObject *const_str_plain_search;
PyObject *const_str_plain__encode_literal;
PyObject *const_str_plain__encode_indexed;
PyObject *const_str_plain__encode_indexed_literal;
PyObject *const_str_digest_7759e8af4a64ad23081ce8861e0a20e9;
PyObject *const_str_plain_encode_integer;
PyObject *const_str_digest_f9fb55024b65a4f9c1b720cbb5b0b7b4;
PyObject *const_str_digest_5093c17c13487e48c0f1b1aeee84cc99;
PyObject *const_int_pos_4;
PyObject *const_int_pos_6;
PyObject *const_str_digest_a9b8ce4b139e09390c9a796cc297a694;
PyObject *const_int_pos_5;
PyObject *const_int_pos_32;
PyObject *const_str_plain_block;
PyObject *const_str_digest_d1a87b58276f8f39c2d751c699ef4502;
PyObject *const_str_plain_max_header_list_size;
PyObject *const_str_plain_max_allowed_table_size;
PyObject *const_str_digest_b43da8fa8bb3fd9fbb97758107b3311b;
PyObject *const_str_plain_current_index;
PyObject *const_int_pos_64;
PyObject *const_str_plain__decode_indexed;
PyObject *const_str_plain__decode_literal_index;
PyObject *const_str_plain_headers;
PyObject *const_tuple_str_digest_053811181c29a9dbcdf605936cf9901c_tuple;
PyObject *const_str_plain__update_encoding_context;
PyObject *const_str_plain__decode_literal_no_index;
PyObject *const_str_plain_inflated_size;
PyObject *const_str_plain_table_entry_size;
PyObject *const_str_digest_3c4225932672426ba436b8a218a49b93;
PyObject *const_str_digest_fd7644b030cf821de7f55a5be76bd5ec;
PyObject *const_str_plain_OversizedHeaderListError;
PyObject *const_str_plain__assert_valid_table_size;
PyObject *const_str_plain__unicode_if_needed;
PyObject *const_str_plain_raw;
PyObject *const_tuple_str_digest_d818d7b7b44b409b63bf1eedbb1a660d_tuple;
PyObject *const_str_digest_0c862fbbabd3a97c26a62541064a6a6d;
PyObject *const_str_plain_header_table_size;
PyObject *const_str_plain_InvalidTableSizeError;
PyObject *const_tuple_str_digest_ed878ced6e5ca9fd5baff8bd26498978_tuple;
PyObject *const_str_digest_2b32591dcb478f878f5f1945fd9f51b4;
PyObject *const_str_plain_decode_integer;
PyObject *const_tuple_str_digest_5c2d99091d2262d861f3744cc9188ed2_tuple;
PyObject *const_str_digest_4d9395c23fbfc19894dd7ff72e691993;
PyObject *const_str_plain_get_by_index;
PyObject *const_str_digest_9dce69ffc18d9491b1104d68d2108cee;
PyObject *const_str_digest_591f4b84c1a24524285db8bf93e184b1;
PyObject *const_str_plain__decode_literal;
PyObject *const_dict_1547285892d7db7353148a938c62027a;
PyObject *const_dict_6a333c6640e0851c6f53523200b19d65;
PyObject *const_int_pos_63;
PyObject *const_int_pos_15;
PyObject *const_int_pos_16;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_tuple_str_digest_fd799b52e91ac37dd1ec80ffe92971d5_tuple;
PyObject *const_str_plain_decode_huffman;
PyObject *const_str_plain_data;
PyObject *const_str_plain_consumed;
PyObject *const_str_plain_length;
PyObject *const_str_plain_NeverIndexedHeaderTuple;
PyObject *const_str_plain_value;
PyObject *const_str_digest_230ea324240e9e21d19830ba6a999fb4;
PyObject *const_str_digest_2c930042287ef8df4a957036119a1ba2;
PyObject *const_str_digest_ea3c5f8b980713a69d72d54ef599f594;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_768e33f70992e393d37323fe02e0e5c9_tuple;
PyObject *const_tuple_str_plain_HuffmanEncoder_tuple;
PyObject *const_str_plain_huffman_constants;
PyObject *const_tuple_str_plain_REQUEST_CODES_str_plain_REQUEST_CODES_LENGTH_tuple;
PyObject *const_str_plain_huffman_table;
PyObject *const_tuple_str_plain_decode_huffman_tuple;
PyObject *const_str_plain_struct;
PyObject *const_tuple_758d463897c3c25b496bc453296e40ef_tuple;
PyObject *const_str_plain_HeaderWeaklyTyped;
PyObject *const_str_plain_table;
PyObject *const_tuple_str_plain_HeaderTable_str_plain_table_entry_size_tuple;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_8859f7f84524d1a02f6682f73fb6dcc3_tuple;
PyObject *const_bytes_null;
PyObject *const_str_plain_INDEX_NONE;
PyObject *const_bytes_chr_16;
PyObject *const_bytes_chr_64;
PyObject *const_xrange_0_9;
PyObject *const_int_pos_65536;
PyObject *const_str_plain_DEFAULT_MAX_HEADER_LIST_SIZE;
PyObject *const_dict_b644de0478eea5b9346cedb3862762e2;
PyObject *const_dict_3cd3fadf54ac8de3070a05a7f79bb67d;
PyObject *const_dict_bf481f969aa069401d97870e7601bf7b;
PyObject *const_dict_15f32b436d4176156e208fa73aa75940;
PyObject *const_dict_e1c9f5bba9f9f8a5355fea71894987c0;
PyObject *const_str_digest_8859f7f84524d1a02f6682f73fb6dcc3;
PyObject *const_str_digest_398ed0dae1611cbadd23fedf4de14571;
PyObject *const_str_plain_Encoder;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_149;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_6189bbf481f42d2a1c405563357dac3e;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_digest_25eb476814d7db6fce6860a897f6367d;
PyObject *const_str_plain_setter;
PyObject *const_dict_0a899e084b4d4c69f04f56fc6fc3c923;
PyObject *const_tuple_true_tuple;
PyObject *const_dict_71aa8e6c06d8bf2c5e4da6e1c3ab1ce2;
PyObject *const_str_digest_77cf3f64c07f68a1550c958f491cbb85;
PyObject *const_tuple_false_tuple;
PyObject *const_dict_8cbca17c6d81b4f86a5c655add40192e;
PyObject *const_str_digest_4ec6c780ba451bdf6fe42df4fd019490;
PyObject *const_dict_e4d7c42e9a8514893c78772683f3201a;
PyObject *const_str_digest_22a85a360c0aa4b71c938fd080a956df;
PyObject *const_dict_79678b7699966f020a65745ea7321540;
PyObject *const_str_digest_4a0cfd77ab65422c2ae82712194a998c;
PyObject *const_dict_4ef9b5326f933e4c4f431eb3aa879c5f;
PyObject *const_str_digest_b77e9fab699d568837cce9efcd146e6a;
PyObject *const_dict_2366cb3246e451cebe4ed21878030053;
PyObject *const_str_digest_7720db71e854d3e38bea887fdb62db3d;
PyObject *const_tuple_09c8ab656d50b0a4cf189a9298794d46_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_dec07185b38b0f07d093bcbf3c11cb7c;
PyObject *const_str_plain_Decoder;
PyObject *const_int_pos_398;
PyObject *const_dict_fc67b1ac505cc6543c2b737b22d2be73;
PyObject *const_str_digest_7161173fdbbfd6e0f506033b40ff2b4b;
PyObject *const_str_digest_64f8001d65f8c43fe3613be59594da2c;
PyObject *const_dict_86c3ebee81f76838eb00d53fec0a679c;
PyObject *const_str_digest_fc0cba5f33dac362384abb1dbfb60492;
PyObject *const_str_digest_84768170be60180f481fa88f51d07087;
PyObject *const_dict_ab897df50b83b561412af3f56781c106;
PyObject *const_str_digest_736ac0cc6205de605f69aa66121386f6;
PyObject *const_dict_2ac03d3b4b9f067c5b44475bda7fe0d1;
PyObject *const_str_digest_362f9a5e4cfc69a11681b782a32d2d19;
PyObject *const_str_digest_f4a0142124e8ce23f62c71525d0aca0a;
PyObject *const_str_digest_15474a4ea61236f626ebe5ef33b4fca1;
PyObject *const_dict_84c92d4920f4ef1a44cd074c28287102;
PyObject *const_str_digest_2974c28231854d9a78e786f61ac8dede;
PyObject *const_tuple_9a93ef71c1f4328e61e33bdf34e8a326_tuple;
PyObject *const_str_digest_d79a1baa3999c2ef89f8bad29f53e0ca;
PyObject *const_tuple_str_plain_k_tuple;
PyObject *const_str_digest_f7ba20466f49d27d59d3b2b7ae6a1a9e;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_max_header_list_size_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_msg_tuple;
PyObject *const_tuple_ffaee49612e83ac94a7c3fb50f61b5fa_tuple;
PyObject *const_tuple_a37f06f790b1574fe426efe4e7ed2acf_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
PyObject *const_tuple_835569f41f4e932f38975b89449e4d65_tuple;
PyObject *const_tuple_str_plain_self_str_plain_index_str_plain_field_tuple;
PyObject *const_tuple_7fa5932d11bbd409744b476c6c74f61f_tuple;
PyObject *const_tuple_4b4f232f063d510a88639503add29340_tuple;
PyObject *const_tuple_dbabb2dcab876b36801760737c3715f0_tuple;
PyObject *const_tuple_str_plain_value_str_plain_t_tuple;
PyObject *const_tuple_3999b8c95514012a7924f11310cfc515_tuple;
PyObject *const_tuple_b82a3a1921b092d828f01dc57a81f45c_tuple;
PyObject *const_tuple_87210c1a4cb37306690532e5d108003f_tuple;
PyObject *const_tuple_79b0c6d343ab88eb41316aeee606c614_tuple;
PyObject *const_tuple_92b88d2acf8fc93647632a1c3f7f5b50_tuple;
PyObject *const_tuple_7e584b0a6d569f47d7fe49cc4837a999_tuple;
PyObject *const_tuple_afad326bb1206f132dbce6c8f8276369_tuple;
PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[226];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("hpack.hpack"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3a4c5beeb969ca27bf3f3f39b5115e8);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e22b1fa6fa155d2f3a1351be7d2e17a);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_d7822ae0c2d38fec9a62af31c42c2ca7);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_7ce481d7321ae057cb87e86191bf46e7);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__PREFIX_BIT_MAX_NUMBERS);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_integer);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_int_pos_128);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_elements);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_int_pos_127);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_int_pos_7);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_33d9b4637e3850f8b83c68cc895a895c);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_int_pos_255);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_index);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_number);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_shift);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_9cfa77c0116902d14173a3c9c32bff4b);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_HPACKDecodingError);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e7ce147a0728e9cce16661feea38dcf);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_d6f4b216690ff262d3a76e5fbddcc6be);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6d4211b536d4465b3fd167f7c7c1e16);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_header_dict);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_549e12ccf1a88a6f212c1fdb9569b1d2);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_sorted);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_0668512dc9ee5ad667f56a15494321f7);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__dict_to_iterable);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__to_bytes);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_chr_58_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b8d33443997c17abea71f9c5f05e605);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_HeaderTable);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_header_table);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_HuffmanEncoder);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_CODES);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_CODES_LENGTH);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_huffman_coder);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_table_size_changes);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_maxsize);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_8514096279fdceba1dfa5f9c0227b251);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_resized);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__encode_table_size_change);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_HeaderTuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_indexable);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_header_block);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_huffman);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3716ab1c61cb57fd1983829d7da9719);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_69dcb966aecc33e4c7eebc78ec5eba8c);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_557a79e53c64ee1daf8a42c7db2bc36d);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_INDEX_INCREMENTAL);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_INDEX_NEVER);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_search);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__encode_literal);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__encode_indexed);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__encode_indexed_literal);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_7759e8af4a64ad23081ce8861e0a20e9);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode_integer);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9fb55024b65a4f9c1b720cbb5b0b7b4);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_5093c17c13487e48c0f1b1aeee84cc99);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_int_pos_6);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9b8ce4b139e09390c9a796cc297a694);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_block);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1a87b58276f8f39c2d751c699ef4502);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_header_list_size);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_allowed_table_size);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_b43da8fa8bb3fd9fbb97758107b3311b);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_index);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_int_pos_64);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain__decode_indexed);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain__decode_literal_index);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_053811181c29a9dbcdf605936cf9901c_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain__update_encoding_context);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain__decode_literal_no_index);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_inflated_size);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_table_entry_size);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c4225932672426ba436b8a218a49b93);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd7644b030cf821de7f55a5be76bd5ec);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_OversizedHeaderListError);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain__assert_valid_table_size);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain__unicode_if_needed);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d818d7b7b44b409b63bf1eedbb1a660d_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c862fbbabd3a97c26a62541064a6a6d);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_header_table_size);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidTableSizeError);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ed878ced6e5ca9fd5baff8bd26498978_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b32591dcb478f878f5f1945fd9f51b4);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode_integer);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5c2d99091d2262d861f3744cc9188ed2_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d9395c23fbfc19894dd7ff72e691993);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_by_index);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_9dce69ffc18d9491b1104d68d2108cee);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_591f4b84c1a24524285db8bf93e184b1);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain__decode_literal);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_dict_1547285892d7db7353148a938c62027a);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_dict_6a333c6640e0851c6f53523200b19d65);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_int_pos_63);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_int_pos_15);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_fd799b52e91ac37dd1ec80ffe92971d5_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode_huffman);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_consumed);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_length);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_NeverIndexedHeaderTuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_230ea324240e9e21d19830ba6a999fb4);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c930042287ef8df4a957036119a1ba2);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea3c5f8b980713a69d72d54ef599f594);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_768e33f70992e393d37323fe02e0e5c9_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HuffmanEncoder_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_huffman_constants);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_REQUEST_CODES_str_plain_REQUEST_CODES_LENGTH_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_huffman_table);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_decode_huffman_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_struct);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_758d463897c3c25b496bc453296e40ef_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_HeaderWeaklyTyped);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_table);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HeaderTable_str_plain_table_entry_size_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8859f7f84524d1a02f6682f73fb6dcc3_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_bytes_null);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_INDEX_NONE);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_bytes_chr_16);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_bytes_chr_64);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_xrange_0_9);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_int_pos_65536);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_HEADER_LIST_SIZE);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_dict_b644de0478eea5b9346cedb3862762e2);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_dict_3cd3fadf54ac8de3070a05a7f79bb67d);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_dict_bf481f969aa069401d97870e7601bf7b);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_dict_15f32b436d4176156e208fa73aa75940);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_dict_e1c9f5bba9f9f8a5355fea71894987c0);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_8859f7f84524d1a02f6682f73fb6dcc3);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_398ed0dae1611cbadd23fedf4de14571);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_Encoder);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_int_pos_149);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_6189bbf481f42d2a1c405563357dac3e);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_25eb476814d7db6fce6860a897f6367d);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_setter);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_dict_0a899e084b4d4c69f04f56fc6fc3c923);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_dict_71aa8e6c06d8bf2c5e4da6e1c3ab1ce2);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_77cf3f64c07f68a1550c958f491cbb85);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_dict_8cbca17c6d81b4f86a5c655add40192e);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ec6c780ba451bdf6fe42df4fd019490);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_dict_e4d7c42e9a8514893c78772683f3201a);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_22a85a360c0aa4b71c938fd080a956df);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_dict_79678b7699966f020a65745ea7321540);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a0cfd77ab65422c2ae82712194a998c);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_dict_4ef9b5326f933e4c4f431eb3aa879c5f);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_b77e9fab699d568837cce9efcd146e6a);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_7720db71e854d3e38bea887fdb62db3d);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_09c8ab656d50b0a4cf189a9298794d46_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_dec07185b38b0f07d093bcbf3c11cb7c);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_Decoder);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_int_pos_398);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_dict_fc67b1ac505cc6543c2b737b22d2be73);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_7161173fdbbfd6e0f506033b40ff2b4b);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_64f8001d65f8c43fe3613be59594da2c);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_dict_86c3ebee81f76838eb00d53fec0a679c);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc0cba5f33dac362384abb1dbfb60492);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_84768170be60180f481fa88f51d07087);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_dict_ab897df50b83b561412af3f56781c106);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_736ac0cc6205de605f69aa66121386f6);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_dict_2ac03d3b4b9f067c5b44475bda7fe0d1);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_362f9a5e4cfc69a11681b782a32d2d19);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_digest_f4a0142124e8ce23f62c71525d0aca0a);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_15474a4ea61236f626ebe5ef33b4fca1);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_dict_84c92d4920f4ef1a44cd074c28287102);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_digest_2974c28231854d9a78e786f61ac8dede);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_9a93ef71c1f4328e61e33bdf34e8a326_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_digest_d79a1baa3999c2ef89f8bad29f53e0ca);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_k_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7ba20466f49d27d59d3b2b7ae6a1a9e);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_max_header_list_size_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_ffaee49612e83ac94a7c3fb50f61b5fa_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_a37f06f790b1574fe426efe4e7ed2acf_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_835569f41f4e932f38975b89449e4d65_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_index_str_plain_field_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_7fa5932d11bbd409744b476c6c74f61f_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_4b4f232f063d510a88639503add29340_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_dbabb2dcab876b36801760737c3715f0_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_str_plain_t_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_3999b8c95514012a7924f11310cfc515_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_b82a3a1921b092d828f01dc57a81f45c_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_87210c1a4cb37306690532e5d108003f_tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_79b0c6d343ab88eb41316aeee606c614_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_92b88d2acf8fc93647632a1c3f7f5b50_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_7e584b0a6d569f47d7fe49cc4837a999_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_afad326bb1206f132dbce6c8f8276369_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
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
void checkModuleConstants_hpack$hpack(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3a4c5beeb969ca27bf3f3f39b5115e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3a4c5beeb969ca27bf3f3f39b5115e8);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_debug);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e22b1fa6fa155d2f3a1351be7d2e17a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7e22b1fa6fa155d2f3a1351be7d2e17a);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_d7822ae0c2d38fec9a62af31c42c2ca7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d7822ae0c2d38fec9a62af31c42c2ca7);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_int_pos_8));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_8);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_7ce481d7321ae057cb87e86191bf46e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7ce481d7321ae057cb87e86191bf46e7);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__PREFIX_BIT_MAX_NUMBERS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__PREFIX_BIT_MAX_NUMBERS);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_integer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_integer);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_int_pos_128));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_128);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_elements));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_elements);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_int_pos_127));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_127);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_int_pos_7));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_7);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_33d9b4637e3850f8b83c68cc895a895c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_33d9b4637e3850f8b83c68cc895a895c);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_int_pos_255));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_255);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_index);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_number));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_number);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_shift));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shift);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_9cfa77c0116902d14173a3c9c32bff4b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9cfa77c0116902d14173a3c9c32bff4b);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_HPACKDecodingError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HPACKDecodingError);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e7ce147a0728e9cce16661feea38dcf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e7ce147a0728e9cce16661feea38dcf);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_d6f4b216690ff262d3a76e5fbddcc6be));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d6f4b216690ff262d3a76e5fbddcc6be);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6d4211b536d4465b3fd167f7c7c1e16));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6d4211b536d4465b3fd167f7c7c1e16);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_header_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_header_dict);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_549e12ccf1a88a6f212c1fdb9569b1d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_549e12ccf1a88a6f212c1fdb9569b1d2);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_sorted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sorted);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_0668512dc9ee5ad667f56a15494321f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0668512dc9ee5ad667f56a15494321f7);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__dict_to_iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dict_to_iterable);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__to_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__to_bytes);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_chr_58_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_chr_58_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b8d33443997c17abea71f9c5f05e605));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b8d33443997c17abea71f9c5f05e605);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_HeaderTable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HeaderTable);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_header_table));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_header_table);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_HuffmanEncoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HuffmanEncoder);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_CODES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REQUEST_CODES);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_REQUEST_CODES_LENGTH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REQUEST_CODES_LENGTH);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_huffman_coder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_huffman_coder);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_table_size_changes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_table_size_changes);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_maxsize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maxsize);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_8514096279fdceba1dfa5f9c0227b251));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8514096279fdceba1dfa5f9c0227b251);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_resized));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resized);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__encode_table_size_change));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__encode_table_size_change);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_HeaderTuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HeaderTuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_indexable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_indexable);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_header_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_header_block);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_huffman));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_huffman);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3716ab1c61cb57fd1983829d7da9719));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d3716ab1c61cb57fd1983829d7da9719);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_69dcb966aecc33e4c7eebc78ec5eba8c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_69dcb966aecc33e4c7eebc78ec5eba8c);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_557a79e53c64ee1daf8a42c7db2bc36d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_557a79e53c64ee1daf8a42c7db2bc36d);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_INDEX_INCREMENTAL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INDEX_INCREMENTAL);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_INDEX_NEVER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INDEX_NEVER);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_search);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__encode_literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__encode_literal);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__encode_indexed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__encode_indexed);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__encode_indexed_literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__encode_indexed_literal);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_7759e8af4a64ad23081ce8861e0a20e9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7759e8af4a64ad23081ce8861e0a20e9);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode_integer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode_integer);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9fb55024b65a4f9c1b720cbb5b0b7b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9fb55024b65a4f9c1b720cbb5b0b7b4);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_5093c17c13487e48c0f1b1aeee84cc99));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5093c17c13487e48c0f1b1aeee84cc99);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_int_pos_6));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_6);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9b8ce4b139e09390c9a796cc297a694));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9b8ce4b139e09390c9a796cc297a694);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_int_pos_5));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_5);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_int_pos_32));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_32);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_block);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1a87b58276f8f39c2d751c699ef4502));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1a87b58276f8f39c2d751c699ef4502);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_header_list_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_header_list_size);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_allowed_table_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_allowed_table_size);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_b43da8fa8bb3fd9fbb97758107b3311b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b43da8fa8bb3fd9fbb97758107b3311b);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_index);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_int_pos_64));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_64);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain__decode_indexed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__decode_indexed);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain__decode_literal_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__decode_literal_index);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_053811181c29a9dbcdf605936cf9901c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_053811181c29a9dbcdf605936cf9901c_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain__update_encoding_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__update_encoding_context);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain__decode_literal_no_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__decode_literal_no_index);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_inflated_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inflated_size);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_table_entry_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_table_entry_size);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c4225932672426ba436b8a218a49b93));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c4225932672426ba436b8a218a49b93);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd7644b030cf821de7f55a5be76bd5ec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd7644b030cf821de7f55a5be76bd5ec);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_OversizedHeaderListError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OversizedHeaderListError);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain__assert_valid_table_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__assert_valid_table_size);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain__unicode_if_needed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unicode_if_needed);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d818d7b7b44b409b63bf1eedbb1a660d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d818d7b7b44b409b63bf1eedbb1a660d_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c862fbbabd3a97c26a62541064a6a6d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c862fbbabd3a97c26a62541064a6a6d);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_header_table_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_header_table_size);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidTableSizeError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidTableSizeError);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ed878ced6e5ca9fd5baff8bd26498978_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ed878ced6e5ca9fd5baff8bd26498978_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b32591dcb478f878f5f1945fd9f51b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b32591dcb478f878f5f1945fd9f51b4);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode_integer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode_integer);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5c2d99091d2262d861f3744cc9188ed2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_5c2d99091d2262d861f3744cc9188ed2_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d9395c23fbfc19894dd7ff72e691993));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4d9395c23fbfc19894dd7ff72e691993);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_by_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_by_index);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_9dce69ffc18d9491b1104d68d2108cee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9dce69ffc18d9491b1104d68d2108cee);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_591f4b84c1a24524285db8bf93e184b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_591f4b84c1a24524285db8bf93e184b1);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain__decode_literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__decode_literal);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_dict_1547285892d7db7353148a938c62027a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1547285892d7db7353148a938c62027a);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_dict_6a333c6640e0851c6f53523200b19d65));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6a333c6640e0851c6f53523200b19d65);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_int_pos_63));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_63);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_int_pos_15));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_15);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_int_pos_16));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_16);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_fd799b52e91ac37dd1ec80ffe92971d5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_fd799b52e91ac37dd1ec80ffe92971d5_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode_huffman));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode_huffman);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_consumed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_consumed);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_length);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_NeverIndexedHeaderTuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NeverIndexedHeaderTuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_230ea324240e9e21d19830ba6a999fb4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_230ea324240e9e21d19830ba6a999fb4);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c930042287ef8df4a957036119a1ba2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2c930042287ef8df4a957036119a1ba2);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea3c5f8b980713a69d72d54ef599f594));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea3c5f8b980713a69d72d54ef599f594);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_768e33f70992e393d37323fe02e0e5c9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_768e33f70992e393d37323fe02e0e5c9_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HuffmanEncoder_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_HuffmanEncoder_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_huffman_constants));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_huffman_constants);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_REQUEST_CODES_str_plain_REQUEST_CODES_LENGTH_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_REQUEST_CODES_str_plain_REQUEST_CODES_LENGTH_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_huffman_table));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_huffman_table);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_decode_huffman_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_decode_huffman_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_struct));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_struct);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_758d463897c3c25b496bc453296e40ef_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_758d463897c3c25b496bc453296e40ef_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_HeaderWeaklyTyped));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HeaderWeaklyTyped);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_table));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_table);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HeaderTable_str_plain_table_entry_size_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_HeaderTable_str_plain_table_entry_size_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8859f7f84524d1a02f6682f73fb6dcc3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8859f7f84524d1a02f6682f73fb6dcc3_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_bytes_null));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_null);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_INDEX_NONE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INDEX_NONE);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_bytes_chr_16));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_chr_16);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_bytes_chr_64));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_chr_64);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_xrange_0_9));
CHECK_OBJECT_DEEP(mod_consts.const_xrange_0_9);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_int_pos_65536));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_65536);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_HEADER_LIST_SIZE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_MAX_HEADER_LIST_SIZE);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_dict_b644de0478eea5b9346cedb3862762e2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b644de0478eea5b9346cedb3862762e2);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_dict_3cd3fadf54ac8de3070a05a7f79bb67d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3cd3fadf54ac8de3070a05a7f79bb67d);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_dict_bf481f969aa069401d97870e7601bf7b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bf481f969aa069401d97870e7601bf7b);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_dict_15f32b436d4176156e208fa73aa75940));
CHECK_OBJECT_DEEP(mod_consts.const_dict_15f32b436d4176156e208fa73aa75940);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_dict_e1c9f5bba9f9f8a5355fea71894987c0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e1c9f5bba9f9f8a5355fea71894987c0);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_8859f7f84524d1a02f6682f73fb6dcc3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8859f7f84524d1a02f6682f73fb6dcc3);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_398ed0dae1611cbadd23fedf4de14571));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_398ed0dae1611cbadd23fedf4de14571);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_Encoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Encoder);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_int_pos_149));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_149);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_6189bbf481f42d2a1c405563357dac3e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6189bbf481f42d2a1c405563357dac3e);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261));
CHECK_OBJECT_DEEP(mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_25eb476814d7db6fce6860a897f6367d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_25eb476814d7db6fce6860a897f6367d);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_setter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setter);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_dict_0a899e084b4d4c69f04f56fc6fc3c923));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0a899e084b4d4c69f04f56fc6fc3c923);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_dict_71aa8e6c06d8bf2c5e4da6e1c3ab1ce2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_71aa8e6c06d8bf2c5e4da6e1c3ab1ce2);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_77cf3f64c07f68a1550c958f491cbb85));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_77cf3f64c07f68a1550c958f491cbb85);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_dict_8cbca17c6d81b4f86a5c655add40192e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8cbca17c6d81b4f86a5c655add40192e);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ec6c780ba451bdf6fe42df4fd019490));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ec6c780ba451bdf6fe42df4fd019490);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_dict_e4d7c42e9a8514893c78772683f3201a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e4d7c42e9a8514893c78772683f3201a);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_22a85a360c0aa4b71c938fd080a956df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22a85a360c0aa4b71c938fd080a956df);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_dict_79678b7699966f020a65745ea7321540));
CHECK_OBJECT_DEEP(mod_consts.const_dict_79678b7699966f020a65745ea7321540);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a0cfd77ab65422c2ae82712194a998c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a0cfd77ab65422c2ae82712194a998c);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_dict_4ef9b5326f933e4c4f431eb3aa879c5f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4ef9b5326f933e4c4f431eb3aa879c5f);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_b77e9fab699d568837cce9efcd146e6a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b77e9fab699d568837cce9efcd146e6a);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_7720db71e854d3e38bea887fdb62db3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7720db71e854d3e38bea887fdb62db3d);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_09c8ab656d50b0a4cf189a9298794d46_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_09c8ab656d50b0a4cf189a9298794d46_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_dec07185b38b0f07d093bcbf3c11cb7c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dec07185b38b0f07d093bcbf3c11cb7c);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_Decoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Decoder);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_int_pos_398));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_398);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_dict_fc67b1ac505cc6543c2b737b22d2be73));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fc67b1ac505cc6543c2b737b22d2be73);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_7161173fdbbfd6e0f506033b40ff2b4b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7161173fdbbfd6e0f506033b40ff2b4b);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_64f8001d65f8c43fe3613be59594da2c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_64f8001d65f8c43fe3613be59594da2c);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_dict_86c3ebee81f76838eb00d53fec0a679c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_86c3ebee81f76838eb00d53fec0a679c);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc0cba5f33dac362384abb1dbfb60492));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fc0cba5f33dac362384abb1dbfb60492);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_84768170be60180f481fa88f51d07087));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_84768170be60180f481fa88f51d07087);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_dict_ab897df50b83b561412af3f56781c106));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ab897df50b83b561412af3f56781c106);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_736ac0cc6205de605f69aa66121386f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_736ac0cc6205de605f69aa66121386f6);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_dict_2ac03d3b4b9f067c5b44475bda7fe0d1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2ac03d3b4b9f067c5b44475bda7fe0d1);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_362f9a5e4cfc69a11681b782a32d2d19));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_362f9a5e4cfc69a11681b782a32d2d19);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_digest_f4a0142124e8ce23f62c71525d0aca0a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f4a0142124e8ce23f62c71525d0aca0a);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_15474a4ea61236f626ebe5ef33b4fca1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_15474a4ea61236f626ebe5ef33b4fca1);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_dict_84c92d4920f4ef1a44cd074c28287102));
CHECK_OBJECT_DEEP(mod_consts.const_dict_84c92d4920f4ef1a44cd074c28287102);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_digest_2974c28231854d9a78e786f61ac8dede));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2974c28231854d9a78e786f61ac8dede);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_9a93ef71c1f4328e61e33bdf34e8a326_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9a93ef71c1f4328e61e33bdf34e8a326_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_digest_d79a1baa3999c2ef89f8bad29f53e0ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d79a1baa3999c2ef89f8bad29f53e0ca);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_k_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_k_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7ba20466f49d27d59d3b2b7ae6a1a9e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f7ba20466f49d27d59d3b2b7ae6a1a9e);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_max_header_list_size_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_max_header_list_size_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_ffaee49612e83ac94a7c3fb50f61b5fa_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ffaee49612e83ac94a7c3fb50f61b5fa_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_a37f06f790b1574fe426efe4e7ed2acf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a37f06f790b1574fe426efe4e7ed2acf_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_835569f41f4e932f38975b89449e4d65_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_835569f41f4e932f38975b89449e4d65_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_index_str_plain_field_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_index_str_plain_field_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_7fa5932d11bbd409744b476c6c74f61f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7fa5932d11bbd409744b476c6c74f61f_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_4b4f232f063d510a88639503add29340_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4b4f232f063d510a88639503add29340_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_dbabb2dcab876b36801760737c3715f0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dbabb2dcab876b36801760737c3715f0_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_str_plain_t_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_value_str_plain_t_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_3999b8c95514012a7924f11310cfc515_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3999b8c95514012a7924f11310cfc515_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_b82a3a1921b092d828f01dc57a81f45c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b82a3a1921b092d828f01dc57a81f45c_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_87210c1a4cb37306690532e5d108003f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_87210c1a4cb37306690532e5d108003f_tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_79b0c6d343ab88eb41316aeee606c614_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_79b0c6d343ab88eb41316aeee606c614_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_92b88d2acf8fc93647632a1c3f7f5b50_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_92b88d2acf8fc93647632a1c3f7f5b50_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_7e584b0a6d569f47d7fe49cc4837a999_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7e584b0a6d569f47d7fe49cc4837a999_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_afad326bb1206f132dbce6c8f8276369_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_afad326bb1206f132dbce6c8f8276369_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
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
static PyObject *module_var_accessor_hpack$hpack$DEFAULT_MAX_HEADER_LIST_SIZE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_HEADER_LIST_SIZE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_MAX_HEADER_LIST_SIZE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_MAX_HEADER_LIST_SIZE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_MAX_HEADER_LIST_SIZE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_MAX_HEADER_LIST_SIZE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_HEADER_LIST_SIZE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_HEADER_LIST_SIZE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_HEADER_LIST_SIZE);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$HPACKDecodingError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HPACKDecodingError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HPACKDecodingError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HPACKDecodingError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HPACKDecodingError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HPACKDecodingError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HPACKDecodingError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HPACKDecodingError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HPACKDecodingError);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$HeaderTable(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderTable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HeaderTable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HeaderTable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HeaderTable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HeaderTable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderTable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderTable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderTable);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$HeaderTuple(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderTuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HeaderTuple);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HeaderTuple, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HeaderTuple);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HeaderTuple, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderTuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderTuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderTuple);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$HuffmanEncoder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HuffmanEncoder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HuffmanEncoder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HuffmanEncoder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HuffmanEncoder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HuffmanEncoder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HuffmanEncoder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HuffmanEncoder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HuffmanEncoder);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$INDEX_INCREMENTAL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_INDEX_INCREMENTAL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INDEX_INCREMENTAL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INDEX_INCREMENTAL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INDEX_INCREMENTAL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INDEX_INCREMENTAL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_INDEX_INCREMENTAL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_INDEX_INCREMENTAL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_INDEX_INCREMENTAL);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$INDEX_NEVER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_INDEX_NEVER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INDEX_NEVER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INDEX_NEVER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INDEX_NEVER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INDEX_NEVER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_INDEX_NEVER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_INDEX_NEVER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_INDEX_NEVER);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$InvalidTableSizeError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidTableSizeError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidTableSizeError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidTableSizeError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidTableSizeError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidTableSizeError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidTableSizeError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidTableSizeError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidTableSizeError);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$NeverIndexedHeaderTuple(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_NeverIndexedHeaderTuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NeverIndexedHeaderTuple);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NeverIndexedHeaderTuple, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NeverIndexedHeaderTuple);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NeverIndexedHeaderTuple, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_NeverIndexedHeaderTuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_NeverIndexedHeaderTuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NeverIndexedHeaderTuple);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$OversizedHeaderListError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_OversizedHeaderListError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OversizedHeaderListError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OversizedHeaderListError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OversizedHeaderListError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OversizedHeaderListError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_OversizedHeaderListError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_OversizedHeaderListError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OversizedHeaderListError);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$REQUEST_CODES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_CODES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REQUEST_CODES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REQUEST_CODES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REQUEST_CODES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REQUEST_CODES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_CODES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_CODES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_CODES);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$REQUEST_CODES_LENGTH(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_CODES_LENGTH);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REQUEST_CODES_LENGTH);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REQUEST_CODES_LENGTH, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REQUEST_CODES_LENGTH);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REQUEST_CODES_LENGTH, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_CODES_LENGTH);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_CODES_LENGTH);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_CODES_LENGTH);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$_PREFIX_BIT_MAX_NUMBERS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain__PREFIX_BIT_MAX_NUMBERS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PREFIX_BIT_MAX_NUMBERS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PREFIX_BIT_MAX_NUMBERS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PREFIX_BIT_MAX_NUMBERS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PREFIX_BIT_MAX_NUMBERS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain__PREFIX_BIT_MAX_NUMBERS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain__PREFIX_BIT_MAX_NUMBERS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__PREFIX_BIT_MAX_NUMBERS);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$_dict_to_iterable(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain__dict_to_iterable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dict_to_iterable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dict_to_iterable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dict_to_iterable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dict_to_iterable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain__dict_to_iterable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain__dict_to_iterable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__dict_to_iterable);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$_to_bytes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain__to_bytes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__to_bytes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__to_bytes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__to_bytes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__to_bytes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain__to_bytes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain__to_bytes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__to_bytes);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$_unicode_if_needed(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain__unicode_if_needed);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unicode_if_needed);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unicode_if_needed, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unicode_if_needed);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unicode_if_needed, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain__unicode_if_needed);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain__unicode_if_needed);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__unicode_if_needed);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$decode_huffman(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_decode_huffman);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_decode_huffman);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_decode_huffman, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_decode_huffman);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_decode_huffman, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_decode_huffman);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_decode_huffman);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_decode_huffman);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$decode_integer(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_decode_integer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_decode_integer);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_decode_integer, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_decode_integer);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_decode_integer, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_decode_integer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_decode_integer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_decode_integer);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$encode_integer(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_integer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_integer);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_integer, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_integer);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_integer, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_integer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_integer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_integer);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$log(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_hpack$hpack$table_entry_size(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_hpack$hpack->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_hpack$hpack->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_table_entry_size);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_hpack$hpack->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_table_entry_size);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_table_entry_size, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_table_entry_size);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_table_entry_size, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_table_entry_size);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_table_entry_size);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_table_entry_size);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_1bd461859a2c47edac1fe85bd5003f85;
static PyCodeObject *code_objects_dfa41b09b4f4a3c38807c605913144e0;
static PyCodeObject *code_objects_031e7419582e26f0722cfbfd2645721d;
static PyCodeObject *code_objects_50178a7dec60d06ac9675c617c6f440b;
static PyCodeObject *code_objects_d8725ba82275be4d5c945535937822a9;
static PyCodeObject *code_objects_940e533858f1ab7bfa583e9e0d8175e9;
static PyCodeObject *code_objects_97171a9f68f9db0079eb660ee364bf67;
static PyCodeObject *code_objects_7442bf495182186c45b88bae4d3c21e0;
static PyCodeObject *code_objects_7d8a31576dd40c6a762071651295a1fd;
static PyCodeObject *code_objects_712aa36d626406dab77582551a423fe8;
static PyCodeObject *code_objects_31fd0cdb03884056ba88d78076b7ee9e;
static PyCodeObject *code_objects_a5e0a93a14f5225c87080c051f4c24fc;
static PyCodeObject *code_objects_265651311c308b92a430a193e9b25d68;
static PyCodeObject *code_objects_b5f67f7f07507d6ffffe181598970976;
static PyCodeObject *code_objects_f3acd727f7d4db0a5f6e8e66cded7460;
static PyCodeObject *code_objects_8402f313c69c2559c011b93cee09fc98;
static PyCodeObject *code_objects_f474e9ffecba460b548c93155d908c51;
static PyCodeObject *code_objects_28b0113041fb517e1556070b6e72072d;
static PyCodeObject *code_objects_abbe2999c775fd9dcda72a16492aec3d;
static PyCodeObject *code_objects_654ab6c65c9af1e28b7aa41666c4fe48;
static PyCodeObject *code_objects_dd7cab87d92028bd0fc9b22aa78a4cf1;
static PyCodeObject *code_objects_b00c61c2b4a5770ca40f37bab6ff2feb;
static PyCodeObject *code_objects_5c4b07147d2a43d785fa6ab52b3ea70b;
static PyCodeObject *code_objects_d32efed2cd31d06cc04c20e41f6b4aa8;
static PyCodeObject *code_objects_1b4994c63c1e62641192daa8116a30ce;
static PyCodeObject *code_objects_0005af3fdb3f7c204a0cfa0d819541ea;
static PyCodeObject *code_objects_6e156678a500cfa13e4a505b3854f325;
static PyCodeObject *code_objects_3e01d59ebcf40ec30ab96ad6455bc0fd;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_d79a1baa3999c2ef89f8bad29f53e0ca); CHECK_OBJECT(module_filename_obj);
code_objects_1bd461859a2c47edac1fe85bd5003f85 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_0668512dc9ee5ad667f56a15494321f7, mod_consts.const_tuple_str_plain_k_tuple, NULL, 1, 0, 0);
code_objects_dfa41b09b4f4a3c38807c605913144e0 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_f7ba20466f49d27d59d3b2b7ae6a1a9e, mod_consts.const_str_digest_f7ba20466f49d27d59d3b2b7ae6a1a9e, NULL, NULL, 0, 0, 0);
code_objects_031e7419582e26f0722cfbfd2645721d = MAKE_CODE_OBJECT(module_filename_obj, 398, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Decoder, mod_consts.const_str_plain_Decoder, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_50178a7dec60d06ac9675c617c6f440b = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Encoder, mod_consts.const_str_plain_Encoder, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d8725ba82275be4d5c945535937822a9 = MAKE_CODE_OBJECT(module_filename_obj, 420, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_7161173fdbbfd6e0f506033b40ff2b4b, mod_consts.const_tuple_str_plain_self_str_plain_max_header_list_size_tuple, NULL, 2, 0, 0);
code_objects_940e533858f1ab7bfa583e9e0d8175e9 = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_6189bbf481f42d2a1c405563357dac3e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_97171a9f68f9db0079eb660ee364bf67 = MAKE_CODE_OBJECT(module_filename_obj, 542, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__assert_valid_table_size, mod_consts.const_str_digest_84768170be60180f481fa88f51d07087, mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple, NULL, 1, 0, 0);
code_objects_7442bf495182186c45b88bae4d3c21e0 = MAKE_CODE_OBJECT(module_filename_obj, 563, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__decode_indexed, mod_consts.const_str_digest_362f9a5e4cfc69a11681b782a32d2d19, mod_consts.const_tuple_ffaee49612e83ac94a7c3fb50f61b5fa_tuple, NULL, 2, 0, 0);
code_objects_7d8a31576dd40c6a762071651295a1fd = MAKE_CODE_OBJECT(module_filename_obj, 578, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__decode_literal, mod_consts.const_str_digest_2974c28231854d9a78e786f61ac8dede, mod_consts.const_tuple_a37f06f790b1574fe426efe4e7ed2acf_tuple, NULL, 3, 0, 0);
code_objects_712aa36d626406dab77582551a423fe8 = MAKE_CODE_OBJECT(module_filename_obj, 575, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__decode_literal_index, mod_consts.const_str_digest_15474a4ea61236f626ebe5ef33b4fca1, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple, NULL, 2, 0, 0);
code_objects_31fd0cdb03884056ba88d78076b7ee9e = MAKE_CODE_OBJECT(module_filename_obj, 572, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__decode_literal_no_index, mod_consts.const_str_digest_f4a0142124e8ce23f62c71525d0aca0a, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple, NULL, 2, 0, 0);
code_objects_a5e0a93a14f5225c87080c051f4c24fc = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__dict_to_iterable, mod_consts.const_str_plain__dict_to_iterable, mod_consts.const_tuple_835569f41f4e932f38975b89449e4d65_tuple, NULL, 1, 0, 0);
code_objects_265651311c308b92a430a193e9b25d68 = MAKE_CODE_OBJECT(module_filename_obj, 333, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__encode_indexed, mod_consts.const_str_digest_22a85a360c0aa4b71c938fd080a956df, mod_consts.const_tuple_str_plain_self_str_plain_index_str_plain_field_tuple, NULL, 2, 0, 0);
code_objects_b5f67f7f07507d6ffffe181598970976 = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__encode_indexed_literal, mod_consts.const_str_digest_b77e9fab699d568837cce9efcd146e6a, mod_consts.const_tuple_7fa5932d11bbd409744b476c6c74f61f_tuple, NULL, 5, 0, 0);
code_objects_f3acd727f7d4db0a5f6e8e66cded7460 = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__encode_literal, mod_consts.const_str_digest_4a0cfd77ab65422c2ae82712194a998c, mod_consts.const_tuple_4b4f232f063d510a88639503add29340_tuple, NULL, 5, 0, 0);
code_objects_8402f313c69c2559c011b93cee09fc98 = MAKE_CODE_OBJECT(module_filename_obj, 384, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__encode_table_size_change, mod_consts.const_str_digest_7720db71e854d3e38bea887fdb62db3d, mod_consts.const_tuple_dbabb2dcab876b36801760737c3715f0_tuple, NULL, 1, 0, 0);
code_objects_f474e9ffecba460b548c93155d908c51 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__to_bytes, mod_consts.const_str_plain__to_bytes, mod_consts.const_tuple_str_plain_value_str_plain_t_tuple, NULL, 1, 0, 0);
code_objects_28b0113041fb517e1556070b6e72072d = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__unicode_if_needed, mod_consts.const_str_plain__unicode_if_needed, mod_consts.const_tuple_3999b8c95514012a7924f11310cfc515_tuple, NULL, 2, 0, 0);
code_objects_abbe2999c775fd9dcda72a16492aec3d = MAKE_CODE_OBJECT(module_filename_obj, 551, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__update_encoding_context, mod_consts.const_str_digest_736ac0cc6205de605f69aa66121386f6, mod_consts.const_tuple_b82a3a1921b092d828f01dc57a81f45c_tuple, NULL, 2, 0, 0);
code_objects_654ab6c65c9af1e28b7aa41666c4fe48 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_add, mod_consts.const_str_digest_4ec6c780ba451bdf6fe42df4fd019490, mod_consts.const_tuple_87210c1a4cb37306690532e5d108003f_tuple, NULL, 4, 0, 0);
code_objects_dd7cab87d92028bd0fc9b22aa78a4cf1 = MAKE_CODE_OBJECT(module_filename_obj, 459, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_decode, mod_consts.const_str_digest_fc0cba5f33dac362384abb1dbfb60492, mod_consts.const_tuple_79b0c6d343ab88eb41316aeee606c614_tuple, NULL, 3, 0, 0);
code_objects_b00c61c2b4a5770ca40f37bab6ff2feb = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_decode_integer, mod_consts.const_str_plain_decode_integer, mod_consts.const_tuple_92b88d2acf8fc93647632a1c3f7f5b50_tuple, NULL, 2, 0, 0);
code_objects_5c4b07147d2a43d785fa6ab52b3ea70b = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encode, mod_consts.const_str_digest_77cf3f64c07f68a1550c958f491cbb85, mod_consts.const_tuple_7e584b0a6d569f47d7fe49cc4837a999_tuple, NULL, 3, 0, 0);
code_objects_d32efed2cd31d06cc04c20e41f6b4aa8 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encode_integer, mod_consts.const_str_plain_encode_integer, mod_consts.const_tuple_afad326bb1206f132dbce6c8f8276369_tuple, NULL, 2, 0, 0);
code_objects_1b4994c63c1e62641192daa8116a30ce = MAKE_CODE_OBJECT(module_filename_obj, 449, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_header_table_size, mod_consts.const_str_digest_64f8001d65f8c43fe3613be59594da2c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0005af3fdb3f7c204a0cfa0d819541ea = MAKE_CODE_OBJECT(module_filename_obj, 456, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_header_table_size, mod_consts.const_str_digest_64f8001d65f8c43fe3613be59594da2c, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_6e156678a500cfa13e4a505b3854f325 = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_header_table_size, mod_consts.const_str_digest_25eb476814d7db6fce6860a897f6367d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3e01d59ebcf40ec30ab96ad6455bc0fd = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_header_table_size, mod_consts.const_str_digest_25eb476814d7db6fce6860a897f6367d, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__10_add(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__11__encode_indexed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__12__encode_literal(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__13__encode_indexed_literal(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__14__encode_table_size_change(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__15___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__16_header_table_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__17_header_table_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__18_decode(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__19__assert_valid_table_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__1__unicode_if_needed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__20__update_encoding_context(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__21__decode_indexed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__22__decode_literal_no_index(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__23__decode_literal_index(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__24__decode_literal(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__2_encode_integer(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__3_decode_integer(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__4__dict_to_iterable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__5__to_bytes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__6___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__7_header_table_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__8_header_table_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__9_encode(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_hpack$hpack$$$function__1__unicode_if_needed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_header = python_pars[0];
PyObject *par_raw = python_pars[1];
PyObject *var_name = NULL;
PyObject *var_value = NULL;
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__1__unicode_if_needed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__1__unicode_if_needed = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__1__unicode_if_needed)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__1__unicode_if_needed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__1__unicode_if_needed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__1__unicode_if_needed = MAKE_FUNCTION_FRAME(tstate, code_objects_28b0113041fb517e1556070b6e72072d, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__1__unicode_if_needed->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__1__unicode_if_needed = cache_frame_frame_hpack$hpack$$$function__1__unicode_if_needed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__1__unicode_if_needed);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__1__unicode_if_needed) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_bytes_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_header);
tmp_expression_value_1 = par_header;
tmp_subscript_value_1 = const_int_0;
tmp_bytes_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_bytes_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
CHECK_OBJECT(tmp_bytes_arg_1);
Py_DECREF(tmp_bytes_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_name == NULL);
var_name = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_bytes_arg_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_header);
tmp_expression_value_2 = par_header;
tmp_subscript_value_2 = const_int_pos_1;
tmp_bytes_arg_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
if (tmp_bytes_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_2);
CHECK_OBJECT(tmp_bytes_arg_2);
Py_DECREF(tmp_bytes_arg_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_value == NULL);
var_value = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_raw);
tmp_operand_value_1 = par_raw;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
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
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_header);
tmp_expression_value_3 = par_header;
tmp_called_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_name);
tmp_expression_value_4 = var_name;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_decode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 44;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_hpack$hpack$$$function__1__unicode_if_needed->m_frame.f_lineno = 44;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 44;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_value);
tmp_expression_value_5 = var_value;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_decode);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 44;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_hpack$hpack$$$function__1__unicode_if_needed->m_frame.f_lineno = 44;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 44;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_hpack$hpack$$$function__1__unicode_if_needed->m_frame.f_lineno = 44;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_header);
tmp_expression_value_6 = par_header;
tmp_called_value_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_6);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_3 = var_name;
CHECK_OBJECT(var_value);
tmp_args_element_value_4 = var_value;
frame_frame_hpack$hpack$$$function__1__unicode_if_needed->m_frame.f_lineno = 45;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__1__unicode_if_needed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__1__unicode_if_needed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__1__unicode_if_needed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__1__unicode_if_needed,
    type_description_1,
    par_header,
    par_raw,
    var_name,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__1__unicode_if_needed == cache_frame_frame_hpack$hpack$$$function__1__unicode_if_needed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__1__unicode_if_needed);
    cache_frame_frame_hpack$hpack$$$function__1__unicode_if_needed = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__1__unicode_if_needed);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_name);
CHECK_OBJECT(var_name);
Py_DECREF(var_name);
var_name = NULL;
CHECK_OBJECT(var_value);
CHECK_OBJECT(var_value);
Py_DECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_value);
var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_header);
Py_DECREF(par_header);
CHECK_OBJECT(par_raw);
Py_DECREF(par_raw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_header);
Py_DECREF(par_header);
CHECK_OBJECT(par_raw);
Py_DECREF(par_raw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__2_encode_integer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_integer = python_pars[0];
PyObject *par_prefix_bits = python_pars[1];
PyObject *var_msg = NULL;
PyObject *var_max_number = NULL;
PyObject *var_elements = NULL;
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__2_encode_integer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__2_encode_integer = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__2_encode_integer)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__2_encode_integer);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__2_encode_integer == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__2_encode_integer = MAKE_FUNCTION_FRAME(tstate, code_objects_d32efed2cd31d06cc04c20e41f6b4aa8, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__2_encode_integer->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__2_encode_integer = cache_frame_frame_hpack$hpack$$$function__2_encode_integer;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__2_encode_integer);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__2_encode_integer) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_1 = module_var_accessor_hpack$hpack$log(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_7e22b1fa6fa155d2f3a1351be7d2e17a;
CHECK_OBJECT(par_integer);
tmp_args_element_value_2 = par_integer;
CHECK_OBJECT(par_prefix_bits);
tmp_args_element_value_3 = par_prefix_bits;
frame_frame_hpack$hpack$$$function__2_encode_integer->m_frame.f_lineno = 53;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_integer);
tmp_cmp_expr_left_1 = par_integer;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_d7822ae0c2d38fec9a62af31c42c2ca7;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_integer);
tmp_format_value_1 = par_integer;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
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
tmp_assign_source_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_1 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_1;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_1 = var_msg;
frame_frame_hpack$hpack$$$function__2_encode_integer->m_frame.f_lineno = 57;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 57;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_prefix_bits);
tmp_cmp_expr_left_2 = par_prefix_bits;
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_prefix_bits);
tmp_cmp_expr_left_3 = par_prefix_bits;
tmp_cmp_expr_right_3 = mod_consts.const_int_pos_8;
tmp_or_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_assign_source_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_7ce481d7321ae057cb87e86191bf46e7;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_prefix_bits);
tmp_format_value_2 = par_prefix_bits;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_2 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_2;
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_2 = var_msg;
frame_frame_hpack$hpack$$$function__2_encode_integer->m_frame.f_lineno = 61;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 61;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_hpack$hpack$_PREFIX_BIT_MAX_NUMBERS(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__PREFIX_BIT_MAX_NUMBERS);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_prefix_bits);
tmp_subscript_value_1 = par_prefix_bits;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_max_number == NULL);
var_max_number = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_integer);
tmp_cmp_expr_left_4 = par_integer;
CHECK_OBJECT(var_max_number);
tmp_cmp_expr_right_4 = var_max_number;
tmp_condition_result_3 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooo";
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
PyObject *tmp_bytearray_arg_1;
PyObject *tmp_list_element_1;
CHECK_OBJECT(par_integer);
tmp_list_element_1 = par_integer;
tmp_bytearray_arg_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_bytearray_arg_1, 0, tmp_list_element_1);
tmp_return_value = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_1);
CHECK_OBJECT(tmp_bytearray_arg_1);
Py_DECREF(tmp_bytearray_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_list_element_2;
CHECK_OBJECT(var_max_number);
tmp_list_element_2 = var_max_number;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_assign_source_4, 0, tmp_list_element_2);
assert(var_elements == NULL);
var_elements = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
CHECK_OBJECT(par_integer);
tmp_isub_expr_left_1 = par_integer;
CHECK_OBJECT(var_max_number);
tmp_isub_expr_right_1 = var_max_number;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = tmp_isub_expr_left_1;
par_integer = tmp_assign_source_5;

}
loop_start_1:;
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
if (par_integer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_integer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 70;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_5 = par_integer;
tmp_cmp_expr_right_5 = mod_consts.const_int_pos_128;
tmp_operand_value_1 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooo";
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
goto loop_end_1;
branch_no_4:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
if (var_elements == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_elements);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 71;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_1 = var_elements;
if (par_integer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_integer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 71;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_bitand_expr_left_1 = par_integer;
tmp_bitand_expr_right_1 = mod_consts.const_int_pos_127;
tmp_add_expr_left_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_int_pos_128;
tmp_item_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_irshift_expr_left_1;
PyObject *tmp_irshift_expr_right_1;
if (par_integer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_integer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 72;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_irshift_expr_left_1 = par_integer;
tmp_irshift_expr_right_1 = mod_consts.const_int_pos_7;
tmp_result = INPLACE_OPERATION_RSHIFT_OBJECT_LONG(&tmp_irshift_expr_left_1, tmp_irshift_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = tmp_irshift_expr_left_1;
par_integer = tmp_assign_source_6;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
if (var_elements == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_elements);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 74;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_2 = var_elements;
if (par_integer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_integer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 74;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_item_value_2 = par_integer;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
{
PyObject *tmp_bytearray_arg_2;
if (var_elements == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_elements);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 76;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_bytearray_arg_2 = var_elements;
tmp_return_value = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__2_encode_integer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__2_encode_integer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__2_encode_integer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__2_encode_integer,
    type_description_1,
    par_integer,
    par_prefix_bits,
    var_msg,
    var_max_number,
    var_elements
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__2_encode_integer == cache_frame_frame_hpack$hpack$$$function__2_encode_integer) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__2_encode_integer);
    cache_frame_frame_hpack$hpack$$$function__2_encode_integer = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__2_encode_integer);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_integer);
par_integer = NULL;
CHECK_OBJECT(var_max_number);
CHECK_OBJECT(var_max_number);
Py_DECREF(var_max_number);
var_max_number = NULL;
Py_XDECREF(var_elements);
var_elements = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_integer);
par_integer = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_max_number);
var_max_number = NULL;
Py_XDECREF(var_elements);
var_elements = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_prefix_bits);
Py_DECREF(par_prefix_bits);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_prefix_bits);
Py_DECREF(par_prefix_bits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__3_decode_integer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_data = python_pars[0];
PyObject *par_prefix_bits = python_pars[1];
PyObject *var_msg = NULL;
PyObject *var_max_number = NULL;
PyObject *var_index = NULL;
PyObject *var_shift = NULL;
PyObject *var_mask = NULL;
PyObject *var_number = NULL;
PyObject *var_next_byte = NULL;
PyObject *var_err = NULL;
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__3_decode_integer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__3_decode_integer = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__3_decode_integer)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__3_decode_integer);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__3_decode_integer == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__3_decode_integer = MAKE_FUNCTION_FRAME(tstate, code_objects_b00c61c2b4a5770ca40f37bab6ff2feb, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__3_decode_integer->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__3_decode_integer = cache_frame_frame_hpack$hpack$$$function__3_decode_integer;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__3_decode_integer);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__3_decode_integer) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_prefix_bits);
tmp_cmp_expr_left_1 = par_prefix_bits;
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_prefix_bits);
tmp_cmp_expr_left_2 = par_prefix_bits;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_8;
tmp_or_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_7ce481d7321ae057cb87e86191bf46e7;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_prefix_bits);
tmp_format_value_1 = par_prefix_bits;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooo";
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
tmp_assign_source_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_1 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_1;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_1 = var_msg;
frame_frame_hpack$hpack$$$function__3_decode_integer->m_frame.f_lineno = 88;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 88;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_hpack$hpack$_PREFIX_BIT_MAX_NUMBERS(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__PREFIX_BIT_MAX_NUMBERS);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_prefix_bits);
tmp_subscript_value_1 = par_prefix_bits;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_max_number == NULL);
var_max_number = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_int_pos_1;
assert(var_index == NULL);
Py_INCREF(tmp_assign_source_3);
var_index = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = const_int_0;
assert(var_shift == NULL);
Py_INCREF(tmp_assign_source_4);
var_shift = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_rshift_expr_left_1;
PyObject *tmp_rshift_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
tmp_rshift_expr_left_1 = mod_consts.const_int_pos_255;
tmp_sub_expr_left_1 = mod_consts.const_int_pos_8;
CHECK_OBJECT(par_prefix_bits);
tmp_sub_expr_right_1 = par_prefix_bits;
tmp_rshift_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_rshift_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = BINARY_OPERATION_RSHIFT_OBJECT_LONG_OBJECT(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
CHECK_OBJECT(tmp_rshift_expr_right_1);
Py_DECREF(tmp_rshift_expr_right_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_mask == NULL);
var_mask = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_data);
tmp_expression_value_2 = par_data;
tmp_subscript_value_2 = const_int_0;
tmp_bitand_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_mask);
tmp_bitand_expr_right_1 = var_mask;
tmp_assign_source_6 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(var_number == NULL);
var_number = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_number);
tmp_cmp_expr_left_3 = var_number;
CHECK_OBJECT(var_max_number);
tmp_cmp_expr_right_3 = var_max_number;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
loop_start_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_data);
tmp_expression_value_3 = par_data;
if (var_index == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 99;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_subscript_value_3 = var_index;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_next_byte;
    var_next_byte = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iadd_expr_left_1;
nuitka_digit tmp_iadd_expr_right_1;
if (var_index == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 100;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = var_index;
tmp_iadd_expr_right_1 = 1;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_8 = tmp_iadd_expr_left_1;
var_index = tmp_assign_source_8;

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_next_byte);
tmp_cmp_expr_left_4 = var_next_byte;
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_128;
tmp_condition_result_3 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
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
PyObject *tmp_assign_source_9;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_lshift_expr_left_1;
PyObject *tmp_lshift_expr_right_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
if (var_number == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_number);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 103;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_2 = var_number;
CHECK_OBJECT(var_next_byte);
tmp_sub_expr_left_2 = var_next_byte;
tmp_sub_expr_right_2 = mod_consts.const_int_pos_128;
tmp_lshift_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_lshift_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
if (var_shift == NULL) {
Py_DECREF(tmp_lshift_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shift);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 103;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_lshift_expr_right_1 = var_shift;
tmp_iadd_expr_right_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
CHECK_OBJECT(tmp_lshift_expr_left_1);
Py_DECREF(tmp_lshift_expr_left_1);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = tmp_iadd_expr_left_2;
var_number = tmp_assign_source_9;

}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
PyObject *tmp_lshift_expr_left_2;
PyObject *tmp_lshift_expr_right_2;
if (var_number == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_number);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 105;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_3 = var_number;
CHECK_OBJECT(var_next_byte);
tmp_lshift_expr_left_2 = var_next_byte;
if (var_shift == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shift);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 105;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_lshift_expr_right_2 = var_shift;
tmp_iadd_expr_right_3 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_2, tmp_lshift_expr_right_2);
if (tmp_iadd_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_10 = tmp_iadd_expr_left_3;
var_number = tmp_assign_source_10;

}
goto loop_end_1;
branch_end_3:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iadd_expr_left_4;
nuitka_digit tmp_iadd_expr_right_4;
if (var_shift == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shift);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 107;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_4 = var_shift;
tmp_iadd_expr_right_4 = 7;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
assert(!(tmp_result == false));
tmp_assign_source_11 = tmp_iadd_expr_left_4;
var_shift = tmp_assign_source_11;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
branch_no_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__3_decode_integer, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__3_decode_integer, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_IndexError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
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
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_12); 
assert(var_err == NULL);
Py_INCREF(tmp_assign_source_12);
var_err = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_9cfa77c0116902d14173a3c9c32bff4b;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_data);
tmp_operand_value_1 = par_data;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_13 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_13 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_13;
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_raise_cause_1;
tmp_called_value_1 = module_var_accessor_hpack$hpack$HPACKDecodingError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HPACKDecodingError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_msg);
tmp_args_element_value_1 = var_msg;
frame_frame_hpack$hpack$$$function__3_decode_integer->m_frame.f_lineno = 111;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_err);
tmp_raise_cause_1 = var_err;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 111;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooo";
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

Py_XDECREF(var_err);
var_err = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 95;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_hpack$hpack$$$function__3_decode_integer->m_frame)) {
        frame_frame_hpack$hpack$$$function__3_decode_integer->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_3;
branch_end_4:;
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
try_end_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_instance_1 = module_var_accessor_hpack$hpack$log(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_digest_9e7ce147a0728e9cce16661feea38dcf;
CHECK_OBJECT(var_number);
tmp_args_element_value_3 = var_number;
CHECK_OBJECT(var_index);
tmp_args_element_value_4 = var_index;
frame_frame_hpack$hpack$$$function__3_decode_integer->m_frame.f_lineno = 113;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__3_decode_integer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__3_decode_integer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__3_decode_integer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__3_decode_integer,
    type_description_1,
    par_data,
    par_prefix_bits,
    var_msg,
    var_max_number,
    var_index,
    var_shift,
    var_mask,
    var_number,
    var_next_byte,
    var_err
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__3_decode_integer == cache_frame_frame_hpack$hpack$$$function__3_decode_integer) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__3_decode_integer);
    cache_frame_frame_hpack$hpack$$$function__3_decode_integer = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__3_decode_integer);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_number);
tmp_tuple_element_3 = var_number;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_index);
tmp_tuple_element_3 = var_index;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_max_number);
CHECK_OBJECT(var_max_number);
Py_DECREF(var_max_number);
var_max_number = NULL;
CHECK_OBJECT(var_index);
CHECK_OBJECT(var_index);
Py_DECREF(var_index);
var_index = NULL;
Py_XDECREF(var_shift);
var_shift = NULL;
CHECK_OBJECT(var_mask);
CHECK_OBJECT(var_mask);
Py_DECREF(var_mask);
var_mask = NULL;
CHECK_OBJECT(var_number);
CHECK_OBJECT(var_number);
Py_DECREF(var_number);
var_number = NULL;
Py_XDECREF(var_next_byte);
var_next_byte = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_max_number);
var_max_number = NULL;
Py_XDECREF(var_index);
var_index = NULL;
Py_XDECREF(var_shift);
var_shift = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
Py_XDECREF(var_number);
var_number = NULL;
Py_XDECREF(var_next_byte);
var_next_byte = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_prefix_bits);
Py_DECREF(par_prefix_bits);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_prefix_bits);
Py_DECREF(par_prefix_bits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__4__dict_to_iterable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_header_dict = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_header_dict;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_header_dict);
CHECK_OBJECT(par_header_dict);
Py_DECREF(par_header_dict);
par_header_dict = NULL;
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
struct hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable_locals {
PyObject *var_msg;
PyObject *var_keys;
PyObject *var_key;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable_locals *generator_heap = (struct hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_msg = NULL;
generator_heap->var_keys = NULL;
generator_heap->var_key = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_a5e0a93a14f5225c87080c051f4c24fc, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_header_dict);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 125;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}

tmp_isinstance_inst_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 125;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 125;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_549e12ccf1a88a6f212c1fdb9569b1d2;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_header_dict);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 126;
generator_heap->type_description_1 = "cooo";
    goto tuple_build_exception_1;
}

tmp_type_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_format_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 126;
generator_heap->type_description_1 = "cooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 126;
generator_heap->type_description_1 = "cooo";
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
tmp_assign_source_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_1 == NULL));
assert(generator_heap->var_msg == NULL);
generator_heap->var_msg = tmp_assign_source_1;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(generator_heap->var_msg);
tmp_make_exception_arg_1 = generator_heap->var_msg;
generator->m_frame->m_frame.f_lineno = 127;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 127;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_sorted);
assert(tmp_called_value_1 != NULL);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_header_dict);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 130;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 130;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 130;
tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 130;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = MAKE_FUNCTION_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda(tstate);

generator->m_frame->m_frame.f_lineno = 129;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 129;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_keys == NULL);
generator_heap->var_keys = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(generator_heap->var_keys);
tmp_iter_arg_1 = generator_heap->var_keys;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 133;
generator_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cooo";
generator_heap->exception_lineno = 133;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_5 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_key;
    generator_heap->var_key = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_2;
PyObject *tmp_tuple_element_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_key);
tmp_tuple_element_2 = generator_heap->var_key;
tmp_expression_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyTuple_SET_ITEM0(tmp_expression_value_2, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_header_dict);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 134;
generator_heap->type_description_1 = "cooo";
    goto tuple_build_exception_2;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
CHECK_OBJECT(generator_heap->var_key);
tmp_subscript_value_1 = generator_heap->var_key;
tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 134;
generator_heap->type_description_1 = "cooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_expression_value_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_expression_value_2);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 134;
generator_heap->type_description_1 = "cooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 133;
generator_heap->type_description_1 = "cooo";
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

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
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
    generator->m_closure[0],
    generator_heap->var_msg,
    generator_heap->var_keys,
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

Py_XDECREF(generator_heap->var_msg);
generator_heap->var_msg = NULL;
Py_XDECREF(generator_heap->var_keys);
generator_heap->var_keys = NULL;
Py_XDECREF(generator_heap->var_key);
generator_heap->var_key = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
CHECK_OBJECT(generator_heap->var_keys);
CHECK_OBJECT(generator_heap->var_keys);
Py_DECREF(generator_heap->var_keys);
generator_heap->var_keys = NULL;
Py_XDECREF(generator_heap->var_key);
generator_heap->var_key = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable_context,
        module_hpack$hpack,
        mod_consts.const_str_plain__dict_to_iterable,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_a5e0a93a14f5225c87080c051f4c24fc,
        closure,
        1,
#if 1
        sizeof(struct hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable_locals)
#else
        0
#endif
    );
}


static PyObject *impl_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_k = python_pars[0];
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_1bd461859a2c47edac1fe85bd5003f85, module_hpack$hpack, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda = cache_frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_hpack$hpack$_to_bytes(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__to_bytes);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_k);
tmp_args_element_value_1 = par_k;
frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda->m_frame.f_lineno = 131;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda->m_frame.f_lineno = 131;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_bytes_chr_58_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda,
    type_description_1,
    par_k
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda == cache_frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda);
    cache_frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_k);
Py_DECREF(par_k);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_k);
Py_DECREF(par_k);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__5__to_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_value = python_pars[0];
PyObject *var_t = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__5__to_bytes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__5__to_bytes = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_value);
tmp_type_arg_1 = par_value;
tmp_assign_source_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_assign_source_1 == NULL));
assert(var_t == NULL);
var_t = tmp_assign_source_1;
}
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_t);
tmp_cmp_expr_left_1 = var_t;
tmp_cmp_expr_right_1 = (PyObject *)&PyBytes_Type;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(par_value);
tmp_return_value = par_value;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__5__to_bytes)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__5__to_bytes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__5__to_bytes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__5__to_bytes = MAKE_FUNCTION_FRAME(tstate, code_objects_f474e9ffecba460b548c93155d908c51, module_hpack$hpack, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__5__to_bytes->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__5__to_bytes = cache_frame_frame_hpack$hpack$$$function__5__to_bytes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__5__to_bytes);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__5__to_bytes) == 2);

// Framed code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_t);
tmp_cmp_expr_left_2 = var_t;
tmp_cmp_expr_right_2 = (PyObject *)&PyUnicode_Type;
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
PyObject *tmp_unicode_arg_1;
CHECK_OBJECT(par_value);
tmp_unicode_arg_1 = par_value;
tmp_assign_source_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_value;
    assert(old != NULL);
    par_value = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_value);
tmp_expression_value_1 = par_value;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_hpack$hpack$$$function__5__to_bytes->m_frame.f_lineno = 146;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__5__to_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__5__to_bytes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__5__to_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__5__to_bytes,
    type_description_1,
    par_value,
    var_t
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__5__to_bytes == cache_frame_frame_hpack$hpack$$$function__5__to_bytes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__5__to_bytes);
    cache_frame_frame_hpack$hpack$$$function__5__to_bytes = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__5__to_bytes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_value);
par_value = NULL;
CHECK_OBJECT(var_t);
CHECK_OBJECT(var_t);
Py_DECREF(var_t);
var_t = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_value);
par_value = NULL;
CHECK_OBJECT(var_t);
CHECK_OBJECT(var_t);
Py_DECREF(var_t);
var_t = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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


static PyObject *impl_hpack$hpack$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__6___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__6___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__6___init__)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__6___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__6___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__6___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_940e533858f1ab7bfa583e9e0d8175e9, module_hpack$hpack, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__6___init__->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__6___init__ = cache_frame_frame_hpack$hpack$$$function__6___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__6___init__);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__6___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_value_1 = module_var_accessor_hpack$hpack$HeaderTable(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HeaderTable);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_hpack$hpack$$$function__6___init__->m_frame.f_lineno = 156;
tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_header_table, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_assattr_target_2;
tmp_called_value_2 = module_var_accessor_hpack$hpack$HuffmanEncoder(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HuffmanEncoder);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_hpack$hpack$REQUEST_CODES(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REQUEST_CODES);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_hpack$hpack$REQUEST_CODES_LENGTH(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REQUEST_CODES_LENGTH);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_hpack$hpack$$$function__6___init__->m_frame.f_lineno = 157;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_huffman_coder, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_table_size_changes, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__6___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__6___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__6___init__ == cache_frame_frame_hpack$hpack$$$function__6___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__6___init__);
    cache_frame_frame_hpack$hpack$$$function__6___init__ = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__6___init__);

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


static PyObject *impl_hpack$hpack$$$function__7_header_table_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__7_header_table_size;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__7_header_table_size = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__7_header_table_size)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__7_header_table_size);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__7_header_table_size == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__7_header_table_size = MAKE_FUNCTION_FRAME(tstate, code_objects_6e156678a500cfa13e4a505b3854f325, module_hpack$hpack, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__7_header_table_size->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__7_header_table_size = cache_frame_frame_hpack$hpack$$$function__7_header_table_size;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__7_header_table_size);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__7_header_table_size) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_header_table);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_maxsize);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__7_header_table_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__7_header_table_size->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__7_header_table_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__7_header_table_size,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__7_header_table_size == cache_frame_frame_hpack$hpack$$$function__7_header_table_size) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__7_header_table_size);
    cache_frame_frame_hpack$hpack$$$function__7_header_table_size = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__7_header_table_size);

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


static PyObject *impl_hpack$hpack$$$function__8_header_table_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__8_header_table_size;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__8_header_table_size = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__8_header_table_size)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__8_header_table_size);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__8_header_table_size == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__8_header_table_size = MAKE_FUNCTION_FRAME(tstate, code_objects_3e01d59ebcf40ec30ab96ad6455bc0fd, module_hpack$hpack, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__8_header_table_size->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__8_header_table_size = cache_frame_frame_hpack$hpack$$$function__8_header_table_size;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__8_header_table_size);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__8_header_table_size) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_value);
tmp_assattr_value_1 = par_value;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_header_table);
if (tmp_assattr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_maxsize, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_target_1);
Py_DECREF(tmp_assattr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_header_table);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_resized);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 172;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_table_size_changes);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_hpack$hpack$$$function__8_header_table_size->m_frame.f_lineno = 173;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__8_header_table_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__8_header_table_size->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__8_header_table_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__8_header_table_size,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__8_header_table_size == cache_frame_frame_hpack$hpack$$$function__8_header_table_size) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__8_header_table_size);
    cache_frame_frame_hpack$hpack$$$function__8_header_table_size = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__8_header_table_size);

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
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__9_encode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_headers = python_pars[1];
PyObject *par_huffman = python_pars[2];
PyObject *var_header_block = NULL;
PyObject *var_hpack_headers = NULL;
PyObject *var_header = NULL;
PyObject *var_sensitive = NULL;
PyObject *var_new_header = NULL;
PyObject *var_encoded = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__9_encode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__9_encode = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_header_block == NULL);
var_header_block = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__9_encode)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__9_encode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__9_encode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__9_encode = MAKE_FUNCTION_FRAME(tstate, code_objects_5c4b07147d2a43d785fa6ab52b3ea70b, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__9_encode->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__9_encode = cache_frame_frame_hpack$hpack$$$function__9_encode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__9_encode);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__9_encode) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_header_table);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_resized);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 235;
type_description_1 = "ooooooooo";
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_header_block);
tmp_list_arg_value_1 = var_header_block;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_hpack$hpack$$$function__9_encode->m_frame.f_lineno = 236;
tmp_item_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__encode_table_size_change);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
PyObject *tmp_expression_value_3;
tmp_assattr_value_1 = Py_False;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_header_table);
if (tmp_assattr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_resized, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_target_1);
Py_DECREF(tmp_assattr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_headers);
tmp_isinstance_inst_1 = par_headers;
tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_hpack$hpack$_dict_to_iterable(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__dict_to_iterable);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_headers);
tmp_args_element_value_1 = par_headers;
frame_frame_hpack$hpack$$$function__9_encode->m_frame.f_lineno = 243;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_hpack_headers == NULL);
var_hpack_headers = tmp_assign_source_2;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_headers);
tmp_iter_arg_1 = par_headers;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_hpack_headers == NULL);
var_hpack_headers = tmp_assign_source_3;
}
branch_end_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_hpack_headers);
tmp_iter_arg_2 = var_hpack_headers;
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooo";
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
type_description_1 = "ooooooooo";
exception_lineno = 267;
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
    PyObject *old = var_header;
    var_header = tmp_assign_source_6;
    Py_INCREF(var_header);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_False;
{
    PyObject *old = var_sensitive;
    var_sensitive = tmp_assign_source_7;
    Py_INCREF(var_sensitive);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(var_header);
tmp_isinstance_inst_2 = var_header;
tmp_isinstance_cls_2 = module_var_accessor_hpack$hpack$HeaderTuple(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HeaderTuple);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_8;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_header);
tmp_expression_value_4 = var_header;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_indexable);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_8 = (tmp_res == 0) ? Py_True : Py_False;
{
    PyObject *old = var_sensitive;
    assert(old != NULL);
    var_sensitive = tmp_assign_source_8;
    Py_INCREF(var_sensitive);
    Py_DECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_header);
tmp_len_arg_1 = var_header;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = 2;
tmp_condition_result_4 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_header);
tmp_expression_value_5 = var_header;
tmp_subscript_value_1 = mod_consts.const_int_pos_2;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_sensitive;
    assert(old != NULL);
    var_sensitive = tmp_assign_source_9;
    Py_DECREF(old);
}

}
branch_no_4:;
branch_end_3:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
tmp_called_value_2 = module_var_accessor_hpack$hpack$_to_bytes(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__to_bytes);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 275;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_header);
tmp_expression_value_6 = var_header;
tmp_subscript_value_2 = const_int_0;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 0);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
frame_frame_hpack$hpack$$$function__9_encode->m_frame.f_lineno = 275;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
PyTuple_SET_ITEM(tmp_assign_source_10, 0, tmp_tuple_element_1);
tmp_called_value_3 = module_var_accessor_hpack$hpack$_to_bytes(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__to_bytes);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 275;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_header);
tmp_expression_value_7 = var_header;
tmp_subscript_value_3 = const_int_pos_1;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_3, 1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
frame_frame_hpack$hpack$$$function__9_encode->m_frame.f_lineno = 275;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_10, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_10);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
{
    PyObject *old = var_new_header;
    var_new_header = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
if (var_header_block == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_header_block);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 276;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_2 = var_header_block;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 276;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_8 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_add);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_new_header);
tmp_args_element_value_4 = var_new_header;
CHECK_OBJECT(var_sensitive);
tmp_args_element_value_5 = var_sensitive;
if (par_huffman == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_huffman);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 276;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_6 = par_huffman;
frame_frame_hpack$hpack$$$function__9_encode->m_frame.f_lineno = 276;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_item_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooo";
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
PyObject *tmp_bytes_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_bytes_arg_value_1 = const_bytes_empty;
if (var_header_block == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_header_block);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 278;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_iterable_value_1 = var_header_block;
tmp_assign_source_11 = BYTES_JOIN(tstate, tmp_bytes_arg_value_1, tmp_iterable_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_encoded == NULL);
var_encoded = tmp_assign_source_11;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_instance_2 = module_var_accessor_hpack$hpack$log(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 280;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = mod_consts.const_str_digest_d3716ab1c61cb57fd1983829d7da9719;
CHECK_OBJECT(var_encoded);
tmp_args_element_value_8 = var_encoded;
frame_frame_hpack$hpack$$$function__9_encode->m_frame.f_lineno = 280;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__9_encode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__9_encode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__9_encode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__9_encode,
    type_description_1,
    par_self,
    par_headers,
    par_huffman,
    var_header_block,
    var_hpack_headers,
    var_header,
    var_sensitive,
    var_new_header,
    var_encoded
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__9_encode == cache_frame_frame_hpack$hpack$$$function__9_encode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__9_encode);
    cache_frame_frame_hpack$hpack$$$function__9_encode = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__9_encode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_encoded);
tmp_return_value = var_encoded;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_header_block);
var_header_block = NULL;
CHECK_OBJECT(var_hpack_headers);
CHECK_OBJECT(var_hpack_headers);
Py_DECREF(var_hpack_headers);
var_hpack_headers = NULL;
Py_XDECREF(var_header);
var_header = NULL;
Py_XDECREF(var_sensitive);
var_sensitive = NULL;
Py_XDECREF(var_new_header);
var_new_header = NULL;
CHECK_OBJECT(var_encoded);
CHECK_OBJECT(var_encoded);
Py_DECREF(var_encoded);
var_encoded = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_header_block);
var_header_block = NULL;
Py_XDECREF(var_hpack_headers);
var_hpack_headers = NULL;
Py_XDECREF(var_header);
var_header = NULL;
Py_XDECREF(var_sensitive);
var_sensitive = NULL;
Py_XDECREF(var_new_header);
var_new_header = NULL;
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
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_huffman);
Py_DECREF(par_huffman);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_huffman);
Py_DECREF(par_huffman);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__10_add(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_to_add = python_pars[1];
PyObject *par_sensitive = python_pars[2];
PyObject *par_huffman = python_pars[3];
PyObject *var_name = NULL;
PyObject *var_value = NULL;
PyObject *var_indexbit = NULL;
PyObject *var_match = NULL;
PyObject *var_encoded = NULL;
PyObject *var_index = NULL;
PyObject *var_perfect = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__10_add;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__10_add = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__10_add)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__10_add);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__10_add == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__10_add = MAKE_FUNCTION_FRAME(tstate, code_objects_654ab6c65c9af1e28b7aa41666c4fe48, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__10_add->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__10_add = cache_frame_frame_hpack$hpack$$$function__10_add;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__10_add);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__10_add) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_instance_1 = module_var_accessor_hpack$hpack$log(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 288;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_557a79e53c64ee1daf8a42c7db2bc36d;
CHECK_OBJECT(par_to_add);
tmp_args_element_value_2 = par_to_add;
CHECK_OBJECT(par_sensitive);
tmp_args_element_value_3 = par_sensitive;
CHECK_OBJECT(par_huffman);
tmp_args_element_value_4 = par_huffman;
frame_frame_hpack$hpack$$$function__10_add->m_frame.f_lineno = 288;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_to_add);
tmp_iter_arg_1 = par_to_add;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooooooo";
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



exception_lineno = 295;
type_description_1 = "ooooooooooo";
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



exception_lineno = 295;
type_description_1 = "ooooooooooo";
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



exception_lineno = 295;
type_description_1 = "ooooooooooo";
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
assert(var_name == NULL);
Py_INCREF(tmp_assign_source_4);
var_name = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_value == NULL);
Py_INCREF(tmp_assign_source_5);
var_value = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_6;
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_sensitive);
tmp_operand_value_1 = par_sensitive;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_6 = module_var_accessor_hpack$hpack$INDEX_INCREMENTAL(tstate);
if (unlikely(tmp_assign_source_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INDEX_INCREMENTAL);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_6 = module_var_accessor_hpack$hpack$INDEX_NEVER(tstate);
if (unlikely(tmp_assign_source_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INDEX_NEVER);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_indexbit == NULL);
Py_INCREF(tmp_assign_source_6);
var_indexbit = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_header_table);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_5 = var_name;
CHECK_OBJECT(var_value);
tmp_args_element_value_6 = var_value;
frame_frame_hpack$hpack$$$function__10_add->m_frame.f_lineno = 301;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_search,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_match == NULL);
var_match = tmp_assign_source_7;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_match);
tmp_cmp_expr_left_1 = var_match;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(var_name);
tmp_args_element_value_7 = var_name;
CHECK_OBJECT(var_value);
tmp_args_element_value_8 = var_value;
CHECK_OBJECT(var_indexbit);
tmp_args_element_value_9 = var_indexbit;
CHECK_OBJECT(par_huffman);
tmp_args_element_value_10 = par_huffman;
frame_frame_hpack$hpack$$$function__10_add->m_frame.f_lineno = 306;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_8 = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain__encode_literal,
        call_args
    );
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_encoded == NULL);
var_encoded = tmp_assign_source_8;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_sensitive);
tmp_operand_value_2 = par_sensitive;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "ooooooooooo";
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
{
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_header_table);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_11 = var_name;
CHECK_OBJECT(var_value);
tmp_args_element_value_12 = var_value;
frame_frame_hpack$hpack$$$function__10_add->m_frame.f_lineno = 308;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_add,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
CHECK_OBJECT(var_encoded);
tmp_return_value = var_encoded;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_match);
tmp_iter_arg_2 = var_match;
tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 314;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 314;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 2, 3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 314;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_3 == NULL);
tmp_tuple_unpack_2__element_3 = tmp_assign_source_12;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 314;
type_description_1 = "ooooooooooo";
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
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;
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
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
assert(var_index == NULL);
Py_INCREF(tmp_assign_source_13);
var_index = tmp_assign_source_13;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_name;
    assert(old != NULL);
    var_name = tmp_assign_source_14;
    Py_INCREF(var_name);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_15 = tmp_tuple_unpack_2__element_3;
assert(var_perfect == NULL);
Py_INCREF(tmp_assign_source_15);
var_perfect = tmp_assign_source_15;
}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
CHECK_OBJECT(var_perfect);
tmp_truth_name_1 = CHECK_IF_TRUE(var_perfect);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_13;
CHECK_OBJECT(par_self);
tmp_called_instance_5 = par_self;
CHECK_OBJECT(var_index);
tmp_args_element_value_13 = var_index;
frame_frame_hpack$hpack$$$function__10_add->m_frame.f_lineno = 318;
tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain__encode_indexed, tmp_args_element_value_13);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_encoded == NULL);
var_encoded = tmp_assign_source_16;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
CHECK_OBJECT(par_self);
tmp_called_instance_6 = par_self;
CHECK_OBJECT(var_index);
tmp_args_element_value_14 = var_index;
CHECK_OBJECT(var_value);
tmp_args_element_value_15 = var_value;
CHECK_OBJECT(var_indexbit);
tmp_args_element_value_16 = var_indexbit;
CHECK_OBJECT(par_huffman);
tmp_args_element_value_17 = par_huffman;
frame_frame_hpack$hpack$$$function__10_add->m_frame.f_lineno = 325;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_assign_source_17 = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_6,
        mod_consts.const_str_plain__encode_indexed_literal,
        call_args
    );
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_encoded == NULL);
var_encoded = tmp_assign_source_17;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(par_sensitive);
tmp_operand_value_3 = par_sensitive;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_instance_7;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_header_table);
if (tmp_called_instance_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_18 = var_name;
CHECK_OBJECT(var_value);
tmp_args_element_value_19 = var_value;
frame_frame_hpack$hpack$$$function__10_add->m_frame.f_lineno = 329;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_7,
        mod_consts.const_str_plain_add,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
branch_end_3:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__10_add, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__10_add->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__10_add, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__10_add,
    type_description_1,
    par_self,
    par_to_add,
    par_sensitive,
    par_huffman,
    var_name,
    var_value,
    var_indexbit,
    var_match,
    var_encoded,
    var_index,
    var_perfect
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__10_add == cache_frame_frame_hpack$hpack$$$function__10_add) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__10_add);
    cache_frame_frame_hpack$hpack$$$function__10_add = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__10_add);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_encoded);
tmp_return_value = var_encoded;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_name);
var_name = NULL;
CHECK_OBJECT(var_value);
CHECK_OBJECT(var_value);
Py_DECREF(var_value);
var_value = NULL;
CHECK_OBJECT(var_indexbit);
CHECK_OBJECT(var_indexbit);
Py_DECREF(var_indexbit);
var_indexbit = NULL;
CHECK_OBJECT(var_match);
CHECK_OBJECT(var_match);
Py_DECREF(var_match);
var_match = NULL;
CHECK_OBJECT(var_encoded);
CHECK_OBJECT(var_encoded);
Py_DECREF(var_encoded);
var_encoded = NULL;
Py_XDECREF(var_index);
var_index = NULL;
Py_XDECREF(var_perfect);
var_perfect = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_value);
var_value = NULL;
Py_XDECREF(var_indexbit);
var_indexbit = NULL;
Py_XDECREF(var_match);
var_match = NULL;
Py_XDECREF(var_encoded);
var_encoded = NULL;
Py_XDECREF(var_index);
var_index = NULL;
Py_XDECREF(var_perfect);
var_perfect = NULL;
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
CHECK_OBJECT(par_to_add);
Py_DECREF(par_to_add);
CHECK_OBJECT(par_sensitive);
Py_DECREF(par_sensitive);
CHECK_OBJECT(par_huffman);
Py_DECREF(par_huffman);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_to_add);
Py_DECREF(par_to_add);
CHECK_OBJECT(par_sensitive);
Py_DECREF(par_sensitive);
CHECK_OBJECT(par_huffman);
Py_DECREF(par_huffman);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__11__encode_indexed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_index = python_pars[1];
PyObject *var_field = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__11__encode_indexed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__11__encode_indexed = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__11__encode_indexed)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__11__encode_indexed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__11__encode_indexed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__11__encode_indexed = MAKE_FUNCTION_FRAME(tstate, code_objects_265651311c308b92a430a193e9b25d68, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__11__encode_indexed->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__11__encode_indexed = cache_frame_frame_hpack$hpack$$$function__11__encode_indexed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__11__encode_indexed);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__11__encode_indexed) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_hpack$hpack$encode_integer(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_integer);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 337;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_index);
tmp_args_element_value_1 = par_index;
tmp_args_element_value_2 = mod_consts.const_int_pos_7;
frame_frame_hpack$hpack$$$function__11__encode_indexed->m_frame.f_lineno = 337;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_field == NULL);
var_field = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(var_field);
tmp_assign_source_2 = var_field;
assert(tmp_inplace_assign_subscript_1__target == NULL);
Py_INCREF(tmp_assign_source_2);
tmp_inplace_assign_subscript_1__target = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_1 = tmp_inplace_assign_subscript_1__target;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(tmp_inplace_assign_subscript_1__value == NULL);
tmp_inplace_assign_subscript_1__value = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_ibitor_expr_left_1;
PyObject *tmp_ibitor_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ibitor_expr_left_1 = tmp_inplace_assign_subscript_1__value;
tmp_ibitor_expr_right_1 = mod_consts.const_int_pos_128;
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_LONG(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = tmp_ibitor_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_4;

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
int tmp_ass_subscript_res_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_1 = tmp_inplace_assign_subscript_1__target;
tmp_ass_subscript_1 = const_int_0;
tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
if (tmp_ass_subscript_res_1 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooo";
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

CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
Py_DECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
{
PyObject *tmp_bytes_arg_1;
CHECK_OBJECT(var_field);
tmp_bytes_arg_1 = var_field;
tmp_return_value = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__11__encode_indexed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__11__encode_indexed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__11__encode_indexed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__11__encode_indexed,
    type_description_1,
    par_self,
    par_index,
    var_field
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__11__encode_indexed == cache_frame_frame_hpack$hpack$$$function__11__encode_indexed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__11__encode_indexed);
    cache_frame_frame_hpack$hpack$$$function__11__encode_indexed = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__11__encode_indexed);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_field);
CHECK_OBJECT(var_field);
Py_DECREF(var_field);
var_field = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_field);
var_field = NULL;
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
CHECK_OBJECT(par_index);
Py_DECREF(par_index);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_index);
Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__12__encode_literal(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_value = python_pars[2];
PyObject *par_indexbit = python_pars[3];
PyObject *par_huffman = python_pars[4];
PyObject *var_name_len = NULL;
PyObject *var_value_len = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_inplace_assign_subscript_2__target = NULL;
PyObject *tmp_inplace_assign_subscript_2__value = NULL;
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__12__encode_literal;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__12__encode_literal = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__12__encode_literal)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__12__encode_literal);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__12__encode_literal == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__12__encode_literal = MAKE_FUNCTION_FRAME(tstate, code_objects_f3acd727f7d4db0a5f6e8e66cded7460, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__12__encode_literal->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__12__encode_literal = cache_frame_frame_hpack$hpack$$$function__12__encode_literal;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__12__encode_literal);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__12__encode_literal) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_huffman);
tmp_truth_name_1 = CHECK_IF_TRUE(par_huffman);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_huffman_coder);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
frame_frame_hpack$hpack$$$function__12__encode_literal->m_frame.f_lineno = 348;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_name;
    assert(old != NULL);
    par_name = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_huffman_coder);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_2 = par_value;
frame_frame_hpack$hpack$$$function__12__encode_literal->m_frame.f_lineno = 349;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_value;
    assert(old != NULL);
    par_value = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_len_arg_1;
PyObject *tmp_args_element_value_4;
tmp_called_value_3 = module_var_accessor_hpack$hpack$encode_integer(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_integer);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 351;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_len_arg_1 = par_name;
tmp_args_element_value_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_int_pos_7;
frame_frame_hpack$hpack$$$function__12__encode_literal->m_frame.f_lineno = 351;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_name_len == NULL);
var_name_len = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_len_arg_2;
PyObject *tmp_args_element_value_6;
tmp_called_value_4 = module_var_accessor_hpack$hpack$encode_integer(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_integer);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_len_arg_2 = par_value;
tmp_args_element_value_5 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = mod_consts.const_int_pos_7;
frame_frame_hpack$hpack$$$function__12__encode_literal->m_frame.f_lineno = 352;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_value_len == NULL);
var_value_len = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_huffman);
tmp_truth_name_2 = CHECK_IF_TRUE(par_huffman);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_5;
CHECK_OBJECT(var_name_len);
tmp_assign_source_5 = var_name_len;
assert(tmp_inplace_assign_subscript_1__target == NULL);
Py_INCREF(tmp_assign_source_5);
tmp_inplace_assign_subscript_1__target = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_5 = tmp_inplace_assign_subscript_1__target;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_inplace_assign_subscript_1__value == NULL);
tmp_inplace_assign_subscript_1__value = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_ibitor_expr_left_1;
PyObject *tmp_ibitor_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ibitor_expr_left_1 = tmp_inplace_assign_subscript_1__value;
tmp_ibitor_expr_right_1 = mod_consts.const_int_pos_128;
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_LONG(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_7 = tmp_ibitor_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_7;

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
int tmp_ass_subscript_res_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_1 = tmp_inplace_assign_subscript_1__target;
tmp_ass_subscript_1 = const_int_0;
tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
if (tmp_ass_subscript_res_1 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooooo";
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

CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
Py_DECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(var_value_len);
tmp_assign_source_8 = var_value_len;
assert(tmp_inplace_assign_subscript_2__target == NULL);
Py_INCREF(tmp_assign_source_8);
tmp_inplace_assign_subscript_2__target = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
tmp_expression_value_6 = tmp_inplace_assign_subscript_2__target;
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 0);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(tmp_inplace_assign_subscript_2__value == NULL);
tmp_inplace_assign_subscript_2__value = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_ibitor_expr_left_2;
PyObject *tmp_ibitor_expr_right_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
tmp_ibitor_expr_left_2 = tmp_inplace_assign_subscript_2__value;
tmp_ibitor_expr_right_2 = mod_consts.const_int_pos_128;
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_LONG(&tmp_ibitor_expr_left_2, tmp_ibitor_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_10 = tmp_ibitor_expr_left_2;
tmp_inplace_assign_subscript_2__value = tmp_assign_source_10;

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
int tmp_ass_subscript_res_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
tmp_ass_subvalue_2 = tmp_inplace_assign_subscript_2__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
tmp_ass_subscribed_2 = tmp_inplace_assign_subscript_2__target;
tmp_ass_subscript_2 = const_int_0;
tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, 0, tmp_ass_subvalue_2);
if (tmp_ass_subscript_res_2 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
Py_DECREF(tmp_inplace_assign_subscript_2__target);
tmp_inplace_assign_subscript_2__target = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_2__value);
tmp_inplace_assign_subscript_2__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
Py_DECREF(tmp_inplace_assign_subscript_2__target);
tmp_inplace_assign_subscript_2__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
Py_DECREF(tmp_inplace_assign_subscript_2__value);
tmp_inplace_assign_subscript_2__value = NULL;
branch_no_2:;
{
PyObject *tmp_bytes_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_list_element_1;
tmp_bytes_arg_value_1 = const_bytes_empty;
CHECK_OBJECT(par_indexbit);
tmp_list_element_1 = par_indexbit;
tmp_iterable_value_1 = MAKE_LIST_EMPTY(tstate, 5);
{
PyObject *tmp_bytes_arg_1;
PyObject *tmp_bytes_arg_2;
PyList_SET_ITEM0(tmp_iterable_value_1, 0, tmp_list_element_1);
CHECK_OBJECT(var_name_len);
tmp_bytes_arg_1 = var_name_len;
tmp_list_element_1 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooooooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_iterable_value_1, 1, tmp_list_element_1);
CHECK_OBJECT(par_name);
tmp_list_element_1 = par_name;
PyList_SET_ITEM0(tmp_iterable_value_1, 2, tmp_list_element_1);
CHECK_OBJECT(var_value_len);
tmp_bytes_arg_2 = var_value_len;
tmp_list_element_1 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooooooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_iterable_value_1, 3, tmp_list_element_1);
CHECK_OBJECT(par_value);
tmp_list_element_1 = par_value;
PyList_SET_ITEM0(tmp_iterable_value_1, 4, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_iterable_value_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_return_value = BYTES_JOIN(tstate, tmp_bytes_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__12__encode_literal, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__12__encode_literal->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__12__encode_literal, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__12__encode_literal,
    type_description_1,
    par_self,
    par_name,
    par_value,
    par_indexbit,
    par_huffman,
    var_name_len,
    var_value_len
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__12__encode_literal == cache_frame_frame_hpack$hpack$$$function__12__encode_literal) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__12__encode_literal);
    cache_frame_frame_hpack$hpack$$$function__12__encode_literal = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__12__encode_literal);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_name);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
par_name = NULL;
CHECK_OBJECT(par_value);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
par_value = NULL;
CHECK_OBJECT(var_name_len);
CHECK_OBJECT(var_name_len);
Py_DECREF(var_name_len);
var_name_len = NULL;
CHECK_OBJECT(var_value_len);
CHECK_OBJECT(var_value_len);
Py_DECREF(var_value_len);
var_value_len = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_name);
par_name = NULL;
Py_XDECREF(par_value);
par_value = NULL;
Py_XDECREF(var_name_len);
var_name_len = NULL;
Py_XDECREF(var_value_len);
var_value_len = NULL;
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
CHECK_OBJECT(par_indexbit);
Py_DECREF(par_indexbit);
CHECK_OBJECT(par_huffman);
Py_DECREF(par_huffman);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_indexbit);
Py_DECREF(par_indexbit);
CHECK_OBJECT(par_huffman);
Py_DECREF(par_huffman);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__13__encode_indexed_literal(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_index = python_pars[1];
PyObject *par_value = python_pars[2];
PyObject *par_indexbit = python_pars[3];
PyObject *par_huffman = python_pars[4];
PyObject *var_prefix = NULL;
PyObject *var_value_len = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_inplace_assign_subscript_2__target = NULL;
PyObject *tmp_inplace_assign_subscript_2__value = NULL;
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__13__encode_indexed_literal;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__13__encode_indexed_literal = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__13__encode_indexed_literal)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__13__encode_indexed_literal);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__13__encode_indexed_literal == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__13__encode_indexed_literal = MAKE_FUNCTION_FRAME(tstate, code_objects_b5f67f7f07507d6ffffe181598970976, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__13__encode_indexed_literal->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__13__encode_indexed_literal = cache_frame_frame_hpack$hpack$$$function__13__encode_indexed_literal;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__13__encode_indexed_literal);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__13__encode_indexed_literal) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_indexbit);
tmp_cmp_expr_left_1 = par_indexbit;
tmp_cmp_expr_right_1 = module_var_accessor_hpack$hpack$INDEX_INCREMENTAL(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INDEX_INCREMENTAL);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 367;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_hpack$hpack$encode_integer(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_integer);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 368;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_index);
tmp_args_element_value_1 = par_index;
tmp_args_element_value_2 = mod_consts.const_int_pos_4;
frame_frame_hpack$hpack$$$function__13__encode_indexed_literal->m_frame.f_lineno = 368;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_prefix == NULL);
var_prefix = tmp_assign_source_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_hpack$hpack$encode_integer(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_integer);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 370;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_index);
tmp_args_element_value_3 = par_index;
tmp_args_element_value_4 = mod_consts.const_int_pos_6;
frame_frame_hpack$hpack$$$function__13__encode_indexed_literal->m_frame.f_lineno = 370;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_prefix == NULL);
var_prefix = tmp_assign_source_2;
}
branch_end_1:;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(var_prefix);
tmp_assign_source_3 = var_prefix;
assert(tmp_inplace_assign_subscript_1__target == NULL);
Py_INCREF(tmp_assign_source_3);
tmp_inplace_assign_subscript_1__target = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_1 = tmp_inplace_assign_subscript_1__target;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_inplace_assign_subscript_1__value == NULL);
tmp_inplace_assign_subscript_1__value = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_ibitor_expr_left_1;
PyObject *tmp_ibitor_expr_right_1;
PyObject *tmp_ord_arg_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ibitor_expr_left_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(par_indexbit);
tmp_ord_arg_1 = par_indexbit;
tmp_ibitor_expr_right_1 = BUILTIN_ORD(tmp_ord_arg_1);
if (tmp_ibitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
CHECK_OBJECT(tmp_ibitor_expr_right_1);
Py_DECREF(tmp_ibitor_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_5 = tmp_ibitor_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_5;

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
int tmp_ass_subscript_res_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_1 = tmp_inplace_assign_subscript_1__target;
tmp_ass_subscript_1 = const_int_0;
tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
if (tmp_ass_subscript_res_1 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "ooooooo";
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

CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
Py_DECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_huffman);
tmp_truth_name_1 = CHECK_IF_TRUE(par_huffman);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_huffman_coder);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_5 = par_value;
frame_frame_hpack$hpack$$$function__13__encode_indexed_literal->m_frame.f_lineno = 375;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_value;
    assert(old != NULL);
    par_value = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_len_arg_1;
PyObject *tmp_args_element_value_7;
tmp_called_value_4 = module_var_accessor_hpack$hpack$encode_integer(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_integer);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 377;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_len_arg_1 = par_value;
tmp_args_element_value_6 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = mod_consts.const_int_pos_7;
frame_frame_hpack$hpack$$$function__13__encode_indexed_literal->m_frame.f_lineno = 377;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_value_len == NULL);
var_value_len = tmp_assign_source_7;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(par_huffman);
tmp_truth_name_2 = CHECK_IF_TRUE(par_huffman);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_assign_source_8;
CHECK_OBJECT(var_value_len);
tmp_assign_source_8 = var_value_len;
assert(tmp_inplace_assign_subscript_2__target == NULL);
Py_INCREF(tmp_assign_source_8);
tmp_inplace_assign_subscript_2__target = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
tmp_expression_value_4 = tmp_inplace_assign_subscript_2__target;
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 0);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(tmp_inplace_assign_subscript_2__value == NULL);
tmp_inplace_assign_subscript_2__value = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_ibitor_expr_left_2;
PyObject *tmp_ibitor_expr_right_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
tmp_ibitor_expr_left_2 = tmp_inplace_assign_subscript_2__value;
tmp_ibitor_expr_right_2 = mod_consts.const_int_pos_128;
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_LONG(&tmp_ibitor_expr_left_2, tmp_ibitor_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_10 = tmp_ibitor_expr_left_2;
tmp_inplace_assign_subscript_2__value = tmp_assign_source_10;

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
int tmp_ass_subscript_res_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
tmp_ass_subvalue_2 = tmp_inplace_assign_subscript_2__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
tmp_ass_subscribed_2 = tmp_inplace_assign_subscript_2__target;
tmp_ass_subscript_2 = const_int_0;
tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, 0, tmp_ass_subvalue_2);
if (tmp_ass_subscript_res_2 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
Py_DECREF(tmp_inplace_assign_subscript_2__target);
tmp_inplace_assign_subscript_2__target = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_2__value);
tmp_inplace_assign_subscript_2__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
Py_DECREF(tmp_inplace_assign_subscript_2__target);
tmp_inplace_assign_subscript_2__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
Py_DECREF(tmp_inplace_assign_subscript_2__value);
tmp_inplace_assign_subscript_2__value = NULL;
branch_no_3:;
{
PyObject *tmp_bytes_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_list_element_1;
PyObject *tmp_bytes_arg_1;
tmp_bytes_arg_value_1 = const_bytes_empty;
CHECK_OBJECT(var_prefix);
tmp_bytes_arg_1 = var_prefix;
tmp_list_element_1 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_iterable_value_1 = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_bytes_arg_2;
PyList_SET_ITEM(tmp_iterable_value_1, 0, tmp_list_element_1);
CHECK_OBJECT(var_value_len);
tmp_bytes_arg_2 = var_value_len;
tmp_list_element_1 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooooooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_iterable_value_1, 1, tmp_list_element_1);
CHECK_OBJECT(par_value);
tmp_list_element_1 = par_value;
PyList_SET_ITEM0(tmp_iterable_value_1, 2, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_iterable_value_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_return_value = BYTES_JOIN(tstate, tmp_bytes_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__13__encode_indexed_literal, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__13__encode_indexed_literal->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__13__encode_indexed_literal, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__13__encode_indexed_literal,
    type_description_1,
    par_self,
    par_index,
    par_value,
    par_indexbit,
    par_huffman,
    var_prefix,
    var_value_len
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__13__encode_indexed_literal == cache_frame_frame_hpack$hpack$$$function__13__encode_indexed_literal) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__13__encode_indexed_literal);
    cache_frame_frame_hpack$hpack$$$function__13__encode_indexed_literal = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__13__encode_indexed_literal);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_value);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
par_value = NULL;
CHECK_OBJECT(var_prefix);
CHECK_OBJECT(var_prefix);
Py_DECREF(var_prefix);
var_prefix = NULL;
CHECK_OBJECT(var_value_len);
CHECK_OBJECT(var_value_len);
Py_DECREF(var_value_len);
var_value_len = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_value);
par_value = NULL;
Py_XDECREF(var_prefix);
var_prefix = NULL;
Py_XDECREF(var_value_len);
var_value_len = NULL;
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
CHECK_OBJECT(par_index);
Py_DECREF(par_index);
CHECK_OBJECT(par_indexbit);
Py_DECREF(par_indexbit);
CHECK_OBJECT(par_huffman);
Py_DECREF(par_huffman);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_index);
Py_DECREF(par_index);
CHECK_OBJECT(par_indexbit);
Py_DECREF(par_indexbit);
CHECK_OBJECT(par_huffman);
Py_DECREF(par_huffman);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__14__encode_table_size_change(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_block = NULL;
PyObject *var_size_bytes = NULL;
PyObject *var_b = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_inplace_assign_subscript_1__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__14__encode_table_size_change;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__14__encode_table_size_change = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_bytes_empty;
assert(var_block == NULL);
Py_INCREF(tmp_assign_source_1);
var_block = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__14__encode_table_size_change)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__14__encode_table_size_change);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__14__encode_table_size_change == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__14__encode_table_size_change = MAKE_FUNCTION_FRAME(tstate, code_objects_8402f313c69c2559c011b93cee09fc98, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__14__encode_table_size_change->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__14__encode_table_size_change = cache_frame_frame_hpack$hpack$$$function__14__encode_table_size_change;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__14__encode_table_size_change);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__14__encode_table_size_change) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_table_size_changes);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
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
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 390;
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
    PyObject *old = var_size_bytes;
    var_size_bytes = tmp_assign_source_4;
    Py_INCREF(var_size_bytes);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_hpack$hpack$encode_integer(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_integer);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 391;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_size_bytes);
tmp_args_element_value_1 = var_size_bytes;
tmp_args_element_value_2 = mod_consts.const_int_pos_5;
frame_frame_hpack$hpack$$$function__14__encode_table_size_change->m_frame.f_lineno = 391;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_b;
    var_b = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(var_b);
tmp_assign_source_6 = var_b;
{
    PyObject *old = tmp_inplace_assign_subscript_1__target;
    tmp_inplace_assign_subscript_1__target = tmp_assign_source_6;
    Py_INCREF(tmp_inplace_assign_subscript_1__target);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = const_int_0;
{
    PyObject *old = tmp_inplace_assign_subscript_1__subscript;
    tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_7;
    Py_INCREF(tmp_inplace_assign_subscript_1__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_2 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_subscript_value_1 = tmp_inplace_assign_subscript_1__subscript;
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__value;
    tmp_inplace_assign_subscript_1__value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_ibitor_expr_left_1;
PyObject *tmp_ibitor_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ibitor_expr_left_1 = tmp_inplace_assign_subscript_1__value;
tmp_ibitor_expr_right_1 = mod_consts.const_int_pos_32;
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_LONG(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_assign_source_9 = tmp_ibitor_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_9;

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_1 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_1 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_ass_subscript_1 = tmp_inplace_assign_subscript_1__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
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

CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
Py_DECREF(tmp_inplace_assign_subscript_1__subscript);
tmp_inplace_assign_subscript_1__subscript = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
Py_DECREF(tmp_inplace_assign_subscript_1__subscript);
tmp_inplace_assign_subscript_1__subscript = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
Py_DECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_bytes_arg_1;
if (var_block == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_block);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 393;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = var_block;
CHECK_OBJECT(var_b);
tmp_bytes_arg_1 = var_b;
tmp_iadd_expr_right_1 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_10 = tmp_iadd_expr_left_1;
var_block = tmp_assign_source_10;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_table_size_changes, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
if (var_block == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_block);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 395;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_block;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__14__encode_table_size_change, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__14__encode_table_size_change->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__14__encode_table_size_change, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__14__encode_table_size_change,
    type_description_1,
    par_self,
    var_block,
    var_size_bytes,
    var_b
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__14__encode_table_size_change == cache_frame_frame_hpack$hpack$$$function__14__encode_table_size_change) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__14__encode_table_size_change);
    cache_frame_frame_hpack$hpack$$$function__14__encode_table_size_change = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__14__encode_table_size_change);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_block);
var_block = NULL;
Py_XDECREF(var_size_bytes);
var_size_bytes = NULL;
Py_XDECREF(var_b);
var_b = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_block);
var_block = NULL;
Py_XDECREF(var_size_bytes);
var_size_bytes = NULL;
Py_XDECREF(var_b);
var_b = NULL;
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


static PyObject *impl_hpack$hpack$$$function__15___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_max_header_list_size = python_pars[1];
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__15___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__15___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__15___init__)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__15___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__15___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__15___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d8725ba82275be4d5c945535937822a9, module_hpack$hpack, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__15___init__->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__15___init__ = cache_frame_frame_hpack$hpack$$$function__15___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__15___init__);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__15___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_value_1 = module_var_accessor_hpack$hpack$HeaderTable(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HeaderTable);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 421;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_hpack$hpack$$$function__15___init__->m_frame.f_lineno = 421;
tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_header_table, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_max_header_list_size);
tmp_assattr_value_2 = par_max_header_list_size;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_max_header_list_size, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_header_table);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_maxsize);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_max_allowed_table_size, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__15___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__15___init__,
    type_description_1,
    par_self,
    par_max_header_list_size
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__15___init__ == cache_frame_frame_hpack$hpack$$$function__15___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__15___init__);
    cache_frame_frame_hpack$hpack$$$function__15___init__ = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__15___init__);

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
CHECK_OBJECT(par_max_header_list_size);
Py_DECREF(par_max_header_list_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_max_header_list_size);
Py_DECREF(par_max_header_list_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__16_header_table_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__16_header_table_size;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__16_header_table_size = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__16_header_table_size)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__16_header_table_size);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__16_header_table_size == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__16_header_table_size = MAKE_FUNCTION_FRAME(tstate, code_objects_1b4994c63c1e62641192daa8116a30ce, module_hpack$hpack, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__16_header_table_size->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__16_header_table_size = cache_frame_frame_hpack$hpack$$$function__16_header_table_size;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__16_header_table_size);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__16_header_table_size) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_header_table);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_maxsize);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__16_header_table_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__16_header_table_size->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__16_header_table_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__16_header_table_size,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__16_header_table_size == cache_frame_frame_hpack$hpack$$$function__16_header_table_size) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__16_header_table_size);
    cache_frame_frame_hpack$hpack$$$function__16_header_table_size = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__16_header_table_size);

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


static PyObject *impl_hpack$hpack$$$function__17_header_table_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__17_header_table_size;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__17_header_table_size = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__17_header_table_size)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__17_header_table_size);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__17_header_table_size == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__17_header_table_size = MAKE_FUNCTION_FRAME(tstate, code_objects_0005af3fdb3f7c204a0cfa0d819541ea, module_hpack$hpack, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__17_header_table_size->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__17_header_table_size = cache_frame_frame_hpack$hpack$$$function__17_header_table_size;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__17_header_table_size);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__17_header_table_size) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_value);
tmp_assattr_value_1 = par_value;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_header_table);
if (tmp_assattr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 457;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_maxsize, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_target_1);
Py_DECREF(tmp_assattr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 457;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__17_header_table_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__17_header_table_size->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__17_header_table_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__17_header_table_size,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__17_header_table_size == cache_frame_frame_hpack$hpack$$$function__17_header_table_size) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__17_header_table_size);
    cache_frame_frame_hpack$hpack$$$function__17_header_table_size = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__17_header_table_size);

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
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__18_decode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_raw = python_pars[2];
PyObject *var_headers = NULL;
PyObject *var_data_mem = NULL;
PyObject *var_data_len = NULL;
PyObject *var_inflated_size = NULL;
PyObject *var_current_index = NULL;
PyObject *var_current = NULL;
PyObject *var_indexed = NULL;
PyObject *var_literal_index = NULL;
PyObject *var_encoding_update = NULL;
PyObject *var_header = NULL;
PyObject *var_consumed = NULL;
PyObject *var_msg = NULL;
PyObject *var_err = NULL;
PyObject *outline_0_var_h = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__18_decode;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__18_decode = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__18_decode)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__18_decode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__18_decode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__18_decode = MAKE_FUNCTION_FRAME(tstate, code_objects_dd7cab87d92028bd0fc9b22aa78a4cf1, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__18_decode->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__18_decode = cache_frame_frame_hpack$hpack$$$function__18_decode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__18_decode);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__18_decode) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_hpack$hpack$log(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 474;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_b43da8fa8bb3fd9fbb97758107b3311b;
CHECK_OBJECT(par_data);
tmp_args_element_value_2 = par_data;
frame_frame_hpack$hpack$$$function__18_decode->m_frame.f_lineno = 474;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = (PyObject *)&PyMemoryView_Type;
CHECK_OBJECT(par_data);
tmp_args_element_value_3 = par_data;
frame_frame_hpack$hpack$$$function__18_decode->m_frame.f_lineno = 476;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_data_mem == NULL);
var_data_mem = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_headers == NULL);
var_headers = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_data);
tmp_len_arg_1 = par_data;
tmp_assign_source_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_data_len == NULL);
var_data_len = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = const_int_0;
assert(var_inflated_size == NULL);
Py_INCREF(tmp_assign_source_4);
var_inflated_size = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = const_int_0;
assert(var_current_index == NULL);
Py_INCREF(tmp_assign_source_5);
var_current_index = tmp_assign_source_5;
}
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (var_current_index == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 482;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = var_current_index;
CHECK_OBJECT(var_data_len);
tmp_cmp_expr_right_1 = var_data_len;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "oooooooooooooooo";
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
goto loop_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_data);
tmp_expression_value_1 = par_data;
if (var_current_index == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 485;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_1 = var_current_index;
tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_current;
    var_current = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_value_value_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
CHECK_OBJECT(var_current);
tmp_bitand_expr_left_1 = var_current;
tmp_bitand_expr_right_1 = mod_consts.const_int_pos_128;
tmp_value_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = (tmp_res != 0) ? Py_True : Py_False;
{
    PyObject *old = var_indexed;
    var_indexed = tmp_assign_source_7;
    Py_INCREF(var_indexed);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_value_value_2;
PyObject *tmp_bitand_expr_left_2;
PyObject *tmp_bitand_expr_right_2;
CHECK_OBJECT(var_current);
tmp_bitand_expr_left_2 = var_current;
tmp_bitand_expr_right_2 = mod_consts.const_int_pos_64;
tmp_value_value_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
if (tmp_value_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_2);
CHECK_OBJECT(tmp_value_value_2);
Py_DECREF(tmp_value_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = (tmp_res != 0) ? Py_True : Py_False;
{
    PyObject *old = var_literal_index;
    var_literal_index = tmp_assign_source_8;
    Py_INCREF(var_literal_index);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_value_value_3;
PyObject *tmp_bitand_expr_left_3;
PyObject *tmp_bitand_expr_right_3;
CHECK_OBJECT(var_current);
tmp_bitand_expr_left_3 = var_current;
tmp_bitand_expr_right_3 = mod_consts.const_int_pos_32;
tmp_value_value_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
if (tmp_value_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 494;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_3);
CHECK_OBJECT(tmp_value_value_3);
Py_DECREF(tmp_value_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 494;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = (tmp_res != 0) ? Py_True : Py_False;
{
    PyObject *old = var_encoding_update;
    var_encoding_update = tmp_assign_source_9;
    Py_INCREF(var_encoding_update);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
CHECK_OBJECT(var_indexed);
tmp_condition_result_2 = CHECK_IF_TRUE(var_indexed) == 1;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 497;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_2 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__decode_indexed);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_data_mem);
tmp_expression_value_3 = var_data_mem;
if (var_current_index == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 498;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_start_value_1 = var_current_index;
tmp_stop_value_1 = Py_None;
tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_2 == NULL));
tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 498;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_hpack$hpack$$$function__18_decode->m_frame.f_lineno = 497;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 497;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 497;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
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



exception_lineno = 497;
type_description_1 = "oooooooooooooooo";
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
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_header;
    var_header = tmp_assign_source_13;
    Py_INCREF(var_header);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_consumed;
    var_consumed = tmp_assign_source_14;
    Py_INCREF(var_consumed);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
CHECK_OBJECT(var_literal_index);
tmp_condition_result_3 = CHECK_IF_TRUE(var_literal_index) == 1;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
PyObject *tmp_start_value_2;
PyObject *tmp_stop_value_2;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 502;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_4 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__decode_literal_index);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 502;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_data_mem);
tmp_expression_value_5 = var_data_mem;
if (var_current_index == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 503;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}

tmp_start_value_2 = var_current_index;
tmp_stop_value_2 = Py_None;
tmp_subscript_value_3 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
assert(!(tmp_subscript_value_3 == NULL));
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 503;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
frame_frame_hpack$hpack$$$function__18_decode->m_frame.f_lineno = 502;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 502;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_15 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 502;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 502;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 502;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 502;
type_description_1 = "oooooooooooooooo";
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
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_header;
    var_header = tmp_assign_source_18;
    Py_INCREF(var_header);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_consumed;
    var_consumed = tmp_assign_source_19;
    Py_INCREF(var_consumed);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_4;
CHECK_OBJECT(var_encoding_update);
tmp_condition_result_4 = CHECK_IF_TRUE(var_encoding_update) == 1;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_1;
if (var_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 508;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(var_headers);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 508;
type_description_1 = "oooooooooooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_hpack$hpack$HPACKDecodingError(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HPACKDecodingError);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 510;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_hpack$hpack$$$function__18_decode->m_frame.f_lineno = 510;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_053811181c29a9dbcdf605936cf9901c_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 510;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_4;
PyObject *tmp_start_value_3;
PyObject *tmp_stop_value_3;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 511;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = par_self;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__update_encoding_context);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_data_mem);
tmp_expression_value_7 = var_data_mem;
if (var_current_index == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 512;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_start_value_3 = var_current_index;
tmp_stop_value_3 = Py_None;
tmp_subscript_value_4 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_3);
assert(!(tmp_subscript_value_4 == NULL));
tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 512;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_hpack$hpack$$$function__18_decode->m_frame.f_lineno = 511;
tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_consumed;
    var_consumed = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = Py_None;
{
    PyObject *old = var_header;
    var_header = tmp_assign_source_21;
    Py_INCREF(var_header);
    Py_XDECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_5;
PyObject *tmp_start_value_4;
PyObject *tmp_stop_value_4;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 517;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}

tmp_expression_value_8 = par_self;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__decode_literal_no_index);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_data_mem);
tmp_expression_value_9 = var_data_mem;
if (var_current_index == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 518;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}

tmp_start_value_4 = var_current_index;
tmp_stop_value_4 = Py_None;
tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_4, tmp_stop_value_4);
assert(!(tmp_subscript_value_5 == NULL));
tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 518;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}
frame_frame_hpack$hpack$$$function__18_decode->m_frame.f_lineno = 517;
tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_22 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_23 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 517;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_24 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 517;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 517;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_25 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_header;
    var_header = tmp_assign_source_25;
    Py_INCREF(var_header);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_26 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_consumed;
    var_consumed = tmp_assign_source_26;
    Py_INCREF(var_consumed);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

branch_end_4:;
branch_end_3:;
branch_end_2:;
{
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_2;
CHECK_OBJECT(var_header);
tmp_truth_name_2 = CHECK_IF_TRUE(var_header);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 522;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_1 = var_headers;
CHECK_OBJECT(var_header);
tmp_item_value_1 = var_header;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_6;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_7;
if (var_inflated_size == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_inflated_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 523;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_inflated_size;
tmp_called_value_7 = module_var_accessor_hpack$hpack$table_entry_size(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_table_entry_size);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 523;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_header);
tmp_expression_value_10 = var_header;
tmp_subscript_value_6 = const_int_0;
tmp_args_element_value_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_6, 0);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_header);
tmp_expression_value_11 = var_header;
tmp_subscript_value_7 = const_int_pos_1;
tmp_args_element_value_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_7, 1);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 523;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_hpack$hpack$$$function__18_decode->m_frame.f_lineno = 523;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_27 = tmp_iadd_expr_left_1;
var_inflated_size = tmp_assign_source_27;

}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_inflated_size);
tmp_cmp_expr_left_2 = var_inflated_size;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 525;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_max_header_list_size);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_3c4225932672426ba436b8a218a49b93;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 526;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}

tmp_expression_value_13 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_max_header_list_size);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_fd7644b030cf821de7f55a5be76bd5ec;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_28 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_28 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_28;
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_10;
tmp_called_value_8 = module_var_accessor_hpack$hpack$OversizedHeaderListError(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OversizedHeaderListError);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 527;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_msg);
tmp_args_element_value_10 = var_msg;
frame_frame_hpack$hpack$$$function__18_decode->m_frame.f_lineno = 527;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_10);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 527;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_7:;
branch_no_6:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
if (var_current_index == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current_index);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 529;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_2 = var_current_index;
CHECK_OBJECT(var_consumed);
tmp_iadd_expr_right_2 = var_consumed;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_29 = tmp_iadd_expr_left_2;
var_current_index = tmp_assign_source_29;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 534;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_2 = par_self;
frame_frame_hpack$hpack$$$function__18_decode->m_frame.f_lineno = 534;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__assert_valid_table_size);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_iter_arg_4;
if (var_headers == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 537;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}

tmp_iter_arg_4 = var_headers;
tmp_assign_source_30 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_31;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_32;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_32 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_32 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
exception_lineno = 537;
        goto try_except_handler_10;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_33;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_33 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_h;
    outline_0_var_h = tmp_assign_source_33;
    Py_INCREF(outline_0_var_h);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_value_9 = module_var_accessor_hpack$hpack$_unicode_if_needed(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unicode_if_needed);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 537;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(outline_0_var_h);
tmp_args_element_value_11 = outline_0_var_h;
if (par_raw == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_raw);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 537;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_10;
}

tmp_args_element_value_12 = par_raw;
frame_frame_hpack$hpack$$$function__18_decode->m_frame.f_lineno = 537;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_10;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_10;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_10;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_return_value = tmp_listcomp_1__contraction;
Py_INCREF(tmp_return_value);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
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
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
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

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_XDECREF(outline_0_var_h);
outline_0_var_h = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_h);
outline_0_var_h = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 537;
goto try_except_handler_8;
outline_result_1:;
goto frame_return_exit_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__18_decode, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__18_decode, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_9);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_UnicodeDecodeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_34); 
assert(var_err == NULL);
Py_INCREF(tmp_assign_source_34);
var_err = tmp_assign_source_34;
}
// Tried code:
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_10;
PyObject *tmp_raise_cause_1;
tmp_called_value_10 = module_var_accessor_hpack$hpack$HPACKDecodingError(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HPACKDecodingError);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 540;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_12;
}
frame_frame_hpack$hpack$$$function__18_decode->m_frame.f_lineno = 540;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_digest_d818d7b7b44b409b63bf1eedbb1a660d_tuple);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 540;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_12;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 540;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(var_err);
tmp_raise_cause_1 = var_err;
exception_state.exception_value = tmp_raise_type_3;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 540;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooooooooo";
goto try_except_handler_12;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_err);
var_err = NULL;

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
goto branch_end_8;
branch_no_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 536;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_hpack$hpack$$$function__18_decode->m_frame)) {
        frame_frame_hpack$hpack$$$function__18_decode->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooo";
goto try_except_handler_11;
branch_end_8:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__18_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__18_decode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__18_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__18_decode,
    type_description_1,
    par_self,
    par_data,
    par_raw,
    var_headers,
    var_data_mem,
    var_data_len,
    var_inflated_size,
    var_current_index,
    var_current,
    var_indexed,
    var_literal_index,
    var_encoding_update,
    var_header,
    var_consumed,
    var_msg,
    var_err
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__18_decode == cache_frame_frame_hpack$hpack$$$function__18_decode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__18_decode);
    cache_frame_frame_hpack$hpack$$$function__18_decode = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__18_decode);

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
CHECK_OBJECT(var_data_mem);
CHECK_OBJECT(var_data_mem);
Py_DECREF(var_data_mem);
var_data_mem = NULL;
CHECK_OBJECT(var_data_len);
CHECK_OBJECT(var_data_len);
Py_DECREF(var_data_len);
var_data_len = NULL;
Py_XDECREF(var_inflated_size);
var_inflated_size = NULL;
Py_XDECREF(var_current_index);
var_current_index = NULL;
Py_XDECREF(var_current);
var_current = NULL;
Py_XDECREF(var_indexed);
var_indexed = NULL;
Py_XDECREF(var_literal_index);
var_literal_index = NULL;
Py_XDECREF(var_encoding_update);
var_encoding_update = NULL;
Py_XDECREF(var_header);
var_header = NULL;
Py_XDECREF(var_consumed);
var_consumed = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_data_mem);
var_data_mem = NULL;
Py_XDECREF(var_data_len);
var_data_len = NULL;
Py_XDECREF(var_inflated_size);
var_inflated_size = NULL;
Py_XDECREF(var_current_index);
var_current_index = NULL;
Py_XDECREF(var_current);
var_current = NULL;
Py_XDECREF(var_indexed);
var_indexed = NULL;
Py_XDECREF(var_literal_index);
var_literal_index = NULL;
Py_XDECREF(var_encoding_update);
var_encoding_update = NULL;
Py_XDECREF(var_header);
var_header = NULL;
Py_XDECREF(var_consumed);
var_consumed = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_raw);
Py_DECREF(par_raw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_raw);
Py_DECREF(par_raw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__19__assert_valid_table_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__19__assert_valid_table_size;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__19__assert_valid_table_size = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__19__assert_valid_table_size)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__19__assert_valid_table_size);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__19__assert_valid_table_size == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__19__assert_valid_table_size = MAKE_FUNCTION_FRAME(tstate, code_objects_97171a9f68f9db0079eb660ee364bf67, module_hpack$hpack, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__19__assert_valid_table_size->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__19__assert_valid_table_size = cache_frame_frame_hpack$hpack$$$function__19__assert_valid_table_size;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__19__assert_valid_table_size);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__19__assert_valid_table_size) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_header_table_size);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_max_allowed_table_size);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 547;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "oN";
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
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_hpack$hpack$InvalidTableSizeError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidTableSizeError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 549;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
frame_frame_hpack$hpack$$$function__19__assert_valid_table_size->m_frame.f_lineno = 549;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_ed878ced6e5ca9fd5baff8bd26498978_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 549;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__19__assert_valid_table_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__19__assert_valid_table_size->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__19__assert_valid_table_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__19__assert_valid_table_size,
    type_description_1,
    par_self,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__19__assert_valid_table_size == cache_frame_frame_hpack$hpack$$$function__19__assert_valid_table_size) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__19__assert_valid_table_size);
    cache_frame_frame_hpack$hpack$$$function__19__assert_valid_table_size = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__19__assert_valid_table_size);

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


static PyObject *impl_hpack$hpack$$$function__20__update_encoding_context(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *var_new_size = NULL;
PyObject *var_consumed = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__20__update_encoding_context;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__20__update_encoding_context = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__20__update_encoding_context)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__20__update_encoding_context);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__20__update_encoding_context == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__20__update_encoding_context = MAKE_FUNCTION_FRAME(tstate, code_objects_abbe2999c775fd9dcda72a16492aec3d, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__20__update_encoding_context->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__20__update_encoding_context = cache_frame_frame_hpack$hpack$$$function__20__update_encoding_context;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__20__update_encoding_context);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__20__update_encoding_context) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_hpack$hpack$decode_integer(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decode_integer);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 556;
type_description_1 = "ooooN";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_1 = par_data;
tmp_args_element_value_2 = mod_consts.const_int_pos_5;
frame_frame_hpack$hpack$$$function__20__update_encoding_context->m_frame.f_lineno = 556;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;
type_description_1 = "ooooN";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;
type_description_1 = "ooooN";
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



exception_lineno = 556;
type_description_1 = "ooooN";
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



exception_lineno = 556;
type_description_1 = "ooooN";
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



exception_lineno = 556;
type_description_1 = "ooooN";
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
assert(var_new_size == NULL);
Py_INCREF(tmp_assign_source_4);
var_new_size = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_consumed == NULL);
Py_INCREF(tmp_assign_source_5);
var_consumed = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_new_size);
tmp_cmp_expr_left_1 = var_new_size;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_max_allowed_table_size);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
type_description_1 = "ooooN";
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
tmp_called_value_2 = module_var_accessor_hpack$hpack$InvalidTableSizeError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidTableSizeError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 559;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
frame_frame_hpack$hpack$$$function__20__update_encoding_context->m_frame.f_lineno = 559;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_5c2d99091d2262d861f3744cc9188ed2_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 559;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooN";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_new_size);
tmp_assattr_value_1 = var_new_size;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_header_table_size, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__20__update_encoding_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__20__update_encoding_context->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__20__update_encoding_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__20__update_encoding_context,
    type_description_1,
    par_self,
    par_data,
    var_new_size,
    var_consumed,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__20__update_encoding_context == cache_frame_frame_hpack$hpack$$$function__20__update_encoding_context) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__20__update_encoding_context);
    cache_frame_frame_hpack$hpack$$$function__20__update_encoding_context = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__20__update_encoding_context);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_consumed);
tmp_return_value = var_consumed;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_new_size);
CHECK_OBJECT(var_new_size);
Py_DECREF(var_new_size);
var_new_size = NULL;
CHECK_OBJECT(var_consumed);
CHECK_OBJECT(var_consumed);
Py_DECREF(var_consumed);
var_consumed = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_new_size);
var_new_size = NULL;
Py_XDECREF(var_consumed);
var_consumed = NULL;
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
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__21__decode_indexed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *var_index = NULL;
PyObject *var_consumed = NULL;
PyObject *var_header = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__21__decode_indexed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__21__decode_indexed = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__21__decode_indexed)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__21__decode_indexed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__21__decode_indexed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__21__decode_indexed = MAKE_FUNCTION_FRAME(tstate, code_objects_7442bf495182186c45b88bae4d3c21e0, module_hpack$hpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__21__decode_indexed->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__21__decode_indexed = cache_frame_frame_hpack$hpack$$$function__21__decode_indexed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__21__decode_indexed);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__21__decode_indexed) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_hpack$hpack$decode_integer(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decode_integer);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 567;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_1 = par_data;
tmp_args_element_value_2 = mod_consts.const_int_pos_7;
frame_frame_hpack$hpack$$$function__21__decode_indexed->m_frame.f_lineno = 567;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
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



exception_lineno = 567;
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



exception_lineno = 567;
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



exception_lineno = 567;
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
assert(var_index == NULL);
Py_INCREF(tmp_assign_source_4);
var_index = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_consumed == NULL);
Py_INCREF(tmp_assign_source_5);
var_consumed = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_6;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
tmp_direct_call_arg1_1 = module_var_accessor_hpack$hpack$HeaderTuple(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HeaderTuple);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 568;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_header_table);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_index);
tmp_args_element_value_3 = var_index;
frame_frame_hpack$hpack$$$function__21__decode_indexed->m_frame.f_lineno = 568;
tmp_direct_call_arg2_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_by_index, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_direct_call_arg2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_6 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_header == NULL);
var_header = tmp_assign_source_6;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_instance_2 = module_var_accessor_hpack$hpack$log(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 569;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_digest_9dce69ffc18d9491b1104d68d2108cee;
CHECK_OBJECT(var_header);
tmp_args_element_value_5 = var_header;
CHECK_OBJECT(var_consumed);
tmp_args_element_value_6 = var_consumed;
frame_frame_hpack$hpack$$$function__21__decode_indexed->m_frame.f_lineno = 569;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 569;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__21__decode_indexed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__21__decode_indexed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__21__decode_indexed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__21__decode_indexed,
    type_description_1,
    par_self,
    par_data,
    var_index,
    var_consumed,
    var_header
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__21__decode_indexed == cache_frame_frame_hpack$hpack$$$function__21__decode_indexed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__21__decode_indexed);
    cache_frame_frame_hpack$hpack$$$function__21__decode_indexed = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__21__decode_indexed);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_header);
tmp_tuple_element_1 = var_header;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_consumed);
tmp_tuple_element_1 = var_consumed;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_index);
CHECK_OBJECT(var_index);
Py_DECREF(var_index);
var_index = NULL;
CHECK_OBJECT(var_consumed);
CHECK_OBJECT(var_consumed);
Py_DECREF(var_consumed);
var_consumed = NULL;
CHECK_OBJECT(var_header);
CHECK_OBJECT(var_header);
Py_DECREF(var_header);
var_header = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_index);
var_index = NULL;
Py_XDECREF(var_consumed);
var_consumed = NULL;
Py_XDECREF(var_header);
var_header = NULL;
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
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__22__decode_literal_no_index(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__22__decode_literal_no_index;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__22__decode_literal_no_index = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__22__decode_literal_no_index)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__22__decode_literal_no_index);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__22__decode_literal_no_index == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__22__decode_literal_no_index = MAKE_FUNCTION_FRAME(tstate, code_objects_31fd0cdb03884056ba88d78076b7ee9e, module_hpack$hpack, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__22__decode_literal_no_index->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__22__decode_literal_no_index = cache_frame_frame_hpack$hpack$$$function__22__decode_literal_no_index;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__22__decode_literal_no_index);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__22__decode_literal_no_index) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__decode_literal);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_tuple_element_1 = par_data;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_1547285892d7db7353148a938c62027a);
frame_frame_hpack$hpack$$$function__22__decode_literal_no_index->m_frame.f_lineno = 573;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__22__decode_literal_no_index, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__22__decode_literal_no_index->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__22__decode_literal_no_index, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__22__decode_literal_no_index,
    type_description_1,
    par_self,
    par_data
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__22__decode_literal_no_index == cache_frame_frame_hpack$hpack$$$function__22__decode_literal_no_index) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__22__decode_literal_no_index);
    cache_frame_frame_hpack$hpack$$$function__22__decode_literal_no_index = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__22__decode_literal_no_index);

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
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__23__decode_literal_index(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__23__decode_literal_index;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__23__decode_literal_index = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__23__decode_literal_index)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__23__decode_literal_index);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__23__decode_literal_index == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__23__decode_literal_index = MAKE_FUNCTION_FRAME(tstate, code_objects_712aa36d626406dab77582551a423fe8, module_hpack$hpack, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__23__decode_literal_index->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__23__decode_literal_index = cache_frame_frame_hpack$hpack$$$function__23__decode_literal_index;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__23__decode_literal_index);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__23__decode_literal_index) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__decode_literal);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_tuple_element_1 = par_data;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_6a333c6640e0851c6f53523200b19d65);
frame_frame_hpack$hpack$$$function__23__decode_literal_index->m_frame.f_lineno = 576;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__23__decode_literal_index, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__23__decode_literal_index->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__23__decode_literal_index, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__23__decode_literal_index,
    type_description_1,
    par_self,
    par_data
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__23__decode_literal_index == cache_frame_frame_hpack$hpack$$$function__23__decode_literal_index) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__23__decode_literal_index);
    cache_frame_frame_hpack$hpack$$$function__23__decode_literal_index = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__23__decode_literal_index);

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
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_hpack$hpack$$$function__24__decode_literal(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_should_index = python_pars[2];
PyObject *var_header = NULL;
PyObject *var_total_consumed = NULL;
PyObject *var_indexed_name = NULL;
PyObject *var_name_len = NULL;
nuitka_bool var_not_indexable = NUITKA_BOOL_UNASSIGNED;
PyObject *var_high_byte = NULL;
PyObject *var_index = NULL;
PyObject *var_consumed = NULL;
PyObject *var_name = NULL;
PyObject *var_length = NULL;
PyObject *var_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$function__24__decode_literal;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_hpack$hpack$$$function__24__decode_literal = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_int_0;
assert(var_total_consumed == NULL);
Py_INCREF(tmp_assign_source_1);
var_total_consumed = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_hpack$hpack$$$function__24__decode_literal)) {
    Py_XDECREF(cache_frame_frame_hpack$hpack$$$function__24__decode_literal);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_hpack$hpack$$$function__24__decode_literal == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_hpack$hpack$$$function__24__decode_literal = MAKE_FUNCTION_FRAME(tstate, code_objects_7d8a31576dd40c6a762071651295a1fd, module_hpack$hpack, sizeof(void *)+sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_hpack$hpack$$$function__24__decode_literal->m_type_description == NULL);
frame_frame_hpack$hpack$$$function__24__decode_literal = cache_frame_frame_hpack$hpack$$$function__24__decode_literal;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$function__24__decode_literal);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$function__24__decode_literal) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_should_index);
tmp_truth_name_1 = CHECK_IF_TRUE(par_should_index);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_1 = "oooooooboooooNo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_data);
tmp_expression_value_1 = par_data;
tmp_subscript_value_1 = const_int_0;
tmp_bitand_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = mod_consts.const_int_pos_63;
tmp_assign_source_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
assert(var_indexed_name == NULL);
var_indexed_name = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = mod_consts.const_int_pos_6;
assert(var_name_len == NULL);
Py_INCREF(tmp_assign_source_3);
var_name_len = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_FALSE;
var_not_indexable = tmp_assign_source_4;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_data);
tmp_expression_value_2 = par_data;
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
assert(var_high_byte == NULL);
var_high_byte = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_bitand_expr_left_2;
PyObject *tmp_bitand_expr_right_2;
CHECK_OBJECT(var_high_byte);
tmp_bitand_expr_left_2 = var_high_byte;
tmp_bitand_expr_right_2 = mod_consts.const_int_pos_15;
tmp_assign_source_6 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
assert(var_indexed_name == NULL);
var_indexed_name = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = mod_consts.const_int_pos_4;
assert(var_name_len == NULL);
Py_INCREF(tmp_assign_source_7);
var_name_len = tmp_assign_source_7;
}
{
nuitka_bool tmp_assign_source_8;
PyObject *tmp_value_value_1;
PyObject *tmp_bitand_expr_left_3;
PyObject *tmp_bitand_expr_right_3;
CHECK_OBJECT(var_high_byte);
tmp_bitand_expr_left_3 = var_high_byte;
tmp_bitand_expr_right_3 = mod_consts.const_int_pos_16;
tmp_value_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
var_not_indexable = tmp_assign_source_8;
}
branch_end_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_indexed_name);
tmp_truth_name_2 = CHECK_IF_TRUE(var_indexed_name);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 598;
type_description_1 = "oooooooboooooNo";
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
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_hpack$hpack$decode_integer(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decode_integer);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 600;
type_description_1 = "oooooooboooooNo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_1 = par_data;
CHECK_OBJECT(var_name_len);
tmp_args_element_value_2 = var_name_len;
frame_frame_hpack$hpack$$$function__24__decode_literal->m_frame.f_lineno = 600;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;
type_description_1 = "oooooooboooooNo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;
type_description_1 = "oooooooboooooNo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 600;
type_description_1 = "oooooooboooooNo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 600;
type_description_1 = "oooooooboooooNo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 600;
type_description_1 = "oooooooboooooNo";
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
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
assert(var_index == NULL);
Py_INCREF(tmp_assign_source_12);
var_index = tmp_assign_source_12;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
assert(var_consumed == NULL);
Py_INCREF(tmp_assign_source_13);
var_consumed = tmp_assign_source_13;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_header_table);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 601;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_index);
tmp_args_element_value_3 = var_index;
frame_frame_hpack$hpack$$$function__24__decode_literal->m_frame.f_lineno = 601;
tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_by_index, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 601;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = const_int_0;
tmp_assign_source_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, 0);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 601;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
assert(var_name == NULL);
var_name = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(var_consumed);
tmp_assign_source_15 = var_consumed;
{
    PyObject *old = var_total_consumed;
    assert(old != NULL);
    var_total_consumed = tmp_assign_source_15;
    Py_INCREF(var_total_consumed);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = const_int_0;
assert(var_length == NULL);
Py_INCREF(tmp_assign_source_16);
var_length = tmp_assign_source_16;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_data);
tmp_expression_value_5 = par_data;
tmp_subscript_value_4 = mod_consts.const_slice_int_pos_1_none_none;
tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_4);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 608;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_data;
    assert(old != NULL);
    par_data = tmp_assign_source_17;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_2 = module_var_accessor_hpack$hpack$decode_integer(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decode_integer);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 610;
type_description_1 = "oooooooboooooNo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_4 = par_data;
tmp_args_element_value_5 = mod_consts.const_int_pos_7;
frame_frame_hpack$hpack$$$function__24__decode_literal->m_frame.f_lineno = 610;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 610;
type_description_1 = "oooooooboooooNo";
    goto try_except_handler_4;
}
tmp_assign_source_18 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 610;
type_description_1 = "oooooooboooooNo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 610;
type_description_1 = "oooooooboooooNo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 610;
type_description_1 = "oooooooboooooNo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_20;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 610;
type_description_1 = "oooooooboooooNo";
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
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_21 = tmp_tuple_unpack_2__element_1;
assert(var_length == NULL);
Py_INCREF(tmp_assign_source_21);
var_length = tmp_assign_source_21;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_22 = tmp_tuple_unpack_2__element_2;
assert(var_consumed == NULL);
Py_INCREF(tmp_assign_source_22);
var_consumed = tmp_assign_source_22;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_23;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_5;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(par_data);
tmp_expression_value_6 = par_data;
CHECK_OBJECT(var_consumed);
tmp_start_value_1 = var_consumed;
CHECK_OBJECT(var_consumed);
tmp_add_expr_left_1 = var_consumed;
CHECK_OBJECT(var_length);
tmp_add_expr_right_1 = var_length;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 611;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_5 == NULL));
tmp_assign_source_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 611;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
assert(var_name == NULL);
var_name = tmp_assign_source_23;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_name);
tmp_len_arg_1 = var_name;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_length);
tmp_cmp_expr_right_1 = var_length;
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "oooooooboooooNo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_hpack$hpack$HPACKDecodingError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HPACKDecodingError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 614;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
frame_frame_hpack$hpack$$$function__24__decode_literal->m_frame.f_lineno = 614;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_fd799b52e91ac37dd1ec80ffe92971d5_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 614;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 614;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 614;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooboooooNo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_bitand_expr_left_4;
PyObject *tmp_bitand_expr_right_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(par_data);
tmp_expression_value_7 = par_data;
tmp_subscript_value_6 = const_int_0;
tmp_bitand_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_6, 0);
if (tmp_bitand_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_4 = mod_consts.const_int_pos_128;
tmp_condition_result_4 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
CHECK_OBJECT(tmp_bitand_expr_left_4);
Py_DECREF(tmp_bitand_expr_left_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "oooooooboooooNo";
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
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
tmp_called_value_4 = module_var_accessor_hpack$hpack$decode_huffman(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decode_huffman);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 617;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_6 = var_name;
frame_frame_hpack$hpack$$$function__24__decode_literal->m_frame.f_lineno = 617;
tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 617;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_name;
    assert(old != NULL);
    var_name = tmp_assign_source_24;
    Py_DECREF(old);
}

}
branch_no_4:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
CHECK_OBJECT(var_consumed);
tmp_add_expr_left_3 = var_consumed;
CHECK_OBJECT(var_length);
tmp_add_expr_right_3 = var_length;
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 618;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = const_int_pos_1;
tmp_assign_source_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 618;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_total_consumed;
    assert(old != NULL);
    var_total_consumed = tmp_assign_source_25;
    Py_DECREF(old);
}

}
branch_end_2:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_7;
PyObject *tmp_start_value_2;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_stop_value_2;
if (par_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 620;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = par_data;
if (var_consumed == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_consumed);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 620;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_4 = var_consumed;
if (var_length == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_length);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 620;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}

tmp_add_expr_right_4 = var_length;
tmp_start_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_start_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_stop_value_2 = Py_None;
tmp_subscript_value_7 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
CHECK_OBJECT(tmp_start_value_2);
Py_DECREF(tmp_start_value_2);
assert(!(tmp_subscript_value_7 == NULL));
tmp_assign_source_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_7);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_data;
    par_data = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_5 = module_var_accessor_hpack$hpack$decode_integer(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decode_integer);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 623;
type_description_1 = "oooooooboooooNo";
    goto try_except_handler_6;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_7 = par_data;
tmp_args_element_value_8 = mod_consts.const_int_pos_7;
frame_frame_hpack$hpack$$$function__24__decode_literal->m_frame.f_lineno = 623;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 623;
type_description_1 = "oooooooboooooNo";
    goto try_except_handler_6;
}
tmp_assign_source_27 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 623;
type_description_1 = "oooooooboooooNo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_3__source_iter == NULL);
tmp_tuple_unpack_3__source_iter = tmp_assign_source_27;
}
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_28 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 623;
type_description_1 = "oooooooboooooNo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_1 == NULL);
tmp_tuple_unpack_3__element_1 = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_29 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 623;
type_description_1 = "oooooooboooooNo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_2 == NULL);
tmp_tuple_unpack_3__element_2 = tmp_assign_source_29;
}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 623;
type_description_1 = "oooooooboooooNo";
    goto try_except_handler_7;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_30;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_30 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_length;
    var_length = tmp_assign_source_30;
    Py_INCREF(var_length);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_31;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_31 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_consumed;
    var_consumed = tmp_assign_source_31;
    Py_INCREF(var_consumed);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_32;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_8;
PyObject *tmp_start_value_3;
PyObject *tmp_stop_value_3;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
CHECK_OBJECT(par_data);
tmp_expression_value_9 = par_data;
CHECK_OBJECT(var_consumed);
tmp_start_value_3 = var_consumed;
CHECK_OBJECT(var_consumed);
tmp_add_expr_left_5 = var_consumed;
CHECK_OBJECT(var_length);
tmp_add_expr_right_5 = var_length;
tmp_stop_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
if (tmp_stop_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 624;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_8 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_3);
CHECK_OBJECT(tmp_stop_value_3);
Py_DECREF(tmp_stop_value_3);
assert(!(tmp_subscript_value_8 == NULL));
tmp_assign_source_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 624;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
assert(var_value == NULL);
var_value = tmp_assign_source_32;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var_value);
tmp_len_arg_2 = var_value;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_length);
tmp_cmp_expr_right_2 = var_length;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_6;
tmp_called_value_6 = module_var_accessor_hpack$hpack$HPACKDecodingError(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HPACKDecodingError);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 627;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
frame_frame_hpack$hpack$$$function__24__decode_literal->m_frame.f_lineno = 627;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_fd799b52e91ac37dd1ec80ffe92971d5_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 627;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 627;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 627;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooboooooNo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_bitand_expr_left_5;
PyObject *tmp_bitand_expr_right_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_9;
CHECK_OBJECT(par_data);
tmp_expression_value_10 = par_data;
tmp_subscript_value_9 = const_int_0;
tmp_bitand_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_9, 0);
if (tmp_bitand_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 629;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_5 = mod_consts.const_int_pos_128;
tmp_condition_result_6 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_bitand_expr_left_5, tmp_bitand_expr_right_5);
CHECK_OBJECT(tmp_bitand_expr_left_5);
Py_DECREF(tmp_bitand_expr_left_5);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 629;
type_description_1 = "oooooooboooooNo";
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
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_9;
tmp_called_value_7 = module_var_accessor_hpack$hpack$decode_huffman(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decode_huffman);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 630;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_value);
tmp_args_element_value_9 = var_value;
frame_frame_hpack$hpack$$$function__24__decode_literal->m_frame.f_lineno = 630;
tmp_assign_source_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_9);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 630;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_value;
    assert(old != NULL);
    var_value = tmp_assign_source_33;
    Py_DECREF(old);
}

}
branch_no_6:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
CHECK_OBJECT(var_total_consumed);
tmp_iadd_expr_left_1 = var_total_consumed;
CHECK_OBJECT(var_length);
tmp_add_expr_left_6 = var_length;
CHECK_OBJECT(var_consumed);
tmp_add_expr_right_6 = var_consumed;
tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 633;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 633;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_assign_source_34 = tmp_iadd_expr_left_1;
var_total_consumed = tmp_assign_source_34;

}
{
bool tmp_condition_result_7;
assert(var_not_indexable != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_7 = var_not_indexable == NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_8 = module_var_accessor_hpack$hpack$NeverIndexedHeaderTuple(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NeverIndexedHeaderTuple);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 639;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
if (var_name == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 639;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_10 = var_name;
if (var_value == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 639;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_11 = var_value;
frame_frame_hpack$hpack$$$function__24__decode_literal->m_frame.f_lineno = 639;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 639;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
assert(var_header == NULL);
var_header = tmp_assign_source_35;
}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_called_value_9 = module_var_accessor_hpack$hpack$HeaderTuple(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HeaderTuple);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 641;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
if (var_name == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 641;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_12 = var_name;
if (var_value == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 641;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_13 = var_value;
frame_frame_hpack$hpack$$$function__24__decode_literal->m_frame.f_lineno = 641;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 641;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
assert(var_header == NULL);
var_header = tmp_assign_source_36;
}
branch_end_7:;
{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_3;
CHECK_OBJECT(par_should_index);
tmp_truth_name_3 = CHECK_IF_TRUE(par_should_index);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_header_table);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 645;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_add);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 645;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
if (var_name == NULL) {
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 645;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_14 = var_name;
if (var_value == NULL) {
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 645;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_15 = var_value;
frame_frame_hpack$hpack$$$function__24__decode_literal->m_frame.f_lineno = 645;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 645;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_8:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
tmp_called_instance_2 = module_var_accessor_hpack$hpack$log(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 647;
type_description_1 = "oooooooboooooNo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_16 = mod_consts.const_str_digest_230ea324240e9e21d19830ba6a999fb4;
CHECK_OBJECT(var_header);
tmp_args_element_value_17 = var_header;
CHECK_OBJECT(var_total_consumed);
tmp_args_element_value_18 = var_total_consumed;
CHECK_OBJECT(par_should_index);
tmp_args_element_value_19 = par_should_index;
frame_frame_hpack$hpack$$$function__24__decode_literal->m_frame.f_lineno = 647;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 647;
type_description_1 = "oooooooboooooNo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$function__24__decode_literal, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$function__24__decode_literal->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$function__24__decode_literal, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$function__24__decode_literal,
    type_description_1,
    par_self,
    par_data,
    par_should_index,
    var_header,
    var_total_consumed,
    var_indexed_name,
    var_name_len,
    (int)var_not_indexable,
    var_high_byte,
    var_index,
    var_consumed,
    var_name,
    var_length,
    NULL,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_hpack$hpack$$$function__24__decode_literal == cache_frame_frame_hpack$hpack$$$function__24__decode_literal) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_hpack$hpack$$$function__24__decode_literal);
    cache_frame_frame_hpack$hpack$$$function__24__decode_literal = NULL;
}

assertFrameObject(frame_frame_hpack$hpack$$$function__24__decode_literal);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_header);
tmp_tuple_element_1 = var_header;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_total_consumed);
tmp_tuple_element_1 = var_total_consumed;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_data);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
par_data = NULL;
CHECK_OBJECT(var_header);
CHECK_OBJECT(var_header);
Py_DECREF(var_header);
var_header = NULL;
CHECK_OBJECT(var_total_consumed);
CHECK_OBJECT(var_total_consumed);
Py_DECREF(var_total_consumed);
var_total_consumed = NULL;
CHECK_OBJECT(var_indexed_name);
CHECK_OBJECT(var_indexed_name);
Py_DECREF(var_indexed_name);
var_indexed_name = NULL;
CHECK_OBJECT(var_name_len);
CHECK_OBJECT(var_name_len);
Py_DECREF(var_name_len);
var_name_len = NULL;
assert(var_not_indexable != NUITKA_BOOL_UNASSIGNED);
var_not_indexable = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_high_byte);
var_high_byte = NULL;
Py_XDECREF(var_index);
var_index = NULL;
CHECK_OBJECT(var_consumed);
CHECK_OBJECT(var_consumed);
Py_DECREF(var_consumed);
var_consumed = NULL;
Py_XDECREF(var_name);
var_name = NULL;
CHECK_OBJECT(var_length);
CHECK_OBJECT(var_length);
Py_DECREF(var_length);
var_length = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_data);
par_data = NULL;
Py_XDECREF(var_header);
var_header = NULL;
Py_XDECREF(var_total_consumed);
var_total_consumed = NULL;
Py_XDECREF(var_indexed_name);
var_indexed_name = NULL;
Py_XDECREF(var_name_len);
var_name_len = NULL;
var_not_indexable = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_high_byte);
var_high_byte = NULL;
Py_XDECREF(var_index);
var_index = NULL;
Py_XDECREF(var_consumed);
var_consumed = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_length);
var_length = NULL;
Py_XDECREF(var_value);
var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_should_index);
Py_DECREF(par_should_index);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_should_index);
Py_DECREF(par_should_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__10_add(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__10_add,
        mod_consts.const_str_plain_add,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4ec6c780ba451bdf6fe42df4fd019490,
#endif
        code_objects_654ab6c65c9af1e28b7aa41666c4fe48,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_7759e8af4a64ad23081ce8861e0a20e9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__11__encode_indexed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__11__encode_indexed,
        mod_consts.const_str_plain__encode_indexed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_22a85a360c0aa4b71c938fd080a956df,
#endif
        code_objects_265651311c308b92a430a193e9b25d68,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_f9fb55024b65a4f9c1b720cbb5b0b7b4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__12__encode_literal(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__12__encode_literal,
        mod_consts.const_str_plain__encode_literal,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4a0cfd77ab65422c2ae82712194a998c,
#endif
        code_objects_f3acd727f7d4db0a5f6e8e66cded7460,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_5093c17c13487e48c0f1b1aeee84cc99,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__13__encode_indexed_literal(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__13__encode_indexed_literal,
        mod_consts.const_str_plain__encode_indexed_literal,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b77e9fab699d568837cce9efcd146e6a,
#endif
        code_objects_b5f67f7f07507d6ffffe181598970976,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_a9b8ce4b139e09390c9a796cc297a694,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__14__encode_table_size_change(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__14__encode_table_size_change,
        mod_consts.const_str_plain__encode_table_size_change,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7720db71e854d3e38bea887fdb62db3d,
#endif
        code_objects_8402f313c69c2559c011b93cee09fc98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_d1a87b58276f8f39c2d751c699ef4502,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__15___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7161173fdbbfd6e0f506033b40ff2b4b,
#endif
        code_objects_d8725ba82275be4d5c945535937822a9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__16_header_table_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__16_header_table_size,
        mod_consts.const_str_plain_header_table_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_64f8001d65f8c43fe3613be59594da2c,
#endif
        code_objects_1b4994c63c1e62641192daa8116a30ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_8514096279fdceba1dfa5f9c0227b251,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__17_header_table_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__17_header_table_size,
        mod_consts.const_str_plain_header_table_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_64f8001d65f8c43fe3613be59594da2c,
#endif
        code_objects_0005af3fdb3f7c204a0cfa0d819541ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__18_decode(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__18_decode,
        mod_consts.const_str_plain_decode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fc0cba5f33dac362384abb1dbfb60492,
#endif
        code_objects_dd7cab87d92028bd0fc9b22aa78a4cf1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_0c862fbbabd3a97c26a62541064a6a6d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__19__assert_valid_table_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__19__assert_valid_table_size,
        mod_consts.const_str_plain__assert_valid_table_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_84768170be60180f481fa88f51d07087,
#endif
        code_objects_97171a9f68f9db0079eb660ee364bf67,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_2b32591dcb478f878f5f1945fd9f51b4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__1__unicode_if_needed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__1__unicode_if_needed,
        mod_consts.const_str_plain__unicode_if_needed,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_28b0113041fb517e1556070b6e72072d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_a3a4c5beeb969ca27bf3f3f39b5115e8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__20__update_encoding_context(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__20__update_encoding_context,
        mod_consts.const_str_plain__update_encoding_context,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_736ac0cc6205de605f69aa66121386f6,
#endif
        code_objects_abbe2999c775fd9dcda72a16492aec3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_4d9395c23fbfc19894dd7ff72e691993,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__21__decode_indexed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__21__decode_indexed,
        mod_consts.const_str_plain__decode_indexed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_362f9a5e4cfc69a11681b782a32d2d19,
#endif
        code_objects_7442bf495182186c45b88bae4d3c21e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_591f4b84c1a24524285db8bf93e184b1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__22__decode_literal_no_index(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__22__decode_literal_no_index,
        mod_consts.const_str_plain__decode_literal_no_index,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f4a0142124e8ce23f62c71525d0aca0a,
#endif
        code_objects_31fd0cdb03884056ba88d78076b7ee9e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__23__decode_literal_index(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__23__decode_literal_index,
        mod_consts.const_str_plain__decode_literal_index,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_15474a4ea61236f626ebe5ef33b4fca1,
#endif
        code_objects_712aa36d626406dab77582551a423fe8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__24__decode_literal(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__24__decode_literal,
        mod_consts.const_str_plain__decode_literal,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2974c28231854d9a78e786f61ac8dede,
#endif
        code_objects_7d8a31576dd40c6a762071651295a1fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_2c930042287ef8df4a957036119a1ba2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__2_encode_integer(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__2_encode_integer,
        mod_consts.const_str_plain_encode_integer,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d32efed2cd31d06cc04c20e41f6b4aa8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_33d9b4637e3850f8b83c68cc895a895c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__3_decode_integer(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__3_decode_integer,
        mod_consts.const_str_plain_decode_integer,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b00c61c2b4a5770ca40f37bab6ff2feb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_d6f4b216690ff262d3a76e5fbddcc6be,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__4__dict_to_iterable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__4__dict_to_iterable,
        mod_consts.const_str_plain__dict_to_iterable,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a5e0a93a14f5225c87080c051f4c24fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_b6d4211b536d4465b3fd167f7c7c1e16,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0668512dc9ee5ad667f56a15494321f7,
#endif
        code_objects_1bd461859a2c47edac1fe85bd5003f85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_hpack$hpack,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__5__to_bytes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__5__to_bytes,
        mod_consts.const_str_plain__to_bytes,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f474e9ffecba460b548c93155d908c51,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_8b8d33443997c17abea71f9c5f05e605,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__6___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6189bbf481f42d2a1c405563357dac3e,
#endif
        code_objects_940e533858f1ab7bfa583e9e0d8175e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__7_header_table_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__7_header_table_size,
        mod_consts.const_str_plain_header_table_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_25eb476814d7db6fce6860a897f6367d,
#endif
        code_objects_6e156678a500cfa13e4a505b3854f325,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_8514096279fdceba1dfa5f9c0227b251,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__8_header_table_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__8_header_table_size,
        mod_consts.const_str_plain_header_table_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_25eb476814d7db6fce6860a897f6367d,
#endif
        code_objects_3e01d59ebcf40ec30ab96ad6455bc0fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_hpack$hpack$$$function__9_encode(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_hpack$hpack$$$function__9_encode,
        mod_consts.const_str_plain_encode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_77cf3f64c07f68a1550c958f491cbb85,
#endif
        code_objects_5c4b07147d2a43d785fa6ab52b3ea70b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_hpack$hpack,
        mod_consts.const_str_digest_69dcb966aecc33e4c7eebc78ec5eba8c,
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

static function_impl_code const function_table_hpack$hpack[] = {
impl_hpack$hpack$$$function__4__dict_to_iterable$$$genobj__1__dict_to_iterable$$$function__1_lambda,
impl_hpack$hpack$$$function__1__unicode_if_needed,
impl_hpack$hpack$$$function__2_encode_integer,
impl_hpack$hpack$$$function__3_decode_integer,
impl_hpack$hpack$$$function__4__dict_to_iterable,
impl_hpack$hpack$$$function__5__to_bytes,
impl_hpack$hpack$$$function__6___init__,
impl_hpack$hpack$$$function__7_header_table_size,
impl_hpack$hpack$$$function__8_header_table_size,
impl_hpack$hpack$$$function__9_encode,
impl_hpack$hpack$$$function__10_add,
impl_hpack$hpack$$$function__11__encode_indexed,
impl_hpack$hpack$$$function__12__encode_literal,
impl_hpack$hpack$$$function__13__encode_indexed_literal,
impl_hpack$hpack$$$function__14__encode_table_size_change,
impl_hpack$hpack$$$function__15___init__,
impl_hpack$hpack$$$function__16_header_table_size,
impl_hpack$hpack$$$function__17_header_table_size,
impl_hpack$hpack$$$function__18_decode,
impl_hpack$hpack$$$function__19__assert_valid_table_size,
impl_hpack$hpack$$$function__20__update_encoding_context,
impl_hpack$hpack$$$function__21__decode_indexed,
impl_hpack$hpack$$$function__22__decode_literal_no_index,
impl_hpack$hpack$$$function__23__decode_literal_index,
impl_hpack$hpack$$$function__24__decode_literal,
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

    return Nuitka_Function_GetFunctionState(function, function_table_hpack$hpack);
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
        module_hpack$hpack,
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
        function_table_hpack$hpack,
        sizeof(function_table_hpack$hpack) / sizeof(function_impl_code)
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
static char const *module_full_name = "hpack.hpack";
#endif

// Internal entry point for module code.
PyObject *module_code_hpack$hpack(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("hpack$hpack");

    // Store the module for future use.
    module_hpack$hpack = module;

    moduledict_hpack$hpack = MODULE_DICT(module_hpack$hpack);

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
        PRINT_STRING("hpack$hpack: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("hpack$hpack: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("hpack$hpack: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "hpack.hpack" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inithpack$hpack\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_hpack$hpack,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_hpack$hpack,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_hpack$hpack,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_hpack$hpack,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_hpack$hpack,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_hpack$hpack);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_hpack$hpack);
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

        UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var_i = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_hpack$hpack;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_hpack$hpack$$$class__1_Encoder_149 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$class__1_Encoder_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_hpack$hpack$$$class__2_Decoder_398 = NULL;
struct Nuitka_FrameObject *frame_frame_hpack$hpack$$$class__2_Decoder_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_ea3c5f8b980713a69d72d54ef599f594;
UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_hpack$hpack = MAKE_MODULE_FRAME(code_objects_dfa41b09b4f4a3c38807c605913144e0, module_hpack$hpack);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack);
assert(Py_REFCNT(frame_frame_hpack$hpack) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_hpack$hpack$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_hpack$hpack$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_1 = (PyObject *)moduledict_hpack$hpack;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_hpack$hpack->m_frame.f_lineno = 6;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_6);
tmp_import_from_1__module = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_False;
UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_7);
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_hpack$hpack,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_8);
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
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_2 = (PyObject *)moduledict_hpack$hpack;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_768e33f70992e393d37323fe02e0e5c9_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_hpack$hpack->m_frame.f_lineno = 9;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_2 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_hpack$hpack,
        mod_consts.const_str_plain_HPACKDecodingError,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_HPACKDecodingError);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HPACKDecodingError, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_hpack$hpack,
        mod_consts.const_str_plain_InvalidTableSizeError,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_InvalidTableSizeError);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidTableSizeError, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_hpack$hpack,
        mod_consts.const_str_plain_OversizedHeaderListError,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_OversizedHeaderListError);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_OversizedHeaderListError, tmp_assign_source_12);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_huffman;
tmp_globals_arg_value_3 = (PyObject *)moduledict_hpack$hpack;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_HuffmanEncoder_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_hpack$hpack->m_frame.f_lineno = 10;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_hpack$hpack,
        mod_consts.const_str_plain_HuffmanEncoder,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_HuffmanEncoder);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HuffmanEncoder, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_huffman_constants;
tmp_globals_arg_value_4 = (PyObject *)moduledict_hpack$hpack;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_REQUEST_CODES_str_plain_REQUEST_CODES_LENGTH_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_hpack$hpack->m_frame.f_lineno = 11;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_6 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_hpack$hpack,
        mod_consts.const_str_plain_REQUEST_CODES,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_REQUEST_CODES);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_CODES, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_7 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_hpack$hpack,
        mod_consts.const_str_plain_REQUEST_CODES_LENGTH,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_REQUEST_CODES_LENGTH);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_REQUEST_CODES_LENGTH, tmp_assign_source_16);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_huffman_table;
tmp_globals_arg_value_5 = (PyObject *)moduledict_hpack$hpack;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_decode_huffman_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_hpack$hpack->m_frame.f_lineno = 12;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_hpack$hpack,
        mod_consts.const_str_plain_decode_huffman,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_decode_huffman);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_decode_huffman, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_struct;
tmp_globals_arg_value_6 = (PyObject *)moduledict_hpack$hpack;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_758d463897c3c25b496bc453296e40ef_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_hpack$hpack->m_frame.f_lineno = 13;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_9 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_hpack$hpack,
        mod_consts.const_str_plain_HeaderTuple,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_HeaderTuple);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderTuple, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_10 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_hpack$hpack,
        mod_consts.const_str_plain_HeaderWeaklyTyped,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_HeaderWeaklyTyped);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderWeaklyTyped, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_11 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_hpack$hpack,
        mod_consts.const_str_plain_NeverIndexedHeaderTuple,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_NeverIndexedHeaderTuple);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_NeverIndexedHeaderTuple, tmp_assign_source_21);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_table;
tmp_globals_arg_value_7 = (PyObject *)moduledict_hpack$hpack;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_HeaderTable_str_plain_table_entry_size_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_hpack$hpack->m_frame.f_lineno = 14;
tmp_assign_source_22 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_22;
}
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_12 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_hpack$hpack,
        mod_consts.const_str_plain_HeaderTable,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_HeaderTable);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderTable, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_13 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_hpack$hpack,
        mod_consts.const_str_plain_table_entry_size,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_table_entry_size);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_table_entry_size, tmp_assign_source_24);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_hpack$hpack$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
frame_frame_hpack$hpack->m_frame.f_lineno = 19;
tmp_assign_source_25 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_8859f7f84524d1a02f6682f73fb6dcc3_tuple, 0)
);

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_log, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = mod_consts.const_bytes_null;
UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_INDEX_NONE, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = mod_consts.const_bytes_chr_16;
UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_INDEX_NEVER, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = mod_consts.const_bytes_chr_64;
UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_INDEX_INCREMENTAL, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_xrange_0_9;
tmp_assign_source_30 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_30 == NULL));
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_31;
}
// Tried code:
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_32;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_32 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_32 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 28;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_33;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_33 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_i;
    outline_0_var_i = tmp_assign_source_33;
    Py_INCREF(outline_0_var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_pow_expr_left_1;
PyObject *tmp_pow_expr_right_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_pow_expr_left_1 = mod_consts.const_int_pos_2;
CHECK_OBJECT(outline_0_var_i);
tmp_pow_expr_right_1 = outline_0_var_i;
tmp_sub_expr_left_1 = BINARY_OPERATION_POW_OBJECT_LONG_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_7;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_append_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_7;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_7;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_7;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_29 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_29);
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
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 28;
goto frame_exception_exit_1;
outline_result_1:;
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain__PREFIX_BIT_MAX_NUMBERS, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = mod_consts.const_int_pos_65536;
UPDATE_STRING_DICT0(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_HEADER_LIST_SIZE, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_b644de0478eea5b9346cedb3862762e2);

tmp_assign_source_35 = MAKE_FUNCTION_hpack$hpack$$$function__1__unicode_if_needed(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain__unicode_if_needed, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_3cd3fadf54ac8de3070a05a7f79bb67d);

tmp_assign_source_36 = MAKE_FUNCTION_hpack$hpack$$$function__2_encode_integer(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_integer, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_bf481f969aa069401d97870e7601bf7b);

tmp_assign_source_37 = MAKE_FUNCTION_hpack$hpack$$$function__3_decode_integer(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_decode_integer, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_15f32b436d4176156e208fa73aa75940);

tmp_assign_source_38 = MAKE_FUNCTION_hpack$hpack$$$function__4__dict_to_iterable(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain__dict_to_iterable, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e1c9f5bba9f9f8a5355fea71894987c0);

tmp_assign_source_39 = MAKE_FUNCTION_hpack$hpack$$$function__5__to_bytes(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain__to_bytes, tmp_assign_source_39);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_41;
}
// Tried code:
{
PyObject *tmp_assign_source_42;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_hpack$hpack$$$class__1_Encoder_149 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_8859f7f84524d1a02f6682f73fb6dcc3;
tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__1_Encoder_149, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_398ed0dae1611cbadd23fedf4de14571;
tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__1_Encoder_149, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Encoder;
tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__1_Encoder_149, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_149;
tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__1_Encoder_149, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__6___init__(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__1_Encoder_149, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_hpack$hpack$$$class__1_Encoder_2 = MAKE_CLASS_FRAME(tstate, code_objects_50178a7dec60d06ac9675c617c6f440b, module_hpack$hpack, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$class__1_Encoder_2);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$class__1_Encoder_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_7;
tmp_called_value_1 = (PyObject *)&PyProperty_Type;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_1 = MAKE_FUNCTION_hpack$hpack$$$function__7_header_table_size(tstate, tmp_annotations_7);

frame_frame_hpack$hpack$$$class__1_Encoder_2->m_frame.f_lineno = 162;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__1_Encoder_149, mod_consts.const_str_plain_header_table_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_8;
tmp_called_instance_2 = DICT_GET_ITEM0(tstate, locals_hpack$hpack$$$class__1_Encoder_149, mod_consts.const_str_plain_header_table_size);

if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_header_table_size);

exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_0a899e084b4d4c69f04f56fc6fc3c923);

tmp_args_element_value_2 = MAKE_FUNCTION_hpack$hpack$$$function__8_header_table_size(tstate, tmp_annotations_8);

frame_frame_hpack$hpack$$$class__1_Encoder_2->m_frame.f_lineno = 169;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_setter, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__1_Encoder_149, mod_consts.const_str_plain_header_table_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$class__1_Encoder_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$class__1_Encoder_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$class__1_Encoder_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$class__1_Encoder_2,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_hpack$hpack$$$class__1_Encoder_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_10;
skip_nested_handling_1:;
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_9;
tmp_defaults_1 = mod_consts.const_tuple_true_tuple;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_71aa8e6c06d8bf2c5e4da6e1c3ab1ce2);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__9_encode(tstate, tmp_defaults_1, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__1_Encoder_149, mod_consts.const_str_plain_encode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_10;
tmp_defaults_2 = mod_consts.const_tuple_false_tuple;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_8cbca17c6d81b4f86a5c655add40192e);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__10_add(tstate, tmp_defaults_2, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__1_Encoder_149, mod_consts.const_str_plain_add, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_e4d7c42e9a8514893c78772683f3201a);

tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__11__encode_indexed(tstate, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__1_Encoder_149, mod_consts.const_str_plain__encode_indexed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_12;
tmp_defaults_3 = mod_consts.const_tuple_false_tuple;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_79678b7699966f020a65745ea7321540);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__12__encode_literal(tstate, tmp_defaults_3, tmp_annotations_12);

tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__1_Encoder_149, mod_consts.const_str_plain__encode_literal, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_13;
tmp_defaults_4 = mod_consts.const_tuple_false_tuple;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_4ef9b5326f933e4c4f431eb3aa879c5f);
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__13__encode_indexed_literal(tstate, tmp_defaults_4, tmp_annotations_13);

tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__1_Encoder_149, mod_consts.const_str_plain__encode_indexed_literal, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);

tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__14__encode_table_size_change(tstate, tmp_annotations_14);

tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__1_Encoder_149, mod_consts.const_str_plain__encode_table_size_change, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_09c8ab656d50b0a4cf189a9298794d46_tuple;
tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__1_Encoder_149, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_2 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_Encoder;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_hpack$hpack$$$class__1_Encoder_149;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_hpack$hpack->m_frame.f_lineno = 149;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;

    goto try_except_handler_10;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_43;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_42 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_42);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_hpack$hpack$$$class__1_Encoder_149);
locals_hpack$hpack$$$class__1_Encoder_149 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_hpack$hpack$$$class__1_Encoder_149);
locals_hpack$hpack$$$class__1_Encoder_149 = NULL;
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
goto outline_result_3;
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
exception_lineno = 149;
goto try_except_handler_8;
outline_result_3:;
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_Encoder, tmp_assign_source_42);
}
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
goto outline_result_2;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
}
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_45;
}
// Tried code:
{
PyObject *tmp_assign_source_46;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_hpack$hpack$$$class__2_Decoder_398 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_8859f7f84524d1a02f6682f73fb6dcc3;
tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__2_Decoder_398, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_dec07185b38b0f07d093bcbf3c11cb7c;
tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__2_Decoder_398, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Decoder;
tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__2_Decoder_398, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_398;
tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__2_Decoder_398, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_hpack$hpack$$$class__2_Decoder_3 = MAKE_CLASS_FRAME(tstate, code_objects_031e7419582e26f0722cfbfd2645721d, module_hpack$hpack, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_hpack$hpack$$$class__2_Decoder_3);
assert(Py_REFCNT(frame_frame_hpack$hpack$$$class__2_Decoder_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_5;
PyObject *tmp_tuple_element_2;
PyObject *tmp_annotations_15;
tmp_tuple_element_2 = module_var_accessor_hpack$hpack$DEFAULT_MAX_HEADER_LIST_SIZE(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_MAX_HEADER_LIST_SIZE);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 420;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_defaults_5 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_defaults_5, 0, tmp_tuple_element_2);
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_fc67b1ac505cc6543c2b737b22d2be73);

tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__15___init__(tstate, tmp_defaults_5, tmp_annotations_15);

tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__2_Decoder_398, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_16;
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_3 = MAKE_FUNCTION_hpack$hpack$$$function__16_header_table_size(tstate, tmp_annotations_16);

frame_frame_hpack$hpack$$$class__2_Decoder_3->m_frame.f_lineno = 448;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__2_Decoder_398, mod_consts.const_str_plain_header_table_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_17;
tmp_called_instance_3 = DICT_GET_ITEM0(tstate, locals_hpack$hpack$$$class__2_Decoder_398, mod_consts.const_str_plain_header_table_size);

if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_header_table_size);

exception_lineno = 455;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_0a899e084b4d4c69f04f56fc6fc3c923);

tmp_args_element_value_4 = MAKE_FUNCTION_hpack$hpack$$$function__17_header_table_size(tstate, tmp_annotations_17);

frame_frame_hpack$hpack$$$class__2_Decoder_3->m_frame.f_lineno = 455;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_setter, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__2_Decoder_398, mod_consts.const_str_plain_header_table_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack$$$class__2_Decoder_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack$$$class__2_Decoder_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack$$$class__2_Decoder_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_hpack$hpack$$$class__2_Decoder_3,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_hpack$hpack$$$class__2_Decoder_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_13;
skip_nested_handling_2:;
{
PyObject *tmp_defaults_6;
PyObject *tmp_annotations_18;
tmp_defaults_6 = mod_consts.const_tuple_false_tuple;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_86c3ebee81f76838eb00d53fec0a679c);
Py_INCREF(tmp_defaults_6);

tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__18_decode(tstate, tmp_defaults_6, tmp_annotations_18);

tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__2_Decoder_398, mod_consts.const_str_plain_decode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__19__assert_valid_table_size(tstate, tmp_annotations_19);

tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__2_Decoder_398, mod_consts.const_str_plain__assert_valid_table_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_ab897df50b83b561412af3f56781c106);

tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__20__update_encoding_context(tstate, tmp_annotations_20);

tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__2_Decoder_398, mod_consts.const_str_plain__update_encoding_context, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_2ac03d3b4b9f067c5b44475bda7fe0d1);

tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__21__decode_indexed(tstate, tmp_annotations_21);

tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__2_Decoder_398, mod_consts.const_str_plain__decode_indexed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_2ac03d3b4b9f067c5b44475bda7fe0d1);

tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__22__decode_literal_no_index(tstate, tmp_annotations_22);

tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__2_Decoder_398, mod_consts.const_str_plain__decode_literal_no_index, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_2ac03d3b4b9f067c5b44475bda7fe0d1);

tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__23__decode_literal_index(tstate, tmp_annotations_23);

tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__2_Decoder_398, mod_consts.const_str_plain__decode_literal_index, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_84c92d4920f4ef1a44cd074c28287102);

tmp_dictset_value = MAKE_FUNCTION_hpack$hpack$$$function__24__decode_literal(tstate, tmp_annotations_24);

tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__2_Decoder_398, mod_consts.const_str_plain__decode_literal, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_9a93ef71c1f4328e61e33bdf34e8a326_tuple;
tmp_result = DICT_SET_ITEM(locals_hpack$hpack$$$class__2_Decoder_398, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
tmp_called_value_4 = (PyObject *)&PyType_Type;
tmp_tuple_element_3 = mod_consts.const_str_plain_Decoder;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_hpack$hpack$$$class__2_Decoder_398;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_hpack$hpack->m_frame.f_lineno = 398;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;

    goto try_except_handler_13;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_47;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_46 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_46);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_hpack$hpack$$$class__2_Decoder_398);
locals_hpack$hpack$$$class__2_Decoder_398 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_hpack$hpack$$$class__2_Decoder_398);
locals_hpack$hpack$$$class__2_Decoder_398 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_5;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 398;
goto try_except_handler_11;
outline_result_5:;
UPDATE_STRING_DICT1(moduledict_hpack$hpack, (Nuitka_StringObject *)mod_consts.const_str_plain_Decoder, tmp_assign_source_46);
}
goto try_end_7;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
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
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
goto outline_result_4;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_4:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_hpack$hpack, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_hpack$hpack->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_hpack$hpack, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_hpack$hpack);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("hpack$hpack", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "hpack.hpack" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_hpack$hpack);
    return module_hpack$hpack;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_hpack$hpack, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("hpack$hpack", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'sortedcontainers$sortedset'
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



/* The "module_sortedcontainers$sortedset" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sortedcontainers$sortedset;
PyDictObject *moduledict_sortedcontainers$sortedset;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__key;
PyObject *const_str_plain__set;
PyObject *const_str_plain_SortedList;
PyObject *const_tuple_str_plain_key_tuple;
PyObject *const_str_plain__list;
PyObject *const_str_plain_isdisjoint;
PyObject *const_str_plain_issubset;
PyObject *const_str_plain_issuperset;
PyObject *const_str_plain_bisect_left;
PyObject *const_str_plain_bisect;
PyObject *const_str_plain_bisect_right;
PyObject *const_str_plain_index;
PyObject *const_str_plain_irange;
PyObject *const_str_plain_islice;
PyObject *const_str_plain__reset;
PyObject *const_str_plain_bisect_key_left;
PyObject *const_str_plain_bisect_key_right;
PyObject *const_str_plain_bisect_key;
PyObject *const_str_plain_irange_key;
PyObject *const_str_plain__update;
PyObject *const_str_digest_7550a45a947d7b361a42dab99e6c7cb1;
PyObject *const_str_plain___new__;
PyObject *const_str_digest_bcd4e87f8ee772a08fe308df03ed4fb6;
PyObject *const_str_digest_a0453da2641ead3f3bfddb71a0608f30;
PyObject *const_str_digest_e8a9442d27553f23bb65d68efefe470d;
PyObject *const_str_digest_7581541c94f815d8531eefd392d95079;
PyObject *const_str_plain_difference_update;
PyObject *const_str_plain_remove;
PyObject *const_str_digest_36735ae9cde4975720f3c60d3046abdb;
PyObject *const_str_digest_b441f3f5f680060447627b1bd0a09b1d;
PyObject *const_str_plain_comparer;
PyObject *const_str_digest_5609452bb90452e6c386d33afe65cfdb;
PyObject *const_str_digest_6efa74f45155a2226fbf28b23ffee920;
PyObject *const_str_plain_dedent;
PyObject *const_str_digest_d83d2d547bd7dd99fb47ed8ce8ede6f9;
PyObject *const_str_digest_5867f4ae0675e64a2f6e43ec6afccbee;
PyObject *const_str_plain_SortedSet;
PyObject *const_str_plain_set_op;
PyObject *const_str_plain_Set;
PyObject *const_str_digest_d26ecda30f01556b358ed2495f9d93f2;
PyObject *const_str_digest_c4c348535926278f9f68fbc4e0b9b978;
PyObject *const_str_digest_7f64a001cb5d2c230db68c64b626c706;
PyObject *const_str_plain_add;
PyObject *const_str_digest_a10b5af8a1d8a0707030d945568419b7;
PyObject *const_str_plain_clear;
PyObject *const_str_digest_c88a319cccbbe7d2717b1f71b45d5f76;
PyObject *const_str_plain__fromset;
PyObject *const_str_digest_d11976b365740f1b3e5942eb6822b7fc;
PyObject *const_str_digest_af6b2f8378903364eb991b39f357afba;
PyObject *const_str_digest_d091733d0f551a02e3f912820dedd239;
PyObject *const_str_plain_pop;
PyObject *const_str_digest_8ca2b5189d379db0d9c33a70c061bf59;
PyObject *const_str_digest_880349b38af1e52fe327ec20a59b0f49;
PyObject *const_str_plain_difference;
PyObject *const_str_digest_1195af88b9fb515b8e6fa38b71dcca66;
PyObject *const_str_plain_chain;
PyObject *const_int_pos_4;
PyObject *const_str_plain_update;
PyObject *const_str_plain__discard;
PyObject *const_str_digest_b44206f8e8b88da56e7512d81c2d0d44;
PyObject *const_str_plain_intersection;
PyObject *const_str_digest_87367e37579ba815bdc915d85f0bb145;
PyObject *const_str_plain_intersection_update;
PyObject *const_str_digest_3bcc948228384e566cb6ae568ae592b8;
PyObject *const_str_plain_symmetric_difference;
PyObject *const_str_digest_3749ecaaa308eaeb8fde82f7470b271c;
PyObject *const_str_plain_symmetric_difference_update;
PyObject *const_str_digest_2d02042518cb6b1e43059d31328255bf;
PyObject *const_str_digest_4b1dd46cb30b817d2be2cc543e862c33;
PyObject *const_str_plain__add;
PyObject *const_str_digest_ae0c4d9ff8ef09a185191e22db941b22;
PyObject *const_str_digest_e19789a9635c2cde57ea2283de89b88c;
PyObject *const_str_digest_f431c6246db6b4bad86c2af5626fd32d;
PyObject *const_str_digest_8bceca102421f811d413c50ec4a281ac;
PyObject *const_str_digest_a1ce55383515a2b56e43c26c216aff5d;
PyObject *const_str_plain__check;
PyObject *const_str_digest_add026dc73d413145b1df07c4b6bc864;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_552169c893245100c32ccd458be50a73;
PyObject *const_str_digest_0670955fe44c04e44b79254c94a5c9a8;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_itertools;
PyObject *const_tuple_str_plain_chain_tuple;
PyObject *const_str_plain_operator;
PyObject *const_tuple_f6360c380910b3cb9cb163817c40cc57_tuple;
PyObject *const_str_plain_eq;
PyObject *const_str_plain_ne;
PyObject *const_str_plain_gt;
PyObject *const_str_plain_ge;
PyObject *const_str_plain_lt;
PyObject *const_str_plain_le;
PyObject *const_str_plain_textwrap;
PyObject *const_tuple_str_plain_dedent_tuple;
PyObject *const_str_plain_sortedlist;
PyObject *const_tuple_str_plain_SortedList_str_plain_recursive_repr_tuple;
PyObject *const_str_plain_recursive_repr;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_MutableSet_str_plain_Sequence_str_plain_Set_tuple;
PyObject *const_str_plain_MutableSet;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain_collections;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_f26e76520a998b6f6606d1ccf49e4585;
PyObject *const_str_digest_912069c060841f295b6931cbb8804ec9;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_36;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_none_none_tuple;
PyObject *const_str_digest_bb6e54d0a3ac32da6fd8ffecca3930f7;
PyObject *const_tuple_none_tuple;
PyObject *const_str_digest_c75f0a3d3c57e49ecdf5378e49fb5174;
PyObject *const_str_plain_property;
PyObject *const_str_plain_key;
PyObject *const_str_digest_252d765b3b1352c29f63ee8e1355be5e;
PyObject *const_str_plain___contains__;
PyObject *const_str_digest_9ef6609d1dfff2445f723d69401a6601;
PyObject *const_str_digest_1c64461f03367f507c7afa42a4930b42;
PyObject *const_str_plain___delitem__;
PyObject *const_str_digest_6a43f6c403a4d8737313e376e3e4d647;
PyObject *const_str_plain___make_cmp;
PyObject *const_str_digest_d1c42614487fb1bc1a54d088a520b78a;
PyObject *const_str_plain__SortedSet__make_cmp;
PyObject *const_str_digest_13243295198ba360687160a687a3cc51;
PyObject *const_str_digest_663362c475a0edc4d75b5c39d6e7c54d;
PyObject *const_str_plain___eq__;
PyObject *const_str_digest_5f408ea264aad5c192d303d32799c57f;
PyObject *const_str_digest_18a3532f52925fd1b5d632bf0b4bcfbf;
PyObject *const_str_plain___ne__;
PyObject *const_str_chr_60;
PyObject *const_str_digest_14e5a00bd6ad5ce1e7e5ed7d84a3da70;
PyObject *const_str_plain___lt__;
PyObject *const_str_chr_62;
PyObject *const_str_digest_e6e2faf9ea5d2130a994bf7633e1076a;
PyObject *const_str_plain___gt__;
PyObject *const_str_digest_c566e8f3fba64199b66b7b7424440c9c;
PyObject *const_str_digest_2dbcc5ce672f021c3d2f988d10875095;
PyObject *const_str_plain___le__;
PyObject *const_str_digest_a53e6044afa65158b90d5bc4937bebce;
PyObject *const_str_digest_d84d17294c2987e139b9697b5ad12e5b;
PyObject *const_str_plain___ge__;
PyObject *const_str_plain___len__;
PyObject *const_str_digest_04d3fc359701f30870f9f4234a4e08f4;
PyObject *const_str_digest_be7a2b43e9939aeb2273d00c69c102c7;
PyObject *const_str_plain___reversed__;
PyObject *const_str_digest_9f0ca106b6d27f7e027759fbaf084f65;
PyObject *const_str_digest_e1040cabfcd2de0261f809ffd5568c15;
PyObject *const_str_digest_128174ab39c59dd7d8e52c807ec7aea6;
PyObject *const_str_plain_copy;
PyObject *const_str_digest_ab537564934c43141380ce866064a367;
PyObject *const_str_plain___copy__;
PyObject *const_str_plain_count;
PyObject *const_str_digest_00952a36380f800bf0802f8d8314c4c7;
PyObject *const_str_plain_discard;
PyObject *const_str_digest_aa20318cf1c589ef5f52fc55de1d235c;
PyObject *const_tuple_int_neg_1_tuple;
PyObject *const_str_digest_97956a0faaff817fbedd13d820babcff;
PyObject *const_str_digest_608320a0298ca1df296c5a5ea325dd1a;
PyObject *const_str_digest_0438127f5c4b0fad16c8bd4dc5e646ec;
PyObject *const_str_plain___sub__;
PyObject *const_str_digest_6e559a6c3eaea64d47e2fc60fd105fcc;
PyObject *const_str_plain___isub__;
PyObject *const_str_digest_bc33a4a11175e2f6121f5d4971916acd;
PyObject *const_str_plain___and__;
PyObject *const_str_plain___rand__;
PyObject *const_str_digest_dcd94768f63dcb99de7caf450a935cf5;
PyObject *const_str_plain___iand__;
PyObject *const_str_digest_6178fa75c0bbb9e76c5db23ee182ada9;
PyObject *const_str_plain___xor__;
PyObject *const_str_plain___rxor__;
PyObject *const_str_digest_158dd2e5bce1c1255800dea3f5d51a14;
PyObject *const_str_plain___ixor__;
PyObject *const_str_plain_union;
PyObject *const_str_digest_e3f2571a0e15c96018507abef3fe4b36;
PyObject *const_str_plain___or__;
PyObject *const_str_plain___ror__;
PyObject *const_str_digest_fe8815e181e645f2c4f473d79d43ffe5;
PyObject *const_str_plain___ior__;
PyObject *const_str_plain___reduce__;
PyObject *const_str_digest_a71689f76476921d99f3dc7926947451;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_9865f74f79a397597db2c5bdfad95a10;
PyObject *const_str_digest_5cb22d88866212a5fe21a496babae901;
PyObject *const_tuple_ce086c7f35cd5f3e4f6ea98dee7d4884_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_ec0f860d4f762c9fe2f6cbfc67bfe779;
PyObject *const_tuple_efb8ae03aee18ee1af432d91e5a84514_tuple;
PyObject *const_str_digest_e3987b8c12aaf256700abbced31daa21;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
PyObject *const_tuple_3a2ce96ce2e91d35a94529e53b437ce0_tuple;
PyObject *const_tuple_str_plain_self_str_plain_index_tuple;
PyObject *const_tuple_b4161e7beb8b28df4a423e9288d19f4a_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_7059959527748f0671af0b7266fe79a4_tuple;
PyObject *const_tuple_3b04f499bb1246ab4f5c76af68e07d68_tuple;
PyObject *const_tuple_str_plain_self_str_plain__set_str_plain__list_tuple;
PyObject *const_tuple_d01e535c58980da9d21fb535f8df51c7_tuple;
PyObject *const_tuple_str_plain_self_str_plain_value_str_plain__set_tuple;
PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_set_op_tuple;
PyObject *const_tuple_str_plain_set_op_tuple;
PyObject *const_tuple_str_plain_self_str_plain_iterables_str_plain_diff_tuple;
PyObject *const_tuple_da63ddd23fe75521d1a8f8a6d80a3ec7_tuple;
PyObject *const_tuple_str_plain_self_str_plain_iterables_str_plain_intersect_tuple;
PyObject *const_tuple_1bb81bad4b0274cd119bf55c6bc74a33_tuple;
PyObject *const_tuple_str_plain_self_str_plain_index_str_plain_value_tuple;
PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_diff_tuple;
PyObject *const_tuple_aa8ee3e39b17a22cb74187237fa91589_tuple;
PyObject *const_tuple_str_plain_self_str_plain_iterables_tuple;
PyObject *const_tuple_2fb152d06d355a464a77fc3a62aa9ebe_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[214];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("sortedcontainers.sortedset"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__key);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__set);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_SortedList);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__list);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_isdisjoint);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_issubset);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_issuperset);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_bisect_left);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_bisect);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_bisect_right);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_index);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_irange);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_islice);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__reset);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_bisect_key_left);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_bisect_key_right);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_bisect_key);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_irange_key);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__update);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_7550a45a947d7b361a42dab99e6c7cb1);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain___new__);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_bcd4e87f8ee772a08fe308df03ed4fb6);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0453da2641ead3f3bfddb71a0608f30);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_e8a9442d27553f23bb65d68efefe470d);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_7581541c94f815d8531eefd392d95079);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_difference_update);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_36735ae9cde4975720f3c60d3046abdb);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_b441f3f5f680060447627b1bd0a09b1d);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_comparer);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_5609452bb90452e6c386d33afe65cfdb);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_6efa74f45155a2226fbf28b23ffee920);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_dedent);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_d83d2d547bd7dd99fb47ed8ce8ede6f9);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_5867f4ae0675e64a2f6e43ec6afccbee);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_SortedSet);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_op);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_Set);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_d26ecda30f01556b358ed2495f9d93f2);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4c348535926278f9f68fbc4e0b9b978);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_7f64a001cb5d2c230db68c64b626c706);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_a10b5af8a1d8a0707030d945568419b7);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_c88a319cccbbe7d2717b1f71b45d5f76);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__fromset);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_d11976b365740f1b3e5942eb6822b7fc);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_af6b2f8378903364eb991b39f357afba);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_d091733d0f551a02e3f912820dedd239);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ca2b5189d379db0d9c33a70c061bf59);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_880349b38af1e52fe327ec20a59b0f49);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_difference);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_1195af88b9fb515b8e6fa38b71dcca66);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_chain);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__discard);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_b44206f8e8b88da56e7512d81c2d0d44);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_intersection);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_87367e37579ba815bdc915d85f0bb145);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_intersection_update);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_3bcc948228384e566cb6ae568ae592b8);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_symmetric_difference);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_3749ecaaa308eaeb8fde82f7470b271c);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_symmetric_difference_update);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d02042518cb6b1e43059d31328255bf);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b1dd46cb30b817d2be2cc543e862c33);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain__add);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae0c4d9ff8ef09a185191e22db941b22);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_e19789a9635c2cde57ea2283de89b88c);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_f431c6246db6b4bad86c2af5626fd32d);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_8bceca102421f811d413c50ec4a281ac);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_a1ce55383515a2b56e43c26c216aff5d);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__check);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_add026dc73d413145b1df07c4b6bc864);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_552169c893245100c32ccd458be50a73);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_0670955fe44c04e44b79254c94a5c9a8);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_itertools);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_chain_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_operator);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_f6360c380910b3cb9cb163817c40cc57_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_eq);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_ne);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_gt);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_ge);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_lt);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_le);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_textwrap);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dedent_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_sortedlist);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SortedList_str_plain_recursive_repr_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_recursive_repr);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MutableSet_str_plain_Sequence_str_plain_Set_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_MutableSet);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_collections);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_f26e76520a998b6f6606d1ccf49e4585);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_912069c060841f295b6931cbb8804ec9);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_int_pos_36);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb6e54d0a3ac32da6fd8ffecca3930f7);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_c75f0a3d3c57e49ecdf5378e49fb5174);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_key);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_252d765b3b1352c29f63ee8e1355be5e);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain___contains__);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ef6609d1dfff2445f723d69401a6601);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c64461f03367f507c7afa42a4930b42);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain___delitem__);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a43f6c403a4d8737313e376e3e4d647);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain___make_cmp);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1c42614487fb1bc1a54d088a520b78a);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain__SortedSet__make_cmp);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_13243295198ba360687160a687a3cc51);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_663362c475a0edc4d75b5c39d6e7c54d);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain___eq__);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f408ea264aad5c192d303d32799c57f);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_18a3532f52925fd1b5d632bf0b4bcfbf);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain___ne__);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_chr_60);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_14e5a00bd6ad5ce1e7e5ed7d84a3da70);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain___lt__);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_chr_62);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_e6e2faf9ea5d2130a994bf7633e1076a);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain___gt__);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_c566e8f3fba64199b66b7b7424440c9c);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_2dbcc5ce672f021c3d2f988d10875095);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain___le__);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_a53e6044afa65158b90d5bc4937bebce);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_d84d17294c2987e139b9697b5ad12e5b);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain___ge__);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain___len__);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_04d3fc359701f30870f9f4234a4e08f4);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_be7a2b43e9939aeb2273d00c69c102c7);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain___reversed__);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f0ca106b6d27f7e027759fbaf084f65);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1040cabfcd2de0261f809ffd5568c15);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_128174ab39c59dd7d8e52c807ec7aea6);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab537564934c43141380ce866064a367);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain___copy__);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_count);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_00952a36380f800bf0802f8d8314c4c7);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_discard);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa20318cf1c589ef5f52fc55de1d235c);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_97956a0faaff817fbedd13d820babcff);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_608320a0298ca1df296c5a5ea325dd1a);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_0438127f5c4b0fad16c8bd4dc5e646ec);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain___sub__);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e559a6c3eaea64d47e2fc60fd105fcc);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain___isub__);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc33a4a11175e2f6121f5d4971916acd);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain___and__);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain___rand__);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcd94768f63dcb99de7caf450a935cf5);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain___iand__);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_6178fa75c0bbb9e76c5db23ee182ada9);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain___xor__);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain___rxor__);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_158dd2e5bce1c1255800dea3f5d51a14);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain___ixor__);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_union);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_e3f2571a0e15c96018507abef3fe4b36);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain___or__);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain___ror__);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_fe8815e181e645f2c4f473d79d43ffe5);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain___ior__);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain___reduce__);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_a71689f76476921d99f3dc7926947451);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_9865f74f79a397597db2c5bdfad95a10);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_5cb22d88866212a5fe21a496babae901);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_ce086c7f35cd5f3e4f6ea98dee7d4884_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_ec0f860d4f762c9fe2f6cbfc67bfe779);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_efb8ae03aee18ee1af432d91e5a84514_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_e3987b8c12aaf256700abbced31daa21);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_3a2ce96ce2e91d35a94529e53b437ce0_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_index_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_b4161e7beb8b28df4a423e9288d19f4a_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_7059959527748f0671af0b7266fe79a4_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_3b04f499bb1246ab4f5c76af68e07d68_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__set_str_plain__list_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_d01e535c58980da9d21fb535f8df51c7_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_str_plain__set_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_str_plain_set_op_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_op_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_iterables_str_plain_diff_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_da63ddd23fe75521d1a8f8a6d80a3ec7_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_iterables_str_plain_intersect_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_1bb81bad4b0274cd119bf55c6bc74a33_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_index_str_plain_value_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_str_plain_diff_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_aa8ee3e39b17a22cb74187237fa91589_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_iterables_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_2fb152d06d355a464a77fc3a62aa9ebe_tuple);
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
void checkModuleConstants_sortedcontainers$sortedset(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__key);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__set);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_SortedList));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SortedList);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__list);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_isdisjoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isdisjoint);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_issubset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_issubset);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_issuperset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_issuperset);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_bisect_left));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bisect_left);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_bisect));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bisect);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_bisect_right));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bisect_right);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_index);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_irange));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_irange);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_islice));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_islice);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__reset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__reset);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_bisect_key_left));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bisect_key_left);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_bisect_key_right));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bisect_key_right);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_bisect_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bisect_key);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_irange_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_irange_key);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__update);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_7550a45a947d7b361a42dab99e6c7cb1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7550a45a947d7b361a42dab99e6c7cb1);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain___new__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___new__);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_bcd4e87f8ee772a08fe308df03ed4fb6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bcd4e87f8ee772a08fe308df03ed4fb6);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0453da2641ead3f3bfddb71a0608f30));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a0453da2641ead3f3bfddb71a0608f30);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_e8a9442d27553f23bb65d68efefe470d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e8a9442d27553f23bb65d68efefe470d);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_7581541c94f815d8531eefd392d95079));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7581541c94f815d8531eefd392d95079);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_difference_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_difference_update);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remove);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_36735ae9cde4975720f3c60d3046abdb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36735ae9cde4975720f3c60d3046abdb);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_b441f3f5f680060447627b1bd0a09b1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b441f3f5f680060447627b1bd0a09b1d);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_comparer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_comparer);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_5609452bb90452e6c386d33afe65cfdb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5609452bb90452e6c386d33afe65cfdb);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_6efa74f45155a2226fbf28b23ffee920));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6efa74f45155a2226fbf28b23ffee920);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_dedent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dedent);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_d83d2d547bd7dd99fb47ed8ce8ede6f9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d83d2d547bd7dd99fb47ed8ce8ede6f9);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_5867f4ae0675e64a2f6e43ec6afccbee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5867f4ae0675e64a2f6e43ec6afccbee);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_SortedSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SortedSet);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_op));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_op);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_Set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Set);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_d26ecda30f01556b358ed2495f9d93f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d26ecda30f01556b358ed2495f9d93f2);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4c348535926278f9f68fbc4e0b9b978));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4c348535926278f9f68fbc4e0b9b978);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_7f64a001cb5d2c230db68c64b626c706));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7f64a001cb5d2c230db68c64b626c706);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_a10b5af8a1d8a0707030d945568419b7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a10b5af8a1d8a0707030d945568419b7);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_c88a319cccbbe7d2717b1f71b45d5f76));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c88a319cccbbe7d2717b1f71b45d5f76);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__fromset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fromset);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_d11976b365740f1b3e5942eb6822b7fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d11976b365740f1b3e5942eb6822b7fc);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_af6b2f8378903364eb991b39f357afba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af6b2f8378903364eb991b39f357afba);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_d091733d0f551a02e3f912820dedd239));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d091733d0f551a02e3f912820dedd239);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pop);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ca2b5189d379db0d9c33a70c061bf59));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ca2b5189d379db0d9c33a70c061bf59);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_880349b38af1e52fe327ec20a59b0f49));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_880349b38af1e52fe327ec20a59b0f49);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_difference));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_difference);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_1195af88b9fb515b8e6fa38b71dcca66));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1195af88b9fb515b8e6fa38b71dcca66);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_chain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chain);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__discard));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__discard);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_b44206f8e8b88da56e7512d81c2d0d44));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b44206f8e8b88da56e7512d81c2d0d44);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_intersection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_intersection);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_87367e37579ba815bdc915d85f0bb145));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_87367e37579ba815bdc915d85f0bb145);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_intersection_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_intersection_update);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_3bcc948228384e566cb6ae568ae592b8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3bcc948228384e566cb6ae568ae592b8);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_symmetric_difference));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_symmetric_difference);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_3749ecaaa308eaeb8fde82f7470b271c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3749ecaaa308eaeb8fde82f7470b271c);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_symmetric_difference_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_symmetric_difference_update);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d02042518cb6b1e43059d31328255bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d02042518cb6b1e43059d31328255bf);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b1dd46cb30b817d2be2cc543e862c33));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b1dd46cb30b817d2be2cc543e862c33);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain__add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__add);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae0c4d9ff8ef09a185191e22db941b22));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae0c4d9ff8ef09a185191e22db941b22);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_e19789a9635c2cde57ea2283de89b88c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e19789a9635c2cde57ea2283de89b88c);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_f431c6246db6b4bad86c2af5626fd32d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f431c6246db6b4bad86c2af5626fd32d);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_8bceca102421f811d413c50ec4a281ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8bceca102421f811d413c50ec4a281ac);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_a1ce55383515a2b56e43c26c216aff5d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a1ce55383515a2b56e43c26c216aff5d);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__check));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__check);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_add026dc73d413145b1df07c4b6bc864));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_add026dc73d413145b1df07c4b6bc864);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_552169c893245100c32ccd458be50a73));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_552169c893245100c32ccd458be50a73);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_0670955fe44c04e44b79254c94a5c9a8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0670955fe44c04e44b79254c94a5c9a8);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_itertools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_itertools);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_chain_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_chain_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_operator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_operator);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_f6360c380910b3cb9cb163817c40cc57_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f6360c380910b3cb9cb163817c40cc57_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_eq));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eq);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_ne));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ne);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_gt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gt);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_ge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ge);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_lt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lt);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_le));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_le);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_textwrap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_textwrap);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dedent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dedent_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_sortedlist));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sortedlist);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SortedList_str_plain_recursive_repr_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SortedList_str_plain_recursive_repr_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_recursive_repr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_recursive_repr);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MutableSet_str_plain_Sequence_str_plain_Set_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MutableSet_str_plain_Sequence_str_plain_Set_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_MutableSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MutableSet);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_collections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_collections);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_f26e76520a998b6f6606d1ccf49e4585));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f26e76520a998b6f6606d1ccf49e4585);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_912069c060841f295b6931cbb8804ec9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_912069c060841f295b6931cbb8804ec9);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_int_pos_36));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_36);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb6e54d0a3ac32da6fd8ffecca3930f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bb6e54d0a3ac32da6fd8ffecca3930f7);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_c75f0a3d3c57e49ecdf5378e49fb5174));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c75f0a3d3c57e49ecdf5378e49fb5174);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_252d765b3b1352c29f63ee8e1355be5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_252d765b3b1352c29f63ee8e1355be5e);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain___contains__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___contains__);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ef6609d1dfff2445f723d69401a6601));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ef6609d1dfff2445f723d69401a6601);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c64461f03367f507c7afa42a4930b42));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c64461f03367f507c7afa42a4930b42);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain___delitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___delitem__);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a43f6c403a4d8737313e376e3e4d647));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a43f6c403a4d8737313e376e3e4d647);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain___make_cmp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___make_cmp);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1c42614487fb1bc1a54d088a520b78a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1c42614487fb1bc1a54d088a520b78a);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain__SortedSet__make_cmp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SortedSet__make_cmp);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_13243295198ba360687160a687a3cc51));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_13243295198ba360687160a687a3cc51);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_663362c475a0edc4d75b5c39d6e7c54d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_663362c475a0edc4d75b5c39d6e7c54d);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain___eq__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___eq__);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f408ea264aad5c192d303d32799c57f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f408ea264aad5c192d303d32799c57f);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_18a3532f52925fd1b5d632bf0b4bcfbf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_18a3532f52925fd1b5d632bf0b4bcfbf);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain___ne__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ne__);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_chr_60));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_60);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_14e5a00bd6ad5ce1e7e5ed7d84a3da70));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_14e5a00bd6ad5ce1e7e5ed7d84a3da70);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain___lt__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___lt__);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_chr_62));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_62);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_e6e2faf9ea5d2130a994bf7633e1076a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e6e2faf9ea5d2130a994bf7633e1076a);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain___gt__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___gt__);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_c566e8f3fba64199b66b7b7424440c9c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c566e8f3fba64199b66b7b7424440c9c);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_2dbcc5ce672f021c3d2f988d10875095));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2dbcc5ce672f021c3d2f988d10875095);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain___le__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___le__);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_a53e6044afa65158b90d5bc4937bebce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a53e6044afa65158b90d5bc4937bebce);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_d84d17294c2987e139b9697b5ad12e5b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d84d17294c2987e139b9697b5ad12e5b);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain___ge__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ge__);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain___len__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___len__);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_04d3fc359701f30870f9f4234a4e08f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04d3fc359701f30870f9f4234a4e08f4);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_be7a2b43e9939aeb2273d00c69c102c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_be7a2b43e9939aeb2273d00c69c102c7);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain___reversed__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___reversed__);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f0ca106b6d27f7e027759fbaf084f65));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9f0ca106b6d27f7e027759fbaf084f65);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1040cabfcd2de0261f809ffd5568c15));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e1040cabfcd2de0261f809ffd5568c15);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_128174ab39c59dd7d8e52c807ec7aea6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_128174ab39c59dd7d8e52c807ec7aea6);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab537564934c43141380ce866064a367));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab537564934c43141380ce866064a367);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain___copy__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___copy__);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_count);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_00952a36380f800bf0802f8d8314c4c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_00952a36380f800bf0802f8d8314c4c7);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_discard));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_discard);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa20318cf1c589ef5f52fc55de1d235c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aa20318cf1c589ef5f52fc55de1d235c);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_neg_1_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_97956a0faaff817fbedd13d820babcff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_97956a0faaff817fbedd13d820babcff);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_608320a0298ca1df296c5a5ea325dd1a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_608320a0298ca1df296c5a5ea325dd1a);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_0438127f5c4b0fad16c8bd4dc5e646ec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0438127f5c4b0fad16c8bd4dc5e646ec);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain___sub__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___sub__);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e559a6c3eaea64d47e2fc60fd105fcc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e559a6c3eaea64d47e2fc60fd105fcc);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain___isub__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___isub__);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc33a4a11175e2f6121f5d4971916acd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc33a4a11175e2f6121f5d4971916acd);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain___and__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___and__);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain___rand__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rand__);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcd94768f63dcb99de7caf450a935cf5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcd94768f63dcb99de7caf450a935cf5);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain___iand__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___iand__);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_6178fa75c0bbb9e76c5db23ee182ada9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6178fa75c0bbb9e76c5db23ee182ada9);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain___xor__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___xor__);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain___rxor__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rxor__);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_158dd2e5bce1c1255800dea3f5d51a14));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_158dd2e5bce1c1255800dea3f5d51a14);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain___ixor__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ixor__);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_union);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_e3f2571a0e15c96018507abef3fe4b36));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e3f2571a0e15c96018507abef3fe4b36);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain___or__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___or__);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain___ror__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ror__);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_fe8815e181e645f2c4f473d79d43ffe5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fe8815e181e645f2c4f473d79d43ffe5);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain___ior__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ior__);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain___reduce__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___reduce__);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_a71689f76476921d99f3dc7926947451));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a71689f76476921d99f3dc7926947451);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_9865f74f79a397597db2c5bdfad95a10));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9865f74f79a397597db2c5bdfad95a10);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_5cb22d88866212a5fe21a496babae901));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5cb22d88866212a5fe21a496babae901);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_ce086c7f35cd5f3e4f6ea98dee7d4884_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ce086c7f35cd5f3e4f6ea98dee7d4884_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_ec0f860d4f762c9fe2f6cbfc67bfe779));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ec0f860d4f762c9fe2f6cbfc67bfe779);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_efb8ae03aee18ee1af432d91e5a84514_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_efb8ae03aee18ee1af432d91e5a84514_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_e3987b8c12aaf256700abbced31daa21));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e3987b8c12aaf256700abbced31daa21);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_3a2ce96ce2e91d35a94529e53b437ce0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3a2ce96ce2e91d35a94529e53b437ce0_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_index_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_index_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_b4161e7beb8b28df4a423e9288d19f4a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b4161e7beb8b28df4a423e9288d19f4a_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_7059959527748f0671af0b7266fe79a4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7059959527748f0671af0b7266fe79a4_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_3b04f499bb1246ab4f5c76af68e07d68_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3b04f499bb1246ab4f5c76af68e07d68_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__set_str_plain__list_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain__set_str_plain__list_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_d01e535c58980da9d21fb535f8df51c7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d01e535c58980da9d21fb535f8df51c7_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_str_plain__set_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_value_str_plain__set_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_str_plain_set_op_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_other_str_plain_set_op_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_op_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_set_op_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_iterables_str_plain_diff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_iterables_str_plain_diff_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_da63ddd23fe75521d1a8f8a6d80a3ec7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_da63ddd23fe75521d1a8f8a6d80a3ec7_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_iterables_str_plain_intersect_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_iterables_str_plain_intersect_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_1bb81bad4b0274cd119bf55c6bc74a33_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1bb81bad4b0274cd119bf55c6bc74a33_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_index_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_index_str_plain_value_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_str_plain_diff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_other_str_plain_diff_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_aa8ee3e39b17a22cb74187237fa91589_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_aa8ee3e39b17a22cb74187237fa91589_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_iterables_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_iterables_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_2fb152d06d355a464a77fc3a62aa9ebe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2fb152d06d355a464a77fc3a62aa9ebe_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 15
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
static PyObject *module_var_accessor_sortedcontainers$sortedset$MutableSet(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sortedcontainers$sortedset->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sortedcontainers$sortedset->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableSet);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sortedcontainers$sortedset->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MutableSet);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MutableSet, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MutableSet);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MutableSet, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableSet);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableSet);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableSet);
    }

    return result;
}

static PyObject *module_var_accessor_sortedcontainers$sortedset$Sequence(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sortedcontainers$sortedset->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sortedcontainers$sortedset->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sortedcontainers$sortedset->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Sequence);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Sequence, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Sequence);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Sequence, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
    }

    return result;
}

static PyObject *module_var_accessor_sortedcontainers$sortedset$Set(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sortedcontainers$sortedset->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sortedcontainers$sortedset->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_Set);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sortedcontainers$sortedset->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Set);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Set, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Set);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Set, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_Set);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_Set);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Set);
    }

    return result;
}

static PyObject *module_var_accessor_sortedcontainers$sortedset$SortedList(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sortedcontainers$sortedset->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sortedcontainers$sortedset->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_SortedList);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sortedcontainers$sortedset->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SortedList);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SortedList, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SortedList);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SortedList, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_SortedList);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_SortedList);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SortedList);
    }

    return result;
}

static PyObject *module_var_accessor_sortedcontainers$sortedset$SortedSet(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sortedcontainers$sortedset->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sortedcontainers$sortedset->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_SortedSet);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sortedcontainers$sortedset->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SortedSet);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SortedSet, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SortedSet);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SortedSet, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_SortedSet);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_SortedSet);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SortedSet);
    }

    return result;
}

static PyObject *module_var_accessor_sortedcontainers$sortedset$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sortedcontainers$sortedset->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sortedcontainers$sortedset->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sortedcontainers$sortedset->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_sortedcontainers$sortedset$chain(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sortedcontainers$sortedset->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sortedcontainers$sortedset->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_chain);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sortedcontainers$sortedset->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_chain);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_chain, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_chain);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_chain, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_chain);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_chain);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_chain);
    }

    return result;
}

static PyObject *module_var_accessor_sortedcontainers$sortedset$dedent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sortedcontainers$sortedset->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sortedcontainers$sortedset->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_dedent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sortedcontainers$sortedset->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dedent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dedent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dedent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dedent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_dedent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_dedent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dedent);
    }

    return result;
}

static PyObject *module_var_accessor_sortedcontainers$sortedset$eq(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sortedcontainers$sortedset->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sortedcontainers$sortedset->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_eq);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sortedcontainers$sortedset->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_eq);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_eq, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_eq);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_eq, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_eq);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_eq);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_eq);
    }

    return result;
}

static PyObject *module_var_accessor_sortedcontainers$sortedset$ge(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sortedcontainers$sortedset->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sortedcontainers$sortedset->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_ge);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sortedcontainers$sortedset->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ge);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ge, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ge);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ge, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_ge);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_ge);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ge);
    }

    return result;
}

static PyObject *module_var_accessor_sortedcontainers$sortedset$gt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sortedcontainers$sortedset->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sortedcontainers$sortedset->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_gt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sortedcontainers$sortedset->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_gt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_gt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_gt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_gt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_gt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_gt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_gt);
    }

    return result;
}

static PyObject *module_var_accessor_sortedcontainers$sortedset$le(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sortedcontainers$sortedset->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sortedcontainers$sortedset->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_le);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sortedcontainers$sortedset->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_le);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_le, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_le);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_le, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_le);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_le);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_le);
    }

    return result;
}

static PyObject *module_var_accessor_sortedcontainers$sortedset$lt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sortedcontainers$sortedset->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sortedcontainers$sortedset->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_lt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sortedcontainers$sortedset->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_lt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_lt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lt);
    }

    return result;
}

static PyObject *module_var_accessor_sortedcontainers$sortedset$ne(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sortedcontainers$sortedset->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sortedcontainers$sortedset->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_ne);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sortedcontainers$sortedset->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ne);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ne, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ne);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ne, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_ne);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_ne);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ne);
    }

    return result;
}

static PyObject *module_var_accessor_sortedcontainers$sortedset$recursive_repr(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sortedcontainers$sortedset->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sortedcontainers$sortedset->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_recursive_repr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sortedcontainers$sortedset->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_recursive_repr);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_recursive_repr, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_recursive_repr);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_recursive_repr, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_recursive_repr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_recursive_repr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_recursive_repr);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_4cd4de9be4a43bd20c6043a78b774305;
static PyCodeObject *code_objects_727c9705e5f3cedcea20f7b93d7a02b3;
static PyCodeObject *code_objects_fea3e1ecb79cce5a8ac3fa3302dadd7a;
static PyCodeObject *code_objects_ea945a8c5cb4a8de4cddd56b7f3564f7;
static PyCodeObject *code_objects_68d8b2a8b7cf28b6858ecf676bbd0cb9;
static PyCodeObject *code_objects_f6adf5d2004c159c6caf92ba479c5eaa;
static PyCodeObject *code_objects_53b5d14b8d398b4a80425c83bd3b741b;
static PyCodeObject *code_objects_7fdbbcd5f6b98c346e39165e963451e9;
static PyCodeObject *code_objects_770088571764eb27d9ecd20f07fd4b92;
static PyCodeObject *code_objects_f197dd975d6655ac858c169918471128;
static PyCodeObject *code_objects_02bcf39363a49835c7fecd5d21ec5984;
static PyCodeObject *code_objects_0ad30f13e04f790f089b322ce53a0935;
static PyCodeObject *code_objects_b60bea375c606dc28cf1db9d19b6a03f;
static PyCodeObject *code_objects_ba381171bc51737ba30b5fa85a851838;
static PyCodeObject *code_objects_4b0c2f0b63e2b557e3df9bcbd598ed88;
static PyCodeObject *code_objects_10eebc75809bae91f87f83d51dab7ee8;
static PyCodeObject *code_objects_ec7bcf57c3f61ed65f742a9f87da1551;
static PyCodeObject *code_objects_5e12ea479df906bbd98ed82484a50a02;
static PyCodeObject *code_objects_a59f797a6bb4507be46c6e27ea392271;
static PyCodeObject *code_objects_2d3cb0ee56babd37004e776bce0a4d6b;
static PyCodeObject *code_objects_57f2960d3ffc0923a1d727983cf321aa;
static PyCodeObject *code_objects_1606c9e4f918161e276c6f6e91e108e3;
static PyCodeObject *code_objects_3009a11e08622bcb6eb4a0d21002d65c;
static PyCodeObject *code_objects_741b5be249fb9ae125d1eafd0d20589a;
static PyCodeObject *code_objects_8c66a773922b96dcf5b1a51b2f438e2f;
static PyCodeObject *code_objects_50474ce58298d921834dcd3b7a6c0cb5;
static PyCodeObject *code_objects_37e31e5c1a71a78764aaaad04885533b;
static PyCodeObject *code_objects_ec9d54740fde2fe2f9ea9fbb2eb125f2;
static PyCodeObject *code_objects_3da3e9021e9c45f365264b318f7cf880;
static PyCodeObject *code_objects_bb2c600ba4017ecbe5ab0e9218b1cbb3;
static PyCodeObject *code_objects_70adff210ed2183bd6c11fd96e2aaf4c;
static PyCodeObject *code_objects_2041fa0859929811e6c24ea5303ed944;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ec0f860d4f762c9fe2f6cbfc67bfe779); CHECK_OBJECT(module_filename_obj);
code_objects_4cd4de9be4a43bd20c6043a78b774305 = MAKE_CODE_OBJECT(module_filename_obj, 733, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_552169c893245100c32ccd458be50a73, mod_consts.const_tuple_efb8ae03aee18ee1af432d91e5a84514_tuple, NULL, 1, 0, 0);
code_objects_727c9705e5f3cedcea20f7b93d7a02b3 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_e3987b8c12aaf256700abbced31daa21, mod_consts.const_str_digest_e3987b8c12aaf256700abbced31daa21, NULL, NULL, 0, 0, 0);
code_objects_fea3e1ecb79cce5a8ac3fa3302dadd7a = MAKE_CODE_OBJECT(module_filename_obj, 36, 0, mod_consts.const_str_plain_SortedSet, mod_consts.const_str_plain_SortedSet, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ea945a8c5cb4a8de4cddd56b7f3564f7 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___contains__, mod_consts.const_str_digest_9ef6609d1dfff2445f723d69401a6601, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_68d8b2a8b7cf28b6858ecf676bbd0cb9 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___delitem__, mod_consts.const_str_digest_6a43f6c403a4d8737313e376e3e4d647, mod_consts.const_tuple_3a2ce96ce2e91d35a94529e53b437ce0_tuple, NULL, 2, 0, 0);
code_objects_f6adf5d2004c159c6caf92ba479c5eaa = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getitem__, mod_consts.const_str_digest_1c64461f03367f507c7afa42a4930b42, mod_consts.const_tuple_str_plain_self_str_plain_index_tuple, NULL, 2, 0, 0);
code_objects_53b5d14b8d398b4a80425c83bd3b741b = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_bb6e54d0a3ac32da6fd8ffecca3930f7, mod_consts.const_tuple_b4161e7beb8b28df4a423e9288d19f4a_tuple, NULL, 3, 0, 0);
code_objects_7fdbbcd5f6b98c346e39165e963451e9 = MAKE_CODE_OBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___iter__, mod_consts.const_str_digest_be7a2b43e9939aeb2273d00c69c102c7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_770088571764eb27d9ecd20f07fd4b92 = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___len__, mod_consts.const_str_digest_04d3fc359701f30870f9f4234a4e08f4, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f197dd975d6655ac858c169918471128 = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___make_cmp, mod_consts.const_str_digest_d1c42614487fb1bc1a54d088a520b78a, mod_consts.const_tuple_7059959527748f0671af0b7266fe79a4_tuple, NULL, 3, 0, 0);
code_objects_02bcf39363a49835c7fecd5d21ec5984 = MAKE_CODE_OBJECT(module_filename_obj, 698, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___reduce__, mod_consts.const_str_digest_a71689f76476921d99f3dc7926947451, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0ad30f13e04f790f089b322ce53a0935 = MAKE_CODE_OBJECT(module_filename_obj, 709, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_9865f74f79a397597db2c5bdfad95a10, mod_consts.const_tuple_3b04f499bb1246ab4f5c76af68e07d68_tuple, NULL, 1, 0, 0);
code_objects_b60bea375c606dc28cf1db9d19b6a03f = MAKE_CODE_OBJECT(module_filename_obj, 329, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___reversed__, mod_consts.const_str_digest_9f0ca106b6d27f7e027759fbaf084f65, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ba381171bc51737ba30b5fa85a851838 = MAKE_CODE_OBJECT(module_filename_obj, 723, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__check, mod_consts.const_str_digest_5cb22d88866212a5fe21a496babae901, mod_consts.const_tuple_str_plain_self_str_plain__set_str_plain__list_tuple, NULL, 1, 0, 0);
code_objects_4b0c2f0b63e2b557e3df9bcbd598ed88 = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__fromset, mod_consts.const_str_digest_c75f0a3d3c57e49ecdf5378e49fb5174, mod_consts.const_tuple_d01e535c58980da9d21fb535f8df51c7_tuple, NULL, 3, 0, 0);
code_objects_10eebc75809bae91f87f83d51dab7ee8 = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_add, mod_consts.const_str_digest_e1040cabfcd2de0261f809ffd5568c15, mod_consts.const_tuple_str_plain_self_str_plain_value_str_plain__set_tuple, NULL, 2, 0, 0);
code_objects_ec7bcf57c3f61ed65f742a9f87da1551 = MAKE_CODE_OBJECT(module_filename_obj, 364, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_clear, mod_consts.const_str_digest_128174ab39c59dd7d8e52c807ec7aea6, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5e12ea479df906bbd98ed82484a50a02 = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_comparer, mod_consts.const_str_digest_5609452bb90452e6c386d33afe65cfdb, mod_consts.const_tuple_str_plain_self_str_plain_other_str_plain_set_op_tuple, mod_consts.const_tuple_str_plain_set_op_tuple, 2, 0, 0);
code_objects_a59f797a6bb4507be46c6e27ea392271 = MAKE_CODE_OBJECT(module_filename_obj, 374, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_copy, mod_consts.const_str_digest_ab537564934c43141380ce866064a367, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2d3cb0ee56babd37004e776bce0a4d6b = MAKE_CODE_OBJECT(module_filename_obj, 387, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_count, mod_consts.const_str_digest_00952a36380f800bf0802f8d8314c4c7, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_57f2960d3ffc0923a1d727983cf321aa = MAKE_CODE_OBJECT(module_filename_obj, 480, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts.const_str_plain_difference, mod_consts.const_str_digest_0438127f5c4b0fad16c8bd4dc5e646ec, mod_consts.const_tuple_str_plain_self_str_plain_iterables_str_plain_diff_tuple, NULL, 1, 0, 0);
code_objects_1606c9e4f918161e276c6f6e91e108e3 = MAKE_CODE_OBJECT(module_filename_obj, 504, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts.const_str_plain_difference_update, mod_consts.const_str_digest_6e559a6c3eaea64d47e2fc60fd105fcc, mod_consts.const_tuple_da63ddd23fe75521d1a8f8a6d80a3ec7_tuple, NULL, 1, 0, 0);
code_objects_3009a11e08622bcb6eb4a0d21002d65c = MAKE_CODE_OBJECT(module_filename_obj, 403, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_discard, mod_consts.const_str_digest_aa20318cf1c589ef5f52fc55de1d235c, mod_consts.const_tuple_str_plain_self_str_plain_value_str_plain__set_tuple, NULL, 2, 0, 0);
code_objects_741b5be249fb9ae125d1eafd0d20589a = MAKE_CODE_OBJECT(module_filename_obj, 536, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts.const_str_plain_intersection, mod_consts.const_str_digest_bc33a4a11175e2f6121f5d4971916acd, mod_consts.const_tuple_str_plain_self_str_plain_iterables_str_plain_intersect_tuple, NULL, 1, 0, 0);
code_objects_8c66a773922b96dcf5b1a51b2f438e2f = MAKE_CODE_OBJECT(module_filename_obj, 561, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts.const_str_plain_intersection_update, mod_consts.const_str_digest_dcd94768f63dcb99de7caf450a935cf5, mod_consts.const_tuple_1bb81bad4b0274cd119bf55c6bc74a33_tuple, NULL, 1, 0, 0);
code_objects_50474ce58298d921834dcd3b7a6c0cb5 = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_key, mod_consts.const_str_digest_252d765b3b1352c29f63ee8e1355be5e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_37e31e5c1a71a78764aaaad04885533b = MAKE_CODE_OBJECT(module_filename_obj, 427, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_pop, mod_consts.const_str_digest_97956a0faaff817fbedd13d820babcff, mod_consts.const_tuple_str_plain_self_str_plain_index_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_ec9d54740fde2fe2f9ea9fbb2eb125f2 = MAKE_CODE_OBJECT(module_filename_obj, 456, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_remove, mod_consts.const_str_digest_608320a0298ca1df296c5a5ea325dd1a, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_3da3e9021e9c45f365264b318f7cf880 = MAKE_CODE_OBJECT(module_filename_obj, 589, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_symmetric_difference, mod_consts.const_str_digest_6178fa75c0bbb9e76c5db23ee182ada9, mod_consts.const_tuple_str_plain_self_str_plain_other_str_plain_diff_tuple, NULL, 2, 0, 0);
code_objects_bb2c600ba4017ecbe5ab0e9218b1cbb3 = MAKE_CODE_OBJECT(module_filename_obj, 614, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_symmetric_difference_update, mod_consts.const_str_digest_158dd2e5bce1c1255800dea3f5d51a14, mod_consts.const_tuple_aa8ee3e39b17a22cb74187237fa91589_tuple, NULL, 2, 0, 0);
code_objects_70adff210ed2183bd6c11fd96e2aaf4c = MAKE_CODE_OBJECT(module_filename_obj, 643, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts.const_str_plain_union, mod_consts.const_str_digest_e3f2571a0e15c96018507abef3fe4b36, mod_consts.const_tuple_str_plain_self_str_plain_iterables_tuple, NULL, 1, 0, 0);
code_objects_2041fa0859929811e6c24ea5303ed944 = MAKE_CODE_OBJECT(module_filename_obj, 664, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts.const_str_plain_update, mod_consts.const_str_digest_fe8815e181e645f2c4f473d79d43ffe5, mod_consts.const_tuple_2fb152d06d355a464a77fc3a62aa9ebe_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_sortedcontainers$sortedset$$$function__28__check$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__10___reversed__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__11_add(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__12_clear(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__13_copy(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__14_count(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__15_discard(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__16_pop(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__17_remove(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__18_difference(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__19_difference_update(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__1___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__20_intersection(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__21_intersection_update(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__22_symmetric_difference(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__23_symmetric_difference_update(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__24_union(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__25_update(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__26___reduce__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__27___repr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__28__check(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__2__fromset(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__3_key(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__4___contains__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__5___getitem__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__6___delitem__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__7___make_cmp(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__8___len__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__9___iter__(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_sortedcontainers$sortedset$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_iterable = python_pars[1];
PyObject *par_key = python_pars[2];
PyObject *var__set = NULL;
PyObject *var__list = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_53b5d14b8d398b4a80425c83bd3b741b, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__1___init__->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__1___init__ = cache_frame_frame_sortedcontainers$sortedset$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__1___init__);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_key);
tmp_assattr_value_1 = par_key;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__key, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain__set);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = PySet_New(NULL);
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__set, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_assattr_target_3;
tmp_called_value_1 = module_var_accessor_sortedcontainers$sortedset$SortedList(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SortedList);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__set);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_kw_call_dict_value_0_1 = par_key;
frame_frame_sortedcontainers$sortedset$$$function__1___init__->m_frame.f_lineno = 141;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assattr_value_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__list, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__set);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var__set == NULL);
var__set = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(var__set);
tmp_expression_value_4 = var__set;
tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_isdisjoint);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_isdisjoint, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(var__set);
tmp_expression_value_5 = var__set;
tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_issubset);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_issubset, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(var__set);
tmp_expression_value_6 = var__set;
tmp_assattr_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_issuperset);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_issuperset, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__list);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var__list == NULL);
var__list = tmp_assign_source_2;
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(var__list);
tmp_expression_value_8 = var__list;
tmp_assattr_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_bisect_left);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_bisect_left, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(var__list);
tmp_expression_value_9 = var__list;
tmp_assattr_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_bisect);
if (tmp_assattr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_bisect, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(var__list);
tmp_expression_value_10 = var__list;
tmp_assattr_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_bisect_right);
if (tmp_assattr_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_bisect_right, tmp_assattr_value_9);
CHECK_OBJECT(tmp_assattr_value_9);
Py_DECREF(tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_assattr_target_10;
CHECK_OBJECT(var__list);
tmp_expression_value_11 = var__list;
tmp_assattr_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_index);
if (tmp_assattr_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_index, tmp_assattr_value_10);
CHECK_OBJECT(tmp_assattr_value_10);
Py_DECREF(tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_assattr_target_11;
CHECK_OBJECT(var__list);
tmp_expression_value_12 = var__list;
tmp_assattr_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_irange);
if (tmp_assattr_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain_irange, tmp_assattr_value_11);
CHECK_OBJECT(tmp_assattr_value_11);
Py_DECREF(tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_assattr_target_12;
CHECK_OBJECT(var__list);
tmp_expression_value_13 = var__list;
tmp_assattr_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_islice);
if (tmp_assattr_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_12 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain_islice, tmp_assattr_value_12);
CHECK_OBJECT(tmp_assattr_value_12);
Py_DECREF(tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_assattr_target_13;
CHECK_OBJECT(var__list);
tmp_expression_value_14 = var__list;
tmp_assattr_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__reset);
if (tmp_assattr_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_13 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts.const_str_plain__reset, tmp_assattr_value_13);
CHECK_OBJECT(tmp_assattr_value_13);
Py_DECREF(tmp_assattr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_key);
tmp_cmp_expr_left_1 = par_key;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assattr_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_assattr_target_14;
CHECK_OBJECT(var__list);
tmp_expression_value_15 = var__list;
tmp_assattr_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_bisect_key_left);
if (tmp_assattr_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_14 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts.const_str_plain_bisect_key_left, tmp_assattr_value_14);
CHECK_OBJECT(tmp_assattr_value_14);
Py_DECREF(tmp_assattr_value_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_assattr_target_15;
CHECK_OBJECT(var__list);
tmp_expression_value_16 = var__list;
tmp_assattr_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_bisect_key_right);
if (tmp_assattr_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_15 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts.const_str_plain_bisect_key_right, tmp_assattr_value_15);
CHECK_OBJECT(tmp_assattr_value_15);
Py_DECREF(tmp_assattr_value_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_assattr_target_16;
CHECK_OBJECT(var__list);
tmp_expression_value_17 = var__list;
tmp_assattr_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_bisect_key);
if (tmp_assattr_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_16 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts.const_str_plain_bisect_key, tmp_assattr_value_16);
CHECK_OBJECT(tmp_assattr_value_16);
Py_DECREF(tmp_assattr_value_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_assattr_target_17;
CHECK_OBJECT(var__list);
tmp_expression_value_18 = var__list;
tmp_assattr_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_irange_key);
if (tmp_assattr_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_17 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts.const_str_plain_irange_key, tmp_assattr_value_17);
CHECK_OBJECT(tmp_assattr_value_17);
Py_DECREF(tmp_assattr_value_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_iterable);
tmp_cmp_expr_left_2 = par_iterable;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_iterable);
tmp_args_element_value_1 = par_iterable;
frame_frame_sortedcontainers$sortedset$$$function__1___init__->m_frame.f_lineno = 168;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__update, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__1___init__,
    type_description_1,
    par_self,
    par_iterable,
    par_key,
    var__set,
    var__list
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__1___init__ == cache_frame_frame_sortedcontainers$sortedset$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__1___init__);
    cache_frame_frame_sortedcontainers$sortedset$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__1___init__);

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
CHECK_OBJECT(var__set);
CHECK_OBJECT(var__set);
Py_DECREF(var__set);
var__set = NULL;
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

Py_XDECREF(var__set);
var__set = NULL;
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
CHECK_OBJECT(par_iterable);
Py_DECREF(par_iterable);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_iterable);
Py_DECREF(par_iterable);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sortedcontainers$sortedset$$$function__2__fromset(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_values = python_pars[1];
PyObject *par_key = python_pars[2];
PyObject *var_sorted_set = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__2__fromset;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__2__fromset = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__2__fromset)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__2__fromset);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__2__fromset == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__2__fromset = MAKE_FUNCTION_FRAME(tstate, code_objects_4b0c2f0b63e2b557e3df9bcbd598ed88, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__2__fromset->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__2__fromset = cache_frame_frame_sortedcontainers$sortedset$$$function__2__fromset;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__2__fromset);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__2__fromset) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_cls);
tmp_args_element_value_1 = par_cls;
frame_frame_sortedcontainers$sortedset$$$function__2__fromset->m_frame.f_lineno = 178;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain___new__, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_sorted_set == NULL);
var_sorted_set = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_values);
tmp_assattr_value_1 = par_values;
CHECK_OBJECT(var_sorted_set);
tmp_assattr_target_1 = var_sorted_set;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__set, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(var_sorted_set);
tmp_expression_value_1 = var_sorted_set;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_kw_call_value_0_1 = par_key;
frame_frame_sortedcontainers$sortedset$$$function__2__fromset->m_frame.f_lineno = 180;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__2__fromset, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__2__fromset->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__2__fromset, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__2__fromset,
    type_description_1,
    par_cls,
    par_values,
    par_key,
    var_sorted_set
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__2__fromset == cache_frame_frame_sortedcontainers$sortedset$$$function__2__fromset) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__2__fromset);
    cache_frame_frame_sortedcontainers$sortedset$$$function__2__fromset = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__2__fromset);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_sorted_set);
tmp_return_value = var_sorted_set;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_sorted_set);
CHECK_OBJECT(var_sorted_set);
Py_DECREF(var_sorted_set);
var_sorted_set = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_sorted_set);
var_sorted_set = NULL;
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
CHECK_OBJECT(par_values);
Py_DECREF(par_values);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_values);
Py_DECREF(par_values);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sortedcontainers$sortedset$$$function__3_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__3_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__3_key = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__3_key)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__3_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__3_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__3_key = MAKE_FUNCTION_FRAME(tstate, code_objects_50474ce58298d921834dcd3b7a6c0cb5, module_sortedcontainers$sortedset, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__3_key->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__3_key = cache_frame_frame_sortedcontainers$sortedset$$$function__3_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__3_key);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__3_key) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__key);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__3_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__3_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__3_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__3_key,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__3_key == cache_frame_frame_sortedcontainers$sortedset$$$function__3_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__3_key);
    cache_frame_frame_sortedcontainers$sortedset$$$function__3_key = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__3_key);

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


static PyObject *impl_sortedcontainers$sortedset$$$function__4___contains__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__4___contains__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__4___contains__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__4___contains__)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__4___contains__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__4___contains__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__4___contains__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ea945a8c5cb4a8de4cddd56b7f3564f7, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__4___contains__->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__4___contains__ = cache_frame_frame_sortedcontainers$sortedset$$$function__4___contains__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__4___contains__);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__4___contains__) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_1 = par_value;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__set);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__4___contains__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__4___contains__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__4___contains__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__4___contains__,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__4___contains__ == cache_frame_frame_sortedcontainers$sortedset$$$function__4___contains__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__4___contains__);
    cache_frame_frame_sortedcontainers$sortedset$$$function__4___contains__ = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__4___contains__);

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


static PyObject *impl_sortedcontainers$sortedset$$$function__5___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_index = python_pars[1];
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__5___getitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__5___getitem__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__5___getitem__)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__5___getitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__5___getitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__5___getitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f6adf5d2004c159c6caf92ba479c5eaa, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__5___getitem__->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__5___getitem__ = cache_frame_frame_sortedcontainers$sortedset$$$function__5___getitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__5___getitem__);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__5___getitem__) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__list);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_index);
tmp_subscript_value_1 = par_index;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__5___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__5___getitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__5___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__5___getitem__,
    type_description_1,
    par_self,
    par_index
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__5___getitem__ == cache_frame_frame_sortedcontainers$sortedset$$$function__5___getitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__5___getitem__);
    cache_frame_frame_sortedcontainers$sortedset$$$function__5___getitem__ = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__5___getitem__);

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


static PyObject *impl_sortedcontainers$sortedset$$$function__6___delitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_index = python_pars[1];
PyObject *var__set = NULL;
PyObject *var__list = NULL;
PyObject *var_values = NULL;
PyObject *var_value = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__6___delitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__6___delitem__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__6___delitem__)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__6___delitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__6___delitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__6___delitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_68d8b2a8b7cf28b6858ecf676bbd0cb9, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__6___delitem__->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__6___delitem__ = cache_frame_frame_sortedcontainers$sortedset$$$function__6___delitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__6___delitem__);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__6___delitem__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__set);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var__set == NULL);
var__set = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__list);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var__list == NULL);
var__list = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_index);
tmp_isinstance_inst_1 = par_index;
tmp_isinstance_cls_1 = (PyObject *)&PySlice_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var__list);
tmp_expression_value_3 = var__list;
CHECK_OBJECT(par_index);
tmp_subscript_value_1 = par_index;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_values == NULL);
var_values = tmp_assign_source_3;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var__set);
tmp_called_instance_1 = var__set;
CHECK_OBJECT(var_values);
tmp_args_element_value_1 = var_values;
frame_frame_sortedcontainers$sortedset$$$function__6___delitem__->m_frame.f_lineno = 262;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_difference_update, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var__list);
tmp_expression_value_4 = var__list;
CHECK_OBJECT(par_index);
tmp_subscript_value_2 = par_index;
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_value == NULL);
var_value = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var__set);
tmp_expression_value_5 = var__set;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_remove);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_value);
tmp_args_element_value_2 = var_value;
frame_frame_sortedcontainers$sortedset$$$function__6___delitem__->m_frame.f_lineno = 265;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_end_1:;
{
PyObject *tmp_delsubscr_target_1;
PyObject *tmp_delsubscr_subscript_1;
CHECK_OBJECT(var__list);
tmp_delsubscr_target_1 = var__list;
CHECK_OBJECT(par_index);
tmp_delsubscr_subscript_1 = par_index;
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__6___delitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__6___delitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__6___delitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__6___delitem__,
    type_description_1,
    par_self,
    par_index,
    var__set,
    var__list,
    var_values,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__6___delitem__ == cache_frame_frame_sortedcontainers$sortedset$$$function__6___delitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__6___delitem__);
    cache_frame_frame_sortedcontainers$sortedset$$$function__6___delitem__ = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__6___delitem__);

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
CHECK_OBJECT(var__set);
CHECK_OBJECT(var__set);
Py_DECREF(var__set);
var__set = NULL;
CHECK_OBJECT(var__list);
CHECK_OBJECT(var__list);
Py_DECREF(var__list);
var__list = NULL;
Py_XDECREF(var_values);
var_values = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__set);
var__set = NULL;
Py_XDECREF(var__list);
var__list = NULL;
Py_XDECREF(var_values);
var_values = NULL;
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


static PyObject *impl_sortedcontainers$sortedset$$$function__7___make_cmp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_set_op = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_symbol = python_pars[1];
PyObject *par_doc = python_pars[2];
PyObject *var_comparer = NULL;
PyObject *var_set_op_name = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_set_op;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_1 = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer(tstate, tmp_closure_1);

assert(var_comparer == NULL);
var_comparer = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp = MAKE_FUNCTION_FRAME(tstate, code_objects_f197dd975d6655ac858c169918471128, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp = cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_set_op));
tmp_expression_value_1 = Nuitka_Cell_GET(par_set_op);
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "cooooN";
    goto frame_exception_exit_1;
}
assert(var_set_op_name == NULL);
var_set_op_name = tmp_assign_source_2;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_assattr_target_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_6efa74f45155a2226fbf28b23ffee920;
CHECK_OBJECT(var_set_op_name);
tmp_kw_call_arg_value_1_1 = var_set_op_name;
frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp->m_frame.f_lineno = 280;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "cooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_comparer);
tmp_assattr_target_1 = var_comparer;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain___name__, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "cooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_assattr_target_2;
tmp_called_value_1 = module_var_accessor_sortedcontainers$sortedset$dedent(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dedent);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_1 = "cooooN";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_d83d2d547bd7dd99fb47ed8ce8ede6f9;
CHECK_OBJECT(par_doc);
tmp_kw_call_arg_value_1_2 = par_doc;
CHECK_OBJECT(var_set_op_name);
tmp_kw_call_arg_value_2_1 = var_set_op_name;
CHECK_OBJECT(par_symbol);
tmp_kw_call_arg_value_3_1 = par_symbol;
frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp->m_frame.f_lineno = 293;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "cooooN";
    goto frame_exception_exit_1;
}
frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp->m_frame.f_lineno = 293;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "cooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_comparer);
tmp_assattr_target_2 = var_comparer;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, const_str_plain___doc__, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "cooooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp,
    type_description_1,
    par_set_op,
    par_symbol,
    par_doc,
    var_comparer,
    var_set_op_name,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp == cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp);
    cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_comparer);
tmp_return_value = var_comparer;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_set_op);
CHECK_OBJECT(par_set_op);
Py_DECREF(par_set_op);
par_set_op = NULL;
CHECK_OBJECT(var_comparer);
CHECK_OBJECT(var_comparer);
Py_DECREF(var_comparer);
var_comparer = NULL;
CHECK_OBJECT(var_set_op_name);
CHECK_OBJECT(var_set_op_name);
Py_DECREF(var_set_op_name);
var_set_op_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_set_op);
CHECK_OBJECT(par_set_op);
Py_DECREF(par_set_op);
par_set_op = NULL;
CHECK_OBJECT(var_comparer);
CHECK_OBJECT(var_comparer);
Py_DECREF(var_comparer);
var_comparer = NULL;
Py_XDECREF(var_set_op_name);
var_set_op_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_symbol);
Py_DECREF(par_symbol);
CHECK_OBJECT(par_doc);
Py_DECREF(par_doc);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_symbol);
Py_DECREF(par_symbol);
CHECK_OBJECT(par_doc);
Py_DECREF(par_doc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer = MAKE_FUNCTION_FRAME(tstate, code_objects_5e12ea479df906bbd98ed82484a50a02, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer = cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_other);
tmp_isinstance_inst_1 = par_other;
tmp_isinstance_cls_1 = module_var_accessor_sortedcontainers$sortedset$SortedSet(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SortedSet);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 273;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooc";
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_op);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 274;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__set);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_2 = par_other;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__set);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 274;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer->m_frame.f_lineno = 274;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_other);
tmp_isinstance_inst_2 = par_other;
tmp_isinstance_cls_2 = module_var_accessor_sortedcontainers$sortedset$Set(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Set);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 275;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooc";
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
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_op);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 276;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__set);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_args_element_value_4 = par_other;
frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer->m_frame.f_lineno = 276;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer,
    type_description_1,
    par_self,
    par_other,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer == cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer);
    cache_frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_NotImplemented;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sortedcontainers$sortedset$$$function__8___len__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__8___len__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__8___len__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__8___len__)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__8___len__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__8___len__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__8___len__ = MAKE_FUNCTION_FRAME(tstate, code_objects_770088571764eb27d9ecd20f07fd4b92, module_sortedcontainers$sortedset, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__8___len__->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__8___len__ = cache_frame_frame_sortedcontainers$sortedset$$$function__8___len__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__8___len__);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__8___len__) == 2);

// Framed code:
{
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__set);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__8___len__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__8___len__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__8___len__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__8___len__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__8___len__ == cache_frame_frame_sortedcontainers$sortedset$$$function__8___len__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__8___len__);
    cache_frame_frame_sortedcontainers$sortedset$$$function__8___len__ = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__8___len__);

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


static PyObject *impl_sortedcontainers$sortedset$$$function__9___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__9___iter__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__9___iter__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__9___iter__)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__9___iter__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__9___iter__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__9___iter__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7fdbbcd5f6b98c346e39165e963451e9, module_sortedcontainers$sortedset, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__9___iter__->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__9___iter__ = cache_frame_frame_sortedcontainers$sortedset$$$function__9___iter__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__9___iter__);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__9___iter__) == 2);

// Framed code:
{
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__list);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__9___iter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__9___iter__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__9___iter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__9___iter__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__9___iter__ == cache_frame_frame_sortedcontainers$sortedset$$$function__9___iter__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__9___iter__);
    cache_frame_frame_sortedcontainers$sortedset$$$function__9___iter__ = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__9___iter__);

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


static PyObject *impl_sortedcontainers$sortedset$$$function__10___reversed__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__10___reversed__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__10___reversed__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__10___reversed__)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__10___reversed__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__10___reversed__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__10___reversed__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b60bea375c606dc28cf1db9d19b6a03f, module_sortedcontainers$sortedset, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__10___reversed__->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__10___reversed__ = cache_frame_frame_sortedcontainers$sortedset$$$function__10___reversed__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__10___reversed__);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__10___reversed__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = (PyObject *)&PyReversed_Type;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__list);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_sortedcontainers$sortedset$$$function__10___reversed__->m_frame.f_lineno = 338;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__10___reversed__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__10___reversed__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__10___reversed__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__10___reversed__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__10___reversed__ == cache_frame_frame_sortedcontainers$sortedset$$$function__10___reversed__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__10___reversed__);
    cache_frame_frame_sortedcontainers$sortedset$$$function__10___reversed__ = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__10___reversed__);

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


static PyObject *impl_sortedcontainers$sortedset$$$function__11_add(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *var__set = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__11_add;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__11_add = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__11_add)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__11_add);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__11_add == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__11_add = MAKE_FUNCTION_FRAME(tstate, code_objects_10eebc75809bae91f87f83d51dab7ee8, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__11_add->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__11_add = cache_frame_frame_sortedcontainers$sortedset$$$function__11_add;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__11_add);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__11_add) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__set);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var__set == NULL);
var__set = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_1 = par_value;
CHECK_OBJECT(var__set);
tmp_cmp_expr_right_1 = var__set;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var__set);
tmp_called_instance_1 = var__set;
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_sortedcontainers$sortedset$$$function__11_add->m_frame.f_lineno = 358;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_add, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__list);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_2 = par_value;
frame_frame_sortedcontainers$sortedset$$$function__11_add->m_frame.f_lineno = 359;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_add, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__11_add, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__11_add->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__11_add, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__11_add,
    type_description_1,
    par_self,
    par_value,
    var__set
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__11_add == cache_frame_frame_sortedcontainers$sortedset$$$function__11_add) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__11_add);
    cache_frame_frame_sortedcontainers$sortedset$$$function__11_add = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__11_add);

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
CHECK_OBJECT(var__set);
CHECK_OBJECT(var__set);
Py_DECREF(var__set);
var__set = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__set);
var__set = NULL;
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


static PyObject *impl_sortedcontainers$sortedset$$$function__12_clear(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__12_clear;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__12_clear = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__12_clear)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__12_clear);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__12_clear == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__12_clear = MAKE_FUNCTION_FRAME(tstate, code_objects_ec7bcf57c3f61ed65f742a9f87da1551, module_sortedcontainers$sortedset, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__12_clear->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__12_clear = cache_frame_frame_sortedcontainers$sortedset$$$function__12_clear;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__12_clear);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__12_clear) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__set);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_clear);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_sortedcontainers$sortedset$$$function__12_clear->m_frame.f_lineno = 370;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__list);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_clear);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_sortedcontainers$sortedset$$$function__12_clear->m_frame.f_lineno = 371;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__12_clear, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__12_clear->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__12_clear, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__12_clear,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__12_clear == cache_frame_frame_sortedcontainers$sortedset$$$function__12_clear) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__12_clear);
    cache_frame_frame_sortedcontainers$sortedset$$$function__12_clear = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__12_clear);

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


static PyObject *impl_sortedcontainers$sortedset$$$function__13_copy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__13_copy;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__13_copy = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__13_copy)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__13_copy);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__13_copy == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__13_copy = MAKE_FUNCTION_FRAME(tstate, code_objects_a59f797a6bb4507be46c6e27ea392271, module_sortedcontainers$sortedset, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__13_copy->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__13_copy = cache_frame_frame_sortedcontainers$sortedset$$$function__13_copy;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__13_copy);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__13_copy) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_set_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fromset);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_set_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__set);
if (tmp_set_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 382;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 382;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__key);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 382;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_sortedcontainers$sortedset$$$function__13_copy->m_frame.f_lineno = 382;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__13_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__13_copy->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__13_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__13_copy,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__13_copy == cache_frame_frame_sortedcontainers$sortedset$$$function__13_copy) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__13_copy);
    cache_frame_frame_sortedcontainers$sortedset$$$function__13_copy = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__13_copy);

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


static PyObject *impl_sortedcontainers$sortedset$$$function__14_count(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__14_count;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__14_count = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__14_count)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__14_count);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__14_count == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__14_count = MAKE_FUNCTION_FRAME(tstate, code_objects_2d3cb0ee56babd37004e776bce0a4d6b, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__14_count->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__14_count = cache_frame_frame_sortedcontainers$sortedset$$$function__14_count;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__14_count);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__14_count) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_1 = par_value;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__set);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_return_value = const_int_pos_1;
goto condexpr_end_1;
condexpr_false_1:;
tmp_return_value = const_int_0;
condexpr_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__14_count, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__14_count->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__14_count, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__14_count,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__14_count == cache_frame_frame_sortedcontainers$sortedset$$$function__14_count) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__14_count);
    cache_frame_frame_sortedcontainers$sortedset$$$function__14_count = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__14_count);

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


static PyObject *impl_sortedcontainers$sortedset$$$function__15_discard(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *var__set = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__15_discard;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__15_discard = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__15_discard)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__15_discard);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__15_discard == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__15_discard = MAKE_FUNCTION_FRAME(tstate, code_objects_3009a11e08622bcb6eb4a0d21002d65c, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__15_discard->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__15_discard = cache_frame_frame_sortedcontainers$sortedset$$$function__15_discard;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__15_discard);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__15_discard) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__set);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var__set == NULL);
var__set = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_1 = par_value;
CHECK_OBJECT(var__set);
tmp_cmp_expr_right_1 = var__set;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var__set);
tmp_expression_value_2 = var__set;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_remove);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_sortedcontainers$sortedset$$$function__15_discard->m_frame.f_lineno = 421;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__list);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_remove);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_2 = par_value;
frame_frame_sortedcontainers$sortedset$$$function__15_discard->m_frame.f_lineno = 422;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__15_discard, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__15_discard->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__15_discard, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__15_discard,
    type_description_1,
    par_self,
    par_value,
    var__set
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__15_discard == cache_frame_frame_sortedcontainers$sortedset$$$function__15_discard) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__15_discard);
    cache_frame_frame_sortedcontainers$sortedset$$$function__15_discard = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__15_discard);

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
CHECK_OBJECT(var__set);
CHECK_OBJECT(var__set);
Py_DECREF(var__set);
var__set = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__set);
var__set = NULL;
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


static PyObject *impl_sortedcontainers$sortedset$$$function__16_pop(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_index = python_pars[1];
PyObject *var_value = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__16_pop;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__16_pop = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__16_pop)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__16_pop);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__16_pop == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__16_pop = MAKE_FUNCTION_FRAME(tstate, code_objects_37e31e5c1a71a78764aaaad04885533b, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__16_pop->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__16_pop = cache_frame_frame_sortedcontainers$sortedset$$$function__16_pop;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__16_pop);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__16_pop) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__list);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pop);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_index);
tmp_args_element_value_1 = par_index;
frame_frame_sortedcontainers$sortedset$$$function__16_pop->m_frame.f_lineno = 451;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_value == NULL);
var_value = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__set);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_remove);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_value);
tmp_args_element_value_2 = var_value;
frame_frame_sortedcontainers$sortedset$$$function__16_pop->m_frame.f_lineno = 452;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__16_pop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__16_pop->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__16_pop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__16_pop,
    type_description_1,
    par_self,
    par_index,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__16_pop == cache_frame_frame_sortedcontainers$sortedset$$$function__16_pop) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__16_pop);
    cache_frame_frame_sortedcontainers$sortedset$$$function__16_pop = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__16_pop);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_value);
tmp_return_value = var_value;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
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


static PyObject *impl_sortedcontainers$sortedset$$$function__17_remove(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__17_remove;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__17_remove = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__17_remove)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__17_remove);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__17_remove == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__17_remove = MAKE_FUNCTION_FRAME(tstate, code_objects_ec9d54740fde2fe2f9ea9fbb2eb125f2, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__17_remove->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__17_remove = cache_frame_frame_sortedcontainers$sortedset$$$function__17_remove;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__17_remove);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__17_remove) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__set);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_remove);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_sortedcontainers$sortedset$$$function__17_remove->m_frame.f_lineno = 476;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__list);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_remove);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_2 = par_value;
frame_frame_sortedcontainers$sortedset$$$function__17_remove->m_frame.f_lineno = 477;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__17_remove, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__17_remove->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__17_remove, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__17_remove,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__17_remove == cache_frame_frame_sortedcontainers$sortedset$$$function__17_remove) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__17_remove);
    cache_frame_frame_sortedcontainers$sortedset$$$function__17_remove = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__17_remove);

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


static PyObject *impl_sortedcontainers$sortedset$$$function__18_difference(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_iterables = python_pars[1];
PyObject *var_diff = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__18_difference;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__18_difference = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__18_difference)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__18_difference);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__18_difference == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__18_difference = MAKE_FUNCTION_FRAME(tstate, code_objects_57f2960d3ffc0923a1d727983cf321aa, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__18_difference->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__18_difference = cache_frame_frame_sortedcontainers$sortedset$$$function__18_difference;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__18_difference);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__18_difference) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__set);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_difference);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_iterables);
tmp_direct_call_arg2_1 = par_iterables;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_diff == NULL);
var_diff = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__fromset);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_diff);
tmp_kw_call_arg_value_0_1 = var_diff;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__key);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 499;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_sortedcontainers$sortedset$$$function__18_difference->m_frame.f_lineno = 499;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__18_difference, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__18_difference->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__18_difference, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__18_difference,
    type_description_1,
    par_self,
    par_iterables,
    var_diff
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__18_difference == cache_frame_frame_sortedcontainers$sortedset$$$function__18_difference) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__18_difference);
    cache_frame_frame_sortedcontainers$sortedset$$$function__18_difference = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__18_difference);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_diff);
CHECK_OBJECT(var_diff);
Py_DECREF(var_diff);
var_diff = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_diff);
var_diff = NULL;
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
CHECK_OBJECT(par_iterables);
Py_DECREF(par_iterables);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_iterables);
Py_DECREF(par_iterables);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sortedcontainers$sortedset$$$function__19_difference_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_iterables = python_pars[1];
PyObject *var__set = NULL;
PyObject *var__list = NULL;
PyObject *var_values = NULL;
PyObject *var__discard = NULL;
PyObject *var_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__19_difference_update;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__19_difference_update = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__19_difference_update)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__19_difference_update);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__19_difference_update == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__19_difference_update = MAKE_FUNCTION_FRAME(tstate, code_objects_1606c9e4f918161e276c6f6e91e108e3, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__19_difference_update->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__19_difference_update = cache_frame_frame_sortedcontainers$sortedset$$$function__19_difference_update;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__19_difference_update);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__19_difference_update) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__set);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var__set == NULL);
var__set = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__list);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var__list == NULL);
var__list = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_set_arg_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
tmp_direct_call_arg1_1 = module_var_accessor_sortedcontainers$sortedset$chain(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chain);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 522;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_iterables);
tmp_direct_call_arg2_1 = par_iterables;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_set_arg_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_set_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_values == NULL);
var_values = tmp_assign_source_3;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_len_arg_2;
tmp_mult_expr_left_1 = mod_consts.const_int_pos_4;
CHECK_OBJECT(var_values);
tmp_len_arg_1 = var_values;
tmp_mult_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_mult_expr_right_1 == NULL));
tmp_cmp_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_right_1, tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
CHECK_OBJECT(var__set);
tmp_len_arg_2 = var__set;
tmp_cmp_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 523;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_LE_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
tmp_condition_result_1 = !tmp_condition_result_1;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var__set);
tmp_called_instance_1 = var__set;
CHECK_OBJECT(var_values);
tmp_args_element_value_1 = var_values;
frame_frame_sortedcontainers$sortedset$$$function__19_difference_update->m_frame.f_lineno = 524;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_difference_update, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var__list);
tmp_expression_value_3 = var__list;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_clear);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_sortedcontainers$sortedset$$$function__19_difference_update->m_frame.f_lineno = 525;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var__list);
tmp_expression_value_4 = var__list;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__set);
tmp_args_element_value_2 = var__set;
frame_frame_sortedcontainers$sortedset$$$function__19_difference_update->m_frame.f_lineno = 526;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__discard);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var__discard == NULL);
var__discard = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_values);
tmp_iter_arg_1 = var_values;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
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
tmp_assign_source_6 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooo";
exception_lineno = 529;
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
    PyObject *old = var_value;
    var_value = tmp_assign_source_7;
    Py_INCREF(var_value);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_3;
if (var__discard == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain__discard);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 530;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_called_value_3 = var__discard;
CHECK_OBJECT(var_value);
tmp_args_element_value_3 = var_value;
frame_frame_sortedcontainers$sortedset$$$function__19_difference_update->m_frame.f_lineno = 530;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
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
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__19_difference_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__19_difference_update->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__19_difference_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__19_difference_update,
    type_description_1,
    par_self,
    par_iterables,
    var__set,
    var__list,
    var_values,
    var__discard,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__19_difference_update == cache_frame_frame_sortedcontainers$sortedset$$$function__19_difference_update) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__19_difference_update);
    cache_frame_frame_sortedcontainers$sortedset$$$function__19_difference_update = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__19_difference_update);

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
CHECK_OBJECT(var__set);
CHECK_OBJECT(var__set);
Py_DECREF(var__set);
var__set = NULL;
CHECK_OBJECT(var__list);
CHECK_OBJECT(var__list);
Py_DECREF(var__list);
var__list = NULL;
CHECK_OBJECT(var_values);
CHECK_OBJECT(var_values);
Py_DECREF(var_values);
var_values = NULL;
Py_XDECREF(var__discard);
var__discard = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__set);
var__set = NULL;
Py_XDECREF(var__list);
var__list = NULL;
Py_XDECREF(var_values);
var_values = NULL;
Py_XDECREF(var__discard);
var__discard = NULL;
Py_XDECREF(var_value);
var_value = NULL;
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
CHECK_OBJECT(par_iterables);
Py_DECREF(par_iterables);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_iterables);
Py_DECREF(par_iterables);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sortedcontainers$sortedset$$$function__20_intersection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_iterables = python_pars[1];
PyObject *var_intersect = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__20_intersection;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__20_intersection = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__20_intersection)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__20_intersection);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__20_intersection == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__20_intersection = MAKE_FUNCTION_FRAME(tstate, code_objects_741b5be249fb9ae125d1eafd0d20589a, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__20_intersection->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__20_intersection = cache_frame_frame_sortedcontainers$sortedset$$$function__20_intersection;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__20_intersection);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__20_intersection) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__set);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_intersection);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_iterables);
tmp_direct_call_arg2_1 = par_iterables;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_intersect == NULL);
var_intersect = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__fromset);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_intersect);
tmp_kw_call_arg_value_0_1 = var_intersect;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__key);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 555;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_sortedcontainers$sortedset$$$function__20_intersection->m_frame.f_lineno = 555;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__20_intersection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__20_intersection->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__20_intersection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__20_intersection,
    type_description_1,
    par_self,
    par_iterables,
    var_intersect
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__20_intersection == cache_frame_frame_sortedcontainers$sortedset$$$function__20_intersection) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__20_intersection);
    cache_frame_frame_sortedcontainers$sortedset$$$function__20_intersection = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__20_intersection);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_intersect);
CHECK_OBJECT(var_intersect);
Py_DECREF(var_intersect);
var_intersect = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_intersect);
var_intersect = NULL;
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
CHECK_OBJECT(par_iterables);
Py_DECREF(par_iterables);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_iterables);
Py_DECREF(par_iterables);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sortedcontainers$sortedset$$$function__21_intersection_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_iterables = python_pars[1];
PyObject *var__set = NULL;
PyObject *var__list = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update = MAKE_FUNCTION_FRAME(tstate, code_objects_8c66a773922b96dcf5b1a51b2f438e2f, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update = cache_frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__set);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var__set == NULL);
var__set = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__list);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var__list == NULL);
var__list = tmp_assign_source_2;
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var__set);
tmp_expression_value_3 = var__set;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_intersection_update);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_iterables);
tmp_direct_call_arg2_1 = par_iterables;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var__list);
tmp_expression_value_4 = var__list;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_clear);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update->m_frame.f_lineno = 582;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var__list);
tmp_expression_value_5 = var__list;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 583;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__set);
tmp_args_element_value_1 = var__set;
frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update->m_frame.f_lineno = 583;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 583;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update,
    type_description_1,
    par_self,
    par_iterables,
    var__set,
    var__list
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update == cache_frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update);
    cache_frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__21_intersection_update);

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
CHECK_OBJECT(var__set);
CHECK_OBJECT(var__set);
Py_DECREF(var__set);
var__set = NULL;
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

Py_XDECREF(var__set);
var__set = NULL;
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
CHECK_OBJECT(par_iterables);
Py_DECREF(par_iterables);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_iterables);
Py_DECREF(par_iterables);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sortedcontainers$sortedset$$$function__22_symmetric_difference(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
PyObject *var_diff = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference = MAKE_FUNCTION_FRAME(tstate, code_objects_3da3e9021e9c45f365264b318f7cf880, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference = cache_frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__set);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_args_element_value_1 = par_other;
frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference->m_frame.f_lineno = 607;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_symmetric_difference, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_diff == NULL);
var_diff = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__fromset);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 608;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_diff);
tmp_kw_call_arg_value_0_1 = var_diff;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__key);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 608;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference->m_frame.f_lineno = 608;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 608;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference,
    type_description_1,
    par_self,
    par_other,
    var_diff
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference == cache_frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference);
    cache_frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__22_symmetric_difference);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_diff);
CHECK_OBJECT(var_diff);
Py_DECREF(var_diff);
var_diff = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_diff);
var_diff = NULL;
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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sortedcontainers$sortedset$$$function__23_symmetric_difference_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
PyObject *var__set = NULL;
PyObject *var__list = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update = MAKE_FUNCTION_FRAME(tstate, code_objects_bb2c600ba4017ecbe5ab0e9218b1cbb3, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update = cache_frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__set);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 633;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var__set == NULL);
var__set = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__list);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var__list == NULL);
var__list = tmp_assign_source_2;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var__set);
tmp_called_instance_1 = var__set;
CHECK_OBJECT(par_other);
tmp_args_element_value_1 = par_other;
frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update->m_frame.f_lineno = 635;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_symmetric_difference_update, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 635;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var__list);
tmp_expression_value_3 = var__list;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_clear);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 636;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update->m_frame.f_lineno = 636;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 636;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var__list);
tmp_expression_value_4 = var__list;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__set);
tmp_args_element_value_2 = var__set;
frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update->m_frame.f_lineno = 637;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update,
    type_description_1,
    par_self,
    par_other,
    var__set,
    var__list
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update == cache_frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update);
    cache_frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__23_symmetric_difference_update);

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
CHECK_OBJECT(var__set);
CHECK_OBJECT(var__set);
Py_DECREF(var__set);
var__set = NULL;
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

Py_XDECREF(var__set);
var__set = NULL;
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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sortedcontainers$sortedset$$$function__24_union(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_iterables = python_pars[1];
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__24_union;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__24_union = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__24_union)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__24_union);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__24_union == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__24_union = MAKE_FUNCTION_FRAME(tstate, code_objects_70adff210ed2183bd6c11fd96e2aaf4c, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__24_union->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__24_union = cache_frame_frame_sortedcontainers$sortedset$$$function__24_union;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__24_union);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__24_union) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 658;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = module_var_accessor_sortedcontainers$sortedset$chain(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chain);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 658;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_iter_arg_1 = par_self;
tmp_tuple_element_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 658;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_iterables);
tmp_direct_call_arg3_1 = par_iterables;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_kw_call_arg_value_0_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 658;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__key);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 658;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_sortedcontainers$sortedset$$$function__24_union->m_frame.f_lineno = 658;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 658;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__24_union, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__24_union->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__24_union, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__24_union,
    type_description_1,
    par_self,
    par_iterables
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__24_union == cache_frame_frame_sortedcontainers$sortedset$$$function__24_union) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__24_union);
    cache_frame_frame_sortedcontainers$sortedset$$$function__24_union = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__24_union);

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
CHECK_OBJECT(par_iterables);
Py_DECREF(par_iterables);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_iterables);
Py_DECREF(par_iterables);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sortedcontainers$sortedset$$$function__25_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_iterables = python_pars[1];
PyObject *var__set = NULL;
PyObject *var__list = NULL;
PyObject *var_values = NULL;
PyObject *var__add = NULL;
PyObject *var_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__25_update;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__25_update = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__25_update)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__25_update);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__25_update == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__25_update = MAKE_FUNCTION_FRAME(tstate, code_objects_2041fa0859929811e6c24ea5303ed944, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__25_update->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__25_update = cache_frame_frame_sortedcontainers$sortedset$$$function__25_update;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__25_update);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__25_update) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__set);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 680;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var__set == NULL);
var__set = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__list);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 681;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var__list == NULL);
var__list = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_set_arg_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
tmp_direct_call_arg1_1 = module_var_accessor_sortedcontainers$sortedset$chain(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chain);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 682;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_iterables);
tmp_direct_call_arg2_1 = par_iterables;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_set_arg_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_set_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 682;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 682;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_values == NULL);
var_values = tmp_assign_source_3;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_len_arg_2;
tmp_mult_expr_left_1 = mod_consts.const_int_pos_4;
CHECK_OBJECT(var_values);
tmp_len_arg_1 = var_values;
tmp_mult_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_mult_expr_right_1 == NULL));
tmp_cmp_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_right_1, tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
CHECK_OBJECT(var__set);
tmp_len_arg_2 = var__set;
tmp_cmp_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 683;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_LE_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
tmp_condition_result_1 = !tmp_condition_result_1;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__list);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 684;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var__list;
    assert(old != NULL);
    var__list = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var__set);
tmp_expression_value_4 = var__set;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_update);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 685;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_values);
tmp_args_element_value_1 = var_values;
frame_frame_sortedcontainers$sortedset$$$function__25_update->m_frame.f_lineno = 685;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 685;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var__list);
tmp_expression_value_5 = var__list;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_clear);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 686;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_sortedcontainers$sortedset$$$function__25_update->m_frame.f_lineno = 686;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 686;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var__list);
tmp_expression_value_6 = var__list;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_update);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 687;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__set);
tmp_args_element_value_2 = var__set;
frame_frame_sortedcontainers$sortedset$$$function__25_update->m_frame.f_lineno = 687;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 687;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__add);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 689;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var__add == NULL);
var__add = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_values);
tmp_iter_arg_1 = var_values;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 690;
type_description_1 = "ooooooo";
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
type_description_1 = "ooooooo";
exception_lineno = 690;
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
    PyObject *old = var_value;
    var_value = tmp_assign_source_8;
    Py_INCREF(var_value);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_3;
if (var__add == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain__add);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 691;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_called_value_4 = var__add;
CHECK_OBJECT(var_value);
tmp_args_element_value_3 = var_value;
frame_frame_sortedcontainers$sortedset$$$function__25_update->m_frame.f_lineno = 691;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 691;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 690;
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
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__25_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__25_update->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__25_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__25_update,
    type_description_1,
    par_self,
    par_iterables,
    var__set,
    var__list,
    var_values,
    var__add,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__25_update == cache_frame_frame_sortedcontainers$sortedset$$$function__25_update) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__25_update);
    cache_frame_frame_sortedcontainers$sortedset$$$function__25_update = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__25_update);

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
CHECK_OBJECT(var__set);
CHECK_OBJECT(var__set);
Py_DECREF(var__set);
var__set = NULL;
Py_XDECREF(var__list);
var__list = NULL;
CHECK_OBJECT(var_values);
CHECK_OBJECT(var_values);
Py_DECREF(var_values);
var_values = NULL;
Py_XDECREF(var__add);
var__add = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__set);
var__set = NULL;
Py_XDECREF(var__list);
var__list = NULL;
Py_XDECREF(var_values);
var_values = NULL;
Py_XDECREF(var__add);
var__add = NULL;
Py_XDECREF(var_value);
var_value = NULL;
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
CHECK_OBJECT(par_iterables);
Py_DECREF(par_iterables);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_iterables);
Py_DECREF(par_iterables);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sortedcontainers$sortedset$$$function__26___reduce__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__26___reduce__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__26___reduce__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__26___reduce__)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__26___reduce__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__26___reduce__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__26___reduce__ = MAKE_FUNCTION_FRAME(tstate, code_objects_02bcf39363a49835c7fecd5d21ec5984, module_sortedcontainers$sortedset, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__26___reduce__->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__26___reduce__ = cache_frame_frame_sortedcontainers$sortedset$$$function__26___reduce__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__26___reduce__);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__26___reduce__) == 2);

// Framed code:
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_self);
tmp_type_arg_1 = par_self;
tmp_tuple_element_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_tuple_element_1 == NULL));
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_1;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__set);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 705;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__key);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 705;
type_description_1 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_tuple_element_1);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__26___reduce__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__26___reduce__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__26___reduce__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__26___reduce__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__26___reduce__ == cache_frame_frame_sortedcontainers$sortedset$$$function__26___reduce__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__26___reduce__);
    cache_frame_frame_sortedcontainers$sortedset$$$function__26___reduce__ = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__26___reduce__);

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


static PyObject *impl_sortedcontainers$sortedset$$$function__27___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var__key = NULL;
PyObject *var_key = NULL;
PyObject *var_type_name = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__27___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__27___repr__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__27___repr__)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__27___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__27___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__27___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0ad30f13e04f790f089b322ce53a0935, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__27___repr__->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__27___repr__ = cache_frame_frame_sortedcontainers$sortedset$$$function__27___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__27___repr__);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__27___repr__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__key);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 717;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var__key == NULL);
var__key = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
CHECK_OBJECT(var__key);
tmp_cmp_expr_left_1 = var__key;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_2 = const_str_empty;
Py_INCREF(tmp_assign_source_2);
goto condexpr_end_1;
condexpr_false_1:;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_f431c6246db6b4bad86c2af5626fd32d;
CHECK_OBJECT(var__key);
tmp_kw_call_arg_value_1_1 = var__key;
frame_frame_sortedcontainers$sortedset$$$function__27___repr__->m_frame.f_lineno = 718;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 718;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_key == NULL);
var_key = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_self);
tmp_type_arg_1 = par_self;
tmp_expression_value_2 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_2 == NULL));
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 719;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_type_name == NULL);
var_type_name = tmp_assign_source_3;
}
{
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_kw_call_arg_value_3_1;
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_8bceca102421f811d413c50ec4a281ac;
CHECK_OBJECT(var_type_name);
tmp_kw_call_arg_value_1_2 = var_type_name;
CHECK_OBJECT(par_self);
tmp_list_arg_1 = par_self;
tmp_kw_call_arg_value_2_1 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 720;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_key);
tmp_kw_call_arg_value_3_1 = var_key;
frame_frame_sortedcontainers$sortedset$$$function__27___repr__->m_frame.f_lineno = 720;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 720;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__27___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__27___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__27___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__27___repr__,
    type_description_1,
    par_self,
    var__key,
    var_key,
    var_type_name
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__27___repr__ == cache_frame_frame_sortedcontainers$sortedset$$$function__27___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__27___repr__);
    cache_frame_frame_sortedcontainers$sortedset$$$function__27___repr__ = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__27___repr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var__key);
CHECK_OBJECT(var__key);
Py_DECREF(var__key);
var__key = NULL;
CHECK_OBJECT(var_key);
CHECK_OBJECT(var_key);
Py_DECREF(var_key);
var_key = NULL;
CHECK_OBJECT(var_type_name);
CHECK_OBJECT(var_type_name);
Py_DECREF(var_type_name);
var_type_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__key);
var__key = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_type_name);
var_type_name = NULL;
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


static PyObject *impl_sortedcontainers$sortedset$$$function__28__check(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_CellObject *var__set = Nuitka_Cell_NewEmpty();
PyObject *var__list = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$function__28__check;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_sortedcontainers$sortedset$$$function__28__check = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_sortedcontainers$sortedset$$$function__28__check)) {
    Py_XDECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__28__check);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_sortedcontainers$sortedset$$$function__28__check == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_sortedcontainers$sortedset$$$function__28__check = MAKE_FUNCTION_FRAME(tstate, code_objects_ba381171bc51737ba30b5fa85a851838, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_sortedcontainers$sortedset$$$function__28__check->m_type_description == NULL);
frame_frame_sortedcontainers$sortedset$$$function__28__check = cache_frame_frame_sortedcontainers$sortedset$$$function__28__check;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$function__28__check);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$function__28__check) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__set);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 729;
type_description_1 = "oco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var__set) == NULL);
Nuitka_Cell_SET(var__set, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__list);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 730;
type_description_1 = "oco";
    goto frame_exception_exit_1;
}
assert(var__list == NULL);
var__list = tmp_assign_source_2;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var__list);
tmp_called_instance_1 = var__list;
frame_frame_sortedcontainers$sortedset$$$function__28__check->m_frame.f_lineno = 731;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__check);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 731;
type_description_1 = "oco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(Nuitka_Cell_GET(var__set));
tmp_len_arg_1 = Nuitka_Cell_GET(var__set);
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 732;
type_description_1 = "oco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__list);
tmp_len_arg_2 = var__list;
tmp_cmp_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 732;
type_description_1 = "oco";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
tmp_condition_result_1 = !tmp_condition_result_1;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
frame_frame_sortedcontainers$sortedset$$$function__28__check->m_frame.f_lineno = 732;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 732;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oco";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_all_arg_1;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var__list);
tmp_iter_arg_1 = var__list;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 733;
type_description_1 = "oco";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_3;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = var__set;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_all_arg_1 = MAKE_GENERATOR_sortedcontainers$sortedset$$$function__28__check$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_operand_value_1 = BUILTIN_ALL(tstate, tmp_all_arg_1);
CHECK_OBJECT(tmp_all_arg_1);
Py_DECREF(tmp_all_arg_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 733;
type_description_1 = "oco";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
assert(!(tmp_res == -1));
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
frame_frame_sortedcontainers$sortedset$$$function__28__check->m_frame.f_lineno = 733;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 733;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oco";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$function__28__check, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$function__28__check->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$function__28__check, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$function__28__check,
    type_description_1,
    par_self,
    var__set,
    var__list
);


// Release cached frame if used for exception.
if (frame_frame_sortedcontainers$sortedset$$$function__28__check == cache_frame_frame_sortedcontainers$sortedset$$$function__28__check) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_sortedcontainers$sortedset$$$function__28__check);
    cache_frame_frame_sortedcontainers$sortedset$$$function__28__check = NULL;
}

assertFrameObject(frame_frame_sortedcontainers$sortedset$$$function__28__check);

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
CHECK_OBJECT(var__set);
CHECK_OBJECT(var__set);
Py_DECREF(var__set);
var__set = NULL;
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

CHECK_OBJECT(var__set);
CHECK_OBJECT(var__set);
Py_DECREF(var__set);
var__set = NULL;
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



#if 1
struct sortedcontainers$sortedset$$$function__28__check$$$genexpr__1_genexpr_locals {
PyObject *var_value;
PyObject *tmp_iter_value_0;
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

static PyObject *sortedcontainers$sortedset$$$function__28__check$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct sortedcontainers$sortedset$$$function__28__check$$$genexpr__1_genexpr_locals *generator_heap = (struct sortedcontainers$sortedset$$$function__28__check$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_4cd4de9be4a43bd20c6043a78b774305, module_sortedcontainers$sortedset, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 733;
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
    PyObject *old = generator_heap->var_value;
    generator_heap->var_value = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_value);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_value);
tmp_cmp_expr_left_1 = generator_heap->var_value;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__set);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 733;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 733;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_expression_value_1 = (generator_heap->tmp_res == 1) ? Py_True : Py_False;
Py_INCREF(tmp_expression_value_1);
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 733;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 733;
generator_heap->type_description_1 = "Noc";
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
    generator_heap->var_value,
    generator->m_closure[0]
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

Py_XDECREF(generator_heap->var_value);
generator_heap->var_value = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_value);
generator_heap->var_value = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_sortedcontainers$sortedset$$$function__28__check$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        sortedcontainers$sortedset$$$function__28__check$$$genexpr__1_genexpr_context,
        module_sortedcontainers$sortedset,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_552169c893245100c32ccd458be50a73,
#endif
        code_objects_4cd4de9be4a43bd20c6043a78b774305,
        closure,
        2,
#if 1
        sizeof(struct sortedcontainers$sortedset$$$function__28__check$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__10___reversed__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__10___reversed__,
        mod_consts.const_str_plain___reversed__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9f0ca106b6d27f7e027759fbaf084f65,
#endif
        code_objects_b60bea375c606dc28cf1db9d19b6a03f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_7f64a001cb5d2c230db68c64b626c706,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__11_add(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__11_add,
        mod_consts.const_str_plain_add,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e1040cabfcd2de0261f809ffd5568c15,
#endif
        code_objects_10eebc75809bae91f87f83d51dab7ee8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_a10b5af8a1d8a0707030d945568419b7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__12_clear(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__12_clear,
        mod_consts.const_str_plain_clear,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_128174ab39c59dd7d8e52c807ec7aea6,
#endif
        code_objects_ec7bcf57c3f61ed65f742a9f87da1551,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_c88a319cccbbe7d2717b1f71b45d5f76,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__13_copy(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__13_copy,
        mod_consts.const_str_plain_copy,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ab537564934c43141380ce866064a367,
#endif
        code_objects_a59f797a6bb4507be46c6e27ea392271,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_d11976b365740f1b3e5942eb6822b7fc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__14_count(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__14_count,
        mod_consts.const_str_plain_count,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_00952a36380f800bf0802f8d8314c4c7,
#endif
        code_objects_2d3cb0ee56babd37004e776bce0a4d6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_af6b2f8378903364eb991b39f357afba,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__15_discard(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__15_discard,
        mod_consts.const_str_plain_discard,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aa20318cf1c589ef5f52fc55de1d235c,
#endif
        code_objects_3009a11e08622bcb6eb4a0d21002d65c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_d091733d0f551a02e3f912820dedd239,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__16_pop(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__16_pop,
        mod_consts.const_str_plain_pop,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_97956a0faaff817fbedd13d820babcff,
#endif
        code_objects_37e31e5c1a71a78764aaaad04885533b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_8ca2b5189d379db0d9c33a70c061bf59,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__17_remove(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__17_remove,
        mod_consts.const_str_plain_remove,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_608320a0298ca1df296c5a5ea325dd1a,
#endif
        code_objects_ec9d54740fde2fe2f9ea9fbb2eb125f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_880349b38af1e52fe327ec20a59b0f49,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__18_difference(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__18_difference,
        mod_consts.const_str_plain_difference,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0438127f5c4b0fad16c8bd4dc5e646ec,
#endif
        code_objects_57f2960d3ffc0923a1d727983cf321aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_1195af88b9fb515b8e6fa38b71dcca66,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__19_difference_update(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__19_difference_update,
        mod_consts.const_str_plain_difference_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6e559a6c3eaea64d47e2fc60fd105fcc,
#endif
        code_objects_1606c9e4f918161e276c6f6e91e108e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_b44206f8e8b88da56e7512d81c2d0d44,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__1___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bb6e54d0a3ac32da6fd8ffecca3930f7,
#endif
        code_objects_53b5d14b8d398b4a80425c83bd3b741b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_7550a45a947d7b361a42dab99e6c7cb1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__20_intersection(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__20_intersection,
        mod_consts.const_str_plain_intersection,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bc33a4a11175e2f6121f5d4971916acd,
#endif
        code_objects_741b5be249fb9ae125d1eafd0d20589a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_87367e37579ba815bdc915d85f0bb145,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__21_intersection_update(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__21_intersection_update,
        mod_consts.const_str_plain_intersection_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dcd94768f63dcb99de7caf450a935cf5,
#endif
        code_objects_8c66a773922b96dcf5b1a51b2f438e2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_3bcc948228384e566cb6ae568ae592b8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__22_symmetric_difference(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__22_symmetric_difference,
        mod_consts.const_str_plain_symmetric_difference,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6178fa75c0bbb9e76c5db23ee182ada9,
#endif
        code_objects_3da3e9021e9c45f365264b318f7cf880,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_3749ecaaa308eaeb8fde82f7470b271c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__23_symmetric_difference_update(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__23_symmetric_difference_update,
        mod_consts.const_str_plain_symmetric_difference_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_158dd2e5bce1c1255800dea3f5d51a14,
#endif
        code_objects_bb2c600ba4017ecbe5ab0e9218b1cbb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_2d02042518cb6b1e43059d31328255bf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__24_union(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__24_union,
        mod_consts.const_str_plain_union,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e3f2571a0e15c96018507abef3fe4b36,
#endif
        code_objects_70adff210ed2183bd6c11fd96e2aaf4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_4b1dd46cb30b817d2be2cc543e862c33,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__25_update(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__25_update,
        mod_consts.const_str_plain_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fe8815e181e645f2c4f473d79d43ffe5,
#endif
        code_objects_2041fa0859929811e6c24ea5303ed944,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_ae0c4d9ff8ef09a185191e22db941b22,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__26___reduce__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__26___reduce__,
        mod_consts.const_str_plain___reduce__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a71689f76476921d99f3dc7926947451,
#endif
        code_objects_02bcf39363a49835c7fecd5d21ec5984,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_e19789a9635c2cde57ea2283de89b88c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__27___repr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__27___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9865f74f79a397597db2c5bdfad95a10,
#endif
        code_objects_0ad30f13e04f790f089b322ce53a0935,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_a1ce55383515a2b56e43c26c216aff5d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__28__check(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__28__check,
        mod_consts.const_str_plain__check,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5cb22d88866212a5fe21a496babae901,
#endif
        code_objects_ba381171bc51737ba30b5fa85a851838,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_add026dc73d413145b1df07c4b6bc864,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__2__fromset(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__2__fromset,
        mod_consts.const_str_plain__fromset,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c75f0a3d3c57e49ecdf5378e49fb5174,
#endif
        code_objects_4b0c2f0b63e2b557e3df9bcbd598ed88,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_bcd4e87f8ee772a08fe308df03ed4fb6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__3_key(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__3_key,
        mod_consts.const_str_plain_key,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_252d765b3b1352c29f63ee8e1355be5e,
#endif
        code_objects_50474ce58298d921834dcd3b7a6c0cb5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_a0453da2641ead3f3bfddb71a0608f30,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__4___contains__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__4___contains__,
        mod_consts.const_str_plain___contains__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9ef6609d1dfff2445f723d69401a6601,
#endif
        code_objects_ea945a8c5cb4a8de4cddd56b7f3564f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_e8a9442d27553f23bb65d68efefe470d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__5___getitem__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__5___getitem__,
        mod_consts.const_str_plain___getitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1c64461f03367f507c7afa42a4930b42,
#endif
        code_objects_f6adf5d2004c159c6caf92ba479c5eaa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_7581541c94f815d8531eefd392d95079,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__6___delitem__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__6___delitem__,
        mod_consts.const_str_plain___delitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6a43f6c403a4d8737313e376e3e4d647,
#endif
        code_objects_68d8b2a8b7cf28b6858ecf676bbd0cb9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_36735ae9cde4975720f3c60d3046abdb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__7___make_cmp(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__7___make_cmp,
        mod_consts.const_str_plain___make_cmp,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d1c42614487fb1bc1a54d088a520b78a,
#endif
        code_objects_f197dd975d6655ac858c169918471128,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_5867f4ae0675e64a2f6e43ec6afccbee,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer,
        mod_consts.const_str_plain_comparer,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5609452bb90452e6c386d33afe65cfdb,
#endif
        code_objects_5e12ea479df906bbd98ed82484a50a02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_b441f3f5f680060447627b1bd0a09b1d,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__8___len__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__8___len__,
        mod_consts.const_str_plain___len__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_04d3fc359701f30870f9f4234a4e08f4,
#endif
        code_objects_770088571764eb27d9ecd20f07fd4b92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_d26ecda30f01556b358ed2495f9d93f2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sortedcontainers$sortedset$$$function__9___iter__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sortedcontainers$sortedset$$$function__9___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_be7a2b43e9939aeb2273d00c69c102c7,
#endif
        code_objects_7fdbbcd5f6b98c346e39165e963451e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sortedcontainers$sortedset,
        mod_consts.const_str_digest_c4c348535926278f9f68fbc4e0b9b978,
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

static function_impl_code const function_table_sortedcontainers$sortedset[] = {
impl_sortedcontainers$sortedset$$$function__7___make_cmp$$$function__1_comparer,
impl_sortedcontainers$sortedset$$$function__1___init__,
impl_sortedcontainers$sortedset$$$function__2__fromset,
impl_sortedcontainers$sortedset$$$function__3_key,
impl_sortedcontainers$sortedset$$$function__4___contains__,
impl_sortedcontainers$sortedset$$$function__5___getitem__,
impl_sortedcontainers$sortedset$$$function__6___delitem__,
impl_sortedcontainers$sortedset$$$function__7___make_cmp,
impl_sortedcontainers$sortedset$$$function__8___len__,
impl_sortedcontainers$sortedset$$$function__9___iter__,
impl_sortedcontainers$sortedset$$$function__10___reversed__,
impl_sortedcontainers$sortedset$$$function__11_add,
impl_sortedcontainers$sortedset$$$function__12_clear,
impl_sortedcontainers$sortedset$$$function__13_copy,
impl_sortedcontainers$sortedset$$$function__14_count,
impl_sortedcontainers$sortedset$$$function__15_discard,
impl_sortedcontainers$sortedset$$$function__16_pop,
impl_sortedcontainers$sortedset$$$function__17_remove,
impl_sortedcontainers$sortedset$$$function__18_difference,
impl_sortedcontainers$sortedset$$$function__19_difference_update,
impl_sortedcontainers$sortedset$$$function__20_intersection,
impl_sortedcontainers$sortedset$$$function__21_intersection_update,
impl_sortedcontainers$sortedset$$$function__22_symmetric_difference,
impl_sortedcontainers$sortedset$$$function__23_symmetric_difference_update,
impl_sortedcontainers$sortedset$$$function__24_union,
impl_sortedcontainers$sortedset$$$function__25_update,
impl_sortedcontainers$sortedset$$$function__26___reduce__,
impl_sortedcontainers$sortedset$$$function__27___repr__,
impl_sortedcontainers$sortedset$$$function__28__check,
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

    return Nuitka_Function_GetFunctionState(function, function_table_sortedcontainers$sortedset);
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
        module_sortedcontainers$sortedset,
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
        function_table_sortedcontainers$sortedset,
        sizeof(function_table_sortedcontainers$sortedset) / sizeof(function_impl_code)
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
static char const *module_full_name = "sortedcontainers.sortedset";
#endif

// Internal entry point for module code.
PyObject *module_code_sortedcontainers$sortedset(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sortedcontainers$sortedset");

    // Store the module for future use.
    module_sortedcontainers$sortedset = module;

    moduledict_sortedcontainers$sortedset = MODULE_DICT(module_sortedcontainers$sortedset);

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
        PRINT_STRING("sortedcontainers$sortedset: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("sortedcontainers$sortedset: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("sortedcontainers$sortedset: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "sortedcontainers.sortedset" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initsortedcontainers$sortedset\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sortedcontainers$sortedset,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sortedcontainers$sortedset,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sortedcontainers$sortedset,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sortedcontainers$sortedset,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sortedcontainers$sortedset,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sortedcontainers$sortedset);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_sortedcontainers$sortedset);
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

        UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_sortedcontainers$sortedset$$$class__1_SortedSet_36 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
tmp_assign_source_1 = mod_consts.const_str_digest_0670955fe44c04e44b79254c94a5c9a8;
UPDATE_STRING_DICT0(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_sortedcontainers$sortedset = MAKE_MODULE_FRAME(code_objects_727c9705e5f3cedcea20f7b93d7a02b3, module_sortedcontainers$sortedset);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_sortedcontainers$sortedset$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_sortedcontainers$sortedset$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_itertools;
tmp_globals_arg_value_1 = (PyObject *)moduledict_sortedcontainers$sortedset;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_chain_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_sortedcontainers$sortedset->m_frame.f_lineno = 16;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_sortedcontainers$sortedset,
        mod_consts.const_str_plain_chain,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_chain);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_chain, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_operator;
tmp_globals_arg_value_2 = (PyObject *)moduledict_sortedcontainers$sortedset;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_f6360c380910b3cb9cb163817c40cc57_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_sortedcontainers$sortedset->m_frame.f_lineno = 17;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_sortedcontainers$sortedset,
        mod_consts.const_str_plain_eq,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_eq);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_eq, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_sortedcontainers$sortedset,
        mod_consts.const_str_plain_ne,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ne);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_ne, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_sortedcontainers$sortedset,
        mod_consts.const_str_plain_gt,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_gt);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_gt, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_sortedcontainers$sortedset,
        mod_consts.const_str_plain_ge,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_ge);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_ge, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_sortedcontainers$sortedset,
        mod_consts.const_str_plain_lt,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_lt);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_lt, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_sortedcontainers$sortedset,
        mod_consts.const_str_plain_le,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_le);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_le, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_textwrap;
tmp_globals_arg_value_3 = (PyObject *)moduledict_sortedcontainers$sortedset;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_dedent_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_sortedcontainers$sortedset->m_frame.f_lineno = 18;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_sortedcontainers$sortedset,
        mod_consts.const_str_plain_dedent,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_dedent);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_dedent, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_sortedlist;
tmp_globals_arg_value_4 = (PyObject *)moduledict_sortedcontainers$sortedset;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_SortedList_str_plain_recursive_repr_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_sortedcontainers$sortedset->m_frame.f_lineno = 20;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_sortedcontainers$sortedset,
        mod_consts.const_str_plain_SortedList,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_SortedList);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_SortedList, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_sortedcontainers$sortedset,
        mod_consts.const_str_plain_recursive_repr,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_recursive_repr);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_recursive_repr, tmp_assign_source_15);
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
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_5 = (PyObject *)moduledict_sortedcontainers$sortedset;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_MutableSet_str_plain_Sequence_str_plain_Set_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_sortedcontainers$sortedset->m_frame.f_lineno = 27;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_sortedcontainers$sortedset,
        mod_consts.const_str_plain_MutableSet,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_MutableSet);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableSet, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_sortedcontainers$sortedset,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Sequence);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_sortedcontainers$sortedset,
        mod_consts.const_str_plain_Set,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_Set);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_Set, tmp_assign_source_19);
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_4);
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
PyObject *tmp_assign_source_20;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_collections;
tmp_globals_arg_value_6 = (PyObject *)moduledict_sortedcontainers$sortedset;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_MutableSet_str_plain_Sequence_str_plain_Set_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_sortedcontainers$sortedset->m_frame.f_lineno = 29;
tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_5;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_14 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_sortedcontainers$sortedset,
        mod_consts.const_str_plain_MutableSet,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_MutableSet);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableSet, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_15 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_sortedcontainers$sortedset,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_Sequence);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_16 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_sortedcontainers$sortedset,
        mod_consts.const_str_plain_Set,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_Set);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_Set, tmp_assign_source_23);
}
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_5;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 26;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_sortedcontainers$sortedset->m_frame)) {
        frame_frame_sortedcontainers$sortedset->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_5;
branch_end_1:;
goto try_end_6;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_4;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_4:;
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_sortedcontainers$sortedset$MutableSet(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MutableSet);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto try_except_handler_7;
}
tmp_assign_source_24 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_24, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_sortedcontainers$sortedset$Sequence(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sequence);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_assign_source_24, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_24);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_25 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_2;
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


exception_lineno = 36;

    goto try_except_handler_7;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
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


exception_lineno = 36;

    goto try_except_handler_7;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_7;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_27 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_27;
}
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_28;
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


exception_lineno = 36;

    goto try_except_handler_7;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_SortedSet;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_sortedcontainers$sortedset->m_frame.f_lineno = 36;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_28;
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


exception_lineno = 36;

    goto try_except_handler_7;
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
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_7, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_7;
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


exception_lineno = 36;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_7;
}
frame_frame_sortedcontainers$sortedset->m_frame.f_lineno = 36;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 36;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_29;
}
branch_end_2:;
{
PyObject *tmp_assign_source_30;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_sortedcontainers$sortedset$$$class__1_SortedSet_36 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f26e76520a998b6f6606d1ccf49e4585;
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_912069c060841f295b6931cbb8804ec9;
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_SortedSet;
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_36;
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_9;
}
frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2 = MAKE_CLASS_FRAME(tstate, code_objects_fea3e1ecb79cce5a8ac3fa3302dadd7a, module_sortedcontainers$sortedset, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2);
assert(Py_REFCNT(frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__1___init__(tstate, tmp_defaults_1);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_defaults_2;
tmp_called_value_2 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, const_str_plain_classmethod);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_2);

tmp_args_element_value_1 = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__2__fromset(tstate, tmp_defaults_2);

frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2->m_frame.f_lineno = 171;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain__fromset, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_2 = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__3_key(tstate);

frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2->m_frame.f_lineno = 184;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_key, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__4___contains__(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___contains__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__5___getitem__(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___getitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__6___delitem__(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___delitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__7___make_cmp(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain__SortedSet__make_cmp, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_4 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain__SortedSet__make_cmp);

if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SortedSet__make_cmp);

exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_3 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_eq);

if (tmp_args_element_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_3 = module_var_accessor_sortedcontainers$sortedset$eq(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_eq);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_4 = mod_consts.const_str_digest_13243295198ba360687160a687a3cc51;
tmp_args_element_value_5 = mod_consts.const_str_digest_663362c475a0edc4d75b5c39d6e7c54d;
frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2->m_frame.f_lineno = 297;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___eq__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_5 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain__SortedSet__make_cmp);

if (unlikely(tmp_called_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SortedSet__make_cmp);

exception_lineno = 298;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_6 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_ne);

if (tmp_args_element_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_6 = module_var_accessor_sortedcontainers$sortedset$ne(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ne);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 298;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_7 = mod_consts.const_str_digest_5f408ea264aad5c192d303d32799c57f;
tmp_args_element_value_8 = mod_consts.const_str_digest_18a3532f52925fd1b5d632bf0b4bcfbf;
frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2->m_frame.f_lineno = 298;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___ne__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_6 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain__SortedSet__make_cmp);

if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SortedSet__make_cmp);

exception_lineno = 299;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_9 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_lt);

if (tmp_args_element_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_9 = module_var_accessor_sortedcontainers$sortedset$lt(tstate);
if (unlikely(tmp_args_element_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lt);
}

if (tmp_args_element_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 299;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_10 = mod_consts.const_str_chr_60;
tmp_args_element_value_11 = mod_consts.const_str_digest_14e5a00bd6ad5ce1e7e5ed7d84a3da70;
frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2->m_frame.f_lineno = 299;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___lt__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_value_7 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain__SortedSet__make_cmp);

if (unlikely(tmp_called_value_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SortedSet__make_cmp);

exception_lineno = 300;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_12 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_gt);

if (tmp_args_element_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_12 = module_var_accessor_sortedcontainers$sortedset$gt(tstate);
if (unlikely(tmp_args_element_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_gt);
}

if (tmp_args_element_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 300;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_13 = mod_consts.const_str_chr_62;
tmp_args_element_value_14 = mod_consts.const_str_digest_e6e2faf9ea5d2130a994bf7633e1076a;
frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2->m_frame.f_lineno = 300;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___gt__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
tmp_called_value_8 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain__SortedSet__make_cmp);

if (unlikely(tmp_called_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SortedSet__make_cmp);

exception_lineno = 301;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_15 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_le);

if (tmp_args_element_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_15 = module_var_accessor_sortedcontainers$sortedset$le(tstate);
if (unlikely(tmp_args_element_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_le);
}

if (tmp_args_element_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 301;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_16 = mod_consts.const_str_digest_c566e8f3fba64199b66b7b7424440c9c;
tmp_args_element_value_17 = mod_consts.const_str_digest_2dbcc5ce672f021c3d2f988d10875095;
frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2->m_frame.f_lineno = 301;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___le__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
tmp_called_value_9 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain__SortedSet__make_cmp);

if (unlikely(tmp_called_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SortedSet__make_cmp);

exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_18 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_ge);

if (tmp_args_element_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_18 = module_var_accessor_sortedcontainers$sortedset$ge(tstate);
if (unlikely(tmp_args_element_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ge);
}

if (tmp_args_element_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_args_element_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_19 = mod_consts.const_str_digest_a53e6044afa65158b90d5bc4937bebce;
tmp_args_element_value_20 = mod_consts.const_str_digest_d84d17294c2987e139b9697b5ad12e5b;
frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2->m_frame.f_lineno = 302;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___ge__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_21;
tmp_called_value_10 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, const_str_plain_staticmethod);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_21 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain__SortedSet__make_cmp);

if (unlikely(tmp_args_element_value_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_called_value_10);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SortedSet__make_cmp);

exception_lineno = 303;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 303;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2->m_frame.f_lineno = 303;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_21);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain__SortedSet__make_cmp, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__8___len__(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___len__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__9___iter__(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__10___reversed__(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___reversed__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__11_add(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_add, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_add);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_add);

exception_lineno = 361;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain__add, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__12_clear(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_clear, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__13_copy(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_copy, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_copy);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);

exception_lineno = 384;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___copy__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__14_count(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_count, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__15_discard(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_discard, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_discard);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_discard);

exception_lineno = 424;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain__discard, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_int_neg_1_tuple;
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__16_pop(tstate, tmp_defaults_3);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_pop, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__17_remove(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_remove, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__18_difference(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_difference, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_difference);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_difference);

exception_lineno = 501;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___sub__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__19_difference_update(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_difference_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 504;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_difference_update);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_difference_update);

exception_lineno = 533;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 533;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___isub__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 533;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__20_intersection(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_intersection, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 536;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_intersection);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_intersection);

exception_lineno = 557;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___and__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___and__);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___and__);

exception_lineno = 558;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___rand__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__21_intersection_update(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_intersection_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_intersection_update);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_intersection_update);

exception_lineno = 586;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 586;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___iand__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 586;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__22_symmetric_difference(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_symmetric_difference, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_symmetric_difference);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_symmetric_difference);

exception_lineno = 610;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 610;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___xor__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 610;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___xor__);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___xor__);

exception_lineno = 611;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 611;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___rxor__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 611;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__23_symmetric_difference_update(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_symmetric_difference_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 614;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_symmetric_difference_update);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_symmetric_difference_update);

exception_lineno = 640;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 640;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___ixor__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 640;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__24_union(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_union, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 643;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_union);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_union);

exception_lineno = 660;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___or__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___or__);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___or__);

exception_lineno = 661;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___ror__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__25_update(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 664;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_update);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_update);

exception_lineno = 694;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 694;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___ior__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 694;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_update);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_update);

exception_lineno = 695;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 695;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain__update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 695;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__26___reduce__(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___reduce__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 698;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_22;
tmp_called_value_12 = PyObject_GetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain_recursive_repr);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = module_var_accessor_sortedcontainers$sortedset$recursive_repr(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_recursive_repr);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 708;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2->m_frame.f_lineno = 708;
tmp_called_value_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_12);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 708;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_args_element_value_22 = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__27___repr__(tstate);

frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2->m_frame.f_lineno = 708;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 708;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 709;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_sortedcontainers$sortedset$$$function__28__check(tstate);

tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain__check, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;
type_description_2 = "o";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_sortedcontainers$sortedset$$$class__1_SortedSet_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_9;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_ce086c7f35cd5f3e4f6ea98dee7d4884_tuple;
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_9;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_9;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_9;
}
branch_no_4:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_13 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_SortedSet;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_sortedcontainers$sortedset$$$class__1_SortedSet_36;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_sortedcontainers$sortedset->m_frame.f_lineno = 36;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_9;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_31;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_30 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_30);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36);
locals_sortedcontainers$sortedset$$$class__1_SortedSet_36 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_sortedcontainers$sortedset$$$class__1_SortedSet_36);
locals_sortedcontainers$sortedset$$$class__1_SortedSet_36 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 36;
goto try_except_handler_7;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)mod_consts.const_str_plain_SortedSet, tmp_assign_source_30);
}
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_sortedcontainers$sortedset, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_sortedcontainers$sortedset->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sortedcontainers$sortedset, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_sortedcontainers$sortedset);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sortedcontainers$sortedset", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "sortedcontainers.sortedset" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_sortedcontainers$sortedset);
    return module_sortedcontainers$sortedset;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sortedcontainers$sortedset, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("sortedcontainers$sortedset", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

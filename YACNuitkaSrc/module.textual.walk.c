/* Generated code for Python module 'textual$walk'
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



/* The "module_textual$walk" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$walk;
PyDictObject *moduledict_textual$walk;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_abb29af3ccac32e470a5d55836885aba;
PyObject *const_str_plain_root;
PyObject *const_str_plain_children;
PyObject *const_str_plain_pop;
PyObject *const_str_plain_append;
PyObject *const_str_plain_filter_type;
PyObject *const_str_plain_with_root;
PyObject *const_str_plain__nodes;
PyObject *const_str_plain_push;
PyObject *const_str_plain_walk_depth_first;
PyObject *const_str_digest_4b6123de9fa1f665b4d1450a37b9c75e;
PyObject *const_str_digest_a2b771df01944acf98eee59166e27e5e;
PyObject *const_tuple_str_plain_DOMNode_tuple;
PyObject *const_str_plain_DOMNode;
PyObject *const_str_plain_deque;
PyObject *const_str_plain_popleft;
PyObject *const_str_plain_extend;
PyObject *const_str_plain_walk_breadth_first;
PyObject *const_str_plain_id;
PyObject *const_str_plain_queue;
PyObject *const_str_plain__get_by_id;
PyObject *const_str_plain_node_id;
PyObject *const_str_digest_4d06e5fc43757f0f6c87fa6fd7d87204;
PyObject *const_str_digest_76a89a692ac68666007baf062bb9cf0d;
PyObject *const_str_plain_attrgetter;
PyObject *const_tuple_str_plain__selection_order_tuple;
PyObject *const_dict_864ba1d4bd6ba904af8bf4e5b545a056;
PyObject *const_str_digest_4faf4cd9a6e2526291b735f4f6fd9f13;
PyObject *const_str_plain_get_children;
PyObject *const_str_digest_a93a14f8c2e07699bf3507a825701f9a;
PyObject *const_str_plain_is_container;
PyObject *const_str_plain_allow_select;
PyObject *const_str_plain_walk_selectable_widgets;
PyObject *const_str_plain_sorted;
PyObject *const_str_plain_displayed_and_visible_children;
PyObject *const_str_plain_get_selection_order;
PyObject *const_tuple_str_plain_key_tuple;
PyObject *const_str_plain_containers;
PyObject *const_str_plain_bounds;
PyObject *const_str_plain_overlaps;
PyObject *const_str_plain_content_region;
PyObject *const_str_digest_6fe890d4a321e306b7ca5516940c82bf;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_collections;
PyObject *const_tuple_str_plain_deque_tuple;
PyObject *const_str_plain_operator;
PyObject *const_tuple_str_plain_attrgetter_tuple;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_Iterator;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_overload;
PyObject *const_str_digest_8b449230fefb53e14684626fc331fc25;
PyObject *const_tuple_str_plain_Shape_tuple;
PyObject *const_str_plain_Shape;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_cc8c51a655b5b2f53a67ed1367ce4bef;
PyObject *const_dict_e709c07ee4ef70912e80545fc89867b3;
PyObject *const_dict_063f9494556e962b9db169d355336b6e;
PyObject *const_str_plain_walk_breadth_search_id;
PyObject *const_dict_6b3d74a5fb2a8ef2bd07e2779d53361d;
PyObject *const_str_digest_dcd99b92cd07ac3c7b0c9cd4636ce436;
PyObject *const_str_digest_279b03faf150b7c33abe4870309ae7ea;
PyObject *const_tuple_8a38694704789d77a5ffc536defbf8a4_tuple;
PyObject *const_tuple_19acb68fc473323d5e5f63b05df02da5_tuple;
PyObject *const_tuple_0f96d22f8c52bf60eea3e9832b982a8d_tuple;
PyObject *const_tuple_d407c3008eaacc99d4c626e6a4d1eec8_tuple;
PyObject *const_tuple_0d3abbd84ae5def1e2146b6af28b2119_tuple;
PyObject *const_tuple_d139dac9bd07d5b632f2f5687132c6a2_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[71];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.walk"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_abb29af3ccac32e470a5d55836885aba);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_root);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_children);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_filter_type);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_root);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__nodes);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_push);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_walk_depth_first);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b6123de9fa1f665b4d1450a37b9c75e);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2b771df01944acf98eee59166e27e5e);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DOMNode_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_DOMNode);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_deque);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_popleft);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_extend);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_walk_breadth_first);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_id);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_queue);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_by_id);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_node_id);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d06e5fc43757f0f6c87fa6fd7d87204);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_76a89a692ac68666007baf062bb9cf0d);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_attrgetter);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__selection_order_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_dict_864ba1d4bd6ba904af8bf4e5b545a056);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_4faf4cd9a6e2526291b735f4f6fd9f13);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_children);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_a93a14f8c2e07699bf3507a825701f9a);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_container);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_allow_select);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_walk_selectable_widgets);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_sorted);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_displayed_and_visible_children);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_selection_order);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_containers);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_bounds);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_overlaps);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_content_region);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_6fe890d4a321e306b7ca5516940c82bf);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_collections);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deque_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_operator);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_attrgetter_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Shape_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_Shape);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_dict_cc8c51a655b5b2f53a67ed1367ce4bef);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_dict_e709c07ee4ef70912e80545fc89867b3);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_dict_063f9494556e962b9db169d355336b6e);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_walk_breadth_search_id);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_dict_6b3d74a5fb2a8ef2bd07e2779d53361d);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcd99b92cd07ac3c7b0c9cd4636ce436);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_279b03faf150b7c33abe4870309ae7ea);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_8a38694704789d77a5ffc536defbf8a4_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_19acb68fc473323d5e5f63b05df02da5_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_0f96d22f8c52bf60eea3e9832b982a8d_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_d407c3008eaacc99d4c626e6a4d1eec8_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_0d3abbd84ae5def1e2146b6af28b2119_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_d139dac9bd07d5b632f2f5687132c6a2_tuple);
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
void checkModuleConstants_textual$walk(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_abb29af3ccac32e470a5d55836885aba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_abb29af3ccac32e470a5d55836885aba);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_root));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_root);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_children));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_children);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pop);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_filter_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_filter_type);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_root));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_root);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__nodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nodes);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_push));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_push);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_walk_depth_first));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_walk_depth_first);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b6123de9fa1f665b4d1450a37b9c75e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b6123de9fa1f665b4d1450a37b9c75e);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2b771df01944acf98eee59166e27e5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2b771df01944acf98eee59166e27e5e);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DOMNode_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DOMNode_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_DOMNode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DOMNode);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_deque));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deque);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_popleft));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_popleft);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_extend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extend);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_walk_breadth_first));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_walk_breadth_first);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_queue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_queue);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_by_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_by_id);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_node_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_node_id);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d06e5fc43757f0f6c87fa6fd7d87204));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4d06e5fc43757f0f6c87fa6fd7d87204);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_76a89a692ac68666007baf062bb9cf0d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_76a89a692ac68666007baf062bb9cf0d);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_attrgetter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attrgetter);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__selection_order_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__selection_order_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_dict_864ba1d4bd6ba904af8bf4e5b545a056));
CHECK_OBJECT_DEEP(mod_consts.const_dict_864ba1d4bd6ba904af8bf4e5b545a056);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_4faf4cd9a6e2526291b735f4f6fd9f13));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4faf4cd9a6e2526291b735f4f6fd9f13);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_children));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_children);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_a93a14f8c2e07699bf3507a825701f9a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a93a14f8c2e07699bf3507a825701f9a);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_container));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_container);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_allow_select));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_allow_select);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_walk_selectable_widgets));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_walk_selectable_widgets);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_sorted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sorted);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_displayed_and_visible_children));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_displayed_and_visible_children);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_selection_order));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_selection_order);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_containers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_containers);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_bounds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bounds);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_overlaps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overlaps);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_content_region));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content_region);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_6fe890d4a321e306b7ca5516940c82bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6fe890d4a321e306b7ca5516940c82bf);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_collections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_collections);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deque_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_deque_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_operator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_operator);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_attrgetter_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_attrgetter_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterator);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overload);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Shape_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Shape_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_Shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Shape);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_dict_cc8c51a655b5b2f53a67ed1367ce4bef));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cc8c51a655b5b2f53a67ed1367ce4bef);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_dict_e709c07ee4ef70912e80545fc89867b3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e709c07ee4ef70912e80545fc89867b3);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_dict_063f9494556e962b9db169d355336b6e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_063f9494556e962b9db169d355336b6e);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_walk_breadth_search_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_walk_breadth_search_id);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_dict_6b3d74a5fb2a8ef2bd07e2779d53361d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6b3d74a5fb2a8ef2bd07e2779d53361d);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcd99b92cd07ac3c7b0c9cd4636ce436));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcd99b92cd07ac3c7b0c9cd4636ce436);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_279b03faf150b7c33abe4870309ae7ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_279b03faf150b7c33abe4870309ae7ea);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_8a38694704789d77a5ffc536defbf8a4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8a38694704789d77a5ffc536defbf8a4_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_19acb68fc473323d5e5f63b05df02da5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_19acb68fc473323d5e5f63b05df02da5_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_0f96d22f8c52bf60eea3e9832b982a8d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0f96d22f8c52bf60eea3e9832b982a8d_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_d407c3008eaacc99d4c626e6a4d1eec8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d407c3008eaacc99d4c626e6a4d1eec8_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_0d3abbd84ae5def1e2146b6af28b2119_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0d3abbd84ae5def1e2146b6af28b2119_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_d139dac9bd07d5b632f2f5687132c6a2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d139dac9bd07d5b632f2f5687132c6a2_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 3
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
static PyObject *module_var_accessor_textual$walk$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$walk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$walk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$walk, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$walk->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$walk, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$walk, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$walk$attrgetter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$walk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$walk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_attrgetter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$walk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_attrgetter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_attrgetter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_attrgetter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_attrgetter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_attrgetter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_attrgetter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_attrgetter);
    }

    return result;
}

static PyObject *module_var_accessor_textual$walk$deque(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$walk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$walk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_deque);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$walk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_deque);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_deque, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_deque);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_deque, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_deque);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_deque);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_deque);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e41f0d700093cff9a24c3c92228576fc;
static PyCodeObject *code_objects_e18248d78407c82a6f00b02eb7bd03ab;
static PyCodeObject *code_objects_3e32df6d3f57409b2fe6234140997d97;
static PyCodeObject *code_objects_cb09b780608270174e39bfccd073cc02;
static PyCodeObject *code_objects_8e955cbb6cc40003c2d5b44c6e6d2571;
static PyCodeObject *code_objects_73b379be854521806ad5b99f05a507c7;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_dcd99b92cd07ac3c7b0c9cd4636ce436); CHECK_OBJECT(module_filename_obj);
code_objects_e41f0d700093cff9a24c3c92228576fc = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_279b03faf150b7c33abe4870309ae7ea, mod_consts.const_str_digest_279b03faf150b7c33abe4870309ae7ea, NULL, NULL, 0, 0, 0);
code_objects_e18248d78407c82a6f00b02eb7bd03ab = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_children, mod_consts.const_str_digest_a93a14f8c2e07699bf3507a825701f9a, mod_consts.const_tuple_8a38694704789d77a5ffc536defbf8a4_tuple, mod_consts.const_tuple_19acb68fc473323d5e5f63b05df02da5_tuple, 1, 0, 0);
code_objects_3e32df6d3f57409b2fe6234140997d97 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_walk_breadth_first, mod_consts.const_str_plain_walk_breadth_first, mod_consts.const_tuple_0f96d22f8c52bf60eea3e9832b982a8d_tuple, NULL, 2, 1, 0);
code_objects_cb09b780608270174e39bfccd073cc02 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_walk_breadth_search_id, mod_consts.const_str_plain_walk_breadth_search_id, mod_consts.const_tuple_d407c3008eaacc99d4c626e6a4d1eec8_tuple, NULL, 2, 1, 0);
code_objects_8e955cbb6cc40003c2d5b44c6e6d2571 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_walk_depth_first, mod_consts.const_str_plain_walk_depth_first, mod_consts.const_tuple_0d3abbd84ae5def1e2146b6af28b2119_tuple, NULL, 2, 1, 0);
code_objects_73b379be854521806ad5b99f05a507c7 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_walk_selectable_widgets, mod_consts.const_str_plain_walk_selectable_widgets, mod_consts.const_tuple_d139dac9bd07d5b632f2f5687132c6a2_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$walk$$$function__3_walk_depth_first$$$genobj__1_walk_depth_first(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_textual$walk$$$function__6_walk_breadth_first$$$genobj__1_walk_breadth_first(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$walk$$$function__3_walk_depth_first(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$walk$$$function__6_walk_breadth_first(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$walk$$$function__7_walk_breadth_search_id(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$walk$$$function__8_walk_selectable_widgets(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_textual$walk$$$function__3_walk_depth_first(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_root = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_filter_type = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_with_root = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_filter_type;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_root;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_with_root;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_GENERATOR_textual$walk$$$function__3_walk_depth_first$$$genobj__1_walk_depth_first(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_root);
CHECK_OBJECT(par_root);
Py_DECREF(par_root);
par_root = NULL;
CHECK_OBJECT(par_filter_type);
CHECK_OBJECT(par_filter_type);
Py_DECREF(par_filter_type);
par_filter_type = NULL;
CHECK_OBJECT(par_with_root);
CHECK_OBJECT(par_with_root);
Py_DECREF(par_with_root);
par_with_root = NULL;
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
struct textual$walk$$$function__3_walk_depth_first$$$genobj__1_walk_depth_first_locals {
PyObject *var_stack;
PyObject *var_pop;
PyObject *var_push;
PyObject *var_node;
PyObject *var_children;
PyObject *tmp_assignment_expr_1__value;
PyObject *tmp_assignment_expr_2__value;
PyObject *tmp_assignment_expr_3__value;
PyObject *tmp_assignment_expr_4__value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
};
#endif

static PyObject *textual$walk$$$function__3_walk_depth_first$$$genobj__1_walk_depth_first_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$walk$$$function__3_walk_depth_first$$$genobj__1_walk_depth_first_locals *generator_heap = (struct textual$walk$$$function__3_walk_depth_first$$$genobj__1_walk_depth_first_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_stack = NULL;
generator_heap->var_pop = NULL;
generator_heap->var_push = NULL;
generator_heap->var_node = NULL;
generator_heap->var_children = NULL;
generator_heap->tmp_assignment_expr_1__value = NULL;
generator_heap->tmp_assignment_expr_2__value = NULL;
generator_heap->tmp_assignment_expr_3__value = NULL;
generator_heap->tmp_assignment_expr_4__value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8e955cbb6cc40003c2d5b44c6e6d2571, module_textual$walk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_list_element_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_root);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_children);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
tmp_list_element_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_1, 0, tmp_list_element_1);
assert(generator_heap->var_stack == NULL);
generator_heap->var_stack = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->var_stack);
tmp_expression_value_2 = generator_heap->var_stack;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pop);
assert(!(tmp_assign_source_2 == NULL));
assert(generator_heap->var_pop == NULL);
generator_heap->var_pop = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(generator_heap->var_stack);
tmp_expression_value_3 = generator_heap->var_stack;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_append);
assert(!(tmp_assign_source_3 == NULL));
assert(generator_heap->var_push == NULL);
generator_heap->var_push = tmp_assign_source_3;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_filter_type);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 67;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[0]);
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
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_with_root);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 68;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[2]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 68;
generator_heap->type_description_1 = "cccooooo";
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
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_root);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[1]);
Py_INCREF(tmp_expression_value_4);
generator->m_yield_return_index = 1;
return tmp_expression_value_4;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_2:;
loop_start_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(generator_heap->var_stack);
tmp_operand_value_1 = generator_heap->var_stack;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
goto loop_end_1;
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_next_arg_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_next_default_1;
CHECK_OBJECT(generator_heap->var_stack);
tmp_expression_value_5 = generator_heap->var_stack;
tmp_subscript_value_1 = const_int_neg_1;
tmp_next_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, -1);
if (tmp_next_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 71;
generator_heap->type_description_1 = "cccooooo";
    goto try_except_handler_2;
}
tmp_next_default_1 = Py_None;
tmp_assign_source_4 = BUILTIN_NEXT2(tstate, tmp_next_arg_1, tmp_next_default_1);
CHECK_OBJECT(tmp_next_arg_1);
Py_DECREF(tmp_next_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 71;
generator_heap->type_description_1 = "cccooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->tmp_assignment_expr_1__value;
    generator_heap->tmp_assignment_expr_1__value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
tmp_assign_source_5 = generator_heap->tmp_assignment_expr_1__value;
{
    PyObject *old = generator_heap->var_node;
    generator_heap->var_node = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_node);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
tmp_cmp_expr_left_2 = generator_heap->tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_2);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
Py_DECREF(generator_heap->tmp_assignment_expr_1__value);
generator_heap->tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_assignment_expr_1__value);
generator_heap->tmp_assignment_expr_1__value = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
if (generator_heap->var_pop == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_pop);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 72;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = generator_heap->var_pop;
generator->m_frame->m_frame.f_lineno = 72;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 72;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_expression_value_6;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
CHECK_OBJECT(generator_heap->var_node);
tmp_expression_value_6 = generator_heap->var_node;
Py_INCREF(tmp_expression_value_6);
generator->m_yield_return_index = 2;
return tmp_expression_value_6;
yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 74;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_2;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(generator_heap->var_node);
tmp_expression_value_7 = generator_heap->var_node;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__nodes);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 75;
generator_heap->type_description_1 = "cccooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_assignment_expr_2__value;
    generator_heap->tmp_assignment_expr_2__value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_2__value);
tmp_assign_source_7 = generator_heap->tmp_assignment_expr_2__value;
{
    PyObject *old = generator_heap->var_children;
    generator_heap->var_children = tmp_assign_source_7;
    Py_INCREF(generator_heap->var_children);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(generator_heap->tmp_assignment_expr_2__value);
tmp_outline_return_value_1 = generator_heap->tmp_assignment_expr_2__value;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_2__value);
CHECK_OBJECT(generator_heap->tmp_assignment_expr_2__value);
Py_DECREF(generator_heap->tmp_assignment_expr_2__value);
generator_heap->tmp_assignment_expr_2__value = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_assignment_expr_2__value);
generator_heap->tmp_assignment_expr_2__value = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_outline_return_value_1);

generator_heap->exception_lineno = 75;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_iter_arg_2;
if (generator_heap->var_push == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_push);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 76;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_2 = generator_heap->var_push;
CHECK_OBJECT(generator_heap->var_children);
tmp_iter_arg_2 = generator_heap->var_children;
tmp_args_element_value_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 76;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 76;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 76;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
branch_end_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 70;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_with_root);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_3 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[2]));
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_root);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}

tmp_isinstance_inst_1 = Nuitka_Cell_GET(generator->m_closure[1]);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_filter_type);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}

tmp_isinstance_cls_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_6 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_6 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_expression_value_8;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_root);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(generator->m_closure[1]);
Py_INCREF(tmp_expression_value_8);
generator->m_yield_return_index = 3;
return tmp_expression_value_8;
yield_return_3:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_3 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_3);
Py_DECREF(tmp_yield_result_3);
}
branch_no_6:;
loop_start_2:;
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(generator_heap->var_stack);
tmp_operand_value_2 = generator_heap->var_stack;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_7 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
goto loop_end_2;
branch_no_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_next_arg_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_2;
PyObject *tmp_next_default_2;
CHECK_OBJECT(generator_heap->var_stack);
tmp_expression_value_9 = generator_heap->var_stack;
tmp_subscript_value_2 = const_int_neg_1;
tmp_next_arg_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_2, -1);
if (tmp_next_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 81;
generator_heap->type_description_1 = "cccooooo";
    goto try_except_handler_4;
}
tmp_next_default_2 = Py_None;
tmp_assign_source_8 = BUILTIN_NEXT2(tstate, tmp_next_arg_2, tmp_next_default_2);
CHECK_OBJECT(tmp_next_arg_2);
Py_DECREF(tmp_next_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 81;
generator_heap->type_description_1 = "cccooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_assignment_expr_3__value;
    generator_heap->tmp_assignment_expr_3__value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_3__value);
tmp_assign_source_9 = generator_heap->tmp_assignment_expr_3__value;
{
    PyObject *old = generator_heap->var_node;
    generator_heap->var_node = tmp_assign_source_9;
    Py_INCREF(generator_heap->var_node);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(generator_heap->tmp_assignment_expr_3__value);
tmp_cmp_expr_left_3 = generator_heap->tmp_assignment_expr_3__value;
Py_INCREF(tmp_cmp_expr_left_3);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_3__value);
CHECK_OBJECT(generator_heap->tmp_assignment_expr_3__value);
Py_DECREF(generator_heap->tmp_assignment_expr_3__value);
generator_heap->tmp_assignment_expr_3__value = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_assignment_expr_3__value);
generator_heap->tmp_assignment_expr_3__value = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_3;
if (generator_heap->var_pop == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_pop);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 82;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_3 = generator_heap->var_pop;
generator->m_frame->m_frame.f_lineno = 82;
tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 82;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_8;
branch_no_8:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(generator_heap->var_node);
tmp_isinstance_inst_2 = generator_heap->var_node;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_filter_type);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 84;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}

tmp_isinstance_cls_2 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 84;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_expression_value_10;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_4;
CHECK_OBJECT(generator_heap->var_node);
tmp_expression_value_10 = generator_heap->var_node;
Py_INCREF(tmp_expression_value_10);
generator->m_yield_return_index = 4;
return tmp_expression_value_10;
yield_return_4:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 85;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_4 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_4);
Py_DECREF(tmp_yield_result_4);
}
branch_no_9:;
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_outline_return_value_2;
int tmp_truth_name_4;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(generator_heap->var_node);
tmp_expression_value_11 = generator_heap->var_node;
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__nodes);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 86;
generator_heap->type_description_1 = "cccooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = generator_heap->tmp_assignment_expr_4__value;
    generator_heap->tmp_assignment_expr_4__value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_4__value);
tmp_assign_source_11 = generator_heap->tmp_assignment_expr_4__value;
{
    PyObject *old = generator_heap->var_children;
    generator_heap->var_children = tmp_assign_source_11;
    Py_INCREF(generator_heap->var_children);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(generator_heap->tmp_assignment_expr_4__value);
tmp_outline_return_value_2 = generator_heap->tmp_assignment_expr_4__value;
Py_INCREF(tmp_outline_return_value_2);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_4__value);
CHECK_OBJECT(generator_heap->tmp_assignment_expr_4__value);
Py_DECREF(generator_heap->tmp_assignment_expr_4__value);
generator_heap->tmp_assignment_expr_4__value = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_assignment_expr_4__value);
generator_heap->tmp_assignment_expr_4__value = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_4:;
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_outline_return_value_2);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_outline_return_value_2);

generator_heap->exception_lineno = 86;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_iter_arg_3;
if (generator_heap->var_push == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_push);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 87;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_4 = generator_heap->var_push;
CHECK_OBJECT(generator_heap->var_children);
tmp_iter_arg_3 = generator_heap->var_children;
tmp_args_element_value_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 87;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 87;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 87;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_10:;
branch_end_8:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 80;
generator_heap->type_description_1 = "cccooooo";
    goto frame_exception_exit_1;
}
goto loop_start_2;
loop_end_2:;
branch_end_1:;

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
    generator->m_closure[1],
    generator->m_closure[0],
    generator->m_closure[2],
    generator_heap->var_stack,
    generator_heap->var_pop,
    generator_heap->var_push,
    generator_heap->var_node,
    generator_heap->var_children
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
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_stack);
generator_heap->var_stack = NULL;
Py_XDECREF(generator_heap->var_pop);
generator_heap->var_pop = NULL;
Py_XDECREF(generator_heap->var_push);
generator_heap->var_push = NULL;
Py_XDECREF(generator_heap->var_node);
generator_heap->var_node = NULL;
Py_XDECREF(generator_heap->var_children);
generator_heap->var_children = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:
try_end_1:;
CHECK_OBJECT(generator_heap->var_stack);
CHECK_OBJECT(generator_heap->var_stack);
Py_DECREF(generator_heap->var_stack);
generator_heap->var_stack = NULL;
Py_XDECREF(generator_heap->var_pop);
generator_heap->var_pop = NULL;
Py_XDECREF(generator_heap->var_push);
generator_heap->var_push = NULL;
Py_XDECREF(generator_heap->var_node);
generator_heap->var_node = NULL;
Py_XDECREF(generator_heap->var_children);
generator_heap->var_children = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$walk$$$function__3_walk_depth_first$$$genobj__1_walk_depth_first(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$walk$$$function__3_walk_depth_first$$$genobj__1_walk_depth_first_context,
        module_textual$walk,
        mod_consts.const_str_plain_walk_depth_first,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_8e955cbb6cc40003c2d5b44c6e6d2571,
        closure,
        3,
#if 1
        sizeof(struct textual$walk$$$function__3_walk_depth_first$$$genobj__1_walk_depth_first_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$walk$$$function__6_walk_breadth_first(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_root = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_filter_type = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_with_root = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_filter_type;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_root;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_with_root;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_GENERATOR_textual$walk$$$function__6_walk_breadth_first$$$genobj__1_walk_breadth_first(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_root);
CHECK_OBJECT(par_root);
Py_DECREF(par_root);
par_root = NULL;
CHECK_OBJECT(par_filter_type);
CHECK_OBJECT(par_filter_type);
Py_DECREF(par_filter_type);
par_filter_type = NULL;
CHECK_OBJECT(par_with_root);
CHECK_OBJECT(par_with_root);
Py_DECREF(par_with_root);
par_with_root = NULL;
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
struct textual$walk$$$function__6_walk_breadth_first$$$genobj__1_walk_breadth_first_locals {
PyObject *var_queue;
PyObject *var_DOMNode;
PyObject *var_popleft;
PyObject *var_extend;
PyObject *var_check_type;
PyObject *var_node;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *textual$walk$$$function__6_walk_breadth_first$$$genobj__1_walk_breadth_first_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$walk$$$function__6_walk_breadth_first$$$genobj__1_walk_breadth_first_locals *generator_heap = (struct textual$walk$$$function__6_walk_breadth_first$$$genobj__1_walk_breadth_first_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_queue = NULL;
generator_heap->var_DOMNode = NULL;
generator_heap->var_popleft = NULL;
generator_heap->var_extend = NULL;
generator_heap->var_check_type = NULL;
generator_heap->var_node = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_3e32df6d3f57409b2fe6234140997d97, module_textual$walk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_a2b771df01944acf98eee59166e27e5e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$walk;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_DOMNode_tuple;
tmp_level_value_1 = const_int_0;
generator->m_frame->m_frame.f_lineno = 129;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 129;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$walk,
        mod_consts.const_str_plain_DOMNode,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_DOMNode);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 129;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_DOMNode == NULL);
generator_heap->var_DOMNode = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_textual$walk$deque(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_deque);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 131;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 131;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 131;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_queue == NULL);
generator_heap->var_queue = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(generator_heap->var_queue);
tmp_expression_value_1 = generator_heap->var_queue;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_popleft);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 132;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_popleft == NULL);
generator_heap->var_popleft = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->var_queue);
tmp_expression_value_2 = generator_heap->var_queue;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_extend);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 133;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_extend == NULL);
generator_heap->var_extend = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_filter_type);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 134;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}

tmp_or_left_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 134;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(generator_heap->var_DOMNode);
tmp_or_right_value_1 = generator_heap->var_DOMNode;
tmp_assign_source_5 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_5 = tmp_or_left_value_1;
or_end_1:;
assert(generator_heap->var_check_type == NULL);
Py_INCREF(tmp_assign_source_5);
generator_heap->var_check_type = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_with_root);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 136;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[2]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 136;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 136;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_root);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 136;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}

tmp_isinstance_inst_1 = Nuitka_Cell_GET(generator->m_closure[1]);
CHECK_OBJECT(generator_heap->var_check_type);
tmp_isinstance_cls_1 = generator_heap->var_check_type;
generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 136;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_root);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 137;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
Py_INCREF(tmp_expression_value_3);
generator->m_yield_return_index = 1;
return tmp_expression_value_3;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 137;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(generator_heap->var_extend);
tmp_called_value_2 = generator_heap->var_extend;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_root);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 138;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_children);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 138;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 138;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 138;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
loop_start_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(generator_heap->var_queue);
tmp_operand_value_1 = generator_heap->var_queue;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 139;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
goto loop_end_1;
branch_no_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
if (generator_heap->var_popleft == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_popleft);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 140;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_3 = generator_heap->var_popleft;
generator->m_frame->m_frame.f_lineno = 140;
tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 140;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_node;
    generator_heap->var_node = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(generator_heap->var_node);
tmp_isinstance_inst_2 = generator_heap->var_node;
CHECK_OBJECT(generator_heap->var_check_type);
tmp_isinstance_cls_2 = generator_heap->var_check_type;
generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 141;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_expression_value_5;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
CHECK_OBJECT(generator_heap->var_node);
tmp_expression_value_5 = generator_heap->var_node;
Py_INCREF(tmp_expression_value_5);
generator->m_yield_return_index = 2;
return tmp_expression_value_5;
yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 142;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
branch_no_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
if (generator_heap->var_extend == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_extend);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 143;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_4 = generator_heap->var_extend;
CHECK_OBJECT(generator_heap->var_node);
tmp_expression_value_6 = generator_heap->var_node;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__nodes);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 143;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 143;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 143;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 139;
generator_heap->type_description_1 = "cccoooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;

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
    generator->m_closure[1],
    generator->m_closure[0],
    generator->m_closure[2],
    generator_heap->var_queue,
    generator_heap->var_DOMNode,
    generator_heap->var_popleft,
    generator_heap->var_extend,
    generator_heap->var_check_type,
    generator_heap->var_node
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

Py_XDECREF(generator_heap->var_queue);
generator_heap->var_queue = NULL;
Py_XDECREF(generator_heap->var_DOMNode);
generator_heap->var_DOMNode = NULL;
Py_XDECREF(generator_heap->var_popleft);
generator_heap->var_popleft = NULL;
Py_XDECREF(generator_heap->var_extend);
generator_heap->var_extend = NULL;
Py_XDECREF(generator_heap->var_check_type);
generator_heap->var_check_type = NULL;
Py_XDECREF(generator_heap->var_node);
generator_heap->var_node = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:
try_end_1:;
CHECK_OBJECT(generator_heap->var_queue);
CHECK_OBJECT(generator_heap->var_queue);
Py_DECREF(generator_heap->var_queue);
generator_heap->var_queue = NULL;
CHECK_OBJECT(generator_heap->var_DOMNode);
CHECK_OBJECT(generator_heap->var_DOMNode);
Py_DECREF(generator_heap->var_DOMNode);
generator_heap->var_DOMNode = NULL;
Py_XDECREF(generator_heap->var_popleft);
generator_heap->var_popleft = NULL;
Py_XDECREF(generator_heap->var_extend);
generator_heap->var_extend = NULL;
CHECK_OBJECT(generator_heap->var_check_type);
CHECK_OBJECT(generator_heap->var_check_type);
Py_DECREF(generator_heap->var_check_type);
generator_heap->var_check_type = NULL;
Py_XDECREF(generator_heap->var_node);
generator_heap->var_node = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$walk$$$function__6_walk_breadth_first$$$genobj__1_walk_breadth_first(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$walk$$$function__6_walk_breadth_first$$$genobj__1_walk_breadth_first_context,
        module_textual$walk,
        mod_consts.const_str_plain_walk_breadth_first,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_3e32df6d3f57409b2fe6234140997d97,
        closure,
        3,
#if 1
        sizeof(struct textual$walk$$$function__6_walk_breadth_first$$$genobj__1_walk_breadth_first_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$walk$$$function__7_walk_breadth_search_id(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_root = python_pars[0];
PyObject *par_node_id = python_pars[1];
PyObject *par_with_root = python_pars[2];
PyObject *var_queue = NULL;
PyObject *var_node = NULL;
PyObject *var_found_node = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_textual$walk$$$function__7_walk_breadth_search_id;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_textual$walk$$$function__7_walk_breadth_search_id = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$walk$$$function__7_walk_breadth_search_id)) {
    Py_XDECREF(cache_frame_frame_textual$walk$$$function__7_walk_breadth_search_id);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$walk$$$function__7_walk_breadth_search_id == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$walk$$$function__7_walk_breadth_search_id = MAKE_FUNCTION_FRAME(tstate, code_objects_cb09b780608270174e39bfccd073cc02, module_textual$walk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$walk$$$function__7_walk_breadth_search_id->m_type_description == NULL);
frame_frame_textual$walk$$$function__7_walk_breadth_search_id = cache_frame_frame_textual$walk$$$function__7_walk_breadth_search_id;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$walk$$$function__7_walk_breadth_search_id);
assert(Py_REFCNT(frame_frame_textual$walk$$$function__7_walk_breadth_search_id) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_with_root);
tmp_truth_name_1 = CHECK_IF_TRUE(par_with_root);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_root);
tmp_expression_value_1 = par_root;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_id);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_node_id);
tmp_cmp_expr_right_1 = par_node_id;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
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
CHECK_OBJECT(par_root);
tmp_return_value = par_root;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_textual$walk$deque(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deque);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$walk$$$function__7_walk_breadth_search_id->m_frame.f_lineno = 165;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_queue == NULL);
var_queue = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_queue);
tmp_expression_value_2 = var_queue;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_append);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_root);
tmp_args_element_value_1 = par_root;
frame_frame_textual$walk$$$function__7_walk_breadth_search_id->m_frame.f_lineno = 166;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
loop_start_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
if (var_queue == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_queue);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 168;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = var_queue;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooo";
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
goto loop_end_1;
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
if (var_queue == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_queue);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 169;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = var_queue;
frame_frame_textual$walk$$$function__7_walk_breadth_search_id->m_frame.f_lineno = 169;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_popleft);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_node;
    var_node = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_node);
tmp_expression_value_4 = var_node;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__nodes);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__get_by_id);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (par_node_id == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_node_id);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 170;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = par_node_id;
frame_frame_textual$walk$$$function__7_walk_breadth_search_id->m_frame.f_lineno = 170;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_assignment_expr_1__value;
    tmp_assignment_expr_1__value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_4 = tmp_assignment_expr_1__value;
{
    PyObject *old = var_found_node;
    var_found_node = tmp_assign_source_4;
    Py_INCREF(var_found_node);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_cmp_expr_left_2 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_2);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(var_found_node);
tmp_return_value = var_found_node;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_6;
if (var_queue == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_queue);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 172;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = var_queue;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_extend);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_node);
tmp_expression_value_6 = var_node;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__nodes);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 172;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$walk$$$function__7_walk_breadth_search_id->m_frame.f_lineno = 172;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$walk$$$function__7_walk_breadth_search_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$walk$$$function__7_walk_breadth_search_id->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$walk$$$function__7_walk_breadth_search_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$walk$$$function__7_walk_breadth_search_id,
    type_description_1,
    par_root,
    par_node_id,
    par_with_root,
    var_queue,
    var_node,
    var_found_node
);


// Release cached frame if used for exception.
if (frame_frame_textual$walk$$$function__7_walk_breadth_search_id == cache_frame_frame_textual$walk$$$function__7_walk_breadth_search_id) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$walk$$$function__7_walk_breadth_search_id);
    cache_frame_frame_textual$walk$$$function__7_walk_breadth_search_id = NULL;
}

assertFrameObject(frame_frame_textual$walk$$$function__7_walk_breadth_search_id);

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
Py_XDECREF(var_queue);
var_queue = NULL;
Py_XDECREF(var_node);
var_node = NULL;
Py_XDECREF(var_found_node);
var_found_node = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_queue);
var_queue = NULL;
Py_XDECREF(var_node);
var_node = NULL;
Py_XDECREF(var_found_node);
var_found_node = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_root);
Py_DECREF(par_root);
CHECK_OBJECT(par_node_id);
Py_DECREF(par_node_id);
CHECK_OBJECT(par_with_root);
Py_DECREF(par_with_root);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_root);
Py_DECREF(par_root);
CHECK_OBJECT(par_node_id);
Py_DECREF(par_node_id);
CHECK_OBJECT(par_with_root);
Py_DECREF(par_with_root);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$walk$$$function__8_walk_selectable_widgets(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_root = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_bounds = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_containers = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_bounds;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_containers;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_root;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_GENERATOR_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_root);
CHECK_OBJECT(par_root);
Py_DECREF(par_root);
par_root = NULL;
CHECK_OBJECT(par_bounds);
CHECK_OBJECT(par_bounds);
Py_DECREF(par_bounds);
par_bounds = NULL;
CHECK_OBJECT(par_containers);
CHECK_OBJECT(par_containers);
Py_DECREF(par_containers);
par_containers = NULL;
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
struct textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets_locals {
PyObject *var_stack;
PyObject *var_pop;
PyObject *var_push;
struct Nuitka_CellObject *var_get_selection_order;
PyObject *var_get_children;
PyObject *var_children;
PyObject *var_node;
PyObject *tmp_assignment_expr_1__value;
PyObject *tmp_assignment_expr_2__value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets_locals *generator_heap = (struct textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_stack = NULL;
generator_heap->var_pop = NULL;
generator_heap->var_push = NULL;
generator_heap->var_get_selection_order = Nuitka_Cell_NewEmpty();
generator_heap->var_get_children = NULL;
generator_heap->var_children = NULL;
generator_heap->var_node = NULL;
generator_heap->tmp_assignment_expr_1__value = NULL;
generator_heap->tmp_assignment_expr_2__value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_73b379be854521806ad5b99f05a507c7, module_textual$walk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_list_element_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_tuple_element_1;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_root);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 189;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_iter_arg_1, 0, tmp_tuple_element_1);
tmp_list_element_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_list_element_1 == NULL));
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_1, 0, tmp_list_element_1);
assert(generator_heap->var_stack == NULL);
generator_heap->var_stack = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(generator_heap->var_stack);
tmp_expression_value_1 = generator_heap->var_stack;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pop);
assert(!(tmp_assign_source_2 == NULL));
assert(generator_heap->var_pop == NULL);
generator_heap->var_pop = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->var_stack);
tmp_expression_value_2 = generator_heap->var_stack;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_append);
assert(!(tmp_assign_source_3 == NULL));
assert(generator_heap->var_push == NULL);
generator_heap->var_push = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_textual$walk$attrgetter(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_attrgetter);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 193;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 193;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain__selection_order_tuple);

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 193;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(generator_heap->var_get_selection_order) == NULL);
Nuitka_Cell_SET(generator_heap->var_get_selection_order, tmp_assign_source_4);

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_864ba1d4bd6ba904af8bf4e5b545a056);
tmp_closure_1[0] = generator->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = generator->m_closure[1];
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = generator_heap->var_get_selection_order;
Py_INCREF(tmp_closure_1[2]);
tmp_assign_source_5 = MAKE_FUNCTION_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children(tstate, tmp_annotations_1, tmp_closure_1);

assert(generator_heap->var_get_children == NULL);
generator_heap->var_get_children = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(generator_heap->var_get_children);
tmp_called_value_2 = generator_heap->var_get_children;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_root);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 214;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[2]);
generator->m_frame->m_frame.f_lineno = 214;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 214;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_children == NULL);
generator_heap->var_children = tmp_assign_source_6;
}
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(generator_heap->var_stack);
tmp_operand_value_1 = generator_heap->var_stack;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_next_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_next_default_1;
CHECK_OBJECT(generator_heap->var_stack);
tmp_expression_value_3 = generator_heap->var_stack;
tmp_subscript_value_1 = const_int_neg_1;
tmp_next_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, -1);
if (tmp_next_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 217;
generator_heap->type_description_1 = "cccooocooo";
    goto try_except_handler_2;
}
tmp_next_default_1 = Py_None;
tmp_assign_source_7 = BUILTIN_NEXT2(tstate, tmp_next_arg_1, tmp_next_default_1);
CHECK_OBJECT(tmp_next_arg_1);
Py_DECREF(tmp_next_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 217;
generator_heap->type_description_1 = "cccooocooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->tmp_assignment_expr_1__value;
    generator_heap->tmp_assignment_expr_1__value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
tmp_assign_source_8 = generator_heap->tmp_assignment_expr_1__value;
{
    PyObject *old = generator_heap->var_node;
    generator_heap->var_node = tmp_assign_source_8;
    Py_INCREF(generator_heap->var_node);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
tmp_cmp_expr_left_1 = generator_heap->tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_1);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
Py_DECREF(generator_heap->tmp_assignment_expr_1__value);
generator_heap->tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_assignment_expr_1__value);
generator_heap->tmp_assignment_expr_1__value = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
if (generator_heap->var_pop == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_pop);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 218;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}

tmp_called_value_3 = generator_heap->var_pop;
generator->m_frame->m_frame.f_lineno = 218;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 218;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(generator_heap->var_node);
tmp_expression_value_4 = generator_heap->var_node;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_is_container);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 220;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 220;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(generator_heap->var_node);
tmp_expression_value_5 = generator_heap->var_node;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_allow_select);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 220;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

generator_heap->exception_lineno = 220;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
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
{
PyObject *tmp_expression_value_6;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_node);
tmp_expression_value_6 = generator_heap->var_node;
Py_INCREF(tmp_expression_value_6);
generator->m_yield_return_index = 1;
return tmp_expression_value_6;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 221;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_2;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
if (generator_heap->var_get_children == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_get_children);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 222;
generator_heap->type_description_1 = "cccooocooo";
    goto try_except_handler_3;
}

tmp_called_value_4 = generator_heap->var_get_children;
CHECK_OBJECT(generator_heap->var_node);
tmp_args_element_value_2 = generator_heap->var_node;
generator->m_frame->m_frame.f_lineno = 222;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 222;
generator_heap->type_description_1 = "cccooocooo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_assignment_expr_2__value;
    generator_heap->tmp_assignment_expr_2__value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_2__value);
tmp_assign_source_10 = generator_heap->tmp_assignment_expr_2__value;
{
    PyObject *old = generator_heap->var_children;
    generator_heap->var_children = tmp_assign_source_10;
    Py_INCREF(generator_heap->var_children);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(generator_heap->tmp_assignment_expr_2__value);
tmp_outline_return_value_1 = generator_heap->tmp_assignment_expr_2__value;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_2__value);
CHECK_OBJECT(generator_heap->tmp_assignment_expr_2__value);
Py_DECREF(generator_heap->tmp_assignment_expr_2__value);
generator_heap->tmp_assignment_expr_2__value = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_assignment_expr_2__value);
generator_heap->tmp_assignment_expr_2__value = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_outline_return_value_1);

generator_heap->exception_lineno = 222;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_iter_arg_2;
if (generator_heap->var_push == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_push);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 223;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}

tmp_called_value_5 = generator_heap->var_push;
CHECK_OBJECT(generator_heap->var_children);
tmp_iter_arg_2 = generator_heap->var_children;
tmp_args_element_value_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 223;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 223;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 223;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 216;
generator_heap->type_description_1 = "cccooocooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;

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
    generator->m_closure[2],
    generator->m_closure[0],
    generator->m_closure[1],
    generator_heap->var_stack,
    generator_heap->var_pop,
    generator_heap->var_push,
    generator_heap->var_get_selection_order,
    generator_heap->var_get_children,
    generator_heap->var_children,
    generator_heap->var_node
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
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_stack);
generator_heap->var_stack = NULL;
Py_XDECREF(generator_heap->var_pop);
generator_heap->var_pop = NULL;
Py_XDECREF(generator_heap->var_push);
generator_heap->var_push = NULL;
CHECK_OBJECT(generator_heap->var_get_selection_order);
CHECK_OBJECT(generator_heap->var_get_selection_order);
Py_DECREF(generator_heap->var_get_selection_order);
generator_heap->var_get_selection_order = NULL;
Py_XDECREF(generator_heap->var_get_children);
generator_heap->var_get_children = NULL;
Py_XDECREF(generator_heap->var_children);
generator_heap->var_children = NULL;
Py_XDECREF(generator_heap->var_node);
generator_heap->var_node = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_1:;
CHECK_OBJECT(generator_heap->var_stack);
CHECK_OBJECT(generator_heap->var_stack);
Py_DECREF(generator_heap->var_stack);
generator_heap->var_stack = NULL;
Py_XDECREF(generator_heap->var_pop);
generator_heap->var_pop = NULL;
Py_XDECREF(generator_heap->var_push);
generator_heap->var_push = NULL;
CHECK_OBJECT(generator_heap->var_get_selection_order);
CHECK_OBJECT(generator_heap->var_get_selection_order);
Py_DECREF(generator_heap->var_get_selection_order);
generator_heap->var_get_selection_order = NULL;
Py_XDECREF(generator_heap->var_get_children);
generator_heap->var_get_children = NULL;
Py_XDECREF(generator_heap->var_children);
generator_heap->var_children = NULL;
Py_XDECREF(generator_heap->var_node);
generator_heap->var_node = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets_context,
        module_textual$walk,
        mod_consts.const_str_plain_walk_selectable_widgets,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_73b379be854521806ad5b99f05a507c7,
        closure,
        3,
#if 1
        sizeof(struct textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_node = python_pars[0];
PyObject *var_children = NULL;
PyObject *outline_0_var_child = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children)) {
    Py_XDECREF(cache_frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children = MAKE_FUNCTION_FRAME(tstate, code_objects_e18248d78407c82a6f00b02eb7bd03ab, module_textual$walk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children->m_type_description == NULL);
frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children = cache_frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children);
assert(Py_REFCNT(frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_sorted);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_node);
tmp_expression_value_1 = par_node;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_displayed_and_visible_children);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_selection_order);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 206;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(self->m_closure[2]);
frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children->m_frame.f_lineno = 204;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}
assert(var_children == NULL);
var_children = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_node);
tmp_cmp_expr_left_1 = par_node;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_containers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 208;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_1 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooccc";
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
PyObject *tmp_assign_source_2;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_children);
tmp_iter_arg_1 = var_children;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooccc";
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
type_description_1 = "ooccc";
exception_lineno = 209;
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
    PyObject *old = outline_0_var_child;
    outline_0_var_child = tmp_assign_source_6;
    Py_INCREF(outline_0_var_child);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bounds);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 210;
type_description_1 = "ooccc";
    goto try_except_handler_3;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_overlaps);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooccc";
    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var_child);
tmp_expression_value_3 = outline_0_var_child;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_content_region);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 210;
type_description_1 = "ooccc";
    goto try_except_handler_3;
}
frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children->m_frame.f_lineno = 210;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooccc";
    goto try_except_handler_3;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 210;
type_description_1 = "ooccc";
    goto try_except_handler_3;
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
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_child);
tmp_append_value_1 = outline_0_var_child;
tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooccc";
    goto try_except_handler_3;
}
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooccc";
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
Py_XDECREF(outline_0_var_child);
outline_0_var_child = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_child);
outline_0_var_child = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 209;
goto frame_exception_exit_1;
outline_result_1:;
{
    PyObject *old = var_children;
    assert(old != NULL);
    var_children = tmp_assign_source_2;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children,
    type_description_1,
    par_node,
    var_children,
    self->m_closure[2],
    self->m_closure[1],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children == cache_frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children);
    cache_frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children = NULL;
}

assertFrameObject(frame_frame_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_children);
tmp_return_value = var_children;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_children);
CHECK_OBJECT(var_children);
Py_DECREF(var_children);
var_children = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_children);
var_children = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_node);
Py_DECREF(par_node);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_node);
Py_DECREF(par_node);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$walk$$$function__3_walk_depth_first(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$walk$$$function__3_walk_depth_first,
        mod_consts.const_str_plain_walk_depth_first,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8e955cbb6cc40003c2d5b44c6e6d2571,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_textual$walk,
        mod_consts.const_str_digest_abb29af3ccac32e470a5d55836885aba,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$walk$$$function__6_walk_breadth_first(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$walk$$$function__6_walk_breadth_first,
        mod_consts.const_str_plain_walk_breadth_first,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3e32df6d3f57409b2fe6234140997d97,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_textual$walk,
        mod_consts.const_str_digest_4b6123de9fa1f665b4d1450a37b9c75e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$walk$$$function__7_walk_breadth_search_id(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$walk$$$function__7_walk_breadth_search_id,
        mod_consts.const_str_plain_walk_breadth_search_id,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cb09b780608270174e39bfccd073cc02,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_textual$walk,
        mod_consts.const_str_digest_4d06e5fc43757f0f6c87fa6fd7d87204,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$walk$$$function__8_walk_selectable_widgets(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$walk$$$function__8_walk_selectable_widgets,
        mod_consts.const_str_plain_walk_selectable_widgets,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_73b379be854521806ad5b99f05a507c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$walk,
        mod_consts.const_str_digest_76a89a692ac68666007baf062bb9cf0d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children,
        mod_consts.const_str_plain_get_children,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a93a14f8c2e07699bf3507a825701f9a,
#endif
        code_objects_e18248d78407c82a6f00b02eb7bd03ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$walk,
        mod_consts.const_str_digest_4faf4cd9a6e2526291b735f4f6fd9f13,
        closure,
        3
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

static function_impl_code const function_table_textual$walk[] = {
impl_textual$walk$$$function__8_walk_selectable_widgets$$$genobj__1_walk_selectable_widgets$$$function__1_get_children,
impl_textual$walk$$$function__3_walk_depth_first,
impl_textual$walk$$$function__6_walk_breadth_first,
impl_textual$walk$$$function__7_walk_breadth_search_id,
impl_textual$walk$$$function__8_walk_selectable_widgets,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$walk);
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
        module_textual$walk,
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
        function_table_textual$walk,
        sizeof(function_table_textual$walk) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.walk";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$walk(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$walk");

    // Store the module for future use.
    module_textual$walk = module;

    moduledict_textual$walk = MODULE_DICT(module_textual$walk);

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
        PRINT_STRING("textual$walk: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$walk: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$walk: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.walk" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$walk\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$walk, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$walk,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$walk,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$walk, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$walk,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$walk, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$walk,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$walk, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$walk,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$walk);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$walk, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$walk, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$walk, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$walk, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$walk);
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

        UPDATE_STRING_DICT1(moduledict_textual$walk, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$walk;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_6fe890d4a321e306b7ca5516940c82bf;
UPDATE_STRING_DICT0(moduledict_textual$walk, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$walk, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$walk = MAKE_MODULE_FRAME(code_objects_e41f0d700093cff9a24c3c92228576fc, module_textual$walk);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$walk);
assert(Py_REFCNT(frame_frame_textual$walk) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$walk$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$walk$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$walk, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_collections;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$walk;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_deque_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$walk->m_frame.f_lineno = 11;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$walk,
        mod_consts.const_str_plain_deque,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_deque);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_deque, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_operator;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$walk;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_attrgetter_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$walk->m_frame.f_lineno = 12;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$walk,
        mod_consts.const_str_plain_attrgetter,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_attrgetter);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_attrgetter, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_7);
tmp_import_from_1__module = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_8);
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$walk,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$walk,
        mod_consts.const_str_plain_Iterator,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Iterator);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$walk,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$walk,
        mod_consts.const_str_plain_overload,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_overload);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_overload, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$walk;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Shape_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$walk->m_frame.f_lineno = 15;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$walk,
        mod_consts.const_str_plain_Shape,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Shape);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_Shape, tmp_assign_source_13);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$walk, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$walk->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$walk, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$walk);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_defaults_1;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_cc8c51a655b5b2f53a67ed1367ce4bef);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_e709c07ee4ef70912e80545fc89867b3);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_14 = MAKE_FUNCTION_textual$walk$$$function__3_walk_depth_first(tstate, tmp_defaults_1, tmp_kw_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_walk_depth_first, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_defaults_2;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_2;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_cc8c51a655b5b2f53a67ed1367ce4bef);
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e709c07ee4ef70912e80545fc89867b3);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_15 = MAKE_FUNCTION_textual$walk$$$function__6_walk_breadth_first(tstate, tmp_defaults_2, tmp_kw_defaults_2, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_walk_breadth_first, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_kw_defaults_3;
PyObject *tmp_annotations_3;
tmp_kw_defaults_3 = DICT_COPY(tstate, mod_consts.const_dict_cc8c51a655b5b2f53a67ed1367ce4bef);
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_063f9494556e962b9db169d355336b6e);

tmp_assign_source_16 = MAKE_FUNCTION_textual$walk$$$function__7_walk_breadth_search_id(tstate, tmp_kw_defaults_3, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_walk_breadth_search_id, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_6b3d74a5fb2a8ef2bd07e2779d53361d);

tmp_assign_source_17 = MAKE_FUNCTION_textual$walk$$$function__8_walk_selectable_widgets(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_textual$walk, (Nuitka_StringObject *)mod_consts.const_str_plain_walk_selectable_widgets, tmp_assign_source_17);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$walk", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.walk" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$walk);
    return module_textual$walk;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$walk, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$walk", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'yaml'
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



/* The "module_yaml" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_yaml;
PyDictObject *moduledict_yaml;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_d723379b3aa0aae8aab9d188c7621289;
PyObject *const_str_plain_Loader;
PyObject *const_str_plain_stream;
PyObject *const_str_plain_loader;
PyObject *const_str_plain_check_token;
PyObject *const_str_plain_get_token;
PyObject *const_str_plain_dispose;
PyObject *const_str_plain_scan;
PyObject *const_str_digest_99dbdfaaba49b3fd6ed769727ae46db0;
PyObject *const_str_plain_check_event;
PyObject *const_str_plain_get_event;
PyObject *const_str_plain_parse;
PyObject *const_str_plain_get_single_node;
PyObject *const_str_digest_dda9d754e9d9e2552897768efc44a688;
PyObject *const_str_digest_3d226ecf905bbfe07cf5d732655a0594;
PyObject *const_str_plain_check_node;
PyObject *const_str_plain_get_node;
PyObject *const_str_plain_compose_all;
PyObject *const_str_plain_get_single_data;
PyObject *const_str_digest_54390cc8fd237de52983d60cf32165f4;
PyObject *const_str_digest_70f26f1c3fe14b09ad336fec99a4eaaf;
PyObject *const_str_plain_check_data;
PyObject *const_str_plain_get_data;
PyObject *const_str_plain_load_all;
PyObject *const_str_plain_load;
PyObject *const_str_plain_FullLoader;
PyObject *const_str_digest_bef06b3fc454393413a3323e590510f5;
PyObject *const_str_digest_12bd55cf3edd4620d77e792df7b68f18;
PyObject *const_str_plain_SafeLoader;
PyObject *const_str_digest_193f77dcd6005ad028cfba36d1f82de9;
PyObject *const_str_digest_adb1272c8f9d806d385146e3beb4567f;
PyObject *const_str_plain_UnsafeLoader;
PyObject *const_str_digest_d63492a6970c7859227bac0ef403d0c1;
PyObject *const_str_digest_4ef99ff6c256096c80463f68d5634b20;
PyObject *const_str_plain_StringIO;
PyObject *const_str_plain_getvalue;
PyObject *const_tuple_e1ee6c43ae8cfe55038a4b7a457dba7d_tuple;
PyObject *const_str_plain_dumper;
PyObject *const_str_plain_emit;
PyObject *const_str_digest_99573145bd60eac1bb5d00b4ab8c04dd;
PyObject *const_str_plain_BytesIO;
PyObject *const_tuple_8dd4f8a5b4e9b6f2fee916760a982915_tuple;
PyObject *const_str_plain_serialize;
PyObject *const_str_digest_47883b02a19b7dbeda3b705893d760c3;
PyObject *const_str_plain_serialize_all;
PyObject *const_str_plain_Dumper;
PyObject *const_str_digest_479d70db887384bc4a899b27c9e3a99e;
PyObject *const_tuple_8ff540ac3f2e2bcf0f7c59e431b41612_tuple;
PyObject *const_str_plain_represent;
PyObject *const_str_digest_8890e2dc1c61feed7ac28972e91e9fda;
PyObject *const_str_plain_dump_all;
PyObject *const_str_digest_e08f6c81feb7e116ad886c7a6c98d67c;
PyObject *const_str_plain_SafeDumper;
PyObject *const_str_digest_3e46f0676f832c24b822b30f798dc7e0;
PyObject *const_str_digest_191894c16e6ac7f40cd7b5640b145c25;
PyObject *const_str_plain_add_implicit_resolver;
PyObject *const_str_digest_6257fe0fb00cfcabb09743dfd1a507db;
PyObject *const_str_plain_add_path_resolver;
PyObject *const_str_digest_2457d91fce89cfce16f5dfd1b3a6ad98;
PyObject *const_str_plain_add_constructor;
PyObject *const_str_digest_8ad8cc3f6f7dd5e6c76248083e7ddcff;
PyObject *const_str_plain_add_multi_constructor;
PyObject *const_str_digest_ee675e9deb22a3be8ac18a46fcc21c5e;
PyObject *const_str_plain_add_representer;
PyObject *const_str_digest_bc87c357d10acb6015b2385c60a5c9a6;
PyObject *const_str_plain_add_multi_representer;
PyObject *const_str_digest_3f27efd868979311ca9e519c77ea2d86;
PyObject *const_str_plain_YAMLObjectMetaclass;
PyObject *const_str_plain_yaml_tag;
PyObject *const_str_plain_isinstance;
PyObject *const_str_plain_yaml_loader;
PyObject *const_str_plain_list;
PyObject *const_str_plain_cls;
PyObject *const_str_plain_from_yaml;
PyObject *const_str_plain_yaml_dumper;
PyObject *const_str_plain_to_yaml;
PyObject *const_str_plain_construct_yaml_object;
PyObject *const_str_digest_3e0d7f5e404bbd5225109144de5cca35;
PyObject *const_str_plain_represent_yaml_object;
PyObject *const_str_plain_yaml_flow_style;
PyObject *const_tuple_str_plain_flow_style_tuple;
PyObject *const_str_digest_5a3b745843d8a6228b60ab400ebf189c;
PyObject *const_str_plain_environ;
PyObject *const_tuple_2fc73ea9574fcd61d682ada7bdf7d6e1_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_error;
PyObject *const_tuple_str_chr_42_tuple;
PyObject *const_str_plain_tokens;
PyObject *const_str_plain_events;
PyObject *const_str_plain_nodes;
PyObject *const_str_digest_85da70d506f176043a30f6affcafb4bc;
PyObject *const_str_plain___version__;
PyObject *const_str_plain_cyaml;
PyObject *const_str_plain___with_libyaml__;
PyObject *const_str_plain_ImportError;
PyObject *const_str_plain_io;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_compose;
PyObject *const_str_plain_full_load;
PyObject *const_str_plain_full_load_all;
PyObject *const_str_plain_safe_load;
PyObject *const_str_plain_safe_load_all;
PyObject *const_str_plain_unsafe_load;
PyObject *const_str_plain_unsafe_load_all;
PyObject *const_str_plain_dump;
PyObject *const_str_plain_safe_dump_all;
PyObject *const_str_plain_safe_dump;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_plain_yaml;
PyObject *const_str_digest_f48bd2ccda8be8f4cd48d2215dfa4ad7;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_347;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_3a29191702803f2976d13b4af605079c;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_metaclass;
PyObject *const_tuple_str_plain_YAMLObject_tuple_empty_tuple;
PyObject *const_str_digest_2e7a1bfa18f198236697e36ce7134df2;
PyObject *const_str_plain_YAMLObject;
PyObject *const_int_pos_362;
PyObject *const_str_plain___slots__;
PyObject *const_str_digest_8c7ee70504ed226d674980b798ed4349;
PyObject *const_str_digest_74c5cae9aad9f23f3235aefca4689825;
PyObject *const_str_digest_7600e22ae94f9ed425ca833c127651bf;
PyObject *const_str_digest_1b9573ae824bc04df674131c14a7d687;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_13dfd60c15ad703cd6f1a6ebd4d71e2e_tuple;
PyObject *const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple;
PyObject *const_tuple_c20dfb5470e5dc811754493000b71135_tuple;
PyObject *const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple;
PyObject *const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple;
PyObject *const_tuple_950adea43bcae15e1447872cace8ac33_tuple;
PyObject *const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple;
PyObject *const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple;
PyObject *const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple;
PyObject *const_tuple_401c98970354c959451389771731b1f3_tuple;
PyObject *const_tuple_799f7fff19427e2e4b9624e2a9c4d7b1_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple;
PyObject *const_tuple_str_plain_stream_tuple;
PyObject *const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple;
PyObject *const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple;
PyObject *const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple;
PyObject *const_tuple_8391db528894087368417ca9a17a2fdf_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple;
PyObject *const_tuple_str_plain_settings_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[152];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("yaml"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_d723379b3aa0aae8aab9d188c7621289);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_Loader);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_loader);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_token);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_token);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_dispose);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_scan);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_99dbdfaaba49b3fd6ed769727ae46db0);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_event);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_event);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_single_node);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_dda9d754e9d9e2552897768efc44a688);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d226ecf905bbfe07cf5d732655a0594);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_node);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_node);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_compose_all);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_single_data);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_54390cc8fd237de52983d60cf32165f4);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_70f26f1c3fe14b09ad336fec99a4eaaf);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_data);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_data);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_all);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_load);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_FullLoader);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_bef06b3fc454393413a3323e590510f5);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_12bd55cf3edd4620d77e792df7b68f18);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_SafeLoader);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_193f77dcd6005ad028cfba36d1f82de9);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_adb1272c8f9d806d385146e3beb4567f);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnsafeLoader);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_d63492a6970c7859227bac0ef403d0c1);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ef99ff6c256096c80463f68d5634b20);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_StringIO);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_getvalue);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_e1ee6c43ae8cfe55038a4b7a457dba7d_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_dumper);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_emit);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_99573145bd60eac1bb5d00b4ab8c04dd);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_8dd4f8a5b4e9b6f2fee916760a982915_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_serialize);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_47883b02a19b7dbeda3b705893d760c3);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_serialize_all);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_Dumper);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_479d70db887384bc4a899b27c9e3a99e);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_8ff540ac3f2e2bcf0f7c59e431b41612_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_represent);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_8890e2dc1c61feed7ac28972e91e9fda);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_dump_all);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_e08f6c81feb7e116ad886c7a6c98d67c);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_SafeDumper);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_3e46f0676f832c24b822b30f798dc7e0);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_191894c16e6ac7f40cd7b5640b145c25);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_implicit_resolver);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_6257fe0fb00cfcabb09743dfd1a507db);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_path_resolver);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_2457d91fce89cfce16f5dfd1b3a6ad98);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_constructor);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ad8cc3f6f7dd5e6c76248083e7ddcff);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_multi_constructor);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee675e9deb22a3be8ac18a46fcc21c5e);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_representer);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc87c357d10acb6015b2385c60a5c9a6);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_multi_representer);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f27efd868979311ca9e519c77ea2d86);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_YAMLObjectMetaclass);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_yaml_tag);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_isinstance);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_yaml_loader);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_list);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_cls);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_yaml);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_yaml_dumper);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_yaml);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_construct_yaml_object);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_3e0d7f5e404bbd5225109144de5cca35);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_represent_yaml_object);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_yaml_flow_style);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_flow_style_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a3b745843d8a6228b60ab400ebf189c);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_2fc73ea9574fcd61d682ada7bdf7d6e1_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_42_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokens);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_events);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_nodes);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_85da70d506f176043a30f6affcafb4bc);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_cyaml);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain___with_libyaml__);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImportError);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_compose);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_full_load);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_full_load_all);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_safe_load);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_safe_load_all);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_unsafe_load);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_unsafe_load_all);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_dump);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_safe_dump_all);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_safe_dump);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_yaml);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_f48bd2ccda8be8f4cd48d2215dfa4ad7);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_int_pos_347);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a29191702803f2976d13b4af605079c);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_YAMLObject_tuple_empty_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e7a1bfa18f198236697e36ce7134df2);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_YAMLObject);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_int_pos_362);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain___slots__);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c7ee70504ed226d674980b798ed4349);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_74c5cae9aad9f23f3235aefca4689825);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_7600e22ae94f9ed425ca833c127651bf);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b9573ae824bc04df674131c14a7d687);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_13dfd60c15ad703cd6f1a6ebd4d71e2e_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_c20dfb5470e5dc811754493000b71135_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_950adea43bcae15e1447872cace8ac33_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_401c98970354c959451389771731b1f3_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_799f7fff19427e2e4b9624e2a9c4d7b1_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stream_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_8391db528894087368417ca9a17a2fdf_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_settings_tuple);
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
void checkModuleConstants_yaml(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_d723379b3aa0aae8aab9d188c7621289));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d723379b3aa0aae8aab9d188c7621289);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_Loader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Loader);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_loader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loader);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_token);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_token);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_dispose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dispose);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_scan));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scan);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_99dbdfaaba49b3fd6ed769727ae46db0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_99dbdfaaba49b3fd6ed769727ae46db0);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_event);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_event);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_single_node));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_single_node);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_dda9d754e9d9e2552897768efc44a688));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dda9d754e9d9e2552897768efc44a688);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d226ecf905bbfe07cf5d732655a0594));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d226ecf905bbfe07cf5d732655a0594);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_node));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_node);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_node));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_node);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_compose_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compose_all);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_single_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_single_data);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_54390cc8fd237de52983d60cf32165f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54390cc8fd237de52983d60cf32165f4);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_70f26f1c3fe14b09ad336fec99a4eaaf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_70f26f1c3fe14b09ad336fec99a4eaaf);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_data);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_data);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_all);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_load));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_FullLoader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FullLoader);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_bef06b3fc454393413a3323e590510f5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bef06b3fc454393413a3323e590510f5);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_12bd55cf3edd4620d77e792df7b68f18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_12bd55cf3edd4620d77e792df7b68f18);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_SafeLoader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SafeLoader);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_193f77dcd6005ad028cfba36d1f82de9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_193f77dcd6005ad028cfba36d1f82de9);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_adb1272c8f9d806d385146e3beb4567f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_adb1272c8f9d806d385146e3beb4567f);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnsafeLoader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnsafeLoader);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_d63492a6970c7859227bac0ef403d0c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d63492a6970c7859227bac0ef403d0c1);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ef99ff6c256096c80463f68d5634b20));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ef99ff6c256096c80463f68d5634b20);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_StringIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StringIO);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_getvalue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getvalue);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_e1ee6c43ae8cfe55038a4b7a457dba7d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e1ee6c43ae8cfe55038a4b7a457dba7d_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_dumper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dumper);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_emit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_emit);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_99573145bd60eac1bb5d00b4ab8c04dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_99573145bd60eac1bb5d00b4ab8c04dd);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BytesIO);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_8dd4f8a5b4e9b6f2fee916760a982915_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8dd4f8a5b4e9b6f2fee916760a982915_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_serialize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_serialize);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_47883b02a19b7dbeda3b705893d760c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_47883b02a19b7dbeda3b705893d760c3);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_serialize_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_serialize_all);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_Dumper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Dumper);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_479d70db887384bc4a899b27c9e3a99e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_479d70db887384bc4a899b27c9e3a99e);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_8ff540ac3f2e2bcf0f7c59e431b41612_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8ff540ac3f2e2bcf0f7c59e431b41612_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_represent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_represent);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_8890e2dc1c61feed7ac28972e91e9fda));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8890e2dc1c61feed7ac28972e91e9fda);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_dump_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dump_all);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_e08f6c81feb7e116ad886c7a6c98d67c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e08f6c81feb7e116ad886c7a6c98d67c);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_SafeDumper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SafeDumper);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_3e46f0676f832c24b822b30f798dc7e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3e46f0676f832c24b822b30f798dc7e0);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_191894c16e6ac7f40cd7b5640b145c25));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_191894c16e6ac7f40cd7b5640b145c25);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_implicit_resolver));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_implicit_resolver);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_6257fe0fb00cfcabb09743dfd1a507db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6257fe0fb00cfcabb09743dfd1a507db);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_path_resolver));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_path_resolver);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_2457d91fce89cfce16f5dfd1b3a6ad98));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2457d91fce89cfce16f5dfd1b3a6ad98);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_constructor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_constructor);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ad8cc3f6f7dd5e6c76248083e7ddcff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ad8cc3f6f7dd5e6c76248083e7ddcff);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_multi_constructor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_multi_constructor);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee675e9deb22a3be8ac18a46fcc21c5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee675e9deb22a3be8ac18a46fcc21c5e);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_representer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_representer);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc87c357d10acb6015b2385c60a5c9a6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc87c357d10acb6015b2385c60a5c9a6);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_multi_representer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_multi_representer);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f27efd868979311ca9e519c77ea2d86));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f27efd868979311ca9e519c77ea2d86);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_YAMLObjectMetaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_YAMLObjectMetaclass);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_yaml_tag));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_yaml_tag);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_isinstance));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isinstance);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_yaml_loader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_yaml_loader);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_list);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cls);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_yaml));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_yaml);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_yaml_dumper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_yaml_dumper);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_yaml));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_yaml);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_construct_yaml_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_construct_yaml_object);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_3e0d7f5e404bbd5225109144de5cca35));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3e0d7f5e404bbd5225109144de5cca35);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_represent_yaml_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_represent_yaml_object);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_yaml_flow_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_yaml_flow_style);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_flow_style_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_flow_style_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a3b745843d8a6228b60ab400ebf189c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a3b745843d8a6228b60ab400ebf189c);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_2fc73ea9574fcd61d682ada7bdf7d6e1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2fc73ea9574fcd61d682ada7bdf7d6e1_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_42_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_42_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokens);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_events);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_nodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nodes);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_85da70d506f176043a30f6affcafb4bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85da70d506f176043a30f6affcafb4bc);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version__);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_cyaml));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cyaml);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain___with_libyaml__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___with_libyaml__);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImportError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImportError);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_io));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_io);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_compose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compose);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_full_load));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_full_load);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_full_load_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_full_load_all);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_safe_load));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_safe_load);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_safe_load_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_safe_load_all);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_unsafe_load));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unsafe_load);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_unsafe_load_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unsafe_load_all);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_dump));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dump);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_safe_dump_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_safe_dump_all);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_safe_dump));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_safe_dump);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_yaml));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_yaml);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_f48bd2ccda8be8f4cd48d2215dfa4ad7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f48bd2ccda8be8f4cd48d2215dfa4ad7);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_int_pos_347));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_347);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a29191702803f2976d13b4af605079c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a29191702803f2976d13b4af605079c);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metaclass);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_YAMLObject_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_YAMLObject_tuple_empty_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e7a1bfa18f198236697e36ce7134df2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2e7a1bfa18f198236697e36ce7134df2);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_YAMLObject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_YAMLObject);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_int_pos_362));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_362);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain___slots__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___slots__);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c7ee70504ed226d674980b798ed4349));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c7ee70504ed226d674980b798ed4349);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_74c5cae9aad9f23f3235aefca4689825));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74c5cae9aad9f23f3235aefca4689825);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_7600e22ae94f9ed425ca833c127651bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7600e22ae94f9ed425ca833c127651bf);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b9573ae824bc04df674131c14a7d687));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b9573ae824bc04df674131c14a7d687);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_13dfd60c15ad703cd6f1a6ebd4d71e2e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_13dfd60c15ad703cd6f1a6ebd4d71e2e_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_c20dfb5470e5dc811754493000b71135_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c20dfb5470e5dc811754493000b71135_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_950adea43bcae15e1447872cace8ac33_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_950adea43bcae15e1447872cace8ac33_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_401c98970354c959451389771731b1f3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_401c98970354c959451389771731b1f3_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_799f7fff19427e2e4b9624e2a9c4d7b1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_799f7fff19427e2e4b9624e2a9c4d7b1_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_stream_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_8391db528894087368417ca9a17a2fdf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8391db528894087368417ca9a17a2fdf_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_settings_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_settings_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 19
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
static PyObject *module_var_accessor_yaml$Dumper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_Dumper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Dumper);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Dumper, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Dumper);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Dumper, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_Dumper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_Dumper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Dumper);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$FullLoader(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_FullLoader);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FullLoader);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FullLoader, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FullLoader);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FullLoader, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_FullLoader);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_FullLoader);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FullLoader);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$ImportError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_ImportError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ImportError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ImportError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ImportError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ImportError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_ImportError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_ImportError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImportError);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$Loader(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_Loader);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Loader);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Loader, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Loader);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Loader, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_Loader);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_Loader);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Loader);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$SafeDumper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_SafeDumper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SafeDumper);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SafeDumper, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SafeDumper);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SafeDumper, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_SafeDumper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_SafeDumper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SafeDumper);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$SafeLoader(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_SafeLoader);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SafeLoader);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SafeLoader, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SafeLoader);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SafeLoader, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_SafeLoader);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_SafeLoader);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SafeLoader);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$UnsafeLoader(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsafeLoader);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UnsafeLoader);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UnsafeLoader, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UnsafeLoader);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UnsafeLoader, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsafeLoader);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsafeLoader);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsafeLoader);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$YAMLObjectMetaclass(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_YAMLObjectMetaclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_YAMLObjectMetaclass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_YAMLObjectMetaclass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_YAMLObjectMetaclass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_YAMLObjectMetaclass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_YAMLObjectMetaclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_YAMLObjectMetaclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_YAMLObjectMetaclass);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$classmethod(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain_classmethod);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_classmethod);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_classmethod, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_classmethod);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_classmethod, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain_classmethod);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain_classmethod);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_classmethod);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$dump_all(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_dump_all);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dump_all);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dump_all, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dump_all);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dump_all, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_dump_all);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_dump_all);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dump_all);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$isinstance(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_isinstance);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isinstance);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isinstance, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isinstance);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isinstance, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_isinstance);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_isinstance);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_isinstance);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$list(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_list);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_list);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_list, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_list);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_list, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_list);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_list);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_list);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$load(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_load);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_load);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_load);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_load);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$load_all(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_load_all);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_all);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_all, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_all);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_all, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_load_all);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_load_all);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_load_all);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$loader(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_loader);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_loader);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_loader, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_loader);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_loader, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_loader);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_loader);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_loader);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$serialize_all(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_serialize_all);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_serialize_all);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_serialize_all, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_serialize_all);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_serialize_all, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_serialize_all);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_serialize_all);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_serialize_all);
    }

    return result;
}

static PyObject *module_var_accessor_yaml$type(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_yaml->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_yaml->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_yaml->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_type);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_891069139b58d89170f5a4be53bccf29;
static PyCodeObject *code_objects_0c773058dac160602e09a1ce967737ab;
static PyCodeObject *code_objects_966526958cadd281a27ad06bb37e8309;
static PyCodeObject *code_objects_346c8f9edf67ad5fe38c563d14442830;
static PyCodeObject *code_objects_84b231f3bf6bd52f7abaad0fc65d3f0e;
static PyCodeObject *code_objects_3be400a389cf6fd8dfe88e9e42c61952;
static PyCodeObject *code_objects_118ff4af4b70b2550fc3b77ef614aafa;
static PyCodeObject *code_objects_1b6a91a93f166b8467c5f1f83efe2a3e;
static PyCodeObject *code_objects_e75fe01c6122d00ea618c4885ab17579;
static PyCodeObject *code_objects_488491a511060c51a5b7cff2ad4dcd7a;
static PyCodeObject *code_objects_0a3c7857b354248c49247bc21c72a8e7;
static PyCodeObject *code_objects_34902b50c1fe6a4ebbe544ccea0a86bf;
static PyCodeObject *code_objects_10f6e6b416f3ead4706418b6977577a1;
static PyCodeObject *code_objects_f6833935794eca9955d788314d38c3e2;
static PyCodeObject *code_objects_a0980bba127658dfbe266b9a6afa1465;
static PyCodeObject *code_objects_3b41e4099c2986c56b2673f8202f6baf;
static PyCodeObject *code_objects_94f7ef068af4c1599ff5514dcab03521;
static PyCodeObject *code_objects_1765e3536dcebbd08fa2de1272793398;
static PyCodeObject *code_objects_4461cb7c2dc8af78318138c6da434b4f;
static PyCodeObject *code_objects_e6e89c7fb57e3bf17f70d190fe2e4c81;
static PyCodeObject *code_objects_363d1950ec7d48272b026aef91bae05a;
static PyCodeObject *code_objects_5916fd1450afbfb64326a3e80e15ae76;
static PyCodeObject *code_objects_18a2bc86d450d070564d0ab587e07108;
static PyCodeObject *code_objects_4fc34b6d14485ade4c1d23ea3c233e50;
static PyCodeObject *code_objects_ee63f5aa7147b500c1600d1f537bec1d;
static PyCodeObject *code_objects_59afebad749b4dce63c685e3e70ef19a;
static PyCodeObject *code_objects_cc1978281ccc1e9e4f697e1a91b36996;
static PyCodeObject *code_objects_278a8408d5ff1f60fe7c712c193901ed;
static PyCodeObject *code_objects_aeda56e0f00a6de2fb0e88b3af35c7e9;
static PyCodeObject *code_objects_e365860f9a1da2e7e4b26ac15814280a;
static PyCodeObject *code_objects_d3ea40ceb4d15b102c4da8b4cd23797b;
static PyCodeObject *code_objects_d7ca3a201e2458c7a0d82d594d219f19;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_7600e22ae94f9ed425ca833c127651bf); CHECK_OBJECT(module_filename_obj);
code_objects_891069139b58d89170f5a4be53bccf29 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_1b9573ae824bc04df674131c14a7d687, mod_consts.const_str_digest_1b9573ae824bc04df674131c14a7d687, NULL, NULL, 0, 0, 0);
code_objects_0c773058dac160602e09a1ce967737ab = MAKE_CODE_OBJECT(module_filename_obj, 362, 0, mod_consts.const_str_plain_YAMLObject, mod_consts.const_str_plain_YAMLObject, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_966526958cadd281a27ad06bb37e8309 = MAKE_CODE_OBJECT(module_filename_obj, 347, 0, mod_consts.const_str_plain_YAMLObjectMetaclass, mod_consts.const_str_plain_YAMLObjectMetaclass, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_346c8f9edf67ad5fe38c563d14442830 = MAKE_CODE_OBJECT(module_filename_obj, 351, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_3a29191702803f2976d13b4af605079c, mod_consts.const_tuple_13dfd60c15ad703cd6f1a6ebd4d71e2e_tuple, NULL, 4, 0, 0);
code_objects_84b231f3bf6bd52f7abaad0fc65d3f0e = MAKE_CODE_OBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_add_constructor, mod_consts.const_str_plain_add_constructor, mod_consts.const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple, NULL, 3, 0, 0);
code_objects_3be400a389cf6fd8dfe88e9e42c61952 = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_add_implicit_resolver, mod_consts.const_str_plain_add_implicit_resolver, mod_consts.const_tuple_c20dfb5470e5dc811754493000b71135_tuple, NULL, 5, 0, 0);
code_objects_118ff4af4b70b2550fc3b77ef614aafa = MAKE_CODE_OBJECT(module_filename_obj, 315, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_add_multi_constructor, mod_consts.const_str_plain_add_multi_constructor, mod_consts.const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple, NULL, 3, 0, 0);
code_objects_1b6a91a93f166b8467c5f1f83efe2a3e = MAKE_CODE_OBJECT(module_filename_obj, 338, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_add_multi_representer, mod_consts.const_str_plain_add_multi_representer, mod_consts.const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple, NULL, 3, 0, 0);
code_objects_e75fe01c6122d00ea618c4885ab17579 = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_add_path_resolver, mod_consts.const_str_plain_add_path_resolver, mod_consts.const_tuple_950adea43bcae15e1447872cace8ac33_tuple, NULL, 5, 0, 0);
code_objects_488491a511060c51a5b7cff2ad4dcd7a = MAKE_CODE_OBJECT(module_filename_obj, 329, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_add_representer, mod_consts.const_str_plain_add_representer, mod_consts.const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple, NULL, 3, 0, 0);
code_objects_0a3c7857b354248c49247bc21c72a8e7 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_compose, mod_consts.const_str_plain_compose, mod_consts.const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, NULL, 2, 0, 0);
code_objects_34902b50c1fe6a4ebbe544ccea0a86bf = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_compose_all, mod_consts.const_str_plain_compose_all, mod_consts.const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, NULL, 2, 0, 0);
code_objects_10f6e6b416f3ead4706418b6977577a1 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_dump, mod_consts.const_str_plain_dump, mod_consts.const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple, NULL, 3, 0, 0);
code_objects_f6833935794eca9955d788314d38c3e2 = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_dump_all, mod_consts.const_str_plain_dump_all, mod_consts.const_tuple_401c98970354c959451389771731b1f3_tuple, NULL, 16, 0, 0);
code_objects_a0980bba127658dfbe266b9a6afa1465 = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_emit, mod_consts.const_str_plain_emit, mod_consts.const_tuple_799f7fff19427e2e4b9624e2a9c4d7b1_tuple, NULL, 8, 0, 0);
code_objects_3b41e4099c2986c56b2673f8202f6baf = MAKE_CODE_OBJECT(module_filename_obj, 377, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_from_yaml, mod_consts.const_str_digest_8c7ee70504ed226d674980b798ed4349, mod_consts.const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple, NULL, 3, 0, 0);
code_objects_94f7ef068af4c1599ff5514dcab03521 = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_full_load, mod_consts.const_str_plain_full_load, mod_consts.const_tuple_str_plain_stream_tuple, NULL, 1, 0, 0);
code_objects_1765e3536dcebbd08fa2de1272793398 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_full_load_all, mod_consts.const_str_plain_full_load_all, mod_consts.const_tuple_str_plain_stream_tuple, NULL, 1, 0, 0);
code_objects_4461cb7c2dc8af78318138c6da434b4f = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_load, mod_consts.const_str_plain_load, mod_consts.const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, NULL, 2, 0, 0);
code_objects_e6e89c7fb57e3bf17f70d190fe2e4c81 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_load_all, mod_consts.const_str_plain_load_all, mod_consts.const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, NULL, 2, 0, 0);
code_objects_363d1950ec7d48272b026aef91bae05a = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_parse, mod_consts.const_str_plain_parse, mod_consts.const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, NULL, 2, 0, 0);
code_objects_5916fd1450afbfb64326a3e80e15ae76 = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_safe_dump, mod_consts.const_str_plain_safe_dump, mod_consts.const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple, NULL, 2, 0, 0);
code_objects_18a2bc86d450d070564d0ab587e07108 = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_safe_dump_all, mod_consts.const_str_plain_safe_dump_all, mod_consts.const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple, NULL, 2, 0, 0);
code_objects_4fc34b6d14485ade4c1d23ea3c233e50 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_safe_load, mod_consts.const_str_plain_safe_load, mod_consts.const_tuple_str_plain_stream_tuple, NULL, 1, 0, 0);
code_objects_ee63f5aa7147b500c1600d1f537bec1d = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_safe_load_all, mod_consts.const_str_plain_safe_load_all, mod_consts.const_tuple_str_plain_stream_tuple, NULL, 1, 0, 0);
code_objects_59afebad749b4dce63c685e3e70ef19a = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_scan, mod_consts.const_str_plain_scan, mod_consts.const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, NULL, 2, 0, 0);
code_objects_cc1978281ccc1e9e4f697e1a91b36996 = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_serialize, mod_consts.const_str_plain_serialize, mod_consts.const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple, NULL, 3, 0, 0);
code_objects_278a8408d5ff1f60fe7c712c193901ed = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_serialize_all, mod_consts.const_str_plain_serialize_all, mod_consts.const_tuple_8391db528894087368417ca9a17a2fdf_tuple, NULL, 13, 0, 0);
code_objects_aeda56e0f00a6de2fb0e88b3af35c7e9 = MAKE_CODE_OBJECT(module_filename_obj, 384, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_to_yaml, mod_consts.const_str_digest_74c5cae9aad9f23f3235aefca4689825, mod_consts.const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple, NULL, 3, 0, 0);
code_objects_e365860f9a1da2e7e4b26ac15814280a = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_unsafe_load, mod_consts.const_str_plain_unsafe_load, mod_consts.const_tuple_str_plain_stream_tuple, NULL, 1, 0, 0);
code_objects_d3ea40ceb4d15b102c4da8b4cd23797b = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_unsafe_load_all, mod_consts.const_str_plain_unsafe_load_all, mod_consts.const_tuple_str_plain_stream_tuple, NULL, 1, 0, 0);
code_objects_d7ca3a201e2458c7a0d82d594d219f19 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_warnings, mod_consts.const_str_plain_warnings, mod_consts.const_tuple_str_plain_settings_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_yaml$$$function__2_scan$$$genobj__1_scan(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_yaml$$$function__3_parse$$$genobj__1_parse(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_yaml$$$function__5_compose_all$$$genobj__1_compose_all(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_yaml$$$function__7_load_all$$$genobj__1_load_all(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_yaml$$$function__10_safe_load(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_yaml$$$function__11_safe_load_all(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_yaml$$$function__12_unsafe_load(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_yaml$$$function__13_unsafe_load_all(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_yaml$$$function__14_emit(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__15_serialize_all(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__16_serialize(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__17_dump_all(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__18_dump(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__19_safe_dump_all(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__1_warnings(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__20_safe_dump(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__21_add_implicit_resolver(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__22_add_path_resolver(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__23_add_constructor(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__24_add_multi_constructor(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__25_add_representer(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__26_add_multi_representer(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__27___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_yaml$$$function__28_from_yaml(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_yaml$$$function__29_to_yaml(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_yaml$$$function__2_scan(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__3_parse(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__4_compose(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__5_compose_all(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$$$function__6_load(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_yaml$$$function__7_load_all(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_yaml$$$function__8_full_load(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_yaml$$$function__9_full_load_all(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_yaml$$$function__1_warnings(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_settings = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_settings);
tmp_cmp_expr_left_1 = par_settings;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = MAKE_DICT_EMPTY(tstate);
goto function_return_exit;
branch_no_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_settings);
Py_DECREF(par_settings);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__2_scan(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_stream = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_Loader = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_Loader;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_stream;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_yaml$$$function__2_scan$$$genobj__1_scan(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_stream);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
par_stream = NULL;
CHECK_OBJECT(par_Loader);
CHECK_OBJECT(par_Loader);
Py_DECREF(par_Loader);
par_Loader = NULL;
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
struct yaml$$$function__2_scan$$$genobj__1_scan_locals {
PyObject *var_loader;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *yaml$$$function__2_scan$$$genobj__1_scan_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct yaml$$$function__2_scan$$$genobj__1_scan_locals *generator_heap = (struct yaml$$$function__2_scan$$$genobj__1_scan_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_loader = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_59afebad749b4dce63c685e3e70ef19a, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 33;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 33;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 33;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 33;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_loader == NULL);
generator_heap->var_loader = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
if (generator_heap->var_loader == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 35;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_called_instance_1 = generator_heap->var_loader;
generator->m_frame->m_frame.f_lineno = 35;
tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_check_token);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 35;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 35;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
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
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (generator_heap->var_loader == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 36;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_called_instance_2 = generator_heap->var_loader;
generator->m_frame->m_frame.f_lineno = 36;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_token);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 36;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 36;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 35;
generator_heap->type_description_1 = "cco";
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

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
if (generator_heap->var_loader == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 38;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}

tmp_called_instance_3 = generator_heap->var_loader;
generator->m_frame->m_frame.f_lineno = 38;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_dispose);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 38;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 34;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cco";
goto try_except_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_2;
if (generator_heap->var_loader == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 38;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_called_instance_4 = generator_heap->var_loader;
generator->m_frame->m_frame.f_lineno = 38;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_dispose);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 38;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}

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
    generator_heap->var_loader
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
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_loader);
generator_heap->var_loader = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->var_loader);
generator_heap->var_loader = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_yaml$$$function__2_scan$$$genobj__1_scan(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        yaml$$$function__2_scan$$$genobj__1_scan_context,
        module_yaml,
        mod_consts.const_str_plain_scan,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_59afebad749b4dce63c685e3e70ef19a,
        closure,
        2,
#if 1
        sizeof(struct yaml$$$function__2_scan$$$genobj__1_scan_locals)
#else
        0
#endif
    );
}


static PyObject *impl_yaml$$$function__3_parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_stream = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_Loader = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_Loader;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_stream;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_yaml$$$function__3_parse$$$genobj__1_parse(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_stream);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
par_stream = NULL;
CHECK_OBJECT(par_Loader);
CHECK_OBJECT(par_Loader);
Py_DECREF(par_Loader);
par_Loader = NULL;
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
struct yaml$$$function__3_parse$$$genobj__1_parse_locals {
PyObject *var_loader;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *yaml$$$function__3_parse$$$genobj__1_parse_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct yaml$$$function__3_parse$$$genobj__1_parse_locals *generator_heap = (struct yaml$$$function__3_parse$$$genobj__1_parse_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_loader = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_363d1950ec7d48272b026aef91bae05a, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 44;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 44;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 44;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 44;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_loader == NULL);
generator_heap->var_loader = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
if (generator_heap->var_loader == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 46;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_called_instance_1 = generator_heap->var_loader;
generator->m_frame->m_frame.f_lineno = 46;
tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_check_event);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 46;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 46;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
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
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (generator_heap->var_loader == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_called_instance_2 = generator_heap->var_loader;
generator->m_frame->m_frame.f_lineno = 47;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_event);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 46;
generator_heap->type_description_1 = "cco";
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

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
if (generator_heap->var_loader == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 49;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}

tmp_called_instance_3 = generator_heap->var_loader;
generator->m_frame->m_frame.f_lineno = 49;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_dispose);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 49;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 45;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cco";
goto try_except_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_2;
if (generator_heap->var_loader == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 49;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_called_instance_4 = generator_heap->var_loader;
generator->m_frame->m_frame.f_lineno = 49;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_dispose);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 49;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}

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
    generator_heap->var_loader
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
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_loader);
generator_heap->var_loader = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->var_loader);
generator_heap->var_loader = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_yaml$$$function__3_parse$$$genobj__1_parse(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        yaml$$$function__3_parse$$$genobj__1_parse_context,
        module_yaml,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_363d1950ec7d48272b026aef91bae05a,
        closure,
        2,
#if 1
        sizeof(struct yaml$$$function__3_parse$$$genobj__1_parse_locals)
#else
        0
#endif
    );
}


static PyObject *impl_yaml$$$function__4_compose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_stream = python_pars[0];
PyObject *par_Loader = python_pars[1];
PyObject *var_loader = NULL;
struct Nuitka_FrameObject *frame_frame_yaml$$$function__4_compose;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__4_compose = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_yaml$$$function__4_compose)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__4_compose);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__4_compose == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__4_compose = MAKE_FUNCTION_FRAME(tstate, code_objects_0a3c7857b354248c49247bc21c72a8e7, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__4_compose->m_type_description == NULL);
frame_frame_yaml$$$function__4_compose = cache_frame_frame_yaml$$$function__4_compose;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__4_compose);
assert(Py_REFCNT(frame_frame_yaml$$$function__4_compose) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_Loader);
tmp_called_value_1 = par_Loader;
CHECK_OBJECT(par_stream);
tmp_args_element_value_1 = par_stream;
frame_frame_yaml$$$function__4_compose->m_frame.f_lineno = 56;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_loader == NULL);
var_loader = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_loader);
tmp_called_instance_1 = var_loader;
frame_frame_yaml$$$function__4_compose->m_frame.f_lineno = 58;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_single_node);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_loader);
tmp_called_instance_2 = var_loader;
frame_frame_yaml$$$function__4_compose->m_frame.f_lineno = 60;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_dispose);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__4_compose, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__4_compose, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_loader);
tmp_called_instance_3 = var_loader;
frame_frame_yaml$$$function__4_compose->m_frame.f_lineno = 60;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_dispose);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 57;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_yaml$$$function__4_compose->m_frame)) {
        frame_frame_yaml$$$function__4_compose->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__4_compose, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__4_compose->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__4_compose, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__4_compose,
    type_description_1,
    par_stream,
    par_Loader,
    var_loader
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__4_compose == cache_frame_frame_yaml$$$function__4_compose) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__4_compose);
    cache_frame_frame_yaml$$$function__4_compose = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__4_compose);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_loader);
CHECK_OBJECT(var_loader);
Py_DECREF(var_loader);
var_loader = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_loader);
var_loader = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_Loader);
Py_DECREF(par_Loader);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_Loader);
Py_DECREF(par_Loader);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__5_compose_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_stream = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_Loader = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_Loader;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_stream;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_yaml$$$function__5_compose_all$$$genobj__1_compose_all(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_stream);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
par_stream = NULL;
CHECK_OBJECT(par_Loader);
CHECK_OBJECT(par_Loader);
Py_DECREF(par_Loader);
par_Loader = NULL;
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
struct yaml$$$function__5_compose_all$$$genobj__1_compose_all_locals {
PyObject *var_loader;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *yaml$$$function__5_compose_all$$$genobj__1_compose_all_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct yaml$$$function__5_compose_all$$$genobj__1_compose_all_locals *generator_heap = (struct yaml$$$function__5_compose_all$$$genobj__1_compose_all_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_loader = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_34902b50c1fe6a4ebbe544ccea0a86bf, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 67;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 67;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 67;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 67;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_loader == NULL);
generator_heap->var_loader = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
if (generator_heap->var_loader == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_called_instance_1 = generator_heap->var_loader;
generator->m_frame->m_frame.f_lineno = 69;
tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_check_node);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
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
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (generator_heap->var_loader == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 70;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_called_instance_2 = generator_heap->var_loader;
generator->m_frame->m_frame.f_lineno = 70;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_node);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 70;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 70;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "cco";
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

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
if (generator_heap->var_loader == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 72;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}

tmp_called_instance_3 = generator_heap->var_loader;
generator->m_frame->m_frame.f_lineno = 72;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_dispose);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 72;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 68;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cco";
goto try_except_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_2;
if (generator_heap->var_loader == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 72;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_called_instance_4 = generator_heap->var_loader;
generator->m_frame->m_frame.f_lineno = 72;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_dispose);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 72;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}

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
    generator_heap->var_loader
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
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_loader);
generator_heap->var_loader = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->var_loader);
generator_heap->var_loader = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_yaml$$$function__5_compose_all$$$genobj__1_compose_all(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        yaml$$$function__5_compose_all$$$genobj__1_compose_all_context,
        module_yaml,
        mod_consts.const_str_plain_compose_all,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_34902b50c1fe6a4ebbe544ccea0a86bf,
        closure,
        2,
#if 1
        sizeof(struct yaml$$$function__5_compose_all$$$genobj__1_compose_all_locals)
#else
        0
#endif
    );
}


static PyObject *impl_yaml$$$function__6_load(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_stream = python_pars[0];
PyObject *par_Loader = python_pars[1];
PyObject *var_loader = NULL;
struct Nuitka_FrameObject *frame_frame_yaml$$$function__6_load;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__6_load = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_yaml$$$function__6_load)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__6_load);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__6_load == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__6_load = MAKE_FUNCTION_FRAME(tstate, code_objects_4461cb7c2dc8af78318138c6da434b4f, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__6_load->m_type_description == NULL);
frame_frame_yaml$$$function__6_load = cache_frame_frame_yaml$$$function__6_load;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__6_load);
assert(Py_REFCNT(frame_frame_yaml$$$function__6_load) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_Loader);
tmp_called_value_1 = par_Loader;
CHECK_OBJECT(par_stream);
tmp_args_element_value_1 = par_stream;
frame_frame_yaml$$$function__6_load->m_frame.f_lineno = 79;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_loader == NULL);
var_loader = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_loader);
tmp_called_instance_1 = var_loader;
frame_frame_yaml$$$function__6_load->m_frame.f_lineno = 81;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_single_data);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_loader);
tmp_called_instance_2 = var_loader;
frame_frame_yaml$$$function__6_load->m_frame.f_lineno = 83;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_dispose);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__6_load, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__6_load, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_loader);
tmp_called_instance_3 = var_loader;
frame_frame_yaml$$$function__6_load->m_frame.f_lineno = 83;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_dispose);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 80;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_yaml$$$function__6_load->m_frame)) {
        frame_frame_yaml$$$function__6_load->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__6_load, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__6_load->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__6_load, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__6_load,
    type_description_1,
    par_stream,
    par_Loader,
    var_loader
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__6_load == cache_frame_frame_yaml$$$function__6_load) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__6_load);
    cache_frame_frame_yaml$$$function__6_load = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__6_load);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_loader);
CHECK_OBJECT(var_loader);
Py_DECREF(var_loader);
var_loader = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_loader);
var_loader = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_Loader);
Py_DECREF(par_Loader);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_Loader);
Py_DECREF(par_Loader);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__7_load_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_stream = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_Loader = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_Loader;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_stream;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_yaml$$$function__7_load_all$$$genobj__1_load_all(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_stream);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
par_stream = NULL;
CHECK_OBJECT(par_Loader);
CHECK_OBJECT(par_Loader);
Py_DECREF(par_Loader);
par_Loader = NULL;
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
struct yaml$$$function__7_load_all$$$genobj__1_load_all_locals {
PyObject *var_loader;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *yaml$$$function__7_load_all$$$genobj__1_load_all_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct yaml$$$function__7_load_all$$$genobj__1_load_all_locals *generator_heap = (struct yaml$$$function__7_load_all$$$genobj__1_load_all_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_loader = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_e6e89c7fb57e3bf17f70d190fe2e4c81, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 90;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 90;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 90;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 90;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_loader == NULL);
generator_heap->var_loader = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
if (generator_heap->var_loader == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 92;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_called_instance_1 = generator_heap->var_loader;
generator->m_frame->m_frame.f_lineno = 92;
tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_check_data);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 92;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 92;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
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
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (generator_heap->var_loader == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 93;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_called_instance_2 = generator_heap->var_loader;
generator->m_frame->m_frame.f_lineno = 93;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_data);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 93;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 93;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 92;
generator_heap->type_description_1 = "cco";
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

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
if (generator_heap->var_loader == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 95;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}

tmp_called_instance_3 = generator_heap->var_loader;
generator->m_frame->m_frame.f_lineno = 95;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_dispose);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 95;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 91;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cco";
goto try_except_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_2;
if (generator_heap->var_loader == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_loader);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 95;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_called_instance_4 = generator_heap->var_loader;
generator->m_frame->m_frame.f_lineno = 95;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_dispose);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 95;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}

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
    generator_heap->var_loader
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
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_loader);
generator_heap->var_loader = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->var_loader);
generator_heap->var_loader = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_yaml$$$function__7_load_all$$$genobj__1_load_all(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        yaml$$$function__7_load_all$$$genobj__1_load_all_context,
        module_yaml,
        mod_consts.const_str_plain_load_all,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_e6e89c7fb57e3bf17f70d190fe2e4c81,
        closure,
        2,
#if 1
        sizeof(struct yaml$$$function__7_load_all$$$genobj__1_load_all_locals)
#else
        0
#endif
    );
}


static PyObject *impl_yaml$$$function__8_full_load(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_stream = python_pars[0];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__8_full_load;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__8_full_load = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__8_full_load)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__8_full_load);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__8_full_load == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__8_full_load = MAKE_FUNCTION_FRAME(tstate, code_objects_94f7ef068af4c1599ff5514dcab03521, module_yaml, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__8_full_load->m_type_description == NULL);
frame_frame_yaml$$$function__8_full_load = cache_frame_frame_yaml$$$function__8_full_load;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__8_full_load);
assert(Py_REFCNT(frame_frame_yaml$$$function__8_full_load) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_yaml$load(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_load);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_stream);
tmp_args_element_value_1 = par_stream;
tmp_args_element_value_2 = module_var_accessor_yaml$FullLoader(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FullLoader);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_yaml$$$function__8_full_load->m_frame.f_lineno = 105;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__8_full_load, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__8_full_load->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__8_full_load, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__8_full_load,
    type_description_1,
    par_stream
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__8_full_load == cache_frame_frame_yaml$$$function__8_full_load) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__8_full_load);
    cache_frame_frame_yaml$$$function__8_full_load = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__8_full_load);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__9_full_load_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_stream = python_pars[0];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__9_full_load_all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__9_full_load_all = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__9_full_load_all)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__9_full_load_all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__9_full_load_all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__9_full_load_all = MAKE_FUNCTION_FRAME(tstate, code_objects_1765e3536dcebbd08fa2de1272793398, module_yaml, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__9_full_load_all->m_type_description == NULL);
frame_frame_yaml$$$function__9_full_load_all = cache_frame_frame_yaml$$$function__9_full_load_all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__9_full_load_all);
assert(Py_REFCNT(frame_frame_yaml$$$function__9_full_load_all) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_yaml$load_all(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_load_all);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_stream);
tmp_args_element_value_1 = par_stream;
tmp_args_element_value_2 = module_var_accessor_yaml$FullLoader(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FullLoader);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_yaml$$$function__9_full_load_all->m_frame.f_lineno = 115;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__9_full_load_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__9_full_load_all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__9_full_load_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__9_full_load_all,
    type_description_1,
    par_stream
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__9_full_load_all == cache_frame_frame_yaml$$$function__9_full_load_all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__9_full_load_all);
    cache_frame_frame_yaml$$$function__9_full_load_all = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__9_full_load_all);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__10_safe_load(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_stream = python_pars[0];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__10_safe_load;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__10_safe_load = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__10_safe_load)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__10_safe_load);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__10_safe_load == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__10_safe_load = MAKE_FUNCTION_FRAME(tstate, code_objects_4fc34b6d14485ade4c1d23ea3c233e50, module_yaml, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__10_safe_load->m_type_description == NULL);
frame_frame_yaml$$$function__10_safe_load = cache_frame_frame_yaml$$$function__10_safe_load;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__10_safe_load);
assert(Py_REFCNT(frame_frame_yaml$$$function__10_safe_load) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_yaml$load(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_load);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_stream);
tmp_args_element_value_1 = par_stream;
tmp_args_element_value_2 = module_var_accessor_yaml$SafeLoader(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SafeLoader);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_yaml$$$function__10_safe_load->m_frame.f_lineno = 125;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__10_safe_load, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__10_safe_load->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__10_safe_load, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__10_safe_load,
    type_description_1,
    par_stream
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__10_safe_load == cache_frame_frame_yaml$$$function__10_safe_load) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__10_safe_load);
    cache_frame_frame_yaml$$$function__10_safe_load = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__10_safe_load);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__11_safe_load_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_stream = python_pars[0];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__11_safe_load_all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__11_safe_load_all = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__11_safe_load_all)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__11_safe_load_all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__11_safe_load_all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__11_safe_load_all = MAKE_FUNCTION_FRAME(tstate, code_objects_ee63f5aa7147b500c1600d1f537bec1d, module_yaml, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__11_safe_load_all->m_type_description == NULL);
frame_frame_yaml$$$function__11_safe_load_all = cache_frame_frame_yaml$$$function__11_safe_load_all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__11_safe_load_all);
assert(Py_REFCNT(frame_frame_yaml$$$function__11_safe_load_all) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_yaml$load_all(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_load_all);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_stream);
tmp_args_element_value_1 = par_stream;
tmp_args_element_value_2 = module_var_accessor_yaml$SafeLoader(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SafeLoader);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_yaml$$$function__11_safe_load_all->m_frame.f_lineno = 135;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__11_safe_load_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__11_safe_load_all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__11_safe_load_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__11_safe_load_all,
    type_description_1,
    par_stream
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__11_safe_load_all == cache_frame_frame_yaml$$$function__11_safe_load_all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__11_safe_load_all);
    cache_frame_frame_yaml$$$function__11_safe_load_all = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__11_safe_load_all);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__12_unsafe_load(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_stream = python_pars[0];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__12_unsafe_load;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__12_unsafe_load = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__12_unsafe_load)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__12_unsafe_load);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__12_unsafe_load == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__12_unsafe_load = MAKE_FUNCTION_FRAME(tstate, code_objects_e365860f9a1da2e7e4b26ac15814280a, module_yaml, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__12_unsafe_load->m_type_description == NULL);
frame_frame_yaml$$$function__12_unsafe_load = cache_frame_frame_yaml$$$function__12_unsafe_load;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__12_unsafe_load);
assert(Py_REFCNT(frame_frame_yaml$$$function__12_unsafe_load) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_yaml$load(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_load);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_stream);
tmp_args_element_value_1 = par_stream;
tmp_args_element_value_2 = module_var_accessor_yaml$UnsafeLoader(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UnsafeLoader);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_yaml$$$function__12_unsafe_load->m_frame.f_lineno = 145;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__12_unsafe_load, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__12_unsafe_load->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__12_unsafe_load, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__12_unsafe_load,
    type_description_1,
    par_stream
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__12_unsafe_load == cache_frame_frame_yaml$$$function__12_unsafe_load) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__12_unsafe_load);
    cache_frame_frame_yaml$$$function__12_unsafe_load = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__12_unsafe_load);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__13_unsafe_load_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_stream = python_pars[0];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__13_unsafe_load_all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__13_unsafe_load_all = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__13_unsafe_load_all)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__13_unsafe_load_all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__13_unsafe_load_all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__13_unsafe_load_all = MAKE_FUNCTION_FRAME(tstate, code_objects_d3ea40ceb4d15b102c4da8b4cd23797b, module_yaml, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__13_unsafe_load_all->m_type_description == NULL);
frame_frame_yaml$$$function__13_unsafe_load_all = cache_frame_frame_yaml$$$function__13_unsafe_load_all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__13_unsafe_load_all);
assert(Py_REFCNT(frame_frame_yaml$$$function__13_unsafe_load_all) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_yaml$load_all(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_load_all);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_stream);
tmp_args_element_value_1 = par_stream;
tmp_args_element_value_2 = module_var_accessor_yaml$UnsafeLoader(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UnsafeLoader);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_yaml$$$function__13_unsafe_load_all->m_frame.f_lineno = 155;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__13_unsafe_load_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__13_unsafe_load_all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__13_unsafe_load_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__13_unsafe_load_all,
    type_description_1,
    par_stream
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__13_unsafe_load_all == cache_frame_frame_yaml$$$function__13_unsafe_load_all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__13_unsafe_load_all);
    cache_frame_frame_yaml$$$function__13_unsafe_load_all = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__13_unsafe_load_all);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__14_emit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_events = python_pars[0];
PyObject *par_stream = python_pars[1];
PyObject *par_Dumper = python_pars[2];
PyObject *par_canonical = python_pars[3];
PyObject *par_indent = python_pars[4];
PyObject *par_width = python_pars[5];
PyObject *par_allow_unicode = python_pars[6];
PyObject *par_line_break = python_pars[7];
PyObject *var_getvalue = NULL;
PyObject *var_dumper = NULL;
PyObject *var_event = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_yaml$$$function__14_emit;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__14_emit = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
assert(var_getvalue == NULL);
Py_INCREF(tmp_assign_source_1);
var_getvalue = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_yaml$$$function__14_emit)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__14_emit);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__14_emit == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__14_emit = MAKE_FUNCTION_FRAME(tstate, code_objects_a0980bba127658dfbe266b9a6afa1465, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__14_emit->m_type_description == NULL);
frame_frame_yaml$$$function__14_emit = cache_frame_frame_yaml$$$function__14_emit;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__14_emit);
assert(Py_REFCNT(frame_frame_yaml$$$function__14_emit) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_stream);
tmp_cmp_expr_left_1 = par_stream;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_StringIO);
}
assert(!(tmp_called_value_1 == NULL));
frame_frame_yaml$$$function__14_emit->m_frame.f_lineno = 166;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_stream;
    assert(old != NULL);
    par_stream = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_stream);
tmp_expression_value_1 = par_stream;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_getvalue);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_getvalue;
    assert(old != NULL);
    var_getvalue = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
CHECK_OBJECT(par_Dumper);
tmp_called_value_2 = par_Dumper;
if (par_stream == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 168;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = par_stream;
CHECK_OBJECT(par_canonical);
tmp_kw_call_dict_value_0_1 = par_canonical;
CHECK_OBJECT(par_indent);
tmp_kw_call_dict_value_1_1 = par_indent;
CHECK_OBJECT(par_width);
tmp_kw_call_dict_value_2_1 = par_width;
CHECK_OBJECT(par_allow_unicode);
tmp_kw_call_dict_value_3_1 = par_allow_unicode;
CHECK_OBJECT(par_line_break);
tmp_kw_call_dict_value_4_1 = par_line_break;
frame_frame_yaml$$$function__14_emit->m_frame.f_lineno = 168;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_e1ee6c43ae8cfe55038a4b7a457dba7d_tuple);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_dumper == NULL);
var_dumper = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_events);
tmp_iter_arg_1 = par_events;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
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
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
exception_lineno = 171;
        goto try_except_handler_3;
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
    PyObject *old = var_event;
    var_event = tmp_assign_source_7;
    Py_INCREF(var_event);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (var_dumper == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dumper);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 172;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}

tmp_called_instance_1 = var_dumper;
CHECK_OBJECT(var_event);
tmp_args_element_value_1 = var_event;
frame_frame_yaml$$$function__14_emit->m_frame.f_lineno = 172;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_emit, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__14_emit, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__14_emit, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
if (var_dumper == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dumper);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 174;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}

tmp_called_instance_2 = var_dumper;
frame_frame_yaml$$$function__14_emit->m_frame.f_lineno = 174;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_dispose);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 170;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_yaml$$$function__14_emit->m_frame)) {
        frame_frame_yaml$$$function__14_emit->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
goto try_except_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
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
try_end_2:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
if (var_dumper == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dumper);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 174;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_3 = var_dumper;
frame_frame_yaml$$$function__14_emit->m_frame.f_lineno = 174;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_dispose);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_getvalue);
tmp_truth_name_1 = CHECK_IF_TRUE(var_getvalue);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_called_value_3;
CHECK_OBJECT(var_getvalue);
tmp_called_value_3 = var_getvalue;
frame_frame_yaml$$$function__14_emit->m_frame.f_lineno = 176;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__14_emit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__14_emit->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__14_emit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__14_emit,
    type_description_1,
    par_events,
    par_stream,
    par_Dumper,
    par_canonical,
    par_indent,
    par_width,
    par_allow_unicode,
    par_line_break,
    var_getvalue,
    var_dumper,
    var_event
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__14_emit == cache_frame_frame_yaml$$$function__14_emit) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__14_emit);
    cache_frame_frame_yaml$$$function__14_emit = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__14_emit);

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
Py_XDECREF(par_stream);
par_stream = NULL;
CHECK_OBJECT(var_getvalue);
CHECK_OBJECT(var_getvalue);
Py_DECREF(var_getvalue);
var_getvalue = NULL;
Py_XDECREF(var_dumper);
var_dumper = NULL;
Py_XDECREF(var_event);
var_event = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_stream);
par_stream = NULL;
Py_XDECREF(var_getvalue);
var_getvalue = NULL;
Py_XDECREF(var_dumper);
var_dumper = NULL;
Py_XDECREF(var_event);
var_event = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_events);
Py_DECREF(par_events);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);
CHECK_OBJECT(par_canonical);
Py_DECREF(par_canonical);
CHECK_OBJECT(par_indent);
Py_DECREF(par_indent);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
CHECK_OBJECT(par_allow_unicode);
Py_DECREF(par_allow_unicode);
CHECK_OBJECT(par_line_break);
Py_DECREF(par_line_break);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_events);
Py_DECREF(par_events);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);
CHECK_OBJECT(par_canonical);
Py_DECREF(par_canonical);
CHECK_OBJECT(par_indent);
Py_DECREF(par_indent);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
CHECK_OBJECT(par_allow_unicode);
Py_DECREF(par_allow_unicode);
CHECK_OBJECT(par_line_break);
Py_DECREF(par_line_break);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__15_serialize_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_nodes = python_pars[0];
PyObject *par_stream = python_pars[1];
PyObject *par_Dumper = python_pars[2];
PyObject *par_canonical = python_pars[3];
PyObject *par_indent = python_pars[4];
PyObject *par_width = python_pars[5];
PyObject *par_allow_unicode = python_pars[6];
PyObject *par_line_break = python_pars[7];
PyObject *par_encoding = python_pars[8];
PyObject *par_explicit_start = python_pars[9];
PyObject *par_explicit_end = python_pars[10];
PyObject *par_version = python_pars[11];
PyObject *par_tags = python_pars[12];
PyObject *var_getvalue = NULL;
PyObject *var_dumper = NULL;
PyObject *var_node = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_yaml$$$function__15_serialize_all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__15_serialize_all = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
assert(var_getvalue == NULL);
Py_INCREF(tmp_assign_source_1);
var_getvalue = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_yaml$$$function__15_serialize_all)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__15_serialize_all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__15_serialize_all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__15_serialize_all = MAKE_FUNCTION_FRAME(tstate, code_objects_278a8408d5ff1f60fe7c712c193901ed, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__15_serialize_all->m_type_description == NULL);
frame_frame_yaml$$$function__15_serialize_all = cache_frame_frame_yaml$$$function__15_serialize_all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__15_serialize_all);
assert(Py_REFCNT(frame_frame_yaml$$$function__15_serialize_all) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_stream);
tmp_cmp_expr_left_1 = par_stream;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_encoding);
tmp_cmp_expr_left_2 = par_encoding;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_StringIO);
}
assert(!(tmp_called_value_1 == NULL));
frame_frame_yaml$$$function__15_serialize_all->m_frame.f_lineno = 190;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_stream;
    assert(old != NULL);
    par_stream = tmp_assign_source_2;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_called_value_2 == NULL));
frame_frame_yaml$$$function__15_serialize_all->m_frame.f_lineno = 192;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_stream;
    assert(old != NULL);
    par_stream = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_end_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_stream);
tmp_expression_value_1 = par_stream;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_getvalue);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_getvalue;
    assert(old != NULL);
    var_getvalue = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_kw_call_dict_value_8_1;
PyObject *tmp_kw_call_dict_value_9_1;
CHECK_OBJECT(par_Dumper);
tmp_called_value_3 = par_Dumper;
if (par_stream == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 194;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = par_stream;
CHECK_OBJECT(par_canonical);
tmp_kw_call_dict_value_0_1 = par_canonical;
CHECK_OBJECT(par_indent);
tmp_kw_call_dict_value_1_1 = par_indent;
CHECK_OBJECT(par_width);
tmp_kw_call_dict_value_2_1 = par_width;
CHECK_OBJECT(par_allow_unicode);
tmp_kw_call_dict_value_3_1 = par_allow_unicode;
CHECK_OBJECT(par_line_break);
tmp_kw_call_dict_value_4_1 = par_line_break;
CHECK_OBJECT(par_encoding);
tmp_kw_call_dict_value_5_1 = par_encoding;
CHECK_OBJECT(par_version);
tmp_kw_call_dict_value_6_1 = par_version;
CHECK_OBJECT(par_tags);
tmp_kw_call_dict_value_7_1 = par_tags;
CHECK_OBJECT(par_explicit_start);
tmp_kw_call_dict_value_8_1 = par_explicit_start;
CHECK_OBJECT(par_explicit_end);
tmp_kw_call_dict_value_9_1 = par_explicit_end;
frame_frame_yaml$$$function__15_serialize_all->m_frame.f_lineno = 194;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[10] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_8dd4f8a5b4e9b6f2fee916760a982915_tuple);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_dumper == NULL);
var_dumper = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_dumper);
tmp_called_instance_1 = var_dumper;
frame_frame_yaml$$$function__15_serialize_all->m_frame.f_lineno = 199;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_open);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_nodes);
tmp_iter_arg_1 = par_nodes;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
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
exception_lineno = 200;
        goto try_except_handler_3;
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
    PyObject *old = var_node;
    var_node = tmp_assign_source_8;
    Py_INCREF(var_node);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
if (var_dumper == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dumper);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 201;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}

tmp_called_instance_2 = var_dumper;
CHECK_OBJECT(var_node);
tmp_args_element_value_1 = var_node;
frame_frame_yaml$$$function__15_serialize_all->m_frame.f_lineno = 201;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_serialize, tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
if (var_dumper == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dumper);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 202;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_instance_3 = var_dumper;
frame_frame_yaml$$$function__15_serialize_all->m_frame.f_lineno = 202;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, const_str_plain_close);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__15_serialize_all, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__15_serialize_all, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_4;
if (var_dumper == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dumper);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 204;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}

tmp_called_instance_4 = var_dumper;
frame_frame_yaml$$$function__15_serialize_all->m_frame.f_lineno = 204;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_dispose);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 198;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_yaml$$$function__15_serialize_all->m_frame)) {
        frame_frame_yaml$$$function__15_serialize_all->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooo";
goto try_except_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
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
try_end_2:;
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_5;
if (var_dumper == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dumper);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 204;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_5 = var_dumper;
frame_frame_yaml$$$function__15_serialize_all->m_frame.f_lineno = 204;
tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_dispose);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
CHECK_OBJECT(var_getvalue);
tmp_truth_name_1 = CHECK_IF_TRUE(var_getvalue);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
CHECK_OBJECT(var_getvalue);
tmp_called_value_4 = var_getvalue;
frame_frame_yaml$$$function__15_serialize_all->m_frame.f_lineno = 206;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__15_serialize_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__15_serialize_all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__15_serialize_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__15_serialize_all,
    type_description_1,
    par_nodes,
    par_stream,
    par_Dumper,
    par_canonical,
    par_indent,
    par_width,
    par_allow_unicode,
    par_line_break,
    par_encoding,
    par_explicit_start,
    par_explicit_end,
    par_version,
    par_tags,
    var_getvalue,
    var_dumper,
    var_node
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__15_serialize_all == cache_frame_frame_yaml$$$function__15_serialize_all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__15_serialize_all);
    cache_frame_frame_yaml$$$function__15_serialize_all = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__15_serialize_all);

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
Py_XDECREF(par_stream);
par_stream = NULL;
CHECK_OBJECT(var_getvalue);
CHECK_OBJECT(var_getvalue);
Py_DECREF(var_getvalue);
var_getvalue = NULL;
Py_XDECREF(var_dumper);
var_dumper = NULL;
Py_XDECREF(var_node);
var_node = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_stream);
par_stream = NULL;
Py_XDECREF(var_getvalue);
var_getvalue = NULL;
Py_XDECREF(var_dumper);
var_dumper = NULL;
Py_XDECREF(var_node);
var_node = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_nodes);
Py_DECREF(par_nodes);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);
CHECK_OBJECT(par_canonical);
Py_DECREF(par_canonical);
CHECK_OBJECT(par_indent);
Py_DECREF(par_indent);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
CHECK_OBJECT(par_allow_unicode);
Py_DECREF(par_allow_unicode);
CHECK_OBJECT(par_line_break);
Py_DECREF(par_line_break);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_explicit_start);
Py_DECREF(par_explicit_start);
CHECK_OBJECT(par_explicit_end);
Py_DECREF(par_explicit_end);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_tags);
Py_DECREF(par_tags);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_nodes);
Py_DECREF(par_nodes);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);
CHECK_OBJECT(par_canonical);
Py_DECREF(par_canonical);
CHECK_OBJECT(par_indent);
Py_DECREF(par_indent);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
CHECK_OBJECT(par_allow_unicode);
Py_DECREF(par_allow_unicode);
CHECK_OBJECT(par_line_break);
Py_DECREF(par_line_break);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_explicit_start);
Py_DECREF(par_explicit_start);
CHECK_OBJECT(par_explicit_end);
Py_DECREF(par_explicit_end);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_tags);
Py_DECREF(par_tags);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__16_serialize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_node = python_pars[0];
PyObject *par_stream = python_pars[1];
PyObject *par_Dumper = python_pars[2];
PyObject *par_kwds = python_pars[3];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__16_serialize;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__16_serialize = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__16_serialize)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__16_serialize);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__16_serialize == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__16_serialize = MAKE_FUNCTION_FRAME(tstate, code_objects_cc1978281ccc1e9e4f697e1a91b36996, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__16_serialize->m_type_description == NULL);
frame_frame_yaml$$$function__16_serialize = cache_frame_frame_yaml$$$function__16_serialize;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__16_serialize);
assert(Py_REFCNT(frame_frame_yaml$$$function__16_serialize) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_list_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
tmp_direct_call_arg1_1 = module_var_accessor_yaml$serialize_all(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_serialize_all);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_node);
tmp_list_element_1 = par_node;
tmp_tuple_element_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_tuple_element_1, 0, tmp_list_element_1);
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_stream);
tmp_tuple_element_1 = par_stream;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_Dumper;
CHECK_OBJECT(par_Dumper);
tmp_dict_value_1 = par_Dumper;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwds);
tmp_direct_call_arg4_1 = par_kwds;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__16_serialize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__16_serialize->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__16_serialize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__16_serialize,
    type_description_1,
    par_node,
    par_stream,
    par_Dumper,
    par_kwds
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__16_serialize == cache_frame_frame_yaml$$$function__16_serialize) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__16_serialize);
    cache_frame_frame_yaml$$$function__16_serialize = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__16_serialize);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_node);
Py_DECREF(par_node);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);
CHECK_OBJECT(par_kwds);
Py_DECREF(par_kwds);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_node);
Py_DECREF(par_node);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);
CHECK_OBJECT(par_kwds);
Py_DECREF(par_kwds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__17_dump_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_documents = python_pars[0];
PyObject *par_stream = python_pars[1];
PyObject *par_Dumper = python_pars[2];
PyObject *par_default_style = python_pars[3];
PyObject *par_default_flow_style = python_pars[4];
PyObject *par_canonical = python_pars[5];
PyObject *par_indent = python_pars[6];
PyObject *par_width = python_pars[7];
PyObject *par_allow_unicode = python_pars[8];
PyObject *par_line_break = python_pars[9];
PyObject *par_encoding = python_pars[10];
PyObject *par_explicit_start = python_pars[11];
PyObject *par_explicit_end = python_pars[12];
PyObject *par_version = python_pars[13];
PyObject *par_tags = python_pars[14];
PyObject *par_sort_keys = python_pars[15];
PyObject *var_getvalue = NULL;
PyObject *var_dumper = NULL;
PyObject *var_data = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_yaml$$$function__17_dump_all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__17_dump_all = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
assert(var_getvalue == NULL);
Py_INCREF(tmp_assign_source_1);
var_getvalue = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_yaml$$$function__17_dump_all)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__17_dump_all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__17_dump_all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__17_dump_all = MAKE_FUNCTION_FRAME(tstate, code_objects_f6833935794eca9955d788314d38c3e2, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__17_dump_all->m_type_description == NULL);
frame_frame_yaml$$$function__17_dump_all = cache_frame_frame_yaml$$$function__17_dump_all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__17_dump_all);
assert(Py_REFCNT(frame_frame_yaml$$$function__17_dump_all) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_stream);
tmp_cmp_expr_left_1 = par_stream;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_encoding);
tmp_cmp_expr_left_2 = par_encoding;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_StringIO);
}
assert(!(tmp_called_value_1 == NULL));
frame_frame_yaml$$$function__17_dump_all->m_frame.f_lineno = 228;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_stream;
    assert(old != NULL);
    par_stream = tmp_assign_source_2;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_called_value_2 == NULL));
frame_frame_yaml$$$function__17_dump_all->m_frame.f_lineno = 230;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_stream;
    assert(old != NULL);
    par_stream = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_end_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_stream);
tmp_expression_value_1 = par_stream;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_getvalue);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_getvalue;
    assert(old != NULL);
    var_getvalue = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_kw_call_dict_value_8_1;
PyObject *tmp_kw_call_dict_value_9_1;
PyObject *tmp_kw_call_dict_value_10_1;
PyObject *tmp_kw_call_dict_value_11_1;
PyObject *tmp_kw_call_dict_value_12_1;
CHECK_OBJECT(par_Dumper);
tmp_called_value_3 = par_Dumper;
if (par_stream == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 232;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = par_stream;
CHECK_OBJECT(par_default_style);
tmp_kw_call_dict_value_0_1 = par_default_style;
CHECK_OBJECT(par_default_flow_style);
tmp_kw_call_dict_value_1_1 = par_default_flow_style;
CHECK_OBJECT(par_canonical);
tmp_kw_call_dict_value_2_1 = par_canonical;
CHECK_OBJECT(par_indent);
tmp_kw_call_dict_value_3_1 = par_indent;
CHECK_OBJECT(par_width);
tmp_kw_call_dict_value_4_1 = par_width;
CHECK_OBJECT(par_allow_unicode);
tmp_kw_call_dict_value_5_1 = par_allow_unicode;
CHECK_OBJECT(par_line_break);
tmp_kw_call_dict_value_6_1 = par_line_break;
CHECK_OBJECT(par_encoding);
tmp_kw_call_dict_value_7_1 = par_encoding;
CHECK_OBJECT(par_version);
tmp_kw_call_dict_value_8_1 = par_version;
CHECK_OBJECT(par_tags);
tmp_kw_call_dict_value_9_1 = par_tags;
CHECK_OBJECT(par_explicit_start);
tmp_kw_call_dict_value_10_1 = par_explicit_start;
CHECK_OBJECT(par_explicit_end);
tmp_kw_call_dict_value_11_1 = par_explicit_end;
CHECK_OBJECT(par_sort_keys);
tmp_kw_call_dict_value_12_1 = par_sort_keys;
frame_frame_yaml$$$function__17_dump_all->m_frame.f_lineno = 232;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[13] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_8ff540ac3f2e2bcf0f7c59e431b41612_tuple);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_dumper == NULL);
var_dumper = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_dumper);
tmp_called_instance_1 = var_dumper;
frame_frame_yaml$$$function__17_dump_all->m_frame.f_lineno = 239;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_open);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_documents);
tmp_iter_arg_1 = par_documents;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_2;
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
type_description_1 = "ooooooooooooooooooo";
exception_lineno = 240;
        goto try_except_handler_3;
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
    PyObject *old = var_data;
    var_data = tmp_assign_source_8;
    Py_INCREF(var_data);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
if (var_dumper == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dumper);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 241;
type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_called_instance_2 = var_dumper;
CHECK_OBJECT(var_data);
tmp_args_element_value_1 = var_data;
frame_frame_yaml$$$function__17_dump_all->m_frame.f_lineno = 241;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_represent, tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
if (var_dumper == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dumper);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 242;
type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_instance_3 = var_dumper;
frame_frame_yaml$$$function__17_dump_all->m_frame.f_lineno = 242;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, const_str_plain_close);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__17_dump_all, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__17_dump_all, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_4;
if (var_dumper == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dumper);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 244;
type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_called_instance_4 = var_dumper;
frame_frame_yaml$$$function__17_dump_all->m_frame.f_lineno = 244;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_dispose);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 238;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_yaml$$$function__17_dump_all->m_frame)) {
        frame_frame_yaml$$$function__17_dump_all->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooooooo";
goto try_except_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
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
try_end_2:;
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_5;
if (var_dumper == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dumper);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 244;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_5 = var_dumper;
frame_frame_yaml$$$function__17_dump_all->m_frame.f_lineno = 244;
tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_dispose);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
CHECK_OBJECT(var_getvalue);
tmp_truth_name_1 = CHECK_IF_TRUE(var_getvalue);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
CHECK_OBJECT(var_getvalue);
tmp_called_value_4 = var_getvalue;
frame_frame_yaml$$$function__17_dump_all->m_frame.f_lineno = 246;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__17_dump_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__17_dump_all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__17_dump_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__17_dump_all,
    type_description_1,
    par_documents,
    par_stream,
    par_Dumper,
    par_default_style,
    par_default_flow_style,
    par_canonical,
    par_indent,
    par_width,
    par_allow_unicode,
    par_line_break,
    par_encoding,
    par_explicit_start,
    par_explicit_end,
    par_version,
    par_tags,
    par_sort_keys,
    var_getvalue,
    var_dumper,
    var_data
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__17_dump_all == cache_frame_frame_yaml$$$function__17_dump_all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__17_dump_all);
    cache_frame_frame_yaml$$$function__17_dump_all = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__17_dump_all);

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
Py_XDECREF(par_stream);
par_stream = NULL;
CHECK_OBJECT(var_getvalue);
CHECK_OBJECT(var_getvalue);
Py_DECREF(var_getvalue);
var_getvalue = NULL;
Py_XDECREF(var_dumper);
var_dumper = NULL;
Py_XDECREF(var_data);
var_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_stream);
par_stream = NULL;
Py_XDECREF(var_getvalue);
var_getvalue = NULL;
Py_XDECREF(var_dumper);
var_dumper = NULL;
Py_XDECREF(var_data);
var_data = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_documents);
Py_DECREF(par_documents);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);
CHECK_OBJECT(par_default_style);
Py_DECREF(par_default_style);
CHECK_OBJECT(par_default_flow_style);
Py_DECREF(par_default_flow_style);
CHECK_OBJECT(par_canonical);
Py_DECREF(par_canonical);
CHECK_OBJECT(par_indent);
Py_DECREF(par_indent);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
CHECK_OBJECT(par_allow_unicode);
Py_DECREF(par_allow_unicode);
CHECK_OBJECT(par_line_break);
Py_DECREF(par_line_break);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_explicit_start);
Py_DECREF(par_explicit_start);
CHECK_OBJECT(par_explicit_end);
Py_DECREF(par_explicit_end);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_tags);
Py_DECREF(par_tags);
CHECK_OBJECT(par_sort_keys);
Py_DECREF(par_sort_keys);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_documents);
Py_DECREF(par_documents);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);
CHECK_OBJECT(par_default_style);
Py_DECREF(par_default_style);
CHECK_OBJECT(par_default_flow_style);
Py_DECREF(par_default_flow_style);
CHECK_OBJECT(par_canonical);
Py_DECREF(par_canonical);
CHECK_OBJECT(par_indent);
Py_DECREF(par_indent);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
CHECK_OBJECT(par_allow_unicode);
Py_DECREF(par_allow_unicode);
CHECK_OBJECT(par_line_break);
Py_DECREF(par_line_break);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_explicit_start);
Py_DECREF(par_explicit_start);
CHECK_OBJECT(par_explicit_end);
Py_DECREF(par_explicit_end);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_tags);
Py_DECREF(par_tags);
CHECK_OBJECT(par_sort_keys);
Py_DECREF(par_sort_keys);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__18_dump(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_data = python_pars[0];
PyObject *par_stream = python_pars[1];
PyObject *par_Dumper = python_pars[2];
PyObject *par_kwds = python_pars[3];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__18_dump;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__18_dump = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__18_dump)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__18_dump);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__18_dump == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__18_dump = MAKE_FUNCTION_FRAME(tstate, code_objects_10f6e6b416f3ead4706418b6977577a1, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__18_dump->m_type_description == NULL);
frame_frame_yaml$$$function__18_dump = cache_frame_frame_yaml$$$function__18_dump;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__18_dump);
assert(Py_REFCNT(frame_frame_yaml$$$function__18_dump) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_list_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
tmp_direct_call_arg1_1 = module_var_accessor_yaml$dump_all(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dump_all);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_list_element_1 = par_data;
tmp_tuple_element_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_tuple_element_1, 0, tmp_list_element_1);
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_stream);
tmp_tuple_element_1 = par_stream;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_Dumper;
CHECK_OBJECT(par_Dumper);
tmp_dict_value_1 = par_Dumper;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwds);
tmp_direct_call_arg4_1 = par_kwds;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__18_dump, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__18_dump->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__18_dump, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__18_dump,
    type_description_1,
    par_data,
    par_stream,
    par_Dumper,
    par_kwds
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__18_dump == cache_frame_frame_yaml$$$function__18_dump) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__18_dump);
    cache_frame_frame_yaml$$$function__18_dump = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__18_dump);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);
CHECK_OBJECT(par_kwds);
Py_DECREF(par_kwds);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);
CHECK_OBJECT(par_kwds);
Py_DECREF(par_kwds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__19_safe_dump_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_documents = python_pars[0];
PyObject *par_stream = python_pars[1];
PyObject *par_kwds = python_pars[2];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__19_safe_dump_all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__19_safe_dump_all = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__19_safe_dump_all)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__19_safe_dump_all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__19_safe_dump_all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__19_safe_dump_all = MAKE_FUNCTION_FRAME(tstate, code_objects_18a2bc86d450d070564d0ab587e07108, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__19_safe_dump_all->m_type_description == NULL);
frame_frame_yaml$$$function__19_safe_dump_all = cache_frame_frame_yaml$$$function__19_safe_dump_all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__19_safe_dump_all);
assert(Py_REFCNT(frame_frame_yaml$$$function__19_safe_dump_all) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
tmp_direct_call_arg1_1 = module_var_accessor_yaml$dump_all(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dump_all);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_documents);
tmp_tuple_element_1 = par_documents;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_stream);
tmp_tuple_element_1 = par_stream;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_Dumper;
tmp_dict_value_1 = module_var_accessor_yaml$SafeDumper(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SafeDumper);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg2_1);

exception_lineno = 261;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwds);
tmp_direct_call_arg4_1 = par_kwds;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__19_safe_dump_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__19_safe_dump_all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__19_safe_dump_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__19_safe_dump_all,
    type_description_1,
    par_documents,
    par_stream,
    par_kwds
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__19_safe_dump_all == cache_frame_frame_yaml$$$function__19_safe_dump_all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__19_safe_dump_all);
    cache_frame_frame_yaml$$$function__19_safe_dump_all = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__19_safe_dump_all);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_documents);
Py_DECREF(par_documents);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_kwds);
Py_DECREF(par_kwds);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_documents);
Py_DECREF(par_documents);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_kwds);
Py_DECREF(par_kwds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__20_safe_dump(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_data = python_pars[0];
PyObject *par_stream = python_pars[1];
PyObject *par_kwds = python_pars[2];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__20_safe_dump;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__20_safe_dump = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__20_safe_dump)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__20_safe_dump);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__20_safe_dump == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__20_safe_dump = MAKE_FUNCTION_FRAME(tstate, code_objects_5916fd1450afbfb64326a3e80e15ae76, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__20_safe_dump->m_type_description == NULL);
frame_frame_yaml$$$function__20_safe_dump = cache_frame_frame_yaml$$$function__20_safe_dump;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__20_safe_dump);
assert(Py_REFCNT(frame_frame_yaml$$$function__20_safe_dump) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_list_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
tmp_direct_call_arg1_1 = module_var_accessor_yaml$dump_all(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dump_all);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_list_element_1 = par_data;
tmp_tuple_element_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_tuple_element_1, 0, tmp_list_element_1);
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_stream);
tmp_tuple_element_1 = par_stream;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_Dumper;
tmp_dict_value_1 = module_var_accessor_yaml$SafeDumper(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SafeDumper);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg2_1);

exception_lineno = 269;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwds);
tmp_direct_call_arg4_1 = par_kwds;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__20_safe_dump, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__20_safe_dump->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__20_safe_dump, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__20_safe_dump,
    type_description_1,
    par_data,
    par_stream,
    par_kwds
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__20_safe_dump == cache_frame_frame_yaml$$$function__20_safe_dump) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__20_safe_dump);
    cache_frame_frame_yaml$$$function__20_safe_dump = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__20_safe_dump);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_kwds);
Py_DECREF(par_kwds);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_kwds);
Py_DECREF(par_kwds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__21_add_implicit_resolver(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_tag = python_pars[0];
PyObject *par_regexp = python_pars[1];
PyObject *par_first = python_pars[2];
PyObject *par_Loader = python_pars[3];
PyObject *par_Dumper = python_pars[4];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__21_add_implicit_resolver;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__21_add_implicit_resolver = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__21_add_implicit_resolver)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__21_add_implicit_resolver);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__21_add_implicit_resolver == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__21_add_implicit_resolver = MAKE_FUNCTION_FRAME(tstate, code_objects_3be400a389cf6fd8dfe88e9e42c61952, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__21_add_implicit_resolver->m_type_description == NULL);
frame_frame_yaml$$$function__21_add_implicit_resolver = cache_frame_frame_yaml$$$function__21_add_implicit_resolver;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__21_add_implicit_resolver);
assert(Py_REFCNT(frame_frame_yaml$$$function__21_add_implicit_resolver) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_Loader);
tmp_cmp_expr_left_1 = par_Loader;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_yaml$loader(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loader);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 280;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Loader);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tag);
tmp_args_element_value_1 = par_tag;
CHECK_OBJECT(par_regexp);
tmp_args_element_value_2 = par_regexp;
CHECK_OBJECT(par_first);
tmp_args_element_value_3 = par_first;
frame_frame_yaml$$$function__21_add_implicit_resolver->m_frame.f_lineno = 280;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_add_implicit_resolver,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_2 = module_var_accessor_yaml$loader(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loader);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_FullLoader);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tag);
tmp_args_element_value_4 = par_tag;
CHECK_OBJECT(par_regexp);
tmp_args_element_value_5 = par_regexp;
CHECK_OBJECT(par_first);
tmp_args_element_value_6 = par_first;
frame_frame_yaml$$$function__21_add_implicit_resolver->m_frame.f_lineno = 281;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_add_implicit_resolver,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_expression_value_3 = module_var_accessor_yaml$loader(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loader);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_UnsafeLoader);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tag);
tmp_args_element_value_7 = par_tag;
CHECK_OBJECT(par_regexp);
tmp_args_element_value_8 = par_regexp;
CHECK_OBJECT(par_first);
tmp_args_element_value_9 = par_first;
frame_frame_yaml$$$function__21_add_implicit_resolver->m_frame.f_lineno = 282;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_add_implicit_resolver,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(par_Loader);
tmp_called_instance_4 = par_Loader;
CHECK_OBJECT(par_tag);
tmp_args_element_value_10 = par_tag;
CHECK_OBJECT(par_regexp);
tmp_args_element_value_11 = par_regexp;
CHECK_OBJECT(par_first);
tmp_args_element_value_12 = par_first;
frame_frame_yaml$$$function__21_add_implicit_resolver->m_frame.f_lineno = 284;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_4 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_add_implicit_resolver,
        call_args
    );
}

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_end_1:;
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
CHECK_OBJECT(par_Dumper);
tmp_called_instance_5 = par_Dumper;
CHECK_OBJECT(par_tag);
tmp_args_element_value_13 = par_tag;
CHECK_OBJECT(par_regexp);
tmp_args_element_value_14 = par_regexp;
CHECK_OBJECT(par_first);
tmp_args_element_value_15 = par_first;
frame_frame_yaml$$$function__21_add_implicit_resolver->m_frame.f_lineno = 285;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_call_result_5 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_5,
        mod_consts.const_str_plain_add_implicit_resolver,
        call_args
    );
}

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__21_add_implicit_resolver, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__21_add_implicit_resolver->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__21_add_implicit_resolver, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__21_add_implicit_resolver,
    type_description_1,
    par_tag,
    par_regexp,
    par_first,
    par_Loader,
    par_Dumper
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__21_add_implicit_resolver == cache_frame_frame_yaml$$$function__21_add_implicit_resolver) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__21_add_implicit_resolver);
    cache_frame_frame_yaml$$$function__21_add_implicit_resolver = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__21_add_implicit_resolver);

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
CHECK_OBJECT(par_tag);
Py_DECREF(par_tag);
CHECK_OBJECT(par_regexp);
Py_DECREF(par_regexp);
CHECK_OBJECT(par_first);
Py_DECREF(par_first);
CHECK_OBJECT(par_Loader);
Py_DECREF(par_Loader);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_tag);
Py_DECREF(par_tag);
CHECK_OBJECT(par_regexp);
Py_DECREF(par_regexp);
CHECK_OBJECT(par_first);
Py_DECREF(par_first);
CHECK_OBJECT(par_Loader);
Py_DECREF(par_Loader);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__22_add_path_resolver(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_tag = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *par_kind = python_pars[2];
PyObject *par_Loader = python_pars[3];
PyObject *par_Dumper = python_pars[4];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__22_add_path_resolver;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__22_add_path_resolver = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__22_add_path_resolver)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__22_add_path_resolver);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__22_add_path_resolver == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__22_add_path_resolver = MAKE_FUNCTION_FRAME(tstate, code_objects_e75fe01c6122d00ea618c4885ab17579, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__22_add_path_resolver->m_type_description == NULL);
frame_frame_yaml$$$function__22_add_path_resolver = cache_frame_frame_yaml$$$function__22_add_path_resolver;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__22_add_path_resolver);
assert(Py_REFCNT(frame_frame_yaml$$$function__22_add_path_resolver) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_Loader);
tmp_cmp_expr_left_1 = par_Loader;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_yaml$loader(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loader);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 295;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Loader);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tag);
tmp_args_element_value_1 = par_tag;
CHECK_OBJECT(par_path);
tmp_args_element_value_2 = par_path;
CHECK_OBJECT(par_kind);
tmp_args_element_value_3 = par_kind;
frame_frame_yaml$$$function__22_add_path_resolver->m_frame.f_lineno = 295;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_add_path_resolver,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_2 = module_var_accessor_yaml$loader(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loader);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_FullLoader);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tag);
tmp_args_element_value_4 = par_tag;
CHECK_OBJECT(par_path);
tmp_args_element_value_5 = par_path;
CHECK_OBJECT(par_kind);
tmp_args_element_value_6 = par_kind;
frame_frame_yaml$$$function__22_add_path_resolver->m_frame.f_lineno = 296;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_add_path_resolver,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_expression_value_3 = module_var_accessor_yaml$loader(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loader);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 297;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_UnsafeLoader);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tag);
tmp_args_element_value_7 = par_tag;
CHECK_OBJECT(par_path);
tmp_args_element_value_8 = par_path;
CHECK_OBJECT(par_kind);
tmp_args_element_value_9 = par_kind;
frame_frame_yaml$$$function__22_add_path_resolver->m_frame.f_lineno = 297;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_add_path_resolver,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(par_Loader);
tmp_called_instance_4 = par_Loader;
CHECK_OBJECT(par_tag);
tmp_args_element_value_10 = par_tag;
CHECK_OBJECT(par_path);
tmp_args_element_value_11 = par_path;
CHECK_OBJECT(par_kind);
tmp_args_element_value_12 = par_kind;
frame_frame_yaml$$$function__22_add_path_resolver->m_frame.f_lineno = 299;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_4 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_add_path_resolver,
        call_args
    );
}

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_end_1:;
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
CHECK_OBJECT(par_Dumper);
tmp_called_instance_5 = par_Dumper;
CHECK_OBJECT(par_tag);
tmp_args_element_value_13 = par_tag;
CHECK_OBJECT(par_path);
tmp_args_element_value_14 = par_path;
CHECK_OBJECT(par_kind);
tmp_args_element_value_15 = par_kind;
frame_frame_yaml$$$function__22_add_path_resolver->m_frame.f_lineno = 300;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_call_result_5 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_5,
        mod_consts.const_str_plain_add_path_resolver,
        call_args
    );
}

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__22_add_path_resolver, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__22_add_path_resolver->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__22_add_path_resolver, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__22_add_path_resolver,
    type_description_1,
    par_tag,
    par_path,
    par_kind,
    par_Loader,
    par_Dumper
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__22_add_path_resolver == cache_frame_frame_yaml$$$function__22_add_path_resolver) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__22_add_path_resolver);
    cache_frame_frame_yaml$$$function__22_add_path_resolver = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__22_add_path_resolver);

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
CHECK_OBJECT(par_tag);
Py_DECREF(par_tag);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_kind);
Py_DECREF(par_kind);
CHECK_OBJECT(par_Loader);
Py_DECREF(par_Loader);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_tag);
Py_DECREF(par_tag);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_kind);
Py_DECREF(par_kind);
CHECK_OBJECT(par_Loader);
Py_DECREF(par_Loader);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__23_add_constructor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_tag = python_pars[0];
PyObject *par_constructor = python_pars[1];
PyObject *par_Loader = python_pars[2];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__23_add_constructor;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__23_add_constructor = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__23_add_constructor)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__23_add_constructor);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__23_add_constructor == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__23_add_constructor = MAKE_FUNCTION_FRAME(tstate, code_objects_84b231f3bf6bd52f7abaad0fc65d3f0e, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__23_add_constructor->m_type_description == NULL);
frame_frame_yaml$$$function__23_add_constructor = cache_frame_frame_yaml$$$function__23_add_constructor;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__23_add_constructor);
assert(Py_REFCNT(frame_frame_yaml$$$function__23_add_constructor) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_Loader);
tmp_cmp_expr_left_1 = par_Loader;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_yaml$loader(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loader);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Loader);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tag);
tmp_args_element_value_1 = par_tag;
CHECK_OBJECT(par_constructor);
tmp_args_element_value_2 = par_constructor;
frame_frame_yaml$$$function__23_add_constructor->m_frame.f_lineno = 309;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_add_constructor,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
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
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_2 = module_var_accessor_yaml$loader(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loader);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_FullLoader);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tag);
tmp_args_element_value_3 = par_tag;
CHECK_OBJECT(par_constructor);
tmp_args_element_value_4 = par_constructor;
frame_frame_yaml$$$function__23_add_constructor->m_frame.f_lineno = 310;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_add_constructor,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_3 = module_var_accessor_yaml$loader(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loader);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_UnsafeLoader);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tag);
tmp_args_element_value_5 = par_tag;
CHECK_OBJECT(par_constructor);
tmp_args_element_value_6 = par_constructor;
frame_frame_yaml$$$function__23_add_constructor->m_frame.f_lineno = 311;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_add_constructor,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(par_Loader);
tmp_called_instance_4 = par_Loader;
CHECK_OBJECT(par_tag);
tmp_args_element_value_7 = par_tag;
CHECK_OBJECT(par_constructor);
tmp_args_element_value_8 = par_constructor;
frame_frame_yaml$$$function__23_add_constructor->m_frame.f_lineno = 313;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_add_constructor,
        call_args
    );
}

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__23_add_constructor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__23_add_constructor->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__23_add_constructor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__23_add_constructor,
    type_description_1,
    par_tag,
    par_constructor,
    par_Loader
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__23_add_constructor == cache_frame_frame_yaml$$$function__23_add_constructor) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__23_add_constructor);
    cache_frame_frame_yaml$$$function__23_add_constructor = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__23_add_constructor);

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
CHECK_OBJECT(par_tag);
Py_DECREF(par_tag);
CHECK_OBJECT(par_constructor);
Py_DECREF(par_constructor);
CHECK_OBJECT(par_Loader);
Py_DECREF(par_Loader);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_tag);
Py_DECREF(par_tag);
CHECK_OBJECT(par_constructor);
Py_DECREF(par_constructor);
CHECK_OBJECT(par_Loader);
Py_DECREF(par_Loader);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__24_add_multi_constructor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_tag_prefix = python_pars[0];
PyObject *par_multi_constructor = python_pars[1];
PyObject *par_Loader = python_pars[2];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__24_add_multi_constructor;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__24_add_multi_constructor = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__24_add_multi_constructor)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__24_add_multi_constructor);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__24_add_multi_constructor == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__24_add_multi_constructor = MAKE_FUNCTION_FRAME(tstate, code_objects_118ff4af4b70b2550fc3b77ef614aafa, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__24_add_multi_constructor->m_type_description == NULL);
frame_frame_yaml$$$function__24_add_multi_constructor = cache_frame_frame_yaml$$$function__24_add_multi_constructor;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__24_add_multi_constructor);
assert(Py_REFCNT(frame_frame_yaml$$$function__24_add_multi_constructor) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_Loader);
tmp_cmp_expr_left_1 = par_Loader;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_yaml$loader(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loader);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Loader);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tag_prefix);
tmp_args_element_value_1 = par_tag_prefix;
CHECK_OBJECT(par_multi_constructor);
tmp_args_element_value_2 = par_multi_constructor;
frame_frame_yaml$$$function__24_add_multi_constructor->m_frame.f_lineno = 323;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_add_multi_constructor,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
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
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_2 = module_var_accessor_yaml$loader(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loader);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_FullLoader);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tag_prefix);
tmp_args_element_value_3 = par_tag_prefix;
CHECK_OBJECT(par_multi_constructor);
tmp_args_element_value_4 = par_multi_constructor;
frame_frame_yaml$$$function__24_add_multi_constructor->m_frame.f_lineno = 324;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_add_multi_constructor,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_3 = module_var_accessor_yaml$loader(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_loader);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 325;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_UnsafeLoader);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tag_prefix);
tmp_args_element_value_5 = par_tag_prefix;
CHECK_OBJECT(par_multi_constructor);
tmp_args_element_value_6 = par_multi_constructor;
frame_frame_yaml$$$function__24_add_multi_constructor->m_frame.f_lineno = 325;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_add_multi_constructor,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(par_Loader);
tmp_called_instance_4 = par_Loader;
CHECK_OBJECT(par_tag_prefix);
tmp_args_element_value_7 = par_tag_prefix;
CHECK_OBJECT(par_multi_constructor);
tmp_args_element_value_8 = par_multi_constructor;
frame_frame_yaml$$$function__24_add_multi_constructor->m_frame.f_lineno = 327;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_add_multi_constructor,
        call_args
    );
}

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__24_add_multi_constructor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__24_add_multi_constructor->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__24_add_multi_constructor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__24_add_multi_constructor,
    type_description_1,
    par_tag_prefix,
    par_multi_constructor,
    par_Loader
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__24_add_multi_constructor == cache_frame_frame_yaml$$$function__24_add_multi_constructor) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__24_add_multi_constructor);
    cache_frame_frame_yaml$$$function__24_add_multi_constructor = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__24_add_multi_constructor);

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
CHECK_OBJECT(par_tag_prefix);
Py_DECREF(par_tag_prefix);
CHECK_OBJECT(par_multi_constructor);
Py_DECREF(par_multi_constructor);
CHECK_OBJECT(par_Loader);
Py_DECREF(par_Loader);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_tag_prefix);
Py_DECREF(par_tag_prefix);
CHECK_OBJECT(par_multi_constructor);
Py_DECREF(par_multi_constructor);
CHECK_OBJECT(par_Loader);
Py_DECREF(par_Loader);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__25_add_representer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_data_type = python_pars[0];
PyObject *par_representer = python_pars[1];
PyObject *par_Dumper = python_pars[2];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__25_add_representer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__25_add_representer = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__25_add_representer)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__25_add_representer);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__25_add_representer == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__25_add_representer = MAKE_FUNCTION_FRAME(tstate, code_objects_488491a511060c51a5b7cff2ad4dcd7a, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__25_add_representer->m_type_description == NULL);
frame_frame_yaml$$$function__25_add_representer = cache_frame_frame_yaml$$$function__25_add_representer;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__25_add_representer);
assert(Py_REFCNT(frame_frame_yaml$$$function__25_add_representer) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_Dumper);
tmp_called_instance_1 = par_Dumper;
CHECK_OBJECT(par_data_type);
tmp_args_element_value_1 = par_data_type;
CHECK_OBJECT(par_representer);
tmp_args_element_value_2 = par_representer;
frame_frame_yaml$$$function__25_add_representer->m_frame.f_lineno = 336;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_add_representer,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__25_add_representer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__25_add_representer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__25_add_representer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__25_add_representer,
    type_description_1,
    par_data_type,
    par_representer,
    par_Dumper
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__25_add_representer == cache_frame_frame_yaml$$$function__25_add_representer) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__25_add_representer);
    cache_frame_frame_yaml$$$function__25_add_representer = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__25_add_representer);

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
CHECK_OBJECT(par_data_type);
Py_DECREF(par_data_type);
CHECK_OBJECT(par_representer);
Py_DECREF(par_representer);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_data_type);
Py_DECREF(par_data_type);
CHECK_OBJECT(par_representer);
Py_DECREF(par_representer);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__26_add_multi_representer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_data_type = python_pars[0];
PyObject *par_multi_representer = python_pars[1];
PyObject *par_Dumper = python_pars[2];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__26_add_multi_representer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__26_add_multi_representer = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__26_add_multi_representer)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__26_add_multi_representer);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__26_add_multi_representer == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__26_add_multi_representer = MAKE_FUNCTION_FRAME(tstate, code_objects_1b6a91a93f166b8467c5f1f83efe2a3e, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__26_add_multi_representer->m_type_description == NULL);
frame_frame_yaml$$$function__26_add_multi_representer = cache_frame_frame_yaml$$$function__26_add_multi_representer;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__26_add_multi_representer);
assert(Py_REFCNT(frame_frame_yaml$$$function__26_add_multi_representer) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_Dumper);
tmp_called_instance_1 = par_Dumper;
CHECK_OBJECT(par_data_type);
tmp_args_element_value_1 = par_data_type;
CHECK_OBJECT(par_multi_representer);
tmp_args_element_value_2 = par_multi_representer;
frame_frame_yaml$$$function__26_add_multi_representer->m_frame.f_lineno = 345;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_add_multi_representer,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__26_add_multi_representer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__26_add_multi_representer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__26_add_multi_representer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__26_add_multi_representer,
    type_description_1,
    par_data_type,
    par_multi_representer,
    par_Dumper
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__26_add_multi_representer == cache_frame_frame_yaml$$$function__26_add_multi_representer) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__26_add_multi_representer);
    cache_frame_frame_yaml$$$function__26_add_multi_representer = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__26_add_multi_representer);

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
CHECK_OBJECT(par_data_type);
Py_DECREF(par_data_type);
CHECK_OBJECT(par_multi_representer);
Py_DECREF(par_multi_representer);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_data_type);
Py_DECREF(par_data_type);
CHECK_OBJECT(par_multi_representer);
Py_DECREF(par_multi_representer);
CHECK_OBJECT(par_Dumper);
Py_DECREF(par_Dumper);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__27___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_bases = python_pars[2];
PyObject *par_kwds = python_pars[3];
PyObject *var_loader = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_yaml$$$function__27___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__27___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_yaml$$$function__27___init__)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__27___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__27___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__27___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_346c8f9edf67ad5fe38c563d14442830, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__27___init__->m_type_description == NULL);
frame_frame_yaml$$$function__27___init__ = cache_frame_frame_yaml$$$function__27___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__27___init__);
assert(Py_REFCNT(frame_frame_yaml$$$function__27___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_type_arg_value_1 = module_var_accessor_yaml$YAMLObjectMetaclass(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_YAMLObjectMetaclass);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_object_arg_value_1 = par_cls;
tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_yaml, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
CHECK_OBJECT(par_bases);
tmp_args_element_value_2 = par_bases;
CHECK_OBJECT(par_kwds);
tmp_args_element_value_3 = par_kwds;
frame_frame_yaml$$$function__27___init__->m_frame.f_lineno = 352;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        const_str_plain___init__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oooooN";
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
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_plain_yaml_tag;
CHECK_OBJECT(par_kwds);
tmp_cmp_expr_right_1 = par_kwds;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_kwds);
tmp_expression_value_1 = par_kwds;
tmp_subscript_value_1 = mod_consts.const_str_plain_yaml_tag;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_5;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_yaml$isinstance(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isinstance);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 354;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_yaml_loader);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_yaml$list(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_list);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 354;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
frame_frame_yaml$$$function__27___init__->m_frame.f_lineno = 354;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 354;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_cls);
tmp_expression_value_3 = par_cls;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_yaml_loader);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooN";
exception_lineno = 355;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_3 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_loader;
    var_loader = tmp_assign_source_3;
    Py_INCREF(var_loader);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_loader);
tmp_expression_value_4 = var_loader;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_add_constructor);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooN";
    goto try_except_handler_2;
}
if (par_cls == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 356;
type_description_1 = "oooooN";
    goto try_except_handler_2;
}

tmp_expression_value_5 = par_cls;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_yaml_tag);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 356;
type_description_1 = "oooooN";
    goto try_except_handler_2;
}
if (par_cls == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 356;
type_description_1 = "oooooN";
    goto try_except_handler_2;
}

tmp_expression_value_6 = par_cls;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_from_yaml);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 356;
type_description_1 = "oooooN";
    goto try_except_handler_2;
}
frame_frame_yaml$$$function__27___init__->m_frame.f_lineno = 356;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooN";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooN";
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
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_cls);
tmp_expression_value_8 = par_cls;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_yaml_loader);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_add_constructor);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_expression_value_9 = par_cls;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_yaml_tag);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 358;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_expression_value_10 = par_cls;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_from_yaml);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 358;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
frame_frame_yaml$$$function__27___init__->m_frame.f_lineno = 358;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_end_2:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_13;
if (par_cls == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 360;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = par_cls;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_yaml_dumper);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_add_representer);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
if (par_cls == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 360;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}

tmp_args_element_value_10 = par_cls;
if (par_cls == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 360;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = par_cls;
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_to_yaml);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 360;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
frame_frame_yaml$$$function__27___init__->m_frame.f_lineno = 360;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__27___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__27___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__27___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__27___init__,
    type_description_1,
    par_cls,
    par_name,
    par_bases,
    par_kwds,
    var_loader,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__27___init__ == cache_frame_frame_yaml$$$function__27___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__27___init__);
    cache_frame_frame_yaml$$$function__27___init__ = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__27___init__);

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
Py_XDECREF(var_loader);
var_loader = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_loader);
var_loader = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_bases);
Py_DECREF(par_bases);
CHECK_OBJECT(par_kwds);
Py_DECREF(par_kwds);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_bases);
Py_DECREF(par_bases);
CHECK_OBJECT(par_kwds);
Py_DECREF(par_kwds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__28_from_yaml(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_loader = python_pars[1];
PyObject *par_node = python_pars[2];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__28_from_yaml;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__28_from_yaml = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__28_from_yaml)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__28_from_yaml);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__28_from_yaml == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__28_from_yaml = MAKE_FUNCTION_FRAME(tstate, code_objects_3b41e4099c2986c56b2673f8202f6baf, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__28_from_yaml->m_type_description == NULL);
frame_frame_yaml$$$function__28_from_yaml = cache_frame_frame_yaml$$$function__28_from_yaml;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__28_from_yaml);
assert(Py_REFCNT(frame_frame_yaml$$$function__28_from_yaml) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_loader);
tmp_called_instance_1 = par_loader;
CHECK_OBJECT(par_node);
tmp_args_element_value_1 = par_node;
CHECK_OBJECT(par_cls);
tmp_args_element_value_2 = par_cls;
frame_frame_yaml$$$function__28_from_yaml->m_frame.f_lineno = 381;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_construct_yaml_object,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__28_from_yaml, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__28_from_yaml->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__28_from_yaml, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__28_from_yaml,
    type_description_1,
    par_cls,
    par_loader,
    par_node
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__28_from_yaml == cache_frame_frame_yaml$$$function__28_from_yaml) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__28_from_yaml);
    cache_frame_frame_yaml$$$function__28_from_yaml = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__28_from_yaml);

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
CHECK_OBJECT(par_loader);
Py_DECREF(par_loader);
CHECK_OBJECT(par_node);
Py_DECREF(par_node);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_loader);
Py_DECREF(par_loader);
CHECK_OBJECT(par_node);
Py_DECREF(par_node);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_yaml$$$function__29_to_yaml(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_dumper = python_pars[1];
PyObject *par_data = python_pars[2];
struct Nuitka_FrameObject *frame_frame_yaml$$$function__29_to_yaml;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_yaml$$$function__29_to_yaml = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_yaml$$$function__29_to_yaml)) {
    Py_XDECREF(cache_frame_frame_yaml$$$function__29_to_yaml);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_yaml$$$function__29_to_yaml == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_yaml$$$function__29_to_yaml = MAKE_FUNCTION_FRAME(tstate, code_objects_aeda56e0f00a6de2fb0e88b3af35c7e9, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_yaml$$$function__29_to_yaml->m_type_description == NULL);
frame_frame_yaml$$$function__29_to_yaml = cache_frame_frame_yaml$$$function__29_to_yaml;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$function__29_to_yaml);
assert(Py_REFCNT(frame_frame_yaml$$$function__29_to_yaml) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_dumper);
tmp_expression_value_1 = par_dumper;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_represent_yaml_object);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_yaml_tag);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 388;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_kw_call_arg_value_1_1 = par_data;
CHECK_OBJECT(par_cls);
tmp_kw_call_arg_value_2_1 = par_cls;
CHECK_OBJECT(par_cls);
tmp_expression_value_3 = par_cls;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_yaml_flow_style);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 389;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_yaml$$$function__29_to_yaml->m_frame.f_lineno = 388;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_flow_style_tuple);
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


exception_lineno = 388;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$function__29_to_yaml, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$function__29_to_yaml->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$function__29_to_yaml, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$function__29_to_yaml,
    type_description_1,
    par_cls,
    par_dumper,
    par_data
);


// Release cached frame if used for exception.
if (frame_frame_yaml$$$function__29_to_yaml == cache_frame_frame_yaml$$$function__29_to_yaml) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_yaml$$$function__29_to_yaml);
    cache_frame_frame_yaml$$$function__29_to_yaml = NULL;
}

assertFrameObject(frame_frame_yaml$$$function__29_to_yaml);

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
CHECK_OBJECT(par_dumper);
Py_DECREF(par_dumper);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_dumper);
Py_DECREF(par_dumper);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__10_safe_load(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__10_safe_load,
        mod_consts.const_str_plain_safe_load,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4fc34b6d14485ade4c1d23ea3c233e50,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_193f77dcd6005ad028cfba36d1f82de9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__11_safe_load_all(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__11_safe_load_all,
        mod_consts.const_str_plain_safe_load_all,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ee63f5aa7147b500c1600d1f537bec1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_adb1272c8f9d806d385146e3beb4567f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__12_unsafe_load(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__12_unsafe_load,
        mod_consts.const_str_plain_unsafe_load,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e365860f9a1da2e7e4b26ac15814280a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_d63492a6970c7859227bac0ef403d0c1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__13_unsafe_load_all(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__13_unsafe_load_all,
        mod_consts.const_str_plain_unsafe_load_all,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d3ea40ceb4d15b102c4da8b4cd23797b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_4ef99ff6c256096c80463f68d5634b20,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__14_emit(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__14_emit,
        mod_consts.const_str_plain_emit,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a0980bba127658dfbe266b9a6afa1465,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_99573145bd60eac1bb5d00b4ab8c04dd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__15_serialize_all(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__15_serialize_all,
        mod_consts.const_str_plain_serialize_all,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_278a8408d5ff1f60fe7c712c193901ed,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_47883b02a19b7dbeda3b705893d760c3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__16_serialize(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__16_serialize,
        mod_consts.const_str_plain_serialize,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cc1978281ccc1e9e4f697e1a91b36996,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_479d70db887384bc4a899b27c9e3a99e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__17_dump_all(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__17_dump_all,
        mod_consts.const_str_plain_dump_all,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f6833935794eca9955d788314d38c3e2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_8890e2dc1c61feed7ac28972e91e9fda,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__18_dump(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__18_dump,
        mod_consts.const_str_plain_dump,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_10f6e6b416f3ead4706418b6977577a1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_e08f6c81feb7e116ad886c7a6c98d67c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__19_safe_dump_all(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__19_safe_dump_all,
        mod_consts.const_str_plain_safe_dump_all,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_18a2bc86d450d070564d0ab587e07108,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_3e46f0676f832c24b822b30f798dc7e0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__1_warnings(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__1_warnings,
        mod_consts.const_str_plain_warnings,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d7ca3a201e2458c7a0d82d594d219f19,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__20_safe_dump(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__20_safe_dump,
        mod_consts.const_str_plain_safe_dump,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5916fd1450afbfb64326a3e80e15ae76,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_191894c16e6ac7f40cd7b5640b145c25,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__21_add_implicit_resolver(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__21_add_implicit_resolver,
        mod_consts.const_str_plain_add_implicit_resolver,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3be400a389cf6fd8dfe88e9e42c61952,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_6257fe0fb00cfcabb09743dfd1a507db,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__22_add_path_resolver(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__22_add_path_resolver,
        mod_consts.const_str_plain_add_path_resolver,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e75fe01c6122d00ea618c4885ab17579,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_2457d91fce89cfce16f5dfd1b3a6ad98,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__23_add_constructor(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__23_add_constructor,
        mod_consts.const_str_plain_add_constructor,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_84b231f3bf6bd52f7abaad0fc65d3f0e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_8ad8cc3f6f7dd5e6c76248083e7ddcff,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__24_add_multi_constructor(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__24_add_multi_constructor,
        mod_consts.const_str_plain_add_multi_constructor,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_118ff4af4b70b2550fc3b77ef614aafa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_ee675e9deb22a3be8ac18a46fcc21c5e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__25_add_representer(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__25_add_representer,
        mod_consts.const_str_plain_add_representer,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_488491a511060c51a5b7cff2ad4dcd7a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_bc87c357d10acb6015b2385c60a5c9a6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__26_add_multi_representer(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__26_add_multi_representer,
        mod_consts.const_str_plain_add_multi_representer,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1b6a91a93f166b8467c5f1f83efe2a3e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_3f27efd868979311ca9e519c77ea2d86,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__27___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__27___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3a29191702803f2976d13b4af605079c,
#endif
        code_objects_346c8f9edf67ad5fe38c563d14442830,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__28_from_yaml(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__28_from_yaml,
        mod_consts.const_str_plain_from_yaml,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8c7ee70504ed226d674980b798ed4349,
#endif
        code_objects_3b41e4099c2986c56b2673f8202f6baf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_3e0d7f5e404bbd5225109144de5cca35,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__29_to_yaml(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__29_to_yaml,
        mod_consts.const_str_plain_to_yaml,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_74c5cae9aad9f23f3235aefca4689825,
#endif
        code_objects_aeda56e0f00a6de2fb0e88b3af35c7e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_5a3b745843d8a6228b60ab400ebf189c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__2_scan(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__2_scan,
        mod_consts.const_str_plain_scan,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_59afebad749b4dce63c685e3e70ef19a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_d723379b3aa0aae8aab9d188c7621289,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__3_parse(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__3_parse,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_363d1950ec7d48272b026aef91bae05a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_99dbdfaaba49b3fd6ed769727ae46db0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__4_compose(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__4_compose,
        mod_consts.const_str_plain_compose,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0a3c7857b354248c49247bc21c72a8e7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_dda9d754e9d9e2552897768efc44a688,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__5_compose_all(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__5_compose_all,
        mod_consts.const_str_plain_compose_all,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_34902b50c1fe6a4ebbe544ccea0a86bf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_3d226ecf905bbfe07cf5d732655a0594,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__6_load(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__6_load,
        mod_consts.const_str_plain_load,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4461cb7c2dc8af78318138c6da434b4f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_54390cc8fd237de52983d60cf32165f4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__7_load_all(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__7_load_all,
        mod_consts.const_str_plain_load_all,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e6e89c7fb57e3bf17f70d190fe2e4c81,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_70f26f1c3fe14b09ad336fec99a4eaaf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__8_full_load(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__8_full_load,
        mod_consts.const_str_plain_full_load,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_94f7ef068af4c1599ff5514dcab03521,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_bef06b3fc454393413a3323e590510f5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function__9_full_load_all(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function__9_full_load_all,
        mod_consts.const_str_plain_full_load_all,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1765e3536dcebbd08fa2de1272793398,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml,
        mod_consts.const_str_digest_12bd55cf3edd4620d77e792df7b68f18,
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

static function_impl_code const function_table_yaml[] = {
impl_yaml$$$function__1_warnings,
impl_yaml$$$function__2_scan,
impl_yaml$$$function__3_parse,
impl_yaml$$$function__4_compose,
impl_yaml$$$function__5_compose_all,
impl_yaml$$$function__6_load,
impl_yaml$$$function__7_load_all,
impl_yaml$$$function__8_full_load,
impl_yaml$$$function__9_full_load_all,
impl_yaml$$$function__10_safe_load,
impl_yaml$$$function__11_safe_load_all,
impl_yaml$$$function__12_unsafe_load,
impl_yaml$$$function__13_unsafe_load_all,
impl_yaml$$$function__14_emit,
impl_yaml$$$function__15_serialize_all,
impl_yaml$$$function__16_serialize,
impl_yaml$$$function__17_dump_all,
impl_yaml$$$function__18_dump,
impl_yaml$$$function__19_safe_dump_all,
impl_yaml$$$function__20_safe_dump,
impl_yaml$$$function__21_add_implicit_resolver,
impl_yaml$$$function__22_add_path_resolver,
impl_yaml$$$function__23_add_constructor,
impl_yaml$$$function__24_add_multi_constructor,
impl_yaml$$$function__25_add_representer,
impl_yaml$$$function__26_add_multi_representer,
impl_yaml$$$function__27___init__,
impl_yaml$$$function__28_from_yaml,
impl_yaml$$$function__29_to_yaml,
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

    return Nuitka_Function_GetFunctionState(function, function_table_yaml);
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
        module_yaml,
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
        function_table_yaml,
        sizeof(function_table_yaml) / sizeof(function_impl_code)
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
static char const *module_full_name = "yaml";
#endif

// Internal entry point for module code.
PyObject *module_code_yaml(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("yaml");

    // Store the module for future use.
    module_yaml = module;

    moduledict_yaml = MODULE_DICT(module_yaml);

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
        PRINT_STRING("yaml: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("yaml: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("yaml: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "yaml" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inityaml\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_yaml,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_yaml,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_yaml,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_yaml,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_yaml,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_yaml);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_yaml);
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

        UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_yaml;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_yaml$$$class__1_YAMLObjectMetaclass_347 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_yaml$$$class__1_YAMLObjectMetaclass_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
PyObject *locals_yaml$$$class__2_YAMLObject_362 = NULL;
struct Nuitka_FrameObject *frame_frame_yaml$$$class__2_YAMLObject_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_yaml = MAKE_MODULE_FRAME(code_objects_891069139b58d89170f5a4be53bccf29, module_yaml);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml);
assert(Py_REFCNT(frame_frame_yaml) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_yaml->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_1 = NULL;
    }
}
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_dirname);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_filename_obj;
frame_frame_yaml->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_yaml->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_2 = NULL;
    }
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_yaml->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_2fc73ea9574fcd61d682ada7bdf7d6e1_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_yaml$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_yaml$__spec__(tstate);
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
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = module_var_accessor_yaml$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_yaml$__spec__(tstate);
assert(!(tmp_assattr_target_3 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_submodule_search_locations, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
UPDATE_STRING_DICT0(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_star_imported_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_error;
tmp_globals_arg_value_1 = (PyObject *)moduledict_yaml;
tmp_locals_arg_value_1 = (PyObject *)moduledict_yaml;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_yaml->m_frame.f_lineno = 2;
tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_star_imported_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_yaml, true, tmp_star_imported_1);
CHECK_OBJECT(tmp_star_imported_1);
Py_DECREF(tmp_star_imported_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_star_imported_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_tokens;
tmp_globals_arg_value_2 = (PyObject *)moduledict_yaml;
tmp_locals_arg_value_2 = (PyObject *)moduledict_yaml;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_yaml->m_frame.f_lineno = 4;
tmp_star_imported_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_star_imported_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_yaml, true, tmp_star_imported_2);
CHECK_OBJECT(tmp_star_imported_2);
Py_DECREF(tmp_star_imported_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_star_imported_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_events;
tmp_globals_arg_value_3 = (PyObject *)moduledict_yaml;
tmp_locals_arg_value_3 = (PyObject *)moduledict_yaml;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_yaml->m_frame.f_lineno = 5;
tmp_star_imported_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_star_imported_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_yaml, true, tmp_star_imported_3);
CHECK_OBJECT(tmp_star_imported_3);
Py_DECREF(tmp_star_imported_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_star_imported_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_nodes;
tmp_globals_arg_value_4 = (PyObject *)moduledict_yaml;
tmp_locals_arg_value_4 = (PyObject *)moduledict_yaml;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_yaml->m_frame.f_lineno = 6;
tmp_star_imported_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_star_imported_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_yaml, true, tmp_star_imported_4);
CHECK_OBJECT(tmp_star_imported_4);
Py_DECREF(tmp_star_imported_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_star_imported_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_loader;
tmp_globals_arg_value_5 = (PyObject *)moduledict_yaml;
tmp_locals_arg_value_5 = (PyObject *)moduledict_yaml;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_yaml->m_frame.f_lineno = 8;
tmp_star_imported_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_star_imported_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_yaml, true, tmp_star_imported_5);
CHECK_OBJECT(tmp_star_imported_5);
Py_DECREF(tmp_star_imported_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_star_imported_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_dumper;
tmp_globals_arg_value_6 = (PyObject *)moduledict_yaml;
tmp_locals_arg_value_6 = (PyObject *)moduledict_yaml;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_yaml->m_frame.f_lineno = 9;
tmp_star_imported_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_star_imported_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_yaml, true, tmp_star_imported_6);
CHECK_OBJECT(tmp_star_imported_6);
Py_DECREF(tmp_star_imported_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = mod_consts.const_str_digest_85da70d506f176043a30f6affcafb4bc;
UPDATE_STRING_DICT0(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_5);
}
// Tried code:
{
PyObject *tmp_star_imported_7;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_cyaml;
tmp_globals_arg_value_7 = (PyObject *)moduledict_yaml;
tmp_locals_arg_value_7 = (PyObject *)moduledict_yaml;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_yaml->m_frame.f_lineno = 13;
tmp_star_imported_7 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_star_imported_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_yaml, true, tmp_star_imported_7);
CHECK_OBJECT(tmp_star_imported_7);
Py_DECREF(tmp_star_imported_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = Py_True;
UPDATE_STRING_DICT0(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain___with_libyaml__, tmp_assign_source_6);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = module_var_accessor_yaml$ImportError(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImportError);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 15;

    goto try_except_handler_2;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_False;
UPDATE_STRING_DICT0(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain___with_libyaml__, tmp_assign_source_7);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 12;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_yaml->m_frame)) {
        frame_frame_yaml->m_frame.f_lineno = exception_tb->tb_lineno;
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
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_9 = MAKE_FUNCTION_yaml$$$function__1_warnings(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_defaults_2;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_yaml$Loader(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Loader);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_1);

tmp_assign_source_10 = MAKE_FUNCTION_yaml$$$function__2_scan(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_scan, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_defaults_3;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = module_var_accessor_yaml$Loader(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Loader);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto frame_exception_exit_1;
}
tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_2);

tmp_assign_source_11 = MAKE_FUNCTION_yaml$$$function__3_parse(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_parse, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_defaults_4;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_yaml$Loader(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Loader);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_defaults_4 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_defaults_4, 0, tmp_tuple_element_3);

tmp_assign_source_12 = MAKE_FUNCTION_yaml$$$function__4_compose(tstate, tmp_defaults_4);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_compose, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_defaults_5;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = module_var_accessor_yaml$Loader(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Loader);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;

    goto frame_exception_exit_1;
}
tmp_defaults_5 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_defaults_5, 0, tmp_tuple_element_4);

tmp_assign_source_13 = MAKE_FUNCTION_yaml$$$function__5_compose_all(tstate, tmp_defaults_5);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_compose_all, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;

tmp_assign_source_14 = MAKE_FUNCTION_yaml$$$function__6_load(tstate);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_load, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;

tmp_assign_source_15 = MAKE_FUNCTION_yaml$$$function__7_load_all(tstate);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_load_all, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;

tmp_assign_source_16 = MAKE_FUNCTION_yaml$$$function__8_full_load(tstate);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_full_load, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;

tmp_assign_source_17 = MAKE_FUNCTION_yaml$$$function__9_full_load_all(tstate);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_full_load_all, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_yaml$$$function__10_safe_load(tstate);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_safe_load, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;

tmp_assign_source_19 = MAKE_FUNCTION_yaml$$$function__11_safe_load_all(tstate);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_safe_load_all, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;

tmp_assign_source_20 = MAKE_FUNCTION_yaml$$$function__12_unsafe_load(tstate);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_unsafe_load, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;

tmp_assign_source_21 = MAKE_FUNCTION_yaml$$$function__13_unsafe_load_all(tstate);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_unsafe_load_all, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_defaults_6;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = Py_None;
tmp_defaults_6 = MAKE_TUPLE_EMPTY(tstate, 7);
PyTuple_SET_ITEM0(tmp_defaults_6, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_yaml$Dumper(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dumper);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_defaults_6, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_6, 2, tmp_tuple_element_5);
tmp_tuple_element_5 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_6, 3, tmp_tuple_element_5);
tmp_tuple_element_5 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_6, 4, tmp_tuple_element_5);
tmp_tuple_element_5 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_6, 5, tmp_tuple_element_5);
tmp_tuple_element_5 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_6, 6, tmp_tuple_element_5);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_defaults_6);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

tmp_assign_source_22 = MAKE_FUNCTION_yaml$$$function__14_emit(tstate, tmp_defaults_6);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_emit, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_defaults_7;
PyObject *tmp_tuple_element_6;
tmp_tuple_element_6 = Py_None;
tmp_defaults_7 = MAKE_TUPLE_EMPTY(tstate, 12);
PyTuple_SET_ITEM0(tmp_defaults_7, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = module_var_accessor_yaml$Dumper(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dumper);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_defaults_7, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_7, 2, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_7, 3, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_7, 4, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_7, 5, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_7, 6, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_7, 7, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_7, 8, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_7, 9, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_7, 10, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_7, 11, tmp_tuple_element_6);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_defaults_7);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;

tmp_assign_source_23 = MAKE_FUNCTION_yaml$$$function__15_serialize_all(tstate, tmp_defaults_7);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_serialize_all, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_defaults_8;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = Py_None;
tmp_defaults_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_defaults_8, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = module_var_accessor_yaml$Dumper(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dumper);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 208;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_defaults_8, 1, tmp_tuple_element_7);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_defaults_8);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;

tmp_assign_source_24 = MAKE_FUNCTION_yaml$$$function__16_serialize(tstate, tmp_defaults_8);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_serialize, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_defaults_9;
PyObject *tmp_tuple_element_8;
tmp_tuple_element_8 = Py_None;
tmp_defaults_9 = MAKE_TUPLE_EMPTY(tstate, 15);
PyTuple_SET_ITEM0(tmp_defaults_9, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = module_var_accessor_yaml$Dumper(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dumper);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM0(tmp_defaults_9, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_9, 2, tmp_tuple_element_8);
tmp_tuple_element_8 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_9, 3, tmp_tuple_element_8);
tmp_tuple_element_8 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_9, 4, tmp_tuple_element_8);
tmp_tuple_element_8 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_9, 5, tmp_tuple_element_8);
tmp_tuple_element_8 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_9, 6, tmp_tuple_element_8);
tmp_tuple_element_8 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_9, 7, tmp_tuple_element_8);
tmp_tuple_element_8 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_9, 8, tmp_tuple_element_8);
tmp_tuple_element_8 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_9, 9, tmp_tuple_element_8);
tmp_tuple_element_8 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_9, 10, tmp_tuple_element_8);
tmp_tuple_element_8 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_9, 11, tmp_tuple_element_8);
tmp_tuple_element_8 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_9, 12, tmp_tuple_element_8);
tmp_tuple_element_8 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_9, 13, tmp_tuple_element_8);
tmp_tuple_element_8 = Py_True;
PyTuple_SET_ITEM0(tmp_defaults_9, 14, tmp_tuple_element_8);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_defaults_9);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;

tmp_assign_source_25 = MAKE_FUNCTION_yaml$$$function__17_dump_all(tstate, tmp_defaults_9);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_dump_all, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_defaults_10;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = Py_None;
tmp_defaults_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_defaults_10, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = module_var_accessor_yaml$Dumper(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dumper);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM0(tmp_defaults_10, 1, tmp_tuple_element_9);
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_defaults_10);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;

tmp_assign_source_26 = MAKE_FUNCTION_yaml$$$function__18_dump(tstate, tmp_defaults_10);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_dump, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_defaults_11;
tmp_defaults_11 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_11);

tmp_assign_source_27 = MAKE_FUNCTION_yaml$$$function__19_safe_dump_all(tstate, tmp_defaults_11);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_safe_dump_all, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_defaults_12;
tmp_defaults_12 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_12);

tmp_assign_source_28 = MAKE_FUNCTION_yaml$$$function__20_safe_dump(tstate, tmp_defaults_12);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_safe_dump, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_defaults_13;
PyObject *tmp_tuple_element_10;
tmp_tuple_element_10 = Py_None;
tmp_defaults_13 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_defaults_13, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_13, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = module_var_accessor_yaml$Dumper(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dumper);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM0(tmp_defaults_13, 2, tmp_tuple_element_10);
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_defaults_13);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;

tmp_assign_source_29 = MAKE_FUNCTION_yaml$$$function__21_add_implicit_resolver(tstate, tmp_defaults_13);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_add_implicit_resolver, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_defaults_14;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = Py_None;
tmp_defaults_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_defaults_14, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_14, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = module_var_accessor_yaml$Dumper(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dumper);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM0(tmp_defaults_14, 2, tmp_tuple_element_11);
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_defaults_14);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;

tmp_assign_source_30 = MAKE_FUNCTION_yaml$$$function__22_add_path_resolver(tstate, tmp_defaults_14);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_add_path_resolver, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_defaults_15;
tmp_defaults_15 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_15);

tmp_assign_source_31 = MAKE_FUNCTION_yaml$$$function__23_add_constructor(tstate, tmp_defaults_15);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_add_constructor, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_defaults_16;
tmp_defaults_16 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_16);

tmp_assign_source_32 = MAKE_FUNCTION_yaml$$$function__24_add_multi_constructor(tstate, tmp_defaults_16);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_add_multi_constructor, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_defaults_17;
PyObject *tmp_tuple_element_12;
tmp_tuple_element_12 = module_var_accessor_yaml$Dumper(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dumper);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 329;

    goto frame_exception_exit_1;
}
tmp_defaults_17 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_defaults_17, 0, tmp_tuple_element_12);

tmp_assign_source_33 = MAKE_FUNCTION_yaml$$$function__25_add_representer(tstate, tmp_defaults_17);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_add_representer, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_defaults_18;
PyObject *tmp_tuple_element_13;
tmp_tuple_element_13 = module_var_accessor_yaml$Dumper(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dumper);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 338;

    goto frame_exception_exit_1;
}
tmp_defaults_18 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_defaults_18, 0, tmp_tuple_element_13);

tmp_assign_source_34 = MAKE_FUNCTION_yaml$$$function__26_add_multi_representer(tstate, tmp_defaults_18);

UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_add_multi_representer, tmp_assign_source_34);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_tuple_element_14;
tmp_tuple_element_14 = module_var_accessor_yaml$type(tstate);
if (unlikely(tmp_tuple_element_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_type);
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 347;

    goto try_except_handler_3;
}
tmp_assign_source_35 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_35, 0, tmp_tuple_element_14);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_36 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_3;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_3 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_38 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_38;
}
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_3;
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
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_3;
}
tmp_tuple_element_15 = mod_consts.const_str_plain_YAMLObjectMetaclass;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_yaml->m_frame.f_lineno = 347;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_39;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_6 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_3;
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
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_16 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_3;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_8 == NULL));
tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_16);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_3;
}
frame_frame_yaml->m_frame.f_lineno = 347;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 347;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_40;
}
branch_end_2:;
{
PyObject *tmp_assign_source_41;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_yaml$$$class__1_YAMLObjectMetaclass_347 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_yaml;
tmp_res = PyObject_SetItem(locals_yaml$$$class__1_YAMLObjectMetaclass_347, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_digest_f48bd2ccda8be8f4cd48d2215dfa4ad7;
tmp_res = PyObject_SetItem(locals_yaml$$$class__1_YAMLObjectMetaclass_347, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_YAMLObjectMetaclass;
tmp_res = PyObject_SetItem(locals_yaml$$$class__1_YAMLObjectMetaclass_347, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_347;
tmp_res = PyObject_SetItem(locals_yaml$$$class__1_YAMLObjectMetaclass_347, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_5;
}
frame_frame_yaml$$$class__1_YAMLObjectMetaclass_2 = MAKE_CLASS_FRAME(tstate, code_objects_966526958cadd281a27ad06bb37e8309, module_yaml, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$class__1_YAMLObjectMetaclass_2);
assert(Py_REFCNT(frame_frame_yaml$$$class__1_YAMLObjectMetaclass_2) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_yaml$$$function__27___init__(tstate);

tmp_res = PyObject_SetItem(locals_yaml$$$class__1_YAMLObjectMetaclass_347, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$class__1_YAMLObjectMetaclass_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$class__1_YAMLObjectMetaclass_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$class__1_YAMLObjectMetaclass_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$class__1_YAMLObjectMetaclass_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_yaml$$$class__1_YAMLObjectMetaclass_2);

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
tmp_res = PyObject_SetItem(locals_yaml$$$class__1_YAMLObjectMetaclass_347, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_5;
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


exception_lineno = 347;

    goto try_except_handler_5;
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
tmp_res = PyObject_SetItem(locals_yaml$$$class__1_YAMLObjectMetaclass_347, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_5;
}
branch_no_4:;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_17 = mod_consts.const_str_plain_YAMLObjectMetaclass;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_17);
tmp_tuple_element_17 = locals_yaml$$$class__1_YAMLObjectMetaclass_347;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_yaml->m_frame.f_lineno = 347;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_5;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_42);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_41 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_41);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_yaml$$$class__1_YAMLObjectMetaclass_347);
locals_yaml$$$class__1_YAMLObjectMetaclass_347 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_yaml$$$class__1_YAMLObjectMetaclass_347);
locals_yaml$$$class__1_YAMLObjectMetaclass_347 = NULL;
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
exception_lineno = 347;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_YAMLObjectMetaclass, tmp_assign_source_41);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_metaclass;
tmp_dict_value_1 = module_var_accessor_yaml$YAMLObjectMetaclass(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_YAMLObjectMetaclass);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;

    goto try_except_handler_6;
}
tmp_assign_source_43 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
bool tmp_condition_result_6;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
tmp_key_value_1 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_1 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_key_value_2 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_44 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_44 == NULL) {
    tmp_assign_source_44 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_44);
}
assert(!(tmp_assign_source_44 == NULL));
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_44 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_44);
condexpr_end_2:;
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_44;
}
{
bool tmp_condition_result_7;
PyObject *tmp_key_value_3;
PyObject *tmp_dict_arg_value_3;
tmp_key_value_3 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_2__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_6;
}
branch_no_5:;
{
bool tmp_condition_result_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_6;
}
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_3;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_6;
}
tmp_args_value_3 = mod_consts.const_tuple_str_plain_YAMLObject_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_yaml->m_frame.f_lineno = 362;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_45;
}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_11 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_6;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_18 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_9, tmp_default_value_2);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_6;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_3;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_3 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_18);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_6;
}
frame_frame_yaml->m_frame.f_lineno = 362;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 362;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_7:;
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_46;
}
branch_end_6:;
{
PyObject *tmp_assign_source_47;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_yaml$$$class__2_YAMLObject_362 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_yaml;
tmp_res = PyObject_SetItem(locals_yaml$$$class__2_YAMLObject_362, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_2e7a1bfa18f198236697e36ce7134df2;
tmp_res = PyObject_SetItem(locals_yaml$$$class__2_YAMLObject_362, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_YAMLObject;
tmp_res = PyObject_SetItem(locals_yaml$$$class__2_YAMLObject_362, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_362;
tmp_res = PyObject_SetItem(locals_yaml$$$class__2_YAMLObject_362, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_8;
}
frame_frame_yaml$$$class__2_YAMLObject_3 = MAKE_CLASS_FRAME(tstate, code_objects_0c773058dac160602e09a1ce967737ab, module_yaml, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_yaml$$$class__2_YAMLObject_3);
assert(Py_REFCNT(frame_frame_yaml$$$class__2_YAMLObject_3) == 2);

// Framed code:
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_yaml$$$class__2_YAMLObject_362, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_list_element_2;
tmp_list_element_2 = PyObject_GetItem(locals_yaml$$$class__2_YAMLObject_362, mod_consts.const_str_plain_Loader);

if (tmp_list_element_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_list_element_2 = module_var_accessor_yaml$Loader(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Loader);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 370;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_list_element_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 3);
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
tmp_list_element_2 = PyObject_GetItem(locals_yaml$$$class__2_YAMLObject_362, mod_consts.const_str_plain_FullLoader);

if (tmp_list_element_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_list_element_2 = module_var_accessor_yaml$FullLoader(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FullLoader);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 370;
type_description_2 = "o";
    goto list_build_exception_2;
}
        Py_INCREF(tmp_list_element_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto list_build_exception_2;
    }
}

PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
tmp_list_element_2 = PyObject_GetItem(locals_yaml$$$class__2_YAMLObject_362, mod_consts.const_str_plain_UnsafeLoader);

if (tmp_list_element_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_list_element_2 = module_var_accessor_yaml$UnsafeLoader(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UnsafeLoader);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 370;
type_description_2 = "o";
    goto list_build_exception_2;
}
        Py_INCREF(tmp_list_element_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto list_build_exception_2;
    }
}

PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
goto list_build_no_exception_2;
// Exception handling pass through code for list_build:
list_build_exception_2:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_3;
// Finished with no exception for list_build:
list_build_no_exception_2:;
tmp_res = PyObject_SetItem(locals_yaml$$$class__2_YAMLObject_362, mod_consts.const_str_plain_yaml_loader, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
tmp_dictset_value = PyObject_GetItem(locals_yaml$$$class__2_YAMLObject_362, mod_consts.const_str_plain_Dumper);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_yaml$Dumper(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Dumper);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 371;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_res = PyObject_SetItem(locals_yaml$$$class__2_YAMLObject_362, mod_consts.const_str_plain_yaml_dumper, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_yaml$$$class__2_YAMLObject_362, mod_consts.const_str_plain_yaml_tag, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_yaml$$$class__2_YAMLObject_362, mod_consts.const_str_plain_yaml_flow_style, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_2;
tmp_called_value_6 = PyObject_GetItem(locals_yaml$$$class__2_YAMLObject_362, const_str_plain_classmethod);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = module_var_accessor_yaml$classmethod(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_classmethod);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 376;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}


tmp_args_element_value_2 = MAKE_FUNCTION_yaml$$$function__28_from_yaml(tstate);

frame_frame_yaml$$$class__2_YAMLObject_3->m_frame.f_lineno = 376;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_yaml$$$class__2_YAMLObject_362, mod_consts.const_str_plain_from_yaml, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_3;
tmp_called_value_7 = PyObject_GetItem(locals_yaml$$$class__2_YAMLObject_362, const_str_plain_classmethod);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = module_var_accessor_yaml$classmethod(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_classmethod);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 383;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}


tmp_args_element_value_3 = MAKE_FUNCTION_yaml$$$function__29_to_yaml(tstate);

frame_frame_yaml$$$class__2_YAMLObject_3->m_frame.f_lineno = 383;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_yaml$$$class__2_YAMLObject_362, mod_consts.const_str_plain_to_yaml, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml$$$class__2_YAMLObject_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml$$$class__2_YAMLObject_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml$$$class__2_YAMLObject_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_yaml$$$class__2_YAMLObject_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_yaml$$$class__2_YAMLObject_3);

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
tmp_res = PyObject_SetItem(locals_yaml$$$class__2_YAMLObject_362, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_8;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_19 = mod_consts.const_str_plain_YAMLObject;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_19);
tmp_tuple_element_19 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_19);
tmp_tuple_element_19 = locals_yaml$$$class__2_YAMLObject_362;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_yaml->m_frame.f_lineno = 362;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_8;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_48;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_47 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_47);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_yaml$$$class__2_YAMLObject_362);
locals_yaml$$$class__2_YAMLObject_362 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_yaml$$$class__2_YAMLObject_362);
locals_yaml$$$class__2_YAMLObject_362 = NULL;
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
exception_lineno = 362;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_yaml, (Nuitka_StringObject *)mod_consts.const_str_plain_YAMLObject, tmp_assign_source_47);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_yaml, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_yaml->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_yaml, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_yaml);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("yaml", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "yaml" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_yaml);
    return module_yaml;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_yaml, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("yaml", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

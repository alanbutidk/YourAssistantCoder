/* Generated code for Python module 'openai$types$beta$assistant_stream_event'
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



/* The "module_openai$types$beta$assistant_stream_event" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$types$beta$assistant_stream_event;
PyDictObject *moduledict_openai$types$beta$assistant_stream_event;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Literal_str_plain_Annotated_str_plain_TypeAlias_tuple;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_Annotated;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_plain_thread;
PyObject *const_tuple_str_plain_Thread_tuple;
PyObject *const_str_plain_Thread;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_PropertyInfo_tuple;
PyObject *const_int_pos_3;
PyObject *const_str_plain_PropertyInfo;
PyObject *const_str_plain__models;
PyObject *const_tuple_str_plain_BaseModel_tuple;
PyObject *const_str_plain_BaseModel;
PyObject *const_str_digest_6f72254bf441be426b31d66d5df26306;
PyObject *const_tuple_str_plain_Run_tuple;
PyObject *const_str_plain_Run;
PyObject *const_str_digest_edadb99a61f4c9ee0e2af94c59a7d2ab;
PyObject *const_tuple_str_plain_Message_tuple;
PyObject *const_str_plain_Message;
PyObject *const_str_digest_d5b583ddd01bb6e36dc5f7ee3c9cddde;
PyObject *const_tuple_str_plain_ErrorObject_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_ErrorObject;
PyObject *const_str_digest_560a84ab298d61e2c5645308af422f51;
PyObject *const_tuple_str_plain_RunStep_tuple;
PyObject *const_str_plain_RunStep;
PyObject *const_str_digest_0b3a8f50990fadd19399b90e4dab99dc;
PyObject *const_tuple_str_plain_MessageDeltaEvent_tuple;
PyObject *const_str_plain_MessageDeltaEvent;
PyObject *const_str_digest_db570cb54965c40a74fcc192fda869ce;
PyObject *const_tuple_str_plain_RunStepDeltaEvent_tuple;
PyObject *const_str_plain_RunStepDeltaEvent;
PyObject *const_list_7c8d5950e4f3cc639b189f4deb095ff2_list;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_ThreadCreated;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_45;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_data;
PyObject *const_str_digest_52bffdb7e10749a96a6948c006c1dbfa;
PyObject *const_str_plain_event;
PyObject *const_str_plain_enabled;
PyObject *const_str_plain_bool;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_ThreadRunCreated;
PyObject *const_int_pos_58;
PyObject *const_str_digest_4077fc0fd19c48b92e0d1fb1b231c42c;
PyObject *const_str_plain_ThreadRunQueued;
PyObject *const_int_pos_68;
PyObject *const_str_digest_064f3e2ea52adc45a525c5bb2d6c29bb;
PyObject *const_str_plain_ThreadRunInProgress;
PyObject *const_int_pos_78;
PyObject *const_str_digest_77b1acf89e6f311212075cbbedfa6181;
PyObject *const_str_plain_ThreadRunRequiresAction;
PyObject *const_int_pos_88;
PyObject *const_str_digest_00fc71d99a53e6e8cf16254d1fcde7ae;
PyObject *const_str_plain_ThreadRunCompleted;
PyObject *const_int_pos_98;
PyObject *const_str_digest_1520470f150ec41cd481edefacf606ca;
PyObject *const_str_plain_ThreadRunIncomplete;
PyObject *const_int_pos_108;
PyObject *const_str_digest_3c7b8c1c3ef920e9d817482cce246959;
PyObject *const_str_plain_ThreadRunFailed;
PyObject *const_int_pos_118;
PyObject *const_str_digest_9ea06953515e7a65f03c3064b9a3b052;
PyObject *const_str_plain_ThreadRunCancelling;
PyObject *const_int_pos_128;
PyObject *const_str_digest_7a05dfcff22b8ade7806035dd84bb48c;
PyObject *const_str_plain_ThreadRunCancelled;
PyObject *const_int_pos_138;
PyObject *const_str_digest_5f29fdaec26df2e97d6fce1ca9030b45;
PyObject *const_str_plain_ThreadRunExpired;
PyObject *const_int_pos_148;
PyObject *const_str_digest_127ef2d2434418972278709118847d7e;
PyObject *const_str_plain_ThreadRunStepCreated;
PyObject *const_int_pos_158;
PyObject *const_str_digest_5a82eb6b3fd049e8ab5d0586dd18a94a;
PyObject *const_str_plain_ThreadRunStepInProgress;
PyObject *const_int_pos_165;
PyObject *const_str_digest_c85b4c16f30d21ee1c9329e548e39509;
PyObject *const_str_plain_ThreadRunStepDelta;
PyObject *const_int_pos_172;
PyObject *const_str_digest_9d132349ec9037cf5cf5d8fff2f727cb;
PyObject *const_str_plain_ThreadRunStepCompleted;
PyObject *const_int_pos_182;
PyObject *const_str_digest_3b8e8a48144aaf82bb3a76883a9d2cf2;
PyObject *const_str_plain_ThreadRunStepFailed;
PyObject *const_int_pos_189;
PyObject *const_str_digest_dedbbe0bd2b49741f8aa0c1ecf2d541c;
PyObject *const_str_plain_ThreadRunStepCancelled;
PyObject *const_int_pos_196;
PyObject *const_str_digest_58cb50d8e6093fdb65b66e5fcf25885e;
PyObject *const_str_plain_ThreadRunStepExpired;
PyObject *const_int_pos_203;
PyObject *const_str_digest_8a34307dc2bc05439509724ff6037032;
PyObject *const_str_plain_ThreadMessageCreated;
PyObject *const_int_pos_210;
PyObject *const_str_digest_a9ebaf2124eba532304030cf770fb271;
PyObject *const_str_plain_ThreadMessageInProgress;
PyObject *const_int_pos_220;
PyObject *const_str_digest_77243e396bb74de0cc02ba98fe4c2502;
PyObject *const_str_plain_ThreadMessageDelta;
PyObject *const_int_pos_230;
PyObject *const_str_digest_63bc27c04147de47f8222c9a335db2bd;
PyObject *const_str_plain_ThreadMessageCompleted;
PyObject *const_int_pos_240;
PyObject *const_str_digest_3f4b2d3655642ed3815e3e0494439d98;
PyObject *const_str_plain_ThreadMessageIncomplete;
PyObject *const_int_pos_250;
PyObject *const_str_digest_42b3b83cfeec59f0a3d9c8e1f2d03c18;
PyObject *const_str_plain_ErrorEvent;
PyObject *const_int_pos_260;
PyObject *const_str_plain_error;
PyObject *const_tuple_str_plain_event_tuple;
PyObject *const_tuple_str_plain_discriminator_tuple;
PyObject *const_str_plain_AssistantStreamEvent;
PyObject *const_str_digest_5eed0cb52c86efa7d1c9c92a10d93806;
PyObject *const_str_digest_438b9182ca4eb5e49dc18f5b62d894fb;
PyObject *const_tuple_str_plain___class___tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[130];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.types.beta.assistant_stream_event"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_str_plain_Annotated_str_plain_TypeAlias_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_thread);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Thread_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_Thread);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PropertyInfo_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseModel_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f72254bf441be426b31d66d5df26306);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Run_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_Run);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_edadb99a61f4c9ee0e2af94c59a7d2ab);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Message_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_Message);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5b583ddd01bb6e36dc5f7ee3c9cddde);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ErrorObject_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_ErrorObject);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_560a84ab298d61e2c5645308af422f51);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunStep_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunStep);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_0b3a8f50990fadd19399b90e4dab99dc);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageDeltaEvent_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageDeltaEvent);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_db570cb54965c40a74fcc192fda869ce);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunStepDeltaEvent_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunStepDeltaEvent);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_list_7c8d5950e4f3cc639b189f4deb095ff2_list);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadCreated);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_int_pos_45);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_52bffdb7e10749a96a6948c006c1dbfa);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_event);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_enabled);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunCreated);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_int_pos_58);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_4077fc0fd19c48b92e0d1fb1b231c42c);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunQueued);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_int_pos_68);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_064f3e2ea52adc45a525c5bb2d6c29bb);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunInProgress);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_int_pos_78);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_77b1acf89e6f311212075cbbedfa6181);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunRequiresAction);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_int_pos_88);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_00fc71d99a53e6e8cf16254d1fcde7ae);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunCompleted);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_int_pos_98);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_1520470f150ec41cd481edefacf606ca);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunIncomplete);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_int_pos_108);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c7b8c1c3ef920e9d817482cce246959);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunFailed);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_int_pos_118);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ea06953515e7a65f03c3064b9a3b052);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunCancelling);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_int_pos_128);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a05dfcff22b8ade7806035dd84bb48c);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunCancelled);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_int_pos_138);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f29fdaec26df2e97d6fce1ca9030b45);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunExpired);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_int_pos_148);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_127ef2d2434418972278709118847d7e);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunStepCreated);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_int_pos_158);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a82eb6b3fd049e8ab5d0586dd18a94a);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunStepInProgress);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_int_pos_165);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_c85b4c16f30d21ee1c9329e548e39509);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunStepDelta);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_int_pos_172);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d132349ec9037cf5cf5d8fff2f727cb);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunStepCompleted);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_int_pos_182);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b8e8a48144aaf82bb3a76883a9d2cf2);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunStepFailed);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_int_pos_189);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_dedbbe0bd2b49741f8aa0c1ecf2d541c);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunStepCancelled);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_int_pos_196);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_58cb50d8e6093fdb65b66e5fcf25885e);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunStepExpired);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_int_pos_203);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a34307dc2bc05439509724ff6037032);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessageCreated);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_int_pos_210);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9ebaf2124eba532304030cf770fb271);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessageInProgress);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_int_pos_220);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_77243e396bb74de0cc02ba98fe4c2502);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessageDelta);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_int_pos_230);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_63bc27c04147de47f8222c9a335db2bd);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessageCompleted);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_int_pos_240);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f4b2d3655642ed3815e3e0494439d98);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessageIncomplete);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_int_pos_250);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_42b3b83cfeec59f0a3d9c8e1f2d03c18);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_ErrorEvent);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_int_pos_260);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_event_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_discriminator_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_AssistantStreamEvent);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_5eed0cb52c86efa7d1c9c92a10d93806);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_438b9182ca4eb5e49dc18f5b62d894fb);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
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
void checkModuleConstants_openai$types$beta$assistant_stream_event(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_str_plain_Annotated_str_plain_TypeAlias_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Literal_str_plain_Annotated_str_plain_TypeAlias_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Annotated);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thread);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Thread_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Thread_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_Thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Thread);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PropertyInfo_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PropertyInfo_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PropertyInfo);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseModel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BaseModel_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseModel);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f72254bf441be426b31d66d5df26306));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f72254bf441be426b31d66d5df26306);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Run_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Run_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_Run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Run);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_edadb99a61f4c9ee0e2af94c59a7d2ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_edadb99a61f4c9ee0e2af94c59a7d2ab);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Message_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_Message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Message);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5b583ddd01bb6e36dc5f7ee3c9cddde));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5b583ddd01bb6e36dc5f7ee3c9cddde);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ErrorObject_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ErrorObject_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_ErrorObject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ErrorObject);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_560a84ab298d61e2c5645308af422f51));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_560a84ab298d61e2c5645308af422f51);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunStep_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RunStep_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunStep));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunStep);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_0b3a8f50990fadd19399b90e4dab99dc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0b3a8f50990fadd19399b90e4dab99dc);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MessageDeltaEvent_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageDeltaEvent);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_db570cb54965c40a74fcc192fda869ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db570cb54965c40a74fcc192fda869ce);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunStepDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RunStepDeltaEvent_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunStepDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunStepDeltaEvent);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_list_7c8d5950e4f3cc639b189f4deb095ff2_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_7c8d5950e4f3cc639b189f4deb095ff2_list);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadCreated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadCreated);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_int_pos_45));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_45);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_52bffdb7e10749a96a6948c006c1dbfa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_52bffdb7e10749a96a6948c006c1dbfa);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_event);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_enabled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enabled);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunCreated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunCreated);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_int_pos_58));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_58);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_4077fc0fd19c48b92e0d1fb1b231c42c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4077fc0fd19c48b92e0d1fb1b231c42c);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunQueued));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunQueued);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_int_pos_68));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_68);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_064f3e2ea52adc45a525c5bb2d6c29bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_064f3e2ea52adc45a525c5bb2d6c29bb);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunInProgress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunInProgress);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_int_pos_78));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_78);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_77b1acf89e6f311212075cbbedfa6181));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_77b1acf89e6f311212075cbbedfa6181);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunRequiresAction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunRequiresAction);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_int_pos_88));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_88);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_00fc71d99a53e6e8cf16254d1fcde7ae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_00fc71d99a53e6e8cf16254d1fcde7ae);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunCompleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunCompleted);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_int_pos_98));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_98);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_1520470f150ec41cd481edefacf606ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1520470f150ec41cd481edefacf606ca);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunIncomplete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunIncomplete);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_int_pos_108));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_108);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c7b8c1c3ef920e9d817482cce246959));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c7b8c1c3ef920e9d817482cce246959);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunFailed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunFailed);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_int_pos_118));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_118);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ea06953515e7a65f03c3064b9a3b052));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ea06953515e7a65f03c3064b9a3b052);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunCancelling));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunCancelling);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_int_pos_128));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_128);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a05dfcff22b8ade7806035dd84bb48c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a05dfcff22b8ade7806035dd84bb48c);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunCancelled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunCancelled);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_int_pos_138));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_138);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f29fdaec26df2e97d6fce1ca9030b45));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f29fdaec26df2e97d6fce1ca9030b45);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunExpired));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunExpired);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_int_pos_148));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_148);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_127ef2d2434418972278709118847d7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_127ef2d2434418972278709118847d7e);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunStepCreated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunStepCreated);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_int_pos_158));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_158);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a82eb6b3fd049e8ab5d0586dd18a94a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a82eb6b3fd049e8ab5d0586dd18a94a);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunStepInProgress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunStepInProgress);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_int_pos_165));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_165);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_c85b4c16f30d21ee1c9329e548e39509));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c85b4c16f30d21ee1c9329e548e39509);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunStepDelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunStepDelta);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_int_pos_172));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_172);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d132349ec9037cf5cf5d8fff2f727cb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d132349ec9037cf5cf5d8fff2f727cb);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunStepCompleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunStepCompleted);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_int_pos_182));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_182);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b8e8a48144aaf82bb3a76883a9d2cf2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b8e8a48144aaf82bb3a76883a9d2cf2);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunStepFailed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunStepFailed);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_int_pos_189));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_189);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_dedbbe0bd2b49741f8aa0c1ecf2d541c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dedbbe0bd2b49741f8aa0c1ecf2d541c);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunStepCancelled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunStepCancelled);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_int_pos_196));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_196);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_58cb50d8e6093fdb65b66e5fcf25885e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_58cb50d8e6093fdb65b66e5fcf25885e);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadRunStepExpired));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadRunStepExpired);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_int_pos_203));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_203);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a34307dc2bc05439509724ff6037032));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a34307dc2bc05439509724ff6037032);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessageCreated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadMessageCreated);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_int_pos_210));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_210);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9ebaf2124eba532304030cf770fb271));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9ebaf2124eba532304030cf770fb271);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessageInProgress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadMessageInProgress);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_int_pos_220));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_220);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_77243e396bb74de0cc02ba98fe4c2502));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_77243e396bb74de0cc02ba98fe4c2502);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessageDelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadMessageDelta);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_int_pos_230));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_230);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_63bc27c04147de47f8222c9a335db2bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_63bc27c04147de47f8222c9a335db2bd);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessageCompleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadMessageCompleted);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_int_pos_240));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_240);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f4b2d3655642ed3815e3e0494439d98));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f4b2d3655642ed3815e3e0494439d98);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_ThreadMessageIncomplete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ThreadMessageIncomplete);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_int_pos_250));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_250);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_42b3b83cfeec59f0a3d9c8e1f2d03c18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_42b3b83cfeec59f0a3d9c8e1f2d03c18);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_ErrorEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ErrorEvent);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_int_pos_260));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_260);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_event_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_event_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_discriminator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_discriminator_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_AssistantStreamEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AssistantStreamEvent);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_5eed0cb52c86efa7d1c9c92a10d93806));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5eed0cb52c86efa7d1c9c92a10d93806);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_438b9182ca4eb5e49dc18f5b62d894fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_438b9182ca4eb5e49dc18f5b62d894fb);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 40
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
static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$Annotated(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Annotated);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Annotated, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Annotated);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Annotated, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseModel);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseModel, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseModel);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseModel, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ErrorEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ErrorEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ErrorEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ErrorEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ErrorEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ErrorObject(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorObject);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ErrorObject);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ErrorObject, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ErrorObject);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ErrorObject, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorObject);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorObject);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorObject);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$Literal(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Literal);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Literal, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Literal);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Literal, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$Message(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Message);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Message);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Message, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Message);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Message, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Message);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Message);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Message);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$MessageDeltaEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageDeltaEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MessageDeltaEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MessageDeltaEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MessageDeltaEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MessageDeltaEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageDeltaEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageDeltaEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageDeltaEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$Optional(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$PropertyInfo(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PropertyInfo);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PropertyInfo, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PropertyInfo);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PropertyInfo, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$Run(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Run);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Run);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Run, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Run);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Run, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Run);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Run);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Run);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$RunStep(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStep);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RunStep);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RunStep, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RunStep);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RunStep, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStep);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStep);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStep);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$RunStepDeltaEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStepDeltaEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RunStepDeltaEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RunStepDeltaEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RunStepDeltaEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RunStepDeltaEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStepDeltaEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStepDeltaEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStepDeltaEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$Thread(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Thread);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Thread);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Thread, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Thread);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Thread, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Thread);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Thread);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Thread);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadCreated(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreated);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadCreated);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadCreated, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadCreated);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadCreated, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreated);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreated);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreated);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadMessageCompleted(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageCompleted);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadMessageCompleted);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadMessageCompleted, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadMessageCompleted);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadMessageCompleted, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageCompleted);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageCompleted);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageCompleted);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadMessageCreated(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageCreated);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadMessageCreated);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadMessageCreated, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadMessageCreated);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadMessageCreated, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageCreated);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageCreated);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageCreated);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadMessageDelta(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageDelta);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadMessageDelta);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadMessageDelta, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadMessageDelta);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadMessageDelta, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageDelta);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageDelta);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageDelta);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadMessageInProgress(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageInProgress);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadMessageInProgress);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadMessageInProgress, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadMessageInProgress);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadMessageInProgress, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageInProgress);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageInProgress);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageInProgress);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadMessageIncomplete(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageIncomplete);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadMessageIncomplete);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadMessageIncomplete, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadMessageIncomplete);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadMessageIncomplete, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageIncomplete);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageIncomplete);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageIncomplete);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunCancelled(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCancelled);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunCancelled);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunCancelled, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunCancelled);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunCancelled, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCancelled);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCancelled);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCancelled);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunCancelling(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCancelling);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunCancelling);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunCancelling, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunCancelling);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunCancelling, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCancelling);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCancelling);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCancelling);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunCompleted(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCompleted);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunCompleted);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunCompleted, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunCompleted);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunCompleted, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCompleted);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCompleted);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCompleted);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunCreated(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCreated);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunCreated);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunCreated, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunCreated);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunCreated, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCreated);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCreated);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCreated);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunExpired(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunExpired);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunExpired);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunExpired, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunExpired);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunExpired, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunExpired);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunExpired);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunExpired);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunFailed(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunFailed);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunFailed);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunFailed, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunFailed);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunFailed, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunFailed);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunFailed);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunFailed);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunInProgress(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunInProgress);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunInProgress);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunInProgress, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunInProgress);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunInProgress, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunInProgress);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunInProgress);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunInProgress);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunIncomplete(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunIncomplete);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunIncomplete);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunIncomplete, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunIncomplete);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunIncomplete, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunIncomplete);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunIncomplete);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunIncomplete);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunQueued(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunQueued);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunQueued);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunQueued, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunQueued);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunQueued, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunQueued);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunQueued);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunQueued);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunRequiresAction(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunRequiresAction);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunRequiresAction);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunRequiresAction, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunRequiresAction);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunRequiresAction, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunRequiresAction);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunRequiresAction);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunRequiresAction);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunStepCancelled(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepCancelled);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunStepCancelled);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunStepCancelled, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunStepCancelled);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunStepCancelled, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepCancelled);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepCancelled);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepCancelled);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunStepCompleted(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepCompleted);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunStepCompleted);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunStepCompleted, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunStepCompleted);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunStepCompleted, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepCompleted);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepCompleted);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepCompleted);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunStepCreated(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepCreated);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunStepCreated);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunStepCreated, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunStepCreated);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunStepCreated, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepCreated);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepCreated);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepCreated);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunStepDelta(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepDelta);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunStepDelta);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunStepDelta, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunStepDelta);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunStepDelta, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepDelta);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepDelta);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepDelta);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunStepExpired(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepExpired);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunStepExpired);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunStepExpired, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunStepExpired);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunStepExpired, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepExpired);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepExpired);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepExpired);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunStepFailed(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepFailed);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunStepFailed);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunStepFailed, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunStepFailed);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunStepFailed, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepFailed);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepFailed);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepFailed);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunStepInProgress(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepInProgress);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunStepInProgress);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunStepInProgress, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ThreadRunStepInProgress);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ThreadRunStepInProgress, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepInProgress);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepInProgress);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepInProgress);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$TypeAlias(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeAlias);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeAlias, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeAlias);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeAlias, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$assistant_stream_event$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$assistant_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$assistant_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$assistant_stream_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_0317cdfa69b5e31f33db41c7639f1428;
static PyCodeObject *code_objects_6baa407b0159a5003675e6a6369c78e1;
static PyCodeObject *code_objects_8340d2d60d0685d2f73b30ec7ed8a705;
static PyCodeObject *code_objects_ac1ebc5493527ead09968299cc12a208;
static PyCodeObject *code_objects_0aac88a9a5b9811125d2baf380445d4b;
static PyCodeObject *code_objects_f0fbe4ce622797780a5a21771d33e17f;
static PyCodeObject *code_objects_4ccf949ec8e1b66127caec8a05bd40ab;
static PyCodeObject *code_objects_34196a96de417bbd1386a7981aeeb0cc;
static PyCodeObject *code_objects_c2888eac794eccc152fb48efd085aa61;
static PyCodeObject *code_objects_03cab78acef4660b9cf260b90a24c003;
static PyCodeObject *code_objects_815d3398375587f6d5866db70a53d809;
static PyCodeObject *code_objects_c345c3fb7fc5348c27d3d211f0196a81;
static PyCodeObject *code_objects_bbd6299cf9f2e267f5ef263ea999ae0e;
static PyCodeObject *code_objects_ee57805f2ed6cb45e996406dc239d1f0;
static PyCodeObject *code_objects_58d8afa8e1d2512bc8377024e5c22f8c;
static PyCodeObject *code_objects_0a5963f1c76f74a8647e87d27f19a780;
static PyCodeObject *code_objects_cbb5ff889b923ad3c7c58126d38672d9;
static PyCodeObject *code_objects_f3d36377e16cddf32577fcd428c80f99;
static PyCodeObject *code_objects_03090f6bc5b880a95fa8c5c1858e9ed3;
static PyCodeObject *code_objects_5244fb68584d79f9e104536ee119a3a8;
static PyCodeObject *code_objects_c9c99d68817adce774236e18599741c3;
static PyCodeObject *code_objects_43885ba41f5a46e3eee91338ca6496eb;
static PyCodeObject *code_objects_9ea12b80588ec973ae12498b82b808f8;
static PyCodeObject *code_objects_1a5909bc4c7d5f44003318e6fe123279;
static PyCodeObject *code_objects_986e2d663718fdb519582b278c4dae1a;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_5eed0cb52c86efa7d1c9c92a10d93806); CHECK_OBJECT(module_filename_obj);
code_objects_0317cdfa69b5e31f33db41c7639f1428 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_438b9182ca4eb5e49dc18f5b62d894fb, mod_consts.const_str_digest_438b9182ca4eb5e49dc18f5b62d894fb, NULL, NULL, 0, 0, 0);
code_objects_6baa407b0159a5003675e6a6369c78e1 = MAKE_CODE_OBJECT(module_filename_obj, 260, 0, mod_consts.const_str_plain_ErrorEvent, mod_consts.const_str_plain_ErrorEvent, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8340d2d60d0685d2f73b30ec7ed8a705 = MAKE_CODE_OBJECT(module_filename_obj, 45, 0, mod_consts.const_str_plain_ThreadCreated, mod_consts.const_str_plain_ThreadCreated, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ac1ebc5493527ead09968299cc12a208 = MAKE_CODE_OBJECT(module_filename_obj, 240, 0, mod_consts.const_str_plain_ThreadMessageCompleted, mod_consts.const_str_plain_ThreadMessageCompleted, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_0aac88a9a5b9811125d2baf380445d4b = MAKE_CODE_OBJECT(module_filename_obj, 210, 0, mod_consts.const_str_plain_ThreadMessageCreated, mod_consts.const_str_plain_ThreadMessageCreated, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f0fbe4ce622797780a5a21771d33e17f = MAKE_CODE_OBJECT(module_filename_obj, 230, 0, mod_consts.const_str_plain_ThreadMessageDelta, mod_consts.const_str_plain_ThreadMessageDelta, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_4ccf949ec8e1b66127caec8a05bd40ab = MAKE_CODE_OBJECT(module_filename_obj, 220, 0, mod_consts.const_str_plain_ThreadMessageInProgress, mod_consts.const_str_plain_ThreadMessageInProgress, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_34196a96de417bbd1386a7981aeeb0cc = MAKE_CODE_OBJECT(module_filename_obj, 250, 0, mod_consts.const_str_plain_ThreadMessageIncomplete, mod_consts.const_str_plain_ThreadMessageIncomplete, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c2888eac794eccc152fb48efd085aa61 = MAKE_CODE_OBJECT(module_filename_obj, 138, 0, mod_consts.const_str_plain_ThreadRunCancelled, mod_consts.const_str_plain_ThreadRunCancelled, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_03cab78acef4660b9cf260b90a24c003 = MAKE_CODE_OBJECT(module_filename_obj, 128, 0, mod_consts.const_str_plain_ThreadRunCancelling, mod_consts.const_str_plain_ThreadRunCancelling, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_815d3398375587f6d5866db70a53d809 = MAKE_CODE_OBJECT(module_filename_obj, 98, 0, mod_consts.const_str_plain_ThreadRunCompleted, mod_consts.const_str_plain_ThreadRunCompleted, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c345c3fb7fc5348c27d3d211f0196a81 = MAKE_CODE_OBJECT(module_filename_obj, 58, 0, mod_consts.const_str_plain_ThreadRunCreated, mod_consts.const_str_plain_ThreadRunCreated, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_bbd6299cf9f2e267f5ef263ea999ae0e = MAKE_CODE_OBJECT(module_filename_obj, 148, 0, mod_consts.const_str_plain_ThreadRunExpired, mod_consts.const_str_plain_ThreadRunExpired, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ee57805f2ed6cb45e996406dc239d1f0 = MAKE_CODE_OBJECT(module_filename_obj, 118, 0, mod_consts.const_str_plain_ThreadRunFailed, mod_consts.const_str_plain_ThreadRunFailed, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_58d8afa8e1d2512bc8377024e5c22f8c = MAKE_CODE_OBJECT(module_filename_obj, 78, 0, mod_consts.const_str_plain_ThreadRunInProgress, mod_consts.const_str_plain_ThreadRunInProgress, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_0a5963f1c76f74a8647e87d27f19a780 = MAKE_CODE_OBJECT(module_filename_obj, 108, 0, mod_consts.const_str_plain_ThreadRunIncomplete, mod_consts.const_str_plain_ThreadRunIncomplete, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_cbb5ff889b923ad3c7c58126d38672d9 = MAKE_CODE_OBJECT(module_filename_obj, 68, 0, mod_consts.const_str_plain_ThreadRunQueued, mod_consts.const_str_plain_ThreadRunQueued, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f3d36377e16cddf32577fcd428c80f99 = MAKE_CODE_OBJECT(module_filename_obj, 88, 0, mod_consts.const_str_plain_ThreadRunRequiresAction, mod_consts.const_str_plain_ThreadRunRequiresAction, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_03090f6bc5b880a95fa8c5c1858e9ed3 = MAKE_CODE_OBJECT(module_filename_obj, 196, 0, mod_consts.const_str_plain_ThreadRunStepCancelled, mod_consts.const_str_plain_ThreadRunStepCancelled, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5244fb68584d79f9e104536ee119a3a8 = MAKE_CODE_OBJECT(module_filename_obj, 182, 0, mod_consts.const_str_plain_ThreadRunStepCompleted, mod_consts.const_str_plain_ThreadRunStepCompleted, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c9c99d68817adce774236e18599741c3 = MAKE_CODE_OBJECT(module_filename_obj, 158, 0, mod_consts.const_str_plain_ThreadRunStepCreated, mod_consts.const_str_plain_ThreadRunStepCreated, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_43885ba41f5a46e3eee91338ca6496eb = MAKE_CODE_OBJECT(module_filename_obj, 172, 0, mod_consts.const_str_plain_ThreadRunStepDelta, mod_consts.const_str_plain_ThreadRunStepDelta, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9ea12b80588ec973ae12498b82b808f8 = MAKE_CODE_OBJECT(module_filename_obj, 203, 0, mod_consts.const_str_plain_ThreadRunStepExpired, mod_consts.const_str_plain_ThreadRunStepExpired, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_1a5909bc4c7d5f44003318e6fe123279 = MAKE_CODE_OBJECT(module_filename_obj, 189, 0, mod_consts.const_str_plain_ThreadRunStepFailed, mod_consts.const_str_plain_ThreadRunStepFailed, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_986e2d663718fdb519582b278c4dae1a = MAKE_CODE_OBJECT(module_filename_obj, 165, 0, mod_consts.const_str_plain_ThreadRunStepInProgress, mod_consts.const_str_plain_ThreadRunStepInProgress, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


// The module function definitions.


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

static function_impl_code const function_table_openai$types$beta$assistant_stream_event[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$types$beta$assistant_stream_event);
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
        module_openai$types$beta$assistant_stream_event,
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
        function_table_openai$types$beta$assistant_stream_event,
        sizeof(function_table_openai$types$beta$assistant_stream_event) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.types.beta.assistant_stream_event";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$types$beta$assistant_stream_event(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$types$beta$assistant_stream_event");

    // Store the module for future use.
    module_openai$types$beta$assistant_stream_event = module;

    moduledict_openai$types$beta$assistant_stream_event = MODULE_DICT(module_openai$types$beta$assistant_stream_event);

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
        PRINT_STRING("openai$types$beta$assistant_stream_event: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$types$beta$assistant_stream_event: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$types$beta$assistant_stream_event: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.beta.assistant_stream_event" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$types$beta$assistant_stream_event\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$types$beta$assistant_stream_event,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$types$beta$assistant_stream_event,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$types$beta$assistant_stream_event,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$beta$assistant_stream_event,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$beta$assistant_stream_event,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$types$beta$assistant_stream_event);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$types$beta$assistant_stream_event);
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

        UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
PyObject *outline_8_var___class__ = NULL;
PyObject *outline_9_var___class__ = NULL;
PyObject *outline_10_var___class__ = NULL;
PyObject *outline_11_var___class__ = NULL;
PyObject *outline_12_var___class__ = NULL;
PyObject *outline_13_var___class__ = NULL;
PyObject *outline_14_var___class__ = NULL;
PyObject *outline_15_var___class__ = NULL;
PyObject *outline_16_var___class__ = NULL;
PyObject *outline_17_var___class__ = NULL;
PyObject *outline_18_var___class__ = NULL;
PyObject *outline_19_var___class__ = NULL;
PyObject *outline_20_var___class__ = NULL;
PyObject *outline_21_var___class__ = NULL;
PyObject *outline_22_var___class__ = NULL;
PyObject *outline_23_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_19__bases = NULL;
PyObject *tmp_class_container$class_creation_19__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_19__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_19__metaclass = NULL;
PyObject *tmp_class_container$class_creation_19__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_20__bases = NULL;
PyObject *tmp_class_container$class_creation_20__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_20__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_20__metaclass = NULL;
PyObject *tmp_class_container$class_creation_20__prepared = NULL;
PyObject *tmp_class_container$class_creation_21__bases = NULL;
PyObject *tmp_class_container$class_creation_21__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_21__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_21__metaclass = NULL;
PyObject *tmp_class_container$class_creation_21__prepared = NULL;
PyObject *tmp_class_container$class_creation_22__bases = NULL;
PyObject *tmp_class_container$class_creation_22__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_22__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_22__metaclass = NULL;
PyObject *tmp_class_container$class_creation_22__prepared = NULL;
PyObject *tmp_class_container$class_creation_23__bases = NULL;
PyObject *tmp_class_container$class_creation_23__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_23__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_23__metaclass = NULL;
PyObject *tmp_class_container$class_creation_23__prepared = NULL;
PyObject *tmp_class_container$class_creation_24__bases = NULL;
PyObject *tmp_class_container$class_creation_24__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_24__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_24__metaclass = NULL;
PyObject *tmp_class_container$class_creation_24__prepared = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_11;
NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_12;
NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_13;
NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_38;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_14;
NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_40;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_41;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_15;
NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_42;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_43;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_44;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_16;
NUITKA_MAY_BE_UNUSED char const *type_description_16 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_45;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_46;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_47;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_17;
NUITKA_MAY_BE_UNUSED char const *type_description_17 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_48;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_49;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_50;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_18;
NUITKA_MAY_BE_UNUSED char const *type_description_18 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_51;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_52;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_53;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_19;
NUITKA_MAY_BE_UNUSED char const *type_description_19 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_54;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_55;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_56;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_20;
NUITKA_MAY_BE_UNUSED char const *type_description_20 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_57;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_58;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_59;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_21;
NUITKA_MAY_BE_UNUSED char const *type_description_21 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_60;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_61;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_62;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_22;
NUITKA_MAY_BE_UNUSED char const *type_description_22 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_63;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_64;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_65;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_23;
NUITKA_MAY_BE_UNUSED char const *type_description_23 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_66;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_67;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_68;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_24;
NUITKA_MAY_BE_UNUSED char const *type_description_24 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_69;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_70;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_71;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;
PyObject *locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_25;
NUITKA_MAY_BE_UNUSED char const *type_description_25 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_72;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_72;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_73;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_73;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_74;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_74;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$types$beta$assistant_stream_event = MAKE_MODULE_FRAME(code_objects_0317cdfa69b5e31f33db41c7639f1428, module_openai$types$beta$assistant_stream_event);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$types$beta$assistant_stream_event$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$types$beta$assistant_stream_event$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_5 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_5);
tmp_import_from_1__module = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_openai$types$beta$assistant_stream_event,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_openai$types$beta$assistant_stream_event,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_7);
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
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$types$beta$assistant_stream_event;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Literal_str_plain_Annotated_str_plain_TypeAlias_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 4;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_openai$types$beta$assistant_stream_event,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$types$beta$assistant_stream_event,
        mod_consts.const_str_plain_Annotated,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Annotated);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_openai$types$beta$assistant_stream_event,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_thread;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$types$beta$assistant_stream_event;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Thread_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 6;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$types$beta$assistant_stream_event,
        mod_consts.const_str_plain_Thread,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Thread);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Thread, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$types$beta$assistant_stream_event;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_PropertyInfo_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_3;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 7;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_openai$types$beta$assistant_stream_event,
        mod_consts.const_str_plain_PropertyInfo,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_PropertyInfo);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$types$beta$assistant_stream_event;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_BaseModel_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_3;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 8;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$types$beta$assistant_stream_event,
        mod_consts.const_str_plain_BaseModel,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_BaseModel);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_6f72254bf441be426b31d66d5df26306;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$types$beta$assistant_stream_event;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Run_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 9;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$types$beta$assistant_stream_event,
        mod_consts.const_str_plain_Run,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Run);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Run, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_edadb99a61f4c9ee0e2af94c59a7d2ab;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$types$beta$assistant_stream_event;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_Message_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 10;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$types$beta$assistant_stream_event,
        mod_consts.const_str_plain_Message,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Message);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Message, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_d5b583ddd01bb6e36dc5f7ee3c9cddde;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$types$beta$assistant_stream_event;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_ErrorObject_tuple;
tmp_level_value_7 = mod_consts.const_int_pos_2;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 11;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$types$beta$assistant_stream_event,
        mod_consts.const_str_plain_ErrorObject,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_ErrorObject);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorObject, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_560a84ab298d61e2c5645308af422f51;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$types$beta$assistant_stream_event;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_RunStep_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 12;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai$types$beta$assistant_stream_event,
        mod_consts.const_str_plain_RunStep,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_RunStep);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStep, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_0b3a8f50990fadd19399b90e4dab99dc;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$types$beta$assistant_stream_event;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_MessageDeltaEvent_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 13;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$types$beta$assistant_stream_event,
        mod_consts.const_str_plain_MessageDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_MessageDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageDeltaEvent, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_db570cb54965c40a74fcc192fda869ce;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$types$beta$assistant_stream_event;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_RunStepDeltaEvent_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 14;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$types$beta$assistant_stream_event,
        mod_consts.const_str_plain_RunStepDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_RunStepDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStepDeltaEvent, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = LIST_COPY(tstate, mod_consts.const_list_7c8d5950e4f3cc639b189f4deb095ff2_list);
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_21);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto try_except_handler_3;
}
tmp_assign_source_22 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_22, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_23 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
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


exception_lineno = 45;

    goto try_except_handler_3;
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


exception_lineno = 45;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_25 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_25;
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


exception_lineno = 45;

    goto try_except_handler_3;
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
PyObject *tmp_assign_source_26;
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


exception_lineno = 45;

    goto try_except_handler_3;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_ThreadCreated;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 45;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_26;
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


exception_lineno = 45;

    goto try_except_handler_3;
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
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_11, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_3;
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


exception_lineno = 45;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_3;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 45;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 45;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_27;
}
branch_end_1:;
{
PyObject *tmp_assign_source_28;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadCreated;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_45;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_2 = MAKE_CLASS_FRAME(tstate, code_objects_8340d2d60d0685d2f73b30ec7ed8a705, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_2);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45, mod_consts.const_str_plain_Thread);

if (tmp_ass_subvalue_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_1 = module_var_accessor_openai$types$beta$assistant_stream_event$Thread(tstate);
if (unlikely(tmp_ass_subvalue_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Thread);
}

if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_ass_subvalue_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_ass_subscribed_1 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_1);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_expression_value_7 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_7 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_subscript_value_2 = mod_consts.const_str_digest_52bffdb7e10749a96a6948c006c1dbfa;
tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscribed_2 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_2);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45, mod_consts.const_str_plain_enabled, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_expression_value_8 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_8 = module_var_accessor_openai$types$beta$assistant_stream_event$Optional(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_subscript_value_3 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45, mod_consts.const_str_plain_bool);

if (tmp_subscript_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_3 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_subscript_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscribed_3 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_3);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_3);

exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_enabled;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_2);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
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


exception_lineno = 45;

    goto try_except_handler_5;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_ThreadCreated;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 45;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_29;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_28 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_28);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45);
locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45);
locals_openai$types$beta$assistant_stream_event$$$class__1_ThreadCreated_45 = NULL;
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
exception_lineno = 45;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadCreated, tmp_assign_source_28);
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
PyObject *tmp_assign_source_30;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto try_except_handler_6;
}
tmp_assign_source_30 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_30, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_31 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_9 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_4, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_33 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_33;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_ThreadRunCreated;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 58;
tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_34;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_12 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
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
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_13;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_12, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_14 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 58;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 58;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_35;
}
branch_end_4:;
{
PyObject *tmp_assign_source_36;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunCreated;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_58;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_3 = MAKE_CLASS_FRAME(tstate, code_objects_c345c3fb7fc5348c27d3d211f0196a81, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_3);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58, mod_consts.const_str_plain_Run);

if (tmp_ass_subvalue_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_4 = module_var_accessor_openai$types$beta$assistant_stream_event$Run(tstate);
if (unlikely(tmp_ass_subvalue_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Run);
}

if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_ass_subvalue_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_ass_subscribed_4 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_4);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_4);

exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_expression_value_15 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_15 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_subscript_value_5 = mod_consts.const_str_digest_4077fc0fd19c48b92e0d1fb1b231c42c;
tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_ass_subvalue_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscribed_5 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_5);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_5);

exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
CHECK_OBJECT(tmp_ass_subvalue_5);
Py_DECREF(tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_3);

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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
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


exception_lineno = 58;

    goto try_except_handler_8;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
branch_no_6:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_ThreadRunCreated;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 58;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_8;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_37;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_36 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_36);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58);
locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58);
locals_openai$types$beta$assistant_stream_event$$$class__2_ThreadRunCreated_58 = NULL;
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
exception_lineno = 58;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCreated, tmp_assign_source_36);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_38;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto try_except_handler_9;
}
tmp_assign_source_38 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_38, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_39 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_9;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_16 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_6, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_9;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_9;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_41 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_41;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_9;
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
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_9;
}
tmp_tuple_element_10 = mod_consts.const_str_plain_ThreadRunQueued;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 68;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_42;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_19 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_19, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_9;
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
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_20;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_20, tmp_name_value_13, tmp_default_value_3);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_9;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_21;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_21 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_9;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 68;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 68;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_43;
}
branch_end_7:;
{
PyObject *tmp_assign_source_44;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunQueued;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_68;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_11;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_11;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_4 = MAKE_CLASS_FRAME(tstate, code_objects_cbb5ff889b923ad3c7c58126d38672d9, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_4);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_4) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68, mod_consts.const_str_plain_Run);

if (tmp_ass_subvalue_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_6 = module_var_accessor_openai$types$beta$assistant_stream_event$Run(tstate);
if (unlikely(tmp_ass_subvalue_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Run);
}

if (tmp_ass_subvalue_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_ass_subvalue_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_ass_subscribed_6 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_6);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_6);

exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
CHECK_OBJECT(tmp_ass_subvalue_6);
Py_DECREF(tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_expression_value_22 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_22 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_expression_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_subscript_value_7 = mod_consts.const_str_digest_064f3e2ea52adc45a525c5bb2d6c29bb;
tmp_ass_subvalue_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_7);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_ass_subvalue_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscribed_7 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_7);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_7);

exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
CHECK_OBJECT(tmp_ass_subvalue_7);
Py_DECREF(tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_11;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_11;
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


exception_lineno = 68;

    goto try_except_handler_11;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_11;
}
branch_no_9:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_12 = mod_consts.const_str_plain_ThreadRunQueued;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 68;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_11;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_45;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_44 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_44);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68);
locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68);
locals_openai$types$beta$assistant_stream_event$$$class__3_ThreadRunQueued_68 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 68;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunQueued, tmp_assign_source_44);
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
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
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_46;
PyObject *tmp_tuple_element_13;
tmp_tuple_element_13 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;

    goto try_except_handler_12;
}
tmp_assign_source_46 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_46, 0, tmp_tuple_element_13);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_47 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_23 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_8, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_49 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_49;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
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
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
}
tmp_tuple_element_14 = mod_consts.const_str_plain_ThreadRunInProgress;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 78;
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_50;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_26 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
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
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_27;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_27, tmp_name_value_14, tmp_default_value_4);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_28;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_28 == NULL));
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 78;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 78;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_51;
}
branch_end_10:;
{
PyObject *tmp_assign_source_52;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunInProgress;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_78;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_14;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_14;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_5 = MAKE_CLASS_FRAME(tstate, code_objects_58d8afa8e1d2512bc8377024e5c22f8c, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_5);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_5) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78, mod_consts.const_str_plain_Run);

if (tmp_ass_subvalue_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_8 = module_var_accessor_openai$types$beta$assistant_stream_event$Run(tstate);
if (unlikely(tmp_ass_subvalue_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Run);
}

if (tmp_ass_subvalue_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_ass_subvalue_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_ass_subscribed_8 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_8);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_8);

exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
CHECK_OBJECT(tmp_ass_subvalue_8);
Py_DECREF(tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_expression_value_29 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_29 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_subscript_value_9 = mod_consts.const_str_digest_77b1acf89e6f311212075cbbedfa6181;
tmp_ass_subvalue_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_9);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_ass_subvalue_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscribed_9 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_9);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_9);

exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
CHECK_OBJECT(tmp_ass_subscribed_9);
Py_DECREF(tmp_ass_subscribed_9);
CHECK_OBJECT(tmp_ass_subvalue_9);
Py_DECREF(tmp_ass_subvalue_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_14;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_14;
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


exception_lineno = 78;

    goto try_except_handler_14;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_14;
}
branch_no_12:;
{
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_16 = mod_consts.const_str_plain_ThreadRunInProgress;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
tmp_tuple_element_16 = locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 78;
tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_14;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_53;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_52 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_52);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78);
locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78);
locals_openai$types$beta$assistant_stream_event$$$class__4_ThreadRunInProgress_78 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 78;
goto try_except_handler_12;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunInProgress, tmp_assign_source_52);
}
goto try_end_6;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
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
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
PyObject *tmp_assign_source_54;
PyObject *tmp_tuple_element_17;
tmp_tuple_element_17 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;

    goto try_except_handler_15;
}
tmp_assign_source_54 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_54, 0, tmp_tuple_element_17);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_55 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
tmp_assign_source_56 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_30 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_30, tmp_subscript_value_10, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_57 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_57;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_31 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_31, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
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
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_32;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
}
tmp_tuple_element_18 = mod_consts.const_str_plain_ThreadRunRequiresAction;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_18 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 88;
tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_58;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_33 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_33, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
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
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_34;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_34 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_19 = BUILTIN_GETATTR(tstate, tmp_expression_value_34, tmp_name_value_15, tmp_default_value_5);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_35;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_35 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_35 == NULL));
tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_19);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 88;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 88;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_15;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_59;
}
branch_end_13:;
{
PyObject *tmp_assign_source_60;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunRequiresAction;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_int_pos_88;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_17;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_17;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_6 = MAKE_CLASS_FRAME(tstate, code_objects_f3d36377e16cddf32577fcd428c80f99, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_6);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_6) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88, mod_consts.const_str_plain_Run);

if (tmp_ass_subvalue_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_10 = module_var_accessor_openai$types$beta$assistant_stream_event$Run(tstate);
if (unlikely(tmp_ass_subvalue_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Run);
}

if (tmp_ass_subvalue_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_ass_subvalue_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_ass_subscribed_10 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_10);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_10);

exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
CHECK_OBJECT(tmp_ass_subscribed_10);
Py_DECREF(tmp_ass_subscribed_10);
CHECK_OBJECT(tmp_ass_subvalue_10);
Py_DECREF(tmp_ass_subvalue_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_11;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_expression_value_36 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_36 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_36 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_expression_value_36);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_subscript_value_11 = mod_consts.const_str_digest_00fc71d99a53e6e8cf16254d1fcde7ae;
tmp_ass_subvalue_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_11);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_ass_subvalue_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscribed_11 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_11);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_11);

exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
CHECK_OBJECT(tmp_ass_subscribed_11);
Py_DECREF(tmp_ass_subscribed_11);
CHECK_OBJECT(tmp_ass_subvalue_11);
Py_DECREF(tmp_ass_subvalue_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_17;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_17;
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


exception_lineno = 88;

    goto try_except_handler_17;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_17;
}
branch_no_15:;
{
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_20 = mod_consts.const_str_plain_ThreadRunRequiresAction;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_20 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_20);
tmp_tuple_element_20 = locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 88;
tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_17;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_61;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_60 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_60);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88);
locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88);
locals_openai$types$beta$assistant_stream_event$$$class__5_ThreadRunRequiresAction_88 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 88;
goto try_except_handler_15;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunRequiresAction, tmp_assign_source_60);
}
goto try_end_7;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
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
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
PyObject *tmp_assign_source_62;
PyObject *tmp_tuple_element_21;
tmp_tuple_element_21 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;

    goto try_except_handler_18;
}
tmp_assign_source_62 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_62, 0, tmp_tuple_element_21);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_62;
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_63 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_63;
}
{
PyObject *tmp_assign_source_64;
tmp_assign_source_64 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_64;
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_12;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_18;
}
tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_37 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_12 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_12, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_18;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_18;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_65 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_65;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_38 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_18;
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
PyObject *tmp_assign_source_66;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_39;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_18;
}
tmp_tuple_element_22 = mod_consts.const_str_plain_ThreadRunCompleted;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 98;
tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_66;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_40;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_40 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_18;
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
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_41;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_41 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_23 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_16, tmp_default_value_6);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_18;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_42;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_42 == NULL));
tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_23);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_18;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 98;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 98;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_18;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_67;
tmp_assign_source_67 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_67;
}
branch_end_16:;
{
PyObject *tmp_assign_source_68;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunCompleted;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_int_pos_98;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_20;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_20;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_7 = MAKE_CLASS_FRAME(tstate, code_objects_815d3398375587f6d5866db70a53d809, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_7);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_7) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_ass_subscript_12;
tmp_ass_subvalue_12 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98, mod_consts.const_str_plain_Run);

if (tmp_ass_subvalue_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_12 = module_var_accessor_openai$types$beta$assistant_stream_event$Run(tstate);
if (unlikely(tmp_ass_subvalue_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Run);
}

if (tmp_ass_subvalue_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
        Py_INCREF(tmp_ass_subvalue_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_ass_subscribed_12 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_12);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_12);

exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_12 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
CHECK_OBJECT(tmp_ass_subscribed_12);
Py_DECREF(tmp_ass_subscribed_12);
CHECK_OBJECT(tmp_ass_subvalue_12);
Py_DECREF(tmp_ass_subvalue_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_ass_subvalue_13;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_13;
PyObject *tmp_ass_subscribed_13;
PyObject *tmp_ass_subscript_13;
tmp_expression_value_43 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_43 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_43 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
        Py_INCREF(tmp_expression_value_43);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_subscript_value_13 = mod_consts.const_str_digest_1520470f150ec41cd481edefacf606ca;
tmp_ass_subvalue_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_13);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_ass_subvalue_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscribed_13 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_13);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_13);

exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_13 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
CHECK_OBJECT(tmp_ass_subscribed_13);
Py_DECREF(tmp_ass_subscribed_13);
CHECK_OBJECT(tmp_ass_subvalue_13);
Py_DECREF(tmp_ass_subvalue_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_7:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_20;
skip_nested_handling_6:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_20;
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


exception_lineno = 98;

    goto try_except_handler_20;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_20;
}
branch_no_18:;
{
PyObject *tmp_assign_source_69;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_24;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_12 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_24 = mod_consts.const_str_plain_ThreadRunCompleted;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_24 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_24);
tmp_tuple_element_24 = locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 98;
tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_20;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_69;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_68 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_68);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98);
locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98 = NULL;
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98);
locals_openai$types$beta$assistant_stream_event$$$class__6_ThreadRunCompleted_98 = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_19;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 98;
goto try_except_handler_18;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCompleted, tmp_assign_source_68);
}
goto try_end_8;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
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
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
PyObject *tmp_assign_source_70;
PyObject *tmp_tuple_element_25;
tmp_tuple_element_25 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;

    goto try_except_handler_21;
}
tmp_assign_source_70 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_70, 0, tmp_tuple_element_25);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_70;
}
{
PyObject *tmp_assign_source_71;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_71 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_71;
}
{
PyObject *tmp_assign_source_72;
tmp_assign_source_72 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_72;
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_14;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_21;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_44 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_14 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_44, tmp_subscript_value_14, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_21;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_21;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_73 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_73;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_45;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_21;
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
PyObject *tmp_assign_source_74;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_46;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_26;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_46 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_21;
}
tmp_tuple_element_26 = mod_consts.const_str_plain_ThreadRunIncomplete;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_26 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 108;
tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_74;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_47;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_47 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_47, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_21;
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
PyObject *tmp_tuple_element_27;
PyObject *tmp_expression_value_48;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_48 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_27 = BUILTIN_GETATTR(tstate, tmp_expression_value_48, tmp_name_value_17, tmp_default_value_7);
if (tmp_tuple_element_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_21;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_49;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_49 == NULL));
tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_tuple_element_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_27);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_21;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_21;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 108;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 108;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_21;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_75;
tmp_assign_source_75 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_75;
}
branch_end_19:;
{
PyObject *tmp_assign_source_76;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunIncomplete;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_int_pos_108;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_23;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_23;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_8 = MAKE_CLASS_FRAME(tstate, code_objects_0a5963f1c76f74a8647e87d27f19a780, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_8);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_8) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_14;
PyObject *tmp_ass_subscribed_14;
PyObject *tmp_ass_subscript_14;
tmp_ass_subvalue_14 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108, mod_consts.const_str_plain_Run);

if (tmp_ass_subvalue_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_14 = module_var_accessor_openai$types$beta$assistant_stream_event$Run(tstate);
if (unlikely(tmp_ass_subvalue_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Run);
}

if (tmp_ass_subvalue_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_ass_subvalue_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_ass_subscribed_14 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_14);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 109;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_14);

exception_lineno = 109;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_14 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
CHECK_OBJECT(tmp_ass_subscribed_14);
Py_DECREF(tmp_ass_subscribed_14);
CHECK_OBJECT(tmp_ass_subvalue_14);
Py_DECREF(tmp_ass_subvalue_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_ass_subvalue_15;
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_15;
PyObject *tmp_ass_subscribed_15;
PyObject *tmp_ass_subscript_15;
tmp_expression_value_50 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_50 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_50 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_50);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_subscript_value_15 = mod_consts.const_str_digest_3c7b8c1c3ef920e9d817482cce246959;
tmp_ass_subvalue_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_15);
CHECK_OBJECT(tmp_expression_value_50);
Py_DECREF(tmp_expression_value_50);
if (tmp_ass_subvalue_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscribed_15 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_15);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_15);

exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_15 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
CHECK_OBJECT(tmp_ass_subscribed_15);
Py_DECREF(tmp_ass_subscribed_15);
CHECK_OBJECT(tmp_ass_subvalue_15);
Py_DECREF(tmp_ass_subvalue_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_8:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_8,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_23;
skip_nested_handling_7:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_23;
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


exception_lineno = 108;

    goto try_except_handler_23;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_23;
}
branch_no_21:;
{
PyObject *tmp_assign_source_77;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_28;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_14 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_28 = mod_consts.const_str_plain_ThreadRunIncomplete;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_28 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_28);
tmp_tuple_element_28 = locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 108;
tmp_assign_source_77 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_23;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_77;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_76 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_76);
goto try_return_handler_23;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108);
locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108 = NULL;
goto try_return_handler_22;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108);
locals_openai$types$beta$assistant_stream_event$$$class__7_ThreadRunIncomplete_108 = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_22;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 108;
goto try_except_handler_21;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunIncomplete, tmp_assign_source_76);
}
goto try_end_9;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
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
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
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
PyObject *tmp_assign_source_78;
PyObject *tmp_tuple_element_29;
tmp_tuple_element_29 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;

    goto try_except_handler_24;
}
tmp_assign_source_78 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_78, 0, tmp_tuple_element_29);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_78;
}
{
PyObject *tmp_assign_source_79;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_79 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_79;
}
{
PyObject *tmp_assign_source_80;
tmp_assign_source_80 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_80;
}
{
PyObject *tmp_assign_source_81;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_51;
PyObject *tmp_subscript_value_16;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_24;
}
tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_51 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_16 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_51, tmp_subscript_value_16, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_24;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_24;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_81 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_81;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_52;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_52 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_24;
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
PyObject *tmp_assign_source_82;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_53;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_30;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_53 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_24;
}
tmp_tuple_element_30 = mod_consts.const_str_plain_ThreadRunFailed;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_30 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 118;
tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_82;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_54;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_54 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_24;
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
PyObject *tmp_tuple_element_31;
PyObject *tmp_expression_value_55;
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_55 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_31 = BUILTIN_GETATTR(tstate, tmp_expression_value_55, tmp_name_value_18, tmp_default_value_8);
if (tmp_tuple_element_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_24;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_56;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_56 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_56 == NULL));
tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_56);
Py_DECREF(tmp_expression_value_56);
if (tmp_tuple_element_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_31);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_24;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_24;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 118;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 118;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_24;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_83;
tmp_assign_source_83 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_83;
}
branch_end_22:;
{
PyObject *tmp_assign_source_84;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunFailed;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_int_pos_118;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_26;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_26;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_9 = MAKE_CLASS_FRAME(tstate, code_objects_ee57805f2ed6cb45e996406dc239d1f0, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_9);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_9) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_16;
PyObject *tmp_ass_subscribed_16;
PyObject *tmp_ass_subscript_16;
tmp_ass_subvalue_16 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118, mod_consts.const_str_plain_Run);

if (tmp_ass_subvalue_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_16 = module_var_accessor_openai$types$beta$assistant_stream_event$Run(tstate);
if (unlikely(tmp_ass_subvalue_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Run);
}

if (tmp_ass_subvalue_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_ass_subvalue_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_ass_subscribed_16 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_16);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_16);

exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_16 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
CHECK_OBJECT(tmp_ass_subscribed_16);
Py_DECREF(tmp_ass_subscribed_16);
CHECK_OBJECT(tmp_ass_subvalue_16);
Py_DECREF(tmp_ass_subvalue_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
{
PyObject *tmp_ass_subvalue_17;
PyObject *tmp_expression_value_57;
PyObject *tmp_subscript_value_17;
PyObject *tmp_ass_subscribed_17;
PyObject *tmp_ass_subscript_17;
tmp_expression_value_57 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_57 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_57 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_57);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_subscript_value_17 = mod_consts.const_str_digest_9ea06953515e7a65f03c3064b9a3b052;
tmp_ass_subvalue_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_17);
CHECK_OBJECT(tmp_expression_value_57);
Py_DECREF(tmp_expression_value_57);
if (tmp_ass_subvalue_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscribed_17 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_17);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_17);

exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_17 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
CHECK_OBJECT(tmp_ass_subscribed_17);
Py_DECREF(tmp_ass_subscribed_17);
CHECK_OBJECT(tmp_ass_subvalue_17);
Py_DECREF(tmp_ass_subvalue_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_8;
frame_exception_exit_9:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_9,
    type_description_2,
    outline_7_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_9);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_26;
skip_nested_handling_8:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_26;
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


exception_lineno = 118;

    goto try_except_handler_26;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_26;
}
branch_no_24:;
{
PyObject *tmp_assign_source_85;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_32;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_32 = mod_consts.const_str_plain_ThreadRunFailed;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_32 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_32);
tmp_tuple_element_32 = locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 118;
tmp_assign_source_85 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_26;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_85;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_84 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_84);
goto try_return_handler_26;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118);
locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118 = NULL;
goto try_return_handler_25;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118);
locals_openai$types$beta$assistant_stream_event$$$class__8_ThreadRunFailed_118 = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto try_except_handler_25;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_25:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 118;
goto try_except_handler_24;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunFailed, tmp_assign_source_84);
}
goto try_end_10;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
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
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
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
PyObject *tmp_assign_source_86;
PyObject *tmp_tuple_element_33;
tmp_tuple_element_33 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto try_except_handler_27;
}
tmp_assign_source_86 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_86, 0, tmp_tuple_element_33);
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_86;
}
{
PyObject *tmp_assign_source_87;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_87 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_87;
}
{
PyObject *tmp_assign_source_88;
tmp_assign_source_88 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_88;
}
{
PyObject *tmp_assign_source_89;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_58;
PyObject *tmp_subscript_value_18;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_27;
}
tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_58 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_18 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_58, tmp_subscript_value_18, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_27;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_27;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_89 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_89;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_59;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_59 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_59, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_27;
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
PyObject *tmp_assign_source_90;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_60;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_34;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_60 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_27;
}
tmp_tuple_element_34 = mod_consts.const_str_plain_ThreadRunCancelling;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_34 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 128;
tmp_assign_source_90 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_90;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_61;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_61 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_61, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_27;
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
PyObject *tmp_tuple_element_35;
PyObject *tmp_expression_value_62;
PyObject *tmp_name_value_19;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_62 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_19 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_35 = BUILTIN_GETATTR(tstate, tmp_expression_value_62, tmp_name_value_19, tmp_default_value_9);
if (tmp_tuple_element_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_27;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_63;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_63 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_63 == NULL));
tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_63);
Py_DECREF(tmp_expression_value_63);
if (tmp_tuple_element_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_35);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_27;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_27;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 128;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 128;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_27;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_91;
tmp_assign_source_91 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_91;
}
branch_end_25:;
{
PyObject *tmp_assign_source_92;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunCancelling;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_int_pos_128;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_29;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_29;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_10 = MAKE_CLASS_FRAME(tstate, code_objects_03cab78acef4660b9cf260b90a24c003, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_10);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_10) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_18;
PyObject *tmp_ass_subscribed_18;
PyObject *tmp_ass_subscript_18;
tmp_ass_subvalue_18 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128, mod_consts.const_str_plain_Run);

if (tmp_ass_subvalue_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_18 = module_var_accessor_openai$types$beta$assistant_stream_event$Run(tstate);
if (unlikely(tmp_ass_subvalue_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Run);
}

if (tmp_ass_subvalue_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
        Py_INCREF(tmp_ass_subvalue_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}

tmp_ass_subscribed_18 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_18);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_subscribed_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_18);

exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscript_18 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
CHECK_OBJECT(tmp_ass_subscribed_18);
Py_DECREF(tmp_ass_subscribed_18);
CHECK_OBJECT(tmp_ass_subvalue_18);
Py_DECREF(tmp_ass_subvalue_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_ass_subvalue_19;
PyObject *tmp_expression_value_64;
PyObject *tmp_subscript_value_19;
PyObject *tmp_ass_subscribed_19;
PyObject *tmp_ass_subscript_19;
tmp_expression_value_64 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_64 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_64 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
        Py_INCREF(tmp_expression_value_64);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}

tmp_subscript_value_19 = mod_consts.const_str_digest_7a05dfcff22b8ade7806035dd84bb48c;
tmp_ass_subvalue_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_19);
CHECK_OBJECT(tmp_expression_value_64);
Py_DECREF(tmp_expression_value_64);
if (tmp_ass_subvalue_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscribed_19 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_19);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_subscribed_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_19);

exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscript_19 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
CHECK_OBJECT(tmp_ass_subscribed_19);
Py_DECREF(tmp_ass_subscribed_19);
CHECK_OBJECT(tmp_ass_subvalue_19);
Py_DECREF(tmp_ass_subvalue_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_9;
frame_exception_exit_10:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_10,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_10);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_29;
skip_nested_handling_9:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_29;
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


exception_lineno = 128;

    goto try_except_handler_29;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_29;
}
branch_no_27:;
{
PyObject *tmp_assign_source_93;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_36;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_18 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_36 = mod_consts.const_str_plain_ThreadRunCancelling;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_36 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_36);
tmp_tuple_element_36 = locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128;
PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 128;
tmp_assign_source_93 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_29;
}
assert(outline_8_var___class__ == NULL);
outline_8_var___class__ = tmp_assign_source_93;
}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_92 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_92);
goto try_return_handler_29;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128);
locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128 = NULL;
goto try_return_handler_28;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128);
locals_openai$types$beta$assistant_stream_event$$$class__9_ThreadRunCancelling_128 = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto try_except_handler_28;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_28:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 128;
goto try_except_handler_27;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCancelling, tmp_assign_source_92);
}
goto try_end_11;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
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
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
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
PyObject *tmp_assign_source_94;
PyObject *tmp_tuple_element_37;
tmp_tuple_element_37 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;

    goto try_except_handler_30;
}
tmp_assign_source_94 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_94, 0, tmp_tuple_element_37);
assert(tmp_class_container$class_creation_10__bases_orig == NULL);
tmp_class_container$class_creation_10__bases_orig = tmp_assign_source_94;
}
{
PyObject *tmp_assign_source_95;
PyObject *tmp_direct_call_arg1_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_direct_call_arg1_10 = tmp_class_container$class_creation_10__bases_orig;
Py_INCREF(tmp_direct_call_arg1_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10};
    tmp_assign_source_95 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__bases == NULL);
tmp_class_container$class_creation_10__bases = tmp_assign_source_95;
}
{
PyObject *tmp_assign_source_96;
tmp_assign_source_96 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__class_decl_dict == NULL);
tmp_class_container$class_creation_10__class_decl_dict = tmp_assign_source_96;
}
{
PyObject *tmp_assign_source_97;
PyObject *tmp_metaclass_value_10;
nuitka_bool tmp_condition_result_37;
int tmp_truth_name_10;
PyObject *tmp_type_arg_19;
PyObject *tmp_expression_value_65;
PyObject *tmp_subscript_value_20;
PyObject *tmp_bases_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_container$class_creation_10__bases);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_30;
}
tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_expression_value_65 = tmp_class_container$class_creation_10__bases;
tmp_subscript_value_20 = const_int_0;
tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_65, tmp_subscript_value_20, 0);
if (tmp_type_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_30;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_30;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_10);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_10__bases;
tmp_assign_source_97 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
CHECK_OBJECT(tmp_metaclass_value_10);
Py_DECREF(tmp_metaclass_value_10);
if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__metaclass == NULL);
tmp_class_container$class_creation_10__metaclass = tmp_assign_source_97;
}
{
bool tmp_condition_result_38;
PyObject *tmp_expression_value_66;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_66 = tmp_class_container$class_creation_10__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_66, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_30;
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
PyObject *tmp_assign_source_98;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_67;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_38;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_67 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_30;
}
tmp_tuple_element_38 = mod_consts.const_str_plain_ThreadRunCancelled;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_38 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 138;
tmp_assign_source_98 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_98;
}
{
bool tmp_condition_result_39;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_68;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_expression_value_68 = tmp_class_container$class_creation_10__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_68, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_30;
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
PyObject *tmp_tuple_element_39;
PyObject *tmp_expression_value_69;
PyObject *tmp_name_value_20;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_69 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_20 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_39 = BUILTIN_GETATTR(tstate, tmp_expression_value_69, tmp_name_value_20, tmp_default_value_10);
if (tmp_tuple_element_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_30;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_70;
PyObject *tmp_type_arg_20;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_type_arg_20 = tmp_class_container$class_creation_10__prepared;
tmp_expression_value_70 = BUILTIN_TYPE1(tmp_type_arg_20);
assert(!(tmp_expression_value_70 == NULL));
tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_70);
Py_DECREF(tmp_expression_value_70);
if (tmp_tuple_element_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_39);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_30;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_30;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 138;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 138;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_30;
}
branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_99;
tmp_assign_source_99 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_99;
}
branch_end_28:;
{
PyObject *tmp_assign_source_100;
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_10__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunCancelled;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_int_pos_138;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_32;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_32;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_11 = MAKE_CLASS_FRAME(tstate, code_objects_c2888eac794eccc152fb48efd085aa61, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_11);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_11) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_20;
PyObject *tmp_ass_subscribed_20;
PyObject *tmp_ass_subscript_20;
tmp_ass_subvalue_20 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138, mod_consts.const_str_plain_Run);

if (tmp_ass_subvalue_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_20 = module_var_accessor_openai$types$beta$assistant_stream_event$Run(tstate);
if (unlikely(tmp_ass_subvalue_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Run);
}

if (tmp_ass_subvalue_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
        Py_INCREF(tmp_ass_subvalue_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_11;
    }
}

tmp_ass_subscribed_20 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_20);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_11;
}

if (tmp_ass_subscribed_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_20);

exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_ass_subscript_20 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
CHECK_OBJECT(tmp_ass_subscribed_20);
Py_DECREF(tmp_ass_subscribed_20);
CHECK_OBJECT(tmp_ass_subvalue_20);
Py_DECREF(tmp_ass_subvalue_20);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
}
{
PyObject *tmp_ass_subvalue_21;
PyObject *tmp_expression_value_71;
PyObject *tmp_subscript_value_21;
PyObject *tmp_ass_subscribed_21;
PyObject *tmp_ass_subscript_21;
tmp_expression_value_71 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_71 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_71 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_71 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_71 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
        Py_INCREF(tmp_expression_value_71);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_11;
    }
}

tmp_subscript_value_21 = mod_consts.const_str_digest_5f29fdaec26df2e97d6fce1ca9030b45;
tmp_ass_subvalue_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_71, tmp_subscript_value_21);
CHECK_OBJECT(tmp_expression_value_71);
Py_DECREF(tmp_expression_value_71);
if (tmp_ass_subvalue_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_ass_subscribed_21 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_21);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_11;
}

if (tmp_ass_subscribed_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_21);

exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_ass_subscript_21 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
CHECK_OBJECT(tmp_ass_subscribed_21);
Py_DECREF(tmp_ass_subscribed_21);
CHECK_OBJECT(tmp_ass_subvalue_21);
Py_DECREF(tmp_ass_subvalue_21);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_10;
frame_exception_exit_11:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_11,
    type_description_2,
    outline_9_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_11);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_10;
frame_no_exception_10:;
goto skip_nested_handling_10;
nested_frame_exit_10:;

goto try_except_handler_32;
skip_nested_handling_10:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_32;
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


exception_lineno = 138;

    goto try_except_handler_32;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_32;
}
branch_no_30:;
{
PyObject *tmp_assign_source_101;
PyObject *tmp_called_value_20;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_40;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_called_value_20 = tmp_class_container$class_creation_10__metaclass;
tmp_tuple_element_40 = mod_consts.const_str_plain_ThreadRunCancelled;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_40 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_40);
tmp_tuple_element_40 = locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138;
PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_20 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 138;
tmp_assign_source_101 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_32;
}
assert(outline_9_var___class__ == NULL);
outline_9_var___class__ = tmp_assign_source_101;
}
CHECK_OBJECT(outline_9_var___class__);
tmp_assign_source_100 = outline_9_var___class__;
Py_INCREF(tmp_assign_source_100);
goto try_return_handler_32;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_32:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138);
locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138 = NULL;
goto try_return_handler_31;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138);
locals_openai$types$beta$assistant_stream_event$$$class__10_ThreadRunCancelled_138 = NULL;
// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto try_except_handler_31;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_31:;
CHECK_OBJECT(outline_9_var___class__);
CHECK_OBJECT(outline_9_var___class__);
Py_DECREF(outline_9_var___class__);
outline_9_var___class__ = NULL;
goto outline_result_20;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto outline_exception_10;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_10:;
exception_lineno = 138;
goto try_except_handler_30;
outline_result_20:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunCancelled, tmp_assign_source_100);
}
goto try_end_12;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
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
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
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
PyObject *tmp_assign_source_102;
PyObject *tmp_tuple_element_41;
tmp_tuple_element_41 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;

    goto try_except_handler_33;
}
tmp_assign_source_102 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_102, 0, tmp_tuple_element_41);
assert(tmp_class_container$class_creation_11__bases_orig == NULL);
tmp_class_container$class_creation_11__bases_orig = tmp_assign_source_102;
}
{
PyObject *tmp_assign_source_103;
PyObject *tmp_direct_call_arg1_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_direct_call_arg1_11 = tmp_class_container$class_creation_11__bases_orig;
Py_INCREF(tmp_direct_call_arg1_11);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_11};
    tmp_assign_source_103 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__bases == NULL);
tmp_class_container$class_creation_11__bases = tmp_assign_source_103;
}
{
PyObject *tmp_assign_source_104;
tmp_assign_source_104 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__class_decl_dict == NULL);
tmp_class_container$class_creation_11__class_decl_dict = tmp_assign_source_104;
}
{
PyObject *tmp_assign_source_105;
PyObject *tmp_metaclass_value_11;
nuitka_bool tmp_condition_result_41;
int tmp_truth_name_11;
PyObject *tmp_type_arg_21;
PyObject *tmp_expression_value_72;
PyObject *tmp_subscript_value_22;
PyObject *tmp_bases_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_container$class_creation_11__bases);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_33;
}
tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_11;
} else {
    goto condexpr_false_11;
}
condexpr_true_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_expression_value_72 = tmp_class_container$class_creation_11__bases;
tmp_subscript_value_22 = const_int_0;
tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_72, tmp_subscript_value_22, 0);
if (tmp_type_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_33;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
CHECK_OBJECT(tmp_type_arg_21);
Py_DECREF(tmp_type_arg_21);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_33;
}
goto condexpr_end_11;
condexpr_false_11:;
tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_11);
condexpr_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_11__bases;
tmp_assign_source_105 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
CHECK_OBJECT(tmp_metaclass_value_11);
Py_DECREF(tmp_metaclass_value_11);
if (tmp_assign_source_105 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__metaclass == NULL);
tmp_class_container$class_creation_11__metaclass = tmp_assign_source_105;
}
{
bool tmp_condition_result_42;
PyObject *tmp_expression_value_73;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_73 = tmp_class_container$class_creation_11__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_73, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_33;
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
PyObject *tmp_assign_source_106;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_74;
PyObject *tmp_args_value_21;
PyObject *tmp_tuple_element_42;
PyObject *tmp_kwargs_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_74 = tmp_class_container$class_creation_11__metaclass;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_33;
}
tmp_tuple_element_42 = mod_consts.const_str_plain_ThreadRunExpired;
tmp_args_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_42 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_21 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 148;
tmp_assign_source_106 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_21, tmp_kwargs_value_21);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_value_21);
Py_DECREF(tmp_args_value_21);
if (tmp_assign_source_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_106;
}
{
bool tmp_condition_result_43;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_75;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_expression_value_75 = tmp_class_container$class_creation_11__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_75, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_33;
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
PyObject *tmp_tuple_element_43;
PyObject *tmp_expression_value_76;
PyObject *tmp_name_value_21;
PyObject *tmp_default_value_11;
tmp_mod_expr_left_11 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_76 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_21 = const_str_plain___name__;
tmp_default_value_11 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_43 = BUILTIN_GETATTR(tstate, tmp_expression_value_76, tmp_name_value_21, tmp_default_value_11);
if (tmp_tuple_element_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_33;
}
tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_77;
PyObject *tmp_type_arg_22;
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_type_arg_22 = tmp_class_container$class_creation_11__prepared;
tmp_expression_value_77 = BUILTIN_TYPE1(tmp_type_arg_22);
assert(!(tmp_expression_value_77 == NULL));
tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_77);
Py_DECREF(tmp_expression_value_77);
if (tmp_tuple_element_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_43);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_11);
goto try_except_handler_33;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
CHECK_OBJECT(tmp_mod_expr_right_11);
Py_DECREF(tmp_mod_expr_right_11);
if (tmp_make_exception_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_33;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 148;
tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_11);
CHECK_OBJECT(tmp_make_exception_arg_11);
Py_DECREF(tmp_make_exception_arg_11);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 148;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_33;
}
branch_no_32:;
goto branch_end_31;
branch_no_31:;
{
PyObject *tmp_assign_source_107;
tmp_assign_source_107 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_107;
}
branch_end_31:;
{
PyObject *tmp_assign_source_108;
{
PyObject *tmp_set_locals_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_set_locals_11 = tmp_class_container$class_creation_11__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148 = tmp_set_locals_11;
Py_INCREF(tmp_set_locals_11);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_35;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunExpired;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_35;
}
tmp_dictset_value = mod_consts.const_int_pos_148;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_35;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_35;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_12 = MAKE_CLASS_FRAME(tstate, code_objects_bbd6299cf9f2e267f5ef263ea999ae0e, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_12);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_12) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_22;
PyObject *tmp_ass_subscribed_22;
PyObject *tmp_ass_subscript_22;
tmp_ass_subvalue_22 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148, mod_consts.const_str_plain_Run);

if (tmp_ass_subvalue_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_22 = module_var_accessor_openai$types$beta$assistant_stream_event$Run(tstate);
if (unlikely(tmp_ass_subvalue_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Run);
}

if (tmp_ass_subvalue_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
        Py_INCREF(tmp_ass_subvalue_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_ass_subscribed_22 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_22);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_12;
}

if (tmp_ass_subscribed_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_22);

exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_ass_subscript_22 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
CHECK_OBJECT(tmp_ass_subscribed_22);
Py_DECREF(tmp_ass_subscribed_22);
CHECK_OBJECT(tmp_ass_subvalue_22);
Py_DECREF(tmp_ass_subvalue_22);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
}
{
PyObject *tmp_ass_subvalue_23;
PyObject *tmp_expression_value_78;
PyObject *tmp_subscript_value_23;
PyObject *tmp_ass_subscribed_23;
PyObject *tmp_ass_subscript_23;
tmp_expression_value_78 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_78 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_78 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_78 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_78 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
        Py_INCREF(tmp_expression_value_78);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_subscript_value_23 = mod_consts.const_str_digest_127ef2d2434418972278709118847d7e;
tmp_ass_subvalue_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_23);
CHECK_OBJECT(tmp_expression_value_78);
Py_DECREF(tmp_expression_value_78);
if (tmp_ass_subvalue_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_ass_subscribed_23 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_23);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_12;
}

if (tmp_ass_subscribed_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_23);

exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_ass_subscript_23 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
CHECK_OBJECT(tmp_ass_subscribed_23);
Py_DECREF(tmp_ass_subscribed_23);
CHECK_OBJECT(tmp_ass_subvalue_23);
Py_DECREF(tmp_ass_subvalue_23);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_11;
frame_exception_exit_12:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_12,
    type_description_2,
    outline_10_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_12);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_11;
frame_no_exception_11:;
goto skip_nested_handling_11;
nested_frame_exit_11:;

goto try_except_handler_35;
skip_nested_handling_11:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_35;
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


exception_lineno = 148;

    goto try_except_handler_35;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_35;
}
branch_no_33:;
{
PyObject *tmp_assign_source_109;
PyObject *tmp_called_value_22;
PyObject *tmp_args_value_22;
PyObject *tmp_tuple_element_44;
PyObject *tmp_kwargs_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_called_value_22 = tmp_class_container$class_creation_11__metaclass;
tmp_tuple_element_44 = mod_consts.const_str_plain_ThreadRunExpired;
tmp_args_value_22 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_44 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_44);
tmp_tuple_element_44 = locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148;
PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_22 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 148;
tmp_assign_source_109 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_22, tmp_kwargs_value_22);
CHECK_OBJECT(tmp_args_value_22);
Py_DECREF(tmp_args_value_22);
if (tmp_assign_source_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_35;
}
assert(outline_10_var___class__ == NULL);
outline_10_var___class__ = tmp_assign_source_109;
}
CHECK_OBJECT(outline_10_var___class__);
tmp_assign_source_108 = outline_10_var___class__;
Py_INCREF(tmp_assign_source_108);
goto try_return_handler_35;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_35:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148);
locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148 = NULL;
goto try_return_handler_34;
// Exception handler code:
try_except_handler_35:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148);
locals_openai$types$beta$assistant_stream_event$$$class__11_ThreadRunExpired_148 = NULL;
// Re-raise.
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto try_except_handler_34;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_34:;
CHECK_OBJECT(outline_10_var___class__);
CHECK_OBJECT(outline_10_var___class__);
Py_DECREF(outline_10_var___class__);
outline_10_var___class__ = NULL;
goto outline_result_22;
// Exception handler code:
try_except_handler_34:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_34;
exception_lineno = exception_keeper_lineno_34;

goto outline_exception_11;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_11:;
exception_lineno = 148;
goto try_except_handler_33;
outline_result_22:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunExpired, tmp_assign_source_108);
}
goto try_end_13;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_35 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_35 = exception_state;
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
exception_state = exception_keeper_name_35;
exception_lineno = exception_keeper_lineno_35;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
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
PyObject *tmp_assign_source_110;
PyObject *tmp_tuple_element_45;
tmp_tuple_element_45 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;

    goto try_except_handler_36;
}
tmp_assign_source_110 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_110, 0, tmp_tuple_element_45);
assert(tmp_class_container$class_creation_12__bases_orig == NULL);
tmp_class_container$class_creation_12__bases_orig = tmp_assign_source_110;
}
{
PyObject *tmp_assign_source_111;
PyObject *tmp_direct_call_arg1_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_direct_call_arg1_12 = tmp_class_container$class_creation_12__bases_orig;
Py_INCREF(tmp_direct_call_arg1_12);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_12};
    tmp_assign_source_111 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_111 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_36;
}
assert(tmp_class_container$class_creation_12__bases == NULL);
tmp_class_container$class_creation_12__bases = tmp_assign_source_111;
}
{
PyObject *tmp_assign_source_112;
tmp_assign_source_112 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__class_decl_dict == NULL);
tmp_class_container$class_creation_12__class_decl_dict = tmp_assign_source_112;
}
{
PyObject *tmp_assign_source_113;
PyObject *tmp_metaclass_value_12;
nuitka_bool tmp_condition_result_45;
int tmp_truth_name_12;
PyObject *tmp_type_arg_23;
PyObject *tmp_expression_value_79;
PyObject *tmp_subscript_value_24;
PyObject *tmp_bases_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_container$class_creation_12__bases);
if (tmp_truth_name_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_36;
}
tmp_condition_result_45 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_12;
} else {
    goto condexpr_false_12;
}
condexpr_true_12:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_expression_value_79 = tmp_class_container$class_creation_12__bases;
tmp_subscript_value_24 = const_int_0;
tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_79, tmp_subscript_value_24, 0);
if (tmp_type_arg_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_36;
}
tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
CHECK_OBJECT(tmp_type_arg_23);
Py_DECREF(tmp_type_arg_23);
if (tmp_metaclass_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_36;
}
goto condexpr_end_12;
condexpr_false_12:;
tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_12);
condexpr_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_bases_value_12 = tmp_class_container$class_creation_12__bases;
tmp_assign_source_113 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
CHECK_OBJECT(tmp_metaclass_value_12);
Py_DECREF(tmp_metaclass_value_12);
if (tmp_assign_source_113 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_36;
}
assert(tmp_class_container$class_creation_12__metaclass == NULL);
tmp_class_container$class_creation_12__metaclass = tmp_assign_source_113;
}
{
bool tmp_condition_result_46;
PyObject *tmp_expression_value_80;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_80 = tmp_class_container$class_creation_12__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_80, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_36;
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
PyObject *tmp_assign_source_114;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_81;
PyObject *tmp_args_value_23;
PyObject *tmp_tuple_element_46;
PyObject *tmp_kwargs_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_81 = tmp_class_container$class_creation_12__metaclass;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_36;
}
tmp_tuple_element_46 = mod_consts.const_str_plain_ThreadRunStepCreated;
tmp_args_value_23 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_46 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_23 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 158;
tmp_assign_source_114 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_23, tmp_kwargs_value_23);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_value_23);
Py_DECREF(tmp_args_value_23);
if (tmp_assign_source_114 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_36;
}
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_114;
}
{
bool tmp_condition_result_47;
PyObject *tmp_operand_value_12;
PyObject *tmp_expression_value_82;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_expression_value_82 = tmp_class_container$class_creation_12__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_82, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_36;
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
PyObject *tmp_tuple_element_47;
PyObject *tmp_expression_value_83;
PyObject *tmp_name_value_22;
PyObject *tmp_default_value_12;
tmp_mod_expr_left_12 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_83 = tmp_class_container$class_creation_12__metaclass;
tmp_name_value_22 = const_str_plain___name__;
tmp_default_value_12 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_47 = BUILTIN_GETATTR(tstate, tmp_expression_value_83, tmp_name_value_22, tmp_default_value_12);
if (tmp_tuple_element_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_36;
}
tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_84;
PyObject *tmp_type_arg_24;
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_type_arg_24 = tmp_class_container$class_creation_12__prepared;
tmp_expression_value_84 = BUILTIN_TYPE1(tmp_type_arg_24);
assert(!(tmp_expression_value_84 == NULL));
tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_84);
Py_DECREF(tmp_expression_value_84);
if (tmp_tuple_element_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_47);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_mod_expr_right_12);
goto try_except_handler_36;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_make_exception_arg_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
CHECK_OBJECT(tmp_mod_expr_right_12);
Py_DECREF(tmp_mod_expr_right_12);
if (tmp_make_exception_arg_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_36;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 158;
tmp_raise_type_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_12);
CHECK_OBJECT(tmp_make_exception_arg_12);
Py_DECREF(tmp_make_exception_arg_12);
assert(!(tmp_raise_type_12 == NULL));
exception_state.exception_value = tmp_raise_type_12;
exception_lineno = 158;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_36;
}
branch_no_35:;
goto branch_end_34;
branch_no_34:;
{
PyObject *tmp_assign_source_115;
tmp_assign_source_115 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_115;
}
branch_end_34:;
{
PyObject *tmp_assign_source_116;
{
PyObject *tmp_set_locals_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_set_locals_12 = tmp_class_container$class_creation_12__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158 = tmp_set_locals_12;
Py_INCREF(tmp_set_locals_12);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_38;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunStepCreated;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_38;
}
tmp_dictset_value = mod_consts.const_int_pos_158;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_38;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_38;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_13 = MAKE_CLASS_FRAME(tstate, code_objects_c9c99d68817adce774236e18599741c3, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_13);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_13) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_24;
PyObject *tmp_ass_subscribed_24;
PyObject *tmp_ass_subscript_24;
tmp_ass_subvalue_24 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158, mod_consts.const_str_plain_RunStep);

if (tmp_ass_subvalue_24 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_24 = module_var_accessor_openai$types$beta$assistant_stream_event$RunStep(tstate);
if (unlikely(tmp_ass_subvalue_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RunStep);
}

if (tmp_ass_subvalue_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_ass_subvalue_24);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_ass_subscribed_24 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_24);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_13;
}

if (tmp_ass_subscribed_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_24);

exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscript_24 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
CHECK_OBJECT(tmp_ass_subscribed_24);
Py_DECREF(tmp_ass_subscribed_24);
CHECK_OBJECT(tmp_ass_subvalue_24);
Py_DECREF(tmp_ass_subvalue_24);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}
{
PyObject *tmp_ass_subvalue_25;
PyObject *tmp_expression_value_85;
PyObject *tmp_subscript_value_25;
PyObject *tmp_ass_subscribed_25;
PyObject *tmp_ass_subscript_25;
tmp_expression_value_85 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_85 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_85 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_85 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_85 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_expression_value_85);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_subscript_value_25 = mod_consts.const_str_digest_5a82eb6b3fd049e8ab5d0586dd18a94a;
tmp_ass_subvalue_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_85, tmp_subscript_value_25);
CHECK_OBJECT(tmp_expression_value_85);
Py_DECREF(tmp_expression_value_85);
if (tmp_ass_subvalue_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscribed_25 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_25);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_13;
}

if (tmp_ass_subscribed_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_25);

exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscript_25 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
CHECK_OBJECT(tmp_ass_subscribed_25);
Py_DECREF(tmp_ass_subscribed_25);
CHECK_OBJECT(tmp_ass_subvalue_25);
Py_DECREF(tmp_ass_subvalue_25);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_12;
frame_exception_exit_13:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_13,
    type_description_2,
    outline_11_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_13);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_12;
frame_no_exception_12:;
goto skip_nested_handling_12;
nested_frame_exit_12:;

goto try_except_handler_38;
skip_nested_handling_12:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_38;
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


exception_lineno = 158;

    goto try_except_handler_38;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_38;
}
branch_no_36:;
{
PyObject *tmp_assign_source_117;
PyObject *tmp_called_value_24;
PyObject *tmp_args_value_24;
PyObject *tmp_tuple_element_48;
PyObject *tmp_kwargs_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_called_value_24 = tmp_class_container$class_creation_12__metaclass;
tmp_tuple_element_48 = mod_consts.const_str_plain_ThreadRunStepCreated;
tmp_args_value_24 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_48);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_48 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_48);
tmp_tuple_element_48 = locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158;
PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_48);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_24 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 158;
tmp_assign_source_117 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_24, tmp_kwargs_value_24);
CHECK_OBJECT(tmp_args_value_24);
Py_DECREF(tmp_args_value_24);
if (tmp_assign_source_117 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_38;
}
assert(outline_11_var___class__ == NULL);
outline_11_var___class__ = tmp_assign_source_117;
}
CHECK_OBJECT(outline_11_var___class__);
tmp_assign_source_116 = outline_11_var___class__;
Py_INCREF(tmp_assign_source_116);
goto try_return_handler_38;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_38:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158);
locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158 = NULL;
goto try_return_handler_37;
// Exception handler code:
try_except_handler_38:;
exception_keeper_lineno_36 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_36 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158);
locals_openai$types$beta$assistant_stream_event$$$class__12_ThreadRunStepCreated_158 = NULL;
// Re-raise.
exception_state = exception_keeper_name_36;
exception_lineno = exception_keeper_lineno_36;

goto try_except_handler_37;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_37:;
CHECK_OBJECT(outline_11_var___class__);
CHECK_OBJECT(outline_11_var___class__);
Py_DECREF(outline_11_var___class__);
outline_11_var___class__ = NULL;
goto outline_result_24;
// Exception handler code:
try_except_handler_37:;
exception_keeper_lineno_37 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_37 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_37;
exception_lineno = exception_keeper_lineno_37;

goto outline_exception_12;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_12:;
exception_lineno = 158;
goto try_except_handler_36;
outline_result_24:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepCreated, tmp_assign_source_116);
}
goto try_end_14;
// Exception handler code:
try_except_handler_36:;
exception_keeper_lineno_38 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_38 = exception_state;
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
exception_state = exception_keeper_name_38;
exception_lineno = exception_keeper_lineno_38;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
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
PyObject *tmp_assign_source_118;
PyObject *tmp_tuple_element_49;
tmp_tuple_element_49 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;

    goto try_except_handler_39;
}
tmp_assign_source_118 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_118, 0, tmp_tuple_element_49);
assert(tmp_class_container$class_creation_13__bases_orig == NULL);
tmp_class_container$class_creation_13__bases_orig = tmp_assign_source_118;
}
{
PyObject *tmp_assign_source_119;
PyObject *tmp_direct_call_arg1_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_direct_call_arg1_13 = tmp_class_container$class_creation_13__bases_orig;
Py_INCREF(tmp_direct_call_arg1_13);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_13};
    tmp_assign_source_119 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_119 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_39;
}
assert(tmp_class_container$class_creation_13__bases == NULL);
tmp_class_container$class_creation_13__bases = tmp_assign_source_119;
}
{
PyObject *tmp_assign_source_120;
tmp_assign_source_120 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__class_decl_dict == NULL);
tmp_class_container$class_creation_13__class_decl_dict = tmp_assign_source_120;
}
{
PyObject *tmp_assign_source_121;
PyObject *tmp_metaclass_value_13;
nuitka_bool tmp_condition_result_49;
int tmp_truth_name_13;
PyObject *tmp_type_arg_25;
PyObject *tmp_expression_value_86;
PyObject *tmp_subscript_value_26;
PyObject *tmp_bases_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_container$class_creation_13__bases);
if (tmp_truth_name_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_39;
}
tmp_condition_result_49 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_13;
} else {
    goto condexpr_false_13;
}
condexpr_true_13:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_expression_value_86 = tmp_class_container$class_creation_13__bases;
tmp_subscript_value_26 = const_int_0;
tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_86, tmp_subscript_value_26, 0);
if (tmp_type_arg_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_39;
}
tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
CHECK_OBJECT(tmp_type_arg_25);
Py_DECREF(tmp_type_arg_25);
if (tmp_metaclass_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_39;
}
goto condexpr_end_13;
condexpr_false_13:;
tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_13);
condexpr_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_bases_value_13 = tmp_class_container$class_creation_13__bases;
tmp_assign_source_121 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
CHECK_OBJECT(tmp_metaclass_value_13);
Py_DECREF(tmp_metaclass_value_13);
if (tmp_assign_source_121 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_39;
}
assert(tmp_class_container$class_creation_13__metaclass == NULL);
tmp_class_container$class_creation_13__metaclass = tmp_assign_source_121;
}
{
bool tmp_condition_result_50;
PyObject *tmp_expression_value_87;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_87 = tmp_class_container$class_creation_13__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_87, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_39;
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
PyObject *tmp_assign_source_122;
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_88;
PyObject *tmp_args_value_25;
PyObject *tmp_tuple_element_50;
PyObject *tmp_kwargs_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_88 = tmp_class_container$class_creation_13__metaclass;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_39;
}
tmp_tuple_element_50 = mod_consts.const_str_plain_ThreadRunStepInProgress;
tmp_args_value_25 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_50);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_50 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_50);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_25 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 165;
tmp_assign_source_122 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_25, tmp_kwargs_value_25);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_value_25);
Py_DECREF(tmp_args_value_25);
if (tmp_assign_source_122 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_39;
}
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_122;
}
{
bool tmp_condition_result_51;
PyObject *tmp_operand_value_13;
PyObject *tmp_expression_value_89;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_expression_value_89 = tmp_class_container$class_creation_13__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_89, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_39;
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
PyObject *tmp_tuple_element_51;
PyObject *tmp_expression_value_90;
PyObject *tmp_name_value_23;
PyObject *tmp_default_value_13;
tmp_mod_expr_left_13 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_90 = tmp_class_container$class_creation_13__metaclass;
tmp_name_value_23 = const_str_plain___name__;
tmp_default_value_13 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_51 = BUILTIN_GETATTR(tstate, tmp_expression_value_90, tmp_name_value_23, tmp_default_value_13);
if (tmp_tuple_element_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_39;
}
tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_91;
PyObject *tmp_type_arg_26;
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_51);
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_type_arg_26 = tmp_class_container$class_creation_13__prepared;
tmp_expression_value_91 = BUILTIN_TYPE1(tmp_type_arg_26);
assert(!(tmp_expression_value_91 == NULL));
tmp_tuple_element_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_91);
Py_DECREF(tmp_expression_value_91);
if (tmp_tuple_element_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_51);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_mod_expr_right_13);
goto try_except_handler_39;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_make_exception_arg_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
CHECK_OBJECT(tmp_mod_expr_right_13);
Py_DECREF(tmp_mod_expr_right_13);
if (tmp_make_exception_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_39;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 165;
tmp_raise_type_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_13);
CHECK_OBJECT(tmp_make_exception_arg_13);
Py_DECREF(tmp_make_exception_arg_13);
assert(!(tmp_raise_type_13 == NULL));
exception_state.exception_value = tmp_raise_type_13;
exception_lineno = 165;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_39;
}
branch_no_38:;
goto branch_end_37;
branch_no_37:;
{
PyObject *tmp_assign_source_123;
tmp_assign_source_123 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_123;
}
branch_end_37:;
{
PyObject *tmp_assign_source_124;
{
PyObject *tmp_set_locals_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_set_locals_13 = tmp_class_container$class_creation_13__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165 = tmp_set_locals_13;
Py_INCREF(tmp_set_locals_13);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_41;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunStepInProgress;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_41;
}
tmp_dictset_value = mod_consts.const_int_pos_165;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_41;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_41;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_14 = MAKE_CLASS_FRAME(tstate, code_objects_986e2d663718fdb519582b278c4dae1a, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_14);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_14) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_26;
PyObject *tmp_ass_subscribed_26;
PyObject *tmp_ass_subscript_26;
tmp_ass_subvalue_26 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165, mod_consts.const_str_plain_RunStep);

if (tmp_ass_subvalue_26 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_26 = module_var_accessor_openai$types$beta$assistant_stream_event$RunStep(tstate);
if (unlikely(tmp_ass_subvalue_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RunStep);
}

if (tmp_ass_subvalue_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
        Py_INCREF(tmp_ass_subvalue_26);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_14;
    }
}

tmp_ass_subscribed_26 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_26);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_14;
}

if (tmp_ass_subscribed_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_26);

exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_ass_subscript_26 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
CHECK_OBJECT(tmp_ass_subscribed_26);
Py_DECREF(tmp_ass_subscribed_26);
CHECK_OBJECT(tmp_ass_subvalue_26);
Py_DECREF(tmp_ass_subvalue_26);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
}
{
PyObject *tmp_ass_subvalue_27;
PyObject *tmp_expression_value_92;
PyObject *tmp_subscript_value_27;
PyObject *tmp_ass_subscribed_27;
PyObject *tmp_ass_subscript_27;
tmp_expression_value_92 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_92 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_92 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_92 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_92 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
        Py_INCREF(tmp_expression_value_92);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_14;
    }
}

tmp_subscript_value_27 = mod_consts.const_str_digest_c85b4c16f30d21ee1c9329e548e39509;
tmp_ass_subvalue_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_92, tmp_subscript_value_27);
CHECK_OBJECT(tmp_expression_value_92);
Py_DECREF(tmp_expression_value_92);
if (tmp_ass_subvalue_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_ass_subscribed_27 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_27);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_14;
}

if (tmp_ass_subscribed_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_27);

exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_ass_subscript_27 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
CHECK_OBJECT(tmp_ass_subscribed_27);
Py_DECREF(tmp_ass_subscribed_27);
CHECK_OBJECT(tmp_ass_subvalue_27);
Py_DECREF(tmp_ass_subvalue_27);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_13;
frame_exception_exit_14:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_14, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_14, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_14,
    type_description_2,
    outline_12_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_14);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_13;
frame_no_exception_13:;
goto skip_nested_handling_13;
nested_frame_exit_13:;

goto try_except_handler_41;
skip_nested_handling_13:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_41;
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


exception_lineno = 165;

    goto try_except_handler_41;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_41;
}
branch_no_39:;
{
PyObject *tmp_assign_source_125;
PyObject *tmp_called_value_26;
PyObject *tmp_args_value_26;
PyObject *tmp_tuple_element_52;
PyObject *tmp_kwargs_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_called_value_26 = tmp_class_container$class_creation_13__metaclass;
tmp_tuple_element_52 = mod_consts.const_str_plain_ThreadRunStepInProgress;
tmp_args_value_26 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_52 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_52);
tmp_tuple_element_52 = locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165;
PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_26 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 165;
tmp_assign_source_125 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_26, tmp_kwargs_value_26);
CHECK_OBJECT(tmp_args_value_26);
Py_DECREF(tmp_args_value_26);
if (tmp_assign_source_125 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_41;
}
assert(outline_12_var___class__ == NULL);
outline_12_var___class__ = tmp_assign_source_125;
}
CHECK_OBJECT(outline_12_var___class__);
tmp_assign_source_124 = outline_12_var___class__;
Py_INCREF(tmp_assign_source_124);
goto try_return_handler_41;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_41:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165);
locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165 = NULL;
goto try_return_handler_40;
// Exception handler code:
try_except_handler_41:;
exception_keeper_lineno_39 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_39 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165);
locals_openai$types$beta$assistant_stream_event$$$class__13_ThreadRunStepInProgress_165 = NULL;
// Re-raise.
exception_state = exception_keeper_name_39;
exception_lineno = exception_keeper_lineno_39;

goto try_except_handler_40;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_40:;
CHECK_OBJECT(outline_12_var___class__);
CHECK_OBJECT(outline_12_var___class__);
Py_DECREF(outline_12_var___class__);
outline_12_var___class__ = NULL;
goto outline_result_26;
// Exception handler code:
try_except_handler_40:;
exception_keeper_lineno_40 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_40 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_40;
exception_lineno = exception_keeper_lineno_40;

goto outline_exception_13;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_13:;
exception_lineno = 165;
goto try_except_handler_39;
outline_result_26:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepInProgress, tmp_assign_source_124);
}
goto try_end_15;
// Exception handler code:
try_except_handler_39:;
exception_keeper_lineno_41 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_41 = exception_state;
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
exception_state = exception_keeper_name_41;
exception_lineno = exception_keeper_lineno_41;

goto frame_exception_exit_1;
// End of try:
try_end_15:;
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
PyObject *tmp_assign_source_126;
PyObject *tmp_tuple_element_53;
tmp_tuple_element_53 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;

    goto try_except_handler_42;
}
tmp_assign_source_126 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_126, 0, tmp_tuple_element_53);
assert(tmp_class_container$class_creation_14__bases_orig == NULL);
tmp_class_container$class_creation_14__bases_orig = tmp_assign_source_126;
}
{
PyObject *tmp_assign_source_127;
PyObject *tmp_direct_call_arg1_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_direct_call_arg1_14 = tmp_class_container$class_creation_14__bases_orig;
Py_INCREF(tmp_direct_call_arg1_14);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_14};
    tmp_assign_source_127 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_127 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_42;
}
assert(tmp_class_container$class_creation_14__bases == NULL);
tmp_class_container$class_creation_14__bases = tmp_assign_source_127;
}
{
PyObject *tmp_assign_source_128;
tmp_assign_source_128 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__class_decl_dict == NULL);
tmp_class_container$class_creation_14__class_decl_dict = tmp_assign_source_128;
}
{
PyObject *tmp_assign_source_129;
PyObject *tmp_metaclass_value_14;
nuitka_bool tmp_condition_result_53;
int tmp_truth_name_14;
PyObject *tmp_type_arg_27;
PyObject *tmp_expression_value_93;
PyObject *tmp_subscript_value_28;
PyObject *tmp_bases_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_container$class_creation_14__bases);
if (tmp_truth_name_14 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_42;
}
tmp_condition_result_53 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_14;
} else {
    goto condexpr_false_14;
}
condexpr_true_14:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_expression_value_93 = tmp_class_container$class_creation_14__bases;
tmp_subscript_value_28 = const_int_0;
tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_93, tmp_subscript_value_28, 0);
if (tmp_type_arg_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_42;
}
tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
CHECK_OBJECT(tmp_type_arg_27);
Py_DECREF(tmp_type_arg_27);
if (tmp_metaclass_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_42;
}
goto condexpr_end_14;
condexpr_false_14:;
tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_14);
condexpr_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_bases_value_14 = tmp_class_container$class_creation_14__bases;
tmp_assign_source_129 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
CHECK_OBJECT(tmp_metaclass_value_14);
Py_DECREF(tmp_metaclass_value_14);
if (tmp_assign_source_129 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_42;
}
assert(tmp_class_container$class_creation_14__metaclass == NULL);
tmp_class_container$class_creation_14__metaclass = tmp_assign_source_129;
}
{
bool tmp_condition_result_54;
PyObject *tmp_expression_value_94;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_94 = tmp_class_container$class_creation_14__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_94, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_42;
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
PyObject *tmp_assign_source_130;
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_95;
PyObject *tmp_args_value_27;
PyObject *tmp_tuple_element_54;
PyObject *tmp_kwargs_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_95 = tmp_class_container$class_creation_14__metaclass;
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_42;
}
tmp_tuple_element_54 = mod_consts.const_str_plain_ThreadRunStepDelta;
tmp_args_value_27 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_54);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_54 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_54);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_27 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 172;
tmp_assign_source_130 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_27, tmp_kwargs_value_27);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_value_27);
Py_DECREF(tmp_args_value_27);
if (tmp_assign_source_130 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_42;
}
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_130;
}
{
bool tmp_condition_result_55;
PyObject *tmp_operand_value_14;
PyObject *tmp_expression_value_96;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_expression_value_96 = tmp_class_container$class_creation_14__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_96, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_42;
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
PyObject *tmp_tuple_element_55;
PyObject *tmp_expression_value_97;
PyObject *tmp_name_value_24;
PyObject *tmp_default_value_14;
tmp_mod_expr_left_14 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_97 = tmp_class_container$class_creation_14__metaclass;
tmp_name_value_24 = const_str_plain___name__;
tmp_default_value_14 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_55 = BUILTIN_GETATTR(tstate, tmp_expression_value_97, tmp_name_value_24, tmp_default_value_14);
if (tmp_tuple_element_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_42;
}
tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_98;
PyObject *tmp_type_arg_28;
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_55);
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_type_arg_28 = tmp_class_container$class_creation_14__prepared;
tmp_expression_value_98 = BUILTIN_TYPE1(tmp_type_arg_28);
assert(!(tmp_expression_value_98 == NULL));
tmp_tuple_element_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_98);
Py_DECREF(tmp_expression_value_98);
if (tmp_tuple_element_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_55);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_mod_expr_right_14);
goto try_except_handler_42;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_make_exception_arg_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
CHECK_OBJECT(tmp_mod_expr_right_14);
Py_DECREF(tmp_mod_expr_right_14);
if (tmp_make_exception_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_42;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 172;
tmp_raise_type_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_14);
CHECK_OBJECT(tmp_make_exception_arg_14);
Py_DECREF(tmp_make_exception_arg_14);
assert(!(tmp_raise_type_14 == NULL));
exception_state.exception_value = tmp_raise_type_14;
exception_lineno = 172;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_42;
}
branch_no_41:;
goto branch_end_40;
branch_no_40:;
{
PyObject *tmp_assign_source_131;
tmp_assign_source_131 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_131;
}
branch_end_40:;
{
PyObject *tmp_assign_source_132;
{
PyObject *tmp_set_locals_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_set_locals_14 = tmp_class_container$class_creation_14__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172 = tmp_set_locals_14;
Py_INCREF(tmp_set_locals_14);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_44;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunStepDelta;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_44;
}
tmp_dictset_value = mod_consts.const_int_pos_172;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_44;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_44;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_15 = MAKE_CLASS_FRAME(tstate, code_objects_43885ba41f5a46e3eee91338ca6496eb, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_15);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_15) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_28;
PyObject *tmp_ass_subscribed_28;
PyObject *tmp_ass_subscript_28;
tmp_ass_subvalue_28 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172, mod_consts.const_str_plain_RunStepDeltaEvent);

if (tmp_ass_subvalue_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_28 = module_var_accessor_openai$types$beta$assistant_stream_event$RunStepDeltaEvent(tstate);
if (unlikely(tmp_ass_subvalue_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RunStepDeltaEvent);
}

if (tmp_ass_subvalue_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
        Py_INCREF(tmp_ass_subvalue_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_15;
    }
}

tmp_ass_subscribed_28 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_28);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_15;
}

if (tmp_ass_subscribed_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_28);

exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_ass_subscript_28 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
CHECK_OBJECT(tmp_ass_subscribed_28);
Py_DECREF(tmp_ass_subscribed_28);
CHECK_OBJECT(tmp_ass_subvalue_28);
Py_DECREF(tmp_ass_subvalue_28);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
}
{
PyObject *tmp_ass_subvalue_29;
PyObject *tmp_expression_value_99;
PyObject *tmp_subscript_value_29;
PyObject *tmp_ass_subscribed_29;
PyObject *tmp_ass_subscript_29;
tmp_expression_value_99 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_99 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_99 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_99 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_99 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
        Py_INCREF(tmp_expression_value_99);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_15;
    }
}

tmp_subscript_value_29 = mod_consts.const_str_digest_9d132349ec9037cf5cf5d8fff2f727cb;
tmp_ass_subvalue_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_99, tmp_subscript_value_29);
CHECK_OBJECT(tmp_expression_value_99);
Py_DECREF(tmp_expression_value_99);
if (tmp_ass_subvalue_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_ass_subscribed_29 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_29);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_15;
}

if (tmp_ass_subscribed_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_29);

exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_ass_subscript_29 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
CHECK_OBJECT(tmp_ass_subscribed_29);
Py_DECREF(tmp_ass_subscribed_29);
CHECK_OBJECT(tmp_ass_subvalue_29);
Py_DECREF(tmp_ass_subvalue_29);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_14;
frame_exception_exit_15:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_15, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_15, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_15,
    type_description_2,
    outline_13_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_15);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_14;
frame_no_exception_14:;
goto skip_nested_handling_14;
nested_frame_exit_14:;

goto try_except_handler_44;
skip_nested_handling_14:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_44;
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


exception_lineno = 172;

    goto try_except_handler_44;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_44;
}
branch_no_42:;
{
PyObject *tmp_assign_source_133;
PyObject *tmp_called_value_28;
PyObject *tmp_args_value_28;
PyObject *tmp_tuple_element_56;
PyObject *tmp_kwargs_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_called_value_28 = tmp_class_container$class_creation_14__metaclass;
tmp_tuple_element_56 = mod_consts.const_str_plain_ThreadRunStepDelta;
tmp_args_value_28 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_56);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_56 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_56);
tmp_tuple_element_56 = locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172;
PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_56);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_28 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 172;
tmp_assign_source_133 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_28, tmp_kwargs_value_28);
CHECK_OBJECT(tmp_args_value_28);
Py_DECREF(tmp_args_value_28);
if (tmp_assign_source_133 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_44;
}
assert(outline_13_var___class__ == NULL);
outline_13_var___class__ = tmp_assign_source_133;
}
CHECK_OBJECT(outline_13_var___class__);
tmp_assign_source_132 = outline_13_var___class__;
Py_INCREF(tmp_assign_source_132);
goto try_return_handler_44;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_44:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172);
locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172 = NULL;
goto try_return_handler_43;
// Exception handler code:
try_except_handler_44:;
exception_keeper_lineno_42 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_42 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172);
locals_openai$types$beta$assistant_stream_event$$$class__14_ThreadRunStepDelta_172 = NULL;
// Re-raise.
exception_state = exception_keeper_name_42;
exception_lineno = exception_keeper_lineno_42;

goto try_except_handler_43;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_43:;
CHECK_OBJECT(outline_13_var___class__);
CHECK_OBJECT(outline_13_var___class__);
Py_DECREF(outline_13_var___class__);
outline_13_var___class__ = NULL;
goto outline_result_28;
// Exception handler code:
try_except_handler_43:;
exception_keeper_lineno_43 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_43 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_43;
exception_lineno = exception_keeper_lineno_43;

goto outline_exception_14;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_14:;
exception_lineno = 172;
goto try_except_handler_42;
outline_result_28:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepDelta, tmp_assign_source_132);
}
goto try_end_16;
// Exception handler code:
try_except_handler_42:;
exception_keeper_lineno_44 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_44 = exception_state;
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
exception_state = exception_keeper_name_44;
exception_lineno = exception_keeper_lineno_44;

goto frame_exception_exit_1;
// End of try:
try_end_16:;
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
PyObject *tmp_assign_source_134;
PyObject *tmp_tuple_element_57;
tmp_tuple_element_57 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;

    goto try_except_handler_45;
}
tmp_assign_source_134 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_134, 0, tmp_tuple_element_57);
assert(tmp_class_container$class_creation_15__bases_orig == NULL);
tmp_class_container$class_creation_15__bases_orig = tmp_assign_source_134;
}
{
PyObject *tmp_assign_source_135;
PyObject *tmp_direct_call_arg1_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_direct_call_arg1_15 = tmp_class_container$class_creation_15__bases_orig;
Py_INCREF(tmp_direct_call_arg1_15);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_15};
    tmp_assign_source_135 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_135 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_45;
}
assert(tmp_class_container$class_creation_15__bases == NULL);
tmp_class_container$class_creation_15__bases = tmp_assign_source_135;
}
{
PyObject *tmp_assign_source_136;
tmp_assign_source_136 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__class_decl_dict == NULL);
tmp_class_container$class_creation_15__class_decl_dict = tmp_assign_source_136;
}
{
PyObject *tmp_assign_source_137;
PyObject *tmp_metaclass_value_15;
nuitka_bool tmp_condition_result_57;
int tmp_truth_name_15;
PyObject *tmp_type_arg_29;
PyObject *tmp_expression_value_100;
PyObject *tmp_subscript_value_30;
PyObject *tmp_bases_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_container$class_creation_15__bases);
if (tmp_truth_name_15 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_45;
}
tmp_condition_result_57 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_15;
} else {
    goto condexpr_false_15;
}
condexpr_true_15:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_expression_value_100 = tmp_class_container$class_creation_15__bases;
tmp_subscript_value_30 = const_int_0;
tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_100, tmp_subscript_value_30, 0);
if (tmp_type_arg_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_45;
}
tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
CHECK_OBJECT(tmp_type_arg_29);
Py_DECREF(tmp_type_arg_29);
if (tmp_metaclass_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_45;
}
goto condexpr_end_15;
condexpr_false_15:;
tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_15);
condexpr_end_15:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_bases_value_15 = tmp_class_container$class_creation_15__bases;
tmp_assign_source_137 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
CHECK_OBJECT(tmp_metaclass_value_15);
Py_DECREF(tmp_metaclass_value_15);
if (tmp_assign_source_137 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_45;
}
assert(tmp_class_container$class_creation_15__metaclass == NULL);
tmp_class_container$class_creation_15__metaclass = tmp_assign_source_137;
}
{
bool tmp_condition_result_58;
PyObject *tmp_expression_value_101;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_101 = tmp_class_container$class_creation_15__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_101, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_45;
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
PyObject *tmp_assign_source_138;
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_102;
PyObject *tmp_args_value_29;
PyObject *tmp_tuple_element_58;
PyObject *tmp_kwargs_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_102 = tmp_class_container$class_creation_15__metaclass;
tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_45;
}
tmp_tuple_element_58 = mod_consts.const_str_plain_ThreadRunStepCompleted;
tmp_args_value_29 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_58);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_58 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_58);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_29 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 182;
tmp_assign_source_138 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_29, tmp_kwargs_value_29);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_value_29);
Py_DECREF(tmp_args_value_29);
if (tmp_assign_source_138 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_45;
}
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_138;
}
{
bool tmp_condition_result_59;
PyObject *tmp_operand_value_15;
PyObject *tmp_expression_value_103;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_expression_value_103 = tmp_class_container$class_creation_15__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_103, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_45;
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
PyObject *tmp_tuple_element_59;
PyObject *tmp_expression_value_104;
PyObject *tmp_name_value_25;
PyObject *tmp_default_value_15;
tmp_mod_expr_left_15 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_104 = tmp_class_container$class_creation_15__metaclass;
tmp_name_value_25 = const_str_plain___name__;
tmp_default_value_15 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_59 = BUILTIN_GETATTR(tstate, tmp_expression_value_104, tmp_name_value_25, tmp_default_value_15);
if (tmp_tuple_element_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_45;
}
tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_105;
PyObject *tmp_type_arg_30;
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_59);
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_type_arg_30 = tmp_class_container$class_creation_15__prepared;
tmp_expression_value_105 = BUILTIN_TYPE1(tmp_type_arg_30);
assert(!(tmp_expression_value_105 == NULL));
tmp_tuple_element_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_105);
Py_DECREF(tmp_expression_value_105);
if (tmp_tuple_element_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_59);
}
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_mod_expr_right_15);
goto try_except_handler_45;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_make_exception_arg_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
CHECK_OBJECT(tmp_mod_expr_right_15);
Py_DECREF(tmp_mod_expr_right_15);
if (tmp_make_exception_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_45;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 182;
tmp_raise_type_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_15);
CHECK_OBJECT(tmp_make_exception_arg_15);
Py_DECREF(tmp_make_exception_arg_15);
assert(!(tmp_raise_type_15 == NULL));
exception_state.exception_value = tmp_raise_type_15;
exception_lineno = 182;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_45;
}
branch_no_44:;
goto branch_end_43;
branch_no_43:;
{
PyObject *tmp_assign_source_139;
tmp_assign_source_139 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_139;
}
branch_end_43:;
{
PyObject *tmp_assign_source_140;
{
PyObject *tmp_set_locals_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_set_locals_15 = tmp_class_container$class_creation_15__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182 = tmp_set_locals_15;
Py_INCREF(tmp_set_locals_15);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_47;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunStepCompleted;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_47;
}
tmp_dictset_value = mod_consts.const_int_pos_182;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_47;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_47;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_16 = MAKE_CLASS_FRAME(tstate, code_objects_5244fb68584d79f9e104536ee119a3a8, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_16);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_16) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_30;
PyObject *tmp_ass_subscribed_30;
PyObject *tmp_ass_subscript_30;
tmp_ass_subvalue_30 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182, mod_consts.const_str_plain_RunStep);

if (tmp_ass_subvalue_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_30 = module_var_accessor_openai$types$beta$assistant_stream_event$RunStep(tstate);
if (unlikely(tmp_ass_subvalue_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RunStep);
}

if (tmp_ass_subvalue_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 183;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
        Py_INCREF(tmp_ass_subvalue_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_16;
    }
}

tmp_ass_subscribed_30 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_30);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 183;
type_description_2 = "o";
    goto frame_exception_exit_16;
}

if (tmp_ass_subscribed_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_30);

exception_lineno = 183;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
tmp_ass_subscript_30 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
CHECK_OBJECT(tmp_ass_subscribed_30);
Py_DECREF(tmp_ass_subscribed_30);
CHECK_OBJECT(tmp_ass_subvalue_30);
Py_DECREF(tmp_ass_subvalue_30);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
}
{
PyObject *tmp_ass_subvalue_31;
PyObject *tmp_expression_value_106;
PyObject *tmp_subscript_value_31;
PyObject *tmp_ass_subscribed_31;
PyObject *tmp_ass_subscript_31;
tmp_expression_value_106 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_106 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_106 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_106 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_106 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
        Py_INCREF(tmp_expression_value_106);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_16;
    }
}

tmp_subscript_value_31 = mod_consts.const_str_digest_3b8e8a48144aaf82bb3a76883a9d2cf2;
tmp_ass_subvalue_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_106, tmp_subscript_value_31);
CHECK_OBJECT(tmp_expression_value_106);
Py_DECREF(tmp_expression_value_106);
if (tmp_ass_subvalue_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
tmp_ass_subscribed_31 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_31);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_16;
}

if (tmp_ass_subscribed_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_31);

exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
tmp_ass_subscript_31 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
CHECK_OBJECT(tmp_ass_subscribed_31);
Py_DECREF(tmp_ass_subscribed_31);
CHECK_OBJECT(tmp_ass_subvalue_31);
Py_DECREF(tmp_ass_subvalue_31);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_15;
frame_exception_exit_16:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_16, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_16, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_16,
    type_description_2,
    outline_14_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_16);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_15;
frame_no_exception_15:;
goto skip_nested_handling_15;
nested_frame_exit_15:;

goto try_except_handler_47;
skip_nested_handling_15:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_47;
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


exception_lineno = 182;

    goto try_except_handler_47;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_47;
}
branch_no_45:;
{
PyObject *tmp_assign_source_141;
PyObject *tmp_called_value_30;
PyObject *tmp_args_value_30;
PyObject *tmp_tuple_element_60;
PyObject *tmp_kwargs_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_called_value_30 = tmp_class_container$class_creation_15__metaclass;
tmp_tuple_element_60 = mod_consts.const_str_plain_ThreadRunStepCompleted;
tmp_args_value_30 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_60);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_60 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_60);
tmp_tuple_element_60 = locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182;
PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_60);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_30 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 182;
tmp_assign_source_141 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_30, tmp_kwargs_value_30);
CHECK_OBJECT(tmp_args_value_30);
Py_DECREF(tmp_args_value_30);
if (tmp_assign_source_141 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto try_except_handler_47;
}
assert(outline_14_var___class__ == NULL);
outline_14_var___class__ = tmp_assign_source_141;
}
CHECK_OBJECT(outline_14_var___class__);
tmp_assign_source_140 = outline_14_var___class__;
Py_INCREF(tmp_assign_source_140);
goto try_return_handler_47;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_47:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182);
locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182 = NULL;
goto try_return_handler_46;
// Exception handler code:
try_except_handler_47:;
exception_keeper_lineno_45 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_45 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182);
locals_openai$types$beta$assistant_stream_event$$$class__15_ThreadRunStepCompleted_182 = NULL;
// Re-raise.
exception_state = exception_keeper_name_45;
exception_lineno = exception_keeper_lineno_45;

goto try_except_handler_46;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_46:;
CHECK_OBJECT(outline_14_var___class__);
CHECK_OBJECT(outline_14_var___class__);
Py_DECREF(outline_14_var___class__);
outline_14_var___class__ = NULL;
goto outline_result_30;
// Exception handler code:
try_except_handler_46:;
exception_keeper_lineno_46 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_46 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_46;
exception_lineno = exception_keeper_lineno_46;

goto outline_exception_15;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_15:;
exception_lineno = 182;
goto try_except_handler_45;
outline_result_30:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepCompleted, tmp_assign_source_140);
}
goto try_end_17;
// Exception handler code:
try_except_handler_45:;
exception_keeper_lineno_47 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_47 = exception_state;
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
exception_state = exception_keeper_name_47;
exception_lineno = exception_keeper_lineno_47;

goto frame_exception_exit_1;
// End of try:
try_end_17:;
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
PyObject *tmp_assign_source_142;
PyObject *tmp_tuple_element_61;
tmp_tuple_element_61 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto try_except_handler_48;
}
tmp_assign_source_142 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_142, 0, tmp_tuple_element_61);
assert(tmp_class_container$class_creation_16__bases_orig == NULL);
tmp_class_container$class_creation_16__bases_orig = tmp_assign_source_142;
}
{
PyObject *tmp_assign_source_143;
PyObject *tmp_direct_call_arg1_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_direct_call_arg1_16 = tmp_class_container$class_creation_16__bases_orig;
Py_INCREF(tmp_direct_call_arg1_16);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_16};
    tmp_assign_source_143 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_143 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_48;
}
assert(tmp_class_container$class_creation_16__bases == NULL);
tmp_class_container$class_creation_16__bases = tmp_assign_source_143;
}
{
PyObject *tmp_assign_source_144;
tmp_assign_source_144 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__class_decl_dict == NULL);
tmp_class_container$class_creation_16__class_decl_dict = tmp_assign_source_144;
}
{
PyObject *tmp_assign_source_145;
PyObject *tmp_metaclass_value_16;
nuitka_bool tmp_condition_result_61;
int tmp_truth_name_16;
PyObject *tmp_type_arg_31;
PyObject *tmp_expression_value_107;
PyObject *tmp_subscript_value_32;
PyObject *tmp_bases_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_container$class_creation_16__bases);
if (tmp_truth_name_16 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_48;
}
tmp_condition_result_61 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_16;
} else {
    goto condexpr_false_16;
}
condexpr_true_16:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_expression_value_107 = tmp_class_container$class_creation_16__bases;
tmp_subscript_value_32 = const_int_0;
tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_107, tmp_subscript_value_32, 0);
if (tmp_type_arg_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_48;
}
tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
CHECK_OBJECT(tmp_type_arg_31);
Py_DECREF(tmp_type_arg_31);
if (tmp_metaclass_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_48;
}
goto condexpr_end_16;
condexpr_false_16:;
tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_16);
condexpr_end_16:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_bases_value_16 = tmp_class_container$class_creation_16__bases;
tmp_assign_source_145 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
CHECK_OBJECT(tmp_metaclass_value_16);
Py_DECREF(tmp_metaclass_value_16);
if (tmp_assign_source_145 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_48;
}
assert(tmp_class_container$class_creation_16__metaclass == NULL);
tmp_class_container$class_creation_16__metaclass = tmp_assign_source_145;
}
{
bool tmp_condition_result_62;
PyObject *tmp_expression_value_108;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_108 = tmp_class_container$class_creation_16__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_108, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_48;
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
PyObject *tmp_assign_source_146;
PyObject *tmp_called_value_31;
PyObject *tmp_expression_value_109;
PyObject *tmp_args_value_31;
PyObject *tmp_tuple_element_62;
PyObject *tmp_kwargs_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_109 = tmp_class_container$class_creation_16__metaclass;
tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_48;
}
tmp_tuple_element_62 = mod_consts.const_str_plain_ThreadRunStepFailed;
tmp_args_value_31 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_62);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_62 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_62);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_31 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 189;
tmp_assign_source_146 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_31, tmp_kwargs_value_31);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_value_31);
Py_DECREF(tmp_args_value_31);
if (tmp_assign_source_146 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_48;
}
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_146;
}
{
bool tmp_condition_result_63;
PyObject *tmp_operand_value_16;
PyObject *tmp_expression_value_110;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_expression_value_110 = tmp_class_container$class_creation_16__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_110, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_48;
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
PyObject *tmp_tuple_element_63;
PyObject *tmp_expression_value_111;
PyObject *tmp_name_value_26;
PyObject *tmp_default_value_16;
tmp_mod_expr_left_16 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_111 = tmp_class_container$class_creation_16__metaclass;
tmp_name_value_26 = const_str_plain___name__;
tmp_default_value_16 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_63 = BUILTIN_GETATTR(tstate, tmp_expression_value_111, tmp_name_value_26, tmp_default_value_16);
if (tmp_tuple_element_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_48;
}
tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_112;
PyObject *tmp_type_arg_32;
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_63);
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_type_arg_32 = tmp_class_container$class_creation_16__prepared;
tmp_expression_value_112 = BUILTIN_TYPE1(tmp_type_arg_32);
assert(!(tmp_expression_value_112 == NULL));
tmp_tuple_element_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_112);
Py_DECREF(tmp_expression_value_112);
if (tmp_tuple_element_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_63);
}
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_mod_expr_right_16);
goto try_except_handler_48;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_make_exception_arg_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
CHECK_OBJECT(tmp_mod_expr_right_16);
Py_DECREF(tmp_mod_expr_right_16);
if (tmp_make_exception_arg_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_48;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 189;
tmp_raise_type_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_16);
CHECK_OBJECT(tmp_make_exception_arg_16);
Py_DECREF(tmp_make_exception_arg_16);
assert(!(tmp_raise_type_16 == NULL));
exception_state.exception_value = tmp_raise_type_16;
exception_lineno = 189;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_48;
}
branch_no_47:;
goto branch_end_46;
branch_no_46:;
{
PyObject *tmp_assign_source_147;
tmp_assign_source_147 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_147;
}
branch_end_46:;
{
PyObject *tmp_assign_source_148;
{
PyObject *tmp_set_locals_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_set_locals_16 = tmp_class_container$class_creation_16__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189 = tmp_set_locals_16;
Py_INCREF(tmp_set_locals_16);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_50;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunStepFailed;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_50;
}
tmp_dictset_value = mod_consts.const_int_pos_189;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_50;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_50;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_17 = MAKE_CLASS_FRAME(tstate, code_objects_1a5909bc4c7d5f44003318e6fe123279, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_17);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_17) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_32;
PyObject *tmp_ass_subscribed_32;
PyObject *tmp_ass_subscript_32;
tmp_ass_subvalue_32 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189, mod_consts.const_str_plain_RunStep);

if (tmp_ass_subvalue_32 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_32 = module_var_accessor_openai$types$beta$assistant_stream_event$RunStep(tstate);
if (unlikely(tmp_ass_subvalue_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RunStep);
}

if (tmp_ass_subvalue_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
        Py_INCREF(tmp_ass_subvalue_32);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_17;
    }
}

tmp_ass_subscribed_32 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_32);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 190;
type_description_2 = "o";
    goto frame_exception_exit_17;
}

if (tmp_ass_subscribed_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_32);

exception_lineno = 190;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_ass_subscript_32 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
CHECK_OBJECT(tmp_ass_subscribed_32);
Py_DECREF(tmp_ass_subscribed_32);
CHECK_OBJECT(tmp_ass_subvalue_32);
Py_DECREF(tmp_ass_subvalue_32);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
}
{
PyObject *tmp_ass_subvalue_33;
PyObject *tmp_expression_value_113;
PyObject *tmp_subscript_value_33;
PyObject *tmp_ass_subscribed_33;
PyObject *tmp_ass_subscript_33;
tmp_expression_value_113 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_113 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_113 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_113 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_113 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
        Py_INCREF(tmp_expression_value_113);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_17;
    }
}

tmp_subscript_value_33 = mod_consts.const_str_digest_dedbbe0bd2b49741f8aa0c1ecf2d541c;
tmp_ass_subvalue_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_113, tmp_subscript_value_33);
CHECK_OBJECT(tmp_expression_value_113);
Py_DECREF(tmp_expression_value_113);
if (tmp_ass_subvalue_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_ass_subscribed_33 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_33 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_33);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_17;
}

if (tmp_ass_subscribed_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_33);

exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_ass_subscript_33 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
CHECK_OBJECT(tmp_ass_subscribed_33);
Py_DECREF(tmp_ass_subscribed_33);
CHECK_OBJECT(tmp_ass_subvalue_33);
Py_DECREF(tmp_ass_subvalue_33);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_16;
frame_exception_exit_17:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_17, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_17, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_17,
    type_description_2,
    outline_15_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_17);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_16;
frame_no_exception_16:;
goto skip_nested_handling_16;
nested_frame_exit_16:;

goto try_except_handler_50;
skip_nested_handling_16:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_50;
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


exception_lineno = 189;

    goto try_except_handler_50;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_50;
}
branch_no_48:;
{
PyObject *tmp_assign_source_149;
PyObject *tmp_called_value_32;
PyObject *tmp_args_value_32;
PyObject *tmp_tuple_element_64;
PyObject *tmp_kwargs_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_called_value_32 = tmp_class_container$class_creation_16__metaclass;
tmp_tuple_element_64 = mod_consts.const_str_plain_ThreadRunStepFailed;
tmp_args_value_32 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_64);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_64 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_64);
tmp_tuple_element_64 = locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189;
PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_64);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_32 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 189;
tmp_assign_source_149 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_32, tmp_kwargs_value_32);
CHECK_OBJECT(tmp_args_value_32);
Py_DECREF(tmp_args_value_32);
if (tmp_assign_source_149 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_50;
}
assert(outline_15_var___class__ == NULL);
outline_15_var___class__ = tmp_assign_source_149;
}
CHECK_OBJECT(outline_15_var___class__);
tmp_assign_source_148 = outline_15_var___class__;
Py_INCREF(tmp_assign_source_148);
goto try_return_handler_50;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_50:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189);
locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189 = NULL;
goto try_return_handler_49;
// Exception handler code:
try_except_handler_50:;
exception_keeper_lineno_48 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_48 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189);
locals_openai$types$beta$assistant_stream_event$$$class__16_ThreadRunStepFailed_189 = NULL;
// Re-raise.
exception_state = exception_keeper_name_48;
exception_lineno = exception_keeper_lineno_48;

goto try_except_handler_49;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_49:;
CHECK_OBJECT(outline_15_var___class__);
CHECK_OBJECT(outline_15_var___class__);
Py_DECREF(outline_15_var___class__);
outline_15_var___class__ = NULL;
goto outline_result_32;
// Exception handler code:
try_except_handler_49:;
exception_keeper_lineno_49 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_49 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_49;
exception_lineno = exception_keeper_lineno_49;

goto outline_exception_16;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_16:;
exception_lineno = 189;
goto try_except_handler_48;
outline_result_32:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepFailed, tmp_assign_source_148);
}
goto try_end_18;
// Exception handler code:
try_except_handler_48:;
exception_keeper_lineno_50 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_50 = exception_state;
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
exception_state = exception_keeper_name_50;
exception_lineno = exception_keeper_lineno_50;

goto frame_exception_exit_1;
// End of try:
try_end_18:;
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
PyObject *tmp_assign_source_150;
PyObject *tmp_tuple_element_65;
tmp_tuple_element_65 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_65 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 196;

    goto try_except_handler_51;
}
tmp_assign_source_150 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_150, 0, tmp_tuple_element_65);
assert(tmp_class_container$class_creation_17__bases_orig == NULL);
tmp_class_container$class_creation_17__bases_orig = tmp_assign_source_150;
}
{
PyObject *tmp_assign_source_151;
PyObject *tmp_direct_call_arg1_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_direct_call_arg1_17 = tmp_class_container$class_creation_17__bases_orig;
Py_INCREF(tmp_direct_call_arg1_17);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_17};
    tmp_assign_source_151 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_151 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_51;
}
assert(tmp_class_container$class_creation_17__bases == NULL);
tmp_class_container$class_creation_17__bases = tmp_assign_source_151;
}
{
PyObject *tmp_assign_source_152;
tmp_assign_source_152 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__class_decl_dict == NULL);
tmp_class_container$class_creation_17__class_decl_dict = tmp_assign_source_152;
}
{
PyObject *tmp_assign_source_153;
PyObject *tmp_metaclass_value_17;
nuitka_bool tmp_condition_result_65;
int tmp_truth_name_17;
PyObject *tmp_type_arg_33;
PyObject *tmp_expression_value_114;
PyObject *tmp_subscript_value_34;
PyObject *tmp_bases_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_container$class_creation_17__bases);
if (tmp_truth_name_17 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_51;
}
tmp_condition_result_65 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_17;
} else {
    goto condexpr_false_17;
}
condexpr_true_17:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_expression_value_114 = tmp_class_container$class_creation_17__bases;
tmp_subscript_value_34 = const_int_0;
tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_114, tmp_subscript_value_34, 0);
if (tmp_type_arg_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_51;
}
tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
CHECK_OBJECT(tmp_type_arg_33);
Py_DECREF(tmp_type_arg_33);
if (tmp_metaclass_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_51;
}
goto condexpr_end_17;
condexpr_false_17:;
tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_17);
condexpr_end_17:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_bases_value_17 = tmp_class_container$class_creation_17__bases;
tmp_assign_source_153 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
CHECK_OBJECT(tmp_metaclass_value_17);
Py_DECREF(tmp_metaclass_value_17);
if (tmp_assign_source_153 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_51;
}
assert(tmp_class_container$class_creation_17__metaclass == NULL);
tmp_class_container$class_creation_17__metaclass = tmp_assign_source_153;
}
{
bool tmp_condition_result_66;
PyObject *tmp_expression_value_115;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_115 = tmp_class_container$class_creation_17__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_115, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_51;
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
PyObject *tmp_assign_source_154;
PyObject *tmp_called_value_33;
PyObject *tmp_expression_value_116;
PyObject *tmp_args_value_33;
PyObject *tmp_tuple_element_66;
PyObject *tmp_kwargs_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_116 = tmp_class_container$class_creation_17__metaclass;
tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_51;
}
tmp_tuple_element_66 = mod_consts.const_str_plain_ThreadRunStepCancelled;
tmp_args_value_33 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_66);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_66 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_66);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_33 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 196;
tmp_assign_source_154 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_33, tmp_kwargs_value_33);
CHECK_OBJECT(tmp_called_value_33);
Py_DECREF(tmp_called_value_33);
CHECK_OBJECT(tmp_args_value_33);
Py_DECREF(tmp_args_value_33);
if (tmp_assign_source_154 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_51;
}
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_154;
}
{
bool tmp_condition_result_67;
PyObject *tmp_operand_value_17;
PyObject *tmp_expression_value_117;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_expression_value_117 = tmp_class_container$class_creation_17__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_117, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_51;
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
PyObject *tmp_tuple_element_67;
PyObject *tmp_expression_value_118;
PyObject *tmp_name_value_27;
PyObject *tmp_default_value_17;
tmp_mod_expr_left_17 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_118 = tmp_class_container$class_creation_17__metaclass;
tmp_name_value_27 = const_str_plain___name__;
tmp_default_value_17 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_67 = BUILTIN_GETATTR(tstate, tmp_expression_value_118, tmp_name_value_27, tmp_default_value_17);
if (tmp_tuple_element_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_51;
}
tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_119;
PyObject *tmp_type_arg_34;
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_67);
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_type_arg_34 = tmp_class_container$class_creation_17__prepared;
tmp_expression_value_119 = BUILTIN_TYPE1(tmp_type_arg_34);
assert(!(tmp_expression_value_119 == NULL));
tmp_tuple_element_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_119);
Py_DECREF(tmp_expression_value_119);
if (tmp_tuple_element_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_67);
}
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_mod_expr_right_17);
goto try_except_handler_51;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
tmp_make_exception_arg_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
CHECK_OBJECT(tmp_mod_expr_right_17);
Py_DECREF(tmp_mod_expr_right_17);
if (tmp_make_exception_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_51;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 196;
tmp_raise_type_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_17);
CHECK_OBJECT(tmp_make_exception_arg_17);
Py_DECREF(tmp_make_exception_arg_17);
assert(!(tmp_raise_type_17 == NULL));
exception_state.exception_value = tmp_raise_type_17;
exception_lineno = 196;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_51;
}
branch_no_50:;
goto branch_end_49;
branch_no_49:;
{
PyObject *tmp_assign_source_155;
tmp_assign_source_155 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_155;
}
branch_end_49:;
{
PyObject *tmp_assign_source_156;
{
PyObject *tmp_set_locals_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_set_locals_17 = tmp_class_container$class_creation_17__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196 = tmp_set_locals_17;
Py_INCREF(tmp_set_locals_17);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_53;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunStepCancelled;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_53;
}
tmp_dictset_value = mod_consts.const_int_pos_196;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_53;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_53;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_18 = MAKE_CLASS_FRAME(tstate, code_objects_03090f6bc5b880a95fa8c5c1858e9ed3, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_18);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_18) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_34;
PyObject *tmp_ass_subscribed_34;
PyObject *tmp_ass_subscript_34;
tmp_ass_subvalue_34 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196, mod_consts.const_str_plain_RunStep);

if (tmp_ass_subvalue_34 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_34 = module_var_accessor_openai$types$beta$assistant_stream_event$RunStep(tstate);
if (unlikely(tmp_ass_subvalue_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RunStep);
}

if (tmp_ass_subvalue_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
        Py_INCREF(tmp_ass_subvalue_34);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_ass_subscribed_34 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_34);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_34);

exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_34 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
CHECK_OBJECT(tmp_ass_subscribed_34);
Py_DECREF(tmp_ass_subscribed_34);
CHECK_OBJECT(tmp_ass_subvalue_34);
Py_DECREF(tmp_ass_subvalue_34);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}
{
PyObject *tmp_ass_subvalue_35;
PyObject *tmp_expression_value_120;
PyObject *tmp_subscript_value_35;
PyObject *tmp_ass_subscribed_35;
PyObject *tmp_ass_subscript_35;
tmp_expression_value_120 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_120 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_120 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_120 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_120 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 200;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
        Py_INCREF(tmp_expression_value_120);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_subscript_value_35 = mod_consts.const_str_digest_58cb50d8e6093fdb65b66e5fcf25885e;
tmp_ass_subvalue_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_120, tmp_subscript_value_35);
CHECK_OBJECT(tmp_expression_value_120);
Py_DECREF(tmp_expression_value_120);
if (tmp_ass_subvalue_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscribed_35 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_35);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 200;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_35);

exception_lineno = 200;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_35 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
CHECK_OBJECT(tmp_ass_subscribed_35);
Py_DECREF(tmp_ass_subscribed_35);
CHECK_OBJECT(tmp_ass_subvalue_35);
Py_DECREF(tmp_ass_subvalue_35);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_17;
frame_exception_exit_18:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_18, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_18->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_18, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_18,
    type_description_2,
    outline_16_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_18);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_17;
frame_no_exception_17:;
goto skip_nested_handling_17;
nested_frame_exit_17:;

goto try_except_handler_53;
skip_nested_handling_17:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_53;
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


exception_lineno = 196;

    goto try_except_handler_53;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_53;
}
branch_no_51:;
{
PyObject *tmp_assign_source_157;
PyObject *tmp_called_value_34;
PyObject *tmp_args_value_34;
PyObject *tmp_tuple_element_68;
PyObject *tmp_kwargs_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_called_value_34 = tmp_class_container$class_creation_17__metaclass;
tmp_tuple_element_68 = mod_consts.const_str_plain_ThreadRunStepCancelled;
tmp_args_value_34 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_68);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_68 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_68);
tmp_tuple_element_68 = locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196;
PyTuple_SET_ITEM0(tmp_args_value_34, 2, tmp_tuple_element_68);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_34 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 196;
tmp_assign_source_157 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_34, tmp_kwargs_value_34);
CHECK_OBJECT(tmp_args_value_34);
Py_DECREF(tmp_args_value_34);
if (tmp_assign_source_157 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_53;
}
assert(outline_16_var___class__ == NULL);
outline_16_var___class__ = tmp_assign_source_157;
}
CHECK_OBJECT(outline_16_var___class__);
tmp_assign_source_156 = outline_16_var___class__;
Py_INCREF(tmp_assign_source_156);
goto try_return_handler_53;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_53:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196);
locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196 = NULL;
goto try_return_handler_52;
// Exception handler code:
try_except_handler_53:;
exception_keeper_lineno_51 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_51 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196);
locals_openai$types$beta$assistant_stream_event$$$class__17_ThreadRunStepCancelled_196 = NULL;
// Re-raise.
exception_state = exception_keeper_name_51;
exception_lineno = exception_keeper_lineno_51;

goto try_except_handler_52;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_52:;
CHECK_OBJECT(outline_16_var___class__);
CHECK_OBJECT(outline_16_var___class__);
Py_DECREF(outline_16_var___class__);
outline_16_var___class__ = NULL;
goto outline_result_34;
// Exception handler code:
try_except_handler_52:;
exception_keeper_lineno_52 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_52 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_52;
exception_lineno = exception_keeper_lineno_52;

goto outline_exception_17;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_17:;
exception_lineno = 196;
goto try_except_handler_51;
outline_result_34:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepCancelled, tmp_assign_source_156);
}
goto try_end_19;
// Exception handler code:
try_except_handler_51:;
exception_keeper_lineno_53 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_53 = exception_state;
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
exception_state = exception_keeper_name_53;
exception_lineno = exception_keeper_lineno_53;

goto frame_exception_exit_1;
// End of try:
try_end_19:;
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
PyObject *tmp_assign_source_158;
PyObject *tmp_tuple_element_69;
tmp_tuple_element_69 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_69 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_69 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 203;

    goto try_except_handler_54;
}
tmp_assign_source_158 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_158, 0, tmp_tuple_element_69);
assert(tmp_class_container$class_creation_18__bases_orig == NULL);
tmp_class_container$class_creation_18__bases_orig = tmp_assign_source_158;
}
{
PyObject *tmp_assign_source_159;
PyObject *tmp_direct_call_arg1_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_direct_call_arg1_18 = tmp_class_container$class_creation_18__bases_orig;
Py_INCREF(tmp_direct_call_arg1_18);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_18};
    tmp_assign_source_159 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_159 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_54;
}
assert(tmp_class_container$class_creation_18__bases == NULL);
tmp_class_container$class_creation_18__bases = tmp_assign_source_159;
}
{
PyObject *tmp_assign_source_160;
tmp_assign_source_160 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_18__class_decl_dict == NULL);
tmp_class_container$class_creation_18__class_decl_dict = tmp_assign_source_160;
}
{
PyObject *tmp_assign_source_161;
PyObject *tmp_metaclass_value_18;
nuitka_bool tmp_condition_result_69;
int tmp_truth_name_18;
PyObject *tmp_type_arg_35;
PyObject *tmp_expression_value_121;
PyObject *tmp_subscript_value_36;
PyObject *tmp_bases_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_truth_name_18 = CHECK_IF_TRUE(tmp_class_container$class_creation_18__bases);
if (tmp_truth_name_18 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_54;
}
tmp_condition_result_69 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_69 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_18;
} else {
    goto condexpr_false_18;
}
condexpr_true_18:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_expression_value_121 = tmp_class_container$class_creation_18__bases;
tmp_subscript_value_36 = const_int_0;
tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_121, tmp_subscript_value_36, 0);
if (tmp_type_arg_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_54;
}
tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_35);
CHECK_OBJECT(tmp_type_arg_35);
Py_DECREF(tmp_type_arg_35);
if (tmp_metaclass_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_54;
}
goto condexpr_end_18;
condexpr_false_18:;
tmp_metaclass_value_18 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_18);
condexpr_end_18:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_bases_value_18 = tmp_class_container$class_creation_18__bases;
tmp_assign_source_161 = SELECT_METACLASS(tstate, tmp_metaclass_value_18, tmp_bases_value_18);
CHECK_OBJECT(tmp_metaclass_value_18);
Py_DECREF(tmp_metaclass_value_18);
if (tmp_assign_source_161 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_54;
}
assert(tmp_class_container$class_creation_18__metaclass == NULL);
tmp_class_container$class_creation_18__metaclass = tmp_assign_source_161;
}
{
bool tmp_condition_result_70;
PyObject *tmp_expression_value_122;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_122 = tmp_class_container$class_creation_18__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_122, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_54;
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
PyObject *tmp_assign_source_162;
PyObject *tmp_called_value_35;
PyObject *tmp_expression_value_123;
PyObject *tmp_args_value_35;
PyObject *tmp_tuple_element_70;
PyObject *tmp_kwargs_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_123 = tmp_class_container$class_creation_18__metaclass;
tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_54;
}
tmp_tuple_element_70 = mod_consts.const_str_plain_ThreadRunStepExpired;
tmp_args_value_35 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_70);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_70 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_70);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_35 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 203;
tmp_assign_source_162 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_35, tmp_kwargs_value_35);
CHECK_OBJECT(tmp_called_value_35);
Py_DECREF(tmp_called_value_35);
CHECK_OBJECT(tmp_args_value_35);
Py_DECREF(tmp_args_value_35);
if (tmp_assign_source_162 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_54;
}
assert(tmp_class_container$class_creation_18__prepared == NULL);
tmp_class_container$class_creation_18__prepared = tmp_assign_source_162;
}
{
bool tmp_condition_result_71;
PyObject *tmp_operand_value_18;
PyObject *tmp_expression_value_124;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_expression_value_124 = tmp_class_container$class_creation_18__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_124, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_54;
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
PyObject *tmp_tuple_element_71;
PyObject *tmp_expression_value_125;
PyObject *tmp_name_value_28;
PyObject *tmp_default_value_18;
tmp_mod_expr_left_18 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_125 = tmp_class_container$class_creation_18__metaclass;
tmp_name_value_28 = const_str_plain___name__;
tmp_default_value_18 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_71 = BUILTIN_GETATTR(tstate, tmp_expression_value_125, tmp_name_value_28, tmp_default_value_18);
if (tmp_tuple_element_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_54;
}
tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_126;
PyObject *tmp_type_arg_36;
PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_71);
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_type_arg_36 = tmp_class_container$class_creation_18__prepared;
tmp_expression_value_126 = BUILTIN_TYPE1(tmp_type_arg_36);
assert(!(tmp_expression_value_126 == NULL));
tmp_tuple_element_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_126);
Py_DECREF(tmp_expression_value_126);
if (tmp_tuple_element_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_71);
}
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_mod_expr_right_18);
goto try_except_handler_54;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_make_exception_arg_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
CHECK_OBJECT(tmp_mod_expr_right_18);
Py_DECREF(tmp_mod_expr_right_18);
if (tmp_make_exception_arg_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_54;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 203;
tmp_raise_type_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_18);
CHECK_OBJECT(tmp_make_exception_arg_18);
Py_DECREF(tmp_make_exception_arg_18);
assert(!(tmp_raise_type_18 == NULL));
exception_state.exception_value = tmp_raise_type_18;
exception_lineno = 203;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_54;
}
branch_no_53:;
goto branch_end_52;
branch_no_52:;
{
PyObject *tmp_assign_source_163;
tmp_assign_source_163 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_18__prepared == NULL);
tmp_class_container$class_creation_18__prepared = tmp_assign_source_163;
}
branch_end_52:;
{
PyObject *tmp_assign_source_164;
{
PyObject *tmp_set_locals_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_set_locals_18 = tmp_class_container$class_creation_18__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203 = tmp_set_locals_18;
Py_INCREF(tmp_set_locals_18);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_56;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadRunStepExpired;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_56;
}
tmp_dictset_value = mod_consts.const_int_pos_203;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_56;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_56;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_19 = MAKE_CLASS_FRAME(tstate, code_objects_9ea12b80588ec973ae12498b82b808f8, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_19);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_19) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_36;
PyObject *tmp_ass_subscribed_36;
PyObject *tmp_ass_subscript_36;
tmp_ass_subvalue_36 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203, mod_consts.const_str_plain_RunStep);

if (tmp_ass_subvalue_36 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_36 = module_var_accessor_openai$types$beta$assistant_stream_event$RunStep(tstate);
if (unlikely(tmp_ass_subvalue_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RunStep);
}

if (tmp_ass_subvalue_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
        Py_INCREF(tmp_ass_subvalue_36);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_19;
    }
}

tmp_ass_subscribed_36 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_36);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 204;
type_description_2 = "o";
    goto frame_exception_exit_19;
}

if (tmp_ass_subscribed_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_36);

exception_lineno = 204;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
tmp_ass_subscript_36 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
CHECK_OBJECT(tmp_ass_subscribed_36);
Py_DECREF(tmp_ass_subscribed_36);
CHECK_OBJECT(tmp_ass_subvalue_36);
Py_DECREF(tmp_ass_subvalue_36);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
}
{
PyObject *tmp_ass_subvalue_37;
PyObject *tmp_expression_value_127;
PyObject *tmp_subscript_value_37;
PyObject *tmp_ass_subscribed_37;
PyObject *tmp_ass_subscript_37;
tmp_expression_value_127 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_127 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_127 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_127 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_127 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
        Py_INCREF(tmp_expression_value_127);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_19;
    }
}

tmp_subscript_value_37 = mod_consts.const_str_digest_8a34307dc2bc05439509724ff6037032;
tmp_ass_subvalue_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_127, tmp_subscript_value_37);
CHECK_OBJECT(tmp_expression_value_127);
Py_DECREF(tmp_expression_value_127);
if (tmp_ass_subvalue_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
tmp_ass_subscribed_37 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_37 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_37);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_19;
}

if (tmp_ass_subscribed_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_37);

exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
tmp_ass_subscript_37 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
CHECK_OBJECT(tmp_ass_subscribed_37);
Py_DECREF(tmp_ass_subscribed_37);
CHECK_OBJECT(tmp_ass_subvalue_37);
Py_DECREF(tmp_ass_subvalue_37);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_18;
frame_exception_exit_19:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_19, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_19->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_19, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_19,
    type_description_2,
    outline_17_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_19);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_18;
frame_no_exception_18:;
goto skip_nested_handling_18;
nested_frame_exit_18:;

goto try_except_handler_56;
skip_nested_handling_18:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_56;
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


exception_lineno = 203;

    goto try_except_handler_56;
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
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_56;
}
branch_no_54:;
{
PyObject *tmp_assign_source_165;
PyObject *tmp_called_value_36;
PyObject *tmp_args_value_36;
PyObject *tmp_tuple_element_72;
PyObject *tmp_kwargs_value_36;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_called_value_36 = tmp_class_container$class_creation_18__metaclass;
tmp_tuple_element_72 = mod_consts.const_str_plain_ThreadRunStepExpired;
tmp_args_value_36 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_72);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_72 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_72);
tmp_tuple_element_72 = locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203;
PyTuple_SET_ITEM0(tmp_args_value_36, 2, tmp_tuple_element_72);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_36 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 203;
tmp_assign_source_165 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_36, tmp_kwargs_value_36);
CHECK_OBJECT(tmp_args_value_36);
Py_DECREF(tmp_args_value_36);
if (tmp_assign_source_165 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto try_except_handler_56;
}
assert(outline_17_var___class__ == NULL);
outline_17_var___class__ = tmp_assign_source_165;
}
CHECK_OBJECT(outline_17_var___class__);
tmp_assign_source_164 = outline_17_var___class__;
Py_INCREF(tmp_assign_source_164);
goto try_return_handler_56;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_56:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203);
locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203 = NULL;
goto try_return_handler_55;
// Exception handler code:
try_except_handler_56:;
exception_keeper_lineno_54 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_54 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203);
locals_openai$types$beta$assistant_stream_event$$$class__18_ThreadRunStepExpired_203 = NULL;
// Re-raise.
exception_state = exception_keeper_name_54;
exception_lineno = exception_keeper_lineno_54;

goto try_except_handler_55;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_55:;
CHECK_OBJECT(outline_17_var___class__);
CHECK_OBJECT(outline_17_var___class__);
Py_DECREF(outline_17_var___class__);
outline_17_var___class__ = NULL;
goto outline_result_36;
// Exception handler code:
try_except_handler_55:;
exception_keeper_lineno_55 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_55 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_55;
exception_lineno = exception_keeper_lineno_55;

goto outline_exception_18;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_18:;
exception_lineno = 203;
goto try_except_handler_54;
outline_result_36:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadRunStepExpired, tmp_assign_source_164);
}
goto try_end_20;
// Exception handler code:
try_except_handler_54:;
exception_keeper_lineno_56 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_56 = exception_state;
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
exception_state = exception_keeper_name_56;
exception_lineno = exception_keeper_lineno_56;

goto frame_exception_exit_1;
// End of try:
try_end_20:;
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
{
PyObject *tmp_outline_return_value_19;
// Tried code:
{
PyObject *tmp_assign_source_166;
PyObject *tmp_tuple_element_73;
tmp_tuple_element_73 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_73 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;

    goto try_except_handler_57;
}
tmp_assign_source_166 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_166, 0, tmp_tuple_element_73);
assert(tmp_class_container$class_creation_19__bases_orig == NULL);
tmp_class_container$class_creation_19__bases_orig = tmp_assign_source_166;
}
{
PyObject *tmp_assign_source_167;
PyObject *tmp_direct_call_arg1_19;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_direct_call_arg1_19 = tmp_class_container$class_creation_19__bases_orig;
Py_INCREF(tmp_direct_call_arg1_19);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_19};
    tmp_assign_source_167 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_167 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_57;
}
assert(tmp_class_container$class_creation_19__bases == NULL);
tmp_class_container$class_creation_19__bases = tmp_assign_source_167;
}
{
PyObject *tmp_assign_source_168;
tmp_assign_source_168 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_19__class_decl_dict == NULL);
tmp_class_container$class_creation_19__class_decl_dict = tmp_assign_source_168;
}
{
PyObject *tmp_assign_source_169;
PyObject *tmp_metaclass_value_19;
nuitka_bool tmp_condition_result_73;
int tmp_truth_name_19;
PyObject *tmp_type_arg_37;
PyObject *tmp_expression_value_128;
PyObject *tmp_subscript_value_38;
PyObject *tmp_bases_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_truth_name_19 = CHECK_IF_TRUE(tmp_class_container$class_creation_19__bases);
if (tmp_truth_name_19 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_57;
}
tmp_condition_result_73 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_73 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_19;
} else {
    goto condexpr_false_19;
}
condexpr_true_19:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_expression_value_128 = tmp_class_container$class_creation_19__bases;
tmp_subscript_value_38 = const_int_0;
tmp_type_arg_37 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_128, tmp_subscript_value_38, 0);
if (tmp_type_arg_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_57;
}
tmp_metaclass_value_19 = BUILTIN_TYPE1(tmp_type_arg_37);
CHECK_OBJECT(tmp_type_arg_37);
Py_DECREF(tmp_type_arg_37);
if (tmp_metaclass_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_57;
}
goto condexpr_end_19;
condexpr_false_19:;
tmp_metaclass_value_19 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_19);
condexpr_end_19:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_bases_value_19 = tmp_class_container$class_creation_19__bases;
tmp_assign_source_169 = SELECT_METACLASS(tstate, tmp_metaclass_value_19, tmp_bases_value_19);
CHECK_OBJECT(tmp_metaclass_value_19);
Py_DECREF(tmp_metaclass_value_19);
if (tmp_assign_source_169 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_57;
}
assert(tmp_class_container$class_creation_19__metaclass == NULL);
tmp_class_container$class_creation_19__metaclass = tmp_assign_source_169;
}
{
bool tmp_condition_result_74;
PyObject *tmp_expression_value_129;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_129 = tmp_class_container$class_creation_19__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_129, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_57;
}
tmp_condition_result_74 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_74 != false) {
    goto branch_yes_55;
} else {
    goto branch_no_55;
}
}
branch_yes_55:;
{
PyObject *tmp_assign_source_170;
PyObject *tmp_called_value_37;
PyObject *tmp_expression_value_130;
PyObject *tmp_args_value_37;
PyObject *tmp_tuple_element_74;
PyObject *tmp_kwargs_value_37;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_130 = tmp_class_container$class_creation_19__metaclass;
tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_57;
}
tmp_tuple_element_74 = mod_consts.const_str_plain_ThreadMessageCreated;
tmp_args_value_37 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_74);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_tuple_element_74 = tmp_class_container$class_creation_19__bases;
PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_74);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
tmp_kwargs_value_37 = tmp_class_container$class_creation_19__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 210;
tmp_assign_source_170 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_37, tmp_kwargs_value_37);
CHECK_OBJECT(tmp_called_value_37);
Py_DECREF(tmp_called_value_37);
CHECK_OBJECT(tmp_args_value_37);
Py_DECREF(tmp_args_value_37);
if (tmp_assign_source_170 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_57;
}
assert(tmp_class_container$class_creation_19__prepared == NULL);
tmp_class_container$class_creation_19__prepared = tmp_assign_source_170;
}
{
bool tmp_condition_result_75;
PyObject *tmp_operand_value_19;
PyObject *tmp_expression_value_131;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_expression_value_131 = tmp_class_container$class_creation_19__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_131, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_57;
}
tmp_operand_value_19 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
assert(!(tmp_res == -1));
tmp_condition_result_75 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_75 != false) {
    goto branch_yes_56;
} else {
    goto branch_no_56;
}
}
branch_yes_56:;
{
PyObject *tmp_raise_type_19;
PyObject *tmp_make_exception_arg_19;
PyObject *tmp_mod_expr_left_19;
PyObject *tmp_mod_expr_right_19;
PyObject *tmp_tuple_element_75;
PyObject *tmp_expression_value_132;
PyObject *tmp_name_value_29;
PyObject *tmp_default_value_19;
tmp_mod_expr_left_19 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_132 = tmp_class_container$class_creation_19__metaclass;
tmp_name_value_29 = const_str_plain___name__;
tmp_default_value_19 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_75 = BUILTIN_GETATTR(tstate, tmp_expression_value_132, tmp_name_value_29, tmp_default_value_19);
if (tmp_tuple_element_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_57;
}
tmp_mod_expr_right_19 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_133;
PyObject *tmp_type_arg_38;
PyTuple_SET_ITEM(tmp_mod_expr_right_19, 0, tmp_tuple_element_75);
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_type_arg_38 = tmp_class_container$class_creation_19__prepared;
tmp_expression_value_133 = BUILTIN_TYPE1(tmp_type_arg_38);
assert(!(tmp_expression_value_133 == NULL));
tmp_tuple_element_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_133);
Py_DECREF(tmp_expression_value_133);
if (tmp_tuple_element_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto tuple_build_exception_19;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_19, 1, tmp_tuple_element_75);
}
goto tuple_build_no_exception_19;
// Exception handling pass through code for tuple_build:
tuple_build_exception_19:;
Py_DECREF(tmp_mod_expr_right_19);
goto try_except_handler_57;
// Finished with no exception for tuple_build:
tuple_build_no_exception_19:;
tmp_make_exception_arg_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
CHECK_OBJECT(tmp_mod_expr_right_19);
Py_DECREF(tmp_mod_expr_right_19);
if (tmp_make_exception_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_57;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 210;
tmp_raise_type_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_19);
CHECK_OBJECT(tmp_make_exception_arg_19);
Py_DECREF(tmp_make_exception_arg_19);
assert(!(tmp_raise_type_19 == NULL));
exception_state.exception_value = tmp_raise_type_19;
exception_lineno = 210;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_57;
}
branch_no_56:;
goto branch_end_55;
branch_no_55:;
{
PyObject *tmp_assign_source_171;
tmp_assign_source_171 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_19__prepared == NULL);
tmp_class_container$class_creation_19__prepared = tmp_assign_source_171;
}
branch_end_55:;
{
PyObject *tmp_assign_source_172;
{
PyObject *tmp_set_locals_19;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_set_locals_19 = tmp_class_container$class_creation_19__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210 = tmp_set_locals_19;
Py_INCREF(tmp_set_locals_19);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_59;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadMessageCreated;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_59;
}
tmp_dictset_value = mod_consts.const_int_pos_210;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_59;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_59;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_20 = MAKE_CLASS_FRAME(tstate, code_objects_0aac88a9a5b9811125d2baf380445d4b, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_20);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_20) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_38;
PyObject *tmp_ass_subscribed_38;
PyObject *tmp_ass_subscript_38;
tmp_ass_subvalue_38 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210, mod_consts.const_str_plain_Message);

if (tmp_ass_subvalue_38 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_38 = module_var_accessor_openai$types$beta$assistant_stream_event$Message(tstate);
if (unlikely(tmp_ass_subvalue_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Message);
}

if (tmp_ass_subvalue_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_20;
}
        Py_INCREF(tmp_ass_subvalue_38);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_20;
    }
}

tmp_ass_subscribed_38 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_38);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_20;
}

if (tmp_ass_subscribed_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_38);

exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_20;
}
tmp_ass_subscript_38 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
CHECK_OBJECT(tmp_ass_subscribed_38);
Py_DECREF(tmp_ass_subscribed_38);
CHECK_OBJECT(tmp_ass_subvalue_38);
Py_DECREF(tmp_ass_subvalue_38);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_20;
}
}
{
PyObject *tmp_ass_subvalue_39;
PyObject *tmp_expression_value_134;
PyObject *tmp_subscript_value_39;
PyObject *tmp_ass_subscribed_39;
PyObject *tmp_ass_subscript_39;
tmp_expression_value_134 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_134 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_134 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_134 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_134 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_20;
}
        Py_INCREF(tmp_expression_value_134);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_20;
    }
}

tmp_subscript_value_39 = mod_consts.const_str_digest_a9ebaf2124eba532304030cf770fb271;
tmp_ass_subvalue_39 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_134, tmp_subscript_value_39);
CHECK_OBJECT(tmp_expression_value_134);
Py_DECREF(tmp_expression_value_134);
if (tmp_ass_subvalue_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_20;
}
tmp_ass_subscribed_39 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_39 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_39);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_20;
}

if (tmp_ass_subscribed_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_39);

exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_20;
}
tmp_ass_subscript_39 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
CHECK_OBJECT(tmp_ass_subscribed_39);
Py_DECREF(tmp_ass_subscribed_39);
CHECK_OBJECT(tmp_ass_subvalue_39);
Py_DECREF(tmp_ass_subvalue_39);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_20;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_19;
frame_exception_exit_20:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_20, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_20->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_20, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_20,
    type_description_2,
    outline_18_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_20);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_19;
frame_no_exception_19:;
goto skip_nested_handling_19;
nested_frame_exit_19:;

goto try_except_handler_59;
skip_nested_handling_19:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_59;
}
{
nuitka_bool tmp_condition_result_76;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_cmp_expr_left_19 = tmp_class_container$class_creation_19__bases;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_cmp_expr_right_19 = tmp_class_container$class_creation_19__bases_orig;
tmp_condition_result_76 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
if (tmp_condition_result_76 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_59;
}
if (tmp_condition_result_76 == NUITKA_BOOL_TRUE) {
    goto branch_yes_57;
} else {
    goto branch_no_57;
}
}
branch_yes_57:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_19__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_59;
}
branch_no_57:;
{
PyObject *tmp_assign_source_173;
PyObject *tmp_called_value_38;
PyObject *tmp_args_value_38;
PyObject *tmp_tuple_element_76;
PyObject *tmp_kwargs_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_called_value_38 = tmp_class_container$class_creation_19__metaclass;
tmp_tuple_element_76 = mod_consts.const_str_plain_ThreadMessageCreated;
tmp_args_value_38 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_76);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_tuple_element_76 = tmp_class_container$class_creation_19__bases;
PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_76);
tmp_tuple_element_76 = locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210;
PyTuple_SET_ITEM0(tmp_args_value_38, 2, tmp_tuple_element_76);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
tmp_kwargs_value_38 = tmp_class_container$class_creation_19__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 210;
tmp_assign_source_173 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_38, tmp_kwargs_value_38);
CHECK_OBJECT(tmp_args_value_38);
Py_DECREF(tmp_args_value_38);
if (tmp_assign_source_173 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;

    goto try_except_handler_59;
}
assert(outline_18_var___class__ == NULL);
outline_18_var___class__ = tmp_assign_source_173;
}
CHECK_OBJECT(outline_18_var___class__);
tmp_assign_source_172 = outline_18_var___class__;
Py_INCREF(tmp_assign_source_172);
goto try_return_handler_59;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_59:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210);
locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210 = NULL;
goto try_return_handler_58;
// Exception handler code:
try_except_handler_59:;
exception_keeper_lineno_57 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_57 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210);
locals_openai$types$beta$assistant_stream_event$$$class__19_ThreadMessageCreated_210 = NULL;
// Re-raise.
exception_state = exception_keeper_name_57;
exception_lineno = exception_keeper_lineno_57;

goto try_except_handler_58;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_58:;
CHECK_OBJECT(outline_18_var___class__);
CHECK_OBJECT(outline_18_var___class__);
Py_DECREF(outline_18_var___class__);
outline_18_var___class__ = NULL;
goto outline_result_38;
// Exception handler code:
try_except_handler_58:;
exception_keeper_lineno_58 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_58 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_58;
exception_lineno = exception_keeper_lineno_58;

goto outline_exception_19;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_19:;
exception_lineno = 210;
goto try_except_handler_57;
outline_result_38:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageCreated, tmp_assign_source_172);
}
goto try_end_21;
// Exception handler code:
try_except_handler_57:;
exception_keeper_lineno_59 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_59 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_19__bases_orig);
tmp_class_container$class_creation_19__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__bases);
tmp_class_container$class_creation_19__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__class_decl_dict);
tmp_class_container$class_creation_19__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__metaclass);
tmp_class_container$class_creation_19__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__prepared);
tmp_class_container$class_creation_19__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_59;
exception_lineno = exception_keeper_lineno_59;

goto frame_exception_exit_1;
// End of try:
try_end_21:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
Py_DECREF(tmp_class_container$class_creation_19__bases_orig);
tmp_class_container$class_creation_19__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
Py_DECREF(tmp_class_container$class_creation_19__bases);
tmp_class_container$class_creation_19__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_19__class_decl_dict);
tmp_class_container$class_creation_19__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
Py_DECREF(tmp_class_container$class_creation_19__metaclass);
tmp_class_container$class_creation_19__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
Py_DECREF(tmp_class_container$class_creation_19__prepared);
tmp_class_container$class_creation_19__prepared = NULL;
tmp_outline_return_value_19 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_19);
goto outline_result_37;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_37:;
CHECK_OBJECT(tmp_outline_return_value_19);
Py_DECREF(tmp_outline_return_value_19);
}
{
PyObject *tmp_outline_return_value_20;
// Tried code:
{
PyObject *tmp_assign_source_174;
PyObject *tmp_tuple_element_77;
tmp_tuple_element_77 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_77 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_77 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;

    goto try_except_handler_60;
}
tmp_assign_source_174 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_174, 0, tmp_tuple_element_77);
assert(tmp_class_container$class_creation_20__bases_orig == NULL);
tmp_class_container$class_creation_20__bases_orig = tmp_assign_source_174;
}
{
PyObject *tmp_assign_source_175;
PyObject *tmp_direct_call_arg1_20;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_direct_call_arg1_20 = tmp_class_container$class_creation_20__bases_orig;
Py_INCREF(tmp_direct_call_arg1_20);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_20};
    tmp_assign_source_175 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_175 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_60;
}
assert(tmp_class_container$class_creation_20__bases == NULL);
tmp_class_container$class_creation_20__bases = tmp_assign_source_175;
}
{
PyObject *tmp_assign_source_176;
tmp_assign_source_176 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_20__class_decl_dict == NULL);
tmp_class_container$class_creation_20__class_decl_dict = tmp_assign_source_176;
}
{
PyObject *tmp_assign_source_177;
PyObject *tmp_metaclass_value_20;
nuitka_bool tmp_condition_result_77;
int tmp_truth_name_20;
PyObject *tmp_type_arg_39;
PyObject *tmp_expression_value_135;
PyObject *tmp_subscript_value_40;
PyObject *tmp_bases_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_truth_name_20 = CHECK_IF_TRUE(tmp_class_container$class_creation_20__bases);
if (tmp_truth_name_20 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_60;
}
tmp_condition_result_77 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_77 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_20;
} else {
    goto condexpr_false_20;
}
condexpr_true_20:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_expression_value_135 = tmp_class_container$class_creation_20__bases;
tmp_subscript_value_40 = const_int_0;
tmp_type_arg_39 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_135, tmp_subscript_value_40, 0);
if (tmp_type_arg_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_60;
}
tmp_metaclass_value_20 = BUILTIN_TYPE1(tmp_type_arg_39);
CHECK_OBJECT(tmp_type_arg_39);
Py_DECREF(tmp_type_arg_39);
if (tmp_metaclass_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_60;
}
goto condexpr_end_20;
condexpr_false_20:;
tmp_metaclass_value_20 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_20);
condexpr_end_20:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_bases_value_20 = tmp_class_container$class_creation_20__bases;
tmp_assign_source_177 = SELECT_METACLASS(tstate, tmp_metaclass_value_20, tmp_bases_value_20);
CHECK_OBJECT(tmp_metaclass_value_20);
Py_DECREF(tmp_metaclass_value_20);
if (tmp_assign_source_177 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_60;
}
assert(tmp_class_container$class_creation_20__metaclass == NULL);
tmp_class_container$class_creation_20__metaclass = tmp_assign_source_177;
}
{
bool tmp_condition_result_78;
PyObject *tmp_expression_value_136;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_136 = tmp_class_container$class_creation_20__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_136, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_60;
}
tmp_condition_result_78 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_78 != false) {
    goto branch_yes_58;
} else {
    goto branch_no_58;
}
}
branch_yes_58:;
{
PyObject *tmp_assign_source_178;
PyObject *tmp_called_value_39;
PyObject *tmp_expression_value_137;
PyObject *tmp_args_value_39;
PyObject *tmp_tuple_element_78;
PyObject *tmp_kwargs_value_39;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_137 = tmp_class_container$class_creation_20__metaclass;
tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_60;
}
tmp_tuple_element_78 = mod_consts.const_str_plain_ThreadMessageInProgress;
tmp_args_value_39 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_78);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_tuple_element_78 = tmp_class_container$class_creation_20__bases;
PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_78);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
tmp_kwargs_value_39 = tmp_class_container$class_creation_20__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 220;
tmp_assign_source_178 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_39, tmp_kwargs_value_39);
CHECK_OBJECT(tmp_called_value_39);
Py_DECREF(tmp_called_value_39);
CHECK_OBJECT(tmp_args_value_39);
Py_DECREF(tmp_args_value_39);
if (tmp_assign_source_178 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_60;
}
assert(tmp_class_container$class_creation_20__prepared == NULL);
tmp_class_container$class_creation_20__prepared = tmp_assign_source_178;
}
{
bool tmp_condition_result_79;
PyObject *tmp_operand_value_20;
PyObject *tmp_expression_value_138;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_expression_value_138 = tmp_class_container$class_creation_20__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_138, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_60;
}
tmp_operand_value_20 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
assert(!(tmp_res == -1));
tmp_condition_result_79 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_79 != false) {
    goto branch_yes_59;
} else {
    goto branch_no_59;
}
}
branch_yes_59:;
{
PyObject *tmp_raise_type_20;
PyObject *tmp_make_exception_arg_20;
PyObject *tmp_mod_expr_left_20;
PyObject *tmp_mod_expr_right_20;
PyObject *tmp_tuple_element_79;
PyObject *tmp_expression_value_139;
PyObject *tmp_name_value_30;
PyObject *tmp_default_value_20;
tmp_mod_expr_left_20 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_139 = tmp_class_container$class_creation_20__metaclass;
tmp_name_value_30 = const_str_plain___name__;
tmp_default_value_20 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_79 = BUILTIN_GETATTR(tstate, tmp_expression_value_139, tmp_name_value_30, tmp_default_value_20);
if (tmp_tuple_element_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_60;
}
tmp_mod_expr_right_20 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_140;
PyObject *tmp_type_arg_40;
PyTuple_SET_ITEM(tmp_mod_expr_right_20, 0, tmp_tuple_element_79);
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_type_arg_40 = tmp_class_container$class_creation_20__prepared;
tmp_expression_value_140 = BUILTIN_TYPE1(tmp_type_arg_40);
assert(!(tmp_expression_value_140 == NULL));
tmp_tuple_element_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_140);
Py_DECREF(tmp_expression_value_140);
if (tmp_tuple_element_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto tuple_build_exception_20;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_20, 1, tmp_tuple_element_79);
}
goto tuple_build_no_exception_20;
// Exception handling pass through code for tuple_build:
tuple_build_exception_20:;
Py_DECREF(tmp_mod_expr_right_20);
goto try_except_handler_60;
// Finished with no exception for tuple_build:
tuple_build_no_exception_20:;
tmp_make_exception_arg_20 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_20, tmp_mod_expr_right_20);
CHECK_OBJECT(tmp_mod_expr_right_20);
Py_DECREF(tmp_mod_expr_right_20);
if (tmp_make_exception_arg_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_60;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 220;
tmp_raise_type_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_20);
CHECK_OBJECT(tmp_make_exception_arg_20);
Py_DECREF(tmp_make_exception_arg_20);
assert(!(tmp_raise_type_20 == NULL));
exception_state.exception_value = tmp_raise_type_20;
exception_lineno = 220;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_60;
}
branch_no_59:;
goto branch_end_58;
branch_no_58:;
{
PyObject *tmp_assign_source_179;
tmp_assign_source_179 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_20__prepared == NULL);
tmp_class_container$class_creation_20__prepared = tmp_assign_source_179;
}
branch_end_58:;
{
PyObject *tmp_assign_source_180;
{
PyObject *tmp_set_locals_20;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_set_locals_20 = tmp_class_container$class_creation_20__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220 = tmp_set_locals_20;
Py_INCREF(tmp_set_locals_20);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_62;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadMessageInProgress;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_62;
}
tmp_dictset_value = mod_consts.const_int_pos_220;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_62;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_62;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_21 = MAKE_CLASS_FRAME(tstate, code_objects_4ccf949ec8e1b66127caec8a05bd40ab, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_21);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_21) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_40;
PyObject *tmp_ass_subscribed_40;
PyObject *tmp_ass_subscript_40;
tmp_ass_subvalue_40 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220, mod_consts.const_str_plain_Message);

if (tmp_ass_subvalue_40 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_40 = module_var_accessor_openai$types$beta$assistant_stream_event$Message(tstate);
if (unlikely(tmp_ass_subvalue_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Message);
}

if (tmp_ass_subvalue_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 221;
type_description_2 = "o";
    goto frame_exception_exit_21;
}
        Py_INCREF(tmp_ass_subvalue_40);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_21;
    }
}

tmp_ass_subscribed_40 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_40);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 221;
type_description_2 = "o";
    goto frame_exception_exit_21;
}

if (tmp_ass_subscribed_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_40);

exception_lineno = 221;
type_description_2 = "o";
    goto frame_exception_exit_21;
}
tmp_ass_subscript_40 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
CHECK_OBJECT(tmp_ass_subscribed_40);
Py_DECREF(tmp_ass_subscribed_40);
CHECK_OBJECT(tmp_ass_subvalue_40);
Py_DECREF(tmp_ass_subvalue_40);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_2 = "o";
    goto frame_exception_exit_21;
}
}
{
PyObject *tmp_ass_subvalue_41;
PyObject *tmp_expression_value_141;
PyObject *tmp_subscript_value_41;
PyObject *tmp_ass_subscribed_41;
PyObject *tmp_ass_subscript_41;
tmp_expression_value_141 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_141 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_141 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_141 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_141 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_2 = "o";
    goto frame_exception_exit_21;
}
        Py_INCREF(tmp_expression_value_141);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_21;
    }
}

tmp_subscript_value_41 = mod_consts.const_str_digest_77243e396bb74de0cc02ba98fe4c2502;
tmp_ass_subvalue_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_141, tmp_subscript_value_41);
CHECK_OBJECT(tmp_expression_value_141);
Py_DECREF(tmp_expression_value_141);
if (tmp_ass_subvalue_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_2 = "o";
    goto frame_exception_exit_21;
}
tmp_ass_subscribed_41 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_41 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_41);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 227;
type_description_2 = "o";
    goto frame_exception_exit_21;
}

if (tmp_ass_subscribed_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_41);

exception_lineno = 227;
type_description_2 = "o";
    goto frame_exception_exit_21;
}
tmp_ass_subscript_41 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
CHECK_OBJECT(tmp_ass_subscribed_41);
Py_DECREF(tmp_ass_subscribed_41);
CHECK_OBJECT(tmp_ass_subvalue_41);
Py_DECREF(tmp_ass_subvalue_41);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_2 = "o";
    goto frame_exception_exit_21;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_20;
frame_exception_exit_21:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_21, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_21->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_21, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_21,
    type_description_2,
    outline_19_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_21);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_20;
frame_no_exception_20:;
goto skip_nested_handling_20;
nested_frame_exit_20:;

goto try_except_handler_62;
skip_nested_handling_20:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_62;
}
{
nuitka_bool tmp_condition_result_80;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_cmp_expr_left_20 = tmp_class_container$class_creation_20__bases;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_cmp_expr_right_20 = tmp_class_container$class_creation_20__bases_orig;
tmp_condition_result_80 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
if (tmp_condition_result_80 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_62;
}
if (tmp_condition_result_80 == NUITKA_BOOL_TRUE) {
    goto branch_yes_60;
} else {
    goto branch_no_60;
}
}
branch_yes_60:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_20__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_62;
}
branch_no_60:;
{
PyObject *tmp_assign_source_181;
PyObject *tmp_called_value_40;
PyObject *tmp_args_value_40;
PyObject *tmp_tuple_element_80;
PyObject *tmp_kwargs_value_40;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_called_value_40 = tmp_class_container$class_creation_20__metaclass;
tmp_tuple_element_80 = mod_consts.const_str_plain_ThreadMessageInProgress;
tmp_args_value_40 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_80);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_tuple_element_80 = tmp_class_container$class_creation_20__bases;
PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_80);
tmp_tuple_element_80 = locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220;
PyTuple_SET_ITEM0(tmp_args_value_40, 2, tmp_tuple_element_80);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
tmp_kwargs_value_40 = tmp_class_container$class_creation_20__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 220;
tmp_assign_source_181 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_40, tmp_kwargs_value_40);
CHECK_OBJECT(tmp_args_value_40);
Py_DECREF(tmp_args_value_40);
if (tmp_assign_source_181 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_62;
}
assert(outline_19_var___class__ == NULL);
outline_19_var___class__ = tmp_assign_source_181;
}
CHECK_OBJECT(outline_19_var___class__);
tmp_assign_source_180 = outline_19_var___class__;
Py_INCREF(tmp_assign_source_180);
goto try_return_handler_62;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_62:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220);
locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220 = NULL;
goto try_return_handler_61;
// Exception handler code:
try_except_handler_62:;
exception_keeper_lineno_60 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_60 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220);
locals_openai$types$beta$assistant_stream_event$$$class__20_ThreadMessageInProgress_220 = NULL;
// Re-raise.
exception_state = exception_keeper_name_60;
exception_lineno = exception_keeper_lineno_60;

goto try_except_handler_61;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_61:;
CHECK_OBJECT(outline_19_var___class__);
CHECK_OBJECT(outline_19_var___class__);
Py_DECREF(outline_19_var___class__);
outline_19_var___class__ = NULL;
goto outline_result_40;
// Exception handler code:
try_except_handler_61:;
exception_keeper_lineno_61 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_61 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_61;
exception_lineno = exception_keeper_lineno_61;

goto outline_exception_20;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_20:;
exception_lineno = 220;
goto try_except_handler_60;
outline_result_40:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageInProgress, tmp_assign_source_180);
}
goto try_end_22;
// Exception handler code:
try_except_handler_60:;
exception_keeper_lineno_62 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_62 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_20__bases_orig);
tmp_class_container$class_creation_20__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__bases);
tmp_class_container$class_creation_20__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__class_decl_dict);
tmp_class_container$class_creation_20__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__metaclass);
tmp_class_container$class_creation_20__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__prepared);
tmp_class_container$class_creation_20__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_62;
exception_lineno = exception_keeper_lineno_62;

goto frame_exception_exit_1;
// End of try:
try_end_22:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
Py_DECREF(tmp_class_container$class_creation_20__bases_orig);
tmp_class_container$class_creation_20__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
Py_DECREF(tmp_class_container$class_creation_20__bases);
tmp_class_container$class_creation_20__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_20__class_decl_dict);
tmp_class_container$class_creation_20__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
Py_DECREF(tmp_class_container$class_creation_20__metaclass);
tmp_class_container$class_creation_20__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
Py_DECREF(tmp_class_container$class_creation_20__prepared);
tmp_class_container$class_creation_20__prepared = NULL;
tmp_outline_return_value_20 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_20);
goto outline_result_39;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_39:;
CHECK_OBJECT(tmp_outline_return_value_20);
Py_DECREF(tmp_outline_return_value_20);
}
{
PyObject *tmp_outline_return_value_21;
// Tried code:
{
PyObject *tmp_assign_source_182;
PyObject *tmp_tuple_element_81;
tmp_tuple_element_81 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_81 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_81 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 230;

    goto try_except_handler_63;
}
tmp_assign_source_182 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_182, 0, tmp_tuple_element_81);
assert(tmp_class_container$class_creation_21__bases_orig == NULL);
tmp_class_container$class_creation_21__bases_orig = tmp_assign_source_182;
}
{
PyObject *tmp_assign_source_183;
PyObject *tmp_direct_call_arg1_21;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
tmp_direct_call_arg1_21 = tmp_class_container$class_creation_21__bases_orig;
Py_INCREF(tmp_direct_call_arg1_21);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_21};
    tmp_assign_source_183 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_183 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_63;
}
assert(tmp_class_container$class_creation_21__bases == NULL);
tmp_class_container$class_creation_21__bases = tmp_assign_source_183;
}
{
PyObject *tmp_assign_source_184;
tmp_assign_source_184 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_21__class_decl_dict == NULL);
tmp_class_container$class_creation_21__class_decl_dict = tmp_assign_source_184;
}
{
PyObject *tmp_assign_source_185;
PyObject *tmp_metaclass_value_21;
nuitka_bool tmp_condition_result_81;
int tmp_truth_name_21;
PyObject *tmp_type_arg_41;
PyObject *tmp_expression_value_142;
PyObject *tmp_subscript_value_42;
PyObject *tmp_bases_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_truth_name_21 = CHECK_IF_TRUE(tmp_class_container$class_creation_21__bases);
if (tmp_truth_name_21 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_63;
}
tmp_condition_result_81 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_81 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_21;
} else {
    goto condexpr_false_21;
}
condexpr_true_21:;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_expression_value_142 = tmp_class_container$class_creation_21__bases;
tmp_subscript_value_42 = const_int_0;
tmp_type_arg_41 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_142, tmp_subscript_value_42, 0);
if (tmp_type_arg_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_63;
}
tmp_metaclass_value_21 = BUILTIN_TYPE1(tmp_type_arg_41);
CHECK_OBJECT(tmp_type_arg_41);
Py_DECREF(tmp_type_arg_41);
if (tmp_metaclass_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_63;
}
goto condexpr_end_21;
condexpr_false_21:;
tmp_metaclass_value_21 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_21);
condexpr_end_21:;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_bases_value_21 = tmp_class_container$class_creation_21__bases;
tmp_assign_source_185 = SELECT_METACLASS(tstate, tmp_metaclass_value_21, tmp_bases_value_21);
CHECK_OBJECT(tmp_metaclass_value_21);
Py_DECREF(tmp_metaclass_value_21);
if (tmp_assign_source_185 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_63;
}
assert(tmp_class_container$class_creation_21__metaclass == NULL);
tmp_class_container$class_creation_21__metaclass = tmp_assign_source_185;
}
{
bool tmp_condition_result_82;
PyObject *tmp_expression_value_143;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_expression_value_143 = tmp_class_container$class_creation_21__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_143, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_63;
}
tmp_condition_result_82 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_82 != false) {
    goto branch_yes_61;
} else {
    goto branch_no_61;
}
}
branch_yes_61:;
{
PyObject *tmp_assign_source_186;
PyObject *tmp_called_value_41;
PyObject *tmp_expression_value_144;
PyObject *tmp_args_value_41;
PyObject *tmp_tuple_element_82;
PyObject *tmp_kwargs_value_41;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_expression_value_144 = tmp_class_container$class_creation_21__metaclass;
tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_63;
}
tmp_tuple_element_82 = mod_consts.const_str_plain_ThreadMessageDelta;
tmp_args_value_41 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_41, 0, tmp_tuple_element_82);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_tuple_element_82 = tmp_class_container$class_creation_21__bases;
PyTuple_SET_ITEM0(tmp_args_value_41, 1, tmp_tuple_element_82);
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
tmp_kwargs_value_41 = tmp_class_container$class_creation_21__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 230;
tmp_assign_source_186 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_41, tmp_kwargs_value_41);
CHECK_OBJECT(tmp_called_value_41);
Py_DECREF(tmp_called_value_41);
CHECK_OBJECT(tmp_args_value_41);
Py_DECREF(tmp_args_value_41);
if (tmp_assign_source_186 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_63;
}
assert(tmp_class_container$class_creation_21__prepared == NULL);
tmp_class_container$class_creation_21__prepared = tmp_assign_source_186;
}
{
bool tmp_condition_result_83;
PyObject *tmp_operand_value_21;
PyObject *tmp_expression_value_145;
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
tmp_expression_value_145 = tmp_class_container$class_creation_21__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_145, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_63;
}
tmp_operand_value_21 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_21);
assert(!(tmp_res == -1));
tmp_condition_result_83 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_83 != false) {
    goto branch_yes_62;
} else {
    goto branch_no_62;
}
}
branch_yes_62:;
{
PyObject *tmp_raise_type_21;
PyObject *tmp_make_exception_arg_21;
PyObject *tmp_mod_expr_left_21;
PyObject *tmp_mod_expr_right_21;
PyObject *tmp_tuple_element_83;
PyObject *tmp_expression_value_146;
PyObject *tmp_name_value_31;
PyObject *tmp_default_value_21;
tmp_mod_expr_left_21 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_expression_value_146 = tmp_class_container$class_creation_21__metaclass;
tmp_name_value_31 = const_str_plain___name__;
tmp_default_value_21 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_83 = BUILTIN_GETATTR(tstate, tmp_expression_value_146, tmp_name_value_31, tmp_default_value_21);
if (tmp_tuple_element_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_63;
}
tmp_mod_expr_right_21 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_147;
PyObject *tmp_type_arg_42;
PyTuple_SET_ITEM(tmp_mod_expr_right_21, 0, tmp_tuple_element_83);
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
tmp_type_arg_42 = tmp_class_container$class_creation_21__prepared;
tmp_expression_value_147 = BUILTIN_TYPE1(tmp_type_arg_42);
assert(!(tmp_expression_value_147 == NULL));
tmp_tuple_element_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_147);
Py_DECREF(tmp_expression_value_147);
if (tmp_tuple_element_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto tuple_build_exception_21;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_21, 1, tmp_tuple_element_83);
}
goto tuple_build_no_exception_21;
// Exception handling pass through code for tuple_build:
tuple_build_exception_21:;
Py_DECREF(tmp_mod_expr_right_21);
goto try_except_handler_63;
// Finished with no exception for tuple_build:
tuple_build_no_exception_21:;
tmp_make_exception_arg_21 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_21, tmp_mod_expr_right_21);
CHECK_OBJECT(tmp_mod_expr_right_21);
Py_DECREF(tmp_mod_expr_right_21);
if (tmp_make_exception_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_63;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 230;
tmp_raise_type_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_21);
CHECK_OBJECT(tmp_make_exception_arg_21);
Py_DECREF(tmp_make_exception_arg_21);
assert(!(tmp_raise_type_21 == NULL));
exception_state.exception_value = tmp_raise_type_21;
exception_lineno = 230;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_63;
}
branch_no_62:;
goto branch_end_61;
branch_no_61:;
{
PyObject *tmp_assign_source_187;
tmp_assign_source_187 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_21__prepared == NULL);
tmp_class_container$class_creation_21__prepared = tmp_assign_source_187;
}
branch_end_61:;
{
PyObject *tmp_assign_source_188;
{
PyObject *tmp_set_locals_21;
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
tmp_set_locals_21 = tmp_class_container$class_creation_21__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230 = tmp_set_locals_21;
Py_INCREF(tmp_set_locals_21);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_65;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadMessageDelta;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_65;
}
tmp_dictset_value = mod_consts.const_int_pos_230;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_65;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_65;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_22 = MAKE_CLASS_FRAME(tstate, code_objects_f0fbe4ce622797780a5a21771d33e17f, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_22);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_22) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_42;
PyObject *tmp_ass_subscribed_42;
PyObject *tmp_ass_subscript_42;
tmp_ass_subvalue_42 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230, mod_consts.const_str_plain_MessageDeltaEvent);

if (tmp_ass_subvalue_42 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_42 = module_var_accessor_openai$types$beta$assistant_stream_event$MessageDeltaEvent(tstate);
if (unlikely(tmp_ass_subvalue_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MessageDeltaEvent);
}

if (tmp_ass_subvalue_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;
type_description_2 = "o";
    goto frame_exception_exit_22;
}
        Py_INCREF(tmp_ass_subvalue_42);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_22;
    }
}

tmp_ass_subscribed_42 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_42 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_42);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 231;
type_description_2 = "o";
    goto frame_exception_exit_22;
}

if (tmp_ass_subscribed_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_42);

exception_lineno = 231;
type_description_2 = "o";
    goto frame_exception_exit_22;
}
tmp_ass_subscript_42 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42);
CHECK_OBJECT(tmp_ass_subscribed_42);
Py_DECREF(tmp_ass_subscribed_42);
CHECK_OBJECT(tmp_ass_subvalue_42);
Py_DECREF(tmp_ass_subvalue_42);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_2 = "o";
    goto frame_exception_exit_22;
}
}
{
PyObject *tmp_ass_subvalue_43;
PyObject *tmp_expression_value_148;
PyObject *tmp_subscript_value_43;
PyObject *tmp_ass_subscribed_43;
PyObject *tmp_ass_subscript_43;
tmp_expression_value_148 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_148 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_148 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_148 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_148 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 237;
type_description_2 = "o";
    goto frame_exception_exit_22;
}
        Py_INCREF(tmp_expression_value_148);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_22;
    }
}

tmp_subscript_value_43 = mod_consts.const_str_digest_63bc27c04147de47f8222c9a335db2bd;
tmp_ass_subvalue_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_148, tmp_subscript_value_43);
CHECK_OBJECT(tmp_expression_value_148);
Py_DECREF(tmp_expression_value_148);
if (tmp_ass_subvalue_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "o";
    goto frame_exception_exit_22;
}
tmp_ass_subscribed_43 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_43 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_43);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 237;
type_description_2 = "o";
    goto frame_exception_exit_22;
}

if (tmp_ass_subscribed_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_43);

exception_lineno = 237;
type_description_2 = "o";
    goto frame_exception_exit_22;
}
tmp_ass_subscript_43 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43);
CHECK_OBJECT(tmp_ass_subscribed_43);
Py_DECREF(tmp_ass_subscribed_43);
CHECK_OBJECT(tmp_ass_subvalue_43);
Py_DECREF(tmp_ass_subvalue_43);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "o";
    goto frame_exception_exit_22;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_21;
frame_exception_exit_22:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_22, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_22->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_22, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_22,
    type_description_2,
    outline_20_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_22);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_21;
frame_no_exception_21:;
goto skip_nested_handling_21;
nested_frame_exit_21:;

goto try_except_handler_65;
skip_nested_handling_21:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_65;
}
{
nuitka_bool tmp_condition_result_84;
PyObject *tmp_cmp_expr_left_21;
PyObject *tmp_cmp_expr_right_21;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_cmp_expr_left_21 = tmp_class_container$class_creation_21__bases;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
tmp_cmp_expr_right_21 = tmp_class_container$class_creation_21__bases_orig;
tmp_condition_result_84 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
if (tmp_condition_result_84 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_65;
}
if (tmp_condition_result_84 == NUITKA_BOOL_TRUE) {
    goto branch_yes_63;
} else {
    goto branch_no_63;
}
}
branch_yes_63:;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_21__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_65;
}
branch_no_63:;
{
PyObject *tmp_assign_source_189;
PyObject *tmp_called_value_42;
PyObject *tmp_args_value_42;
PyObject *tmp_tuple_element_84;
PyObject *tmp_kwargs_value_42;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_called_value_42 = tmp_class_container$class_creation_21__metaclass;
tmp_tuple_element_84 = mod_consts.const_str_plain_ThreadMessageDelta;
tmp_args_value_42 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_42, 0, tmp_tuple_element_84);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_tuple_element_84 = tmp_class_container$class_creation_21__bases;
PyTuple_SET_ITEM0(tmp_args_value_42, 1, tmp_tuple_element_84);
tmp_tuple_element_84 = locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230;
PyTuple_SET_ITEM0(tmp_args_value_42, 2, tmp_tuple_element_84);
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
tmp_kwargs_value_42 = tmp_class_container$class_creation_21__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 230;
tmp_assign_source_189 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_42, tmp_kwargs_value_42);
CHECK_OBJECT(tmp_args_value_42);
Py_DECREF(tmp_args_value_42);
if (tmp_assign_source_189 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_65;
}
assert(outline_20_var___class__ == NULL);
outline_20_var___class__ = tmp_assign_source_189;
}
CHECK_OBJECT(outline_20_var___class__);
tmp_assign_source_188 = outline_20_var___class__;
Py_INCREF(tmp_assign_source_188);
goto try_return_handler_65;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_65:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230);
locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230 = NULL;
goto try_return_handler_64;
// Exception handler code:
try_except_handler_65:;
exception_keeper_lineno_63 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_63 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230);
locals_openai$types$beta$assistant_stream_event$$$class__21_ThreadMessageDelta_230 = NULL;
// Re-raise.
exception_state = exception_keeper_name_63;
exception_lineno = exception_keeper_lineno_63;

goto try_except_handler_64;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_64:;
CHECK_OBJECT(outline_20_var___class__);
CHECK_OBJECT(outline_20_var___class__);
Py_DECREF(outline_20_var___class__);
outline_20_var___class__ = NULL;
goto outline_result_42;
// Exception handler code:
try_except_handler_64:;
exception_keeper_lineno_64 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_64 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_64;
exception_lineno = exception_keeper_lineno_64;

goto outline_exception_21;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_21:;
exception_lineno = 230;
goto try_except_handler_63;
outline_result_42:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageDelta, tmp_assign_source_188);
}
goto try_end_23;
// Exception handler code:
try_except_handler_63:;
exception_keeper_lineno_65 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_65 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_21__bases_orig);
tmp_class_container$class_creation_21__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_21__bases);
tmp_class_container$class_creation_21__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_21__class_decl_dict);
tmp_class_container$class_creation_21__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_21__metaclass);
tmp_class_container$class_creation_21__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_21__prepared);
tmp_class_container$class_creation_21__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_65;
exception_lineno = exception_keeper_lineno_65;

goto frame_exception_exit_1;
// End of try:
try_end_23:;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
Py_DECREF(tmp_class_container$class_creation_21__bases_orig);
tmp_class_container$class_creation_21__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
Py_DECREF(tmp_class_container$class_creation_21__bases);
tmp_class_container$class_creation_21__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_21__class_decl_dict);
tmp_class_container$class_creation_21__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
Py_DECREF(tmp_class_container$class_creation_21__metaclass);
tmp_class_container$class_creation_21__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
Py_DECREF(tmp_class_container$class_creation_21__prepared);
tmp_class_container$class_creation_21__prepared = NULL;
tmp_outline_return_value_21 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_21);
goto outline_result_41;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_41:;
CHECK_OBJECT(tmp_outline_return_value_21);
Py_DECREF(tmp_outline_return_value_21);
}
{
PyObject *tmp_outline_return_value_22;
// Tried code:
{
PyObject *tmp_assign_source_190;
PyObject *tmp_tuple_element_85;
tmp_tuple_element_85 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_85 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_85 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;

    goto try_except_handler_66;
}
tmp_assign_source_190 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_190, 0, tmp_tuple_element_85);
assert(tmp_class_container$class_creation_22__bases_orig == NULL);
tmp_class_container$class_creation_22__bases_orig = tmp_assign_source_190;
}
{
PyObject *tmp_assign_source_191;
PyObject *tmp_direct_call_arg1_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
tmp_direct_call_arg1_22 = tmp_class_container$class_creation_22__bases_orig;
Py_INCREF(tmp_direct_call_arg1_22);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_22};
    tmp_assign_source_191 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_191 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_66;
}
assert(tmp_class_container$class_creation_22__bases == NULL);
tmp_class_container$class_creation_22__bases = tmp_assign_source_191;
}
{
PyObject *tmp_assign_source_192;
tmp_assign_source_192 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_22__class_decl_dict == NULL);
tmp_class_container$class_creation_22__class_decl_dict = tmp_assign_source_192;
}
{
PyObject *tmp_assign_source_193;
PyObject *tmp_metaclass_value_22;
nuitka_bool tmp_condition_result_85;
int tmp_truth_name_22;
PyObject *tmp_type_arg_43;
PyObject *tmp_expression_value_149;
PyObject *tmp_subscript_value_44;
PyObject *tmp_bases_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_truth_name_22 = CHECK_IF_TRUE(tmp_class_container$class_creation_22__bases);
if (tmp_truth_name_22 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_66;
}
tmp_condition_result_85 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_85 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_22;
} else {
    goto condexpr_false_22;
}
condexpr_true_22:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_expression_value_149 = tmp_class_container$class_creation_22__bases;
tmp_subscript_value_44 = const_int_0;
tmp_type_arg_43 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_149, tmp_subscript_value_44, 0);
if (tmp_type_arg_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_66;
}
tmp_metaclass_value_22 = BUILTIN_TYPE1(tmp_type_arg_43);
CHECK_OBJECT(tmp_type_arg_43);
Py_DECREF(tmp_type_arg_43);
if (tmp_metaclass_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_66;
}
goto condexpr_end_22;
condexpr_false_22:;
tmp_metaclass_value_22 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_22);
condexpr_end_22:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_bases_value_22 = tmp_class_container$class_creation_22__bases;
tmp_assign_source_193 = SELECT_METACLASS(tstate, tmp_metaclass_value_22, tmp_bases_value_22);
CHECK_OBJECT(tmp_metaclass_value_22);
Py_DECREF(tmp_metaclass_value_22);
if (tmp_assign_source_193 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_66;
}
assert(tmp_class_container$class_creation_22__metaclass == NULL);
tmp_class_container$class_creation_22__metaclass = tmp_assign_source_193;
}
{
bool tmp_condition_result_86;
PyObject *tmp_expression_value_150;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_expression_value_150 = tmp_class_container$class_creation_22__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_150, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_66;
}
tmp_condition_result_86 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_86 != false) {
    goto branch_yes_64;
} else {
    goto branch_no_64;
}
}
branch_yes_64:;
{
PyObject *tmp_assign_source_194;
PyObject *tmp_called_value_43;
PyObject *tmp_expression_value_151;
PyObject *tmp_args_value_43;
PyObject *tmp_tuple_element_86;
PyObject *tmp_kwargs_value_43;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_expression_value_151 = tmp_class_container$class_creation_22__metaclass;
tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_66;
}
tmp_tuple_element_86 = mod_consts.const_str_plain_ThreadMessageCompleted;
tmp_args_value_43 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_43, 0, tmp_tuple_element_86);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_tuple_element_86 = tmp_class_container$class_creation_22__bases;
PyTuple_SET_ITEM0(tmp_args_value_43, 1, tmp_tuple_element_86);
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
tmp_kwargs_value_43 = tmp_class_container$class_creation_22__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 240;
tmp_assign_source_194 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_43, tmp_kwargs_value_43);
CHECK_OBJECT(tmp_called_value_43);
Py_DECREF(tmp_called_value_43);
CHECK_OBJECT(tmp_args_value_43);
Py_DECREF(tmp_args_value_43);
if (tmp_assign_source_194 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_66;
}
assert(tmp_class_container$class_creation_22__prepared == NULL);
tmp_class_container$class_creation_22__prepared = tmp_assign_source_194;
}
{
bool tmp_condition_result_87;
PyObject *tmp_operand_value_22;
PyObject *tmp_expression_value_152;
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
tmp_expression_value_152 = tmp_class_container$class_creation_22__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_152, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_66;
}
tmp_operand_value_22 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_22);
assert(!(tmp_res == -1));
tmp_condition_result_87 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_87 != false) {
    goto branch_yes_65;
} else {
    goto branch_no_65;
}
}
branch_yes_65:;
{
PyObject *tmp_raise_type_22;
PyObject *tmp_make_exception_arg_22;
PyObject *tmp_mod_expr_left_22;
PyObject *tmp_mod_expr_right_22;
PyObject *tmp_tuple_element_87;
PyObject *tmp_expression_value_153;
PyObject *tmp_name_value_32;
PyObject *tmp_default_value_22;
tmp_mod_expr_left_22 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_expression_value_153 = tmp_class_container$class_creation_22__metaclass;
tmp_name_value_32 = const_str_plain___name__;
tmp_default_value_22 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_87 = BUILTIN_GETATTR(tstate, tmp_expression_value_153, tmp_name_value_32, tmp_default_value_22);
if (tmp_tuple_element_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_66;
}
tmp_mod_expr_right_22 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_154;
PyObject *tmp_type_arg_44;
PyTuple_SET_ITEM(tmp_mod_expr_right_22, 0, tmp_tuple_element_87);
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
tmp_type_arg_44 = tmp_class_container$class_creation_22__prepared;
tmp_expression_value_154 = BUILTIN_TYPE1(tmp_type_arg_44);
assert(!(tmp_expression_value_154 == NULL));
tmp_tuple_element_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_154, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_154);
Py_DECREF(tmp_expression_value_154);
if (tmp_tuple_element_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto tuple_build_exception_22;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_22, 1, tmp_tuple_element_87);
}
goto tuple_build_no_exception_22;
// Exception handling pass through code for tuple_build:
tuple_build_exception_22:;
Py_DECREF(tmp_mod_expr_right_22);
goto try_except_handler_66;
// Finished with no exception for tuple_build:
tuple_build_no_exception_22:;
tmp_make_exception_arg_22 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_22, tmp_mod_expr_right_22);
CHECK_OBJECT(tmp_mod_expr_right_22);
Py_DECREF(tmp_mod_expr_right_22);
if (tmp_make_exception_arg_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_66;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 240;
tmp_raise_type_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_22);
CHECK_OBJECT(tmp_make_exception_arg_22);
Py_DECREF(tmp_make_exception_arg_22);
assert(!(tmp_raise_type_22 == NULL));
exception_state.exception_value = tmp_raise_type_22;
exception_lineno = 240;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_66;
}
branch_no_65:;
goto branch_end_64;
branch_no_64:;
{
PyObject *tmp_assign_source_195;
tmp_assign_source_195 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_22__prepared == NULL);
tmp_class_container$class_creation_22__prepared = tmp_assign_source_195;
}
branch_end_64:;
{
PyObject *tmp_assign_source_196;
{
PyObject *tmp_set_locals_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
tmp_set_locals_22 = tmp_class_container$class_creation_22__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240 = tmp_set_locals_22;
Py_INCREF(tmp_set_locals_22);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_68;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadMessageCompleted;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_68;
}
tmp_dictset_value = mod_consts.const_int_pos_240;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_68;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_68;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_23 = MAKE_CLASS_FRAME(tstate, code_objects_ac1ebc5493527ead09968299cc12a208, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_23);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_23) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_44;
PyObject *tmp_ass_subscribed_44;
PyObject *tmp_ass_subscript_44;
tmp_ass_subvalue_44 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240, mod_consts.const_str_plain_Message);

if (tmp_ass_subvalue_44 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_44 = module_var_accessor_openai$types$beta$assistant_stream_event$Message(tstate);
if (unlikely(tmp_ass_subvalue_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Message);
}

if (tmp_ass_subvalue_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_23;
}
        Py_INCREF(tmp_ass_subvalue_44);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_23;
    }
}

tmp_ass_subscribed_44 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_44);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_23;
}

if (tmp_ass_subscribed_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_44);

exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_23;
}
tmp_ass_subscript_44 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44);
CHECK_OBJECT(tmp_ass_subscribed_44);
Py_DECREF(tmp_ass_subscribed_44);
CHECK_OBJECT(tmp_ass_subvalue_44);
Py_DECREF(tmp_ass_subvalue_44);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_23;
}
}
{
PyObject *tmp_ass_subvalue_45;
PyObject *tmp_expression_value_155;
PyObject *tmp_subscript_value_45;
PyObject *tmp_ass_subscribed_45;
PyObject *tmp_ass_subscript_45;
tmp_expression_value_155 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_155 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_155 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_155 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_155 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_23;
}
        Py_INCREF(tmp_expression_value_155);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_23;
    }
}

tmp_subscript_value_45 = mod_consts.const_str_digest_3f4b2d3655642ed3815e3e0494439d98;
tmp_ass_subvalue_45 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_155, tmp_subscript_value_45);
CHECK_OBJECT(tmp_expression_value_155);
Py_DECREF(tmp_expression_value_155);
if (tmp_ass_subvalue_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_23;
}
tmp_ass_subscribed_45 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_45 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_45);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_23;
}

if (tmp_ass_subscribed_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_45);

exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_23;
}
tmp_ass_subscript_45 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45);
CHECK_OBJECT(tmp_ass_subscribed_45);
Py_DECREF(tmp_ass_subscribed_45);
CHECK_OBJECT(tmp_ass_subvalue_45);
Py_DECREF(tmp_ass_subvalue_45);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_23;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_22;
frame_exception_exit_23:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_23, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_23->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_23, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_23,
    type_description_2,
    outline_21_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_23);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_22;
frame_no_exception_22:;
goto skip_nested_handling_22;
nested_frame_exit_22:;

goto try_except_handler_68;
skip_nested_handling_22:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_68;
}
{
nuitka_bool tmp_condition_result_88;
PyObject *tmp_cmp_expr_left_22;
PyObject *tmp_cmp_expr_right_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_cmp_expr_left_22 = tmp_class_container$class_creation_22__bases;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
tmp_cmp_expr_right_22 = tmp_class_container$class_creation_22__bases_orig;
tmp_condition_result_88 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
if (tmp_condition_result_88 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_68;
}
if (tmp_condition_result_88 == NUITKA_BOOL_TRUE) {
    goto branch_yes_66;
} else {
    goto branch_no_66;
}
}
branch_yes_66:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_22__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_68;
}
branch_no_66:;
{
PyObject *tmp_assign_source_197;
PyObject *tmp_called_value_44;
PyObject *tmp_args_value_44;
PyObject *tmp_tuple_element_88;
PyObject *tmp_kwargs_value_44;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_called_value_44 = tmp_class_container$class_creation_22__metaclass;
tmp_tuple_element_88 = mod_consts.const_str_plain_ThreadMessageCompleted;
tmp_args_value_44 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_44, 0, tmp_tuple_element_88);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_tuple_element_88 = tmp_class_container$class_creation_22__bases;
PyTuple_SET_ITEM0(tmp_args_value_44, 1, tmp_tuple_element_88);
tmp_tuple_element_88 = locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240;
PyTuple_SET_ITEM0(tmp_args_value_44, 2, tmp_tuple_element_88);
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
tmp_kwargs_value_44 = tmp_class_container$class_creation_22__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 240;
tmp_assign_source_197 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_44, tmp_kwargs_value_44);
CHECK_OBJECT(tmp_args_value_44);
Py_DECREF(tmp_args_value_44);
if (tmp_assign_source_197 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_68;
}
assert(outline_21_var___class__ == NULL);
outline_21_var___class__ = tmp_assign_source_197;
}
CHECK_OBJECT(outline_21_var___class__);
tmp_assign_source_196 = outline_21_var___class__;
Py_INCREF(tmp_assign_source_196);
goto try_return_handler_68;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_68:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240);
locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240 = NULL;
goto try_return_handler_67;
// Exception handler code:
try_except_handler_68:;
exception_keeper_lineno_66 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_66 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240);
locals_openai$types$beta$assistant_stream_event$$$class__22_ThreadMessageCompleted_240 = NULL;
// Re-raise.
exception_state = exception_keeper_name_66;
exception_lineno = exception_keeper_lineno_66;

goto try_except_handler_67;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_67:;
CHECK_OBJECT(outline_21_var___class__);
CHECK_OBJECT(outline_21_var___class__);
Py_DECREF(outline_21_var___class__);
outline_21_var___class__ = NULL;
goto outline_result_44;
// Exception handler code:
try_except_handler_67:;
exception_keeper_lineno_67 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_67 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_67;
exception_lineno = exception_keeper_lineno_67;

goto outline_exception_22;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_22:;
exception_lineno = 240;
goto try_except_handler_66;
outline_result_44:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageCompleted, tmp_assign_source_196);
}
goto try_end_24;
// Exception handler code:
try_except_handler_66:;
exception_keeper_lineno_68 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_68 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_22__bases_orig);
tmp_class_container$class_creation_22__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_22__bases);
tmp_class_container$class_creation_22__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_22__class_decl_dict);
tmp_class_container$class_creation_22__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_22__metaclass);
tmp_class_container$class_creation_22__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_22__prepared);
tmp_class_container$class_creation_22__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_68;
exception_lineno = exception_keeper_lineno_68;

goto frame_exception_exit_1;
// End of try:
try_end_24:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
Py_DECREF(tmp_class_container$class_creation_22__bases_orig);
tmp_class_container$class_creation_22__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
Py_DECREF(tmp_class_container$class_creation_22__bases);
tmp_class_container$class_creation_22__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_22__class_decl_dict);
tmp_class_container$class_creation_22__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
Py_DECREF(tmp_class_container$class_creation_22__metaclass);
tmp_class_container$class_creation_22__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
Py_DECREF(tmp_class_container$class_creation_22__prepared);
tmp_class_container$class_creation_22__prepared = NULL;
tmp_outline_return_value_22 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_22);
goto outline_result_43;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_43:;
CHECK_OBJECT(tmp_outline_return_value_22);
Py_DECREF(tmp_outline_return_value_22);
}
{
PyObject *tmp_outline_return_value_23;
// Tried code:
{
PyObject *tmp_assign_source_198;
PyObject *tmp_tuple_element_89;
tmp_tuple_element_89 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_89 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_89 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 250;

    goto try_except_handler_69;
}
tmp_assign_source_198 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_198, 0, tmp_tuple_element_89);
assert(tmp_class_container$class_creation_23__bases_orig == NULL);
tmp_class_container$class_creation_23__bases_orig = tmp_assign_source_198;
}
{
PyObject *tmp_assign_source_199;
PyObject *tmp_direct_call_arg1_23;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
tmp_direct_call_arg1_23 = tmp_class_container$class_creation_23__bases_orig;
Py_INCREF(tmp_direct_call_arg1_23);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_23};
    tmp_assign_source_199 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_199 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_69;
}
assert(tmp_class_container$class_creation_23__bases == NULL);
tmp_class_container$class_creation_23__bases = tmp_assign_source_199;
}
{
PyObject *tmp_assign_source_200;
tmp_assign_source_200 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_23__class_decl_dict == NULL);
tmp_class_container$class_creation_23__class_decl_dict = tmp_assign_source_200;
}
{
PyObject *tmp_assign_source_201;
PyObject *tmp_metaclass_value_23;
nuitka_bool tmp_condition_result_89;
int tmp_truth_name_23;
PyObject *tmp_type_arg_45;
PyObject *tmp_expression_value_156;
PyObject *tmp_subscript_value_46;
PyObject *tmp_bases_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_truth_name_23 = CHECK_IF_TRUE(tmp_class_container$class_creation_23__bases);
if (tmp_truth_name_23 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_69;
}
tmp_condition_result_89 = tmp_truth_name_23 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_89 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_23;
} else {
    goto condexpr_false_23;
}
condexpr_true_23:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_expression_value_156 = tmp_class_container$class_creation_23__bases;
tmp_subscript_value_46 = const_int_0;
tmp_type_arg_45 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_156, tmp_subscript_value_46, 0);
if (tmp_type_arg_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_69;
}
tmp_metaclass_value_23 = BUILTIN_TYPE1(tmp_type_arg_45);
CHECK_OBJECT(tmp_type_arg_45);
Py_DECREF(tmp_type_arg_45);
if (tmp_metaclass_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_69;
}
goto condexpr_end_23;
condexpr_false_23:;
tmp_metaclass_value_23 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_23);
condexpr_end_23:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_bases_value_23 = tmp_class_container$class_creation_23__bases;
tmp_assign_source_201 = SELECT_METACLASS(tstate, tmp_metaclass_value_23, tmp_bases_value_23);
CHECK_OBJECT(tmp_metaclass_value_23);
Py_DECREF(tmp_metaclass_value_23);
if (tmp_assign_source_201 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_69;
}
assert(tmp_class_container$class_creation_23__metaclass == NULL);
tmp_class_container$class_creation_23__metaclass = tmp_assign_source_201;
}
{
bool tmp_condition_result_90;
PyObject *tmp_expression_value_157;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_expression_value_157 = tmp_class_container$class_creation_23__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_157, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_69;
}
tmp_condition_result_90 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_90 != false) {
    goto branch_yes_67;
} else {
    goto branch_no_67;
}
}
branch_yes_67:;
{
PyObject *tmp_assign_source_202;
PyObject *tmp_called_value_45;
PyObject *tmp_expression_value_158;
PyObject *tmp_args_value_45;
PyObject *tmp_tuple_element_90;
PyObject *tmp_kwargs_value_45;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_expression_value_158 = tmp_class_container$class_creation_23__metaclass;
tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_69;
}
tmp_tuple_element_90 = mod_consts.const_str_plain_ThreadMessageIncomplete;
tmp_args_value_45 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_45, 0, tmp_tuple_element_90);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_tuple_element_90 = tmp_class_container$class_creation_23__bases;
PyTuple_SET_ITEM0(tmp_args_value_45, 1, tmp_tuple_element_90);
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
tmp_kwargs_value_45 = tmp_class_container$class_creation_23__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 250;
tmp_assign_source_202 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_45, tmp_kwargs_value_45);
CHECK_OBJECT(tmp_called_value_45);
Py_DECREF(tmp_called_value_45);
CHECK_OBJECT(tmp_args_value_45);
Py_DECREF(tmp_args_value_45);
if (tmp_assign_source_202 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_69;
}
assert(tmp_class_container$class_creation_23__prepared == NULL);
tmp_class_container$class_creation_23__prepared = tmp_assign_source_202;
}
{
bool tmp_condition_result_91;
PyObject *tmp_operand_value_23;
PyObject *tmp_expression_value_159;
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
tmp_expression_value_159 = tmp_class_container$class_creation_23__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_159, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_69;
}
tmp_operand_value_23 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_23);
assert(!(tmp_res == -1));
tmp_condition_result_91 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_91 != false) {
    goto branch_yes_68;
} else {
    goto branch_no_68;
}
}
branch_yes_68:;
{
PyObject *tmp_raise_type_23;
PyObject *tmp_make_exception_arg_23;
PyObject *tmp_mod_expr_left_23;
PyObject *tmp_mod_expr_right_23;
PyObject *tmp_tuple_element_91;
PyObject *tmp_expression_value_160;
PyObject *tmp_name_value_33;
PyObject *tmp_default_value_23;
tmp_mod_expr_left_23 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_expression_value_160 = tmp_class_container$class_creation_23__metaclass;
tmp_name_value_33 = const_str_plain___name__;
tmp_default_value_23 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_91 = BUILTIN_GETATTR(tstate, tmp_expression_value_160, tmp_name_value_33, tmp_default_value_23);
if (tmp_tuple_element_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_69;
}
tmp_mod_expr_right_23 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_161;
PyObject *tmp_type_arg_46;
PyTuple_SET_ITEM(tmp_mod_expr_right_23, 0, tmp_tuple_element_91);
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
tmp_type_arg_46 = tmp_class_container$class_creation_23__prepared;
tmp_expression_value_161 = BUILTIN_TYPE1(tmp_type_arg_46);
assert(!(tmp_expression_value_161 == NULL));
tmp_tuple_element_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_161, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_161);
Py_DECREF(tmp_expression_value_161);
if (tmp_tuple_element_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto tuple_build_exception_23;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_23, 1, tmp_tuple_element_91);
}
goto tuple_build_no_exception_23;
// Exception handling pass through code for tuple_build:
tuple_build_exception_23:;
Py_DECREF(tmp_mod_expr_right_23);
goto try_except_handler_69;
// Finished with no exception for tuple_build:
tuple_build_no_exception_23:;
tmp_make_exception_arg_23 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_23, tmp_mod_expr_right_23);
CHECK_OBJECT(tmp_mod_expr_right_23);
Py_DECREF(tmp_mod_expr_right_23);
if (tmp_make_exception_arg_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_69;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 250;
tmp_raise_type_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_23);
CHECK_OBJECT(tmp_make_exception_arg_23);
Py_DECREF(tmp_make_exception_arg_23);
assert(!(tmp_raise_type_23 == NULL));
exception_state.exception_value = tmp_raise_type_23;
exception_lineno = 250;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_69;
}
branch_no_68:;
goto branch_end_67;
branch_no_67:;
{
PyObject *tmp_assign_source_203;
tmp_assign_source_203 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_23__prepared == NULL);
tmp_class_container$class_creation_23__prepared = tmp_assign_source_203;
}
branch_end_67:;
{
PyObject *tmp_assign_source_204;
{
PyObject *tmp_set_locals_23;
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
tmp_set_locals_23 = tmp_class_container$class_creation_23__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250 = tmp_set_locals_23;
Py_INCREF(tmp_set_locals_23);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_71;
}
tmp_dictset_value = mod_consts.const_str_plain_ThreadMessageIncomplete;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_71;
}
tmp_dictset_value = mod_consts.const_int_pos_250;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_71;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_71;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_24 = MAKE_CLASS_FRAME(tstate, code_objects_34196a96de417bbd1386a7981aeeb0cc, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_24);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_24) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_46;
PyObject *tmp_ass_subscribed_46;
PyObject *tmp_ass_subscript_46;
tmp_ass_subvalue_46 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250, mod_consts.const_str_plain_Message);

if (tmp_ass_subvalue_46 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_46 = module_var_accessor_openai$types$beta$assistant_stream_event$Message(tstate);
if (unlikely(tmp_ass_subvalue_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Message);
}

if (tmp_ass_subvalue_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_24;
}
        Py_INCREF(tmp_ass_subvalue_46);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_24;
    }
}

tmp_ass_subscribed_46 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_46 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_46);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_24;
}

if (tmp_ass_subscribed_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_46);

exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_24;
}
tmp_ass_subscript_46 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46);
CHECK_OBJECT(tmp_ass_subscribed_46);
Py_DECREF(tmp_ass_subscribed_46);
CHECK_OBJECT(tmp_ass_subvalue_46);
Py_DECREF(tmp_ass_subvalue_46);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_24;
}
}
{
PyObject *tmp_ass_subvalue_47;
PyObject *tmp_expression_value_162;
PyObject *tmp_subscript_value_47;
PyObject *tmp_ass_subscribed_47;
PyObject *tmp_ass_subscript_47;
tmp_expression_value_162 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_162 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_162 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_162 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_162 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_24;
}
        Py_INCREF(tmp_expression_value_162);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_24;
    }
}

tmp_subscript_value_47 = mod_consts.const_str_digest_42b3b83cfeec59f0a3d9c8e1f2d03c18;
tmp_ass_subvalue_47 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_162, tmp_subscript_value_47);
CHECK_OBJECT(tmp_expression_value_162);
Py_DECREF(tmp_expression_value_162);
if (tmp_ass_subvalue_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_24;
}
tmp_ass_subscribed_47 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_47 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_47);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_24;
}

if (tmp_ass_subscribed_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_47);

exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_24;
}
tmp_ass_subscript_47 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47);
CHECK_OBJECT(tmp_ass_subscribed_47);
Py_DECREF(tmp_ass_subscribed_47);
CHECK_OBJECT(tmp_ass_subvalue_47);
Py_DECREF(tmp_ass_subvalue_47);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_24;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_23;
frame_exception_exit_24:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_24, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_24->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_24, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_24,
    type_description_2,
    outline_22_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_24);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_23;
frame_no_exception_23:;
goto skip_nested_handling_23;
nested_frame_exit_23:;

goto try_except_handler_71;
skip_nested_handling_23:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_71;
}
{
nuitka_bool tmp_condition_result_92;
PyObject *tmp_cmp_expr_left_23;
PyObject *tmp_cmp_expr_right_23;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_cmp_expr_left_23 = tmp_class_container$class_creation_23__bases;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
tmp_cmp_expr_right_23 = tmp_class_container$class_creation_23__bases_orig;
tmp_condition_result_92 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
if (tmp_condition_result_92 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_71;
}
if (tmp_condition_result_92 == NUITKA_BOOL_TRUE) {
    goto branch_yes_69;
} else {
    goto branch_no_69;
}
}
branch_yes_69:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_23__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_71;
}
branch_no_69:;
{
PyObject *tmp_assign_source_205;
PyObject *tmp_called_value_46;
PyObject *tmp_args_value_46;
PyObject *tmp_tuple_element_92;
PyObject *tmp_kwargs_value_46;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_called_value_46 = tmp_class_container$class_creation_23__metaclass;
tmp_tuple_element_92 = mod_consts.const_str_plain_ThreadMessageIncomplete;
tmp_args_value_46 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_46, 0, tmp_tuple_element_92);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_tuple_element_92 = tmp_class_container$class_creation_23__bases;
PyTuple_SET_ITEM0(tmp_args_value_46, 1, tmp_tuple_element_92);
tmp_tuple_element_92 = locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250;
PyTuple_SET_ITEM0(tmp_args_value_46, 2, tmp_tuple_element_92);
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
tmp_kwargs_value_46 = tmp_class_container$class_creation_23__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 250;
tmp_assign_source_205 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_46, tmp_kwargs_value_46);
CHECK_OBJECT(tmp_args_value_46);
Py_DECREF(tmp_args_value_46);
if (tmp_assign_source_205 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto try_except_handler_71;
}
assert(outline_22_var___class__ == NULL);
outline_22_var___class__ = tmp_assign_source_205;
}
CHECK_OBJECT(outline_22_var___class__);
tmp_assign_source_204 = outline_22_var___class__;
Py_INCREF(tmp_assign_source_204);
goto try_return_handler_71;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_71:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250);
locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250 = NULL;
goto try_return_handler_70;
// Exception handler code:
try_except_handler_71:;
exception_keeper_lineno_69 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_69 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250);
locals_openai$types$beta$assistant_stream_event$$$class__23_ThreadMessageIncomplete_250 = NULL;
// Re-raise.
exception_state = exception_keeper_name_69;
exception_lineno = exception_keeper_lineno_69;

goto try_except_handler_70;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_70:;
CHECK_OBJECT(outline_22_var___class__);
CHECK_OBJECT(outline_22_var___class__);
Py_DECREF(outline_22_var___class__);
outline_22_var___class__ = NULL;
goto outline_result_46;
// Exception handler code:
try_except_handler_70:;
exception_keeper_lineno_70 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_70 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_70;
exception_lineno = exception_keeper_lineno_70;

goto outline_exception_23;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_23:;
exception_lineno = 250;
goto try_except_handler_69;
outline_result_46:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ThreadMessageIncomplete, tmp_assign_source_204);
}
goto try_end_25;
// Exception handler code:
try_except_handler_69:;
exception_keeper_lineno_71 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_71 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_23__bases_orig);
tmp_class_container$class_creation_23__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_23__bases);
tmp_class_container$class_creation_23__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_23__class_decl_dict);
tmp_class_container$class_creation_23__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_23__metaclass);
tmp_class_container$class_creation_23__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_23__prepared);
tmp_class_container$class_creation_23__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_71;
exception_lineno = exception_keeper_lineno_71;

goto frame_exception_exit_1;
// End of try:
try_end_25:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
Py_DECREF(tmp_class_container$class_creation_23__bases_orig);
tmp_class_container$class_creation_23__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
Py_DECREF(tmp_class_container$class_creation_23__bases);
tmp_class_container$class_creation_23__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_23__class_decl_dict);
tmp_class_container$class_creation_23__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
Py_DECREF(tmp_class_container$class_creation_23__metaclass);
tmp_class_container$class_creation_23__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
Py_DECREF(tmp_class_container$class_creation_23__prepared);
tmp_class_container$class_creation_23__prepared = NULL;
tmp_outline_return_value_23 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_23);
goto outline_result_45;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_45:;
CHECK_OBJECT(tmp_outline_return_value_23);
Py_DECREF(tmp_outline_return_value_23);
}
{
PyObject *tmp_outline_return_value_24;
// Tried code:
{
PyObject *tmp_assign_source_206;
PyObject *tmp_tuple_element_93;
tmp_tuple_element_93 = module_var_accessor_openai$types$beta$assistant_stream_event$BaseModel(tstate);
if (unlikely(tmp_tuple_element_93 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_tuple_element_93 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;

    goto try_except_handler_72;
}
tmp_assign_source_206 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_206, 0, tmp_tuple_element_93);
assert(tmp_class_container$class_creation_24__bases_orig == NULL);
tmp_class_container$class_creation_24__bases_orig = tmp_assign_source_206;
}
{
PyObject *tmp_assign_source_207;
PyObject *tmp_direct_call_arg1_24;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases_orig);
tmp_direct_call_arg1_24 = tmp_class_container$class_creation_24__bases_orig;
Py_INCREF(tmp_direct_call_arg1_24);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_24};
    tmp_assign_source_207 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_207 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_72;
}
assert(tmp_class_container$class_creation_24__bases == NULL);
tmp_class_container$class_creation_24__bases = tmp_assign_source_207;
}
{
PyObject *tmp_assign_source_208;
tmp_assign_source_208 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_24__class_decl_dict == NULL);
tmp_class_container$class_creation_24__class_decl_dict = tmp_assign_source_208;
}
{
PyObject *tmp_assign_source_209;
PyObject *tmp_metaclass_value_24;
nuitka_bool tmp_condition_result_93;
int tmp_truth_name_24;
PyObject *tmp_type_arg_47;
PyObject *tmp_expression_value_163;
PyObject *tmp_subscript_value_48;
PyObject *tmp_bases_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_truth_name_24 = CHECK_IF_TRUE(tmp_class_container$class_creation_24__bases);
if (tmp_truth_name_24 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_72;
}
tmp_condition_result_93 = tmp_truth_name_24 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_93 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_24;
} else {
    goto condexpr_false_24;
}
condexpr_true_24:;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_expression_value_163 = tmp_class_container$class_creation_24__bases;
tmp_subscript_value_48 = const_int_0;
tmp_type_arg_47 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_163, tmp_subscript_value_48, 0);
if (tmp_type_arg_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_72;
}
tmp_metaclass_value_24 = BUILTIN_TYPE1(tmp_type_arg_47);
CHECK_OBJECT(tmp_type_arg_47);
Py_DECREF(tmp_type_arg_47);
if (tmp_metaclass_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_72;
}
goto condexpr_end_24;
condexpr_false_24:;
tmp_metaclass_value_24 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_24);
condexpr_end_24:;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_bases_value_24 = tmp_class_container$class_creation_24__bases;
tmp_assign_source_209 = SELECT_METACLASS(tstate, tmp_metaclass_value_24, tmp_bases_value_24);
CHECK_OBJECT(tmp_metaclass_value_24);
Py_DECREF(tmp_metaclass_value_24);
if (tmp_assign_source_209 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_72;
}
assert(tmp_class_container$class_creation_24__metaclass == NULL);
tmp_class_container$class_creation_24__metaclass = tmp_assign_source_209;
}
{
bool tmp_condition_result_94;
PyObject *tmp_expression_value_164;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
tmp_expression_value_164 = tmp_class_container$class_creation_24__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_164, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_72;
}
tmp_condition_result_94 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_94 != false) {
    goto branch_yes_70;
} else {
    goto branch_no_70;
}
}
branch_yes_70:;
{
PyObject *tmp_assign_source_210;
PyObject *tmp_called_value_47;
PyObject *tmp_expression_value_165;
PyObject *tmp_args_value_47;
PyObject *tmp_tuple_element_94;
PyObject *tmp_kwargs_value_47;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
tmp_expression_value_165 = tmp_class_container$class_creation_24__metaclass;
tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_165, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_72;
}
tmp_tuple_element_94 = mod_consts.const_str_plain_ErrorEvent;
tmp_args_value_47 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_47, 0, tmp_tuple_element_94);
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_tuple_element_94 = tmp_class_container$class_creation_24__bases;
PyTuple_SET_ITEM0(tmp_args_value_47, 1, tmp_tuple_element_94);
CHECK_OBJECT(tmp_class_container$class_creation_24__class_decl_dict);
tmp_kwargs_value_47 = tmp_class_container$class_creation_24__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 260;
tmp_assign_source_210 = CALL_FUNCTION(tstate, tmp_called_value_47, tmp_args_value_47, tmp_kwargs_value_47);
CHECK_OBJECT(tmp_called_value_47);
Py_DECREF(tmp_called_value_47);
CHECK_OBJECT(tmp_args_value_47);
Py_DECREF(tmp_args_value_47);
if (tmp_assign_source_210 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_72;
}
assert(tmp_class_container$class_creation_24__prepared == NULL);
tmp_class_container$class_creation_24__prepared = tmp_assign_source_210;
}
{
bool tmp_condition_result_95;
PyObject *tmp_operand_value_24;
PyObject *tmp_expression_value_166;
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
tmp_expression_value_166 = tmp_class_container$class_creation_24__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_166, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_72;
}
tmp_operand_value_24 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_24);
assert(!(tmp_res == -1));
tmp_condition_result_95 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_95 != false) {
    goto branch_yes_71;
} else {
    goto branch_no_71;
}
}
branch_yes_71:;
{
PyObject *tmp_raise_type_24;
PyObject *tmp_make_exception_arg_24;
PyObject *tmp_mod_expr_left_24;
PyObject *tmp_mod_expr_right_24;
PyObject *tmp_tuple_element_95;
PyObject *tmp_expression_value_167;
PyObject *tmp_name_value_34;
PyObject *tmp_default_value_24;
tmp_mod_expr_left_24 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
tmp_expression_value_167 = tmp_class_container$class_creation_24__metaclass;
tmp_name_value_34 = const_str_plain___name__;
tmp_default_value_24 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_95 = BUILTIN_GETATTR(tstate, tmp_expression_value_167, tmp_name_value_34, tmp_default_value_24);
if (tmp_tuple_element_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_72;
}
tmp_mod_expr_right_24 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_168;
PyObject *tmp_type_arg_48;
PyTuple_SET_ITEM(tmp_mod_expr_right_24, 0, tmp_tuple_element_95);
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
tmp_type_arg_48 = tmp_class_container$class_creation_24__prepared;
tmp_expression_value_168 = BUILTIN_TYPE1(tmp_type_arg_48);
assert(!(tmp_expression_value_168 == NULL));
tmp_tuple_element_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_168, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_168);
Py_DECREF(tmp_expression_value_168);
if (tmp_tuple_element_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto tuple_build_exception_24;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_24, 1, tmp_tuple_element_95);
}
goto tuple_build_no_exception_24;
// Exception handling pass through code for tuple_build:
tuple_build_exception_24:;
Py_DECREF(tmp_mod_expr_right_24);
goto try_except_handler_72;
// Finished with no exception for tuple_build:
tuple_build_no_exception_24:;
tmp_make_exception_arg_24 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_24, tmp_mod_expr_right_24);
CHECK_OBJECT(tmp_mod_expr_right_24);
Py_DECREF(tmp_mod_expr_right_24);
if (tmp_make_exception_arg_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_72;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 260;
tmp_raise_type_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_24);
CHECK_OBJECT(tmp_make_exception_arg_24);
Py_DECREF(tmp_make_exception_arg_24);
assert(!(tmp_raise_type_24 == NULL));
exception_state.exception_value = tmp_raise_type_24;
exception_lineno = 260;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_72;
}
branch_no_71:;
goto branch_end_70;
branch_no_70:;
{
PyObject *tmp_assign_source_211;
tmp_assign_source_211 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_24__prepared == NULL);
tmp_class_container$class_creation_24__prepared = tmp_assign_source_211;
}
branch_end_70:;
{
PyObject *tmp_assign_source_212;
{
PyObject *tmp_set_locals_24;
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
tmp_set_locals_24 = tmp_class_container$class_creation_24__prepared;
locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260 = tmp_set_locals_24;
Py_INCREF(tmp_set_locals_24);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7a5b9446e53d21cef5bdb4a154496355;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_74;
}
tmp_dictset_value = mod_consts.const_str_plain_ErrorEvent;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_74;
}
tmp_dictset_value = mod_consts.const_int_pos_260;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_74;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_74;
}
frame_frame_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_25 = MAKE_CLASS_FRAME(tstate, code_objects_6baa407b0159a5003675e6a6369c78e1, module_openai$types$beta$assistant_stream_event, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_25);
assert(Py_REFCNT(frame_frame_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_25) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_48;
PyObject *tmp_ass_subscribed_48;
PyObject *tmp_ass_subscript_48;
tmp_ass_subvalue_48 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260, mod_consts.const_str_plain_ErrorObject);

if (tmp_ass_subvalue_48 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_48 = module_var_accessor_openai$types$beta$assistant_stream_event$ErrorObject(tstate);
if (unlikely(tmp_ass_subvalue_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ErrorObject);
}

if (tmp_ass_subvalue_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_2 = "o";
    goto frame_exception_exit_25;
}
        Py_INCREF(tmp_ass_subvalue_48);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_25;
    }
}

tmp_ass_subscribed_48 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_48 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_48);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 261;
type_description_2 = "o";
    goto frame_exception_exit_25;
}

if (tmp_ass_subscribed_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_48);

exception_lineno = 261;
type_description_2 = "o";
    goto frame_exception_exit_25;
}
tmp_ass_subscript_48 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48);
CHECK_OBJECT(tmp_ass_subscribed_48);
Py_DECREF(tmp_ass_subscribed_48);
CHECK_OBJECT(tmp_ass_subvalue_48);
Py_DECREF(tmp_ass_subvalue_48);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_2 = "o";
    goto frame_exception_exit_25;
}
}
{
PyObject *tmp_ass_subvalue_49;
PyObject *tmp_expression_value_169;
PyObject *tmp_subscript_value_49;
PyObject *tmp_ass_subscribed_49;
PyObject *tmp_ass_subscript_49;
tmp_expression_value_169 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_169 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_169 = module_var_accessor_openai$types$beta$assistant_stream_event$Literal(tstate);
if (unlikely(tmp_expression_value_169 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_169 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_25;
}
        Py_INCREF(tmp_expression_value_169);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_25;
    }
}

tmp_subscript_value_49 = mod_consts.const_str_plain_error;
tmp_ass_subvalue_49 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_169, tmp_subscript_value_49);
CHECK_OBJECT(tmp_expression_value_169);
Py_DECREF(tmp_expression_value_169);
if (tmp_ass_subvalue_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_25;
}
tmp_ass_subscribed_49 = PyObject_GetItem(locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_49 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_49);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_25;
}

if (tmp_ass_subscribed_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_49);

exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_25;
}
tmp_ass_subscript_49 = mod_consts.const_str_plain_event;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_49, tmp_ass_subscript_49, tmp_ass_subvalue_49);
CHECK_OBJECT(tmp_ass_subscribed_49);
Py_DECREF(tmp_ass_subscribed_49);
CHECK_OBJECT(tmp_ass_subvalue_49);
Py_DECREF(tmp_ass_subvalue_49);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_25;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_24;
frame_exception_exit_25:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_25, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_25, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_25,
    type_description_2,
    outline_23_var___class__
);



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_25);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_24;
frame_no_exception_24:;
goto skip_nested_handling_24;
nested_frame_exit_24:;

goto try_except_handler_74;
skip_nested_handling_24:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_74;
}
{
nuitka_bool tmp_condition_result_96;
PyObject *tmp_cmp_expr_left_24;
PyObject *tmp_cmp_expr_right_24;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_cmp_expr_left_24 = tmp_class_container$class_creation_24__bases;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases_orig);
tmp_cmp_expr_right_24 = tmp_class_container$class_creation_24__bases_orig;
tmp_condition_result_96 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
if (tmp_condition_result_96 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_74;
}
if (tmp_condition_result_96 == NUITKA_BOOL_TRUE) {
    goto branch_yes_72;
} else {
    goto branch_no_72;
}
}
branch_yes_72:;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_24__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_74;
}
branch_no_72:;
{
PyObject *tmp_assign_source_213;
PyObject *tmp_called_value_48;
PyObject *tmp_args_value_48;
PyObject *tmp_tuple_element_96;
PyObject *tmp_kwargs_value_48;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
tmp_called_value_48 = tmp_class_container$class_creation_24__metaclass;
tmp_tuple_element_96 = mod_consts.const_str_plain_ErrorEvent;
tmp_args_value_48 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_48, 0, tmp_tuple_element_96);
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_tuple_element_96 = tmp_class_container$class_creation_24__bases;
PyTuple_SET_ITEM0(tmp_args_value_48, 1, tmp_tuple_element_96);
tmp_tuple_element_96 = locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260;
PyTuple_SET_ITEM0(tmp_args_value_48, 2, tmp_tuple_element_96);
CHECK_OBJECT(tmp_class_container$class_creation_24__class_decl_dict);
tmp_kwargs_value_48 = tmp_class_container$class_creation_24__class_decl_dict;
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 260;
tmp_assign_source_213 = CALL_FUNCTION(tstate, tmp_called_value_48, tmp_args_value_48, tmp_kwargs_value_48);
CHECK_OBJECT(tmp_args_value_48);
Py_DECREF(tmp_args_value_48);
if (tmp_assign_source_213 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_74;
}
assert(outline_23_var___class__ == NULL);
outline_23_var___class__ = tmp_assign_source_213;
}
CHECK_OBJECT(outline_23_var___class__);
tmp_assign_source_212 = outline_23_var___class__;
Py_INCREF(tmp_assign_source_212);
goto try_return_handler_74;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_74:;
Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260);
locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260 = NULL;
goto try_return_handler_73;
// Exception handler code:
try_except_handler_74:;
exception_keeper_lineno_72 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_72 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260);
locals_openai$types$beta$assistant_stream_event$$$class__24_ErrorEvent_260 = NULL;
// Re-raise.
exception_state = exception_keeper_name_72;
exception_lineno = exception_keeper_lineno_72;

goto try_except_handler_73;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_73:;
CHECK_OBJECT(outline_23_var___class__);
CHECK_OBJECT(outline_23_var___class__);
Py_DECREF(outline_23_var___class__);
outline_23_var___class__ = NULL;
goto outline_result_48;
// Exception handler code:
try_except_handler_73:;
exception_keeper_lineno_73 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_73 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_73;
exception_lineno = exception_keeper_lineno_73;

goto outline_exception_24;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_24:;
exception_lineno = 260;
goto try_except_handler_72;
outline_result_48:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorEvent, tmp_assign_source_212);
}
goto try_end_26;
// Exception handler code:
try_except_handler_72:;
exception_keeper_lineno_74 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_74 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_24__bases_orig);
tmp_class_container$class_creation_24__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_24__bases);
tmp_class_container$class_creation_24__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_24__class_decl_dict);
tmp_class_container$class_creation_24__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_24__metaclass);
tmp_class_container$class_creation_24__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_24__prepared);
tmp_class_container$class_creation_24__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_74;
exception_lineno = exception_keeper_lineno_74;

goto frame_exception_exit_1;
// End of try:
try_end_26:;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_24__bases_orig);
Py_DECREF(tmp_class_container$class_creation_24__bases_orig);
tmp_class_container$class_creation_24__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
Py_DECREF(tmp_class_container$class_creation_24__bases);
tmp_class_container$class_creation_24__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_24__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_24__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_24__class_decl_dict);
tmp_class_container$class_creation_24__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
Py_DECREF(tmp_class_container$class_creation_24__metaclass);
tmp_class_container$class_creation_24__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
Py_DECREF(tmp_class_container$class_creation_24__prepared);
tmp_class_container$class_creation_24__prepared = NULL;
tmp_outline_return_value_24 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_24);
goto outline_result_47;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_47:;
CHECK_OBJECT(tmp_outline_return_value_24);
Py_DECREF(tmp_outline_return_value_24);
}
{
PyObject *tmp_assign_source_214;
PyObject *tmp_expression_value_170;
PyObject *tmp_subscript_value_50;
PyObject *tmp_tuple_element_97;
PyObject *tmp_expression_value_171;
PyObject *tmp_subscript_value_51;
PyObject *tmp_tuple_element_98;
tmp_expression_value_170 = module_var_accessor_openai$types$beta$assistant_stream_event$Annotated(tstate);
if (unlikely(tmp_expression_value_170 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_170 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;

    goto frame_exception_exit_1;
}
tmp_expression_value_171 = module_var_accessor_openai$types$beta$assistant_stream_event$Union(tstate);
if (unlikely(tmp_expression_value_171 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_171 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;

    goto frame_exception_exit_1;
}
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadCreated(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadCreated);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 268;

    goto frame_exception_exit_1;
}
tmp_subscript_value_51 = MAKE_TUPLE_EMPTY(tstate, 24);
PyTuple_SET_ITEM0(tmp_subscript_value_51, 0, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunCreated(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunCreated);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 1, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunQueued(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunQueued);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 270;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 2, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunInProgress(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunInProgress);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 3, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunRequiresAction(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunRequiresAction);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 4, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunCompleted(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunCompleted);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 273;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 5, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunIncomplete(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunIncomplete);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 6, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunFailed(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunFailed);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 275;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 7, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunCancelling(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunCancelling);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 8, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunCancelled(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunCancelled);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 277;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 9, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunExpired(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunExpired);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 278;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 10, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunStepCreated(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunStepCreated);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 279;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 11, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunStepInProgress(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunStepInProgress);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 280;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 12, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunStepDelta(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunStepDelta);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 13, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunStepCompleted(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunStepCompleted);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 14, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunStepFailed(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunStepFailed);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 283;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 15, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunStepCancelled(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunStepCancelled);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 284;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 16, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadRunStepExpired(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadRunStepExpired);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 17, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadMessageCreated(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadMessageCreated);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 286;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 18, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadMessageInProgress(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadMessageInProgress);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 19, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadMessageDelta(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadMessageDelta);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 288;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 20, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadMessageCompleted(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadMessageCompleted);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 21, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ThreadMessageIncomplete(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ThreadMessageIncomplete);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 22, tmp_tuple_element_98);
tmp_tuple_element_98 = module_var_accessor_openai$types$beta$assistant_stream_event$ErrorEvent(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ErrorEvent);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_51, 23, tmp_tuple_element_98);
goto tuple_build_no_exception_25;
// Exception handling pass through code for tuple_build:
tuple_build_exception_25:;
Py_DECREF(tmp_subscript_value_51);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_25:;
tmp_tuple_element_97 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_171, tmp_subscript_value_51);
CHECK_OBJECT(tmp_subscript_value_51);
Py_DECREF(tmp_subscript_value_51);
if (tmp_tuple_element_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto frame_exception_exit_1;
}
tmp_subscript_value_50 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_49;
PyTuple_SET_ITEM(tmp_subscript_value_50, 0, tmp_tuple_element_97);
tmp_called_value_49 = module_var_accessor_openai$types$beta$assistant_stream_event$PropertyInfo(tstate);
if (unlikely(tmp_called_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PropertyInfo);
}

if (tmp_called_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;

    goto tuple_build_exception_26;
}
frame_frame_openai$types$beta$assistant_stream_event->m_frame.f_lineno = 293;
tmp_tuple_element_97 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_49, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_event_tuple, 0), mod_consts.const_tuple_str_plain_discriminator_tuple);
if (tmp_tuple_element_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto tuple_build_exception_26;
}
PyTuple_SET_ITEM(tmp_subscript_value_50, 1, tmp_tuple_element_97);
}
goto tuple_build_no_exception_26;
// Exception handling pass through code for tuple_build:
tuple_build_exception_26:;
Py_DECREF(tmp_subscript_value_50);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_26:;
tmp_assign_source_214 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_170, tmp_subscript_value_50);
CHECK_OBJECT(tmp_subscript_value_50);
Py_DECREF(tmp_subscript_value_50);
if (tmp_assign_source_214 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_AssistantStreamEvent, tmp_assign_source_214);
}
{
PyObject *tmp_ass_subvalue_50;
PyObject *tmp_ass_subscribed_50;
PyObject *tmp_ass_subscript_50;
tmp_ass_subvalue_50 = module_var_accessor_openai$types$beta$assistant_stream_event$TypeAlias(tstate);
if (unlikely(tmp_ass_subvalue_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_ass_subvalue_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_50 = module_var_accessor_openai$types$beta$assistant_stream_event$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_50 = mod_consts.const_str_plain_AssistantStreamEvent;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_50, tmp_ass_subscript_50, tmp_ass_subvalue_50);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_25;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$assistant_stream_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$assistant_stream_event->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$assistant_stream_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$types$beta$assistant_stream_event);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_25:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$types$beta$assistant_stream_event", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.beta.assistant_stream_event" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$types$beta$assistant_stream_event);
    return module_openai$types$beta$assistant_stream_event;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$assistant_stream_event, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$types$beta$assistant_stream_event", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

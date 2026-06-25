/* Generated code for Python module 'anthropic$types$beta$sessions$beta_managed_agents_session_event'
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



/* The "module_anthropic$types$beta$sessions$beta_managed_agents_session_event" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$types$beta$sessions$beta_managed_agents_session_event;
PyDictObject *moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple;
PyObject *const_str_plain_Annotated;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_PropertyInfo_tuple;
PyObject *const_int_pos_4;
PyObject *const_str_plain_PropertyInfo;
PyObject *const_str_plain_beta_managed_agents_user_message_event;
PyObject *const_tuple_str_plain_BetaManagedAgentsUserMessageEvent_tuple;
PyObject *const_str_plain_BetaManagedAgentsUserMessageEvent;
PyObject *const_str_plain_beta_managed_agents_agent_message_event;
PyObject *const_tuple_str_plain_BetaManagedAgentsAgentMessageEvent_tuple;
PyObject *const_str_plain_BetaManagedAgentsAgentMessageEvent;
PyObject *const_str_plain_beta_managed_agents_session_error_event;
PyObject *const_tuple_str_plain_BetaManagedAgentsSessionErrorEvent_tuple;
PyObject *const_str_plain_BetaManagedAgentsSessionErrorEvent;
PyObject *const_str_plain_beta_managed_agents_agent_thinking_event;
PyObject *const_tuple_str_plain_BetaManagedAgentsAgentThinkingEvent_tuple;
PyObject *const_str_plain_BetaManagedAgentsAgentThinkingEvent;
PyObject *const_str_plain_beta_managed_agents_agent_tool_use_event;
PyObject *const_tuple_str_plain_BetaManagedAgentsAgentToolUseEvent_tuple;
PyObject *const_str_plain_BetaManagedAgentsAgentToolUseEvent;
PyObject *const_str_plain_beta_managed_agents_user_interrupt_event;
PyObject *const_tuple_str_plain_BetaManagedAgentsUserInterruptEvent_tuple;
PyObject *const_str_plain_BetaManagedAgentsUserInterruptEvent;
PyObject *const_str_digest_230cf712991ca05edd3dcd967b1d4d87;
PyObject *const_tuple_str_plain_BetaManagedAgentsSessionDeletedEvent_tuple;
PyObject *const_str_plain_BetaManagedAgentsSessionDeletedEvent;
PyObject *const_str_digest_a43919991b869ebe8f156e310d8a5faa;
PyObject *const_tuple_str_plain_BetaManagedAgentsSessionUpdatedEvent_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_BetaManagedAgentsSessionUpdatedEvent;
PyObject *const_str_digest_00cdbeb922e522c6da3cd88c74d82662;
PyObject *const_tuple_str_plain_BetaManagedAgentsUserToolResultEvent_tuple;
PyObject *const_str_plain_BetaManagedAgentsUserToolResultEvent;
PyObject *const_str_digest_ff7a1785b84792891d1dbe7b070c47b4;
PyObject *const_tuple_str_plain_BetaManagedAgentsAgentToolResultEvent_tuple;
PyObject *const_str_plain_BetaManagedAgentsAgentToolResultEvent;
PyObject *const_str_digest_1a02886b578e6e83915e9e85830aa625;
PyObject *const_tuple_str_plain_BetaManagedAgentsAgentMCPToolUseEvent_tuple;
PyObject *const_str_plain_BetaManagedAgentsAgentMCPToolUseEvent;
PyObject *const_str_digest_7ea9bd93674f086a4aaeca2d3e22c51b;
PyObject *const_tuple_str_plain_BetaManagedAgentsSessionStatusIdleEvent_tuple;
PyObject *const_str_plain_BetaManagedAgentsSessionStatusIdleEvent;
PyObject *const_str_digest_26fe297ca4ea1d1e115a15748d0d72dc;
PyObject *const_tuple_str_plain_BetaManagedAgentsUserDefineOutcomeEvent_tuple;
PyObject *const_str_plain_BetaManagedAgentsUserDefineOutcomeEvent;
PyObject *const_str_digest_8de9b38d69878d132f1d06943d71c118;
PyObject *const_tuple_str_plain_BetaManagedAgentsAgentCustomToolUseEvent_tuple;
PyObject *const_str_plain_BetaManagedAgentsAgentCustomToolUseEvent;
PyObject *const_str_digest_9b86de5cb83fcd2792d0a25b2223ccb1;
PyObject *const_tuple_str_plain_BetaManagedAgentsAgentMCPToolResultEvent_tuple;
PyObject *const_str_plain_BetaManagedAgentsAgentMCPToolResultEvent;
PyObject *const_str_digest_df4d2f0963c141f6f99904381d948245;
PyObject *const_tuple_str_digest_7bd78a3f07d54c8e773e97b2b33d4855_tuple;
PyObject *const_str_digest_7bd78a3f07d54c8e773e97b2b33d4855;
PyObject *const_str_digest_8bf6bbeecbb9b26c4bf9be3e428b8ee0;
PyObject *const_tuple_str_digest_680985bd76c009f9f484b2ca1ee7179b_tuple;
PyObject *const_str_digest_680985bd76c009f9f484b2ca1ee7179b;
PyObject *const_str_digest_69b94baa64a893477643a644d2b44ab5;
PyObject *const_tuple_str_digest_87fa0cb24f156084d751cb015c923d88_tuple;
PyObject *const_str_digest_87fa0cb24f156084d751cb015c923d88;
PyObject *const_str_digest_40d972d8062bd5d21699266ecbec1be1;
PyObject *const_tuple_str_digest_47a3d32085b8900d70eebcf91501a8ea_tuple;
PyObject *const_str_digest_47a3d32085b8900d70eebcf91501a8ea;
PyObject *const_str_digest_b057ace19175756317b43867257827a8;
PyObject *const_tuple_str_digest_be0c919b566c3ecfa243fcd814cb9d7c_tuple;
PyObject *const_str_digest_be0c919b566c3ecfa243fcd814cb9d7c;
PyObject *const_str_digest_590fe6cd1c992a1fff94d3643dbdf1e4;
PyObject *const_tuple_str_digest_bbb81df83a566cf2814346e63f686900_tuple;
PyObject *const_str_digest_bbb81df83a566cf2814346e63f686900;
PyObject *const_str_digest_9dc1af1b57f64fa267f0908b6f5c4afb;
PyObject *const_tuple_str_digest_53b65cba1e561c6df7f51f1093dca70d_tuple;
PyObject *const_str_digest_53b65cba1e561c6df7f51f1093dca70d;
PyObject *const_str_digest_11b40ac95fdb12964baf6c6c41b32b78;
PyObject *const_tuple_str_digest_a39975e914a6a86ba3153b197792b326_tuple;
PyObject *const_str_digest_a39975e914a6a86ba3153b197792b326;
PyObject *const_str_digest_f5f71707011d14e7134746d6f9a3fcca;
PyObject *const_tuple_str_digest_79208f99f42387dedaa503f910cf801e_tuple;
PyObject *const_str_digest_79208f99f42387dedaa503f910cf801e;
PyObject *const_str_digest_7fb08b4202f0695f1759c805e119dac8;
PyObject *const_tuple_str_digest_e0e15641e9785d45266c86e750f17f58_tuple;
PyObject *const_str_digest_e0e15641e9785d45266c86e750f17f58;
PyObject *const_str_digest_936baf57ce758ebde4ee8bc4e9a3742a;
PyObject *const_tuple_str_digest_68b72308bf2917066fde4b492afa1489_tuple;
PyObject *const_str_digest_68b72308bf2917066fde4b492afa1489;
PyObject *const_str_digest_da236c84c2dbb31314d9e00436fc24e3;
PyObject *const_tuple_str_digest_8aa8484df48f880159babc856f073325_tuple;
PyObject *const_str_digest_8aa8484df48f880159babc856f073325;
PyObject *const_str_digest_374ffb61669f909eb3359f731d6c6fa0;
PyObject *const_tuple_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac_tuple;
PyObject *const_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac;
PyObject *const_str_digest_b9bc0d714c8bd89d4149c6e3907b1de4;
PyObject *const_tuple_str_digest_b2ea6e7e043e35d36ec3c1599733882c_tuple;
PyObject *const_str_digest_b2ea6e7e043e35d36ec3c1599733882c;
PyObject *const_str_digest_2a790bc9daba1a9003a9515bb59feb21;
PyObject *const_tuple_str_digest_e328354439fe86c13e6c5cffe6a79707_tuple;
PyObject *const_str_digest_e328354439fe86c13e6c5cffe6a79707;
PyObject *const_str_digest_42b7b03f5a1fe35a2a2a85378a38aac4;
PyObject *const_tuple_str_digest_eca874ca0aca92a60a9f3961c3eeca4a_tuple;
PyObject *const_str_digest_eca874ca0aca92a60a9f3961c3eeca4a;
PyObject *const_str_digest_2c6b0b64226c8987a8654e5faf02f5e6;
PyObject *const_tuple_str_digest_134a26556d1ccf879ef7b122beeef960_tuple;
PyObject *const_str_digest_134a26556d1ccf879ef7b122beeef960;
PyObject *const_str_digest_fb6bf8f58efa4f66ca6ef4ac71839ade;
PyObject *const_tuple_str_digest_80411456df379e8767e34326f63b4233_tuple;
PyObject *const_str_digest_80411456df379e8767e34326f63b4233;
PyObject *const_str_plain_BetaManagedAgentsSessionEvent;
PyObject *const_tuple_str_plain_type_tuple;
PyObject *const_tuple_str_plain_discriminator_tuple;
PyObject *const_str_digest_b22ede1704e63d11a8b884cce625d329;
PyObject *const_str_digest_a90e19db195794d5816d5b39527ea4da;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[116];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.types.beta.sessions.beta_managed_agents_session_event"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PropertyInfo_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_user_message_event);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsUserMessageEvent_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsUserMessageEvent);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_agent_message_event);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentMessageEvent_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsAgentMessageEvent);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_session_error_event);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionErrorEvent_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_agent_thinking_event);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentThinkingEvent_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsAgentThinkingEvent);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_agent_tool_use_event);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentToolUseEvent_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsAgentToolUseEvent);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_user_interrupt_event);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsUserInterruptEvent_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsUserInterruptEvent);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_230cf712991ca05edd3dcd967b1d4d87);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionDeletedEvent_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionDeletedEvent);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_a43919991b869ebe8f156e310d8a5faa);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionUpdatedEvent_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionUpdatedEvent);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_00cdbeb922e522c6da3cd88c74d82662);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsUserToolResultEvent_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsUserToolResultEvent);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff7a1785b84792891d1dbe7b070c47b4);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentToolResultEvent_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsAgentToolResultEvent);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_1a02886b578e6e83915e9e85830aa625);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentMCPToolUseEvent_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolUseEvent);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_7ea9bd93674f086a4aaeca2d3e22c51b);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionStatusIdleEvent_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionStatusIdleEvent);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_26fe297ca4ea1d1e115a15748d0d72dc);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsUserDefineOutcomeEvent_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsUserDefineOutcomeEvent);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_8de9b38d69878d132f1d06943d71c118);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentCustomToolUseEvent_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsAgentCustomToolUseEvent);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b86de5cb83fcd2792d0a25b2223ccb1);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentMCPToolResultEvent_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolResultEvent);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_df4d2f0963c141f6f99904381d948245);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7bd78a3f07d54c8e773e97b2b33d4855_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_7bd78a3f07d54c8e773e97b2b33d4855);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_8bf6bbeecbb9b26c4bf9be3e428b8ee0);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_680985bd76c009f9f484b2ca1ee7179b_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_680985bd76c009f9f484b2ca1ee7179b);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_69b94baa64a893477643a644d2b44ab5);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_87fa0cb24f156084d751cb015c923d88_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_87fa0cb24f156084d751cb015c923d88);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_40d972d8062bd5d21699266ecbec1be1);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_47a3d32085b8900d70eebcf91501a8ea_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_47a3d32085b8900d70eebcf91501a8ea);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_b057ace19175756317b43867257827a8);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_be0c919b566c3ecfa243fcd814cb9d7c_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_be0c919b566c3ecfa243fcd814cb9d7c);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_590fe6cd1c992a1fff94d3643dbdf1e4);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_bbb81df83a566cf2814346e63f686900_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_bbb81df83a566cf2814346e63f686900);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_9dc1af1b57f64fa267f0908b6f5c4afb);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_53b65cba1e561c6df7f51f1093dca70d_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_53b65cba1e561c6df7f51f1093dca70d);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_11b40ac95fdb12964baf6c6c41b32b78);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a39975e914a6a86ba3153b197792b326_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_a39975e914a6a86ba3153b197792b326);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5f71707011d14e7134746d6f9a3fcca);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_79208f99f42387dedaa503f910cf801e_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_79208f99f42387dedaa503f910cf801e);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_7fb08b4202f0695f1759c805e119dac8);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e0e15641e9785d45266c86e750f17f58_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_e0e15641e9785d45266c86e750f17f58);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_936baf57ce758ebde4ee8bc4e9a3742a);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_68b72308bf2917066fde4b492afa1489_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_68b72308bf2917066fde4b492afa1489);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_da236c84c2dbb31314d9e00436fc24e3);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8aa8484df48f880159babc856f073325_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_8aa8484df48f880159babc856f073325);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_374ffb61669f909eb3359f731d6c6fa0);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_b9bc0d714c8bd89d4149c6e3907b1de4);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b2ea6e7e043e35d36ec3c1599733882c_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_b2ea6e7e043e35d36ec3c1599733882c);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a790bc9daba1a9003a9515bb59feb21);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e328354439fe86c13e6c5cffe6a79707_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_e328354439fe86c13e6c5cffe6a79707);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_42b7b03f5a1fe35a2a2a85378a38aac4);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_eca874ca0aca92a60a9f3961c3eeca4a_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_eca874ca0aca92a60a9f3961c3eeca4a);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c6b0b64226c8987a8654e5faf02f5e6);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_134a26556d1ccf879ef7b122beeef960_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_134a26556d1ccf879ef7b122beeef960);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb6bf8f58efa4f66ca6ef4ac71839ade);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_80411456df379e8767e34326f63b4233_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_80411456df379e8767e34326f63b4233);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionEvent);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_discriminator_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_b22ede1704e63d11a8b884cce625d329);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_a90e19db195794d5816d5b39527ea4da);
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
void checkModuleConstants_anthropic$types$beta$sessions$beta_managed_agents_session_event(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Annotated);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PropertyInfo_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PropertyInfo_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PropertyInfo);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_user_message_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_user_message_event);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsUserMessageEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsUserMessageEvent_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsUserMessageEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsUserMessageEvent);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_agent_message_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_agent_message_event);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentMessageEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentMessageEvent_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsAgentMessageEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsAgentMessageEvent);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_session_error_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_session_error_event);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionErrorEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionErrorEvent_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_agent_thinking_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_agent_thinking_event);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentThinkingEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentThinkingEvent_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsAgentThinkingEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsAgentThinkingEvent);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_agent_tool_use_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_agent_tool_use_event);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentToolUseEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentToolUseEvent_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsAgentToolUseEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsAgentToolUseEvent);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_managed_agents_user_interrupt_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_managed_agents_user_interrupt_event);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsUserInterruptEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsUserInterruptEvent_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsUserInterruptEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsUserInterruptEvent);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_230cf712991ca05edd3dcd967b1d4d87));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_230cf712991ca05edd3dcd967b1d4d87);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionDeletedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionDeletedEvent_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionDeletedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsSessionDeletedEvent);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_a43919991b869ebe8f156e310d8a5faa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a43919991b869ebe8f156e310d8a5faa);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionUpdatedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionUpdatedEvent_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionUpdatedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsSessionUpdatedEvent);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_00cdbeb922e522c6da3cd88c74d82662));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_00cdbeb922e522c6da3cd88c74d82662);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsUserToolResultEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsUserToolResultEvent_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsUserToolResultEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsUserToolResultEvent);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff7a1785b84792891d1dbe7b070c47b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ff7a1785b84792891d1dbe7b070c47b4);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentToolResultEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentToolResultEvent_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsAgentToolResultEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsAgentToolResultEvent);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_1a02886b578e6e83915e9e85830aa625));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1a02886b578e6e83915e9e85830aa625);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentMCPToolUseEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentMCPToolUseEvent_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolUseEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolUseEvent);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_7ea9bd93674f086a4aaeca2d3e22c51b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7ea9bd93674f086a4aaeca2d3e22c51b);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionStatusIdleEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionStatusIdleEvent_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionStatusIdleEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsSessionStatusIdleEvent);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_26fe297ca4ea1d1e115a15748d0d72dc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_26fe297ca4ea1d1e115a15748d0d72dc);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsUserDefineOutcomeEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsUserDefineOutcomeEvent_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsUserDefineOutcomeEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsUserDefineOutcomeEvent);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_8de9b38d69878d132f1d06943d71c118));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8de9b38d69878d132f1d06943d71c118);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentCustomToolUseEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentCustomToolUseEvent_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsAgentCustomToolUseEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsAgentCustomToolUseEvent);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b86de5cb83fcd2792d0a25b2223ccb1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b86de5cb83fcd2792d0a25b2223ccb1);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentMCPToolResultEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentMCPToolResultEvent_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolResultEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolResultEvent);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_df4d2f0963c141f6f99904381d948245));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_df4d2f0963c141f6f99904381d948245);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7bd78a3f07d54c8e773e97b2b33d4855_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_7bd78a3f07d54c8e773e97b2b33d4855_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_7bd78a3f07d54c8e773e97b2b33d4855));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7bd78a3f07d54c8e773e97b2b33d4855);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_8bf6bbeecbb9b26c4bf9be3e428b8ee0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8bf6bbeecbb9b26c4bf9be3e428b8ee0);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_680985bd76c009f9f484b2ca1ee7179b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_680985bd76c009f9f484b2ca1ee7179b_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_680985bd76c009f9f484b2ca1ee7179b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_680985bd76c009f9f484b2ca1ee7179b);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_69b94baa64a893477643a644d2b44ab5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_69b94baa64a893477643a644d2b44ab5);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_87fa0cb24f156084d751cb015c923d88_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_87fa0cb24f156084d751cb015c923d88_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_87fa0cb24f156084d751cb015c923d88));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_87fa0cb24f156084d751cb015c923d88);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_40d972d8062bd5d21699266ecbec1be1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_40d972d8062bd5d21699266ecbec1be1);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_47a3d32085b8900d70eebcf91501a8ea_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_47a3d32085b8900d70eebcf91501a8ea_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_47a3d32085b8900d70eebcf91501a8ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_47a3d32085b8900d70eebcf91501a8ea);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_b057ace19175756317b43867257827a8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b057ace19175756317b43867257827a8);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_be0c919b566c3ecfa243fcd814cb9d7c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_be0c919b566c3ecfa243fcd814cb9d7c_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_be0c919b566c3ecfa243fcd814cb9d7c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_be0c919b566c3ecfa243fcd814cb9d7c);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_590fe6cd1c992a1fff94d3643dbdf1e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_590fe6cd1c992a1fff94d3643dbdf1e4);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_bbb81df83a566cf2814346e63f686900_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_bbb81df83a566cf2814346e63f686900_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_bbb81df83a566cf2814346e63f686900));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bbb81df83a566cf2814346e63f686900);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_9dc1af1b57f64fa267f0908b6f5c4afb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9dc1af1b57f64fa267f0908b6f5c4afb);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_53b65cba1e561c6df7f51f1093dca70d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_53b65cba1e561c6df7f51f1093dca70d_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_53b65cba1e561c6df7f51f1093dca70d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_53b65cba1e561c6df7f51f1093dca70d);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_11b40ac95fdb12964baf6c6c41b32b78));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_11b40ac95fdb12964baf6c6c41b32b78);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a39975e914a6a86ba3153b197792b326_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a39975e914a6a86ba3153b197792b326_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_a39975e914a6a86ba3153b197792b326));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a39975e914a6a86ba3153b197792b326);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5f71707011d14e7134746d6f9a3fcca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5f71707011d14e7134746d6f9a3fcca);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_79208f99f42387dedaa503f910cf801e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_79208f99f42387dedaa503f910cf801e_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_79208f99f42387dedaa503f910cf801e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_79208f99f42387dedaa503f910cf801e);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_7fb08b4202f0695f1759c805e119dac8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7fb08b4202f0695f1759c805e119dac8);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e0e15641e9785d45266c86e750f17f58_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e0e15641e9785d45266c86e750f17f58_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_e0e15641e9785d45266c86e750f17f58));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e0e15641e9785d45266c86e750f17f58);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_936baf57ce758ebde4ee8bc4e9a3742a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_936baf57ce758ebde4ee8bc4e9a3742a);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_68b72308bf2917066fde4b492afa1489_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_68b72308bf2917066fde4b492afa1489_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_68b72308bf2917066fde4b492afa1489));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_68b72308bf2917066fde4b492afa1489);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_da236c84c2dbb31314d9e00436fc24e3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da236c84c2dbb31314d9e00436fc24e3);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8aa8484df48f880159babc856f073325_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8aa8484df48f880159babc856f073325_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_8aa8484df48f880159babc856f073325));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8aa8484df48f880159babc856f073325);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_374ffb61669f909eb3359f731d6c6fa0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_374ffb61669f909eb3359f731d6c6fa0);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_b9bc0d714c8bd89d4149c6e3907b1de4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b9bc0d714c8bd89d4149c6e3907b1de4);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b2ea6e7e043e35d36ec3c1599733882c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b2ea6e7e043e35d36ec3c1599733882c_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_b2ea6e7e043e35d36ec3c1599733882c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b2ea6e7e043e35d36ec3c1599733882c);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a790bc9daba1a9003a9515bb59feb21));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a790bc9daba1a9003a9515bb59feb21);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e328354439fe86c13e6c5cffe6a79707_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e328354439fe86c13e6c5cffe6a79707_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_e328354439fe86c13e6c5cffe6a79707));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e328354439fe86c13e6c5cffe6a79707);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_42b7b03f5a1fe35a2a2a85378a38aac4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_42b7b03f5a1fe35a2a2a85378a38aac4);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_eca874ca0aca92a60a9f3961c3eeca4a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_eca874ca0aca92a60a9f3961c3eeca4a_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_eca874ca0aca92a60a9f3961c3eeca4a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eca874ca0aca92a60a9f3961c3eeca4a);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c6b0b64226c8987a8654e5faf02f5e6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2c6b0b64226c8987a8654e5faf02f5e6);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_134a26556d1ccf879ef7b122beeef960_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_134a26556d1ccf879ef7b122beeef960_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_134a26556d1ccf879ef7b122beeef960));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_134a26556d1ccf879ef7b122beeef960);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb6bf8f58efa4f66ca6ef4ac71839ade));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb6bf8f58efa4f66ca6ef4ac71839ade);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_80411456df379e8767e34326f63b4233_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_80411456df379e8767e34326f63b4233_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_80411456df379e8767e34326f63b4233));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80411456df379e8767e34326f63b4233);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaManagedAgentsSessionEvent);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_discriminator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_discriminator_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_b22ede1704e63d11a8b884cce625d329));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b22ede1704e63d11a8b884cce625d329);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_a90e19db195794d5816d5b39527ea4da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a90e19db195794d5816d5b39527ea4da);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 39
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
static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$Annotated(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentCustomToolUseEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentCustomToolUseEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsAgentCustomToolUseEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsAgentCustomToolUseEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsAgentCustomToolUseEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsAgentCustomToolUseEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentCustomToolUseEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentCustomToolUseEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentCustomToolUseEvent);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentMCPToolResultEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolResultEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolResultEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolResultEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolResultEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolResultEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolResultEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolResultEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolResultEvent);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentMCPToolUseEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolUseEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolUseEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolUseEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolUseEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolUseEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolUseEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolUseEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolUseEvent);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentMessageEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentMessageEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsAgentMessageEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsAgentMessageEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsAgentMessageEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsAgentMessageEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentMessageEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentMessageEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentMessageEvent);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentThinkingEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentThinkingEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsAgentThinkingEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsAgentThinkingEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsAgentThinkingEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsAgentThinkingEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentThinkingEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentThinkingEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentThinkingEvent);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentThreadContextCompactedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_e328354439fe86c13e6c5cffe6a79707);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_e328354439fe86c13e6c5cffe6a79707);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_e328354439fe86c13e6c5cffe6a79707, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_e328354439fe86c13e6c5cffe6a79707);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_e328354439fe86c13e6c5cffe6a79707, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_e328354439fe86c13e6c5cffe6a79707);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_e328354439fe86c13e6c5cffe6a79707);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_e328354439fe86c13e6c5cffe6a79707);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentThreadMessageReceivedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_8aa8484df48f880159babc856f073325);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_8aa8484df48f880159babc856f073325);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_8aa8484df48f880159babc856f073325, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_8aa8484df48f880159babc856f073325);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_8aa8484df48f880159babc856f073325, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_8aa8484df48f880159babc856f073325);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_8aa8484df48f880159babc856f073325);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_8aa8484df48f880159babc856f073325);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentThreadMessageSentEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_53b65cba1e561c6df7f51f1093dca70d);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_53b65cba1e561c6df7f51f1093dca70d);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_53b65cba1e561c6df7f51f1093dca70d, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_53b65cba1e561c6df7f51f1093dca70d);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_53b65cba1e561c6df7f51f1093dca70d, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_53b65cba1e561c6df7f51f1093dca70d);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_53b65cba1e561c6df7f51f1093dca70d);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_53b65cba1e561c6df7f51f1093dca70d);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentToolResultEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentToolResultEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsAgentToolResultEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsAgentToolResultEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsAgentToolResultEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsAgentToolResultEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentToolResultEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentToolResultEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentToolResultEvent);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentToolUseEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentToolUseEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsAgentToolUseEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsAgentToolUseEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsAgentToolUseEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsAgentToolUseEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentToolUseEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentToolUseEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentToolUseEvent);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionDeletedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionDeletedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsSessionDeletedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsSessionDeletedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsSessionDeletedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsSessionDeletedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionDeletedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionDeletedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionDeletedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionErrorEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionStatusIdleEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionStatusIdleEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsSessionStatusIdleEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsSessionStatusIdleEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsSessionStatusIdleEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsSessionStatusIdleEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionStatusIdleEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionStatusIdleEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionStatusIdleEvent);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionStatusRescheduledEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_79208f99f42387dedaa503f910cf801e);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_79208f99f42387dedaa503f910cf801e);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_79208f99f42387dedaa503f910cf801e, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_79208f99f42387dedaa503f910cf801e);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_79208f99f42387dedaa503f910cf801e, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_79208f99f42387dedaa503f910cf801e);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_79208f99f42387dedaa503f910cf801e);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_79208f99f42387dedaa503f910cf801e);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionStatusRunningEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_7bd78a3f07d54c8e773e97b2b33d4855);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_7bd78a3f07d54c8e773e97b2b33d4855);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_7bd78a3f07d54c8e773e97b2b33d4855, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_7bd78a3f07d54c8e773e97b2b33d4855);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_7bd78a3f07d54c8e773e97b2b33d4855, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_7bd78a3f07d54c8e773e97b2b33d4855);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_7bd78a3f07d54c8e773e97b2b33d4855);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_7bd78a3f07d54c8e773e97b2b33d4855);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionStatusTerminatedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_a39975e914a6a86ba3153b197792b326);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_a39975e914a6a86ba3153b197792b326);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_a39975e914a6a86ba3153b197792b326, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_a39975e914a6a86ba3153b197792b326);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_a39975e914a6a86ba3153b197792b326, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_a39975e914a6a86ba3153b197792b326);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_a39975e914a6a86ba3153b197792b326);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_a39975e914a6a86ba3153b197792b326);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionThreadCreatedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_680985bd76c009f9f484b2ca1ee7179b);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_680985bd76c009f9f484b2ca1ee7179b);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_680985bd76c009f9f484b2ca1ee7179b, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_680985bd76c009f9f484b2ca1ee7179b);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_680985bd76c009f9f484b2ca1ee7179b, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_680985bd76c009f9f484b2ca1ee7179b);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_680985bd76c009f9f484b2ca1ee7179b);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_680985bd76c009f9f484b2ca1ee7179b);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionThreadStatusIdleEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_e0e15641e9785d45266c86e750f17f58);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_e0e15641e9785d45266c86e750f17f58);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_e0e15641e9785d45266c86e750f17f58, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_e0e15641e9785d45266c86e750f17f58);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_e0e15641e9785d45266c86e750f17f58, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_e0e15641e9785d45266c86e750f17f58);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_e0e15641e9785d45266c86e750f17f58);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_e0e15641e9785d45266c86e750f17f58);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionThreadStatusRescheduledEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_80411456df379e8767e34326f63b4233);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_80411456df379e8767e34326f63b4233);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_80411456df379e8767e34326f63b4233, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_80411456df379e8767e34326f63b4233);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_80411456df379e8767e34326f63b4233, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_80411456df379e8767e34326f63b4233);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_80411456df379e8767e34326f63b4233);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_80411456df379e8767e34326f63b4233);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionThreadStatusRunningEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionThreadStatusTerminatedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_134a26556d1ccf879ef7b122beeef960);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_134a26556d1ccf879ef7b122beeef960);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_134a26556d1ccf879ef7b122beeef960, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_134a26556d1ccf879ef7b122beeef960);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_134a26556d1ccf879ef7b122beeef960, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_134a26556d1ccf879ef7b122beeef960);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_134a26556d1ccf879ef7b122beeef960);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_134a26556d1ccf879ef7b122beeef960);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionUpdatedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionUpdatedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsSessionUpdatedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsSessionUpdatedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsSessionUpdatedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsSessionUpdatedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionUpdatedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionUpdatedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionUpdatedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSpanModelRequestEndEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_87fa0cb24f156084d751cb015c923d88);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_87fa0cb24f156084d751cb015c923d88);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_87fa0cb24f156084d751cb015c923d88, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_87fa0cb24f156084d751cb015c923d88);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_87fa0cb24f156084d751cb015c923d88, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_87fa0cb24f156084d751cb015c923d88);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_87fa0cb24f156084d751cb015c923d88);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_87fa0cb24f156084d751cb015c923d88);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSpanModelRequestStartEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_bbb81df83a566cf2814346e63f686900);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_bbb81df83a566cf2814346e63f686900);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_bbb81df83a566cf2814346e63f686900, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_bbb81df83a566cf2814346e63f686900);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_bbb81df83a566cf2814346e63f686900, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_bbb81df83a566cf2814346e63f686900);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_bbb81df83a566cf2814346e63f686900);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_bbb81df83a566cf2814346e63f686900);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSpanOutcomeEvaluationEndEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_68b72308bf2917066fde4b492afa1489);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_68b72308bf2917066fde4b492afa1489);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_68b72308bf2917066fde4b492afa1489, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_68b72308bf2917066fde4b492afa1489);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_68b72308bf2917066fde4b492afa1489, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_68b72308bf2917066fde4b492afa1489);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_68b72308bf2917066fde4b492afa1489);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_68b72308bf2917066fde4b492afa1489);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSpanOutcomeEvaluationOngoingEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_eca874ca0aca92a60a9f3961c3eeca4a);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_eca874ca0aca92a60a9f3961c3eeca4a);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_eca874ca0aca92a60a9f3961c3eeca4a, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_eca874ca0aca92a60a9f3961c3eeca4a);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_eca874ca0aca92a60a9f3961c3eeca4a, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_eca874ca0aca92a60a9f3961c3eeca4a);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_eca874ca0aca92a60a9f3961c3eeca4a);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_eca874ca0aca92a60a9f3961c3eeca4a);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSpanOutcomeEvaluationStartEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_b2ea6e7e043e35d36ec3c1599733882c);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_b2ea6e7e043e35d36ec3c1599733882c);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_b2ea6e7e043e35d36ec3c1599733882c, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_b2ea6e7e043e35d36ec3c1599733882c);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_b2ea6e7e043e35d36ec3c1599733882c, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_b2ea6e7e043e35d36ec3c1599733882c);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_b2ea6e7e043e35d36ec3c1599733882c);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_b2ea6e7e043e35d36ec3c1599733882c);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsUserCustomToolResultEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_be0c919b566c3ecfa243fcd814cb9d7c);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_be0c919b566c3ecfa243fcd814cb9d7c);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_be0c919b566c3ecfa243fcd814cb9d7c, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_be0c919b566c3ecfa243fcd814cb9d7c);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_be0c919b566c3ecfa243fcd814cb9d7c, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_be0c919b566c3ecfa243fcd814cb9d7c);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_be0c919b566c3ecfa243fcd814cb9d7c);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_be0c919b566c3ecfa243fcd814cb9d7c);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsUserDefineOutcomeEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserDefineOutcomeEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsUserDefineOutcomeEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsUserDefineOutcomeEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsUserDefineOutcomeEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsUserDefineOutcomeEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserDefineOutcomeEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserDefineOutcomeEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserDefineOutcomeEvent);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsUserInterruptEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserInterruptEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsUserInterruptEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsUserInterruptEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsUserInterruptEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsUserInterruptEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserInterruptEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserInterruptEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserInterruptEvent);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsUserMessageEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserMessageEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsUserMessageEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsUserMessageEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsUserMessageEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsUserMessageEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserMessageEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserMessageEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserMessageEvent);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsUserToolConfirmationEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_47a3d32085b8900d70eebcf91501a8ea);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_47a3d32085b8900d70eebcf91501a8ea);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_47a3d32085b8900d70eebcf91501a8ea, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_47a3d32085b8900d70eebcf91501a8ea);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_47a3d32085b8900d70eebcf91501a8ea, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_47a3d32085b8900d70eebcf91501a8ea);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_47a3d32085b8900d70eebcf91501a8ea);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_47a3d32085b8900d70eebcf91501a8ea);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsUserToolResultEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserToolResultEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsUserToolResultEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsUserToolResultEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaManagedAgentsUserToolResultEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaManagedAgentsUserToolResultEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserToolResultEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserToolResultEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserToolResultEvent);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$PropertyInfo(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$TypeAlias(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_33372d1bedb43ed8f7f669668499c543;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_b22ede1704e63d11a8b884cce625d329); CHECK_OBJECT(module_filename_obj);
code_objects_33372d1bedb43ed8f7f669668499c543 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_a90e19db195794d5816d5b39527ea4da, mod_consts.const_str_digest_a90e19db195794d5816d5b39527ea4da, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.


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

static function_impl_code const function_table_anthropic$types$beta$sessions$beta_managed_agents_session_event[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$types$beta$sessions$beta_managed_agents_session_event);
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
        module_anthropic$types$beta$sessions$beta_managed_agents_session_event,
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
        function_table_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        sizeof(function_table_anthropic$types$beta$sessions$beta_managed_agents_session_event) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.types.beta.sessions.beta_managed_agents_session_event";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$types$beta$sessions$beta_managed_agents_session_event(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$types$beta$sessions$beta_managed_agents_session_event");

    // Store the module for future use.
    module_anthropic$types$beta$sessions$beta_managed_agents_session_event = module;

    moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event = MODULE_DICT(module_anthropic$types$beta$sessions$beta_managed_agents_session_event);

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
        PRINT_STRING("anthropic$types$beta$sessions$beta_managed_agents_session_event: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$types$beta$sessions$beta_managed_agents_session_event: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$types$beta$sessions$beta_managed_agents_session_event: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.beta.sessions.beta_managed_agents_session_event" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$types$beta$sessions$beta_managed_agents_session_event\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$types$beta$sessions$beta_managed_agents_session_event);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$types$beta$sessions$beta_managed_agents_session_event);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event;
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
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event = MAKE_MODULE_FRAME(code_objects_33372d1bedb43ed8f7f669668499c543, module_anthropic$types$beta$sessions$beta_managed_agents_session_event);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event);
assert(Py_REFCNT(frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_Annotated,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Annotated);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_8);
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
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_PropertyInfo_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_4;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 6;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_PropertyInfo,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_PropertyInfo);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_beta_managed_agents_user_message_event;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_BetaManagedAgentsUserMessageEvent_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 7;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_BetaManagedAgentsUserMessageEvent,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_BetaManagedAgentsUserMessageEvent);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserMessageEvent, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_beta_managed_agents_agent_message_event;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentMessageEvent_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 8;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_BetaManagedAgentsAgentMessageEvent,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_BetaManagedAgentsAgentMessageEvent);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentMessageEvent, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_beta_managed_agents_session_error_event;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionErrorEvent_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 9;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_beta_managed_agents_agent_thinking_event;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentThinkingEvent_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 10;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_BetaManagedAgentsAgentThinkingEvent,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_BetaManagedAgentsAgentThinkingEvent);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentThinkingEvent, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_beta_managed_agents_agent_tool_use_event;
tmp_globals_arg_value_7 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentToolUseEvent_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 11;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_BetaManagedAgentsAgentToolUseEvent,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_BetaManagedAgentsAgentToolUseEvent);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentToolUseEvent, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_beta_managed_agents_user_interrupt_event;
tmp_globals_arg_value_8 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_BetaManagedAgentsUserInterruptEvent_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 12;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_BetaManagedAgentsUserInterruptEvent,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_BetaManagedAgentsUserInterruptEvent);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserInterruptEvent, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_230cf712991ca05edd3dcd967b1d4d87;
tmp_globals_arg_value_9 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionDeletedEvent_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 13;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_BetaManagedAgentsSessionDeletedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_BetaManagedAgentsSessionDeletedEvent);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionDeletedEvent, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_a43919991b869ebe8f156e310d8a5faa;
tmp_globals_arg_value_10 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionUpdatedEvent_tuple;
tmp_level_value_10 = mod_consts.const_int_pos_2;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 14;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_BetaManagedAgentsSessionUpdatedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_BetaManagedAgentsSessionUpdatedEvent);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionUpdatedEvent, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_00cdbeb922e522c6da3cd88c74d82662;
tmp_globals_arg_value_11 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_BetaManagedAgentsUserToolResultEvent_tuple;
tmp_level_value_11 = mod_consts.const_int_pos_2;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 15;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_BetaManagedAgentsUserToolResultEvent,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_BetaManagedAgentsUserToolResultEvent);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserToolResultEvent, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_ff7a1785b84792891d1dbe7b070c47b4;
tmp_globals_arg_value_12 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentToolResultEvent_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 16;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_BetaManagedAgentsAgentToolResultEvent,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_BetaManagedAgentsAgentToolResultEvent);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentToolResultEvent, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_1a02886b578e6e83915e9e85830aa625;
tmp_globals_arg_value_13 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentMCPToolUseEvent_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 17;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolUseEvent,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolUseEvent);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolUseEvent, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_7ea9bd93674f086a4aaeca2d3e22c51b;
tmp_globals_arg_value_14 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_BetaManagedAgentsSessionStatusIdleEvent_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 18;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_BetaManagedAgentsSessionStatusIdleEvent,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_BetaManagedAgentsSessionStatusIdleEvent);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionStatusIdleEvent, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_digest_26fe297ca4ea1d1e115a15748d0d72dc;
tmp_globals_arg_value_15 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_BetaManagedAgentsUserDefineOutcomeEvent_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 19;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_BetaManagedAgentsUserDefineOutcomeEvent,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_BetaManagedAgentsUserDefineOutcomeEvent);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsUserDefineOutcomeEvent, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_digest_8de9b38d69878d132f1d06943d71c118;
tmp_globals_arg_value_16 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentCustomToolUseEvent_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 20;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_BetaManagedAgentsAgentCustomToolUseEvent,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_BetaManagedAgentsAgentCustomToolUseEvent);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentCustomToolUseEvent, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_digest_9b86de5cb83fcd2792d0a25b2223ccb1;
tmp_globals_arg_value_17 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_BetaManagedAgentsAgentMCPToolResultEvent_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 21;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolResultEvent,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolResultEvent);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolResultEvent, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_digest_df4d2f0963c141f6f99904381d948245;
tmp_globals_arg_value_18 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_digest_7bd78a3f07d54c8e773e97b2b33d4855_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 22;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_7bd78a3f07d54c8e773e97b2b33d4855,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_digest_7bd78a3f07d54c8e773e97b2b33d4855);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_7bd78a3f07d54c8e773e97b2b33d4855, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_digest_8bf6bbeecbb9b26c4bf9be3e428b8ee0;
tmp_globals_arg_value_19 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_str_digest_680985bd76c009f9f484b2ca1ee7179b_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 23;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_680985bd76c009f9f484b2ca1ee7179b,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_digest_680985bd76c009f9f484b2ca1ee7179b);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_680985bd76c009f9f484b2ca1ee7179b, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_digest_69b94baa64a893477643a644d2b44ab5;
tmp_globals_arg_value_20 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = mod_consts.const_tuple_str_digest_87fa0cb24f156084d751cb015c923d88_tuple;
tmp_level_value_20 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 24;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
if (tmp_import_name_from_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_87fa0cb24f156084d751cb015c923d88,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_digest_87fa0cb24f156084d751cb015c923d88);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_87fa0cb24f156084d751cb015c923d88, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_21;
PyObject *tmp_globals_arg_value_21;
PyObject *tmp_locals_arg_value_21;
PyObject *tmp_fromlist_value_21;
PyObject *tmp_level_value_21;
tmp_name_value_21 = mod_consts.const_str_digest_40d972d8062bd5d21699266ecbec1be1;
tmp_globals_arg_value_21 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_21 = Py_None;
tmp_fromlist_value_21 = mod_consts.const_tuple_str_digest_47a3d32085b8900d70eebcf91501a8ea_tuple;
tmp_level_value_21 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 25;
tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
if (tmp_import_name_from_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_47a3d32085b8900d70eebcf91501a8ea,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_digest_47a3d32085b8900d70eebcf91501a8ea);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_47a3d32085b8900d70eebcf91501a8ea, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_24;
PyObject *tmp_name_value_22;
PyObject *tmp_globals_arg_value_22;
PyObject *tmp_locals_arg_value_22;
PyObject *tmp_fromlist_value_22;
PyObject *tmp_level_value_22;
tmp_name_value_22 = mod_consts.const_str_digest_b057ace19175756317b43867257827a8;
tmp_globals_arg_value_22 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_22 = Py_None;
tmp_fromlist_value_22 = mod_consts.const_tuple_str_digest_be0c919b566c3ecfa243fcd814cb9d7c_tuple;
tmp_level_value_22 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 26;
tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
if (tmp_import_name_from_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_be0c919b566c3ecfa243fcd814cb9d7c,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_digest_be0c919b566c3ecfa243fcd814cb9d7c);
}

CHECK_OBJECT(tmp_import_name_from_24);
Py_DECREF(tmp_import_name_from_24);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_be0c919b566c3ecfa243fcd814cb9d7c, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_25;
PyObject *tmp_name_value_23;
PyObject *tmp_globals_arg_value_23;
PyObject *tmp_locals_arg_value_23;
PyObject *tmp_fromlist_value_23;
PyObject *tmp_level_value_23;
tmp_name_value_23 = mod_consts.const_str_digest_590fe6cd1c992a1fff94d3643dbdf1e4;
tmp_globals_arg_value_23 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_23 = Py_None;
tmp_fromlist_value_23 = mod_consts.const_tuple_str_digest_bbb81df83a566cf2814346e63f686900_tuple;
tmp_level_value_23 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 27;
tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
if (tmp_import_name_from_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_bbb81df83a566cf2814346e63f686900,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_digest_bbb81df83a566cf2814346e63f686900);
}

CHECK_OBJECT(tmp_import_name_from_25);
Py_DECREF(tmp_import_name_from_25);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_bbb81df83a566cf2814346e63f686900, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_26;
PyObject *tmp_name_value_24;
PyObject *tmp_globals_arg_value_24;
PyObject *tmp_locals_arg_value_24;
PyObject *tmp_fromlist_value_24;
PyObject *tmp_level_value_24;
tmp_name_value_24 = mod_consts.const_str_digest_9dc1af1b57f64fa267f0908b6f5c4afb;
tmp_globals_arg_value_24 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_24 = Py_None;
tmp_fromlist_value_24 = mod_consts.const_tuple_str_digest_53b65cba1e561c6df7f51f1093dca70d_tuple;
tmp_level_value_24 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 28;
tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
if (tmp_import_name_from_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_53b65cba1e561c6df7f51f1093dca70d,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_digest_53b65cba1e561c6df7f51f1093dca70d);
}

CHECK_OBJECT(tmp_import_name_from_26);
Py_DECREF(tmp_import_name_from_26);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_53b65cba1e561c6df7f51f1093dca70d, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_27;
PyObject *tmp_name_value_25;
PyObject *tmp_globals_arg_value_25;
PyObject *tmp_locals_arg_value_25;
PyObject *tmp_fromlist_value_25;
PyObject *tmp_level_value_25;
tmp_name_value_25 = mod_consts.const_str_digest_11b40ac95fdb12964baf6c6c41b32b78;
tmp_globals_arg_value_25 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_25 = Py_None;
tmp_fromlist_value_25 = mod_consts.const_tuple_str_digest_a39975e914a6a86ba3153b197792b326_tuple;
tmp_level_value_25 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 29;
tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
if (tmp_import_name_from_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_a39975e914a6a86ba3153b197792b326,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_digest_a39975e914a6a86ba3153b197792b326);
}

CHECK_OBJECT(tmp_import_name_from_27);
Py_DECREF(tmp_import_name_from_27);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_a39975e914a6a86ba3153b197792b326, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_28;
PyObject *tmp_name_value_26;
PyObject *tmp_globals_arg_value_26;
PyObject *tmp_locals_arg_value_26;
PyObject *tmp_fromlist_value_26;
PyObject *tmp_level_value_26;
tmp_name_value_26 = mod_consts.const_str_digest_f5f71707011d14e7134746d6f9a3fcca;
tmp_globals_arg_value_26 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_26 = Py_None;
tmp_fromlist_value_26 = mod_consts.const_tuple_str_digest_79208f99f42387dedaa503f910cf801e_tuple;
tmp_level_value_26 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 30;
tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
if (tmp_import_name_from_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_79208f99f42387dedaa503f910cf801e,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_digest_79208f99f42387dedaa503f910cf801e);
}

CHECK_OBJECT(tmp_import_name_from_28);
Py_DECREF(tmp_import_name_from_28);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_79208f99f42387dedaa503f910cf801e, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_29;
PyObject *tmp_name_value_27;
PyObject *tmp_globals_arg_value_27;
PyObject *tmp_locals_arg_value_27;
PyObject *tmp_fromlist_value_27;
PyObject *tmp_level_value_27;
tmp_name_value_27 = mod_consts.const_str_digest_7fb08b4202f0695f1759c805e119dac8;
tmp_globals_arg_value_27 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_27 = Py_None;
tmp_fromlist_value_27 = mod_consts.const_tuple_str_digest_e0e15641e9785d45266c86e750f17f58_tuple;
tmp_level_value_27 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 31;
tmp_import_name_from_29 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
if (tmp_import_name_from_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_e0e15641e9785d45266c86e750f17f58,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_digest_e0e15641e9785d45266c86e750f17f58);
}

CHECK_OBJECT(tmp_import_name_from_29);
Py_DECREF(tmp_import_name_from_29);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_e0e15641e9785d45266c86e750f17f58, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_30;
PyObject *tmp_name_value_28;
PyObject *tmp_globals_arg_value_28;
PyObject *tmp_locals_arg_value_28;
PyObject *tmp_fromlist_value_28;
PyObject *tmp_level_value_28;
tmp_name_value_28 = mod_consts.const_str_digest_936baf57ce758ebde4ee8bc4e9a3742a;
tmp_globals_arg_value_28 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_28 = Py_None;
tmp_fromlist_value_28 = mod_consts.const_tuple_str_digest_68b72308bf2917066fde4b492afa1489_tuple;
tmp_level_value_28 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 32;
tmp_import_name_from_30 = IMPORT_MODULE5(tstate, tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
if (tmp_import_name_from_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_68b72308bf2917066fde4b492afa1489,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_digest_68b72308bf2917066fde4b492afa1489);
}

CHECK_OBJECT(tmp_import_name_from_30);
Py_DECREF(tmp_import_name_from_30);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_68b72308bf2917066fde4b492afa1489, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_31;
PyObject *tmp_name_value_29;
PyObject *tmp_globals_arg_value_29;
PyObject *tmp_locals_arg_value_29;
PyObject *tmp_fromlist_value_29;
PyObject *tmp_level_value_29;
tmp_name_value_29 = mod_consts.const_str_digest_da236c84c2dbb31314d9e00436fc24e3;
tmp_globals_arg_value_29 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_29 = Py_None;
tmp_fromlist_value_29 = mod_consts.const_tuple_str_digest_8aa8484df48f880159babc856f073325_tuple;
tmp_level_value_29 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 33;
tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
if (tmp_import_name_from_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_8aa8484df48f880159babc856f073325,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_digest_8aa8484df48f880159babc856f073325);
}

CHECK_OBJECT(tmp_import_name_from_31);
Py_DECREF(tmp_import_name_from_31);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_8aa8484df48f880159babc856f073325, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_32;
PyObject *tmp_name_value_30;
PyObject *tmp_globals_arg_value_30;
PyObject *tmp_locals_arg_value_30;
PyObject *tmp_fromlist_value_30;
PyObject *tmp_level_value_30;
tmp_name_value_30 = mod_consts.const_str_digest_374ffb61669f909eb3359f731d6c6fa0;
tmp_globals_arg_value_30 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_30 = Py_None;
tmp_fromlist_value_30 = mod_consts.const_tuple_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac_tuple;
tmp_level_value_30 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 34;
tmp_import_name_from_32 = IMPORT_MODULE5(tstate, tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
if (tmp_import_name_from_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac);
}

CHECK_OBJECT(tmp_import_name_from_32);
Py_DECREF(tmp_import_name_from_32);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_33;
PyObject *tmp_name_value_31;
PyObject *tmp_globals_arg_value_31;
PyObject *tmp_locals_arg_value_31;
PyObject *tmp_fromlist_value_31;
PyObject *tmp_level_value_31;
tmp_name_value_31 = mod_consts.const_str_digest_b9bc0d714c8bd89d4149c6e3907b1de4;
tmp_globals_arg_value_31 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_31 = Py_None;
tmp_fromlist_value_31 = mod_consts.const_tuple_str_digest_b2ea6e7e043e35d36ec3c1599733882c_tuple;
tmp_level_value_31 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 35;
tmp_import_name_from_33 = IMPORT_MODULE5(tstate, tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
if (tmp_import_name_from_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_b2ea6e7e043e35d36ec3c1599733882c,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_digest_b2ea6e7e043e35d36ec3c1599733882c);
}

CHECK_OBJECT(tmp_import_name_from_33);
Py_DECREF(tmp_import_name_from_33);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_b2ea6e7e043e35d36ec3c1599733882c, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_34;
PyObject *tmp_name_value_32;
PyObject *tmp_globals_arg_value_32;
PyObject *tmp_locals_arg_value_32;
PyObject *tmp_fromlist_value_32;
PyObject *tmp_level_value_32;
tmp_name_value_32 = mod_consts.const_str_digest_2a790bc9daba1a9003a9515bb59feb21;
tmp_globals_arg_value_32 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_32 = Py_None;
tmp_fromlist_value_32 = mod_consts.const_tuple_str_digest_e328354439fe86c13e6c5cffe6a79707_tuple;
tmp_level_value_32 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 36;
tmp_import_name_from_34 = IMPORT_MODULE5(tstate, tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
if (tmp_import_name_from_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_e328354439fe86c13e6c5cffe6a79707,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_digest_e328354439fe86c13e6c5cffe6a79707);
}

CHECK_OBJECT(tmp_import_name_from_34);
Py_DECREF(tmp_import_name_from_34);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_e328354439fe86c13e6c5cffe6a79707, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_35;
PyObject *tmp_name_value_33;
PyObject *tmp_globals_arg_value_33;
PyObject *tmp_locals_arg_value_33;
PyObject *tmp_fromlist_value_33;
PyObject *tmp_level_value_33;
tmp_name_value_33 = mod_consts.const_str_digest_42b7b03f5a1fe35a2a2a85378a38aac4;
tmp_globals_arg_value_33 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_33 = Py_None;
tmp_fromlist_value_33 = mod_consts.const_tuple_str_digest_eca874ca0aca92a60a9f3961c3eeca4a_tuple;
tmp_level_value_33 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 37;
tmp_import_name_from_35 = IMPORT_MODULE5(tstate, tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
if (tmp_import_name_from_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_eca874ca0aca92a60a9f3961c3eeca4a,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_digest_eca874ca0aca92a60a9f3961c3eeca4a);
}

CHECK_OBJECT(tmp_import_name_from_35);
Py_DECREF(tmp_import_name_from_35);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_eca874ca0aca92a60a9f3961c3eeca4a, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_36;
PyObject *tmp_name_value_34;
PyObject *tmp_globals_arg_value_34;
PyObject *tmp_locals_arg_value_34;
PyObject *tmp_fromlist_value_34;
PyObject *tmp_level_value_34;
tmp_name_value_34 = mod_consts.const_str_digest_2c6b0b64226c8987a8654e5faf02f5e6;
tmp_globals_arg_value_34 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_34 = Py_None;
tmp_fromlist_value_34 = mod_consts.const_tuple_str_digest_134a26556d1ccf879ef7b122beeef960_tuple;
tmp_level_value_34 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 40;
tmp_import_name_from_36 = IMPORT_MODULE5(tstate, tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
if (tmp_import_name_from_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_134a26556d1ccf879ef7b122beeef960,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_digest_134a26556d1ccf879ef7b122beeef960);
}

CHECK_OBJECT(tmp_import_name_from_36);
Py_DECREF(tmp_import_name_from_36);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_134a26556d1ccf879ef7b122beeef960, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_37;
PyObject *tmp_name_value_35;
PyObject *tmp_globals_arg_value_35;
PyObject *tmp_locals_arg_value_35;
PyObject *tmp_fromlist_value_35;
PyObject *tmp_level_value_35;
tmp_name_value_35 = mod_consts.const_str_digest_fb6bf8f58efa4f66ca6ef4ac71839ade;
tmp_globals_arg_value_35 = (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event;
tmp_locals_arg_value_35 = Py_None;
tmp_fromlist_value_35 = mod_consts.const_tuple_str_digest_80411456df379e8767e34326f63b4233_tuple;
tmp_level_value_35 = const_int_pos_1;
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 43;
tmp_import_name_from_37 = IMPORT_MODULE5(tstate, tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
if (tmp_import_name_from_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event,
        mod_consts.const_str_digest_80411456df379e8767e34326f63b4233,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_digest_80411456df379e8767e34326f63b4233);
}

CHECK_OBJECT(tmp_import_name_from_37);
Py_DECREF(tmp_import_name_from_37);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_digest_80411456df379e8767e34326f63b4233, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_LIST1(tstate, mod_consts.const_str_plain_BetaManagedAgentsSessionEvent);
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_2;
tmp_expression_value_1 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$Annotated(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$Union(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsUserMessageEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsUserMessageEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 33);
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsUserInterruptEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsUserInterruptEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsUserToolConfirmationEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_47a3d32085b8900d70eebcf91501a8ea);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsUserCustomToolResultEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_be0c919b566c3ecfa243fcd814cb9d7c);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentCustomToolUseEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsAgentCustomToolUseEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 4, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentMessageEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsAgentMessageEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 5, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentThinkingEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsAgentThinkingEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 6, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentMCPToolUseEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolUseEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 7, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentMCPToolResultEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsAgentMCPToolResultEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 8, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentToolUseEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsAgentToolUseEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 9, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentToolResultEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsAgentToolResultEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 10, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentThreadMessageReceivedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_8aa8484df48f880159babc856f073325);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 11, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentThreadMessageSentEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_53b65cba1e561c6df7f51f1093dca70d);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 12, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsAgentThreadContextCompactedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_e328354439fe86c13e6c5cffe6a79707);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 13, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionErrorEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsSessionErrorEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 14, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionStatusRescheduledEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_79208f99f42387dedaa503f910cf801e);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 15, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionStatusRunningEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_7bd78a3f07d54c8e773e97b2b33d4855);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 16, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionStatusIdleEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsSessionStatusIdleEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 17, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionStatusTerminatedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_a39975e914a6a86ba3153b197792b326);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 18, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionThreadCreatedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_680985bd76c009f9f484b2ca1ee7179b);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 19, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSpanOutcomeEvaluationStartEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_b2ea6e7e043e35d36ec3c1599733882c);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 20, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSpanOutcomeEvaluationEndEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_68b72308bf2917066fde4b492afa1489);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 21, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSpanModelRequestStartEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_bbb81df83a566cf2814346e63f686900);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 22, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSpanModelRequestEndEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_87fa0cb24f156084d751cb015c923d88);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 23, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSpanOutcomeEvaluationOngoingEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_eca874ca0aca92a60a9f3961c3eeca4a);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 24, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsUserDefineOutcomeEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsUserDefineOutcomeEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 25, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionDeletedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsSessionDeletedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 26, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionThreadStatusRunningEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_7c5e88ab7f33db0dd8ffb0cc94d6c2ac);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 27, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionThreadStatusIdleEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_e0e15641e9785d45266c86e750f17f58);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 28, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionThreadStatusTerminatedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_134a26556d1ccf879ef7b122beeef960);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 29, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsUserToolResultEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsUserToolResultEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 30, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionThreadStatusRescheduledEvent(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_subscript_value_2, 31, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$BetaManagedAgentsSessionUpdatedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaManagedAgentsSessionUpdatedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 32, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_1;
PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_called_value_1 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$PropertyInfo(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PropertyInfo);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto tuple_build_exception_2;
}
frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame.f_lineno = 85;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_type_tuple, 0), mod_consts.const_tuple_str_plain_discriminator_tuple);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_44 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaManagedAgentsSessionEvent, tmp_assign_source_44);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$TypeAlias(tstate);
if (unlikely(tmp_ass_subvalue_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_1 = module_var_accessor_anthropic$types$beta$sessions$beta_managed_agents_session_event$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_BetaManagedAgentsSessionEvent;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$types$beta$sessions$beta_managed_agents_session_event);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$types$beta$sessions$beta_managed_agents_session_event", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.beta.sessions.beta_managed_agents_session_event" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$types$beta$sessions$beta_managed_agents_session_event);
    return module_anthropic$types$beta$sessions$beta_managed_agents_session_event;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$beta$sessions$beta_managed_agents_session_event, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$types$beta$sessions$beta_managed_agents_session_event", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

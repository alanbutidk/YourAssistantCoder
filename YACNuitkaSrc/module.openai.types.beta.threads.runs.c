/* Generated code for Python module 'openai$types$beta$threads$runs'
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



/* The "module_openai$types$beta$threads$runs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$types$beta$threads$runs;
PyDictObject *moduledict_openai$types$beta$threads$runs;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_c0760630ed38e8aa80130ab81decf450_tuple;
PyObject *const_str_digest_e8eed8fb8fa6f15b58d4824aa6db9069;
PyObject *const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple;
PyObject *const_str_digest_2b5612c4574eaffd53a7ee97d5e095ab;
PyObject *const_tuple_ddc1e164e356ec9b9330ed96b53cee2b_tuple;
PyObject *const_str_digest_6ad927830bd3a753c3170381843263a0;
PyObject *const_tuple_c7b6c5f12e3e73bec04d654f790db3b2_tuple;
PyObject *const_str_plain_runs;
PyObject *const_tuple_9a0384eac4ff970c1018a54d8d965a11_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_run_step;
PyObject *const_tuple_str_plain_RunStep_tuple;
PyObject *const_str_plain_RunStep;
PyObject *const_str_plain_tool_call;
PyObject *const_tuple_str_plain_ToolCall_tuple;
PyObject *const_str_plain_ToolCall;
PyObject *const_str_plain_run_step_delta;
PyObject *const_tuple_str_plain_RunStepDelta_tuple;
PyObject *const_str_plain_RunStepDelta;
PyObject *const_str_plain_tool_call_delta;
PyObject *const_tuple_str_plain_ToolCallDelta_tuple;
PyObject *const_str_plain_ToolCallDelta;
PyObject *const_str_plain_run_step_include;
PyObject *const_tuple_str_plain_RunStepInclude_tuple;
PyObject *const_str_plain_RunStepInclude;
PyObject *const_str_plain_step_list_params;
PyObject *const_tuple_str_plain_StepListParams_tuple;
PyObject *const_str_plain_StepListParams;
PyObject *const_str_plain_function_tool_call;
PyObject *const_tuple_str_plain_FunctionToolCall_tuple;
PyObject *const_str_plain_FunctionToolCall;
PyObject *const_str_plain_run_step_delta_event;
PyObject *const_tuple_str_plain_RunStepDeltaEvent_tuple;
PyObject *const_str_plain_RunStepDeltaEvent;
PyObject *const_str_plain_step_retrieve_params;
PyObject *const_tuple_str_plain_StepRetrieveParams_tuple;
PyObject *const_str_plain_StepRetrieveParams;
PyObject *const_str_plain_code_interpreter_logs;
PyObject *const_tuple_str_plain_CodeInterpreterLogs_tuple;
PyObject *const_str_plain_CodeInterpreterLogs;
PyObject *const_str_plain_file_search_tool_call;
PyObject *const_tuple_str_plain_FileSearchToolCall_tuple;
PyObject *const_str_plain_FileSearchToolCall;
PyObject *const_str_plain_tool_call_delta_object;
PyObject *const_tuple_str_plain_ToolCallDeltaObject_tuple;
PyObject *const_str_plain_ToolCallDeltaObject;
PyObject *const_str_plain_tool_calls_step_details;
PyObject *const_tuple_str_plain_ToolCallsStepDetails_tuple;
PyObject *const_str_plain_ToolCallsStepDetails;
PyObject *const_str_plain_function_tool_call_delta;
PyObject *const_tuple_str_plain_FunctionToolCallDelta_tuple;
PyObject *const_str_plain_FunctionToolCallDelta;
PyObject *const_str_plain_code_interpreter_tool_call;
PyObject *const_tuple_str_plain_CodeInterpreterToolCall_tuple;
PyObject *const_str_plain_CodeInterpreterToolCall;
PyObject *const_str_plain_file_search_tool_call_delta;
PyObject *const_tuple_str_plain_FileSearchToolCallDelta_tuple;
PyObject *const_str_plain_FileSearchToolCallDelta;
PyObject *const_str_plain_run_step_delta_message_delta;
PyObject *const_tuple_str_plain_RunStepDeltaMessageDelta_tuple;
PyObject *const_str_plain_RunStepDeltaMessageDelta;
PyObject *const_str_plain_code_interpreter_output_image;
PyObject *const_tuple_str_plain_CodeInterpreterOutputImage_tuple;
PyObject *const_str_plain_CodeInterpreterOutputImage;
PyObject *const_str_plain_message_creation_step_details;
PyObject *const_tuple_str_plain_MessageCreationStepDetails_tuple;
PyObject *const_str_plain_MessageCreationStepDetails;
PyObject *const_str_plain_code_interpreter_tool_call_delta;
PyObject *const_tuple_str_plain_CodeInterpreterToolCallDelta_tuple;
PyObject *const_str_plain_CodeInterpreterToolCallDelta;
PyObject *const_str_digest_712848da239ce1093e15ab5003882338;
PyObject *const_str_digest_76df53fa01194dbd736e1cb2c5ee97af;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[77];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.types.beta.threads.runs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_e8eed8fb8fa6f15b58d4824aa6db9069);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b5612c4574eaffd53a7ee97d5e095ab);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_ddc1e164e356ec9b9330ed96b53cee2b_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ad927830bd3a753c3170381843263a0);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_c7b6c5f12e3e73bec04d654f790db3b2_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_runs);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_9a0384eac4ff970c1018a54d8d965a11_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_step);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunStep_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunStep);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_call);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ToolCall_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_ToolCall);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_step_delta);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunStepDelta_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunStepDelta);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_call_delta);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ToolCallDelta_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_ToolCallDelta);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_step_include);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunStepInclude_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunStepInclude);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_step_list_params);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StepListParams_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_StepListParams);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_function_tool_call);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FunctionToolCall_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_FunctionToolCall);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_step_delta_event);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunStepDeltaEvent_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunStepDeltaEvent);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_step_retrieve_params);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StepRetrieveParams_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_StepRetrieveParams);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_code_interpreter_logs);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CodeInterpreterLogs_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_CodeInterpreterLogs);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_search_tool_call);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileSearchToolCall_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileSearchToolCall);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_call_delta_object);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ToolCallDeltaObject_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_ToolCallDeltaObject);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_calls_step_details);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ToolCallsStepDetails_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_ToolCallsStepDetails);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_function_tool_call_delta);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FunctionToolCallDelta_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_FunctionToolCallDelta);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_code_interpreter_tool_call);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CodeInterpreterToolCall_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_CodeInterpreterToolCall);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_search_tool_call_delta);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileSearchToolCallDelta_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileSearchToolCallDelta);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_step_delta_message_delta);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunStepDeltaMessageDelta_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunStepDeltaMessageDelta);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_code_interpreter_output_image);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CodeInterpreterOutputImage_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_CodeInterpreterOutputImage);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_message_creation_step_details);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageCreationStepDetails_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageCreationStepDetails);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_code_interpreter_tool_call_delta);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CodeInterpreterToolCallDelta_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_CodeInterpreterToolCallDelta);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_712848da239ce1093e15ab5003882338);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_76df53fa01194dbd736e1cb2c5ee97af);
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
void checkModuleConstants_openai$types$beta$threads$runs(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_e8eed8fb8fa6f15b58d4824aa6db9069));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e8eed8fb8fa6f15b58d4824aa6db9069);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b5612c4574eaffd53a7ee97d5e095ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b5612c4574eaffd53a7ee97d5e095ab);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_ddc1e164e356ec9b9330ed96b53cee2b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ddc1e164e356ec9b9330ed96b53cee2b_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ad927830bd3a753c3170381843263a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ad927830bd3a753c3170381843263a0);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_c7b6c5f12e3e73bec04d654f790db3b2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c7b6c5f12e3e73bec04d654f790db3b2_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_runs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_runs);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_9a0384eac4ff970c1018a54d8d965a11_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9a0384eac4ff970c1018a54d8d965a11_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_step));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_step);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunStep_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RunStep_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunStep));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunStep);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_call));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_call);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ToolCall_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ToolCall_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_ToolCall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ToolCall);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_step_delta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_step_delta);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunStepDelta_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RunStepDelta_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunStepDelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunStepDelta);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_call_delta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_call_delta);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ToolCallDelta_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ToolCallDelta_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_ToolCallDelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ToolCallDelta);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_step_include));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_step_include);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunStepInclude_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RunStepInclude_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunStepInclude));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunStepInclude);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_step_list_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_step_list_params);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StepListParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StepListParams_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_StepListParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StepListParams);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_function_tool_call));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_function_tool_call);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FunctionToolCall_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FunctionToolCall_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_FunctionToolCall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FunctionToolCall);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_step_delta_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_step_delta_event);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunStepDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RunStepDeltaEvent_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunStepDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunStepDeltaEvent);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_step_retrieve_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_step_retrieve_params);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StepRetrieveParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StepRetrieveParams_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_StepRetrieveParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StepRetrieveParams);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_code_interpreter_logs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code_interpreter_logs);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CodeInterpreterLogs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CodeInterpreterLogs_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_CodeInterpreterLogs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CodeInterpreterLogs);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_search_tool_call));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_search_tool_call);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileSearchToolCall_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FileSearchToolCall_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileSearchToolCall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileSearchToolCall);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_call_delta_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_call_delta_object);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ToolCallDeltaObject_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ToolCallDeltaObject_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_ToolCallDeltaObject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ToolCallDeltaObject);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_calls_step_details));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_calls_step_details);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ToolCallsStepDetails_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ToolCallsStepDetails_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_ToolCallsStepDetails));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ToolCallsStepDetails);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_function_tool_call_delta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_function_tool_call_delta);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FunctionToolCallDelta_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FunctionToolCallDelta_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_FunctionToolCallDelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FunctionToolCallDelta);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_code_interpreter_tool_call));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code_interpreter_tool_call);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CodeInterpreterToolCall_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CodeInterpreterToolCall_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_CodeInterpreterToolCall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CodeInterpreterToolCall);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_search_tool_call_delta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_search_tool_call_delta);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileSearchToolCallDelta_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FileSearchToolCallDelta_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileSearchToolCallDelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileSearchToolCallDelta);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_step_delta_message_delta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_step_delta_message_delta);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RunStepDeltaMessageDelta_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RunStepDeltaMessageDelta_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunStepDeltaMessageDelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunStepDeltaMessageDelta);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_code_interpreter_output_image));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code_interpreter_output_image);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CodeInterpreterOutputImage_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CodeInterpreterOutputImage_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_CodeInterpreterOutputImage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CodeInterpreterOutputImage);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_message_creation_step_details));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message_creation_step_details);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageCreationStepDetails_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MessageCreationStepDetails_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageCreationStepDetails));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageCreationStepDetails);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_code_interpreter_tool_call_delta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code_interpreter_tool_call_delta);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CodeInterpreterToolCallDelta_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CodeInterpreterToolCallDelta_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_CodeInterpreterToolCallDelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CodeInterpreterToolCallDelta);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_712848da239ce1093e15ab5003882338));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_712848da239ce1093e15ab5003882338);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_76df53fa01194dbd736e1cb2c5ee97af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_76df53fa01194dbd736e1cb2c5ee97af);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 2
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
static PyObject *module_var_accessor_openai$types$beta$threads$runs$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$threads$runs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$threads$runs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$threads$runs->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$beta$threads$runs$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$beta$threads$runs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$beta$threads$runs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$beta$threads$runs->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_ba5db137b5ce121f603a009c0c9e2850;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_712848da239ce1093e15ab5003882338); CHECK_OBJECT(module_filename_obj);
code_objects_ba5db137b5ce121f603a009c0c9e2850 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_76df53fa01194dbd736e1cb2c5ee97af, mod_consts.const_str_digest_76df53fa01194dbd736e1cb2c5ee97af, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_openai$types$beta$threads$runs[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$types$beta$threads$runs);
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
        module_openai$types$beta$threads$runs,
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
        function_table_openai$types$beta$threads$runs,
        sizeof(function_table_openai$types$beta$threads$runs) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.types.beta.threads.runs";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$types$beta$threads$runs(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$types$beta$threads$runs");

    // Store the module for future use.
    module_openai$types$beta$threads$runs = module;

    moduledict_openai$types$beta$threads$runs = MODULE_DICT(module_openai$types$beta$threads$runs);

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
        PRINT_STRING("openai$types$beta$threads$runs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$types$beta$threads$runs: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$types$beta$threads$runs: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.beta.threads.runs" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$types$beta$threads$runs\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$types$beta$threads$runs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$types$beta$threads$runs,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$types$beta$threads$runs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$beta$threads$runs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$beta$threads$runs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$types$beta$threads$runs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$types$beta$threads$runs);
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

        UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_openai$types$beta$threads$runs;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$types$beta$threads$runs = MAKE_MODULE_FRAME(code_objects_ba5db137b5ce121f603a009c0c9e2850, module_openai$types$beta$threads$runs);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$beta$threads$runs);
assert(Py_REFCNT(frame_frame_openai$types$beta$threads$runs) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
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
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 6);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_10;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


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
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_3 = NULL;
    }
}
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_e8eed8fb8fa6f15b58d4824aa6db9069;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_4 = NULL;
    }
}
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_5 = NULL;
    }
}
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_5, mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_5 = mod_consts.const_str_digest_2b5612c4574eaffd53a7ee97d5e095ab;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_6 = NULL;
    }
}
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_7 = NULL;
    }
}
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
tmp_args_element_value_6 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_7, mod_consts.const_tuple_ddc1e164e356ec9b9330ed96b53cee2b_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_7 = mod_consts.const_str_digest_6ad927830bd3a753c3170381843263a0;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 3, tmp_list_element_1);
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_8 = NULL;
    }
}
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_9 = NULL;
    }
}
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
tmp_args_element_value_8 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_9, mod_consts.const_tuple_c7b6c5f12e3e73bec04d654f790db3b2_tuple);

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_9 = mod_consts.const_str_plain_runs;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 4, tmp_list_element_1);
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_10 = NULL;
    }
}
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_10, mod_consts.const_tuple_9a0384eac4ff970c1018a54d8d965a11_tuple);

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 5, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$types$beta$threads$runs$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$types$beta$threads$runs$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_openai$types$beta$threads$runs$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_openai$types$beta$threads$runs$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_run_step;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_RunStep_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 5;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_RunStep,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_RunStep);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStep, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_tool_call;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_ToolCall_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 6;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_ToolCall,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ToolCall);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolCall, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_run_step_delta;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_RunStepDelta_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 7;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_RunStepDelta,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_RunStepDelta);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStepDelta, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_tool_call_delta;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ToolCallDelta_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 8;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_ToolCallDelta,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ToolCallDelta);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolCallDelta, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_run_step_include;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_RunStepInclude_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 9;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_RunStepInclude,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_RunStepInclude);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStepInclude, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_step_list_params;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_StepListParams_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 10;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_StepListParams,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_StepListParams);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_StepListParams, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_function_tool_call;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_FunctionToolCall_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 11;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_FunctionToolCall,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_FunctionToolCall);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_FunctionToolCall, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_run_step_delta_event;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_RunStepDeltaEvent_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 12;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_RunStepDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_RunStepDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStepDeltaEvent, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_step_retrieve_params;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_StepRetrieveParams_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 13;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_StepRetrieveParams,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_StepRetrieveParams);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_StepRetrieveParams, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_code_interpreter_logs;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_CodeInterpreterLogs_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 14;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_CodeInterpreterLogs,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_CodeInterpreterLogs);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeInterpreterLogs, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_file_search_tool_call;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_FileSearchToolCall_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 15;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_FileSearchToolCall,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_FileSearchToolCall);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_FileSearchToolCall, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_tool_call_delta_object;
tmp_globals_arg_value_12 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_ToolCallDeltaObject_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 16;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_ToolCallDeltaObject,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_ToolCallDeltaObject);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolCallDeltaObject, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain_tool_calls_step_details;
tmp_globals_arg_value_13 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_ToolCallsStepDetails_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 17;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_ToolCallsStepDetails,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_ToolCallsStepDetails);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_ToolCallsStepDetails, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_plain_function_tool_call_delta;
tmp_globals_arg_value_14 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_FunctionToolCallDelta_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 18;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_FunctionToolCallDelta,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_FunctionToolCallDelta);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_FunctionToolCallDelta, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain_code_interpreter_tool_call;
tmp_globals_arg_value_15 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_CodeInterpreterToolCall_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 19;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_CodeInterpreterToolCall,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_CodeInterpreterToolCall);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeInterpreterToolCall, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain_file_search_tool_call_delta;
tmp_globals_arg_value_16 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_FileSearchToolCallDelta_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 20;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_FileSearchToolCallDelta,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_FileSearchToolCallDelta);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_FileSearchToolCallDelta, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_plain_run_step_delta_message_delta;
tmp_globals_arg_value_17 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_RunStepDeltaMessageDelta_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 21;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_RunStepDeltaMessageDelta,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_RunStepDeltaMessageDelta);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStepDeltaMessageDelta, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_plain_code_interpreter_output_image;
tmp_globals_arg_value_18 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_CodeInterpreterOutputImage_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 22;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_CodeInterpreterOutputImage,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_CodeInterpreterOutputImage);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeInterpreterOutputImage, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_plain_message_creation_step_details;
tmp_globals_arg_value_19 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_str_plain_MessageCreationStepDetails_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 23;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_MessageCreationStepDetails,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_MessageCreationStepDetails);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageCreationStepDetails, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_plain_code_interpreter_tool_call_delta;
tmp_globals_arg_value_20 = (PyObject *)moduledict_openai$types$beta$threads$runs;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = mod_consts.const_tuple_str_plain_CodeInterpreterToolCallDelta_tuple;
tmp_level_value_20 = const_int_pos_1;
frame_frame_openai$types$beta$threads$runs->m_frame.f_lineno = 24;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_openai$types$beta$threads$runs,
        mod_consts.const_str_plain_CodeInterpreterToolCallDelta,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_CodeInterpreterToolCallDelta);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)mod_consts.const_str_plain_CodeInterpreterToolCallDelta, tmp_assign_source_25);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$beta$threads$runs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$beta$threads$runs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$beta$threads$runs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$types$beta$threads$runs);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$types$beta$threads$runs", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.beta.threads.runs" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$types$beta$threads$runs);
    return module_openai$types$beta$threads$runs;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$beta$threads$runs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$types$beta$threads$runs", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'openai$resources$audio$translations'
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



/* The "module_openai$resources$audio$translations" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$resources$audio$translations;
PyDictObject *moduledict_openai$resources$audio$translations;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_TranslationsWithRawResponse;
PyObject *const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b;
PyObject *const_str_plain_TranslationsWithStreamingResponse;
PyObject *const_str_digest_83b043a94791b7a89fe1b103b91c36a3;
PyObject *const_str_plain_deepcopy_minimal;
PyObject *const_str_plain_model;
PyObject *const_str_plain_prompt;
PyObject *const_str_plain_response_format;
PyObject *const_str_plain_temperature;
PyObject *const_str_plain_extract_files;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_Mapping;
PyObject *const_tuple_type_str_type_object_tuple;
PyObject *const_dict_e227e2a24d80187d6d47169c187ec831;
PyObject *const_dict_3ee551a4bf27c90926532b76bf9a688f;
PyObject *const_str_plain__post;
PyObject *const_str_plain_maybe_transform;
PyObject *const_str_plain_translation_create_params;
PyObject *const_str_plain_TranslationCreateParams;
PyObject *const_str_plain_make_request_options;
PyObject *const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple;
PyObject *const_str_plain__get_response_format_type;
PyObject *const_tuple_str_digest_8db5a57002f77a719383673129847225_tuple;
PyObject *const_tuple_1ffded09c016c73c14e3da1eb55d8b94_tuple;
PyObject *const_str_digest_0b42c4181fd0bdbc134141648aace805;
PyObject *const_str_plain_AsyncTranslationsWithRawResponse;
PyObject *const_str_plain_AsyncTranslationsWithStreamingResponse;
PyObject *const_str_plain_create;
PyObject *const_str_digest_a74cf956e72d76fffa78a95c454fa5de;
PyObject *const_str_plain_extra_headers;
PyObject *const_str_plain_self;
PyObject *const_str_plain_async_maybe_transform;
PyObject *const_str_plain_extra_query;
PyObject *const_str_plain_extra_body;
PyObject *const_str_plain_timeout;
PyObject *const_str_plain__translations;
PyObject *const_str_plain__legacy_response;
PyObject *const_str_plain_to_raw_response_wrapper;
PyObject *const_str_plain_async_to_raw_response_wrapper;
PyObject *const_str_plain_to_streamed_response_wrapper;
PyObject *const_str_plain_async_to_streamed_response_wrapper;
PyObject *const_str_plain_NotGiven;
PyObject *const_str_plain_Translation;
PyObject *const_str_plain_json;
PyObject *const_str_plain_verbose_json;
PyObject *const_str_plain_TranslationVerbose;
PyObject *const_str_plain_srt;
PyObject *const_str_plain_text;
PyObject *const_str_plain_vtt;
PyObject *const_str_plain_log;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_439541e80bfdf6461de76fc4fc32c289;
PyObject *const_str_plain_Transcription;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Literal_str_plain_overload_str_plain_assert_never_tuple;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_overload;
PyObject *const_str_plain_assert_never;
PyObject *const_str_plain_httpx;
PyObject *const_tuple_str_plain__legacy_response_tuple;
PyObject *const_int_pos_3;
PyObject *const_str_plain__types;
PyObject *const_tuple_d3f69ff1c97b29999250ccbe2edbb63c_tuple;
PyObject *const_str_plain_NOT_GIVEN;
PyObject *const_str_plain_Body;
PyObject *const_str_plain_Query;
PyObject *const_str_plain_Headers;
PyObject *const_str_plain_FileTypes;
PyObject *const_str_plain__utils;
PyObject *const_tuple_bc1b1060ee858bdb5c4c9aad8ef0ec75_tuple;
PyObject *const_str_plain__compat;
PyObject *const_tuple_str_plain_cached_property_tuple;
PyObject *const_str_plain_cached_property;
PyObject *const_str_plain__resource;
PyObject *const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple;
PyObject *const_str_plain_SyncAPIResource;
PyObject *const_str_plain_AsyncAPIResource;
PyObject *const_str_plain__response;
PyObject *const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple;
PyObject *const_str_digest_d30d12c58eccbb238695faae0223f8e4;
PyObject *const_tuple_str_plain_translation_create_params_tuple;
PyObject *const_str_plain__base_client;
PyObject *const_tuple_str_plain_make_request_options_tuple;
PyObject *const_str_digest_c86bca742990b2d62cfbd365dc334fca;
PyObject *const_tuple_str_plain_AudioModel_tuple;
PyObject *const_str_plain_AudioModel;
PyObject *const_str_digest_db807a28b8c1ec195012adbd9ea1ac1c;
PyObject *const_tuple_str_plain_Translation_tuple;
PyObject *const_str_digest_a38f8d545559b68edcf618e57fe7157f;
PyObject *const_tuple_str_plain_AudioResponseFormat_tuple;
PyObject *const_str_plain_AudioResponseFormat;
PyObject *const_str_digest_07663408f4d3a11510d8389306075278;
PyObject *const_tuple_str_plain_TranslationVerbose_tuple;
PyObject *const_str_plain_Translations;
PyObject *const_str_plain_AsyncTranslations;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_3459729c16b4903bc76ed1f5a90d5e05_tuple;
PyObject *const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_1563495776d108b6175f0363bdd45b21;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_29;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_ed36a86de8fb2a43e81d1ec2318e66de;
PyObject *const_str_plain_with_raw_response;
PyObject *const_str_digest_e258b213a83402496380d63587e0903b;
PyObject *const_dict_00ce9e06b8f05dce121974cea5a92c92;
PyObject *const_str_plain_with_streaming_response;
PyObject *const_str_digest_1801c105a48fd8b34233598b7ce9013d;
PyObject *const_dict_a7cd4047190c310e850e9daccb320aa1;
PyObject *const_str_digest_8ef647f81fd290dc4869579374e7460b;
PyObject *const_dict_702bedaf628b3db7fa6180c1b9cbbb02;
PyObject *const_dict_737b7daa31345f378ffeb3f83f808845;
PyObject *const_dict_bc46f24f71f8290392ee14bcde20949b;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_172;
PyObject *const_dict_21dca6c7a27ad688c71726b651063627;
PyObject *const_str_digest_6a9fd6ed13fa86eadb6593ec1f6e9bc9;
PyObject *const_dict_0690745a65ca9510fab00abf6a3ba4c1;
PyObject *const_str_digest_2bc8b76201bd6133dfff123cbd0b7123;
PyObject *const_dict_49461bf97278cd455e0d2578c0730fce;
PyObject *const_int_pos_315;
PyObject *const_dict_3bed6e2164bd438fe0c2f5543cb30761;
PyObject *const_str_digest_91f8b39fa09c83cc1ae31f7ff07a8540;
PyObject *const_tuple_str_plain__translations_str_plain_create_tuple;
PyObject *const_int_pos_324;
PyObject *const_dict_20bb9a5afcbf6c225c91cb82dc4a1dd2;
PyObject *const_str_digest_429365faa7de187ff965c32d4a576710;
PyObject *const_int_pos_333;
PyObject *const_str_digest_9b6dea06b9568147590cfce39aa5d8fc;
PyObject *const_int_pos_342;
PyObject *const_str_digest_191e0b84041c00d62197882a38b9cef0;
PyObject *const_dict_0e3d553e2c30f0223a3a7cfa9b086c2f;
PyObject *const_str_digest_2bb339d249e96d5ca61b9ec618c83ad2;
PyObject *const_str_digest_77a633e478b1757351d83808aa108cd4;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_translations_tuple;
PyObject *const_tuple_str_plain_response_format_tuple;
PyObject *const_tuple_5de87b75248d649cc112bdc7186c0dea_tuple;
PyObject *const_tuple_e14452daec11069e9f91cefb484d1c6b_tuple;
PyObject *const_tuple_str_plain_self_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[151];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.resources.audio.translations"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_TranslationsWithRawResponse);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_TranslationsWithStreamingResponse);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_deepcopy_minimal);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_model);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_prompt);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_format);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_temperature);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_files);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_object_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_dict_e227e2a24d80187d6d47169c187ec831);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_dict_3ee551a4bf27c90926532b76bf9a688f);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__post);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_transform);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_translation_create_params);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_TranslationCreateParams);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_make_request_options);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_response_format_type);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8db5a57002f77a719383673129847225_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_1ffded09c016c73c14e3da1eb55d8b94_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_0b42c4181fd0bdbc134141648aace805);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncTranslationsWithRawResponse);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncTranslationsWithStreamingResponse);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_create);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_a74cf956e72d76fffa78a95c454fa5de);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_headers);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_maybe_transform);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_query);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_body);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__translations);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__legacy_response);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_raw_response_wrapper);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_raw_response_wrapper);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_streamed_response_wrapper);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_Translation);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_verbose_json);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_TranslationVerbose);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_srt);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_vtt);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_439541e80bfdf6461de76fc4fc32c289);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_Transcription);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_str_plain_overload_str_plain_assert_never_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_assert_never);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_httpx);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__legacy_response_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_d3f69ff1c97b29999250ccbe2edbb63c_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_GIVEN);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_Body);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_Query);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_Headers);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileTypes);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_bc1b1060ee858bdb5c4c9aad8ef0ec75_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain__compat);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cached_property_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain__resource);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_SyncAPIResource);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAPIResource);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain__response);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_d30d12c58eccbb238695faae0223f8e4);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_translation_create_params_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain__base_client);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_make_request_options_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_c86bca742990b2d62cfbd365dc334fca);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AudioModel_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_AudioModel);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_db807a28b8c1ec195012adbd9ea1ac1c);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Translation_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_a38f8d545559b68edcf618e57fe7157f);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AudioResponseFormat_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_AudioResponseFormat);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_07663408f4d3a11510d8389306075278);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TranslationVerbose_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_Translations);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncTranslations);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3459729c16b4903bc76ed1f5a90d5e05_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_1563495776d108b6175f0363bdd45b21);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_int_pos_29);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_dict_ed36a86de8fb2a43e81d1ec2318e66de);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_raw_response);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_e258b213a83402496380d63587e0903b);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_dict_00ce9e06b8f05dce121974cea5a92c92);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_streaming_response);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_1801c105a48fd8b34233598b7ce9013d);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_dict_a7cd4047190c310e850e9daccb320aa1);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ef647f81fd290dc4869579374e7460b);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_dict_702bedaf628b3db7fa6180c1b9cbbb02);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_dict_737b7daa31345f378ffeb3f83f808845);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_dict_bc46f24f71f8290392ee14bcde20949b);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_int_pos_172);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_dict_21dca6c7a27ad688c71726b651063627);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a9fd6ed13fa86eadb6593ec1f6e9bc9);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_dict_0690745a65ca9510fab00abf6a3ba4c1);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_2bc8b76201bd6133dfff123cbd0b7123);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_dict_49461bf97278cd455e0d2578c0730fce);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_int_pos_315);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_dict_3bed6e2164bd438fe0c2f5543cb30761);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_91f8b39fa09c83cc1ae31f7ff07a8540);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__translations_str_plain_create_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_int_pos_324);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_dict_20bb9a5afcbf6c225c91cb82dc4a1dd2);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_429365faa7de187ff965c32d4a576710);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_int_pos_333);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b6dea06b9568147590cfce39aa5d8fc);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_int_pos_342);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_191e0b84041c00d62197882a38b9cef0);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_0e3d553e2c30f0223a3a7cfa9b086c2f);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_2bb339d249e96d5ca61b9ec618c83ad2);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_77a633e478b1757351d83808aa108cd4);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_translations_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_format_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_5de87b75248d649cc112bdc7186c0dea_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_e14452daec11069e9f91cefb484d1c6b_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
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
void checkModuleConstants_openai$resources$audio$translations(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_TranslationsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TranslationsWithRawResponse);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_TranslationsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TranslationsWithStreamingResponse);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_deepcopy_minimal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deepcopy_minimal);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_prompt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prompt);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_format));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_format);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_temperature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_temperature);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_files));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extract_files);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_object_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_str_type_object_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_dict_e227e2a24d80187d6d47169c187ec831));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e227e2a24d80187d6d47169c187ec831);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_dict_3ee551a4bf27c90926532b76bf9a688f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3ee551a4bf27c90926532b76bf9a688f);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__post));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__post);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_transform);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_translation_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_translation_create_params);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_TranslationCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TranslationCreateParams);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_make_request_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_make_request_options);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_response_format_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_response_format_type);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8db5a57002f77a719383673129847225_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8db5a57002f77a719383673129847225_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_1ffded09c016c73c14e3da1eb55d8b94_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1ffded09c016c73c14e3da1eb55d8b94_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_0b42c4181fd0bdbc134141648aace805));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0b42c4181fd0bdbc134141648aace805);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncTranslationsWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncTranslationsWithRawResponse);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncTranslationsWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncTranslationsWithStreamingResponse);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_create));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_a74cf956e72d76fffa78a95c454fa5de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a74cf956e72d76fffa78a95c454fa5de);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_headers);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_maybe_transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_maybe_transform);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_query);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_body);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__translations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__translations);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__legacy_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__legacy_response);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_raw_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_raw_response_wrapper);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_raw_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_to_raw_response_wrapper);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_streamed_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_streamed_response_wrapper);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_to_streamed_response_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_to_streamed_response_wrapper);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotGiven);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_Translation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Translation);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_verbose_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_verbose_json);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_TranslationVerbose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TranslationVerbose);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_srt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_srt);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_vtt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vtt);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_439541e80bfdf6461de76fc4fc32c289));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_439541e80bfdf6461de76fc4fc32c289);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_Transcription));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Transcription);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_str_plain_overload_str_plain_assert_never_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Literal_str_plain_overload_str_plain_assert_never_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overload);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_assert_never));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assert_never);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_httpx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httpx);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__legacy_response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__legacy_response_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_d3f69ff1c97b29999250ccbe2edbb63c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d3f69ff1c97b29999250ccbe2edbb63c_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_GIVEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NOT_GIVEN);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_Body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Body);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_Query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Query);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_Headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Headers);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileTypes);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_bc1b1060ee858bdb5c4c9aad8ef0ec75_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bc1b1060ee858bdb5c4c9aad8ef0ec75_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain__compat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compat);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cached_property_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cached_property_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cached_property);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain__resource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__resource);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_SyncAPIResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SyncAPIResource);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAPIResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAPIResource);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain__response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__response);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_d30d12c58eccbb238695faae0223f8e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d30d12c58eccbb238695faae0223f8e4);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_translation_create_params_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_translation_create_params_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain__base_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__base_client);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_make_request_options_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_make_request_options_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_c86bca742990b2d62cfbd365dc334fca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c86bca742990b2d62cfbd365dc334fca);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AudioModel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AudioModel_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_AudioModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AudioModel);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_db807a28b8c1ec195012adbd9ea1ac1c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db807a28b8c1ec195012adbd9ea1ac1c);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Translation_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Translation_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_a38f8d545559b68edcf618e57fe7157f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a38f8d545559b68edcf618e57fe7157f);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AudioResponseFormat_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AudioResponseFormat_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_AudioResponseFormat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AudioResponseFormat);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_07663408f4d3a11510d8389306075278));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_07663408f4d3a11510d8389306075278);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TranslationVerbose_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TranslationVerbose_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_Translations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Translations);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncTranslations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncTranslations);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3459729c16b4903bc76ed1f5a90d5e05_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_3459729c16b4903bc76ed1f5a90d5e05_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_1563495776d108b6175f0363bdd45b21));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1563495776d108b6175f0363bdd45b21);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_int_pos_29));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_29);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_dict_ed36a86de8fb2a43e81d1ec2318e66de));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ed36a86de8fb2a43e81d1ec2318e66de);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_raw_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_raw_response);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_e258b213a83402496380d63587e0903b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e258b213a83402496380d63587e0903b);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_dict_00ce9e06b8f05dce121974cea5a92c92));
CHECK_OBJECT_DEEP(mod_consts.const_dict_00ce9e06b8f05dce121974cea5a92c92);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_streaming_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_streaming_response);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_1801c105a48fd8b34233598b7ce9013d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1801c105a48fd8b34233598b7ce9013d);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_dict_a7cd4047190c310e850e9daccb320aa1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a7cd4047190c310e850e9daccb320aa1);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ef647f81fd290dc4869579374e7460b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ef647f81fd290dc4869579374e7460b);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_dict_702bedaf628b3db7fa6180c1b9cbbb02));
CHECK_OBJECT_DEEP(mod_consts.const_dict_702bedaf628b3db7fa6180c1b9cbbb02);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_dict_737b7daa31345f378ffeb3f83f808845));
CHECK_OBJECT_DEEP(mod_consts.const_dict_737b7daa31345f378ffeb3f83f808845);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_dict_bc46f24f71f8290392ee14bcde20949b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bc46f24f71f8290392ee14bcde20949b);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_int_pos_172));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_172);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_dict_21dca6c7a27ad688c71726b651063627));
CHECK_OBJECT_DEEP(mod_consts.const_dict_21dca6c7a27ad688c71726b651063627);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a9fd6ed13fa86eadb6593ec1f6e9bc9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a9fd6ed13fa86eadb6593ec1f6e9bc9);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_dict_0690745a65ca9510fab00abf6a3ba4c1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0690745a65ca9510fab00abf6a3ba4c1);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_2bc8b76201bd6133dfff123cbd0b7123));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2bc8b76201bd6133dfff123cbd0b7123);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_dict_49461bf97278cd455e0d2578c0730fce));
CHECK_OBJECT_DEEP(mod_consts.const_dict_49461bf97278cd455e0d2578c0730fce);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_int_pos_315));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_315);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_dict_3bed6e2164bd438fe0c2f5543cb30761));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3bed6e2164bd438fe0c2f5543cb30761);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_91f8b39fa09c83cc1ae31f7ff07a8540));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91f8b39fa09c83cc1ae31f7ff07a8540);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__translations_str_plain_create_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__translations_str_plain_create_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_int_pos_324));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_324);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_dict_20bb9a5afcbf6c225c91cb82dc4a1dd2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_20bb9a5afcbf6c225c91cb82dc4a1dd2);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_429365faa7de187ff965c32d4a576710));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_429365faa7de187ff965c32d4a576710);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_int_pos_333));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_333);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b6dea06b9568147590cfce39aa5d8fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b6dea06b9568147590cfce39aa5d8fc);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_int_pos_342));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_342);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_191e0b84041c00d62197882a38b9cef0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_191e0b84041c00d62197882a38b9cef0);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_0e3d553e2c30f0223a3a7cfa9b086c2f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0e3d553e2c30f0223a3a7cfa9b086c2f);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_2bb339d249e96d5ca61b9ec618c83ad2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2bb339d249e96d5ca61b9ec618c83ad2);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_77a633e478b1757351d83808aa108cd4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_77a633e478b1757351d83808aa108cd4);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_translations_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_translations_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_format_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_response_format_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_5de87b75248d649cc112bdc7186c0dea_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5de87b75248d649cc112bdc7186c0dea_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_e14452daec11069e9f91cefb484d1c6b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e14452daec11069e9f91cefb484d1c6b_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 29
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
static PyObject *module_var_accessor_openai$resources$audio$translations$AsyncAPIResource(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncAPIResource);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncAPIResource, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncAPIResource);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncAPIResource, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$AsyncTranslationsWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTranslationsWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncTranslationsWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncTranslationsWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncTranslationsWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncTranslationsWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTranslationsWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTranslationsWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTranslationsWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$AsyncTranslationsWithStreamingResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTranslationsWithStreamingResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncTranslationsWithStreamingResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncTranslationsWithStreamingResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncTranslationsWithStreamingResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncTranslationsWithStreamingResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTranslationsWithStreamingResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTranslationsWithStreamingResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTranslationsWithStreamingResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$Mapping(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Mapping);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Mapping, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Mapping);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Mapping, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NOT_GIVEN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NOT_GIVEN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NOT_GIVEN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NOT_GIVEN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$NotGiven(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NotGiven);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NotGiven, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NotGiven);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NotGiven, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$SyncAPIResource(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncAPIResource);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncAPIResource, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncAPIResource);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncAPIResource, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$Transcription(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Transcription);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Transcription);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Transcription, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Transcription);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Transcription, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Transcription);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Transcription);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Transcription);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$Translation(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Translation);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Translation);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Translation, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Translation);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Translation, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Translation);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Translation);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Translation);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$TranslationVerbose(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_TranslationVerbose);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TranslationVerbose);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TranslationVerbose, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TranslationVerbose);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TranslationVerbose, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_TranslationVerbose);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_TranslationVerbose);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TranslationVerbose);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$TranslationsWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_TranslationsWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TranslationsWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TranslationsWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TranslationsWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TranslationsWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_TranslationsWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_TranslationsWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TranslationsWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$TranslationsWithStreamingResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_TranslationsWithStreamingResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TranslationsWithStreamingResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TranslationsWithStreamingResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TranslationsWithStreamingResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TranslationsWithStreamingResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_TranslationsWithStreamingResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_TranslationsWithStreamingResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TranslationsWithStreamingResponse);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$_get_response_format_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain__get_response_format_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_response_format_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_response_format_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_response_format_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_response_format_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain__get_response_format_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain__get_response_format_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_response_format_type);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$_legacy_response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__legacy_response);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__legacy_response, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__legacy_response);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__legacy_response, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$async_maybe_transform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_async_maybe_transform);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_async_maybe_transform, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_async_maybe_transform);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_async_maybe_transform, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$async_to_streamed_response_wrapper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_async_to_streamed_response_wrapper);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_async_to_streamed_response_wrapper, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_async_to_streamed_response_wrapper);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_async_to_streamed_response_wrapper, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$cached_property(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cached_property);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cached_property, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cached_property);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cached_property, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$deepcopy_minimal(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_deepcopy_minimal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_deepcopy_minimal);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_deepcopy_minimal, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_deepcopy_minimal);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_deepcopy_minimal, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_deepcopy_minimal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_deepcopy_minimal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_deepcopy_minimal);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$extract_files(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_files);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_extract_files);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_extract_files, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_extract_files);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_extract_files, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_files);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_files);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_files);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$log(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$make_request_options(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_make_request_options);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_make_request_options, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_make_request_options);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_make_request_options, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$maybe_transform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_maybe_transform);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_maybe_transform, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_maybe_transform);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_maybe_transform, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$overload(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$to_streamed_response_wrapper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_streamed_response_wrapper);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_streamed_response_wrapper, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_streamed_response_wrapper);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_streamed_response_wrapper, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper);
    }

    return result;
}

static PyObject *module_var_accessor_openai$resources$audio$translations$translation_create_params(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$resources$audio$translations->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$resources$audio$translations->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_translation_create_params);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$resources$audio$translations->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_translation_create_params);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_translation_create_params, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_translation_create_params);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_translation_create_params, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_translation_create_params);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_translation_create_params);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_translation_create_params);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_b62fe29b4199788b8f2ef6a598cff37a;
static PyCodeObject *code_objects_dda01654b9617702a16ffed943fde01e;
static PyCodeObject *code_objects_382ccb0ba4a1ba1ad5ab33f71fb1cb5f;
static PyCodeObject *code_objects_316546e7ca44efb1cd8e9ca474213621;
static PyCodeObject *code_objects_7006938b86df6b0dd671925cc8c548cc;
static PyCodeObject *code_objects_5e22601d79bc6fe9f19452fcbe43311a;
static PyCodeObject *code_objects_5fc270cc2cbef33369c488bd8b1c9fab;
static PyCodeObject *code_objects_f3f0c1362ef95c65ac35f5649d4c0387;
static PyCodeObject *code_objects_3ff53afbc12100e561ba1faecad706d6;
static PyCodeObject *code_objects_4d840c40afa396a5b46c281d73f9f66e;
static PyCodeObject *code_objects_95f5c9ccc4915d79233f882e56989e58;
static PyCodeObject *code_objects_90e17ad4735172da9c48799423338a20;
static PyCodeObject *code_objects_b7b362a020637518398d6593c87d9c7c;
static PyCodeObject *code_objects_788e22faa36ef2ef9112c71556c1937c;
static PyCodeObject *code_objects_5b90e586582c3f20890b8ffa41f7ac96;
static PyCodeObject *code_objects_c53b14a0c2bddb7f7afd6099699c40b8;
static PyCodeObject *code_objects_fd37535e40b1065e62b9d241e755bf96;
static PyCodeObject *code_objects_3bce9637c293c8e21a581d8314ff189c;
static PyCodeObject *code_objects_762d74bee78052ae196e6d1744bca54f;
static PyCodeObject *code_objects_ed02b29c71fba2596a7ecbd140a57d90;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_2bb339d249e96d5ca61b9ec618c83ad2); CHECK_OBJECT(module_filename_obj);
code_objects_b62fe29b4199788b8f2ef6a598cff37a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_77a633e478b1757351d83808aa108cd4, mod_consts.const_str_digest_77a633e478b1757351d83808aa108cd4, NULL, NULL, 0, 0, 0);
code_objects_dda01654b9617702a16ffed943fde01e = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncTranslations, mod_consts.const_str_plain_AsyncTranslations, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_382ccb0ba4a1ba1ad5ab33f71fb1cb5f = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Translations, mod_consts.const_str_plain_Translations, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_316546e7ca44efb1cd8e9ca474213621 = MAKE_CODE_OBJECT(module_filename_obj, 325, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_429365faa7de187ff965c32d4a576710, mod_consts.const_tuple_str_plain_self_str_plain_translations_tuple, NULL, 2, 0, 0);
code_objects_7006938b86df6b0dd671925cc8c548cc = MAKE_CODE_OBJECT(module_filename_obj, 343, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_191e0b84041c00d62197882a38b9cef0, mod_consts.const_tuple_str_plain_self_str_plain_translations_tuple, NULL, 2, 0, 0);
code_objects_5e22601d79bc6fe9f19452fcbe43311a = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_91f8b39fa09c83cc1ae31f7ff07a8540, mod_consts.const_tuple_str_plain_self_str_plain_translations_tuple, NULL, 2, 0, 0);
code_objects_5fc270cc2cbef33369c488bd8b1c9fab = MAKE_CODE_OBJECT(module_filename_obj, 334, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_9b6dea06b9568147590cfce39aa5d8fc, mod_consts.const_tuple_str_plain_self_str_plain_translations_tuple, NULL, 2, 0, 0);
code_objects_f3f0c1362ef95c65ac35f5649d4c0387 = MAKE_CODE_OBJECT(module_filename_obj, 351, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_response_format_type, mod_consts.const_str_plain__get_response_format_type, mod_consts.const_tuple_str_plain_response_format_tuple, NULL, 1, 0, 0);
code_objects_3ff53afbc12100e561ba1faecad706d6 = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create, mod_consts.const_str_digest_a74cf956e72d76fffa78a95c454fa5de, mod_consts.const_tuple_5de87b75248d649cc112bdc7186c0dea_tuple, NULL, 1, 9, 0);
code_objects_4d840c40afa396a5b46c281d73f9f66e = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create, mod_consts.const_str_digest_a74cf956e72d76fffa78a95c454fa5de, mod_consts.const_tuple_e14452daec11069e9f91cefb484d1c6b_tuple, NULL, 1, 9, 0);
code_objects_95f5c9ccc4915d79233f882e56989e58 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create, mod_consts.const_str_digest_a74cf956e72d76fffa78a95c454fa5de, mod_consts.const_tuple_e14452daec11069e9f91cefb484d1c6b_tuple, NULL, 1, 9, 0);
code_objects_90e17ad4735172da9c48799423338a20 = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create, mod_consts.const_str_digest_a74cf956e72d76fffa78a95c454fa5de, mod_consts.const_tuple_e14452daec11069e9f91cefb484d1c6b_tuple, NULL, 1, 9, 0);
code_objects_b7b362a020637518398d6593c87d9c7c = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create, mod_consts.const_str_digest_8ef647f81fd290dc4869579374e7460b, mod_consts.const_tuple_5de87b75248d649cc112bdc7186c0dea_tuple, NULL, 1, 9, 0);
code_objects_788e22faa36ef2ef9112c71556c1937c = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create, mod_consts.const_str_digest_8ef647f81fd290dc4869579374e7460b, mod_consts.const_tuple_e14452daec11069e9f91cefb484d1c6b_tuple, NULL, 1, 9, 0);
code_objects_5b90e586582c3f20890b8ffa41f7ac96 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create, mod_consts.const_str_digest_8ef647f81fd290dc4869579374e7460b, mod_consts.const_tuple_e14452daec11069e9f91cefb484d1c6b_tuple, NULL, 1, 9, 0);
code_objects_c53b14a0c2bddb7f7afd6099699c40b8 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create, mod_consts.const_str_digest_8ef647f81fd290dc4869579374e7460b, mod_consts.const_tuple_e14452daec11069e9f91cefb484d1c6b_tuple, NULL, 1, 9, 0);
code_objects_fd37535e40b1065e62b9d241e755bf96 = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_raw_response, mod_consts.const_str_digest_6a9fd6ed13fa86eadb6593ec1f6e9bc9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3bce9637c293c8e21a581d8314ff189c = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_raw_response, mod_consts.const_str_digest_e258b213a83402496380d63587e0903b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_762d74bee78052ae196e6d1744bca54f = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_streaming_response, mod_consts.const_str_digest_2bc8b76201bd6133dfff123cbd0b7123, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ed02b29c71fba2596a7ecbd140a57d90 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_streaming_response, mod_consts.const_str_digest_1801c105a48fd8b34233598b7ce9013d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_openai$resources$audio$translations$$$function__9_create$$$coroutine__1_create(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_openai$resources$audio$translations$$$function__10_create$$$coroutine__1_create(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_openai$resources$audio$translations$$$function__11_create$$$coroutine__1_create(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_openai$resources$audio$translations$$$function__12_create$$$coroutine__1_create(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__10_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__11_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__12_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__13___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__14___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__15___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__16___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__17__get_response_format_type(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__1_with_raw_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__2_with_streaming_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__3_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__4_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__5_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__6_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__7_with_raw_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__8_with_streaming_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__9_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_openai$resources$audio$translations$$$function__1_with_raw_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response)) {
    Py_XDECREF(cache_frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response = MAKE_FUNCTION_FRAME(tstate, code_objects_3bce9637c293c8e21a581d8314ff189c, module_openai$resources$audio$translations, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response->m_type_description == NULL);
frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response = cache_frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response);
assert(Py_REFCNT(frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$audio$translations$TranslationsWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TranslationsWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response->m_frame.f_lineno = 38;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response == cache_frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response);
    cache_frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response = NULL;
}

assertFrameObject(frame_frame_openai$resources$audio$translations$$$function__1_with_raw_response);

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


static PyObject *impl_openai$resources$audio$translations$$$function__2_with_streaming_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response)) {
    Py_XDECREF(cache_frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response = MAKE_FUNCTION_FRAME(tstate, code_objects_ed02b29c71fba2596a7ecbd140a57d90, module_openai$resources$audio$translations, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response->m_type_description == NULL);
frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response = cache_frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response);
assert(Py_REFCNT(frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$audio$translations$TranslationsWithStreamingResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TranslationsWithStreamingResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response->m_frame.f_lineno = 47;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response == cache_frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response);
    cache_frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response = NULL;
}

assertFrameObject(frame_frame_openai$resources$audio$translations$$$function__2_with_streaming_response);

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


static PyObject *impl_openai$resources$audio$translations$$$function__6_create(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file = python_pars[1];
PyObject *par_model = python_pars[2];
PyObject *par_prompt = python_pars[3];
PyObject *par_response_format = python_pars[4];
PyObject *par_temperature = python_pars[5];
PyObject *par_extra_headers = python_pars[6];
PyObject *par_extra_query = python_pars[7];
PyObject *par_extra_body = python_pars[8];
PyObject *par_timeout = python_pars[9];
PyObject *var_body = NULL;
PyObject *var_files = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$audio$translations$$$function__6_create;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$audio$translations$$$function__6_create = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$resources$audio$translations$$$function__6_create)) {
    Py_XDECREF(cache_frame_frame_openai$resources$audio$translations$$$function__6_create);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$audio$translations$$$function__6_create == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$audio$translations$$$function__6_create = MAKE_FUNCTION_FRAME(tstate, code_objects_b7b362a020637518398d6593c87d9c7c, module_openai$resources$audio$translations, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$audio$translations$$$function__6_create->m_type_description == NULL);
frame_frame_openai$resources$audio$translations$$$function__6_create = cache_frame_frame_openai$resources$audio$translations$$$function__6_create;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$audio$translations$$$function__6_create);
assert(Py_REFCNT(frame_frame_openai$resources$audio$translations$$$function__6_create) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$audio$translations$deepcopy_minimal(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deepcopy_minimal);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = const_str_plain_file;
CHECK_OBJECT(par_file);
tmp_dict_value_1 = par_file;
tmp_args_element_value_1 = _PyDict_NewPresized( 5 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_model;
CHECK_OBJECT(par_model);
tmp_dict_value_1 = par_model;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_prompt;
CHECK_OBJECT(par_prompt);
tmp_dict_value_1 = par_prompt;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_response_format;
CHECK_OBJECT(par_response_format);
tmp_dict_value_1 = par_response_format;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_temperature;
CHECK_OBJECT(par_temperature);
tmp_dict_value_1 = par_temperature;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_openai$resources$audio$translations$$$function__6_create->m_frame.f_lineno = 147;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_body == NULL);
var_body = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kwargs_value_1;
tmp_called_value_2 = module_var_accessor_openai$resources$audio$translations$extract_files(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_extract_files);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_openai$resources$audio$translations$cast(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_openai$resources$audio$translations$Mapping(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_tuple_type_str_type_object_tuple;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_body);
tmp_args_element_value_3 = var_body;
frame_frame_openai$resources$audio$translations$$$function__6_create->m_frame.f_lineno = 156;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_e227e2a24d80187d6d47169c187ec831);
frame_frame_openai$resources$audio$translations$$$function__6_create->m_frame.f_lineno = 156;
tmp_assign_source_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_files == NULL);
var_files = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = DICT_COPY(tstate, mod_consts.const_dict_3ee551a4bf27c90926532b76bf9a688f);
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_extra_headers);
tmp_or_left_value_1 = par_extra_headers;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_tuple_element_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_tuple_element_2 = tmp_or_left_value_1;
or_end_1:;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_3 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_extra_headers;
    assert(old != NULL);
    par_extra_headers = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_3_2;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__post);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_openai$resources$audio$translations$maybe_transform(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 163;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_body);
tmp_args_element_value_4 = var_body;
tmp_expression_value_3 = module_var_accessor_openai$resources$audio$translations$translation_create_params(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_translation_create_params);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 163;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_TranslationCreateParams);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 163;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$audio$translations$$$function__6_create->m_frame.f_lineno = 163;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 163;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_files);
tmp_kw_call_value_1_1 = var_files;
tmp_called_value_6 = module_var_accessor_openai$resources$audio$translations$make_request_options(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 165;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_extra_headers);
tmp_kw_call_value_0_2 = par_extra_headers;
CHECK_OBJECT(par_extra_query);
tmp_kw_call_value_1_2 = par_extra_query;
CHECK_OBJECT(par_extra_body);
tmp_kw_call_value_2_2 = par_extra_body;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_3_1 = par_timeout;
frame_frame_openai$resources$audio$translations$$$function__6_create->m_frame.f_lineno = 165;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_1};

    tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 165;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = module_var_accessor_openai$resources$audio$translations$_get_response_format_type(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_response_format_type);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 168;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_format);
tmp_args_element_value_6 = par_response_format;
frame_frame_openai$resources$audio$translations$$$function__6_create->m_frame.f_lineno = 168;
tmp_kw_call_value_3_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
if (tmp_kw_call_value_3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 168;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$audio$translations$$$function__6_create->m_frame.f_lineno = 161;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_2};
    tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_8db5a57002f77a719383673129847225_tuple, kw_values, mod_consts.const_tuple_1ffded09c016c73c14e3da1eb55d8b94_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_3_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$audio$translations$$$function__6_create, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$audio$translations$$$function__6_create->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$audio$translations$$$function__6_create, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$audio$translations$$$function__6_create,
    type_description_1,
    par_self,
    par_file,
    par_model,
    par_prompt,
    par_response_format,
    par_temperature,
    par_extra_headers,
    par_extra_query,
    par_extra_body,
    par_timeout,
    var_body,
    var_files
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$audio$translations$$$function__6_create == cache_frame_frame_openai$resources$audio$translations$$$function__6_create) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$audio$translations$$$function__6_create);
    cache_frame_frame_openai$resources$audio$translations$$$function__6_create = NULL;
}

assertFrameObject(frame_frame_openai$resources$audio$translations$$$function__6_create);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
CHECK_OBJECT(var_files);
CHECK_OBJECT(var_files);
Py_DECREF(var_files);
var_files = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_extra_headers);
par_extra_headers = NULL;
Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_files);
var_files = NULL;
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
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
CHECK_OBJECT(par_prompt);
Py_DECREF(par_prompt);
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
CHECK_OBJECT(par_temperature);
Py_DECREF(par_temperature);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
CHECK_OBJECT(par_prompt);
Py_DECREF(par_prompt);
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
CHECK_OBJECT(par_temperature);
Py_DECREF(par_temperature);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$audio$translations$$$function__7_with_raw_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response)) {
    Py_XDECREF(cache_frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response = MAKE_FUNCTION_FRAME(tstate, code_objects_fd37535e40b1065e62b9d241e755bf96, module_openai$resources$audio$translations, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response->m_type_description == NULL);
frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response = cache_frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response);
assert(Py_REFCNT(frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$audio$translations$AsyncTranslationsWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncTranslationsWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response->m_frame.f_lineno = 181;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response == cache_frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response);
    cache_frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response = NULL;
}

assertFrameObject(frame_frame_openai$resources$audio$translations$$$function__7_with_raw_response);

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


static PyObject *impl_openai$resources$audio$translations$$$function__8_with_streaming_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response)) {
    Py_XDECREF(cache_frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response = MAKE_FUNCTION_FRAME(tstate, code_objects_762d74bee78052ae196e6d1744bca54f, module_openai$resources$audio$translations, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response->m_type_description == NULL);
frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response = cache_frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response);
assert(Py_REFCNT(frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$audio$translations$AsyncTranslationsWithStreamingResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncTranslationsWithStreamingResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response->m_frame.f_lineno = 190;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response == cache_frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response);
    cache_frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response = NULL;
}

assertFrameObject(frame_frame_openai$resources$audio$translations$$$function__8_with_streaming_response);

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


static PyObject *impl_openai$resources$audio$translations$$$function__9_create(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file = python_pars[1];
PyObject *par_model = python_pars[2];
PyObject *par_response_format = python_pars[3];
PyObject *par_prompt = python_pars[4];
PyObject *par_temperature = python_pars[5];
PyObject *par_extra_headers = python_pars[6];
PyObject *par_extra_query = python_pars[7];
PyObject *par_extra_body = python_pars[8];
PyObject *par_timeout = python_pars[9];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_openai$resources$audio$translations$$$function__9_create$$$coroutine__1_create(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(par_model);
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
par_model = NULL;
CHECK_OBJECT(par_response_format);
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
par_response_format = NULL;
CHECK_OBJECT(par_prompt);
CHECK_OBJECT(par_prompt);
Py_DECREF(par_prompt);
par_prompt = NULL;
CHECK_OBJECT(par_temperature);
CHECK_OBJECT(par_temperature);
Py_DECREF(par_temperature);
par_temperature = NULL;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
CHECK_OBJECT(par_extra_query);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
par_extra_query = NULL;
CHECK_OBJECT(par_extra_body);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
par_extra_body = NULL;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
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
struct openai$resources$audio$translations$$$function__9_create$$$coroutine__1_create_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *openai$resources$audio$translations$$$function__9_create$$$coroutine__1_create_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$audio$translations$$$function__9_create$$$coroutine__1_create_locals *coroutine_heap = (struct openai$resources$audio$translations$$$function__9_create$$$coroutine__1_create_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_openai$resources$audio$translations$$$function__9_create$$$coroutine__1_create(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$audio$translations$$$function__9_create$$$coroutine__1_create_context,
        module_openai$resources$audio$translations,
        mod_consts.const_str_plain_create,
        mod_consts.const_str_digest_a74cf956e72d76fffa78a95c454fa5de,
        code_objects_4d840c40afa396a5b46c281d73f9f66e,
        NULL,
        0,
#if 1
        sizeof(struct openai$resources$audio$translations$$$function__9_create$$$coroutine__1_create_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$audio$translations$$$function__10_create(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file = python_pars[1];
PyObject *par_model = python_pars[2];
PyObject *par_response_format = python_pars[3];
PyObject *par_prompt = python_pars[4];
PyObject *par_temperature = python_pars[5];
PyObject *par_extra_headers = python_pars[6];
PyObject *par_extra_query = python_pars[7];
PyObject *par_extra_body = python_pars[8];
PyObject *par_timeout = python_pars[9];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_openai$resources$audio$translations$$$function__10_create$$$coroutine__1_create(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(par_model);
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
par_model = NULL;
CHECK_OBJECT(par_response_format);
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
par_response_format = NULL;
CHECK_OBJECT(par_prompt);
CHECK_OBJECT(par_prompt);
Py_DECREF(par_prompt);
par_prompt = NULL;
CHECK_OBJECT(par_temperature);
CHECK_OBJECT(par_temperature);
Py_DECREF(par_temperature);
par_temperature = NULL;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
CHECK_OBJECT(par_extra_query);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
par_extra_query = NULL;
CHECK_OBJECT(par_extra_body);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
par_extra_body = NULL;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
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
struct openai$resources$audio$translations$$$function__10_create$$$coroutine__1_create_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *openai$resources$audio$translations$$$function__10_create$$$coroutine__1_create_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$audio$translations$$$function__10_create$$$coroutine__1_create_locals *coroutine_heap = (struct openai$resources$audio$translations$$$function__10_create$$$coroutine__1_create_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_openai$resources$audio$translations$$$function__10_create$$$coroutine__1_create(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$audio$translations$$$function__10_create$$$coroutine__1_create_context,
        module_openai$resources$audio$translations,
        mod_consts.const_str_plain_create,
        mod_consts.const_str_digest_a74cf956e72d76fffa78a95c454fa5de,
        code_objects_95f5c9ccc4915d79233f882e56989e58,
        NULL,
        0,
#if 1
        sizeof(struct openai$resources$audio$translations$$$function__10_create$$$coroutine__1_create_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$audio$translations$$$function__11_create(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file = python_pars[1];
PyObject *par_model = python_pars[2];
PyObject *par_response_format = python_pars[3];
PyObject *par_prompt = python_pars[4];
PyObject *par_temperature = python_pars[5];
PyObject *par_extra_headers = python_pars[6];
PyObject *par_extra_query = python_pars[7];
PyObject *par_extra_body = python_pars[8];
PyObject *par_timeout = python_pars[9];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_openai$resources$audio$translations$$$function__11_create$$$coroutine__1_create(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(par_model);
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
par_model = NULL;
CHECK_OBJECT(par_response_format);
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
par_response_format = NULL;
CHECK_OBJECT(par_prompt);
CHECK_OBJECT(par_prompt);
Py_DECREF(par_prompt);
par_prompt = NULL;
CHECK_OBJECT(par_temperature);
CHECK_OBJECT(par_temperature);
Py_DECREF(par_temperature);
par_temperature = NULL;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
CHECK_OBJECT(par_extra_query);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
par_extra_query = NULL;
CHECK_OBJECT(par_extra_body);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
par_extra_body = NULL;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
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
struct openai$resources$audio$translations$$$function__11_create$$$coroutine__1_create_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *openai$resources$audio$translations$$$function__11_create$$$coroutine__1_create_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$audio$translations$$$function__11_create$$$coroutine__1_create_locals *coroutine_heap = (struct openai$resources$audio$translations$$$function__11_create$$$coroutine__1_create_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_openai$resources$audio$translations$$$function__11_create$$$coroutine__1_create(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$audio$translations$$$function__11_create$$$coroutine__1_create_context,
        module_openai$resources$audio$translations,
        mod_consts.const_str_plain_create,
        mod_consts.const_str_digest_a74cf956e72d76fffa78a95c454fa5de,
        code_objects_90e17ad4735172da9c48799423338a20,
        NULL,
        0,
#if 1
        sizeof(struct openai$resources$audio$translations$$$function__11_create$$$coroutine__1_create_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$audio$translations$$$function__12_create(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_file = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_model = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_prompt = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_response_format = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_temperature = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_extra_query = Nuitka_Cell_New1(python_pars[7]);
struct Nuitka_CellObject *par_extra_body = Nuitka_Cell_New1(python_pars[8]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[9]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[10];
tmp_closure_1[0] = par_extra_body;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_extra_headers;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_extra_query;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_file;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_model;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_prompt;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_response_format;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_self;
Py_INCREF(tmp_closure_1[7]);
tmp_closure_1[8] = par_temperature;
Py_INCREF(tmp_closure_1[8]);
tmp_closure_1[9] = par_timeout;
Py_INCREF(tmp_closure_1[9]);
tmp_return_value = MAKE_COROUTINE_openai$resources$audio$translations$$$function__12_create$$$coroutine__1_create(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(par_model);
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
par_model = NULL;
CHECK_OBJECT(par_prompt);
CHECK_OBJECT(par_prompt);
Py_DECREF(par_prompt);
par_prompt = NULL;
CHECK_OBJECT(par_response_format);
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
par_response_format = NULL;
CHECK_OBJECT(par_temperature);
CHECK_OBJECT(par_temperature);
Py_DECREF(par_temperature);
par_temperature = NULL;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
CHECK_OBJECT(par_extra_query);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
par_extra_query = NULL;
CHECK_OBJECT(par_extra_body);
CHECK_OBJECT(par_extra_body);
Py_DECREF(par_extra_body);
par_extra_body = NULL;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
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
struct openai$resources$audio$translations$$$function__12_create$$$coroutine__1_create_locals {
PyObject *var_body;
PyObject *var_files;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *openai$resources$audio$translations$$$function__12_create$$$coroutine__1_create_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$resources$audio$translations$$$function__12_create$$$coroutine__1_create_locals *coroutine_heap = (struct openai$resources$audio$translations$$$function__12_create$$$coroutine__1_create_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_body = NULL;
coroutine_heap->var_files = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_3ff53afbc12100e561ba1faecad706d6, module_openai$resources$audio$translations, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_called_value_1 = module_var_accessor_openai$resources$audio$translations$deepcopy_minimal(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_deepcopy_minimal);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 290;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = const_str_plain_file;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_file);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 292;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_args_element_value_1 = _PyDict_NewPresized( 5 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_model;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_model);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 293;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_prompt;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_prompt);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 294;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_response_format;
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_response_format);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_temperature;
if (Nuitka_Cell_GET(coroutine->m_closure[8]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_temperature);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[8]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_args_element_value_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
coroutine->m_frame->m_frame.f_lineno = 290;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 290;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_body == NULL);
coroutine_heap->var_body = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kwargs_value_1;
tmp_called_value_2 = module_var_accessor_openai$resources$audio$translations$extract_files(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extract_files);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_openai$resources$audio$translations$cast(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_openai$resources$audio$translations$Mapping(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_tuple_type_str_type_object_tuple;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_body);
tmp_args_element_value_3 = coroutine_heap->var_body;
coroutine->m_frame->m_frame.f_lineno = 299;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_e227e2a24d80187d6d47169c187ec831);
coroutine->m_frame->m_frame.f_lineno = 299;
tmp_assign_source_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 299;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_files == NULL);
coroutine_heap->var_files = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = DICT_COPY(tstate, mod_consts.const_dict_3ee551a4bf27c90926532b76bf9a688f);
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 303;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto tuple_build_exception_1;
}

tmp_or_left_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 303;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto tuple_build_exception_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_tuple_element_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_tuple_element_2 = tmp_or_left_value_1;
or_end_1:;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_3 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 303;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[1]);
    Nuitka_Cell_SET(coroutine->m_closure[1], tmp_assign_source_3);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_3_2;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
coroutine->m_frame->m_frame.f_lineno = 304;
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 304;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[7]);
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__post);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 304;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 306;
tmp_called_value_5 = module_var_accessor_openai$resources$audio$translations$async_maybe_transform(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_async_maybe_transform);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_4);

coroutine_heap->exception_lineno = 306;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_body);
tmp_args_element_value_4 = coroutine_heap->var_body;
tmp_expression_value_7 = module_var_accessor_openai$resources$audio$translations$translation_create_params(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_translation_create_params);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_4);

coroutine_heap->exception_lineno = 306;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_TranslationCreateParams);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_4);

coroutine_heap->exception_lineno = 306;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 306;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_expression_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_4);

coroutine_heap->exception_lineno = 306;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_4);

coroutine_heap->exception_lineno = 306;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_5;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_4);

coroutine_heap->exception_lineno = 306;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = yield_return_value;
CHECK_OBJECT(coroutine_heap->var_files);
tmp_kw_call_value_1_1 = coroutine_heap->var_files;
tmp_called_value_6 = module_var_accessor_openai$resources$audio$translations$make_request_options(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_make_request_options);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_1);

coroutine_heap->exception_lineno = 308;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[1]));
tmp_kw_call_value_0_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_query);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_body);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[9]) == NULL) {
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[9]);
coroutine->m_frame->m_frame.f_lineno = 308;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_1};

    tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_e9da70049891b67cbc2db8494337d8f1_tuple);
}

if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_1);

coroutine_heap->exception_lineno = 308;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = module_var_accessor_openai$resources$audio$translations$_get_response_format_type(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__get_response_format_type);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_2_1);

coroutine_heap->exception_lineno = 311;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_response_format);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 311;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = Nuitka_Cell_GET(coroutine->m_closure[6]);
coroutine->m_frame->m_frame.f_lineno = 311;
tmp_kw_call_value_3_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
if (tmp_kw_call_value_3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_2_1);

coroutine_heap->exception_lineno = 311;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 304;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_2};
    tmp_expression_value_3 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_8db5a57002f77a719383673129847225_tuple, kw_values, mod_consts.const_tuple_1ffded09c016c73c14e3da1eb55d8b94_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_3_2);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 304;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 304;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), &tmp_kw_call_value_2_2, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_value_3_2, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), &tmp_kw_call_value_2_2, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_kw_call_value_3_2, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 304;
coroutine_heap->type_description_1 = "ccccccccccoo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto try_return_handler_1;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[7],
    coroutine->m_closure[3],
    coroutine->m_closure[4],
    coroutine->m_closure[5],
    coroutine->m_closure[6],
    coroutine->m_closure[8],
    coroutine->m_closure[1],
    coroutine->m_closure[2],
    coroutine->m_closure[0],
    coroutine->m_closure[9],
    coroutine_heap->var_body,
    coroutine_heap->var_files
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_body);
CHECK_OBJECT(coroutine_heap->var_body);
Py_DECREF(coroutine_heap->var_body);
coroutine_heap->var_body = NULL;
CHECK_OBJECT(coroutine_heap->var_files);
CHECK_OBJECT(coroutine_heap->var_files);
Py_DECREF(coroutine_heap->var_files);
coroutine_heap->var_files = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_body);
coroutine_heap->var_body = NULL;
Py_XDECREF(coroutine_heap->var_files);
coroutine_heap->var_files = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_openai$resources$audio$translations$$$function__12_create$$$coroutine__1_create(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$resources$audio$translations$$$function__12_create$$$coroutine__1_create_context,
        module_openai$resources$audio$translations,
        mod_consts.const_str_plain_create,
        mod_consts.const_str_digest_a74cf956e72d76fffa78a95c454fa5de,
        code_objects_3ff53afbc12100e561ba1faecad706d6,
        closure,
        10,
#if 1
        sizeof(struct openai$resources$audio$translations$$$function__12_create$$$coroutine__1_create_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$resources$audio$translations$$$function__13___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_translations = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$resources$audio$translations$$$function__13___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$audio$translations$$$function__13___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$audio$translations$$$function__13___init__)) {
    Py_XDECREF(cache_frame_frame_openai$resources$audio$translations$$$function__13___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$audio$translations$$$function__13___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$audio$translations$$$function__13___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5e22601d79bc6fe9f19452fcbe43311a, module_openai$resources$audio$translations, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$audio$translations$$$function__13___init__->m_type_description == NULL);
frame_frame_openai$resources$audio$translations$$$function__13___init__ = cache_frame_frame_openai$resources$audio$translations$$$function__13___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$audio$translations$$$function__13___init__);
assert(Py_REFCNT(frame_frame_openai$resources$audio$translations$$$function__13___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_translations);
tmp_assattr_value_1 = par_translations;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__translations, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_2;
tmp_expression_value_1 = module_var_accessor_openai$resources$audio$translations$_legacy_response(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 319;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_to_raw_response_wrapper);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_translations);
tmp_expression_value_2 = par_translations;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_create);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 320;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$audio$translations$$$function__13___init__->m_frame.f_lineno = 319;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_create, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$audio$translations$$$function__13___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$audio$translations$$$function__13___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$audio$translations$$$function__13___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$audio$translations$$$function__13___init__,
    type_description_1,
    par_self,
    par_translations
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$audio$translations$$$function__13___init__ == cache_frame_frame_openai$resources$audio$translations$$$function__13___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$audio$translations$$$function__13___init__);
    cache_frame_frame_openai$resources$audio$translations$$$function__13___init__ = NULL;
}

assertFrameObject(frame_frame_openai$resources$audio$translations$$$function__13___init__);

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
CHECK_OBJECT(par_translations);
Py_DECREF(par_translations);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_translations);
Py_DECREF(par_translations);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$audio$translations$$$function__14___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_translations = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$resources$audio$translations$$$function__14___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$audio$translations$$$function__14___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$audio$translations$$$function__14___init__)) {
    Py_XDECREF(cache_frame_frame_openai$resources$audio$translations$$$function__14___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$audio$translations$$$function__14___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$audio$translations$$$function__14___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_316546e7ca44efb1cd8e9ca474213621, module_openai$resources$audio$translations, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$audio$translations$$$function__14___init__->m_type_description == NULL);
frame_frame_openai$resources$audio$translations$$$function__14___init__ = cache_frame_frame_openai$resources$audio$translations$$$function__14___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$audio$translations$$$function__14___init__);
assert(Py_REFCNT(frame_frame_openai$resources$audio$translations$$$function__14___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_translations);
tmp_assattr_value_1 = par_translations;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__translations, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_2;
tmp_expression_value_1 = module_var_accessor_openai$resources$audio$translations$_legacy_response(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__legacy_response);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 328;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_async_to_raw_response_wrapper);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_translations);
tmp_expression_value_2 = par_translations;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_create);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 329;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$audio$translations$$$function__14___init__->m_frame.f_lineno = 328;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_create, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$audio$translations$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$audio$translations$$$function__14___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$audio$translations$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$audio$translations$$$function__14___init__,
    type_description_1,
    par_self,
    par_translations
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$audio$translations$$$function__14___init__ == cache_frame_frame_openai$resources$audio$translations$$$function__14___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$audio$translations$$$function__14___init__);
    cache_frame_frame_openai$resources$audio$translations$$$function__14___init__ = NULL;
}

assertFrameObject(frame_frame_openai$resources$audio$translations$$$function__14___init__);

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
CHECK_OBJECT(par_translations);
Py_DECREF(par_translations);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_translations);
Py_DECREF(par_translations);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$audio$translations$$$function__15___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_translations = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$resources$audio$translations$$$function__15___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$audio$translations$$$function__15___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$audio$translations$$$function__15___init__)) {
    Py_XDECREF(cache_frame_frame_openai$resources$audio$translations$$$function__15___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$audio$translations$$$function__15___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$audio$translations$$$function__15___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5fc270cc2cbef33369c488bd8b1c9fab, module_openai$resources$audio$translations, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$audio$translations$$$function__15___init__->m_type_description == NULL);
frame_frame_openai$resources$audio$translations$$$function__15___init__ = cache_frame_frame_openai$resources$audio$translations$$$function__15___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$audio$translations$$$function__15___init__);
assert(Py_REFCNT(frame_frame_openai$resources$audio$translations$$$function__15___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_translations);
tmp_assattr_value_1 = par_translations;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__translations, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_2;
tmp_called_value_1 = module_var_accessor_openai$resources$audio$translations$to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 337;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_translations);
tmp_expression_value_1 = par_translations;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$audio$translations$$$function__15___init__->m_frame.f_lineno = 337;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_create, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$audio$translations$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$audio$translations$$$function__15___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$audio$translations$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$audio$translations$$$function__15___init__,
    type_description_1,
    par_self,
    par_translations
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$audio$translations$$$function__15___init__ == cache_frame_frame_openai$resources$audio$translations$$$function__15___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$audio$translations$$$function__15___init__);
    cache_frame_frame_openai$resources$audio$translations$$$function__15___init__ = NULL;
}

assertFrameObject(frame_frame_openai$resources$audio$translations$$$function__15___init__);

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
CHECK_OBJECT(par_translations);
Py_DECREF(par_translations);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_translations);
Py_DECREF(par_translations);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$audio$translations$$$function__16___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_translations = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$resources$audio$translations$$$function__16___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$audio$translations$$$function__16___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$audio$translations$$$function__16___init__)) {
    Py_XDECREF(cache_frame_frame_openai$resources$audio$translations$$$function__16___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$audio$translations$$$function__16___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$audio$translations$$$function__16___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7006938b86df6b0dd671925cc8c548cc, module_openai$resources$audio$translations, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$audio$translations$$$function__16___init__->m_type_description == NULL);
frame_frame_openai$resources$audio$translations$$$function__16___init__ = cache_frame_frame_openai$resources$audio$translations$$$function__16___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$audio$translations$$$function__16___init__);
assert(Py_REFCNT(frame_frame_openai$resources$audio$translations$$$function__16___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_translations);
tmp_assattr_value_1 = par_translations;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__translations, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_2;
tmp_called_value_1 = module_var_accessor_openai$resources$audio$translations$async_to_streamed_response_wrapper(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 346;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_translations);
tmp_expression_value_1 = par_translations;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$resources$audio$translations$$$function__16___init__->m_frame.f_lineno = 346;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_create, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$audio$translations$$$function__16___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$audio$translations$$$function__16___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$audio$translations$$$function__16___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$audio$translations$$$function__16___init__,
    type_description_1,
    par_self,
    par_translations
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$audio$translations$$$function__16___init__ == cache_frame_frame_openai$resources$audio$translations$$$function__16___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$audio$translations$$$function__16___init__);
    cache_frame_frame_openai$resources$audio$translations$$$function__16___init__ = NULL;
}

assertFrameObject(frame_frame_openai$resources$audio$translations$$$function__16___init__);

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
CHECK_OBJECT(par_translations);
Py_DECREF(par_translations);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_translations);
Py_DECREF(par_translations);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$resources$audio$translations$$$function__17__get_response_format_type(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_response_format = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type)) {
    Py_XDECREF(cache_frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type = MAKE_FUNCTION_FRAME(tstate, code_objects_f3f0c1362ef95c65ac35f5649d4c0387, module_openai$resources$audio$translations, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type->m_type_description == NULL);
frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type = cache_frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type);
assert(Py_REFCNT(frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_response_format);
tmp_isinstance_inst_1 = par_response_format;
tmp_isinstance_cls_1 = module_var_accessor_openai$resources$audio$translations$NotGiven(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NotGiven);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 354;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_response_format);
tmp_cmp_expr_left_1 = par_response_format;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_right_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
tmp_return_value = module_var_accessor_openai$resources$audio$translations$Translation(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Translation);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 355;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_response_format);
tmp_cmp_expr_left_2 = par_response_format;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_json;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = module_var_accessor_openai$resources$audio$translations$Translation(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Translation);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 358;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_response_format);
tmp_cmp_expr_left_3 = par_response_format;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_verbose_json;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = module_var_accessor_openai$resources$audio$translations$TranslationVerbose(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TranslationVerbose);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 360;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(par_response_format);
tmp_cmp_expr_left_4 = par_response_format;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_srt;
tmp_or_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_response_format);
tmp_cmp_expr_left_5 = par_response_format;
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_text;
tmp_or_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(par_response_format);
tmp_cmp_expr_left_6 = par_response_format;
tmp_cmp_expr_right_6 = mod_consts.const_str_plain_vtt;
tmp_or_right_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_or_right_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_or_right_value_2 = tmp_or_left_value_3;
or_end_3:;
tmp_condition_result_4 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_4 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_return_value = (PyObject *)&PyUnicode_Type;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_openai$resources$audio$translations$log(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 366;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_439541e80bfdf6461de76fc4fc32c289;
CHECK_OBJECT(par_response_format);
tmp_args_element_value_2 = par_response_format;
frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type->m_frame.f_lineno = 366;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_warn,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
tmp_return_value = module_var_accessor_openai$resources$audio$translations$Transcription(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Transcription);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 367;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_4:;
branch_end_3:;
branch_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type,
    type_description_1,
    par_response_format
);


// Release cached frame if used for exception.
if (frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type == cache_frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type);
    cache_frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type = NULL;
}

assertFrameObject(frame_frame_openai$resources$audio$translations$$$function__17__get_response_format_type);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_response_format);
Py_DECREF(par_response_format);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__10_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$audio$translations$$$function__10_create,
        mod_consts.const_str_plain_create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a74cf956e72d76fffa78a95c454fa5de,
#endif
        code_objects_95f5c9ccc4915d79233f882e56989e58,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$audio$translations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__11_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$audio$translations$$$function__11_create,
        mod_consts.const_str_plain_create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a74cf956e72d76fffa78a95c454fa5de,
#endif
        code_objects_90e17ad4735172da9c48799423338a20,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$audio$translations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__12_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$audio$translations$$$function__12_create,
        mod_consts.const_str_plain_create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a74cf956e72d76fffa78a95c454fa5de,
#endif
        code_objects_3ff53afbc12100e561ba1faecad706d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$audio$translations,
        mod_consts.const_str_digest_0b42c4181fd0bdbc134141648aace805,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__13___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$audio$translations$$$function__13___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_91f8b39fa09c83cc1ae31f7ff07a8540,
#endif
        code_objects_5e22601d79bc6fe9f19452fcbe43311a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$audio$translations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__14___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$audio$translations$$$function__14___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_429365faa7de187ff965c32d4a576710,
#endif
        code_objects_316546e7ca44efb1cd8e9ca474213621,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$audio$translations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__15___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$audio$translations$$$function__15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9b6dea06b9568147590cfce39aa5d8fc,
#endif
        code_objects_5fc270cc2cbef33369c488bd8b1c9fab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$audio$translations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__16___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$audio$translations$$$function__16___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_191e0b84041c00d62197882a38b9cef0,
#endif
        code_objects_7006938b86df6b0dd671925cc8c548cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$audio$translations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__17__get_response_format_type(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$audio$translations$$$function__17__get_response_format_type,
        mod_consts.const_str_plain__get_response_format_type,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f3f0c1362ef95c65ac35f5649d4c0387,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$audio$translations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__1_with_raw_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$audio$translations$$$function__1_with_raw_response,
        mod_consts.const_str_plain_with_raw_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e258b213a83402496380d63587e0903b,
#endif
        code_objects_3bce9637c293c8e21a581d8314ff189c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$audio$translations,
        mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__2_with_streaming_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$audio$translations$$$function__2_with_streaming_response,
        mod_consts.const_str_plain_with_streaming_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1801c105a48fd8b34233598b7ce9013d,
#endif
        code_objects_ed02b29c71fba2596a7ecbd140a57d90,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$audio$translations,
        mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__3_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8ef647f81fd290dc4869579374e7460b,
#endif
        code_objects_788e22faa36ef2ef9112c71556c1937c,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$audio$translations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__4_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8ef647f81fd290dc4869579374e7460b,
#endif
        code_objects_5b90e586582c3f20890b8ffa41f7ac96,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$audio$translations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__5_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8ef647f81fd290dc4869579374e7460b,
#endif
        code_objects_c53b14a0c2bddb7f7afd6099699c40b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$audio$translations,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__6_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$audio$translations$$$function__6_create,
        mod_consts.const_str_plain_create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8ef647f81fd290dc4869579374e7460b,
#endif
        code_objects_b7b362a020637518398d6593c87d9c7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$audio$translations,
        mod_consts.const_str_digest_0b42c4181fd0bdbc134141648aace805,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__7_with_raw_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$audio$translations$$$function__7_with_raw_response,
        mod_consts.const_str_plain_with_raw_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6a9fd6ed13fa86eadb6593ec1f6e9bc9,
#endif
        code_objects_fd37535e40b1065e62b9d241e755bf96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$audio$translations,
        mod_consts.const_str_digest_91080d0f687f9ec1dd0c1b1750711d9b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__8_with_streaming_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$audio$translations$$$function__8_with_streaming_response,
        mod_consts.const_str_plain_with_streaming_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2bc8b76201bd6133dfff123cbd0b7123,
#endif
        code_objects_762d74bee78052ae196e6d1744bca54f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$resources$audio$translations,
        mod_consts.const_str_digest_83b043a94791b7a89fe1b103b91c36a3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$resources$audio$translations$$$function__9_create(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$resources$audio$translations$$$function__9_create,
        mod_consts.const_str_plain_create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a74cf956e72d76fffa78a95c454fa5de,
#endif
        code_objects_4d840c40afa396a5b46c281d73f9f66e,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$resources$audio$translations,
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

static function_impl_code const function_table_openai$resources$audio$translations[] = {
impl_openai$resources$audio$translations$$$function__1_with_raw_response,
impl_openai$resources$audio$translations$$$function__2_with_streaming_response,
impl_openai$resources$audio$translations$$$function__6_create,
impl_openai$resources$audio$translations$$$function__7_with_raw_response,
impl_openai$resources$audio$translations$$$function__8_with_streaming_response,
impl_openai$resources$audio$translations$$$function__9_create,
impl_openai$resources$audio$translations$$$function__10_create,
impl_openai$resources$audio$translations$$$function__11_create,
impl_openai$resources$audio$translations$$$function__12_create,
impl_openai$resources$audio$translations$$$function__13___init__,
impl_openai$resources$audio$translations$$$function__14___init__,
impl_openai$resources$audio$translations$$$function__15___init__,
impl_openai$resources$audio$translations$$$function__16___init__,
impl_openai$resources$audio$translations$$$function__17__get_response_format_type,
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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$resources$audio$translations);
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
        module_openai$resources$audio$translations,
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
        function_table_openai$resources$audio$translations,
        sizeof(function_table_openai$resources$audio$translations) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.resources.audio.translations";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$resources$audio$translations(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$resources$audio$translations");

    // Store the module for future use.
    module_openai$resources$audio$translations = module;

    moduledict_openai$resources$audio$translations = MODULE_DICT(module_openai$resources$audio$translations);

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
        PRINT_STRING("openai$resources$audio$translations: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$resources$audio$translations: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$resources$audio$translations: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.resources.audio.translations" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$resources$audio$translations\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$resources$audio$translations,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$resources$audio$translations,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$resources$audio$translations,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$resources$audio$translations,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$resources$audio$translations,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$resources$audio$translations);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$resources$audio$translations);
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

        UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$audio$translations;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_openai$resources$audio$translations$$$class__1_Translations_29 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_openai$resources$audio$translations$$$class__1_Translations_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$resources$audio$translations$$$class__2_AsyncTranslations_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_openai$resources$audio$translations$$$class__3_TranslationsWithRawResponse_315 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_openai$resources$audio$translations$$$class__4_AsyncTranslationsWithRawResponse_324 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_openai$resources$audio$translations$$$class__5_TranslationsWithStreamingResponse_333 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
PyObject *locals_openai$resources$audio$translations$$$class__6_AsyncTranslationsWithStreamingResponse_342 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$resources$audio$translations = MAKE_MODULE_FRAME(code_objects_b62fe29b4199788b8f2ef6a598cff37a, module_openai$resources$audio$translations);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$audio$translations);
assert(Py_REFCNT(frame_frame_openai$resources$audio$translations) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$resources$audio$translations$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$resources$audio$translations$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$resources$audio$translations;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 5;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_6);
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
UPDATE_STRING_DICT0(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_8);
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
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_9);
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
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_Mapping,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Mapping);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_11);
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
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$resources$audio$translations;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Literal_str_plain_overload_str_plain_assert_never_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 7;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_overload,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_overload);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_overload, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_assert_never,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_assert_never);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_never, tmp_assign_source_15);
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
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_httpx;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$resources$audio$translations;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 9;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = const_str_empty;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$resources$audio$translations;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain__legacy_response_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 11;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain__legacy_response,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain__legacy_response);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain__legacy_response, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$resources$audio$translations;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_d3f69ff1c97b29999250ccbe2edbb63c_tuple;
tmp_level_value_5 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 12;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_8 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_NOT_GIVEN,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_Body,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Body);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Body, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_Query,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Query);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Query, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_Headers,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_Headers);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Headers, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_NotGiven,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_NotGiven);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_FileTypes,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_FileTypes);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_FileTypes, tmp_assign_source_24);
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
PyObject *tmp_assign_source_25;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$resources$audio$translations;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_bc1b1060ee858bdb5c4c9aad8ef0ec75_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 13;
tmp_assign_source_25 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_25;
}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_14 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_extract_files,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_extract_files);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_files, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_15 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_maybe_transform,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_16 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_deepcopy_minimal,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_deepcopy_minimal);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_deepcopy_minimal, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_17 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_async_maybe_transform,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_async_maybe_transform);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform, tmp_assign_source_29);
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
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$resources$audio$translations;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_cached_property_tuple;
tmp_level_value_7 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 14;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_cached_property,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_cached_property);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__resource;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$resources$audio$translations;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_SyncAPIResource_str_plain_AsyncAPIResource_tuple;
tmp_level_value_8 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 15;
tmp_assign_source_31 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_31;
}
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_19 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_SyncAPIResource,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_SyncAPIResource);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIResource, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_20 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_AsyncAPIResource,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_AsyncAPIResource);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResource, tmp_assign_source_33);
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
PyObject *tmp_assign_source_34;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__response;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$resources$audio$translations;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_44cdb303d2217f0400d5af2b554233d1_tuple;
tmp_level_value_9 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 16;
tmp_assign_source_34 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_34;
}
// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_21 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_to_streamed_response_wrapper,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_to_streamed_response_wrapper);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_to_streamed_response_wrapper, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_22 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_async_to_streamed_response_wrapper,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_async_to_streamed_response_wrapper);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_async_to_streamed_response_wrapper, tmp_assign_source_36);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_d30d12c58eccbb238695faae0223f8e4;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$resources$audio$translations;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_translation_create_params_tuple;
tmp_level_value_10 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 17;
tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_translation_create_params,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_translation_create_params);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_translation_create_params, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_24;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain__base_client;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai$resources$audio$translations;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_make_request_options_tuple;
tmp_level_value_11 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 18;
tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_make_request_options,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_make_request_options);
}

CHECK_OBJECT(tmp_import_name_from_24);
Py_DECREF(tmp_import_name_from_24);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_make_request_options, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_25;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_c86bca742990b2d62cfbd365dc334fca;
tmp_globals_arg_value_12 = (PyObject *)moduledict_openai$resources$audio$translations;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_AudioModel_tuple;
tmp_level_value_12 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 19;
tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_AudioModel,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_AudioModel);
}

CHECK_OBJECT(tmp_import_name_from_25);
Py_DECREF(tmp_import_name_from_25);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_AudioModel, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_26;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_db807a28b8c1ec195012adbd9ea1ac1c;
tmp_globals_arg_value_13 = (PyObject *)moduledict_openai$resources$audio$translations;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_Translation_tuple;
tmp_level_value_13 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 20;
tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_Translation,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_Translation);
}

CHECK_OBJECT(tmp_import_name_from_26);
Py_DECREF(tmp_import_name_from_26);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Translation, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_27;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_a38f8d545559b68edcf618e57fe7157f;
tmp_globals_arg_value_14 = (PyObject *)moduledict_openai$resources$audio$translations;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_AudioResponseFormat_tuple;
tmp_level_value_14 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 21;
tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_AudioResponseFormat,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_AudioResponseFormat);
}

CHECK_OBJECT(tmp_import_name_from_27);
Py_DECREF(tmp_import_name_from_27);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_AudioResponseFormat, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_28;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_digest_07663408f4d3a11510d8389306075278;
tmp_globals_arg_value_15 = (PyObject *)moduledict_openai$resources$audio$translations;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_TranslationVerbose_tuple;
tmp_level_value_15 = mod_consts.const_int_pos_3;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 22;
tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_openai$resources$audio$translations,
        mod_consts.const_str_plain_TranslationVerbose,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_TranslationVerbose);
}

CHECK_OBJECT(tmp_import_name_from_28);
Py_DECREF(tmp_import_name_from_28);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_TranslationVerbose, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_LIST2(tstate, mod_consts.const_str_plain_Translations,mod_consts.const_str_plain_AsyncTranslations);
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_openai$resources$audio$translations$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto frame_exception_exit_1;
}
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 26;
tmp_assign_source_44 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_3459729c16b4903bc76ed1f5a90d5e05_tuple, 0)
);

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_log, tmp_assign_source_44);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_3fab2fa3fadd4d4d413d0704d0eac706;
tmp_ass_subscribed_1 = module_var_accessor_openai$resources$audio$translations$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_log;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_45;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_openai$resources$audio$translations$SyncAPIResource(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncAPIResource);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto try_except_handler_7;
}
tmp_assign_source_45 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_45, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_46 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
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


exception_lineno = 29;

    goto try_except_handler_7;
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


exception_lineno = 29;

    goto try_except_handler_7;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_7;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_48 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_48;
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


exception_lineno = 29;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_49;
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


exception_lineno = 29;

    goto try_except_handler_7;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Translations;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 29;
tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_49;
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


exception_lineno = 29;

    goto try_except_handler_7;
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
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_16, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

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


exception_lineno = 29;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_7;
}
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 29;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 29;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_50;
}
branch_end_1:;
{
PyObject *tmp_assign_source_51;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_openai$resources$audio$translations$$$class__1_Translations_29 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1563495776d108b6175f0363bdd45b21;
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_Translations;
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_29;
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_9;
}
frame_frame_openai$resources$audio$translations$$$class__1_Translations_2 = MAKE_CLASS_FRAME(tstate, code_objects_382ccb0ba4a1ba1ad5ab33f71fb1cb5f, module_openai$resources$audio$translations, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$audio$translations$$$class__1_Translations_2);
assert(Py_REFCNT(frame_frame_openai$resources$audio$translations$$$class__1_Translations_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_2 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = module_var_accessor_openai$resources$audio$translations$cached_property(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_ed36a86de8fb2a43e81d1ec2318e66de);

tmp_args_element_value_1 = MAKE_FUNCTION_openai$resources$audio$translations$$$function__1_with_raw_response(tstate, tmp_annotations_1);

frame_frame_openai$resources$audio$translations$$$class__1_Translations_2->m_frame.f_lineno = 30;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_with_raw_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_2;
tmp_called_value_3 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = module_var_accessor_openai$resources$audio$translations$cached_property(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_00ce9e06b8f05dce121974cea5a92c92);

tmp_args_element_value_2 = MAKE_FUNCTION_openai$resources$audio$translations$$$function__2_with_streaming_response(tstate, tmp_annotations_2);

frame_frame_openai$resources$audio$translations$$$class__1_Translations_2->m_frame.f_lineno = 40;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_with_streaming_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_3;
tmp_called_value_4 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_overload);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = module_var_accessor_openai$resources$audio$translations$overload(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_dict_key_1 = mod_consts.const_str_plain_response_format;
tmp_dict_value_1 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_1 = _PyDict_NewPresized( 7 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_prompt;
tmp_dict_value_1 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;
type_description_2 = "o";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_temperature;
tmp_dict_value_1 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;
type_description_2 = "o";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_timeout;
tmp_dict_value_1 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_2 = "o";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_defaults_1);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_a7cd4047190c310e850e9daccb320aa1);

tmp_args_element_value_3 = MAKE_FUNCTION_openai$resources$audio$translations$$$function__3_create(tstate, tmp_kw_defaults_1, tmp_annotations_3);

frame_frame_openai$resources$audio$translations$$$class__1_Translations_2->m_frame.f_lineno = 49;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_create, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_annotations_4;
tmp_called_value_5 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_overload);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = module_var_accessor_openai$resources$audio$translations$overload(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_dict_key_2 = mod_consts.const_str_plain_prompt;
tmp_dict_value_2 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_2 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_temperature;
tmp_dict_value_2 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_timeout;
tmp_dict_value_2 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_defaults_2);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_702bedaf628b3db7fa6180c1b9cbbb02);

tmp_args_element_value_4 = MAKE_FUNCTION_openai$resources$audio$translations$$$function__4_create(tstate, tmp_kw_defaults_2, tmp_annotations_4);

frame_frame_openai$resources$audio$translations$$$class__1_Translations_2->m_frame.f_lineno = 66;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_create, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_kw_defaults_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_annotations_5;
tmp_called_value_6 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_overload);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = module_var_accessor_openai$resources$audio$translations$overload(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_dict_key_3 = mod_consts.const_str_plain_prompt;
tmp_dict_value_3 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_3 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_temperature;
tmp_dict_value_3 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_timeout;
tmp_dict_value_3 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_kw_defaults_3);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_737b7daa31345f378ffeb3f83f808845);

tmp_args_element_value_5 = MAKE_FUNCTION_openai$resources$audio$translations$$$function__5_create(tstate, tmp_kw_defaults_3, tmp_annotations_5);

frame_frame_openai$resources$audio$translations$$$class__1_Translations_2->m_frame.f_lineno = 83;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_create, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_annotations_6;
tmp_dict_key_4 = mod_consts.const_str_plain_prompt;
tmp_dict_value_4 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_4 = _PyDict_NewPresized( 7 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_response_format;
tmp_dict_value_4 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_2 = "o";
    goto dict_build_exception_4;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_temperature;
tmp_dict_value_4 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_2 = "o";
    goto dict_build_exception_4;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_timeout;
tmp_dict_value_4 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_2 = "o";
    goto dict_build_exception_4;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_kw_defaults_4);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_bc46f24f71f8290392ee14bcde20949b);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$audio$translations$$$function__6_create(tstate, tmp_kw_defaults_4, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain_create, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$audio$translations$$$class__1_Translations_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$audio$translations$$$class__1_Translations_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$audio$translations$$$class__1_Translations_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$audio$translations$$$class__1_Translations_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_openai$resources$audio$translations$$$class__1_Translations_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_9;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_9;
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


exception_lineno = 29;

    goto try_except_handler_9;
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
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__1_Translations_29, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_9;
}
branch_no_3:;
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Translations;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_openai$resources$audio$translations$$$class__1_Translations_29;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 29;
tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_9;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_52;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_51 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_51);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_openai$resources$audio$translations$$$class__1_Translations_29);
locals_openai$resources$audio$translations$$$class__1_Translations_29 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$audio$translations$$$class__1_Translations_29);
locals_openai$resources$audio$translations$$$class__1_Translations_29 = NULL;
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
exception_lineno = 29;
goto try_except_handler_7;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_Translations, tmp_assign_source_51);
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
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_53;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_openai$resources$audio$translations$AsyncAPIResource(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncAPIResource);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;

    goto try_except_handler_10;
}
tmp_assign_source_53 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_53, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_54 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_10;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_10;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_10;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_56 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_56;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_10;
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
PyObject *tmp_assign_source_57;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_10;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_AsyncTranslations;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 172;
tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_57;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_10;
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
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_17, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_10;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_10;
}
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 172;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 172;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_58;
}
branch_end_4:;
{
PyObject *tmp_assign_source_59;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1563495776d108b6175f0363bdd45b21;
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncTranslations;
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_172;
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_12;
}
frame_frame_openai$resources$audio$translations$$$class__2_AsyncTranslations_3 = MAKE_CLASS_FRAME(tstate, code_objects_dda01654b9617702a16ffed943fde01e, module_openai$resources$audio$translations, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$resources$audio$translations$$$class__2_AsyncTranslations_3);
assert(Py_REFCNT(frame_frame_openai$resources$audio$translations$$$class__2_AsyncTranslations_3) == 2);

// Framed code:
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_7;
tmp_called_value_9 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = module_var_accessor_openai$resources$audio$translations$cached_property(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_21dca6c7a27ad688c71726b651063627);

tmp_args_element_value_6 = MAKE_FUNCTION_openai$resources$audio$translations$$$function__7_with_raw_response(tstate, tmp_annotations_7);

frame_frame_openai$resources$audio$translations$$$class__2_AsyncTranslations_3->m_frame.f_lineno = 173;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_with_raw_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_8;
tmp_called_value_10 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = module_var_accessor_openai$resources$audio$translations$cached_property(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 183;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_0690745a65ca9510fab00abf6a3ba4c1);

tmp_args_element_value_7 = MAKE_FUNCTION_openai$resources$audio$translations$$$function__8_with_streaming_response(tstate, tmp_annotations_8);

frame_frame_openai$resources$audio$translations$$$class__2_AsyncTranslations_3->m_frame.f_lineno = 183;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_with_streaming_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_8;
PyObject *tmp_kw_defaults_5;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_annotations_9;
tmp_called_value_11 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_overload);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = module_var_accessor_openai$resources$audio$translations$overload(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_dict_key_5 = mod_consts.const_str_plain_response_format;
tmp_dict_value_5 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 198;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_5 = _PyDict_NewPresized( 7 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_prompt;
tmp_dict_value_5 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;
type_description_2 = "o";
    goto dict_build_exception_5;
}
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_5;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_temperature;
tmp_dict_value_5 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 200;
type_description_2 = "o";
    goto dict_build_exception_5;
}
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_5;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_timeout;
tmp_dict_value_5 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_2 = "o";
    goto dict_build_exception_5;
}
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_5;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_kw_defaults_5);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_a7cd4047190c310e850e9daccb320aa1);

tmp_args_element_value_8 = MAKE_FUNCTION_openai$resources$audio$translations$$$function__9_create(tstate, tmp_kw_defaults_5, tmp_annotations_9);

frame_frame_openai$resources$audio$translations$$$class__2_AsyncTranslations_3->m_frame.f_lineno = 192;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_create, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_9;
PyObject *tmp_kw_defaults_6;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_annotations_10;
tmp_called_value_12 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_overload);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = module_var_accessor_openai$resources$audio$translations$overload(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_dict_key_6 = mod_consts.const_str_plain_prompt;
tmp_dict_value_6 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 216;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_6 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_temperature;
tmp_dict_value_6 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;
type_description_2 = "o";
    goto dict_build_exception_6;
}
        Py_INCREF(tmp_dict_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_6;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_timeout;
tmp_dict_value_6 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 223;
type_description_2 = "o";
    goto dict_build_exception_6;
}
        Py_INCREF(tmp_dict_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_6;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
goto dict_build_no_exception_6;
// Exception handling pass through code for dict_build:
dict_build_exception_6:;
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_kw_defaults_6);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_6:;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_702bedaf628b3db7fa6180c1b9cbbb02);

tmp_args_element_value_9 = MAKE_FUNCTION_openai$resources$audio$translations$$$function__10_create(tstate, tmp_kw_defaults_6, tmp_annotations_10);

frame_frame_openai$resources$audio$translations$$$class__2_AsyncTranslations_3->m_frame.f_lineno = 209;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_create, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_10;
PyObject *tmp_kw_defaults_7;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
PyObject *tmp_annotations_11;
tmp_called_value_13 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_overload);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = module_var_accessor_openai$resources$audio$translations$overload(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_dict_key_7 = mod_consts.const_str_plain_prompt;
tmp_dict_value_7 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_7 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_13);

exception_lineno = 233;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_7 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_temperature;
tmp_dict_value_7 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_7 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 234;
type_description_2 = "o";
    goto dict_build_exception_7;
}
        Py_INCREF(tmp_dict_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_7;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_timeout;
tmp_dict_value_7 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_7 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_2 = "o";
    goto dict_build_exception_7;
}
        Py_INCREF(tmp_dict_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_7;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
goto dict_build_no_exception_7;
// Exception handling pass through code for dict_build:
dict_build_exception_7:;
Py_DECREF(tmp_called_value_13);
Py_DECREF(tmp_kw_defaults_7);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_7:;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_737b7daa31345f378ffeb3f83f808845);

tmp_args_element_value_10 = MAKE_FUNCTION_openai$resources$audio$translations$$$function__11_create(tstate, tmp_kw_defaults_7, tmp_annotations_11);

frame_frame_openai$resources$audio$translations$$$class__2_AsyncTranslations_3->m_frame.f_lineno = 226;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_create, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_8;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
PyObject *tmp_annotations_12;
tmp_dict_key_8 = mod_consts.const_str_plain_prompt;
tmp_dict_value_8 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_8 = _PyDict_NewPresized( 7 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_response_format;
tmp_dict_value_8 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 249;
type_description_2 = "o";
    goto dict_build_exception_8;
}
        Py_INCREF(tmp_dict_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_8;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_temperature;
tmp_dict_value_8 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 250;
type_description_2 = "o";
    goto dict_build_exception_8;
}
        Py_INCREF(tmp_dict_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_8;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_extra_query;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_extra_body;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_timeout;
tmp_dict_value_8 = PyObject_GetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = module_var_accessor_openai$resources$audio$translations$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 256;
type_description_2 = "o";
    goto dict_build_exception_8;
}
        Py_INCREF(tmp_dict_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_8;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
goto dict_build_no_exception_8;
// Exception handling pass through code for dict_build:
dict_build_exception_8:;
Py_DECREF(tmp_kw_defaults_8);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_8:;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_49461bf97278cd455e0d2578c0730fce);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$audio$translations$$$function__12_create(tstate, tmp_kw_defaults_8, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain_create, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$audio$translations$$$class__2_AsyncTranslations_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$audio$translations$$$class__2_AsyncTranslations_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$audio$translations$$$class__2_AsyncTranslations_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$resources$audio$translations$$$class__2_AsyncTranslations_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_openai$resources$audio$translations$$$class__2_AsyncTranslations_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_12;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_12;
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


exception_lineno = 172;

    goto try_except_handler_12;
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
tmp_res = PyObject_SetItem(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_12;
}
branch_no_6:;
{
PyObject *tmp_assign_source_60;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_14 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_AsyncTranslations;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 172;
tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_12;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_60;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_59 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_59);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172);
locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172);
locals_openai$resources$audio$translations$$$class__2_AsyncTranslations_172 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 172;
goto try_except_handler_10;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTranslations, tmp_assign_source_59);
}
goto try_end_8;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_62;
}
// Tried code:
{
PyObject *tmp_assign_source_63;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_openai$resources$audio$translations$$$class__3_TranslationsWithRawResponse_315 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_1563495776d108b6175f0363bdd45b21;
tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__3_TranslationsWithRawResponse_315, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_TranslationsWithRawResponse;
tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__3_TranslationsWithRawResponse_315, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_315;
tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__3_TranslationsWithRawResponse_315, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_3bed6e2164bd438fe0c2f5543cb30761);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$audio$translations$$$function__13___init__(tstate, tmp_annotations_13);

tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__3_TranslationsWithRawResponse_315, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain__translations_str_plain_create_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__3_TranslationsWithRawResponse_315, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_64;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
tmp_called_value_15 = (PyObject *)&PyType_Type;
tmp_tuple_element_9 = mod_consts.const_str_plain_TranslationsWithRawResponse;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_openai$resources$audio$translations$$$class__3_TranslationsWithRawResponse_315;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 315;
tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;

    goto try_except_handler_15;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_64;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_63 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_63);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_openai$resources$audio$translations$$$class__3_TranslationsWithRawResponse_315);
locals_openai$resources$audio$translations$$$class__3_TranslationsWithRawResponse_315 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$audio$translations$$$class__3_TranslationsWithRawResponse_315);
locals_openai$resources$audio$translations$$$class__3_TranslationsWithRawResponse_315 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 315;
goto try_except_handler_13;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_TranslationsWithRawResponse, tmp_assign_source_63);
}
goto try_end_9;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
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
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
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
{
PyObject *tmp_outline_return_value_4;
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_66;
}
// Tried code:
{
PyObject *tmp_assign_source_67;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_openai$resources$audio$translations$$$class__4_AsyncTranslationsWithRawResponse_324 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
tmp_dictset_value = mod_consts.const_str_digest_1563495776d108b6175f0363bdd45b21;
tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__4_AsyncTranslationsWithRawResponse_324, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AsyncTranslationsWithRawResponse;
tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__4_AsyncTranslationsWithRawResponse_324, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_324;
tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__4_AsyncTranslationsWithRawResponse_324, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_20bb9a5afcbf6c225c91cb82dc4a1dd2);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$audio$translations$$$function__14___init__(tstate, tmp_annotations_14);

tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__4_AsyncTranslationsWithRawResponse_324, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain__translations_str_plain_create_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__4_AsyncTranslationsWithRawResponse_324, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_68;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_6;
tmp_called_value_16 = (PyObject *)&PyType_Type;
tmp_tuple_element_10 = mod_consts.const_str_plain_AsyncTranslationsWithRawResponse;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_openai$resources$audio$translations$$$class__4_AsyncTranslationsWithRawResponse_324;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 324;
tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_18;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_68;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_67 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_67);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_openai$resources$audio$translations$$$class__4_AsyncTranslationsWithRawResponse_324);
locals_openai$resources$audio$translations$$$class__4_AsyncTranslationsWithRawResponse_324 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$audio$translations$$$class__4_AsyncTranslationsWithRawResponse_324);
locals_openai$resources$audio$translations$$$class__4_AsyncTranslationsWithRawResponse_324 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_17;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 324;
goto try_except_handler_16;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTranslationsWithRawResponse, tmp_assign_source_67);
}
goto try_end_10;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
Py_DECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
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
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_69;
}
{
PyObject *tmp_assign_source_70;
tmp_assign_source_70 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_70;
}
// Tried code:
{
PyObject *tmp_assign_source_71;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_openai$resources$audio$translations$$$class__5_TranslationsWithStreamingResponse_333 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
tmp_dictset_value = mod_consts.const_str_digest_1563495776d108b6175f0363bdd45b21;
tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__5_TranslationsWithStreamingResponse_333, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_TranslationsWithStreamingResponse;
tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__5_TranslationsWithStreamingResponse_333, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_333;
tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__5_TranslationsWithStreamingResponse_333, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_3bed6e2164bd438fe0c2f5543cb30761);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$audio$translations$$$function__15___init__(tstate, tmp_annotations_15);

tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__5_TranslationsWithStreamingResponse_333, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain__translations_str_plain_create_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__5_TranslationsWithStreamingResponse_333, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_72;
PyObject *tmp_called_value_17;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_7;
tmp_called_value_17 = (PyObject *)&PyType_Type;
tmp_tuple_element_11 = mod_consts.const_str_plain_TranslationsWithStreamingResponse;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_openai$resources$audio$translations$$$class__5_TranslationsWithStreamingResponse_333;
PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 333;
tmp_assign_source_72 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;

    goto try_except_handler_21;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_72;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_71 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_71);
goto try_return_handler_21;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
Py_DECREF(locals_openai$resources$audio$translations$$$class__5_TranslationsWithStreamingResponse_333);
locals_openai$resources$audio$translations$$$class__5_TranslationsWithStreamingResponse_333 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$audio$translations$$$class__5_TranslationsWithStreamingResponse_333);
locals_openai$resources$audio$translations$$$class__5_TranslationsWithStreamingResponse_333 = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_20;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 333;
goto try_except_handler_19;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_TranslationsWithStreamingResponse, tmp_assign_source_71);
}
goto try_end_11;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
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
{
PyObject *tmp_assign_source_73;
tmp_assign_source_73 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_73;
}
{
PyObject *tmp_assign_source_74;
tmp_assign_source_74 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_74;
}
// Tried code:
{
PyObject *tmp_assign_source_75;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_openai$resources$audio$translations$$$class__6_AsyncTranslationsWithStreamingResponse_342 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
tmp_dictset_value = mod_consts.const_str_digest_1563495776d108b6175f0363bdd45b21;
tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__6_AsyncTranslationsWithStreamingResponse_342, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AsyncTranslationsWithStreamingResponse;
tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__6_AsyncTranslationsWithStreamingResponse_342, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_342;
tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__6_AsyncTranslationsWithStreamingResponse_342, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_20bb9a5afcbf6c225c91cb82dc4a1dd2);

tmp_dictset_value = MAKE_FUNCTION_openai$resources$audio$translations$$$function__16___init__(tstate, tmp_annotations_16);

tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__6_AsyncTranslationsWithStreamingResponse_342, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain__translations_str_plain_create_tuple;
tmp_result = DICT_SET_ITEM(locals_openai$resources$audio$translations$$$class__6_AsyncTranslationsWithStreamingResponse_342, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_76;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_8;
tmp_called_value_18 = (PyObject *)&PyType_Type;
tmp_tuple_element_12 = mod_consts.const_str_plain_AsyncTranslationsWithStreamingResponse;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_openai$resources$audio$translations$$$class__6_AsyncTranslationsWithStreamingResponse_342;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_openai$resources$audio$translations->m_frame.f_lineno = 342;
tmp_assign_source_76 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto try_except_handler_24;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_76;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_75 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_75);
goto try_return_handler_24;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
Py_DECREF(locals_openai$resources$audio$translations$$$class__6_AsyncTranslationsWithStreamingResponse_342);
locals_openai$resources$audio$translations$$$class__6_AsyncTranslationsWithStreamingResponse_342 = NULL;
goto try_return_handler_23;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$resources$audio$translations$$$class__6_AsyncTranslationsWithStreamingResponse_342);
locals_openai$resources$audio$translations$$$class__6_AsyncTranslationsWithStreamingResponse_342 = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto try_except_handler_23;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 342;
goto try_except_handler_22;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncTranslationsWithStreamingResponse, tmp_assign_source_75);
}
goto try_end_12;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
Py_DECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$resources$audio$translations, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$resources$audio$translations->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$resources$audio$translations, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$resources$audio$translations);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;
{
PyObject *tmp_assign_source_77;
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_0e3d553e2c30f0223a3a7cfa9b086c2f);

tmp_assign_source_77 = MAKE_FUNCTION_openai$resources$audio$translations$$$function__17__get_response_format_type(tstate, tmp_annotations_17);

UPDATE_STRING_DICT1(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)mod_consts.const_str_plain__get_response_format_type, tmp_assign_source_77);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$resources$audio$translations", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.resources.audio.translations" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$resources$audio$translations);
    return module_openai$resources$audio$translations;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$resources$audio$translations, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$resources$audio$translations", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

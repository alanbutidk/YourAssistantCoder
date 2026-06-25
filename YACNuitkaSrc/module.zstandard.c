/* Generated code for Python module 'zstandard'
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



/* The "module_zstandard" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_zstandard;
PyDictObject *moduledict_zstandard;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_replace;
PyObject *const_tuple_str_plain_t_str_empty_tuple;
PyObject *const_tuple_str_plain_r_str_plain_rb_tuple;
PyObject *const_str_plain_ZstdDecompressor;
PyObject *const_tuple_aeb37cfec10fb3422ef0b61113a6cb0a_tuple;
PyObject *const_str_plain_ZstdCompressor;
PyObject *const_str_plain_endswith;
PyObject *const_tuple_str_plain_b_tuple;
PyObject *const_str_plain_ValueError;
PyObject *const_str_digest_ad5011e256ed9cce28d3209553d9f1ad;
PyObject *const_str_plain_hasattr;
PyObject *const_str_plain_PathLike;
PyObject *const_str_plain_str;
PyObject *const_str_plain_isinstance;
PyObject *const_str_plain_raw_open_mode;
PyObject *const_str_plain_write;
PyObject *const_str_plain_bool;
PyObject *const_str_plain_TypeError;
PyObject *const_tuple_str_digest_57fa3751b73d9c362cbb016189900078_tuple;
PyObject *const_str_plain_stream_reader;
PyObject *const_tuple_str_plain_closefd_tuple;
PyObject *const_str_plain_stream_writer;
PyObject *const_str_plain_RuntimeError;
PyObject *const_tuple_str_digest_dbe47c372bbde0db2f3e375f0d52fa0c_tuple;
PyObject *const_str_plain_TextIOWrapper;
PyObject *const_tuple_str_plain_encoding_str_plain_errors_str_plain_newline_tuple;
PyObject *const_str_digest_c00e4ff52551dc82e68707c522520d5a;
PyObject *const_tuple_str_plain_level_tuple;
PyObject *const_str_plain_compress;
PyObject *const_str_digest_e0691f13a0de365a67c3ca6d8157fe53;
PyObject *const_str_plain_decompress;
PyObject *const_tuple_str_plain_max_output_size_tuple;
PyObject *const_str_digest_89e5c1815874e22553f58084070b7b72;
PyObject *const_str_digest_adbb964f3057cc7aecbd02eaf6244378;
PyObject *const_str_plain_environ;
PyObject *const_tuple_61ab2408881f3ebc14c2d67b12d33c53_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_absolute_import;
PyObject *const_str_plain_unicode_literals;
PyObject *const_str_plain_builtins;
PyObject *const_str_plain_io;
PyObject *const_str_plain_os;
PyObject *const_str_plain_platform;
PyObject *const_str_plain_sys;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Buffer_tuple;
PyObject *const_str_plain_Buffer;
PyObject *const_tuple_str_plain_PYTHON_ZSTANDARD_IMPORT_POLICY_str_plain_default_tuple;
PyObject *const_str_plain_strip;
PyObject *const_str_plain__module_policy;
PyObject *const_str_plain_default;
PyObject *const_str_plain_python_implementation;
PyObject *const_tuple_str_plain_CPython_tuple;
PyObject *const_str_plain_backend_c;
PyObject *const_tuple_str_chr_42_tuple;
PyObject *const_str_plain_cext;
PyObject *const_str_plain_backend;
PyObject *const_tuple_str_plain_PyPy_tuple;
PyObject *const_str_plain_backend_cffi;
PyObject *const_str_plain_cffi;
PyObject *const_str_plain_ImportError;
PyObject *const_str_plain_cffi_fallback;
PyObject *const_str_plain_rust;
PyObject *const_str_plain_backend_rust;
PyObject *const_str_digest_4125837bec8fa4e30081ccd703402c1c;
PyObject *const_str_digest_9d3f1e5248ba713ab54726b09cb7d3b2;
PyObject *const_str_plain___version__;
PyObject *const_str_plain__MODE_CLOSED;
PyObject *const_str_plain__MODE_READ;
PyObject *const_int_pos_2;
PyObject *const_str_plain__MODE_WRITE;
PyObject *const_tuple_str_plain_rb_none_none_none_none_none_none_tuple;
PyObject *const_tuple_int_pos_3_tuple;
PyObject *const_str_plain_data;
PyObject *const_str_plain_return;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_max_output_size;
PyObject *const_str_digest_28e8b136370bb624f22ecf32381877ec;
PyObject *const_str_digest_2d61ecf5fd4b878bc618f4ca69703c16;
PyObject *const_tuple_str_plain_data_str_plain_level_str_plain_cctx_tuple;
PyObject *const_tuple_str_plain_data_str_plain_max_output_size_str_plain_dctx_tuple;
PyObject *const_tuple_7db67ce0a59bb6e8098a3d7af14b2d35_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[84];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("zstandard"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_t_str_empty_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_r_str_plain_rb_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_ZstdDecompressor);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_aeb37cfec10fb3422ef0b61113a6cb0a_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_ZstdCompressor);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_endswith);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_b_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_ValueError);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad5011e256ed9cce28d3209553d9f1ad);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_hasattr);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_PathLike);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_isinstance);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw_open_mode);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeError);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_57fa3751b73d9c362cbb016189900078_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream_reader);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_closefd_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream_writer);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_RuntimeError);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_dbe47c372bbde0db2f3e375f0d52fa0c_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_TextIOWrapper);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoding_str_plain_errors_str_plain_newline_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_c00e4ff52551dc82e68707c522520d5a);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_level_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_compress);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_e0691f13a0de365a67c3ca6d8157fe53);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_decompress);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_max_output_size_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_89e5c1815874e22553f58084070b7b72);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_adbb964f3057cc7aecbd02eaf6244378);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_61ab2408881f3ebc14c2d67b12d33c53_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_absolute_import);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_unicode_literals);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_builtins);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_platform);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Buffer_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_Buffer);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PYTHON_ZSTANDARD_IMPORT_POLICY_str_plain_default_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__module_policy);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_default);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_python_implementation);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CPython_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_backend_c);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_42_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_cext);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_backend);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PyPy_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_backend_cffi);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_cffi);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImportError);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_cffi_fallback);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_rust);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_backend_rust);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_4125837bec8fa4e30081ccd703402c1c);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d3f1e5248ba713ab54726b09cb7d3b2);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain__MODE_CLOSED);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain__MODE_READ);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain__MODE_WRITE);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_rb_none_none_none_none_none_none_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_output_size);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_28e8b136370bb624f22ecf32381877ec);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d61ecf5fd4b878bc618f4ca69703c16);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_level_str_plain_cctx_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_max_output_size_str_plain_dctx_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_7db67ce0a59bb6e8098a3d7af14b2d35_tuple);
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
void checkModuleConstants_zstandard(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_t_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_t_str_empty_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_r_str_plain_rb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_r_str_plain_rb_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_ZstdDecompressor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ZstdDecompressor);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_aeb37cfec10fb3422ef0b61113a6cb0a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_aeb37cfec10fb3422ef0b61113a6cb0a_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_ZstdCompressor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ZstdCompressor);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_endswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endswith);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_b_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_ValueError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ValueError);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad5011e256ed9cce28d3209553d9f1ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ad5011e256ed9cce28d3209553d9f1ad);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_hasattr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hasattr);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_PathLike));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PathLike);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_isinstance));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isinstance);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw_open_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw_open_mode);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeError);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_57fa3751b73d9c362cbb016189900078_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_57fa3751b73d9c362cbb016189900078_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream_reader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream_reader);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_closefd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_closefd_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream_writer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream_writer);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_RuntimeError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RuntimeError);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_dbe47c372bbde0db2f3e375f0d52fa0c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_dbe47c372bbde0db2f3e375f0d52fa0c_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_TextIOWrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TextIOWrapper);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoding_str_plain_errors_str_plain_newline_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_encoding_str_plain_errors_str_plain_newline_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_c00e4ff52551dc82e68707c522520d5a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c00e4ff52551dc82e68707c522520d5a);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_level_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_level_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_compress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compress);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_e0691f13a0de365a67c3ca6d8157fe53));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e0691f13a0de365a67c3ca6d8157fe53);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_decompress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decompress);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_max_output_size_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_max_output_size_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_89e5c1815874e22553f58084070b7b72));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89e5c1815874e22553f58084070b7b72);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_adbb964f3057cc7aecbd02eaf6244378));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_adbb964f3057cc7aecbd02eaf6244378);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_61ab2408881f3ebc14c2d67b12d33c53_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_61ab2408881f3ebc14c2d67b12d33c53_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_absolute_import));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_absolute_import);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_unicode_literals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unicode_literals);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_builtins));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_builtins);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_io));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_io);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_platform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_platform);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Buffer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Buffer_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_Buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Buffer);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PYTHON_ZSTANDARD_IMPORT_POLICY_str_plain_default_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PYTHON_ZSTANDARD_IMPORT_POLICY_str_plain_default_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__module_policy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__module_policy);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_python_implementation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_python_implementation);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CPython_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CPython_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_backend_c));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_backend_c);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_42_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_42_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_cext));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cext);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_backend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_backend);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PyPy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PyPy_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_backend_cffi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_backend_cffi);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_cffi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cffi);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImportError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImportError);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_cffi_fallback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cffi_fallback);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_rust));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rust);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_backend_rust));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_backend_rust);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_4125837bec8fa4e30081ccd703402c1c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4125837bec8fa4e30081ccd703402c1c);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d3f1e5248ba713ab54726b09cb7d3b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d3f1e5248ba713ab54726b09cb7d3b2);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version__);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain__MODE_CLOSED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__MODE_CLOSED);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain__MODE_READ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__MODE_READ);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain__MODE_WRITE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__MODE_WRITE);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_rb_none_none_none_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_rb_none_none_none_none_none_none_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_3_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_output_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_output_size);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_28e8b136370bb624f22ecf32381877ec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28e8b136370bb624f22ecf32381877ec);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d61ecf5fd4b878bc618f4ca69703c16));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d61ecf5fd4b878bc618f4ca69703c16);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_level_str_plain_cctx_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_data_str_plain_level_str_plain_cctx_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_max_output_size_str_plain_dctx_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_data_str_plain_max_output_size_str_plain_dctx_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_7db67ce0a59bb6e8098a3d7af14b2d35_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7db67ce0a59bb6e8098a3d7af14b2d35_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 17
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
static PyObject *module_var_accessor_zstandard$Buffer(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_Buffer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Buffer);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Buffer, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Buffer);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Buffer, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_Buffer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_Buffer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Buffer);
    }

    return result;
}

static PyObject *module_var_accessor_zstandard$ImportError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_ImportError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_ImportError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_ImportError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImportError);
    }

    return result;
}

static PyObject *module_var_accessor_zstandard$RuntimeError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RuntimeError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RuntimeError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RuntimeError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RuntimeError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeError);
    }

    return result;
}

static PyObject *module_var_accessor_zstandard$TypeError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeError);
    }

    return result;
}

static PyObject *module_var_accessor_zstandard$ValueError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_ValueError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ValueError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ValueError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ValueError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ValueError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_ValueError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_ValueError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ValueError);
    }

    return result;
}

static PyObject *module_var_accessor_zstandard$ZstdCompressor(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_ZstdCompressor);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ZstdCompressor);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ZstdCompressor, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ZstdCompressor);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ZstdCompressor, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_ZstdCompressor);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_ZstdCompressor);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ZstdCompressor);
    }

    return result;
}

static PyObject *module_var_accessor_zstandard$ZstdDecompressor(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_ZstdDecompressor);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ZstdDecompressor);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ZstdDecompressor, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ZstdDecompressor);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ZstdDecompressor, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_ZstdDecompressor);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_ZstdDecompressor);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ZstdDecompressor);
    }

    return result;
}

static PyObject *module_var_accessor_zstandard$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_zstandard$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_zstandard$_module_policy(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain__module_policy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__module_policy);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__module_policy, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__module_policy);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__module_policy, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain__module_policy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain__module_policy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__module_policy);
    }

    return result;
}

static PyObject *module_var_accessor_zstandard$bool(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_bool);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_bool);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_bool, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_bool);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_bool, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_bool);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_bool);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_bool);
    }

    return result;
}

static PyObject *module_var_accessor_zstandard$bytes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain_bytes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_bytes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_bytes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_bytes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_bytes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain_bytes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain_bytes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes);
    }

    return result;
}

static PyObject *module_var_accessor_zstandard$hasattr(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_hasattr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hasattr);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hasattr, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hasattr);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hasattr, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_hasattr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_hasattr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hasattr);
    }

    return result;
}

static PyObject *module_var_accessor_zstandard$int(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain_int);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_int);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_int, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_int);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_int, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain_int);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain_int);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int);
    }

    return result;
}

static PyObject *module_var_accessor_zstandard$isinstance(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_isinstance);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_isinstance);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_isinstance);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_isinstance);
    }

    return result;
}

static PyObject *module_var_accessor_zstandard$platform(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_platform);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_platform, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_platform);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_platform, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
    }

    return result;
}

static PyObject *module_var_accessor_zstandard$str(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_zstandard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_zstandard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_str);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_zstandard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_str);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_str, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_str);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_str, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_str);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_str);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_str);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_6ccfa774d2b3b91588928f8dcf276538;
static PyCodeObject *code_objects_d1b82bc1f3a57c435da59bd15e61bce2;
static PyCodeObject *code_objects_03e28bcf7ef717ba2419b1df38a0ae2f;
static PyCodeObject *code_objects_aea180bece92b8fd0fc28ffff248a320;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_28e8b136370bb624f22ecf32381877ec); CHECK_OBJECT(module_filename_obj);
code_objects_6ccfa774d2b3b91588928f8dcf276538 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_UNICODE_LITERALS, mod_consts.const_str_digest_2d61ecf5fd4b878bc618f4ca69703c16, mod_consts.const_str_digest_2d61ecf5fd4b878bc618f4ca69703c16, NULL, NULL, 0, 0, 0);
code_objects_d1b82bc1f3a57c435da59bd15e61bce2 = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, mod_consts.const_str_plain_compress, mod_consts.const_str_plain_compress, mod_consts.const_tuple_str_plain_data_str_plain_level_str_plain_cctx_tuple, NULL, 2, 0, 0);
code_objects_03e28bcf7ef717ba2419b1df38a0ae2f = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, mod_consts.const_str_plain_decompress, mod_consts.const_str_plain_decompress, mod_consts.const_tuple_str_plain_data_str_plain_max_output_size_str_plain_dctx_tuple, NULL, 2, 0, 0);
code_objects_aea180bece92b8fd0fc28ffff248a320 = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_UNICODE_LITERALS, const_str_plain_open, const_str_plain_open, mod_consts.const_tuple_7db67ce0a59bb6e8098a3d7af14b2d35_tuple, NULL, 8, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_zstandard$$$function__1_open(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_zstandard$$$function__2_compress(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_zstandard$$$function__3_decompress(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_zstandard$$$function__1_open(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_filename = python_pars[0];
PyObject *par_mode = python_pars[1];
PyObject *par_cctx = python_pars[2];
PyObject *par_dctx = python_pars[3];
PyObject *par_encoding = python_pars[4];
PyObject *par_errors = python_pars[5];
PyObject *par_newline = python_pars[6];
PyObject *par_closefd = python_pars[7];
PyObject *var_normalized_mode = NULL;
PyObject *var_open_mode = NULL;
PyObject *var_raw_open_mode = NULL;
PyObject *var_types = NULL;
PyObject *var_inner_fh = NULL;
PyObject *var_fh = NULL;
struct Nuitka_FrameObject *frame_frame_zstandard$$$function__1_open;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_zstandard$$$function__1_open = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_zstandard$$$function__1_open)) {
    Py_XDECREF(cache_frame_frame_zstandard$$$function__1_open);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_zstandard$$$function__1_open == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_zstandard$$$function__1_open = MAKE_FUNCTION_FRAME(tstate, code_objects_aea180bece92b8fd0fc28ffff248a320, module_zstandard, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_zstandard$$$function__1_open->m_type_description == NULL);
frame_frame_zstandard$$$function__1_open = cache_frame_frame_zstandard$$$function__1_open;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_zstandard$$$function__1_open);
assert(Py_REFCNT(frame_frame_zstandard$$$function__1_open) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_mode);
tmp_expression_value_1 = par_mode;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_replace);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_zstandard$$$function__1_open->m_frame.f_lineno = 138;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_t_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_normalized_mode == NULL);
var_normalized_mode = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_normalized_mode);
tmp_cmp_expr_left_1 = var_normalized_mode;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_str_plain_r_str_plain_rb_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooooooooo";
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
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_2;
CHECK_OBJECT(par_dctx);
tmp_or_left_value_1 = par_dctx;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_called_value_2 = module_var_accessor_zstandard$ZstdDecompressor(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ZstdDecompressor);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_zstandard$$$function__1_open->m_frame.f_lineno = 141;
tmp_or_right_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assign_source_2 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = par_dctx;
    assert(old != NULL);
    par_dctx = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_str_plain_r;
assert(var_open_mode == NULL);
Py_INCREF(tmp_assign_source_3);
var_open_mode = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = const_str_plain_rb;
assert(var_raw_open_mode == NULL);
Py_INCREF(tmp_assign_source_4);
var_raw_open_mode = tmp_assign_source_4;
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_normalized_mode);
tmp_cmp_expr_left_2 = var_normalized_mode;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_aeb37cfec10fb3422ef0b61113a6cb0a_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_5;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_called_value_3;
CHECK_OBJECT(par_cctx);
tmp_or_left_value_2 = par_cctx;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_called_value_3 = module_var_accessor_zstandard$ZstdCompressor(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ZstdCompressor);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_zstandard$$$function__1_open->m_frame.f_lineno = 145;
tmp_or_right_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_assign_source_5 = tmp_or_left_value_2;
or_end_2:;
{
    PyObject *old = par_cctx;
    assert(old != NULL);
    par_cctx = tmp_assign_source_5;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = const_str_plain_w;
assert(var_open_mode == NULL);
Py_INCREF(tmp_assign_source_6);
var_open_mode = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(var_normalized_mode);
tmp_assign_source_7 = var_normalized_mode;
assert(var_raw_open_mode == NULL);
Py_INCREF(tmp_assign_source_7);
var_raw_open_mode = tmp_assign_source_7;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_raw_open_mode);
tmp_expression_value_2 = var_raw_open_mode;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_endswith);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_zstandard$$$function__1_open->m_frame.f_lineno = 148;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_b_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooooooooooo";
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
{
PyObject *tmp_assign_source_8;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_raw_open_mode);
tmp_add_expr_left_1 = var_raw_open_mode;
tmp_add_expr_right_1 = const_str_plain_b;
tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_raw_open_mode;
    assert(old != NULL);
    var_raw_open_mode = tmp_assign_source_8;
    Py_DECREF(old);
}

}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_called_value_5 = module_var_accessor_zstandard$ValueError(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ValueError);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_ad5011e256ed9cce28d3209553d9f1ad;
CHECK_OBJECT(par_mode);
tmp_kw_call_arg_value_1_1 = par_mode;
frame_frame_zstandard$$$function__1_open->m_frame.f_lineno = 151;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_zstandard$$$function__1_open->m_frame.f_lineno = 151;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 151;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_2:;
branch_end_1:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_1;
tmp_called_value_6 = module_var_accessor_zstandard$hasattr(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hasattr);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = IMPORT_HARD_OS();
assert(!(tmp_args_element_value_2 == NULL));
tmp_args_element_value_3 = mod_consts.const_str_plain_PathLike;
frame_frame_zstandard$$$function__1_open->m_frame.f_lineno = 153;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 153;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_zstandard$str(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM0(tmp_assign_source_9, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_zstandard$bytes(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_bytes);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "oooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_assign_source_9, 1, tmp_tuple_element_1);
tmp_expression_value_3 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_3 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_PathLike);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_9, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_9);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
assert(var_types == NULL);
var_types = tmp_assign_source_9;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = module_var_accessor_zstandard$str(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_10, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_zstandard$bytes(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_bytes);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "oooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_assign_source_10, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_assign_source_10);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
assert(var_types == NULL);
var_types = tmp_assign_source_10;
}
branch_end_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
int tmp_truth_name_2;
tmp_called_value_7 = module_var_accessor_zstandard$isinstance(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isinstance);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_filename);
tmp_args_element_value_4 = par_filename;
CHECK_OBJECT(var_types);
tmp_args_element_value_5 = var_types;
frame_frame_zstandard$$$function__1_open->m_frame.f_lineno = 158;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 158;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
CHECK_OBJECT(par_filename);
tmp_open_filename_1 = par_filename;
if (var_raw_open_mode == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_raw_open_mode);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 159;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_open_mode_1 = var_raw_open_mode;
tmp_assign_source_11 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_inner_fh == NULL);
var_inner_fh = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = Py_True;
{
    PyObject *old = par_closefd;
    assert(old != NULL);
    par_closefd = tmp_assign_source_12;
    Py_INCREF(par_closefd);
    Py_DECREF(old);
}

}
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
int tmp_truth_name_3;
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
int tmp_truth_name_4;
tmp_called_value_8 = module_var_accessor_zstandard$hasattr(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hasattr);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_filename);
tmp_args_element_value_6 = par_filename;
tmp_args_element_value_7 = const_str_plain_read;
frame_frame_zstandard$$$function__1_open->m_frame.f_lineno = 161;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 161;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
tmp_called_value_9 = module_var_accessor_zstandard$hasattr(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hasattr);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_filename);
tmp_args_element_value_8 = par_filename;
tmp_args_element_value_9 = mod_consts.const_str_plain_write;
frame_frame_zstandard$$$function__1_open->m_frame.f_lineno = 161;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 161;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
tmp_condition_result_6 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_condition_result_6 = tmp_or_left_value_3;
or_end_3:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(par_filename);
tmp_assign_source_13 = par_filename;
assert(var_inner_fh == NULL);
Py_INCREF(tmp_assign_source_13);
var_inner_fh = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_10;
tmp_called_value_10 = module_var_accessor_zstandard$bool(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bool);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_closefd);
tmp_args_element_value_10 = par_closefd;
frame_frame_zstandard$$$function__1_open->m_frame.f_lineno = 163;
tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_closefd;
    assert(old != NULL);
    par_closefd = tmp_assign_source_14;
    Py_DECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_11;
tmp_called_value_11 = module_var_accessor_zstandard$TypeError(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeError);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_zstandard$$$function__1_open->m_frame.f_lineno = 165;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_str_digest_57fa3751b73d9c362cbb016189900078_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 165;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_6:;
branch_end_5:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_open_mode);
tmp_cmp_expr_left_3 = var_open_mode;
tmp_cmp_expr_right_3 = const_str_plain_r;
tmp_condition_result_7 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(par_dctx);
tmp_expression_value_4 = par_dctx;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_stream_reader);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_inner_fh);
tmp_kw_call_arg_value_0_2 = var_inner_fh;
CHECK_OBJECT(par_closefd);
tmp_kw_call_dict_value_0_1 = par_closefd;
frame_frame_zstandard$$$function__1_open->m_frame.f_lineno = 170;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_12, args, kw_values, mod_consts.const_tuple_str_plain_closefd_tuple);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_fh == NULL);
var_fh = tmp_assign_source_15;
}
goto branch_end_7;
branch_no_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_open_mode);
tmp_cmp_expr_left_4 = var_open_mode;
tmp_cmp_expr_right_4 = const_str_plain_w;
tmp_condition_result_8 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_2;
CHECK_OBJECT(par_cctx);
tmp_expression_value_5 = par_cctx;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_stream_writer);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_inner_fh);
tmp_kw_call_arg_value_0_3 = var_inner_fh;
CHECK_OBJECT(par_closefd);
tmp_kw_call_dict_value_0_2 = par_closefd;
frame_frame_zstandard$$$function__1_open->m_frame.f_lineno = 172;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_13, args, kw_values, mod_consts.const_tuple_str_plain_closefd_tuple);
}

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_fh == NULL);
var_fh = tmp_assign_source_16;
}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_14;
tmp_called_value_14 = module_var_accessor_zstandard$RuntimeError(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RuntimeError);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_zstandard$$$function__1_open->m_frame.f_lineno = 174;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_14, mod_consts.const_tuple_str_digest_dbe47c372bbde0db2f3e375f0d52fa0c_tuple);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 174;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_8:;
branch_end_7:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = const_str_plain_b;
CHECK_OBJECT(var_normalized_mode);
tmp_cmp_expr_right_5 = var_normalized_mode;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_expression_value_6 = IMPORT_HARD_IO();
assert(!(tmp_expression_value_6 == NULL));
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_TextIOWrapper);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_fh);
tmp_kw_call_arg_value_0_4 = var_fh;
CHECK_OBJECT(par_encoding);
tmp_kw_call_dict_value_0_3 = par_encoding;
CHECK_OBJECT(par_errors);
tmp_kw_call_dict_value_1_1 = par_errors;
CHECK_OBJECT(par_newline);
tmp_kw_call_dict_value_2_1 = par_newline;
frame_frame_zstandard$$$function__1_open->m_frame.f_lineno = 177;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_15, args, kw_values, mod_consts.const_tuple_str_plain_encoding_str_plain_errors_str_plain_newline_tuple);
}

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_9;
branch_no_9:;
CHECK_OBJECT(var_fh);
tmp_return_value = var_fh;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_9:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_zstandard$$$function__1_open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_zstandard$$$function__1_open->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_zstandard$$$function__1_open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_zstandard$$$function__1_open,
    type_description_1,
    par_filename,
    par_mode,
    par_cctx,
    par_dctx,
    par_encoding,
    par_errors,
    par_newline,
    par_closefd,
    var_normalized_mode,
    var_open_mode,
    var_raw_open_mode,
    var_types,
    var_inner_fh,
    var_fh
);


// Release cached frame if used for exception.
if (frame_frame_zstandard$$$function__1_open == cache_frame_frame_zstandard$$$function__1_open) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_zstandard$$$function__1_open);
    cache_frame_frame_zstandard$$$function__1_open = NULL;
}

assertFrameObject(frame_frame_zstandard$$$function__1_open);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cctx);
CHECK_OBJECT(par_cctx);
Py_DECREF(par_cctx);
par_cctx = NULL;
CHECK_OBJECT(par_dctx);
CHECK_OBJECT(par_dctx);
Py_DECREF(par_dctx);
par_dctx = NULL;
CHECK_OBJECT(par_closefd);
CHECK_OBJECT(par_closefd);
Py_DECREF(par_closefd);
par_closefd = NULL;
CHECK_OBJECT(var_normalized_mode);
CHECK_OBJECT(var_normalized_mode);
Py_DECREF(var_normalized_mode);
var_normalized_mode = NULL;
CHECK_OBJECT(var_open_mode);
CHECK_OBJECT(var_open_mode);
Py_DECREF(var_open_mode);
var_open_mode = NULL;
Py_XDECREF(var_raw_open_mode);
var_raw_open_mode = NULL;
CHECK_OBJECT(var_types);
CHECK_OBJECT(var_types);
Py_DECREF(var_types);
var_types = NULL;
CHECK_OBJECT(var_inner_fh);
CHECK_OBJECT(var_inner_fh);
Py_DECREF(var_inner_fh);
var_inner_fh = NULL;
CHECK_OBJECT(var_fh);
CHECK_OBJECT(var_fh);
Py_DECREF(var_fh);
var_fh = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_cctx);
par_cctx = NULL;
Py_XDECREF(par_dctx);
par_dctx = NULL;
Py_XDECREF(par_closefd);
par_closefd = NULL;
Py_XDECREF(var_normalized_mode);
var_normalized_mode = NULL;
Py_XDECREF(var_open_mode);
var_open_mode = NULL;
Py_XDECREF(var_raw_open_mode);
var_raw_open_mode = NULL;
Py_XDECREF(var_types);
var_types = NULL;
Py_XDECREF(var_inner_fh);
var_inner_fh = NULL;
Py_XDECREF(var_fh);
var_fh = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_zstandard$$$function__2_compress(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_data = python_pars[0];
PyObject *par_level = python_pars[1];
PyObject *var_cctx = NULL;
struct Nuitka_FrameObject *frame_frame_zstandard$$$function__2_compress;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_zstandard$$$function__2_compress = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_zstandard$$$function__2_compress)) {
    Py_XDECREF(cache_frame_frame_zstandard$$$function__2_compress);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_zstandard$$$function__2_compress == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_zstandard$$$function__2_compress = MAKE_FUNCTION_FRAME(tstate, code_objects_d1b82bc1f3a57c435da59bd15e61bce2, module_zstandard, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_zstandard$$$function__2_compress->m_type_description == NULL);
frame_frame_zstandard$$$function__2_compress = cache_frame_frame_zstandard$$$function__2_compress;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_zstandard$$$function__2_compress);
assert(Py_REFCNT(frame_frame_zstandard$$$function__2_compress) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
tmp_called_value_1 = module_var_accessor_zstandard$ZstdCompressor(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ZstdCompressor);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_level);
tmp_kw_call_value_0_1 = par_level;
frame_frame_zstandard$$$function__2_compress->m_frame.f_lineno = 197;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_level_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_cctx == NULL);
var_cctx = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_cctx);
tmp_called_instance_1 = var_cctx;
CHECK_OBJECT(par_data);
tmp_args_element_value_1 = par_data;
frame_frame_zstandard$$$function__2_compress->m_frame.f_lineno = 199;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_compress, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_zstandard$$$function__2_compress, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_zstandard$$$function__2_compress->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_zstandard$$$function__2_compress, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_zstandard$$$function__2_compress,
    type_description_1,
    par_data,
    par_level,
    var_cctx
);


// Release cached frame if used for exception.
if (frame_frame_zstandard$$$function__2_compress == cache_frame_frame_zstandard$$$function__2_compress) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_zstandard$$$function__2_compress);
    cache_frame_frame_zstandard$$$function__2_compress = NULL;
}

assertFrameObject(frame_frame_zstandard$$$function__2_compress);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cctx);
CHECK_OBJECT(var_cctx);
Py_DECREF(var_cctx);
var_cctx = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cctx);
var_cctx = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_level);
Py_DECREF(par_level);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_level);
Py_DECREF(par_level);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_zstandard$$$function__3_decompress(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_data = python_pars[0];
PyObject *par_max_output_size = python_pars[1];
PyObject *var_dctx = NULL;
struct Nuitka_FrameObject *frame_frame_zstandard$$$function__3_decompress;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_zstandard$$$function__3_decompress = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_zstandard$$$function__3_decompress)) {
    Py_XDECREF(cache_frame_frame_zstandard$$$function__3_decompress);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_zstandard$$$function__3_decompress == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_zstandard$$$function__3_decompress = MAKE_FUNCTION_FRAME(tstate, code_objects_03e28bcf7ef717ba2419b1df38a0ae2f, module_zstandard, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_zstandard$$$function__3_decompress->m_type_description == NULL);
frame_frame_zstandard$$$function__3_decompress = cache_frame_frame_zstandard$$$function__3_decompress;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_zstandard$$$function__3_decompress);
assert(Py_REFCNT(frame_frame_zstandard$$$function__3_decompress) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_zstandard$ZstdDecompressor(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ZstdDecompressor);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_zstandard$$$function__3_decompress->m_frame.f_lineno = 215;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_dctx == NULL);
var_dctx = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(var_dctx);
tmp_expression_value_1 = var_dctx;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decompress);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_kw_call_arg_value_0_1 = par_data;
CHECK_OBJECT(par_max_output_size);
tmp_kw_call_dict_value_0_1 = par_max_output_size;
frame_frame_zstandard$$$function__3_decompress->m_frame.f_lineno = 217;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_max_output_size_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_zstandard$$$function__3_decompress, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_zstandard$$$function__3_decompress->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_zstandard$$$function__3_decompress, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_zstandard$$$function__3_decompress,
    type_description_1,
    par_data,
    par_max_output_size,
    var_dctx
);


// Release cached frame if used for exception.
if (frame_frame_zstandard$$$function__3_decompress == cache_frame_frame_zstandard$$$function__3_decompress) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_zstandard$$$function__3_decompress);
    cache_frame_frame_zstandard$$$function__3_decompress = NULL;
}

assertFrameObject(frame_frame_zstandard$$$function__3_decompress);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_dctx);
CHECK_OBJECT(var_dctx);
Py_DECREF(var_dctx);
var_dctx = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_dctx);
var_dctx = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_max_output_size);
Py_DECREF(par_max_output_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_max_output_size);
Py_DECREF(par_max_output_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_zstandard$$$function__1_open(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_zstandard$$$function__1_open,
        const_str_plain_open,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_aea180bece92b8fd0fc28ffff248a320,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_zstandard,
        mod_consts.const_str_digest_c00e4ff52551dc82e68707c522520d5a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zstandard$$$function__2_compress(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_zstandard$$$function__2_compress,
        mod_consts.const_str_plain_compress,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d1b82bc1f3a57c435da59bd15e61bce2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_zstandard,
        mod_consts.const_str_digest_e0691f13a0de365a67c3ca6d8157fe53,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_zstandard$$$function__3_decompress(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_zstandard$$$function__3_decompress,
        mod_consts.const_str_plain_decompress,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_03e28bcf7ef717ba2419b1df38a0ae2f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_zstandard,
        mod_consts.const_str_digest_89e5c1815874e22553f58084070b7b72,
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

static function_impl_code const function_table_zstandard[] = {
impl_zstandard$$$function__1_open,
impl_zstandard$$$function__2_compress,
impl_zstandard$$$function__3_decompress,
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

    return Nuitka_Function_GetFunctionState(function, function_table_zstandard);
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
        module_zstandard,
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
        function_table_zstandard,
        sizeof(function_table_zstandard) / sizeof(function_impl_code)
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
static char const *module_full_name = "zstandard";
#endif

// Internal entry point for module code.
PyObject *module_code_zstandard(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("zstandard");

    // Store the module for future use.
    module_zstandard = module;

    moduledict_zstandard = MODULE_DICT(module_zstandard);

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
        PRINT_STRING("zstandard: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("zstandard: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("zstandard: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "zstandard" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initzstandard\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_zstandard,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_zstandard,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_zstandard,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_zstandard,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_zstandard,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_zstandard);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_zstandard);
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

        UPDATE_STRING_DICT1(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_zstandard;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_adbb964f3057cc7aecbd02eaf6244378;
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_zstandard = MAKE_MODULE_FRAME(code_objects_6ccfa774d2b3b91588928f8dcf276538, module_zstandard);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_zstandard);
assert(Py_REFCNT(frame_frame_zstandard) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_zstandard->m_frame.f_lineno = 1;
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
frame_frame_zstandard->m_frame.f_lineno = 1;
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
frame_frame_zstandard->m_frame.f_lineno = 1;
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
frame_frame_zstandard->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_61ab2408881f3ebc14c2d67b12d33c53_tuple);

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
UPDATE_STRING_DICT1(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_zstandard$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_zstandard$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_zstandard$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_zstandard$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD___FUTURE__();
assert(!(tmp_assign_source_5 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_5);
tmp_import_from_1__module = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_absolute_import);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_absolute_import, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_unicode_literals);
}
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT1(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_unicode_literals, tmp_assign_source_7);
}
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_BUILTINS();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_builtins, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_10 == NULL));
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_platform;
tmp_globals_arg_value_1 = (PyObject *)moduledict_zstandard;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_zstandard->m_frame.f_lineno = 20;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_platform, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_12 == NULL));
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_2 = (PyObject *)moduledict_zstandard;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Buffer_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_zstandard->m_frame.f_lineno = 24;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_zstandard,
        mod_consts.const_str_plain_Buffer,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Buffer);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_Buffer, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
tmp_expression_value_5 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_5 == NULL));
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_environ);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
frame_frame_zstandard->m_frame.f_lineno = 40;
tmp_expression_value_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_PYTHON_ZSTANDARD_IMPORT_POLICY_str_plain_default_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
frame_frame_zstandard->m_frame.f_lineno = 40;
tmp_assign_source_14 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain__module_policy, tmp_assign_source_14);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_zstandard$_module_policy(tstate);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_default;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_zstandard$platform(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_platform);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto frame_exception_exit_1;
}
frame_frame_zstandard->m_frame.f_lineno = 45;
tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_python_implementation);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_tuple_str_plain_CPython_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_star_imported_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_backend_c;
tmp_globals_arg_value_3 = (PyObject *)moduledict_zstandard;
tmp_locals_arg_value_3 = (PyObject *)moduledict_zstandard;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_zstandard->m_frame.f_lineno = 46;
tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_star_imported_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_zstandard, true, tmp_star_imported_1);
CHECK_OBJECT(tmp_star_imported_1);
Py_DECREF(tmp_star_imported_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_str_plain_cext;
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_backend, tmp_assign_source_15);
}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_zstandard$platform(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_platform);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto frame_exception_exit_1;
}
frame_frame_zstandard->m_frame.f_lineno = 49;
tmp_cmp_expr_left_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_python_implementation);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_tuple_str_plain_PyPy_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_star_imported_2;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_backend_cffi;
tmp_globals_arg_value_4 = (PyObject *)moduledict_zstandard;
tmp_locals_arg_value_4 = (PyObject *)moduledict_zstandard;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_zstandard->m_frame.f_lineno = 50;
tmp_star_imported_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_star_imported_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_zstandard, true, tmp_star_imported_2);
CHECK_OBJECT(tmp_star_imported_2);
Py_DECREF(tmp_star_imported_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_str_plain_cffi;
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_backend, tmp_assign_source_16);
}
goto branch_end_3;
branch_no_3:;
// Tried code:
{
PyObject *tmp_star_imported_3;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_backend_c;
tmp_globals_arg_value_5 = (PyObject *)moduledict_zstandard;
tmp_locals_arg_value_5 = (PyObject *)moduledict_zstandard;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_zstandard->m_frame.f_lineno = 55;
tmp_star_imported_3 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_star_imported_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_zstandard, true, tmp_star_imported_3);
CHECK_OBJECT(tmp_star_imported_3);
Py_DECREF(tmp_star_imported_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_1;
}
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_str_plain_cext;
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_backend, tmp_assign_source_17);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_zstandard, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_zstandard, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = module_var_accessor_zstandard$ImportError(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImportError);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto try_except_handler_2;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_2;
}
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_star_imported_4;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_backend_cffi;
tmp_globals_arg_value_6 = (PyObject *)moduledict_zstandard;
tmp_locals_arg_value_6 = (PyObject *)moduledict_zstandard;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_zstandard->m_frame.f_lineno = 59;
tmp_star_imported_4 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_star_imported_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_2;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_zstandard, true, tmp_star_imported_4);
CHECK_OBJECT(tmp_star_imported_4);
Py_DECREF(tmp_star_imported_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_2;
}
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = mod_consts.const_str_plain_cffi;
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_backend, tmp_assign_source_18);
}
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 54;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_zstandard->m_frame)) {
        frame_frame_zstandard->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_4:;
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
branch_end_3:;
branch_end_2:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = module_var_accessor_zstandard$_module_policy(tstate);
if (unlikely(tmp_cmp_expr_left_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__module_policy);
}

if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_cffi_fallback;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
// Tried code:
{
PyObject *tmp_star_imported_5;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_backend_c;
tmp_globals_arg_value_7 = (PyObject *)moduledict_zstandard;
tmp_locals_arg_value_7 = (PyObject *)moduledict_zstandard;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_zstandard->m_frame.f_lineno = 64;
tmp_star_imported_5 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_star_imported_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_3;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_zstandard, true, tmp_star_imported_5);
CHECK_OBJECT(tmp_star_imported_5);
Py_DECREF(tmp_star_imported_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_3;
}
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_str_plain_cext;
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_backend, tmp_assign_source_19);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_zstandard, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_zstandard, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = module_var_accessor_zstandard$ImportError(tstate);
if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImportError);
}

if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;

    goto try_except_handler_4;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto try_except_handler_4;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_star_imported_6;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_backend_cffi;
tmp_globals_arg_value_8 = (PyObject *)moduledict_zstandard;
tmp_locals_arg_value_8 = (PyObject *)moduledict_zstandard;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_zstandard->m_frame.f_lineno = 68;
tmp_star_imported_6 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_star_imported_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_4;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_zstandard, true, tmp_star_imported_6);
CHECK_OBJECT(tmp_star_imported_6);
Py_DECREF(tmp_star_imported_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_4;
}
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = mod_consts.const_str_plain_cffi;
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_backend, tmp_assign_source_20);
}
goto branch_end_6;
branch_no_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 63;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_zstandard->m_frame)) {
        frame_frame_zstandard->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_4;
branch_end_6:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_cmp_expr_left_7 = module_var_accessor_zstandard$_module_policy(tstate);
if (unlikely(tmp_cmp_expr_left_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__module_policy);
}

if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = mod_consts.const_str_plain_rust;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

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
PyObject *tmp_star_imported_7;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_backend_rust;
tmp_globals_arg_value_9 = (PyObject *)moduledict_zstandard;
tmp_locals_arg_value_9 = (PyObject *)moduledict_zstandard;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_zstandard->m_frame.f_lineno = 72;
tmp_star_imported_7 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_star_imported_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_zstandard, true, tmp_star_imported_7);
CHECK_OBJECT(tmp_star_imported_7);
Py_DECREF(tmp_star_imported_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = mod_consts.const_str_plain_rust;
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_backend, tmp_assign_source_21);
}
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
tmp_cmp_expr_left_8 = module_var_accessor_zstandard$_module_policy(tstate);
if (unlikely(tmp_cmp_expr_left_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__module_policy);
}

if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = mod_consts.const_str_plain_cext;
tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_star_imported_8;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_backend_c;
tmp_globals_arg_value_10 = (PyObject *)moduledict_zstandard;
tmp_locals_arg_value_10 = (PyObject *)moduledict_zstandard;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_zstandard->m_frame.f_lineno = 76;
tmp_star_imported_8 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_star_imported_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_zstandard, true, tmp_star_imported_8);
CHECK_OBJECT(tmp_star_imported_8);
Py_DECREF(tmp_star_imported_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = mod_consts.const_str_plain_cext;
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_backend, tmp_assign_source_22);
}
goto branch_end_8;
branch_no_8:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = module_var_accessor_zstandard$_module_policy(tstate);
if (unlikely(tmp_cmp_expr_left_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__module_policy);
}

if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = mod_consts.const_str_plain_cffi;
tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto frame_exception_exit_1;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_star_imported_9;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_backend_cffi;
tmp_globals_arg_value_11 = (PyObject *)moduledict_zstandard;
tmp_locals_arg_value_11 = (PyObject *)moduledict_zstandard;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_zstandard->m_frame.f_lineno = 80;
tmp_star_imported_9 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_star_imported_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_zstandard, true, tmp_star_imported_9);
CHECK_OBJECT(tmp_star_imported_9);
Py_DECREF(tmp_star_imported_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = mod_consts.const_str_plain_cffi;
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_backend, tmp_assign_source_23);
}
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
tmp_called_value_5 = module_var_accessor_zstandard$ImportError(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImportError);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;

    goto frame_exception_exit_1;
}
tmp_mod_expr_left_1 = mod_consts.const_str_digest_4125837bec8fa4e30081ccd703402c1c;
tmp_mod_expr_right_1 = module_var_accessor_zstandard$_module_policy(tstate);
if (unlikely(tmp_mod_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__module_policy);
}

if (tmp_mod_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto frame_exception_exit_1;
}
frame_frame_zstandard->m_frame.f_lineno = 84;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 84;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto frame_exception_exit_1;
}
branch_end_9:;
branch_end_8:;
branch_end_7:;
branch_end_5:;
branch_end_1:;
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = mod_consts.const_str_digest_9d3f1e5248ba713ab54726b09cb7d3b2;
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = const_int_0;
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain__MODE_CLOSED, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = const_int_pos_1;
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain__MODE_READ, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain__MODE_WRITE, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_str_plain_rb_none_none_none_none_none_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_28 = MAKE_FUNCTION_zstandard$$$function__1_open(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain_open, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_defaults_2 = mod_consts.const_tuple_int_pos_3_tuple;
tmp_dict_key_1 = mod_consts.const_str_plain_data;
tmp_dict_value_1 = module_var_accessor_zstandard$Buffer(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Buffer);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_level;
tmp_dict_value_1 = module_var_accessor_zstandard$int(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_int);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = module_var_accessor_zstandard$bytes(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_bytes);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_29 = MAKE_FUNCTION_zstandard$$$function__2_compress(tstate, tmp_defaults_2, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_compress, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_defaults_3 = mod_consts.const_tuple_int_0_tuple;
tmp_dict_key_2 = mod_consts.const_str_plain_data;
tmp_dict_value_2 = module_var_accessor_zstandard$Buffer(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Buffer);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_max_output_size;
tmp_dict_value_2 = module_var_accessor_zstandard$int(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_int);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = module_var_accessor_zstandard$bytes(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_bytes);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
Py_INCREF(tmp_defaults_3);

tmp_assign_source_30 = MAKE_FUNCTION_zstandard$$$function__3_decompress(tstate, tmp_defaults_3, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_zstandard, (Nuitka_StringObject *)mod_consts.const_str_plain_decompress, tmp_assign_source_30);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_zstandard, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_zstandard->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_zstandard, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_zstandard);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("zstandard", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "zstandard" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_zstandard);
    return module_zstandard;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_zstandard, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("zstandard", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'numpy$lib$mixins'
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



/* The "module_numpy$lib$mixins" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$mixins;
PyDictObject *moduledict_numpy$lib$mixins;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain___array_ufunc__;
PyObject *const_str_digest_03b9479da2cb79d35b433f57ade72eac;
PyObject *const_str_plain_func;
PyObject *const_str_digest_200b3ee8f1e28ac4e00b6063b3cf3ae1;
PyObject *const_str_plain___;
PyObject *const_str_digest_b44879ad4880ee0b59b69c74bcd4b7d9;
PyObject *const_str_plain__disables_array_ufunc;
PyObject *const_str_plain_ufunc;
PyObject *const_str_digest_27b894da5f34dfe6a2d9f423d0fcd67d;
PyObject *const_str_plain___r;
PyObject *const_str_digest_414e35f1a8f354736e9757f3d0278f57;
PyObject *const_str_digest_da836839c950a10a496f84092f7de47a;
PyObject *const_str_plain___i;
PyObject *const_str_digest_da6baa6d0f995af1be2dec79a5cba153;
PyObject *const_tuple_str_plain_out_tuple;
PyObject *const_str_plain__binary_method;
PyObject *const_str_plain__reflected_binary_method;
PyObject *const_str_plain__inplace_binary_method;
PyObject *const_str_digest_77bc960dfc587ce7c99b8e7660d9152b;
PyObject *const_str_digest_7f9e9b24de4bc26a0cfb6c584c0a228c;
PyObject *const_str_digest_b813bb8ce95d9e22e563f2de89266c16;
PyObject *const_str_digest_f87d580099aeeda2cdaf55e8ac9a83a1;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_218a55714e76c818c59b93d99676c0b2;
PyObject *const_tuple_str_plain_umath_tuple;
PyObject *const_str_plain_umath;
PyObject *const_str_plain_um;
PyObject *const_str_plain_NDArrayOperatorsMixin;
PyObject *const_str_plain__numeric_methods;
PyObject *const_str_plain__unary_method;
PyObject *const_str_digest_ad40be8057f41bf17b5d8199728b8235;
PyObject *const_str_digest_96710a69dfb31ce786e5541683107225;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_60;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___slots__;
PyObject *const_str_plain_less;
PyObject *const_str_plain_lt;
PyObject *const_str_plain___lt__;
PyObject *const_str_plain_less_equal;
PyObject *const_str_plain_le;
PyObject *const_str_plain___le__;
PyObject *const_str_plain_equal;
PyObject *const_str_plain_eq;
PyObject *const_str_plain___eq__;
PyObject *const_str_plain_not_equal;
PyObject *const_str_plain_ne;
PyObject *const_str_plain___ne__;
PyObject *const_str_plain_greater;
PyObject *const_str_plain_gt;
PyObject *const_str_plain___gt__;
PyObject *const_str_plain_greater_equal;
PyObject *const_str_plain_ge;
PyObject *const_str_plain___ge__;
PyObject *const_str_plain_add;
PyObject *const_str_plain___add__;
PyObject *const_str_plain___radd__;
PyObject *const_str_plain___iadd__;
PyObject *const_str_plain_subtract;
PyObject *const_str_plain_sub;
PyObject *const_str_plain___sub__;
PyObject *const_str_plain___rsub__;
PyObject *const_str_plain___isub__;
PyObject *const_str_plain_multiply;
PyObject *const_str_plain_mul;
PyObject *const_str_plain___mul__;
PyObject *const_str_plain___rmul__;
PyObject *const_str_plain___imul__;
PyObject *const_str_plain_matmul;
PyObject *const_str_plain___matmul__;
PyObject *const_str_plain___rmatmul__;
PyObject *const_str_plain___imatmul__;
PyObject *const_str_plain_true_divide;
PyObject *const_str_plain_truediv;
PyObject *const_str_plain___truediv__;
PyObject *const_str_plain___rtruediv__;
PyObject *const_str_plain___itruediv__;
PyObject *const_str_plain_floor_divide;
PyObject *const_str_plain_floordiv;
PyObject *const_str_plain___floordiv__;
PyObject *const_str_plain___rfloordiv__;
PyObject *const_str_plain___ifloordiv__;
PyObject *const_str_plain_remainder;
PyObject *const_str_plain_mod;
PyObject *const_str_plain___mod__;
PyObject *const_str_plain___rmod__;
PyObject *const_str_plain___imod__;
PyObject *const_str_plain_divmod;
PyObject *const_str_plain___divmod__;
PyObject *const_str_plain___rdivmod__;
PyObject *const_str_plain_power;
PyObject *const_str_plain_pow;
PyObject *const_str_plain___pow__;
PyObject *const_str_plain___rpow__;
PyObject *const_str_plain___ipow__;
PyObject *const_str_plain_left_shift;
PyObject *const_str_plain_lshift;
PyObject *const_str_plain___lshift__;
PyObject *const_str_plain___rlshift__;
PyObject *const_str_plain___ilshift__;
PyObject *const_str_plain_right_shift;
PyObject *const_str_plain_rshift;
PyObject *const_str_plain___rshift__;
PyObject *const_str_plain___rrshift__;
PyObject *const_str_plain___irshift__;
PyObject *const_str_plain_bitwise_and;
PyObject *const_str_plain_and;
PyObject *const_str_plain___and__;
PyObject *const_str_plain___rand__;
PyObject *const_str_plain___iand__;
PyObject *const_str_plain_bitwise_xor;
PyObject *const_str_plain_xor;
PyObject *const_str_plain___xor__;
PyObject *const_str_plain___rxor__;
PyObject *const_str_plain___ixor__;
PyObject *const_str_plain_bitwise_or;
PyObject *const_str_plain_or;
PyObject *const_str_plain___or__;
PyObject *const_str_plain___ror__;
PyObject *const_str_plain___ior__;
PyObject *const_str_plain_negative;
PyObject *const_str_plain_neg;
PyObject *const_str_plain___neg__;
PyObject *const_str_plain_positive;
PyObject *const_str_plain_pos;
PyObject *const_str_plain___pos__;
PyObject *const_str_plain_absolute;
PyObject *const_str_plain_abs;
PyObject *const_str_plain___abs__;
PyObject *const_str_plain_invert;
PyObject *const_str_plain___invert__;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_f0556e98775a9e13b6beae1ac5adade6;
PyObject *const_str_digest_5445779948f935a9b1adbbb668b96c8d;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple;
PyObject *const_tuple_str_plain_obj_tuple;
PyObject *const_tuple_str_plain_ufunc_str_plain_name_tuple;
PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_ufunc_tuple;
PyObject *const_tuple_str_plain_ufunc_tuple;
PyObject *const_tuple_str_plain_self_str_plain_ufunc_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[142];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.lib.mixins"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain___array_ufunc__);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_03b9479da2cb79d35b433f57ade72eac);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_func);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_200b3ee8f1e28ac4e00b6063b3cf3ae1);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain___);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_b44879ad4880ee0b59b69c74bcd4b7d9);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__disables_array_ufunc);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_ufunc);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_27b894da5f34dfe6a2d9f423d0fcd67d);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain___r);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_414e35f1a8f354736e9757f3d0278f57);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_da836839c950a10a496f84092f7de47a);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain___i);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_da6baa6d0f995af1be2dec79a5cba153);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__binary_method);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__reflected_binary_method);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__inplace_binary_method);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_77bc960dfc587ce7c99b8e7660d9152b);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_7f9e9b24de4bc26a0cfb6c584c0a228c);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_b813bb8ce95d9e22e563f2de89266c16);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_f87d580099aeeda2cdaf55e8ac9a83a1);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_umath_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_umath);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_um);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_NDArrayOperatorsMixin);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__numeric_methods);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__unary_method);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad40be8057f41bf17b5d8199728b8235);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_96710a69dfb31ce786e5541683107225);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_int_pos_60);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain___slots__);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_less);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_lt);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain___lt__);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_less_equal);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_le);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain___le__);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_equal);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_eq);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain___eq__);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_not_equal);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_ne);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain___ne__);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_greater);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_gt);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain___gt__);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_greater_equal);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_ge);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain___ge__);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain___add__);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain___radd__);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain___iadd__);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_subtract);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_sub);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain___sub__);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain___rsub__);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain___isub__);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiply);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_mul);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain___mul__);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain___rmul__);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain___imul__);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_matmul);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain___matmul__);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain___rmatmul__);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain___imatmul__);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_true_divide);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_truediv);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain___truediv__);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain___rtruediv__);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain___itruediv__);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_floor_divide);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_floordiv);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain___floordiv__);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain___rfloordiv__);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain___ifloordiv__);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_remainder);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_mod);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain___mod__);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain___rmod__);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain___imod__);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_divmod);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain___divmod__);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain___rdivmod__);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_power);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_pow);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain___pow__);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain___rpow__);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain___ipow__);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_left_shift);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_lshift);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain___lshift__);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain___rlshift__);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain___ilshift__);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_right_shift);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_rshift);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain___rshift__);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain___rrshift__);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain___irshift__);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_bitwise_and);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_and);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain___and__);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain___rand__);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain___iand__);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_bitwise_xor);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_xor);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain___xor__);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain___rxor__);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain___ixor__);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_bitwise_or);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_or);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain___or__);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain___ror__);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain___ior__);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_negative);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_neg);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain___neg__);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_positive);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_pos);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain___pos__);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_absolute);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_abs);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain___abs__);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_invert);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain___invert__);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_f0556e98775a9e13b6beae1ac5adade6);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_5445779948f935a9b1adbbb668b96c8d);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_obj_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ufunc_str_plain_name_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_str_plain_ufunc_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ufunc_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_ufunc_tuple);
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
void checkModuleConstants_numpy$lib$mixins(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain___array_ufunc__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___array_ufunc__);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_03b9479da2cb79d35b433f57ade72eac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03b9479da2cb79d35b433f57ade72eac);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_func));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_func);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_200b3ee8f1e28ac4e00b6063b3cf3ae1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_200b3ee8f1e28ac4e00b6063b3cf3ae1);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain___));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_b44879ad4880ee0b59b69c74bcd4b7d9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b44879ad4880ee0b59b69c74bcd4b7d9);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__disables_array_ufunc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__disables_array_ufunc);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_ufunc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ufunc);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_27b894da5f34dfe6a2d9f423d0fcd67d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_27b894da5f34dfe6a2d9f423d0fcd67d);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain___r));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___r);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_414e35f1a8f354736e9757f3d0278f57));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_414e35f1a8f354736e9757f3d0278f57);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_da836839c950a10a496f84092f7de47a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da836839c950a10a496f84092f7de47a);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain___i));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___i);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_da6baa6d0f995af1be2dec79a5cba153));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da6baa6d0f995af1be2dec79a5cba153);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_out_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_out_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__binary_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__binary_method);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__reflected_binary_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__reflected_binary_method);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__inplace_binary_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__inplace_binary_method);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_77bc960dfc587ce7c99b8e7660d9152b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_77bc960dfc587ce7c99b8e7660d9152b);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_7f9e9b24de4bc26a0cfb6c584c0a228c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7f9e9b24de4bc26a0cfb6c584c0a228c);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_b813bb8ce95d9e22e563f2de89266c16));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b813bb8ce95d9e22e563f2de89266c16);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_f87d580099aeeda2cdaf55e8ac9a83a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f87d580099aeeda2cdaf55e8ac9a83a1);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_umath_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_umath_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_umath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_umath);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_um));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_um);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_NDArrayOperatorsMixin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NDArrayOperatorsMixin);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__numeric_methods));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__numeric_methods);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__unary_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unary_method);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad40be8057f41bf17b5d8199728b8235));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ad40be8057f41bf17b5d8199728b8235);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_96710a69dfb31ce786e5541683107225));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_96710a69dfb31ce786e5541683107225);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_int_pos_60));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_60);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain___slots__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___slots__);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_less));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_less);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_lt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lt);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain___lt__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___lt__);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_less_equal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_less_equal);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_le));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_le);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain___le__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___le__);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_equal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_equal);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_eq));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eq);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain___eq__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___eq__);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_not_equal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_not_equal);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_ne));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ne);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain___ne__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ne__);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_greater));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_greater);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_gt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gt);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain___gt__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___gt__);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_greater_equal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_greater_equal);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_ge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ge);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain___ge__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ge__);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain___add__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___add__);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain___radd__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___radd__);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain___iadd__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___iadd__);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_subtract));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subtract);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_sub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sub);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain___sub__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___sub__);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain___rsub__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rsub__);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain___isub__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___isub__);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiply));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multiply);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_mul));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mul);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain___mul__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___mul__);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain___rmul__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rmul__);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain___imul__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___imul__);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_matmul));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_matmul);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain___matmul__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___matmul__);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain___rmatmul__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rmatmul__);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain___imatmul__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___imatmul__);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_true_divide));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_true_divide);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_truediv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_truediv);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain___truediv__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___truediv__);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain___rtruediv__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rtruediv__);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain___itruediv__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___itruediv__);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_floor_divide));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_floor_divide);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_floordiv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_floordiv);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain___floordiv__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___floordiv__);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain___rfloordiv__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rfloordiv__);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain___ifloordiv__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ifloordiv__);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_remainder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remainder);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_mod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mod);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain___mod__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___mod__);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain___rmod__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rmod__);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain___imod__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___imod__);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_divmod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_divmod);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain___divmod__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___divmod__);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain___rdivmod__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rdivmod__);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_power));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_power);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_pow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pow);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain___pow__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pow__);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain___rpow__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rpow__);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain___ipow__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ipow__);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_left_shift));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_left_shift);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_lshift));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lshift);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain___lshift__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___lshift__);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain___rlshift__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rlshift__);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain___ilshift__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ilshift__);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_right_shift));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_right_shift);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_rshift));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rshift);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain___rshift__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rshift__);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain___rrshift__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rrshift__);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain___irshift__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___irshift__);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_bitwise_and));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bitwise_and);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_and));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_and);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain___and__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___and__);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain___rand__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rand__);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain___iand__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___iand__);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_bitwise_xor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bitwise_xor);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_xor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_xor);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain___xor__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___xor__);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain___rxor__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rxor__);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain___ixor__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ixor__);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_bitwise_or));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bitwise_or);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_or));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_or);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain___or__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___or__);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain___ror__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ror__);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain___ior__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ior__);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_negative));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_negative);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_neg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_neg);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain___neg__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___neg__);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_positive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_positive);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_pos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pos);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain___pos__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pos__);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_absolute));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_absolute);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_abs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abs);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain___abs__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___abs__);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_invert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_invert);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain___invert__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___invert__);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_f0556e98775a9e13b6beae1ac5adade6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f0556e98775a9e13b6beae1ac5adade6);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_5445779948f935a9b1adbbb668b96c8d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5445779948f935a9b1adbbb668b96c8d);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_obj_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_obj_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ufunc_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ufunc_str_plain_name_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_str_plain_ufunc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_other_str_plain_ufunc_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ufunc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ufunc_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_ufunc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_ufunc_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 8
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
static PyObject *module_var_accessor_numpy$lib$mixins$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$mixins->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$mixins->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$mixins->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$mixins$_binary_method(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$mixins->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$mixins->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__binary_method);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$mixins->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__binary_method);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__binary_method, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__binary_method);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__binary_method, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__binary_method);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__binary_method);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__binary_method);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$mixins$_disables_array_ufunc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$mixins->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$mixins->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__disables_array_ufunc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$mixins->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__disables_array_ufunc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__disables_array_ufunc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__disables_array_ufunc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__disables_array_ufunc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__disables_array_ufunc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__disables_array_ufunc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__disables_array_ufunc);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$mixins$_inplace_binary_method(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$mixins->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$mixins->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__inplace_binary_method);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$mixins->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__inplace_binary_method);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__inplace_binary_method, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__inplace_binary_method);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__inplace_binary_method, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__inplace_binary_method);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__inplace_binary_method);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__inplace_binary_method);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$mixins$_numeric_methods(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$mixins->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$mixins->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__numeric_methods);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$mixins->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__numeric_methods);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__numeric_methods, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__numeric_methods);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__numeric_methods, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__numeric_methods);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__numeric_methods);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__numeric_methods);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$mixins$_reflected_binary_method(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$mixins->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$mixins->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__reflected_binary_method);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$mixins->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__reflected_binary_method);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__reflected_binary_method, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__reflected_binary_method);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__reflected_binary_method, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__reflected_binary_method);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__reflected_binary_method);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__reflected_binary_method);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$mixins$_unary_method(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$mixins->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$mixins->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__unary_method);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$mixins->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unary_method);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unary_method, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unary_method);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unary_method, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__unary_method);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__unary_method);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__unary_method);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$mixins$um(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$mixins->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$mixins->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain_um);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$mixins->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_um);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_um, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_um);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_um, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain_um);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain_um);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_um);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_435e7696c4330ccb8470be2c33c77785;
static PyCodeObject *code_objects_6234bcecc45252c8ec0d1fc3d180415a;
static PyCodeObject *code_objects_427342bfc5c9a850bea6f153cf7189bb;
static PyCodeObject *code_objects_931f5421f12db36fe2c2e25f69ab855d;
static PyCodeObject *code_objects_f0d60e78314ce1d6bc835543322a2041;
static PyCodeObject *code_objects_40bc23c2f0b617e3450d2a344e7683e4;
static PyCodeObject *code_objects_b2e226628f60d0720fb603e346d89885;
static PyCodeObject *code_objects_962623ef90d45fa80d1d78eb2770251d;
static PyCodeObject *code_objects_8237474da549febda5e06d5f44aceead;
static PyCodeObject *code_objects_fb93431d41168f0b2f414899fec0ebe7;
static PyCodeObject *code_objects_62d59b4dca9e17d77708be2e51c0c819;
static PyCodeObject *code_objects_80b6fbe9af5447b91819c8e45508bdbf;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_f0556e98775a9e13b6beae1ac5adade6); CHECK_OBJECT(module_filename_obj);
code_objects_435e7696c4330ccb8470be2c33c77785 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_5445779948f935a9b1adbbb668b96c8d, mod_consts.const_str_digest_5445779948f935a9b1adbbb668b96c8d, NULL, NULL, 0, 0, 0);
code_objects_6234bcecc45252c8ec0d1fc3d180415a = MAKE_CODE_OBJECT(module_filename_obj, 60, 0, mod_consts.const_str_plain_NDArrayOperatorsMixin, mod_consts.const_str_plain_NDArrayOperatorsMixin, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_427342bfc5c9a850bea6f153cf7189bb = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__binary_method, mod_consts.const_str_plain__binary_method, mod_consts.const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple, NULL, 2, 0, 0);
code_objects_931f5421f12db36fe2c2e25f69ab855d = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__disables_array_ufunc, mod_consts.const_str_plain__disables_array_ufunc, mod_consts.const_tuple_str_plain_obj_tuple, NULL, 1, 0, 0);
code_objects_f0d60e78314ce1d6bc835543322a2041 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__inplace_binary_method, mod_consts.const_str_plain__inplace_binary_method, mod_consts.const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple, NULL, 2, 0, 0);
code_objects_40bc23c2f0b617e3450d2a344e7683e4 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__numeric_methods, mod_consts.const_str_plain__numeric_methods, mod_consts.const_tuple_str_plain_ufunc_str_plain_name_tuple, NULL, 2, 0, 0);
code_objects_b2e226628f60d0720fb603e346d89885 = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__reflected_binary_method, mod_consts.const_str_plain__reflected_binary_method, mod_consts.const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple, NULL, 2, 0, 0);
code_objects_962623ef90d45fa80d1d78eb2770251d = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__unary_method, mod_consts.const_str_plain__unary_method, mod_consts.const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple, NULL, 2, 0, 0);
code_objects_8237474da549febda5e06d5f44aceead = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_func, mod_consts.const_str_digest_200b3ee8f1e28ac4e00b6063b3cf3ae1, mod_consts.const_tuple_str_plain_self_str_plain_other_str_plain_ufunc_tuple, mod_consts.const_tuple_str_plain_ufunc_tuple, 2, 0, 0);
code_objects_fb93431d41168f0b2f414899fec0ebe7 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_func, mod_consts.const_str_digest_da836839c950a10a496f84092f7de47a, mod_consts.const_tuple_str_plain_self_str_plain_other_str_plain_ufunc_tuple, mod_consts.const_tuple_str_plain_ufunc_tuple, 2, 0, 0);
code_objects_62d59b4dca9e17d77708be2e51c0c819 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_func, mod_consts.const_str_digest_27b894da5f34dfe6a2d9f423d0fcd67d, mod_consts.const_tuple_str_plain_self_str_plain_other_str_plain_ufunc_tuple, mod_consts.const_tuple_str_plain_ufunc_tuple, 2, 0, 0);
code_objects_80b6fbe9af5447b91819c8e45508bdbf = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_func, mod_consts.const_str_digest_7f9e9b24de4bc26a0cfb6c584c0a228c, mod_consts.const_tuple_str_plain_self_str_plain_ufunc_tuple, mod_consts.const_tuple_str_plain_ufunc_tuple, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__1__disables_array_ufunc(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__5__numeric_methods(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_numpy$lib$mixins$$$function__1__disables_array_ufunc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_obj = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc = MAKE_FUNCTION_FRAME(tstate, code_objects_931f5421f12db36fe2c2e25f69ab855d, module_numpy$lib$mixins, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc->m_type_description == NULL);
frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc = cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc);
assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_obj);
tmp_expression_value_1 = par_obj;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___array_ufunc__);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_AttributeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 11;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc->m_frame)) {
        frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
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
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc,
    type_description_1,
    par_obj
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc == cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc);
    cache_frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc = NULL;
}

assertFrameObject(frame_frame_numpy$lib$mixins$$$function__1__disables_array_ufunc);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__2__binary_method(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_ufunc = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_name = python_pars[1];
PyObject *var_func = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__2__binary_method;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_ufunc;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func(tstate, tmp_closure_1);

assert(var_func == NULL);
var_func = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method = MAKE_FUNCTION_FRAME(tstate, code_objects_427342bfc5c9a850bea6f153cf7189bb, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method->m_type_description == NULL);
frame_frame_numpy$lib$mixins$$$function__2__binary_method = cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__2__binary_method);
assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__2__binary_method) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_assattr_target_1;
tmp_tuple_element_1 = mod_consts.const_str_plain___;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_name);
tmp_format_value_1 = par_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "coo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_plain___;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assattr_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assattr_value_1 == NULL));
CHECK_OBJECT(var_func);
tmp_assattr_target_1 = var_func;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain___name__, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "coo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__2__binary_method, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__2__binary_method->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__2__binary_method, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$mixins$$$function__2__binary_method,
    type_description_1,
    par_ufunc,
    par_name,
    var_func
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$mixins$$$function__2__binary_method == cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method);
    cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method = NULL;
}

assertFrameObject(frame_frame_numpy$lib$mixins$$$function__2__binary_method);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_func);
tmp_return_value = var_func;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_ufunc);
CHECK_OBJECT(par_ufunc);
Py_DECREF(par_ufunc);
par_ufunc = NULL;
CHECK_OBJECT(var_func);
CHECK_OBJECT(var_func);
Py_DECREF(var_func);
var_func = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_ufunc);
CHECK_OBJECT(par_ufunc);
Py_DECREF(par_ufunc);
par_ufunc = NULL;
CHECK_OBJECT(var_func);
CHECK_OBJECT(var_func);
Py_DECREF(var_func);
var_func = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func = MAKE_FUNCTION_FRAME(tstate, code_objects_8237474da549febda5e06d5f44aceead, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func->m_type_description == NULL);
frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func = cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func);
assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$mixins$_disables_array_ufunc(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__disables_array_ufunc);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_args_element_value_1 = par_other;
frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func->m_frame.f_lineno = 20;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 20;
type_description_1 = "ooc";
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
tmp_return_value = Py_NotImplemented;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ufunc);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 22;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func->m_frame.f_lineno = 22;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func,
    type_description_1,
    par_self,
    par_other,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func == cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func);
    cache_frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func = NULL;
}

assertFrameObject(frame_frame_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func);

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


static PyObject *impl_numpy$lib$mixins$$$function__3__reflected_binary_method(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_ufunc = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_name = python_pars[1];
PyObject *var_func = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_ufunc;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func(tstate, tmp_closure_1);

assert(var_func == NULL);
var_func = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method = MAKE_FUNCTION_FRAME(tstate, code_objects_b2e226628f60d0720fb603e346d89885, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method->m_type_description == NULL);
frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method = cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method);
assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_assattr_target_1;
tmp_tuple_element_1 = mod_consts.const_str_plain___r;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_name);
tmp_format_value_1 = par_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "coo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_plain___;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assattr_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assattr_value_1 == NULL));
CHECK_OBJECT(var_func);
tmp_assattr_target_1 = var_func;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain___name__, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "coo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method,
    type_description_1,
    par_ufunc,
    par_name,
    var_func
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method == cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method);
    cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method = NULL;
}

assertFrameObject(frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_func);
tmp_return_value = var_func;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_ufunc);
CHECK_OBJECT(par_ufunc);
Py_DECREF(par_ufunc);
par_ufunc = NULL;
CHECK_OBJECT(var_func);
CHECK_OBJECT(var_func);
Py_DECREF(var_func);
var_func = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_ufunc);
CHECK_OBJECT(par_ufunc);
Py_DECREF(par_ufunc);
par_ufunc = NULL;
CHECK_OBJECT(var_func);
CHECK_OBJECT(var_func);
Py_DECREF(var_func);
var_func = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func = MAKE_FUNCTION_FRAME(tstate, code_objects_62d59b4dca9e17d77708be2e51c0c819, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func->m_type_description == NULL);
frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func = cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func);
assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$mixins$_disables_array_ufunc(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__disables_array_ufunc);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_args_element_value_1 = par_other;
frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func->m_frame.f_lineno = 30;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 30;
type_description_1 = "ooc";
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
tmp_return_value = Py_NotImplemented;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ufunc);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 32;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_other);
tmp_args_element_value_2 = par_other;
CHECK_OBJECT(par_self);
tmp_args_element_value_3 = par_self;
frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func->m_frame.f_lineno = 32;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func,
    type_description_1,
    par_self,
    par_other,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func == cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func);
    cache_frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func = NULL;
}

assertFrameObject(frame_frame_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func);

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


static PyObject *impl_numpy$lib$mixins$$$function__4__inplace_binary_method(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_ufunc = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_name = python_pars[1];
PyObject *var_func = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_ufunc;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func(tstate, tmp_closure_1);

assert(var_func == NULL);
var_func = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method = MAKE_FUNCTION_FRAME(tstate, code_objects_f0d60e78314ce1d6bc835543322a2041, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method->m_type_description == NULL);
frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method = cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method);
assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_assattr_target_1;
tmp_tuple_element_1 = mod_consts.const_str_plain___i;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_name);
tmp_format_value_1 = par_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "coo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_plain___;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assattr_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assattr_value_1 == NULL));
CHECK_OBJECT(var_func);
tmp_assattr_target_1 = var_func;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain___name__, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "coo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method,
    type_description_1,
    par_ufunc,
    par_name,
    var_func
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method == cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method);
    cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method = NULL;
}

assertFrameObject(frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_func);
tmp_return_value = var_func;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_ufunc);
CHECK_OBJECT(par_ufunc);
Py_DECREF(par_ufunc);
par_ufunc = NULL;
CHECK_OBJECT(var_func);
CHECK_OBJECT(var_func);
Py_DECREF(var_func);
var_func = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_ufunc);
CHECK_OBJECT(par_ufunc);
Py_DECREF(par_ufunc);
par_ufunc = NULL;
CHECK_OBJECT(var_func);
CHECK_OBJECT(var_func);
Py_DECREF(var_func);
var_func = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func = MAKE_FUNCTION_FRAME(tstate, code_objects_fb93431d41168f0b2f414899fec0ebe7, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func->m_type_description == NULL);
frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func = cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func);
assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_tuple_element_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ufunc);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 40;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_kw_call_arg_value_0_1 = par_self;
CHECK_OBJECT(par_other);
tmp_kw_call_arg_value_1_1 = par_other;
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_kw_call_dict_value_0_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_1, 0, tmp_tuple_element_1);
frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func->m_frame.f_lineno = 40;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_out_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func,
    type_description_1,
    par_self,
    par_other,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func == cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func);
    cache_frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func = NULL;
}

assertFrameObject(frame_frame_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func);

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


static PyObject *impl_numpy$lib$mixins$$$function__5__numeric_methods(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ufunc = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__5__numeric_methods;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods = MAKE_FUNCTION_FRAME(tstate, code_objects_40bc23c2f0b617e3450d2a344e7683e4, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods->m_type_description == NULL);
frame_frame_numpy$lib$mixins$$$function__5__numeric_methods = cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__5__numeric_methods);
assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__5__numeric_methods) == 2);

// Framed code:
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$mixins$_binary_method(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__binary_method);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ufunc);
tmp_args_element_value_1 = par_ufunc;
CHECK_OBJECT(par_name);
tmp_args_element_value_2 = par_name;
frame_frame_numpy$lib$mixins$$$function__5__numeric_methods->m_frame.f_lineno = 47;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
tmp_called_value_2 = module_var_accessor_numpy$lib$mixins$_reflected_binary_method(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__reflected_binary_method);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(par_ufunc);
tmp_args_element_value_3 = par_ufunc;
CHECK_OBJECT(par_name);
tmp_args_element_value_4 = par_name;
frame_frame_numpy$lib$mixins$$$function__5__numeric_methods->m_frame.f_lineno = 48;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
tmp_called_value_3 = module_var_accessor_numpy$lib$mixins$_inplace_binary_method(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__inplace_binary_method);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(par_ufunc);
tmp_args_element_value_5 = par_ufunc;
CHECK_OBJECT(par_name);
tmp_args_element_value_6 = par_name;
frame_frame_numpy$lib$mixins$$$function__5__numeric_methods->m_frame.f_lineno = 49;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__5__numeric_methods, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__5__numeric_methods->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__5__numeric_methods, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$mixins$$$function__5__numeric_methods,
    type_description_1,
    par_ufunc,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$mixins$$$function__5__numeric_methods == cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods);
    cache_frame_frame_numpy$lib$mixins$$$function__5__numeric_methods = NULL;
}

assertFrameObject(frame_frame_numpy$lib$mixins$$$function__5__numeric_methods);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_ufunc);
Py_DECREF(par_ufunc);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ufunc);
Py_DECREF(par_ufunc);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__6__unary_method(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_ufunc = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_name = python_pars[1];
PyObject *var_func = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__6__unary_method;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_ufunc;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func(tstate, tmp_closure_1);

assert(var_func == NULL);
var_func = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method = MAKE_FUNCTION_FRAME(tstate, code_objects_962623ef90d45fa80d1d78eb2770251d, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method->m_type_description == NULL);
frame_frame_numpy$lib$mixins$$$function__6__unary_method = cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__6__unary_method);
assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__6__unary_method) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_assattr_target_1;
tmp_tuple_element_1 = mod_consts.const_str_plain___;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_name);
tmp_format_value_1 = par_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "coo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_plain___;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assattr_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assattr_value_1 == NULL));
CHECK_OBJECT(var_func);
tmp_assattr_target_1 = var_func;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain___name__, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "coo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__6__unary_method, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__6__unary_method->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__6__unary_method, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$mixins$$$function__6__unary_method,
    type_description_1,
    par_ufunc,
    par_name,
    var_func
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$mixins$$$function__6__unary_method == cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method);
    cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method = NULL;
}

assertFrameObject(frame_frame_numpy$lib$mixins$$$function__6__unary_method);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_func);
tmp_return_value = var_func;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_ufunc);
CHECK_OBJECT(par_ufunc);
Py_DECREF(par_ufunc);
par_ufunc = NULL;
CHECK_OBJECT(var_func);
CHECK_OBJECT(var_func);
Py_DECREF(var_func);
var_func = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_ufunc);
CHECK_OBJECT(par_ufunc);
Py_DECREF(par_ufunc);
par_ufunc = NULL;
CHECK_OBJECT(var_func);
CHECK_OBJECT(var_func);
Py_DECREF(var_func);
var_func = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func = MAKE_FUNCTION_FRAME(tstate, code_objects_80b6fbe9af5447b91819c8e45508bdbf, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func->m_type_description == NULL);
frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func = cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func);
assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ufunc);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 55;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func->m_frame.f_lineno = 55;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func == cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func);
    cache_frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func = NULL;
}

assertFrameObject(frame_frame_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func);

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



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__1__disables_array_ufunc(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__1__disables_array_ufunc,
        mod_consts.const_str_plain__disables_array_ufunc,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_931f5421f12db36fe2c2e25f69ab855d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts.const_str_digest_03b9479da2cb79d35b433f57ade72eac,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__2__binary_method,
        mod_consts.const_str_plain__binary_method,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_427342bfc5c9a850bea6f153cf7189bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts.const_str_digest_b44879ad4880ee0b59b69c74bcd4b7d9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func,
        mod_consts.const_str_plain_func,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_200b3ee8f1e28ac4e00b6063b3cf3ae1,
#endif
        code_objects_8237474da549febda5e06d5f44aceead,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__3__reflected_binary_method,
        mod_consts.const_str_plain__reflected_binary_method,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b2e226628f60d0720fb603e346d89885,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts.const_str_digest_414e35f1a8f354736e9757f3d0278f57,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func,
        mod_consts.const_str_plain_func,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_27b894da5f34dfe6a2d9f423d0fcd67d,
#endif
        code_objects_62d59b4dca9e17d77708be2e51c0c819,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__4__inplace_binary_method,
        mod_consts.const_str_plain__inplace_binary_method,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f0d60e78314ce1d6bc835543322a2041,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts.const_str_digest_da6baa6d0f995af1be2dec79a5cba153,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func,
        mod_consts.const_str_plain_func,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_da836839c950a10a496f84092f7de47a,
#endif
        code_objects_fb93431d41168f0b2f414899fec0ebe7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__5__numeric_methods(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__5__numeric_methods,
        mod_consts.const_str_plain__numeric_methods,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_40bc23c2f0b617e3450d2a344e7683e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts.const_str_digest_77bc960dfc587ce7c99b8e7660d9152b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__6__unary_method,
        mod_consts.const_str_plain__unary_method,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_962623ef90d45fa80d1d78eb2770251d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts.const_str_digest_b813bb8ce95d9e22e563f2de89266c16,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func,
        mod_consts.const_str_plain_func,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7f9e9b24de4bc26a0cfb6c584c0a228c,
#endif
        code_objects_80b6fbe9af5447b91819c8e45508bdbf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        NULL,
        closure,
        1
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

static function_impl_code const function_table_numpy$lib$mixins[] = {
impl_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func,
impl_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func,
impl_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func,
impl_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func,
impl_numpy$lib$mixins$$$function__1__disables_array_ufunc,
impl_numpy$lib$mixins$$$function__2__binary_method,
impl_numpy$lib$mixins$$$function__3__reflected_binary_method,
impl_numpy$lib$mixins$$$function__4__inplace_binary_method,
impl_numpy$lib$mixins$$$function__5__numeric_methods,
impl_numpy$lib$mixins$$$function__6__unary_method,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$lib$mixins);
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
        module_numpy$lib$mixins,
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
        function_table_numpy$lib$mixins,
        sizeof(function_table_numpy$lib$mixins) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.lib.mixins";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$lib$mixins(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$lib$mixins");

    // Store the module for future use.
    module_numpy$lib$mixins = module;

    moduledict_numpy$lib$mixins = MODULE_DICT(module_numpy$lib$mixins);

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
        PRINT_STRING("numpy$lib$mixins: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$lib$mixins: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$lib$mixins: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib.mixins" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$lib$mixins\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$lib$mixins,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$mixins,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$mixins,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$mixins,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$mixins,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$lib$mixins);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$lib$mixins);
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

        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 = NULL;
PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_f87d580099aeeda2cdaf55e8ac9a83a1;
UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$lib$mixins = MAKE_MODULE_FRAME(code_objects_435e7696c4330ccb8470be2c33c77785, module_numpy$lib$mixins);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins);
assert(Py_REFCNT(frame_frame_numpy$lib$mixins) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$lib$mixins$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$lib$mixins$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_218a55714e76c818c59b93d99676c0b2;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$mixins;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_umath_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$mixins->m_frame.f_lineno = 4;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$lib$mixins,
        mod_consts.const_str_plain_umath,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_umath);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain_um, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_LIST1(tstate, mod_consts.const_str_plain_NDArrayOperatorsMixin);
UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;

tmp_assign_source_6 = MAKE_FUNCTION_numpy$lib$mixins$$$function__1__disables_array_ufunc(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__disables_array_ufunc, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;

tmp_assign_source_7 = MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__binary_method, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;

tmp_assign_source_8 = MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__reflected_binary_method, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;

tmp_assign_source_9 = MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__inplace_binary_method, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;

tmp_assign_source_10 = MAKE_FUNCTION_numpy$lib$mixins$$$function__5__numeric_methods(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__numeric_methods, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;

tmp_assign_source_11 = MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain__unary_method, tmp_assign_source_11);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_ad40be8057f41bf17b5d8199728b8235;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_96710a69dfb31ce786e5541683107225;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_NDArrayOperatorsMixin;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_60;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___slots__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2 = MAKE_CLASS_FRAME(tstate, code_objects_6234bcecc45252c8ec0d1fc3d180415a, module_numpy$lib$mixins, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2);
assert(Py_REFCNT(frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$lib$mixins$_binary_method(tstate);
assert(!(tmp_called_value_1 == NULL));
tmp_expression_value_1 = module_var_accessor_numpy$lib$mixins$um(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_less);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_lt;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 145;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___lt__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_numpy$lib$mixins$_binary_method(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__binary_method);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_2 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_less_equal);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_4 = mod_consts.const_str_plain_le;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 146;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___le__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_6;
tmp_called_value_3 = module_var_accessor_numpy$lib$mixins$_binary_method(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__binary_method);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_3 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_equal);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_6 = mod_consts.const_str_plain_eq;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 147;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___eq__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_8;
tmp_called_value_4 = module_var_accessor_numpy$lib$mixins$_binary_method(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__binary_method);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_4 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_not_equal);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_8 = mod_consts.const_str_plain_ne;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 148;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___ne__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_10;
tmp_called_value_5 = module_var_accessor_numpy$lib$mixins$_binary_method(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__binary_method);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_5 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_greater);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_10 = mod_consts.const_str_plain_gt;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 149;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___gt__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_12;
tmp_called_value_6 = module_var_accessor_numpy$lib$mixins$_binary_method(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__binary_method);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_6 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_greater_equal);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_12 = mod_consts.const_str_plain_ge;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 150;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___ge__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_14;
tmp_called_value_7 = module_var_accessor_numpy$lib$mixins$_numeric_methods(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__numeric_methods);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_2 = "o";
    goto try_except_handler_4;
}
tmp_expression_value_7 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_2 = "o";
    goto try_except_handler_4;
}
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_add);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto try_except_handler_4;
}
tmp_args_element_value_14 = mod_consts.const_str_plain_add;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 153;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto try_except_handler_4;
}
tmp_assign_source_15 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto try_except_handler_4;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_2 = "o";
    goto try_except_handler_5;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter;
tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_2 = "o";
    goto try_except_handler_5;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_2 = "o";
    goto try_except_handler_5;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 = tmp_assign_source_18;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_2 = "o";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter = NULL;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___add__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___radd__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___iadd__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_15;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_16;
tmp_called_value_8 = module_var_accessor_numpy$lib$mixins$_numeric_methods(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__numeric_methods);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_2 = "o";
    goto try_except_handler_6;
}
tmp_expression_value_8 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_2 = "o";
    goto try_except_handler_6;
}
tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_subtract);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto try_except_handler_6;
}
tmp_args_element_value_16 = mod_consts.const_str_plain_sub;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 154;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto try_except_handler_6;
}
tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto try_except_handler_6;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 0, 3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_2 = "o";
    goto try_except_handler_7;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter;
tmp_assign_source_21 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 1, 3);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_2 = "o";
    goto try_except_handler_7;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter;
tmp_assign_source_22 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 2, 3);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_2 = "o";
    goto try_except_handler_7;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 = tmp_assign_source_22;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_2 = "o";
    goto try_except_handler_7;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_6;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_2;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter = NULL;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___sub__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___rsub__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___isub__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_17;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_18;
tmp_called_value_9 = module_var_accessor_numpy$lib$mixins$_numeric_methods(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__numeric_methods);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_2 = "o";
    goto try_except_handler_8;
}
tmp_expression_value_9 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_2 = "o";
    goto try_except_handler_8;
}
tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_multiply);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "o";
    goto try_except_handler_8;
}
tmp_args_element_value_18 = mod_consts.const_str_plain_mul;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 155;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "o";
    goto try_except_handler_8;
}
tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "o";
    goto try_except_handler_8;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
tmp_unpack_7 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter;
tmp_assign_source_24 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 3);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_2 = "o";
    goto try_except_handler_9;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
tmp_unpack_8 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter;
tmp_assign_source_25 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 3);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_2 = "o";
    goto try_except_handler_9;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
tmp_unpack_9 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter;
tmp_assign_source_26 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 2, 3);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_2 = "o";
    goto try_except_handler_9;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 = tmp_assign_source_26;
}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_2 = "o";
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

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter = NULL;
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

Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_2;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter = NULL;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___mul__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___rmul__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___imul__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_iter_arg_4;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_20;
tmp_called_value_10 = module_var_accessor_numpy$lib$mixins$_numeric_methods(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__numeric_methods);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_2 = "o";
    goto try_except_handler_10;
}
tmp_expression_value_10 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_2 = "o";
    goto try_except_handler_10;
}
tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_matmul);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_2 = "o";
    goto try_except_handler_10;
}
tmp_args_element_value_20 = mod_consts.const_str_plain_matmul;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 156;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto try_except_handler_10;
}
tmp_assign_source_27 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto try_except_handler_10;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter = tmp_assign_source_27;
}
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_unpack_10;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
tmp_unpack_10 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter;
tmp_assign_source_28 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 0, 3);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_2 = "o";
    goto try_except_handler_11;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_unpack_11;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
tmp_unpack_11 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter;
tmp_assign_source_29 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 1, 3);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_2 = "o";
    goto try_except_handler_11;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_unpack_12;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
tmp_unpack_12 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter;
tmp_assign_source_30 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_12, 2, 3);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_2 = "o";
    goto try_except_handler_11;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 = tmp_assign_source_30;
}
{
PyObject *tmp_iterator_name_4;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
tmp_iterator_name_4 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_2 = "o";
    goto try_except_handler_11;
}
}
goto try_end_7;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_10;
// End of try:
try_end_7:;
goto try_end_8;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_2;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter = NULL;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___matmul__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___rmatmul__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___imatmul__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_iter_arg_5;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_21;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_22;
tmp_called_value_11 = module_var_accessor_numpy$lib$mixins$_numeric_methods(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__numeric_methods);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_2 = "o";
    goto try_except_handler_12;
}
tmp_expression_value_11 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;
type_description_2 = "o";
    goto try_except_handler_12;
}
tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_true_divide);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto try_except_handler_12;
}
tmp_args_element_value_22 = mod_consts.const_str_plain_truediv;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 158;
{
    PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "o";
    goto try_except_handler_12;
}
tmp_assign_source_31 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "o";
    goto try_except_handler_12;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter = tmp_assign_source_31;
}
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_unpack_13;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
tmp_unpack_13 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter;
tmp_assign_source_32 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_13, 0, 3);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_2 = "o";
    goto try_except_handler_13;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_unpack_14;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
tmp_unpack_14 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter;
tmp_assign_source_33 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_14, 1, 3);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_2 = "o";
    goto try_except_handler_13;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_unpack_15;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
tmp_unpack_15 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter;
tmp_assign_source_34 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_15, 2, 3);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_2 = "o";
    goto try_except_handler_13;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 = tmp_assign_source_34;
}
{
PyObject *tmp_iterator_name_5;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
tmp_iterator_name_5 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_2 = "o";
    goto try_except_handler_13;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_12;
// End of try:
try_end_9:;
goto try_end_10;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_2;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter = NULL;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___truediv__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___rtruediv__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___itruediv__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_iter_arg_6;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_23;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_24;
tmp_called_value_12 = module_var_accessor_numpy$lib$mixins$_numeric_methods(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__numeric_methods);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_2 = "o";
    goto try_except_handler_14;
}
tmp_expression_value_12 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;
type_description_2 = "o";
    goto try_except_handler_14;
}
tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_floor_divide);
if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto try_except_handler_14;
}
tmp_args_element_value_24 = mod_consts.const_str_plain_floordiv;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 160;
{
    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
    tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_iter_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto try_except_handler_14;
}
tmp_assign_source_35 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
CHECK_OBJECT(tmp_iter_arg_6);
Py_DECREF(tmp_iter_arg_6);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto try_except_handler_14;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter = tmp_assign_source_35;
}
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_unpack_16;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
tmp_unpack_16 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter;
tmp_assign_source_36 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_16, 0, 3);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_2 = "o";
    goto try_except_handler_15;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_unpack_17;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
tmp_unpack_17 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter;
tmp_assign_source_37 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_17, 1, 3);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_2 = "o";
    goto try_except_handler_15;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_unpack_18;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
tmp_unpack_18 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter;
tmp_assign_source_38 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_18, 2, 3);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_2 = "o";
    goto try_except_handler_15;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 = tmp_assign_source_38;
}
{
PyObject *tmp_iterator_name_6;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
tmp_iterator_name_6 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_6, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_2 = "o";
    goto try_except_handler_15;
}
}
goto try_end_11;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_14;
// End of try:
try_end_11:;
goto try_end_12;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_2;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter = NULL;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___floordiv__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___rfloordiv__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___ifloordiv__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_iter_arg_7;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_25;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_26;
tmp_called_value_13 = module_var_accessor_numpy$lib$mixins$_numeric_methods(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__numeric_methods);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_2 = "o";
    goto try_except_handler_16;
}
tmp_expression_value_13 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_2 = "o";
    goto try_except_handler_16;
}
tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_remainder);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto try_except_handler_16;
}
tmp_args_element_value_26 = mod_consts.const_str_plain_mod;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 162;
{
    PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
    tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_iter_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto try_except_handler_16;
}
tmp_assign_source_39 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
CHECK_OBJECT(tmp_iter_arg_7);
Py_DECREF(tmp_iter_arg_7);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto try_except_handler_16;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter = tmp_assign_source_39;
}
// Tried code:
{
PyObject *tmp_assign_source_40;
PyObject *tmp_unpack_19;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
tmp_unpack_19 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter;
tmp_assign_source_40 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_19, 0, 3);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_2 = "o";
    goto try_except_handler_17;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_unpack_20;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
tmp_unpack_20 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter;
tmp_assign_source_41 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_20, 1, 3);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_2 = "o";
    goto try_except_handler_17;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_unpack_21;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
tmp_unpack_21 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter;
tmp_assign_source_42 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_21, 2, 3);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_2 = "o";
    goto try_except_handler_17;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 = tmp_assign_source_42;
}
{
PyObject *tmp_iterator_name_7;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
tmp_iterator_name_7 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_7, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_2 = "o";
    goto try_except_handler_17;
}
}
goto try_end_13;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_16;
// End of try:
try_end_13:;
goto try_end_14;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_2;
// End of try:
try_end_14:;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter = NULL;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___mod__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___rmod__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___imod__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 = NULL;

{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_27;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_28;
tmp_called_value_14 = module_var_accessor_numpy$lib$mixins$_binary_method(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__binary_method);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_14 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_divmod);
if (tmp_args_element_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_28 = mod_consts.const_str_plain_divmod;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 163;
{
    PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___divmod__, tmp_dictset_value);
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
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_29;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_30;
tmp_called_value_15 = module_var_accessor_numpy$lib$mixins$_reflected_binary_method(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__reflected_binary_method);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_15 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_divmod);
if (tmp_args_element_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_30 = mod_consts.const_str_plain_divmod;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 164;
{
    PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___rdivmod__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_iter_arg_8;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_31;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_32;
tmp_called_value_16 = module_var_accessor_numpy$lib$mixins$_numeric_methods(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__numeric_methods);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_2 = "o";
    goto try_except_handler_18;
}
tmp_expression_value_16 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_2 = "o";
    goto try_except_handler_18;
}
tmp_args_element_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_power);
if (tmp_args_element_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "o";
    goto try_except_handler_18;
}
tmp_args_element_value_32 = mod_consts.const_str_plain_pow;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 167;
{
    PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
    tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_args_element_value_31);
Py_DECREF(tmp_args_element_value_31);
if (tmp_iter_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "o";
    goto try_except_handler_18;
}
tmp_assign_source_43 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
CHECK_OBJECT(tmp_iter_arg_8);
Py_DECREF(tmp_iter_arg_8);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "o";
    goto try_except_handler_18;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter = tmp_assign_source_43;
}
// Tried code:
{
PyObject *tmp_assign_source_44;
PyObject *tmp_unpack_22;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
tmp_unpack_22 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter;
tmp_assign_source_44 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_22, 0, 3);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_2 = "o";
    goto try_except_handler_19;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_unpack_23;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
tmp_unpack_23 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter;
tmp_assign_source_45 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_23, 1, 3);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_2 = "o";
    goto try_except_handler_19;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_unpack_24;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
tmp_unpack_24 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter;
tmp_assign_source_46 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_24, 2, 3);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_2 = "o";
    goto try_except_handler_19;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 = tmp_assign_source_46;
}
{
PyObject *tmp_iterator_name_8;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
tmp_iterator_name_8 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_8, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_2 = "o";
    goto try_except_handler_19;
}
}
goto try_end_15;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_18;
// End of try:
try_end_15:;
goto try_end_16;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto frame_exception_exit_2;
// End of try:
try_end_16:;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter = NULL;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___pow__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___rpow__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___ipow__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_iter_arg_9;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_33;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_34;
tmp_called_value_17 = module_var_accessor_numpy$lib$mixins$_numeric_methods(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__numeric_methods);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_2 = "o";
    goto try_except_handler_20;
}
tmp_expression_value_17 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;
type_description_2 = "o";
    goto try_except_handler_20;
}
tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_left_shift);
if (tmp_args_element_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto try_except_handler_20;
}
tmp_args_element_value_34 = mod_consts.const_str_plain_lshift;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 168;
{
    PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
    tmp_iter_arg_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_33);
if (tmp_iter_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "o";
    goto try_except_handler_20;
}
tmp_assign_source_47 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
CHECK_OBJECT(tmp_iter_arg_9);
Py_DECREF(tmp_iter_arg_9);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "o";
    goto try_except_handler_20;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter = tmp_assign_source_47;
}
// Tried code:
{
PyObject *tmp_assign_source_48;
PyObject *tmp_unpack_25;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
tmp_unpack_25 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter;
tmp_assign_source_48 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_25, 0, 3);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_2 = "o";
    goto try_except_handler_21;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_unpack_26;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
tmp_unpack_26 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter;
tmp_assign_source_49 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_26, 1, 3);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_2 = "o";
    goto try_except_handler_21;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_unpack_27;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
tmp_unpack_27 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter;
tmp_assign_source_50 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_27, 2, 3);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_2 = "o";
    goto try_except_handler_21;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 = tmp_assign_source_50;
}
{
PyObject *tmp_iterator_name_9;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
tmp_iterator_name_9 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_9, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_2 = "o";
    goto try_except_handler_21;
}
}
goto try_end_17;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto try_except_handler_20;
// End of try:
try_end_17:;
goto try_end_18;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto frame_exception_exit_2;
// End of try:
try_end_18:;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter = NULL;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___lshift__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___rlshift__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___ilshift__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_51;
PyObject *tmp_iter_arg_10;
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_35;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_36;
tmp_called_value_18 = module_var_accessor_numpy$lib$mixins$_numeric_methods(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__numeric_methods);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_2 = "o";
    goto try_except_handler_22;
}
tmp_expression_value_18 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;
type_description_2 = "o";
    goto try_except_handler_22;
}
tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_right_shift);
if (tmp_args_element_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_2 = "o";
    goto try_except_handler_22;
}
tmp_args_element_value_36 = mod_consts.const_str_plain_rshift;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 170;
{
    PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
    tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
}

CHECK_OBJECT(tmp_args_element_value_35);
Py_DECREF(tmp_args_element_value_35);
if (tmp_iter_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "o";
    goto try_except_handler_22;
}
tmp_assign_source_51 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_10);
CHECK_OBJECT(tmp_iter_arg_10);
Py_DECREF(tmp_iter_arg_10);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "o";
    goto try_except_handler_22;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter = tmp_assign_source_51;
}
// Tried code:
{
PyObject *tmp_assign_source_52;
PyObject *tmp_unpack_28;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
tmp_unpack_28 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter;
tmp_assign_source_52 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_28, 0, 3);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_2 = "o";
    goto try_except_handler_23;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_unpack_29;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
tmp_unpack_29 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter;
tmp_assign_source_53 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_29, 1, 3);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_2 = "o";
    goto try_except_handler_23;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_unpack_30;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
tmp_unpack_30 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter;
tmp_assign_source_54 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_30, 2, 3);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_2 = "o";
    goto try_except_handler_23;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 = tmp_assign_source_54;
}
{
PyObject *tmp_iterator_name_10;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
tmp_iterator_name_10 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_10, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_2 = "o";
    goto try_except_handler_23;
}
}
goto try_end_19;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_22;
// End of try:
try_end_19:;
goto try_end_20;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto frame_exception_exit_2;
// End of try:
try_end_20:;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter = NULL;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___rshift__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___rrshift__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___irshift__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_55;
PyObject *tmp_iter_arg_11;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_37;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_38;
tmp_called_value_19 = module_var_accessor_numpy$lib$mixins$_numeric_methods(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__numeric_methods);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_2 = "o";
    goto try_except_handler_24;
}
tmp_expression_value_19 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_2 = "o";
    goto try_except_handler_24;
}
tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_bitwise_and);
if (tmp_args_element_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "o";
    goto try_except_handler_24;
}
tmp_args_element_value_38 = mod_consts.const_str_plain_and;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 172;
{
    PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
    tmp_iter_arg_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
}

CHECK_OBJECT(tmp_args_element_value_37);
Py_DECREF(tmp_args_element_value_37);
if (tmp_iter_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "o";
    goto try_except_handler_24;
}
tmp_assign_source_55 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
CHECK_OBJECT(tmp_iter_arg_11);
Py_DECREF(tmp_iter_arg_11);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "o";
    goto try_except_handler_24;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter = tmp_assign_source_55;
}
// Tried code:
{
PyObject *tmp_assign_source_56;
PyObject *tmp_unpack_31;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
tmp_unpack_31 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter;
tmp_assign_source_56 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_31, 0, 3);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_2 = "o";
    goto try_except_handler_25;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_unpack_32;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
tmp_unpack_32 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter;
tmp_assign_source_57 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_32, 1, 3);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_2 = "o";
    goto try_except_handler_25;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_unpack_33;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
tmp_unpack_33 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter;
tmp_assign_source_58 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_33, 2, 3);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_2 = "o";
    goto try_except_handler_25;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 = tmp_assign_source_58;
}
{
PyObject *tmp_iterator_name_11;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
tmp_iterator_name_11 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_11, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_2 = "o";
    goto try_except_handler_25;
}
}
goto try_end_21;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_24;
// End of try:
try_end_21:;
goto try_end_22;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto frame_exception_exit_2;
// End of try:
try_end_22:;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter = NULL;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___and__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___rand__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___iand__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_59;
PyObject *tmp_iter_arg_12;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_39;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_40;
tmp_called_value_20 = module_var_accessor_numpy$lib$mixins$_numeric_methods(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__numeric_methods);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_2 = "o";
    goto try_except_handler_26;
}
tmp_expression_value_20 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_2 = "o";
    goto try_except_handler_26;
}
tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_bitwise_xor);
if (tmp_args_element_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto try_except_handler_26;
}
tmp_args_element_value_40 = mod_consts.const_str_plain_xor;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 173;
{
    PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
    tmp_iter_arg_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
}

CHECK_OBJECT(tmp_args_element_value_39);
Py_DECREF(tmp_args_element_value_39);
if (tmp_iter_arg_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto try_except_handler_26;
}
tmp_assign_source_59 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_12);
CHECK_OBJECT(tmp_iter_arg_12);
Py_DECREF(tmp_iter_arg_12);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto try_except_handler_26;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter = tmp_assign_source_59;
}
// Tried code:
{
PyObject *tmp_assign_source_60;
PyObject *tmp_unpack_34;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
tmp_unpack_34 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter;
tmp_assign_source_60 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_34, 0, 3);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_2 = "o";
    goto try_except_handler_27;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_unpack_35;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
tmp_unpack_35 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter;
tmp_assign_source_61 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_35, 1, 3);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_2 = "o";
    goto try_except_handler_27;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_unpack_36;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
tmp_unpack_36 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter;
tmp_assign_source_62 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_36, 2, 3);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_2 = "o";
    goto try_except_handler_27;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 = tmp_assign_source_62;
}
{
PyObject *tmp_iterator_name_12;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
tmp_iterator_name_12 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_12, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_2 = "o";
    goto try_except_handler_27;
}
}
goto try_end_23;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto try_except_handler_26;
// End of try:
try_end_23:;
goto try_end_24;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto frame_exception_exit_2;
// End of try:
try_end_24:;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter = NULL;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___xor__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___rxor__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___ixor__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_63;
PyObject *tmp_iter_arg_13;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_41;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_42;
tmp_called_value_21 = module_var_accessor_numpy$lib$mixins$_numeric_methods(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__numeric_methods);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_28;
}
tmp_expression_value_21 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_28;
}
tmp_args_element_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_bitwise_or);
if (tmp_args_element_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_28;
}
tmp_args_element_value_42 = mod_consts.const_str_plain_or;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 174;
{
    PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42};
    tmp_iter_arg_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_21, call_args);
}

CHECK_OBJECT(tmp_args_element_value_41);
Py_DECREF(tmp_args_element_value_41);
if (tmp_iter_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_28;
}
tmp_assign_source_63 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_13);
CHECK_OBJECT(tmp_iter_arg_13);
Py_DECREF(tmp_iter_arg_13);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_28;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter = tmp_assign_source_63;
}
// Tried code:
{
PyObject *tmp_assign_source_64;
PyObject *tmp_unpack_37;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
tmp_unpack_37 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter;
tmp_assign_source_64 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_37, 0, 3);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_29;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 = tmp_assign_source_64;
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_unpack_38;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
tmp_unpack_38 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter;
tmp_assign_source_65 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_38, 1, 3);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_29;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_unpack_39;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
tmp_unpack_39 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter;
tmp_assign_source_66 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_39, 2, 3);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_29;
}
assert(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 == NULL);
tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 = tmp_assign_source_66;
}
{
PyObject *tmp_iterator_name_13;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
tmp_iterator_name_13 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_13, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_29;
}
}
goto try_end_25;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto try_except_handler_28;
// End of try:
try_end_25:;
goto try_end_26;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 = NULL;
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto frame_exception_exit_2;
// End of try:
try_end_26:;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter = NULL;
CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___or__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1);
tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___ror__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2);
tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 = NULL;

CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3);
tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___ior__, tmp_dictset_value);
assert(!(tmp_result == false));
Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3);
tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 = NULL;

{
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_43;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_44;
tmp_called_value_22 = module_var_accessor_numpy$lib$mixins$_unary_method(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unary_method);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_22 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_negative);
if (tmp_args_element_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_44 = mod_consts.const_str_plain_neg;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 177;
{
    PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_22, call_args);
}

CHECK_OBJECT(tmp_args_element_value_43);
Py_DECREF(tmp_args_element_value_43);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___neg__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_45;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_element_value_46;
tmp_called_value_23 = module_var_accessor_numpy$lib$mixins$_unary_method(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unary_method);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_23 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_positive);
if (tmp_args_element_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_46 = mod_consts.const_str_plain_pos;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 178;
{
    PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_23, call_args);
}

CHECK_OBJECT(tmp_args_element_value_45);
Py_DECREF(tmp_args_element_value_45);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___pos__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_47;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_element_value_48;
tmp_called_value_24 = module_var_accessor_numpy$lib$mixins$_unary_method(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unary_method);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_24 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_absolute);
if (tmp_args_element_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_48 = mod_consts.const_str_plain_abs;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 179;
{
    PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_24, call_args);
}

CHECK_OBJECT(tmp_args_element_value_47);
Py_DECREF(tmp_args_element_value_47);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___abs__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_49;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_element_value_50;
tmp_called_value_25 = module_var_accessor_numpy$lib$mixins$_unary_method(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unary_method);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_25 = module_var_accessor_numpy$lib$mixins$um(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_um);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_invert);
if (tmp_args_element_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_args_element_value_50 = mod_consts.const_str_plain_invert;
frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame.f_lineno = 180;
{
    PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_25, call_args);
}

CHECK_OBJECT(tmp_args_element_value_49);
Py_DECREF(tmp_args_element_value_49);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___invert__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_2);

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
tmp_result = DICT_SET_ITEM(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_67;
PyObject *tmp_called_value_26;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_26 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_NDArrayOperatorsMixin;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$lib$mixins->m_frame.f_lineno = 60;
tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_67;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_14 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_14);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60);
locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60);
locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_60 = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

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
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 60;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts.const_str_plain_NDArrayOperatorsMixin, tmp_assign_source_14);
}
goto try_end_27;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
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
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto frame_exception_exit_1;
// End of try:
try_end_27:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$mixins, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$mixins->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$mixins, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$lib$mixins);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$lib$mixins", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib.mixins" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$lib$mixins);
    return module_numpy$lib$mixins;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$lib$mixins", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

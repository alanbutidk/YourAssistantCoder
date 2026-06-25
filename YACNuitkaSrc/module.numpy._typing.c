/* Generated code for Python module 'numpy$_typing'
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



/* The "module_numpy$_typing" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$_typing;
PyDictObject *moduledict_numpy$_typing;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_1d7ee69e618355a9400270a8580a808d;
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_fa3a28a416a76dcd3ce61a187389e54e_tuple;
PyObject *const_str_plain__typing;
PyObject *const_tuple_45beb79de3cb21f1e515c08be965cd88_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_sys;
PyObject *const_str_plain__array_like;
PyObject *const_tuple_ecbd1eef786b43a673b97441b90d4b03_tuple;
PyObject *const_str_plain_NDArray;
PyObject *const_str_plain__ArrayLike;
PyObject *const_str_plain__ArrayLikeAnyString_co;
PyObject *const_str_plain__ArrayLikeBool_co;
PyObject *const_str_plain__ArrayLikeBytes_co;
PyObject *const_str_plain__ArrayLikeComplex128_co;
PyObject *const_str_plain__ArrayLikeComplex_co;
PyObject *const_str_plain__ArrayLikeDT64_co;
PyObject *const_str_plain__ArrayLikeFloat64_co;
PyObject *const_str_plain__ArrayLikeFloat_co;
PyObject *const_str_plain__ArrayLikeInt;
PyObject *const_str_plain__ArrayLikeInt_co;
PyObject *const_str_plain__ArrayLikeNumber_co;
PyObject *const_str_plain__ArrayLikeObject_co;
PyObject *const_str_plain__ArrayLikeStr_co;
PyObject *const_str_plain__ArrayLikeString_co;
PyObject *const_str_plain__ArrayLikeTD64_co;
PyObject *const_str_plain__ArrayLikeUInt_co;
PyObject *const_str_plain__ArrayLikeVoid_co;
PyObject *const_str_plain__FiniteNestedSequence;
PyObject *const_str_plain__SupportsArray;
PyObject *const_str_plain__SupportsArrayFunc;
PyObject *const_str_plain__char_codes;
PyObject *const_tuple_17a2fe59610bf17a6dc943d3af7a2b95_tuple;
PyObject *const_str_plain__BoolCodes;
PyObject *const_str_plain__ByteCodes;
PyObject *const_str_plain__BytesCodes;
PyObject *const_str_plain__CDoubleCodes;
PyObject *const_str_plain__CharacterCodes;
PyObject *const_str_plain__CLongDoubleCodes;
PyObject *const_str_plain__Complex64Codes;
PyObject *const_str_plain__Complex128Codes;
PyObject *const_str_plain__ComplexFloatingCodes;
PyObject *const_str_plain__CSingleCodes;
PyObject *const_str_plain__DoubleCodes;
PyObject *const_str_plain__DT64Codes;
PyObject *const_str_plain__FlexibleCodes;
PyObject *const_str_plain__Float16Codes;
PyObject *const_str_plain__Float32Codes;
PyObject *const_str_plain__Float64Codes;
PyObject *const_str_plain__FloatingCodes;
PyObject *const_str_plain__GenericCodes;
PyObject *const_str_plain__HalfCodes;
PyObject *const_str_plain__InexactCodes;
PyObject *const_str_plain__Int8Codes;
PyObject *const_str_plain__Int16Codes;
PyObject *const_str_plain__Int32Codes;
PyObject *const_str_plain__Int64Codes;
PyObject *const_str_plain__IntCCodes;
PyObject *const_str_plain__IntCodes;
PyObject *const_str_plain__IntegerCodes;
PyObject *const_str_plain__IntPCodes;
PyObject *const_str_plain__LongCodes;
PyObject *const_str_plain__LongDoubleCodes;
PyObject *const_str_plain__LongLongCodes;
PyObject *const_str_plain__NumberCodes;
PyObject *const_str_plain__ObjectCodes;
PyObject *const_str_plain__ShortCodes;
PyObject *const_str_plain__SignedIntegerCodes;
PyObject *const_str_plain__SingleCodes;
PyObject *const_str_plain__StrCodes;
PyObject *const_str_plain__StringCodes;
PyObject *const_str_plain__TD64Codes;
PyObject *const_str_plain__UByteCodes;
PyObject *const_str_plain__UInt8Codes;
PyObject *const_str_plain__UInt16Codes;
PyObject *const_str_plain__UInt32Codes;
PyObject *const_str_plain__UInt64Codes;
PyObject *const_str_plain__UIntCCodes;
PyObject *const_str_plain__UIntCodes;
PyObject *const_str_plain__UIntPCodes;
PyObject *const_str_plain__ULongCodes;
PyObject *const_str_plain__ULongLongCodes;
PyObject *const_str_plain__UnsignedIntegerCodes;
PyObject *const_str_plain__UShortCodes;
PyObject *const_str_plain__VoidCodes;
PyObject *const_str_plain__dtype_like;
PyObject *const_tuple_7166ecc301a82310106ba4e19414b773_tuple;
PyObject *const_str_plain__DTypeLike;
PyObject *const_str_plain__DTypeLikeBool;
PyObject *const_str_plain__DTypeLikeBytes;
PyObject *const_str_plain__DTypeLikeComplex;
PyObject *const_str_plain__DTypeLikeComplex_co;
PyObject *const_str_plain__DTypeLikeDT64;
PyObject *const_str_plain__DTypeLikeFloat;
PyObject *const_str_plain__DTypeLikeInt;
PyObject *const_str_plain__DTypeLikeObject;
PyObject *const_str_plain__DTypeLikeStr;
PyObject *const_str_plain__DTypeLikeTD64;
PyObject *const_str_plain__DTypeLikeUInt;
PyObject *const_str_plain__DTypeLikeVoid;
PyObject *const_str_plain__HasDType;
PyObject *const_str_plain__SupportsDType;
PyObject *const_str_plain__VoidDTypeLike;
PyObject *const_str_plain__nbit;
PyObject *const_tuple_e6cb4c6dbdba6c875691c1c0633e98ae_tuple;
PyObject *const_str_plain__NBitByte;
PyObject *const_str_plain__NBitDouble;
PyObject *const_str_plain__NBitHalf;
PyObject *const_str_plain__NBitInt;
PyObject *const_str_plain__NBitIntC;
PyObject *const_str_plain__NBitIntP;
PyObject *const_str_plain__NBitLong;
PyObject *const_str_plain__NBitLongDouble;
PyObject *const_str_plain__NBitLongLong;
PyObject *const_str_plain__NBitShort;
PyObject *const_str_plain__NBitSingle;
PyObject *const_str_plain__nbit_base;
PyObject *const_tuple_d472c50bb8310669f9f762e364a54ab2_tuple;
PyObject *const_str_plain_NBitBase;
PyObject *const_str_plain__8Bit;
PyObject *const_str_plain__16Bit;
PyObject *const_str_plain__32Bit;
PyObject *const_str_plain__64Bit;
PyObject *const_str_plain__96Bit;
PyObject *const_str_plain__128Bit;
PyObject *const_str_plain__nested_sequence;
PyObject *const_tuple_str_plain__NestedSequence_tuple;
PyObject *const_str_plain__NestedSequence;
PyObject *const_str_plain__scalars;
PyObject *const_tuple_4b8185cc0ee52b7e951b5694d743dc68_tuple;
PyObject *const_str_plain__BoolLike_co;
PyObject *const_str_plain__CharLike_co;
PyObject *const_str_plain__ComplexLike_co;
PyObject *const_str_plain__FloatLike_co;
PyObject *const_str_plain__IntLike_co;
PyObject *const_str_plain__NumberLike_co;
PyObject *const_str_plain__ScalarLike_co;
PyObject *const_str_plain__TD64Like_co;
PyObject *const_str_plain__UIntLike_co;
PyObject *const_str_plain__VoidLike_co;
PyObject *const_str_plain__shape;
PyObject *const_tuple_str_plain__AnyShape_str_plain__Shape_str_plain__ShapeLike_tuple;
PyObject *const_str_plain__AnyShape;
PyObject *const_str_plain__Shape;
PyObject *const_str_plain__ShapeLike;
PyObject *const_str_plain__ufunc;
PyObject *const_tuple_4f659769c5e9deb57390b2fbbc361cb2_tuple;
PyObject *const_str_plain__GUFunc_Nin2_Nout1;
PyObject *const_str_plain__UFunc_Nin1_Nout1;
PyObject *const_str_plain__UFunc_Nin1_Nout2;
PyObject *const_str_plain__UFunc_Nin2_Nout1;
PyObject *const_str_plain__UFunc_Nin2_Nout2;
PyObject *const_str_plain_TypeAliasType;
PyObject *const_tuple_str_plain_ArrayLike_tuple;
PyObject *const_str_plain_ArrayLike;
PyObject *const_str_plain__ArrayLikeAlias;
PyObject *const_tuple_str_plain_DTypeLike_tuple;
PyObject *const_str_plain_DTypeLike;
PyObject *const_str_plain__DTypeLikeAlias;
PyObject *const_str_digest_143ddc8a43f26e66228a7f4319ced27d;
PyObject *const_str_digest_c69a63bd547bf8b4c64d750babb86e66;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[164];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy._typing"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d7ee69e618355a9400270a8580a808d);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_fa3a28a416a76dcd3ce61a187389e54e_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__typing);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_45beb79de3cb21f1e515c08be965cd88_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__array_like);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_ecbd1eef786b43a673b97441b90d4b03_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_NDArray);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLike);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeAnyString_co);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeBool_co);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeBytes_co);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeComplex128_co);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeComplex_co);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeDT64_co);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeFloat64_co);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeFloat_co);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeInt);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeInt_co);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeNumber_co);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeObject_co);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeStr_co);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeString_co);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeTD64_co);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeUInt_co);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeVoid_co);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__FiniteNestedSequence);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsArray);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsArrayFunc);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__char_codes);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_17a2fe59610bf17a6dc943d3af7a2b95_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__BoolCodes);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__ByteCodes);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__BytesCodes);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain__CDoubleCodes);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__CharacterCodes);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__CLongDoubleCodes);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain__Complex64Codes);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__Complex128Codes);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__ComplexFloatingCodes);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain__CSingleCodes);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__DoubleCodes);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__DT64Codes);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__FlexibleCodes);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__Float16Codes);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__Float32Codes);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__Float64Codes);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__FloatingCodes);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__GenericCodes);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__HalfCodes);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain__InexactCodes);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain__Int8Codes);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain__Int16Codes);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__Int32Codes);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain__Int64Codes);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain__IntCCodes);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain__IntCodes);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__IntegerCodes);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__IntPCodes);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__LongCodes);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain__LongDoubleCodes);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain__LongLongCodes);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__NumberCodes);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain__ObjectCodes);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain__ShortCodes);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain__SignedIntegerCodes);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain__SingleCodes);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain__StrCodes);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain__StringCodes);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain__TD64Codes);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__UByteCodes);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain__UInt8Codes);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain__UInt16Codes);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain__UInt32Codes);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain__UInt64Codes);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain__UIntCCodes);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain__UIntCodes);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain__UIntPCodes);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain__ULongCodes);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain__ULongLongCodes);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain__UnsignedIntegerCodes);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain__UShortCodes);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain__VoidCodes);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain__dtype_like);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_7166ecc301a82310106ba4e19414b773_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLike);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeBool);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeBytes);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeComplex);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeComplex_co);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeDT64);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeFloat);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeInt);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeObject);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeStr);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeTD64);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeUInt);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeVoid);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain__HasDType);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsDType);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain__VoidDTypeLike);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain__nbit);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_e6cb4c6dbdba6c875691c1c0633e98ae_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain__NBitByte);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain__NBitDouble);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain__NBitHalf);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain__NBitInt);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain__NBitIntC);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain__NBitIntP);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain__NBitLong);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain__NBitLongDouble);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain__NBitLongLong);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain__NBitShort);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain__NBitSingle);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain__nbit_base);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_d472c50bb8310669f9f762e364a54ab2_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_NBitBase);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain__8Bit);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain__16Bit);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain__32Bit);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain__64Bit);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain__96Bit);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain__128Bit);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain__nested_sequence);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__NestedSequence_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain__NestedSequence);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain__scalars);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_4b8185cc0ee52b7e951b5694d743dc68_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain__BoolLike_co);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain__CharLike_co);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain__ComplexLike_co);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain__FloatLike_co);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain__IntLike_co);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain__NumberLike_co);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain__ScalarLike_co);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain__TD64Like_co);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain__UIntLike_co);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain__VoidLike_co);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain__shape);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__AnyShape_str_plain__Shape_str_plain__ShapeLike_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain__AnyShape);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain__Shape);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain__ShapeLike);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain__ufunc);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_4f659769c5e9deb57390b2fbbc361cb2_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain__GUFunc_Nin2_Nout1);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain__UFunc_Nin1_Nout1);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain__UFunc_Nin1_Nout2);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain__UFunc_Nin2_Nout1);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain__UFunc_Nin2_Nout2);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAliasType);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ArrayLike_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_ArrayLike);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeAlias);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DTypeLike_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_DTypeLike);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeAlias);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_143ddc8a43f26e66228a7f4319ced27d);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_c69a63bd547bf8b4c64d750babb86e66);
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
void checkModuleConstants_numpy$_typing(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d7ee69e618355a9400270a8580a808d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d7ee69e618355a9400270a8580a808d);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_fa3a28a416a76dcd3ce61a187389e54e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fa3a28a416a76dcd3ce61a187389e54e_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__typing);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_45beb79de3cb21f1e515c08be965cd88_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_45beb79de3cb21f1e515c08be965cd88_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__array_like));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__array_like);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_ecbd1eef786b43a673b97441b90d4b03_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ecbd1eef786b43a673b97441b90d4b03_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_NDArray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NDArray);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLike));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLike);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeAnyString_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeAnyString_co);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeBool_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeBool_co);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeBytes_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeBytes_co);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeComplex128_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeComplex128_co);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeComplex_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeComplex_co);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeDT64_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeDT64_co);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeFloat64_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeFloat64_co);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeFloat_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeFloat_co);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeInt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeInt);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeInt_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeInt_co);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeNumber_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeNumber_co);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeObject_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeObject_co);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeStr_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeStr_co);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeString_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeString_co);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeTD64_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeTD64_co);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeUInt_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeUInt_co);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeVoid_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeVoid_co);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__FiniteNestedSequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FiniteNestedSequence);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsArray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SupportsArray);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsArrayFunc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SupportsArrayFunc);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__char_codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__char_codes);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_17a2fe59610bf17a6dc943d3af7a2b95_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_17a2fe59610bf17a6dc943d3af7a2b95_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__BoolCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__BoolCodes);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__ByteCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ByteCodes);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__BytesCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__BytesCodes);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain__CDoubleCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CDoubleCodes);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__CharacterCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CharacterCodes);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__CLongDoubleCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CLongDoubleCodes);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain__Complex64Codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Complex64Codes);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__Complex128Codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Complex128Codes);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__ComplexFloatingCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ComplexFloatingCodes);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain__CSingleCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CSingleCodes);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__DoubleCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DoubleCodes);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__DT64Codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DT64Codes);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__FlexibleCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FlexibleCodes);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__Float16Codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Float16Codes);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__Float32Codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Float32Codes);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__Float64Codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Float64Codes);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__FloatingCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FloatingCodes);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__GenericCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GenericCodes);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__HalfCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__HalfCodes);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain__InexactCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__InexactCodes);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain__Int8Codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Int8Codes);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain__Int16Codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Int16Codes);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__Int32Codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Int32Codes);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain__Int64Codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Int64Codes);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain__IntCCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__IntCCodes);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain__IntCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__IntCodes);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__IntegerCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__IntegerCodes);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__IntPCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__IntPCodes);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__LongCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LongCodes);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain__LongDoubleCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LongDoubleCodes);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain__LongLongCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LongLongCodes);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__NumberCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NumberCodes);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain__ObjectCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ObjectCodes);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain__ShortCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ShortCodes);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain__SignedIntegerCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SignedIntegerCodes);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain__SingleCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SingleCodes);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain__StrCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__StrCodes);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain__StringCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__StringCodes);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain__TD64Codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__TD64Codes);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__UByteCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UByteCodes);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain__UInt8Codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UInt8Codes);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain__UInt16Codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UInt16Codes);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain__UInt32Codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UInt32Codes);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain__UInt64Codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UInt64Codes);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain__UIntCCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UIntCCodes);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain__UIntCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UIntCodes);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain__UIntPCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UIntPCodes);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain__ULongCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ULongCodes);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain__ULongLongCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ULongLongCodes);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain__UnsignedIntegerCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UnsignedIntegerCodes);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain__UShortCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UShortCodes);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain__VoidCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__VoidCodes);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain__dtype_like));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dtype_like);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_7166ecc301a82310106ba4e19414b773_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7166ecc301a82310106ba4e19414b773_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLike));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DTypeLike);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeBool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DTypeLikeBool);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeBytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DTypeLikeBytes);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeComplex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DTypeLikeComplex);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeComplex_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DTypeLikeComplex_co);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeDT64));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DTypeLikeDT64);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeFloat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DTypeLikeFloat);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeInt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DTypeLikeInt);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeObject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DTypeLikeObject);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeStr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DTypeLikeStr);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeTD64));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DTypeLikeTD64);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeUInt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DTypeLikeUInt);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeVoid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DTypeLikeVoid);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain__HasDType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__HasDType);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsDType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SupportsDType);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain__VoidDTypeLike));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__VoidDTypeLike);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain__nbit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nbit);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_e6cb4c6dbdba6c875691c1c0633e98ae_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e6cb4c6dbdba6c875691c1c0633e98ae_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain__NBitByte));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NBitByte);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain__NBitDouble));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NBitDouble);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain__NBitHalf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NBitHalf);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain__NBitInt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NBitInt);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain__NBitIntC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NBitIntC);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain__NBitIntP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NBitIntP);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain__NBitLong));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NBitLong);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain__NBitLongDouble));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NBitLongDouble);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain__NBitLongLong));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NBitLongLong);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain__NBitShort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NBitShort);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain__NBitSingle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NBitSingle);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain__nbit_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nbit_base);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_d472c50bb8310669f9f762e364a54ab2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d472c50bb8310669f9f762e364a54ab2_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_NBitBase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NBitBase);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain__8Bit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__8Bit);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain__16Bit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__16Bit);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain__32Bit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__32Bit);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain__64Bit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__64Bit);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain__96Bit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__96Bit);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain__128Bit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__128Bit);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain__nested_sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nested_sequence);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__NestedSequence_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__NestedSequence_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain__NestedSequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NestedSequence);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain__scalars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__scalars);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_4b8185cc0ee52b7e951b5694d743dc68_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4b8185cc0ee52b7e951b5694d743dc68_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain__BoolLike_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__BoolLike_co);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain__CharLike_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CharLike_co);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain__ComplexLike_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ComplexLike_co);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain__FloatLike_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FloatLike_co);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain__IntLike_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__IntLike_co);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain__NumberLike_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NumberLike_co);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain__ScalarLike_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ScalarLike_co);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain__TD64Like_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__TD64Like_co);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain__UIntLike_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UIntLike_co);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain__VoidLike_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__VoidLike_co);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain__shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__shape);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__AnyShape_str_plain__Shape_str_plain__ShapeLike_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__AnyShape_str_plain__Shape_str_plain__ShapeLike_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain__AnyShape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__AnyShape);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain__Shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Shape);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain__ShapeLike));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ShapeLike);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain__ufunc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ufunc);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_4f659769c5e9deb57390b2fbbc361cb2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4f659769c5e9deb57390b2fbbc361cb2_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain__GUFunc_Nin2_Nout1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GUFunc_Nin2_Nout1);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain__UFunc_Nin1_Nout1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UFunc_Nin1_Nout1);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain__UFunc_Nin1_Nout2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UFunc_Nin1_Nout2);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain__UFunc_Nin2_Nout1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UFunc_Nin2_Nout1);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain__UFunc_Nin2_Nout2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UFunc_Nin2_Nout2);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAliasType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAliasType);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ArrayLike_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ArrayLike_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_ArrayLike));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ArrayLike);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayLikeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayLikeAlias);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DTypeLike_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DTypeLike_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_DTypeLike));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DTypeLike);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain__DTypeLikeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DTypeLikeAlias);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_143ddc8a43f26e66228a7f4319ced27d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_143ddc8a43f26e66228a7f4319ced27d);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_c69a63bd547bf8b4c64d750babb86e66));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c69a63bd547bf8b4c64d750babb86e66);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 5
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
static PyObject *module_var_accessor_numpy$_typing$TypeAliasType(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_typing->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_typing->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAliasType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_typing->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeAliasType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeAliasType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeAliasType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeAliasType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAliasType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAliasType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAliasType);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_typing$_ArrayLikeAlias(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_typing->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_typing->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeAlias);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_typing->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ArrayLikeAlias);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ArrayLikeAlias, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ArrayLikeAlias);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ArrayLikeAlias, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeAlias);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeAlias);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeAlias);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_typing$_DTypeLikeAlias(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_typing->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_typing->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeAlias);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_typing->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DTypeLikeAlias);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DTypeLikeAlias, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DTypeLikeAlias);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DTypeLikeAlias, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeAlias);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeAlias);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeAlias);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_typing$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_typing->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_typing->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_typing->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_typing$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_typing->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_typing->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_typing->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_eab95b6d743235f5b40bf16baa6c7e80;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_143ddc8a43f26e66228a7f4319ced27d); CHECK_OBJECT(module_filename_obj);
code_objects_eab95b6d743235f5b40bf16baa6c7e80 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_c69a63bd547bf8b4c64d750babb86e66, mod_consts.const_str_digest_c69a63bd547bf8b4c64d750babb86e66, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_numpy$_typing[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$_typing);
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
        module_numpy$_typing,
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
        function_table_numpy$_typing,
        sizeof(function_table_numpy$_typing) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy._typing";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$_typing(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$_typing");

    // Store the module for future use.
    module_numpy$_typing = module;

    moduledict_numpy$_typing = MODULE_DICT(module_numpy$_typing);

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
        PRINT_STRING("numpy$_typing: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$_typing: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$_typing: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._typing" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$_typing\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$_typing,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$_typing,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$_typing,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_typing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_typing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$_typing);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$_typing);
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

        UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
PyObject *tmp_import_from_7__module = NULL;
PyObject *tmp_import_from_8__module = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_typing;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_1d7ee69e618355a9400270a8580a808d;
UPDATE_STRING_DICT0(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$_typing = MAKE_MODULE_FRAME(code_objects_eab95b6d743235f5b40bf16baa6c7e80, module_numpy$_typing);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_typing);
assert(Py_REFCNT(frame_frame_numpy$_typing) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_numpy$_typing->m_frame.f_lineno = 1;
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
frame_frame_numpy$_typing->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_numpy$_typing->m_frame.f_lineno = 1;
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
frame_frame_numpy$_typing->m_frame.f_lineno = 1;
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
frame_frame_numpy$_typing->m_frame.f_lineno = 1;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_fa3a28a416a76dcd3ce61a187389e54e_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain__typing;
frame_frame_numpy$_typing->m_frame.f_lineno = 1;
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
frame_frame_numpy$_typing->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


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
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_numpy$_typing->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_45beb79de3cb21f1e515c08be965cd88_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$_typing$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$_typing$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_numpy$_typing$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_numpy$_typing$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain__array_like;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$_typing;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_ecbd1eef786b43a673b97441b90d4b03_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_numpy$_typing->m_frame.f_lineno = 5;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain_NDArray,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_NDArray);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain_NDArray, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLike,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__ArrayLike);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLike, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeAnyString_co,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__ArrayLikeAnyString_co);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeAnyString_co, tmp_assign_source_9);
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
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeBool_co,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain__ArrayLikeBool_co);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeBool_co, tmp_assign_source_10);
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
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeBytes_co,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain__ArrayLikeBytes_co);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeBytes_co, tmp_assign_source_11);
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
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeComplex128_co,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain__ArrayLikeComplex128_co);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeComplex128_co, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeComplex_co,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain__ArrayLikeComplex_co);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeComplex_co, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeDT64_co,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain__ArrayLikeDT64_co);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeDT64_co, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeFloat64_co,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain__ArrayLikeFloat64_co);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeFloat64_co, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_10 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeFloat_co,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain__ArrayLikeFloat_co);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeFloat_co, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_11 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeInt,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain__ArrayLikeInt);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeInt, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_12 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeInt_co,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain__ArrayLikeInt_co);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeInt_co, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_13 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeNumber_co,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain__ArrayLikeNumber_co);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeNumber_co, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_14 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeObject_co,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain__ArrayLikeObject_co);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeObject_co, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_15 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeStr_co,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain__ArrayLikeStr_co);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeStr_co, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_16 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeString_co,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain__ArrayLikeString_co);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeString_co, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_17 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeTD64_co,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain__ArrayLikeTD64_co);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeTD64_co, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_18 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeUInt_co,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain__ArrayLikeUInt_co);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeUInt_co, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_19 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ArrayLikeVoid_co,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain__ArrayLikeVoid_co);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeVoid_co, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_20 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__FiniteNestedSequence,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain__FiniteNestedSequence);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__FiniteNestedSequence, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_21 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__SupportsArray,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain__SupportsArray);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__SupportsArray, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_22 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__SupportsArrayFunc,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain__SupportsArrayFunc);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__SupportsArrayFunc, tmp_assign_source_28);
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
PyObject *tmp_assign_source_29;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__char_codes;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$_typing;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_17a2fe59610bf17a6dc943d3af7a2b95_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_numpy$_typing->m_frame.f_lineno = 31;
tmp_assign_source_29 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_29;
}
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_23 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__BoolCodes,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain__BoolCodes);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__BoolCodes, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_24 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ByteCodes,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain__ByteCodes);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ByteCodes, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_25 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__BytesCodes,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain__BytesCodes);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__BytesCodes, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_26 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__CDoubleCodes,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain__CDoubleCodes);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__CDoubleCodes, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_27 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__CharacterCodes,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain__CharacterCodes);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__CharacterCodes, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_28 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__CLongDoubleCodes,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain__CLongDoubleCodes);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__CLongDoubleCodes, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_29;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_29 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__Complex64Codes,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain__Complex64Codes);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__Complex64Codes, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_30;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_30 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__Complex128Codes,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain__Complex128Codes);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__Complex128Codes, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_31;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_31 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ComplexFloatingCodes,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain__ComplexFloatingCodes);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ComplexFloatingCodes, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_32;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_32 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__CSingleCodes,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain__CSingleCodes);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__CSingleCodes, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_33;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_33 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__DoubleCodes,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain__DoubleCodes);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DoubleCodes, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_34;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_34 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__DT64Codes,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain__DT64Codes);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DT64Codes, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_35;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_35 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__FlexibleCodes,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain__FlexibleCodes);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__FlexibleCodes, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_36;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_36 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__Float16Codes,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain__Float16Codes);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__Float16Codes, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_37;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_37 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__Float32Codes,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain__Float32Codes);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__Float32Codes, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_38;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_38 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__Float64Codes,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain__Float64Codes);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__Float64Codes, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_39;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_39 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__FloatingCodes,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain__FloatingCodes);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__FloatingCodes, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_40;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_40 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__GenericCodes,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain__GenericCodes);
}

if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__GenericCodes, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_41;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_41 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__HalfCodes,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain__HalfCodes);
}

if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__HalfCodes, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_42;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_42 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__InexactCodes,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain__InexactCodes);
}

if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__InexactCodes, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_43;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_43 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_43)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_43,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__Int8Codes,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts.const_str_plain__Int8Codes);
}

if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__Int8Codes, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_import_name_from_44;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_44 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_44)) {
    tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_44,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__Int16Codes,
        const_int_0
    );
} else {
    tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts.const_str_plain__Int16Codes);
}

if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__Int16Codes, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_import_name_from_45;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_45 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_45)) {
    tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_45,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__Int32Codes,
        const_int_0
    );
} else {
    tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts.const_str_plain__Int32Codes);
}

if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__Int32Codes, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_import_name_from_46;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_46 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_46)) {
    tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_46,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__Int64Codes,
        const_int_0
    );
} else {
    tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts.const_str_plain__Int64Codes);
}

if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__Int64Codes, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_import_name_from_47;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_47 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_47)) {
    tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_47,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__IntCCodes,
        const_int_0
    );
} else {
    tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts.const_str_plain__IntCCodes);
}

if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__IntCCodes, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_import_name_from_48;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_48 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_48)) {
    tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_48,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__IntCodes,
        const_int_0
    );
} else {
    tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts.const_str_plain__IntCodes);
}

if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__IntCodes, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_import_name_from_49;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_49 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_49)) {
    tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_49,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__IntegerCodes,
        const_int_0
    );
} else {
    tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts.const_str_plain__IntegerCodes);
}

if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__IntegerCodes, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_import_name_from_50;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_50 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_50)) {
    tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_50,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__IntPCodes,
        const_int_0
    );
} else {
    tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts.const_str_plain__IntPCodes);
}

if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__IntPCodes, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_import_name_from_51;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_51 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_51)) {
    tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_51,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__LongCodes,
        const_int_0
    );
} else {
    tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts.const_str_plain__LongCodes);
}

if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__LongCodes, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_import_name_from_52;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_52 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_52)) {
    tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_52,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__LongDoubleCodes,
        const_int_0
    );
} else {
    tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts.const_str_plain__LongDoubleCodes);
}

if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__LongDoubleCodes, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_import_name_from_53;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_53 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_53)) {
    tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_53,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__LongLongCodes,
        const_int_0
    );
} else {
    tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts.const_str_plain__LongLongCodes);
}

if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__LongLongCodes, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_import_name_from_54;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_54 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_54)) {
    tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_54,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__NumberCodes,
        const_int_0
    );
} else {
    tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_54, mod_consts.const_str_plain__NumberCodes);
}

if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__NumberCodes, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_import_name_from_55;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_55 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_55)) {
    tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_55,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ObjectCodes,
        const_int_0
    );
} else {
    tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_55, mod_consts.const_str_plain__ObjectCodes);
}

if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ObjectCodes, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_import_name_from_56;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_56 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_56)) {
    tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_56,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ShortCodes,
        const_int_0
    );
} else {
    tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_56, mod_consts.const_str_plain__ShortCodes);
}

if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ShortCodes, tmp_assign_source_63);
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_import_name_from_57;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_57 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_57)) {
    tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_57,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__SignedIntegerCodes,
        const_int_0
    );
} else {
    tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_57, mod_consts.const_str_plain__SignedIntegerCodes);
}

if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__SignedIntegerCodes, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_import_name_from_58;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_58 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_58)) {
    tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_58,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__SingleCodes,
        const_int_0
    );
} else {
    tmp_assign_source_65 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_58, mod_consts.const_str_plain__SingleCodes);
}

if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__SingleCodes, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_import_name_from_59;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_59 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_59)) {
    tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_59,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__StrCodes,
        const_int_0
    );
} else {
    tmp_assign_source_66 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_59, mod_consts.const_str_plain__StrCodes);
}

if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__StrCodes, tmp_assign_source_66);
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_import_name_from_60;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_60 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_60)) {
    tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_60,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__StringCodes,
        const_int_0
    );
} else {
    tmp_assign_source_67 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_60, mod_consts.const_str_plain__StringCodes);
}

if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__StringCodes, tmp_assign_source_67);
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_import_name_from_61;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_61 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_61)) {
    tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_61,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__TD64Codes,
        const_int_0
    );
} else {
    tmp_assign_source_68 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_61, mod_consts.const_str_plain__TD64Codes);
}

if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__TD64Codes, tmp_assign_source_68);
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_import_name_from_62;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_62 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_62)) {
    tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_62,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__UByteCodes,
        const_int_0
    );
} else {
    tmp_assign_source_69 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_62, mod_consts.const_str_plain__UByteCodes);
}

if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__UByteCodes, tmp_assign_source_69);
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_import_name_from_63;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_63 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_63)) {
    tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_63,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__UInt8Codes,
        const_int_0
    );
} else {
    tmp_assign_source_70 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_63, mod_consts.const_str_plain__UInt8Codes);
}

if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__UInt8Codes, tmp_assign_source_70);
}
{
PyObject *tmp_assign_source_71;
PyObject *tmp_import_name_from_64;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_64 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_64)) {
    tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_64,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__UInt16Codes,
        const_int_0
    );
} else {
    tmp_assign_source_71 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_64, mod_consts.const_str_plain__UInt16Codes);
}

if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__UInt16Codes, tmp_assign_source_71);
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_import_name_from_65;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_65 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_65)) {
    tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_65,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__UInt32Codes,
        const_int_0
    );
} else {
    tmp_assign_source_72 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_65, mod_consts.const_str_plain__UInt32Codes);
}

if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__UInt32Codes, tmp_assign_source_72);
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_import_name_from_66;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_66 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_66)) {
    tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_66,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__UInt64Codes,
        const_int_0
    );
} else {
    tmp_assign_source_73 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_66, mod_consts.const_str_plain__UInt64Codes);
}

if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__UInt64Codes, tmp_assign_source_73);
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_import_name_from_67;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_67 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_67)) {
    tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_67,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__UIntCCodes,
        const_int_0
    );
} else {
    tmp_assign_source_74 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_67, mod_consts.const_str_plain__UIntCCodes);
}

if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__UIntCCodes, tmp_assign_source_74);
}
{
PyObject *tmp_assign_source_75;
PyObject *tmp_import_name_from_68;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_68 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_68)) {
    tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_68,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__UIntCodes,
        const_int_0
    );
} else {
    tmp_assign_source_75 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_68, mod_consts.const_str_plain__UIntCodes);
}

if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__UIntCodes, tmp_assign_source_75);
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_import_name_from_69;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_69 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_69)) {
    tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_69,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__UIntPCodes,
        const_int_0
    );
} else {
    tmp_assign_source_76 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_69, mod_consts.const_str_plain__UIntPCodes);
}

if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__UIntPCodes, tmp_assign_source_76);
}
{
PyObject *tmp_assign_source_77;
PyObject *tmp_import_name_from_70;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_70 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_70)) {
    tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_70,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ULongCodes,
        const_int_0
    );
} else {
    tmp_assign_source_77 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_70, mod_consts.const_str_plain__ULongCodes);
}

if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ULongCodes, tmp_assign_source_77);
}
{
PyObject *tmp_assign_source_78;
PyObject *tmp_import_name_from_71;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_71 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_71)) {
    tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_71,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ULongLongCodes,
        const_int_0
    );
} else {
    tmp_assign_source_78 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_71, mod_consts.const_str_plain__ULongLongCodes);
}

if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ULongLongCodes, tmp_assign_source_78);
}
{
PyObject *tmp_assign_source_79;
PyObject *tmp_import_name_from_72;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_72 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_72)) {
    tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_72,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__UnsignedIntegerCodes,
        const_int_0
    );
} else {
    tmp_assign_source_79 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_72, mod_consts.const_str_plain__UnsignedIntegerCodes);
}

if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__UnsignedIntegerCodes, tmp_assign_source_79);
}
{
PyObject *tmp_assign_source_80;
PyObject *tmp_import_name_from_73;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_73 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_73)) {
    tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_73,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__UShortCodes,
        const_int_0
    );
} else {
    tmp_assign_source_80 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_73, mod_consts.const_str_plain__UShortCodes);
}

if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__UShortCodes, tmp_assign_source_80);
}
{
PyObject *tmp_assign_source_81;
PyObject *tmp_import_name_from_74;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_74 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_74)) {
    tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_74,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__VoidCodes,
        const_int_0
    );
} else {
    tmp_assign_source_81 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_74, mod_consts.const_str_plain__VoidCodes);
}

if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__VoidCodes, tmp_assign_source_81);
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
PyObject *tmp_assign_source_82;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__dtype_like;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$_typing;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_7166ecc301a82310106ba4e19414b773_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_numpy$_typing->m_frame.f_lineno = 87;
tmp_assign_source_82 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_82;
}
// Tried code:
{
PyObject *tmp_assign_source_83;
PyObject *tmp_import_name_from_75;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_75 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_75)) {
    tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_75,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__DTypeLike,
        const_int_0
    );
} else {
    tmp_assign_source_83 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_75, mod_consts.const_str_plain__DTypeLike);
}

if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLike, tmp_assign_source_83);
}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_import_name_from_76;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_76 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_76)) {
    tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_76,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__DTypeLikeBool,
        const_int_0
    );
} else {
    tmp_assign_source_84 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_76, mod_consts.const_str_plain__DTypeLikeBool);
}

if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeBool, tmp_assign_source_84);
}
{
PyObject *tmp_assign_source_85;
PyObject *tmp_import_name_from_77;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_77 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_77)) {
    tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_77,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__DTypeLikeBytes,
        const_int_0
    );
} else {
    tmp_assign_source_85 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_77, mod_consts.const_str_plain__DTypeLikeBytes);
}

if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeBytes, tmp_assign_source_85);
}
{
PyObject *tmp_assign_source_86;
PyObject *tmp_import_name_from_78;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_78 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_78)) {
    tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_78,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__DTypeLikeComplex,
        const_int_0
    );
} else {
    tmp_assign_source_86 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_78, mod_consts.const_str_plain__DTypeLikeComplex);
}

if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeComplex, tmp_assign_source_86);
}
{
PyObject *tmp_assign_source_87;
PyObject *tmp_import_name_from_79;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_79 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_79)) {
    tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_79,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__DTypeLikeComplex_co,
        const_int_0
    );
} else {
    tmp_assign_source_87 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_79, mod_consts.const_str_plain__DTypeLikeComplex_co);
}

if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeComplex_co, tmp_assign_source_87);
}
{
PyObject *tmp_assign_source_88;
PyObject *tmp_import_name_from_80;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_80 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_80)) {
    tmp_assign_source_88 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_80,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__DTypeLikeDT64,
        const_int_0
    );
} else {
    tmp_assign_source_88 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_80, mod_consts.const_str_plain__DTypeLikeDT64);
}

if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeDT64, tmp_assign_source_88);
}
{
PyObject *tmp_assign_source_89;
PyObject *tmp_import_name_from_81;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_81 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_81)) {
    tmp_assign_source_89 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_81,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__DTypeLikeFloat,
        const_int_0
    );
} else {
    tmp_assign_source_89 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_81, mod_consts.const_str_plain__DTypeLikeFloat);
}

if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeFloat, tmp_assign_source_89);
}
{
PyObject *tmp_assign_source_90;
PyObject *tmp_import_name_from_82;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_82 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_82)) {
    tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_82,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__DTypeLikeInt,
        const_int_0
    );
} else {
    tmp_assign_source_90 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_82, mod_consts.const_str_plain__DTypeLikeInt);
}

if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeInt, tmp_assign_source_90);
}
{
PyObject *tmp_assign_source_91;
PyObject *tmp_import_name_from_83;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_83 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_83)) {
    tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_83,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__DTypeLikeObject,
        const_int_0
    );
} else {
    tmp_assign_source_91 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_83, mod_consts.const_str_plain__DTypeLikeObject);
}

if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeObject, tmp_assign_source_91);
}
{
PyObject *tmp_assign_source_92;
PyObject *tmp_import_name_from_84;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_84 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_84)) {
    tmp_assign_source_92 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_84,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__DTypeLikeStr,
        const_int_0
    );
} else {
    tmp_assign_source_92 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_84, mod_consts.const_str_plain__DTypeLikeStr);
}

if (tmp_assign_source_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeStr, tmp_assign_source_92);
}
{
PyObject *tmp_assign_source_93;
PyObject *tmp_import_name_from_85;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_85 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_85)) {
    tmp_assign_source_93 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_85,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__DTypeLikeTD64,
        const_int_0
    );
} else {
    tmp_assign_source_93 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_85, mod_consts.const_str_plain__DTypeLikeTD64);
}

if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeTD64, tmp_assign_source_93);
}
{
PyObject *tmp_assign_source_94;
PyObject *tmp_import_name_from_86;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_86 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_86)) {
    tmp_assign_source_94 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_86,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__DTypeLikeUInt,
        const_int_0
    );
} else {
    tmp_assign_source_94 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_86, mod_consts.const_str_plain__DTypeLikeUInt);
}

if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeUInt, tmp_assign_source_94);
}
{
PyObject *tmp_assign_source_95;
PyObject *tmp_import_name_from_87;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_87 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_87)) {
    tmp_assign_source_95 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_87,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__DTypeLikeVoid,
        const_int_0
    );
} else {
    tmp_assign_source_95 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_87, mod_consts.const_str_plain__DTypeLikeVoid);
}

if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeVoid, tmp_assign_source_95);
}
{
PyObject *tmp_assign_source_96;
PyObject *tmp_import_name_from_88;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_88 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_88)) {
    tmp_assign_source_96 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_88,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__HasDType,
        const_int_0
    );
} else {
    tmp_assign_source_96 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_88, mod_consts.const_str_plain__HasDType);
}

if (tmp_assign_source_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__HasDType, tmp_assign_source_96);
}
{
PyObject *tmp_assign_source_97;
PyObject *tmp_import_name_from_89;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_89 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_89)) {
    tmp_assign_source_97 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_89,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__SupportsDType,
        const_int_0
    );
} else {
    tmp_assign_source_97 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_89, mod_consts.const_str_plain__SupportsDType);
}

if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__SupportsDType, tmp_assign_source_97);
}
{
PyObject *tmp_assign_source_98;
PyObject *tmp_import_name_from_90;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_90 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_90)) {
    tmp_assign_source_98 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_90,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__VoidDTypeLike,
        const_int_0
    );
} else {
    tmp_assign_source_98 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_90, mod_consts.const_str_plain__VoidDTypeLike);
}

if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__VoidDTypeLike, tmp_assign_source_98);
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
PyObject *tmp_assign_source_99;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__nbit;
tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy$_typing;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_e6cb4c6dbdba6c875691c1c0633e98ae_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_numpy$_typing->m_frame.f_lineno = 107;
tmp_assign_source_99 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_99;
}
// Tried code:
{
PyObject *tmp_assign_source_100;
PyObject *tmp_import_name_from_91;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_91 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_91)) {
    tmp_assign_source_100 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_91,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__NBitByte,
        const_int_0
    );
} else {
    tmp_assign_source_100 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_91, mod_consts.const_str_plain__NBitByte);
}

if (tmp_assign_source_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__NBitByte, tmp_assign_source_100);
}
{
PyObject *tmp_assign_source_101;
PyObject *tmp_import_name_from_92;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_92 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_92)) {
    tmp_assign_source_101 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_92,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__NBitDouble,
        const_int_0
    );
} else {
    tmp_assign_source_101 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_92, mod_consts.const_str_plain__NBitDouble);
}

if (tmp_assign_source_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__NBitDouble, tmp_assign_source_101);
}
{
PyObject *tmp_assign_source_102;
PyObject *tmp_import_name_from_93;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_93 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_93)) {
    tmp_assign_source_102 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_93,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__NBitHalf,
        const_int_0
    );
} else {
    tmp_assign_source_102 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_93, mod_consts.const_str_plain__NBitHalf);
}

if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__NBitHalf, tmp_assign_source_102);
}
{
PyObject *tmp_assign_source_103;
PyObject *tmp_import_name_from_94;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_94 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_94)) {
    tmp_assign_source_103 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_94,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__NBitInt,
        const_int_0
    );
} else {
    tmp_assign_source_103 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_94, mod_consts.const_str_plain__NBitInt);
}

if (tmp_assign_source_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__NBitInt, tmp_assign_source_103);
}
{
PyObject *tmp_assign_source_104;
PyObject *tmp_import_name_from_95;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_95 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_95)) {
    tmp_assign_source_104 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_95,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__NBitIntC,
        const_int_0
    );
} else {
    tmp_assign_source_104 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_95, mod_consts.const_str_plain__NBitIntC);
}

if (tmp_assign_source_104 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__NBitIntC, tmp_assign_source_104);
}
{
PyObject *tmp_assign_source_105;
PyObject *tmp_import_name_from_96;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_96 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_96)) {
    tmp_assign_source_105 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_96,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__NBitIntP,
        const_int_0
    );
} else {
    tmp_assign_source_105 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_96, mod_consts.const_str_plain__NBitIntP);
}

if (tmp_assign_source_105 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__NBitIntP, tmp_assign_source_105);
}
{
PyObject *tmp_assign_source_106;
PyObject *tmp_import_name_from_97;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_97 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_97)) {
    tmp_assign_source_106 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_97,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__NBitLong,
        const_int_0
    );
} else {
    tmp_assign_source_106 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_97, mod_consts.const_str_plain__NBitLong);
}

if (tmp_assign_source_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__NBitLong, tmp_assign_source_106);
}
{
PyObject *tmp_assign_source_107;
PyObject *tmp_import_name_from_98;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_98 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_98)) {
    tmp_assign_source_107 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_98,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__NBitLongDouble,
        const_int_0
    );
} else {
    tmp_assign_source_107 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_98, mod_consts.const_str_plain__NBitLongDouble);
}

if (tmp_assign_source_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__NBitLongDouble, tmp_assign_source_107);
}
{
PyObject *tmp_assign_source_108;
PyObject *tmp_import_name_from_99;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_99 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_99)) {
    tmp_assign_source_108 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_99,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__NBitLongLong,
        const_int_0
    );
} else {
    tmp_assign_source_108 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_99, mod_consts.const_str_plain__NBitLongLong);
}

if (tmp_assign_source_108 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__NBitLongLong, tmp_assign_source_108);
}
{
PyObject *tmp_assign_source_109;
PyObject *tmp_import_name_from_100;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_100 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_100)) {
    tmp_assign_source_109 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_100,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__NBitShort,
        const_int_0
    );
} else {
    tmp_assign_source_109 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_100, mod_consts.const_str_plain__NBitShort);
}

if (tmp_assign_source_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__NBitShort, tmp_assign_source_109);
}
{
PyObject *tmp_assign_source_110;
PyObject *tmp_import_name_from_101;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_101 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_101)) {
    tmp_assign_source_110 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_101,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__NBitSingle,
        const_int_0
    );
} else {
    tmp_assign_source_110 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_101, mod_consts.const_str_plain__NBitSingle);
}

if (tmp_assign_source_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__NBitSingle, tmp_assign_source_110);
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
PyObject *tmp_assign_source_111;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__nbit_base;
tmp_globals_arg_value_5 = (PyObject *)moduledict_numpy$_typing;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_d472c50bb8310669f9f762e364a54ab2_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_numpy$_typing->m_frame.f_lineno = 122;
tmp_assign_source_111 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_111 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_111;
}
// Tried code:
{
PyObject *tmp_assign_source_112;
PyObject *tmp_import_name_from_102;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_102 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_102)) {
    tmp_assign_source_112 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_102,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain_NBitBase,
        const_int_0
    );
} else {
    tmp_assign_source_112 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_102, mod_consts.const_str_plain_NBitBase);
}

if (tmp_assign_source_112 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain_NBitBase, tmp_assign_source_112);
}
{
PyObject *tmp_assign_source_113;
PyObject *tmp_import_name_from_103;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_103 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_103)) {
    tmp_assign_source_113 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_103,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__8Bit,
        const_int_0
    );
} else {
    tmp_assign_source_113 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_103, mod_consts.const_str_plain__8Bit);
}

if (tmp_assign_source_113 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__8Bit, tmp_assign_source_113);
}
{
PyObject *tmp_assign_source_114;
PyObject *tmp_import_name_from_104;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_104 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_104)) {
    tmp_assign_source_114 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_104,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__16Bit,
        const_int_0
    );
} else {
    tmp_assign_source_114 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_104, mod_consts.const_str_plain__16Bit);
}

if (tmp_assign_source_114 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__16Bit, tmp_assign_source_114);
}
{
PyObject *tmp_assign_source_115;
PyObject *tmp_import_name_from_105;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_105 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_105)) {
    tmp_assign_source_115 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_105,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__32Bit,
        const_int_0
    );
} else {
    tmp_assign_source_115 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_105, mod_consts.const_str_plain__32Bit);
}

if (tmp_assign_source_115 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__32Bit, tmp_assign_source_115);
}
{
PyObject *tmp_assign_source_116;
PyObject *tmp_import_name_from_106;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_106 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_106)) {
    tmp_assign_source_116 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_106,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__64Bit,
        const_int_0
    );
} else {
    tmp_assign_source_116 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_106, mod_consts.const_str_plain__64Bit);
}

if (tmp_assign_source_116 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__64Bit, tmp_assign_source_116);
}
{
PyObject *tmp_assign_source_117;
PyObject *tmp_import_name_from_107;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_107 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_107)) {
    tmp_assign_source_117 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_107,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__96Bit,
        const_int_0
    );
} else {
    tmp_assign_source_117 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_107, mod_consts.const_str_plain__96Bit);
}

if (tmp_assign_source_117 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__96Bit, tmp_assign_source_117);
}
{
PyObject *tmp_assign_source_118;
PyObject *tmp_import_name_from_108;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_108 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_108)) {
    tmp_assign_source_118 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_108,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__128Bit,
        const_int_0
    );
} else {
    tmp_assign_source_118 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_108, mod_consts.const_str_plain__128Bit);
}

if (tmp_assign_source_118 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__128Bit, tmp_assign_source_118);
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
PyObject *tmp_assign_source_119;
PyObject *tmp_import_name_from_109;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__nested_sequence;
tmp_globals_arg_value_6 = (PyObject *)moduledict_numpy$_typing;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain__NestedSequence_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_numpy$_typing->m_frame.f_lineno = 133;
tmp_import_name_from_109 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_109)) {
    tmp_assign_source_119 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_109,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__NestedSequence,
        const_int_0
    );
} else {
    tmp_assign_source_119 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_109, mod_consts.const_str_plain__NestedSequence);
}

CHECK_OBJECT(tmp_import_name_from_109);
Py_DECREF(tmp_import_name_from_109);
if (tmp_assign_source_119 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__NestedSequence, tmp_assign_source_119);
}
{
PyObject *tmp_assign_source_120;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__scalars;
tmp_globals_arg_value_7 = (PyObject *)moduledict_numpy$_typing;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_4b8185cc0ee52b7e951b5694d743dc68_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_numpy$_typing->m_frame.f_lineno = 136;
tmp_assign_source_120 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_120 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_120;
}
// Tried code:
{
PyObject *tmp_assign_source_121;
PyObject *tmp_import_name_from_110;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_110 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_110)) {
    tmp_assign_source_121 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_110,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__BoolLike_co,
        const_int_0
    );
} else {
    tmp_assign_source_121 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_110, mod_consts.const_str_plain__BoolLike_co);
}

if (tmp_assign_source_121 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__BoolLike_co, tmp_assign_source_121);
}
{
PyObject *tmp_assign_source_122;
PyObject *tmp_import_name_from_111;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_111 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_111)) {
    tmp_assign_source_122 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_111,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__CharLike_co,
        const_int_0
    );
} else {
    tmp_assign_source_122 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_111, mod_consts.const_str_plain__CharLike_co);
}

if (tmp_assign_source_122 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__CharLike_co, tmp_assign_source_122);
}
{
PyObject *tmp_assign_source_123;
PyObject *tmp_import_name_from_112;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_112 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_112)) {
    tmp_assign_source_123 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_112,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ComplexLike_co,
        const_int_0
    );
} else {
    tmp_assign_source_123 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_112, mod_consts.const_str_plain__ComplexLike_co);
}

if (tmp_assign_source_123 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ComplexLike_co, tmp_assign_source_123);
}
{
PyObject *tmp_assign_source_124;
PyObject *tmp_import_name_from_113;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_113 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_113)) {
    tmp_assign_source_124 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_113,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__FloatLike_co,
        const_int_0
    );
} else {
    tmp_assign_source_124 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_113, mod_consts.const_str_plain__FloatLike_co);
}

if (tmp_assign_source_124 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__FloatLike_co, tmp_assign_source_124);
}
{
PyObject *tmp_assign_source_125;
PyObject *tmp_import_name_from_114;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_114 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_114)) {
    tmp_assign_source_125 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_114,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__IntLike_co,
        const_int_0
    );
} else {
    tmp_assign_source_125 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_114, mod_consts.const_str_plain__IntLike_co);
}

if (tmp_assign_source_125 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__IntLike_co, tmp_assign_source_125);
}
{
PyObject *tmp_assign_source_126;
PyObject *tmp_import_name_from_115;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_115 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_115)) {
    tmp_assign_source_126 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_115,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__NumberLike_co,
        const_int_0
    );
} else {
    tmp_assign_source_126 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_115, mod_consts.const_str_plain__NumberLike_co);
}

if (tmp_assign_source_126 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__NumberLike_co, tmp_assign_source_126);
}
{
PyObject *tmp_assign_source_127;
PyObject *tmp_import_name_from_116;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_116 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_116)) {
    tmp_assign_source_127 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_116,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ScalarLike_co,
        const_int_0
    );
} else {
    tmp_assign_source_127 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_116, mod_consts.const_str_plain__ScalarLike_co);
}

if (tmp_assign_source_127 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ScalarLike_co, tmp_assign_source_127);
}
{
PyObject *tmp_assign_source_128;
PyObject *tmp_import_name_from_117;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_117 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_117)) {
    tmp_assign_source_128 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_117,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__TD64Like_co,
        const_int_0
    );
} else {
    tmp_assign_source_128 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_117, mod_consts.const_str_plain__TD64Like_co);
}

if (tmp_assign_source_128 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__TD64Like_co, tmp_assign_source_128);
}
{
PyObject *tmp_assign_source_129;
PyObject *tmp_import_name_from_118;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_118 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_118)) {
    tmp_assign_source_129 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_118,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__UIntLike_co,
        const_int_0
    );
} else {
    tmp_assign_source_129 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_118, mod_consts.const_str_plain__UIntLike_co);
}

if (tmp_assign_source_129 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__UIntLike_co, tmp_assign_source_129);
}
{
PyObject *tmp_assign_source_130;
PyObject *tmp_import_name_from_119;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_119 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_119)) {
    tmp_assign_source_130 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_119,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__VoidLike_co,
        const_int_0
    );
} else {
    tmp_assign_source_130 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_119, mod_consts.const_str_plain__VoidLike_co);
}

if (tmp_assign_source_130 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__VoidLike_co, tmp_assign_source_130);
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
PyObject *tmp_assign_source_131;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__shape;
tmp_globals_arg_value_8 = (PyObject *)moduledict_numpy$_typing;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain__AnyShape_str_plain__Shape_str_plain__ShapeLike_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_numpy$_typing->m_frame.f_lineno = 150;
tmp_assign_source_131 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_131 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_7__module == NULL);
tmp_import_from_7__module = tmp_assign_source_131;
}
// Tried code:
{
PyObject *tmp_assign_source_132;
PyObject *tmp_import_name_from_120;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_120 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_120)) {
    tmp_assign_source_132 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_120,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__AnyShape,
        const_int_0
    );
} else {
    tmp_assign_source_132 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_120, mod_consts.const_str_plain__AnyShape);
}

if (tmp_assign_source_132 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__AnyShape, tmp_assign_source_132);
}
{
PyObject *tmp_assign_source_133;
PyObject *tmp_import_name_from_121;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_121 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_121)) {
    tmp_assign_source_133 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_121,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__Shape,
        const_int_0
    );
} else {
    tmp_assign_source_133 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_121, mod_consts.const_str_plain__Shape);
}

if (tmp_assign_source_133 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__Shape, tmp_assign_source_133);
}
{
PyObject *tmp_assign_source_134;
PyObject *tmp_import_name_from_122;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_122 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_122)) {
    tmp_assign_source_134 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_122,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__ShapeLike,
        const_int_0
    );
} else {
    tmp_assign_source_134 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_122, mod_consts.const_str_plain__ShapeLike);
}

if (tmp_assign_source_134 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ShapeLike, tmp_assign_source_134);
}
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_7__module);
CHECK_OBJECT(tmp_import_from_7__module);
Py_DECREF(tmp_import_from_7__module);
tmp_import_from_7__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_import_from_7__module);
CHECK_OBJECT(tmp_import_from_7__module);
Py_DECREF(tmp_import_from_7__module);
tmp_import_from_7__module = NULL;
{
PyObject *tmp_assign_source_135;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__ufunc;
tmp_globals_arg_value_9 = (PyObject *)moduledict_numpy$_typing;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_4f659769c5e9deb57390b2fbbc361cb2_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_numpy$_typing->m_frame.f_lineno = 153;
tmp_assign_source_135 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_135 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_8__module == NULL);
tmp_import_from_8__module = tmp_assign_source_135;
}
// Tried code:
{
PyObject *tmp_assign_source_136;
PyObject *tmp_import_name_from_123;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_123 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_123)) {
    tmp_assign_source_136 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_123,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__GUFunc_Nin2_Nout1,
        const_int_0
    );
} else {
    tmp_assign_source_136 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_123, mod_consts.const_str_plain__GUFunc_Nin2_Nout1);
}

if (tmp_assign_source_136 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__GUFunc_Nin2_Nout1, tmp_assign_source_136);
}
{
PyObject *tmp_assign_source_137;
PyObject *tmp_import_name_from_124;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_124 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_124)) {
    tmp_assign_source_137 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_124,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__UFunc_Nin1_Nout1,
        const_int_0
    );
} else {
    tmp_assign_source_137 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_124, mod_consts.const_str_plain__UFunc_Nin1_Nout1);
}

if (tmp_assign_source_137 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__UFunc_Nin1_Nout1, tmp_assign_source_137);
}
{
PyObject *tmp_assign_source_138;
PyObject *tmp_import_name_from_125;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_125 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_125)) {
    tmp_assign_source_138 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_125,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__UFunc_Nin1_Nout2,
        const_int_0
    );
} else {
    tmp_assign_source_138 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_125, mod_consts.const_str_plain__UFunc_Nin1_Nout2);
}

if (tmp_assign_source_138 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__UFunc_Nin1_Nout2, tmp_assign_source_138);
}
{
PyObject *tmp_assign_source_139;
PyObject *tmp_import_name_from_126;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_126 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_126)) {
    tmp_assign_source_139 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_126,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__UFunc_Nin2_Nout1,
        const_int_0
    );
} else {
    tmp_assign_source_139 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_126, mod_consts.const_str_plain__UFunc_Nin2_Nout1);
}

if (tmp_assign_source_139 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__UFunc_Nin2_Nout1, tmp_assign_source_139);
}
{
PyObject *tmp_assign_source_140;
PyObject *tmp_import_name_from_127;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_127 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_127)) {
    tmp_assign_source_140 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_127,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain__UFunc_Nin2_Nout2,
        const_int_0
    );
} else {
    tmp_assign_source_140 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_127, mod_consts.const_str_plain__UFunc_Nin2_Nout2);
}

if (tmp_assign_source_140 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__UFunc_Nin2_Nout2, tmp_assign_source_140);
}
goto try_end_8;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_8__module);
CHECK_OBJECT(tmp_import_from_8__module);
Py_DECREF(tmp_import_from_8__module);
tmp_import_from_8__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_import_from_8__module);
CHECK_OBJECT(tmp_import_from_8__module);
Py_DECREF(tmp_import_from_8__module);
tmp_import_from_8__module = NULL;
{
PyObject *tmp_assign_source_141;
PyObject *tmp_import_name_from_128;
tmp_import_name_from_128 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_128 == NULL));
if (PyModule_Check(tmp_import_name_from_128)) {
    tmp_assign_source_141 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_128,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain_TypeAliasType,
        const_int_0
    );
} else {
    tmp_assign_source_141 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_128, mod_consts.const_str_plain_TypeAliasType);
}

if (tmp_assign_source_141 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAliasType, tmp_assign_source_141);
}
{
PyObject *tmp_assign_source_142;
PyObject *tmp_import_name_from_129;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain__array_like;
tmp_globals_arg_value_10 = (PyObject *)moduledict_numpy$_typing;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_ArrayLike_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_numpy$_typing->m_frame.f_lineno = 165;
tmp_import_name_from_129 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_129 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_129)) {
    tmp_assign_source_142 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_129,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain_ArrayLike,
        const_int_0
    );
} else {
    tmp_assign_source_142 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_129, mod_consts.const_str_plain_ArrayLike);
}

CHECK_OBJECT(tmp_import_name_from_129);
Py_DECREF(tmp_import_name_from_129);
if (tmp_assign_source_142 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayLikeAlias, tmp_assign_source_142);
}
{
PyObject *tmp_assign_source_143;
PyObject *tmp_import_name_from_130;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain__dtype_like;
tmp_globals_arg_value_11 = (PyObject *)moduledict_numpy$_typing;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_DTypeLike_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_numpy$_typing->m_frame.f_lineno = 166;
tmp_import_name_from_130 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_130 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_130)) {
    tmp_assign_source_143 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_130,
        (PyObject *)moduledict_numpy$_typing,
        mod_consts.const_str_plain_DTypeLike,
        const_int_0
    );
} else {
    tmp_assign_source_143 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_130, mod_consts.const_str_plain_DTypeLike);
}

CHECK_OBJECT(tmp_import_name_from_130);
Py_DECREF(tmp_import_name_from_130);
if (tmp_assign_source_143 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain__DTypeLikeAlias, tmp_assign_source_143);
}
{
PyObject *tmp_assign_source_144;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_5 = module_var_accessor_numpy$_typing$TypeAliasType(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeAliasType);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;

    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_plain_ArrayLike;
tmp_args_element_value_5 = module_var_accessor_numpy$_typing$_ArrayLikeAlias(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ArrayLikeAlias);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_typing->m_frame.f_lineno = 168;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_144 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_assign_source_144 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain_ArrayLike, tmp_assign_source_144);
}
{
PyObject *tmp_assign_source_145;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_6 = module_var_accessor_numpy$_typing$TypeAliasType(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeAliasType);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;

    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = mod_consts.const_str_plain_DTypeLike;
tmp_args_element_value_7 = module_var_accessor_numpy$_typing$_DTypeLikeAlias(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DTypeLikeAlias);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_typing->m_frame.f_lineno = 169;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_145 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

if (tmp_assign_source_145 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing, (Nuitka_StringObject *)mod_consts.const_str_plain_DTypeLike, tmp_assign_source_145);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_typing, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_typing->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_typing, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$_typing);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$_typing", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._typing" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$_typing);
    return module_numpy$_typing;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_typing, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$_typing", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

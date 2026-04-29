
//
// public/mathlib/ssemath_impl.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 144
//

// <044DAB76> ../public/mathlib/ssemath_impl.h:92
inline float SubFloat<>(const fltx4& a, int idx)
{
} /* size: 0 */

// <005113DD> ../public/mathlib/ssemath_impl.h:92
inline float SubFloat<(ESIMDLevel)20>(const fltx4& a, int idx)
{
} /* size: 0 */

// <04AADC3D> ../public/mathlib/ssemath_impl.h:100
inline void ExtractFloat<0>(const fltx4& a)
{
} /* size: 0 */

// <04AADC1E> ../public/mathlib/ssemath_impl.h:100
inline void ExtractFloat<3>(const fltx4& a)
{
} /* size: 0 */

// <04AADBFF> ../public/mathlib/ssemath_impl.h:100
inline void ExtractFloat<1>(const fltx4& a)
{
} /* size: 0 */

// <04AADBE0> ../public/mathlib/ssemath_impl.h:100
inline void ExtractFloat<2>(const fltx4& a)
{
} /* size: 0 */

// <044A9A49> ../public/mathlib/ssemath_impl.h:134
// variables: 2
inline fltx4 Load4Floats<(ESIMDLevel)40>(const float* p0, const float* p1, const float* p2, const float* p3)
{
	fltx4 retVal; // 172
	{
		fltx4 retVal; // 152
	}
} /* size: 0, variables: 1 */

// <044A94A3> ../public/mathlib/ssemath_impl.h:134
// variables: 2
inline fltx4 Load4Floats<(ESIMDLevel)20>(const float* p0, const float* p1, const float* p2, const float* p3)
{
	fltx4 retVal; // 172
	{
		fltx4 retVal; // 152
	}
} /* size: 0, variables: 1 */

// <003C9EE5> ../public/mathlib/ssemath_impl.h:181
// variables: 2
inline fltx4 Set4Floats<>(float p0, float p1, float p2, float p3)
{
	fltx4 retVal; // 206
	{
		fltx4 retVal; // 186
	}
} /* size: 0, variables: 1 */

// <04AADBB5> ../public/mathlib/ssemath_impl.h:217
inline void InsertFloat<0>(fltx4& a, float flValue)
{
} /* size: 0 */

// <04AADB8A> ../public/mathlib/ssemath_impl.h:217
inline void InsertFloat<1>(fltx4& a, float flValue)
{
} /* size: 0 */

// <04AADB5F> ../public/mathlib/ssemath_impl.h:217
inline void InsertFloat<2>(fltx4& a, float flValue)
{
} /* size: 0 */

// <04AADB34> ../public/mathlib/ssemath_impl.h:217
inline void InsertFloat<3>(fltx4& a, float flValue)
{
} /* size: 0 */

// <00ED612B> ../public/mathlib/ssemath_impl.h:222
inline float& SubFloat<>(fltx4& a, int idx)
{
} /* size: 0 */

// <026D9747> ../public/mathlib/ssemath_impl.h:268
inline void StoreAlignedSIMD<>(float* pSIMD, const fltx4& a)
{
} /* size: 0 */

// <026D977F> ../public/mathlib/ssemath_impl.h:289
// variable: 1
inline void StoreUnalignedSIMD<>(float* pSIMD, const fltx4& a)
{
	CUnalignedPointer<float> unalignedDest; // 307
} /* size: 0, variables: 1 */

// <04498867> ../public/mathlib/ssemath_impl.h:336
// variables: 2
inline fltx4 RotateLeft<(ESIMDLevel)40>(const fltx4& a)
{
	fltx4 retVal; // 358
	{
		fltx4 retVal; // 341
	}
} /* size: 0, variables: 1 */

// <003C97E6> ../public/mathlib/ssemath_impl.h:336
// variables: 2
inline fltx4 RotateLeft<>(const fltx4& a)
{
	fltx4 retVal; // 358
	{
		fltx4 retVal; // 341
	}
} /* size: 0, variables: 1 */

// <0594AC57> ../../public/mathlib/ssemath_impl.h:368
// variables: 2
inline fltx4 RotateLeft2<(ESIMDLevel)20>(const fltx4& a)
{
	fltx4 retVal; // 390
	{
		fltx4 retVal; // 373
	}
} /* size: 0, variables: 1 */

// <003C96A1> ../public/mathlib/ssemath_impl.h:368
// variables: 2
inline fltx4 RotateLeft2<>(const fltx4& a)
{
	fltx4 retVal; // 390
	{
		fltx4 retVal; // 373
	}
} /* size: 0, variables: 1 */

// <044DA740> ../public/mathlib/ssemath_impl.h:399
// variables: 2
inline fltx4 RotateRight<>(const fltx4& a)
{
	fltx4 retVal; // 421
	{
		fltx4 retVal; // 404
	}
} /* size: 0, variables: 1 */

// <05A1CC3C> ../public/mathlib/ssemath_impl.h:430
// variables: 2
inline fltx4 RotateRight2<>(const fltx4& a)
{
	fltx4 retVal; // 452
	{
		fltx4 retVal; // 435
	}
} /* size: 0, variables: 1 */

// <00DCEFD7> ../public/mathlib/ssemath_impl.h:461
// variable: 1
inline void StoreUnaligned3SIMD<>(float* pSIMD, const fltx4& a)
{
	CUnalignedPointer<float> unalignedDest; // 483
} /* size: 0, variables: 1 */

// <05EF1686> ../public/mathlib/ssemath_impl.h:523
// variable: 1
inline void StoreUnalignedFloat<>(float* pSingleFloat, const fltx4& a)
{
	CUnalignedPointer<float> unalignedDest; // 541
} /* size: 0, variables: 1 */

// <044988B0> ../public/mathlib/ssemath_impl.h:523
// variable: 1
inline void StoreUnalignedFloat<(ESIMDLevel)40>(float* pSingleFloat, const fltx4& a)
{
	CUnalignedPointer<float> unalignedDest; // 541
} /* size: 0, variables: 1 */

// <04498824> ../public/mathlib/ssemath_impl.h:523
// variable: 1
inline void StoreUnalignedFloat<(ESIMDLevel)20>(float* pSingleFloat, const fltx4& a)
{
	CUnalignedPointer<float> unalignedDest; // 541
} /* size: 0, variables: 1 */

// <044A96C1> ../public/mathlib/ssemath_impl.h:550
// variable: 1
inline void Store4Floats<(ESIMDLevel)40>(const fltx4& a, float* p0, float* p1, float* p2, float* p3)
{
	{
		fltx4 fl4Val; // 556
	}
} /* size: 0 */

// <044A9284> ../public/mathlib/ssemath_impl.h:550
// variable: 1
inline void Store4Floats<(ESIMDLevel)20>(const fltx4& a, float* p0, float* p1, float* p2, float* p3)
{
	{
		fltx4 fl4Val; // 556
	}
} /* size: 0 */

// <044A97D1> ../public/mathlib/ssemath_impl.h:597
// variable: 1
inline fltx4 LoadAlignedSIMD<(ESIMDLevel)40>(const void* pSIMD)
{
	{
		fltx4 retVal; // 602
	}
} /* size: 0 */

// <003C9B1E> ../public/mathlib/ssemath_impl.h:597
// variable: 1
inline fltx4 LoadAlignedSIMD<>(const void* pSIMD)
{
	{
		fltx4 retVal; // 602
	}
} /* size: 0 */

// <06D6B47F> ../../public/mathlib/ssemath_impl.h:650
// variables: 3
inline i16x8 LoadUnalignedShortSIMD<>(const void* pSIMD)
{
	const int16* pnSIMD; // 661
	i16x8 retVal; // 662
	{
		__m128i retVal; // 655
	}
} /* size: 0, variables: 2 */

// <06D6B428> ../../public/mathlib/ssemath_impl.h:674
// variables: 3
inline i32x4 ExtractLowSignedShortsAsIntSIMD<>(const i16x8& a)
{
	i32x4 retVal; // 685
	{
		__m128i signExtend; // 679
		__m128i retVal; // 680
	}
} /* size: 0, variables: 1 */

// <06D6B379> ../../public/mathlib/ssemath_impl.h:693
// variables: 3
inline i32x4 ExtractHighSignedShortsAsIntSIMD<>(const i16x8& a)
{
	i32x4 retVal; // 704
	{
		__m128i signExtend; // 698
		__m128i retVal; // 699
	}
} /* size: 0, variables: 1 */

// <05A1C8F7> ../public/mathlib/ssemath_impl.h:713
// variables: 2
inline fltx4 AndSIMD<(ESIMDLevel)20>(const fltx4& a, const fltx4& b)
{
	i32x4 retVal; // 733
	{
		fltx4 retVal; // 718
	}
} /* size: 0, variables: 1 */

// <0449004A> ../public/mathlib/ssemath_impl.h:713
// variables: 2
inline fltx4 AndSIMD<(ESIMDLevel)40>(const fltx4& a, const fltx4& b)
{
	i32x4 retVal; // 733
	{
		fltx4 retVal; // 718
	}
} /* size: 0, variables: 1 */

// <003C9AC9> ../public/mathlib/ssemath_impl.h:713
// variables: 2
inline fltx4 AndSIMD<>(const fltx4& a, const fltx4& b)
{
	i32x4 retVal; // 733
	{
		fltx4 retVal; // 718
	}
} /* size: 0, variables: 1 */

// <044D5788> ../public/mathlib/ssemath_impl.h:762
// variables: 2
inline fltx4 AndNotSIMD<>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 782
	{
		fltx4 retVal; // 767
	}
} /* size: 0, variables: 1 */

// <044A977D> ../public/mathlib/ssemath_impl.h:762
// variables: 2
inline fltx4 AndNotSIMD<(ESIMDLevel)40>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 782
	{
		fltx4 retVal; // 767
	}
} /* size: 0, variables: 1 */

// <05A1C94B> ../public/mathlib/ssemath_impl.h:821
// variables: 2
inline fltx4 XorSIMD<(ESIMDLevel)20>(const fltx4& a, const fltx4& b)
{
	i32x4 retVal; // 841
	{
		fltx4 retVal; // 826
	}
} /* size: 0, variables: 1 */

// <0449009E> ../public/mathlib/ssemath_impl.h:821
// variables: 2
inline fltx4 XorSIMD<(ESIMDLevel)40>(const fltx4& a, const fltx4& b)
{
	i32x4 retVal; // 841
	{
		fltx4 retVal; // 826
	}
} /* size: 0, variables: 1 */

// <003C992B> ../public/mathlib/ssemath_impl.h:821
// variables: 2
inline fltx4 XorSIMD<>(const fltx4& a, const fltx4& b)
{
	i32x4 retVal; // 841
	{
		fltx4 retVal; // 826
	}
} /* size: 0, variables: 1 */

// <044A9729> ../public/mathlib/ssemath_impl.h:870
// variables: 2
inline fltx4 OrSIMD<(ESIMDLevel)40>(const fltx4& a, const fltx4& b)
{
	i32x4 retVal; // 890
	{
		fltx4 retVal; // 875
	}
} /* size: 0, variables: 1 */

// <003C9A74> ../public/mathlib/ssemath_impl.h:870
// variables: 2
inline fltx4 OrSIMD<>(const fltx4& a, const fltx4& b)
{
	i32x4 retVal; // 890
	{
		fltx4 retVal; // 875
	}
} /* size: 0, variables: 1 */

// <003C9A2A> ../public/mathlib/ssemath_impl.h:922
// variables: 2
inline fltx4 SetWToZeroSIMD<>(const fltx4& a)
{
	fltx4 retVal; // 935
	{
		fltx4 retVal; // 927
	}
} /* size: 0, variables: 1 */

// <00DCF0F1> ../public/mathlib/ssemath_impl.h:942
// variables: 3
inline fltx4 LoadUnalignedSIMD<>(const void* pSIMD)
{
	const float* pfSIMD; // 968
	fltx4 retVal; // 969
	{
		fltx4 retVal; // 947
	}
} /* size: 0, variables: 2 */

// <003C9B5D> ../public/mathlib/ssemath_impl.h:1003
// variables: 6
inline fltx4 LoadUnaligned3SIMD<>(const void* pSIMD)
{
	const float* pfSIMD; // 1005
	fltx4 retVal; // 1018
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
	}
} /* size: 0, variables: 2 */

// <05EF1981> ../public/mathlib/ssemath_impl.h:1046
// variables: 2
inline fltx4 LoadUnalignedFloatSIMD<>(const float* pFlt)
{
	fltx4 retVal; // 1066
	{
		fltx4 retVal; // 1051
	}
} /* size: 0, variables: 1 */

// <06316B91> ../public/mathlib/ssemath_impl.h:1071
// variable: 1
inline fltx4 CastToFltx4<>(const i32x4& a)
{
	{
		fltx4 retVal; // 1076
	}
} /* size: 0 */

// <00B17891> ../public/mathlib/ssemath_impl.h:1100
// variables: 2
inline i32x4 ReplicateIX4<>(int nValue)
{
	i32x4 retVal; // 1120
	{
		__m128i retVal; // 1105
	}
} /* size: 0, variables: 1 */

// <044A9AB0> ../public/mathlib/ssemath_impl.h:1129
// variables: 2
inline fltx4 ReplicateX4<(ESIMDLevel)40>(float flValue)
{
	fltx4 retVal; // 1149
	{
		fltx4 retVal; // 1134
	}
} /* size: 0, variables: 1 */

// <00D10AA1> ../public/mathlib/ssemath_impl.h:1129
// variables: 2
inline fltx4 ReplicateX4<>(float flValue)
{
	fltx4 retVal; // 1149
	{
		fltx4 retVal; // 1134
	}
} /* size: 0, variables: 1 */

// <00B18128> ../public/mathlib/ssemath_impl.h:1218
// variable: 1
inline fltx4 LoadZeroSIMD<>(void)
{
	{
		fltx4 retVal; // 1223
	}
} /* size: 0 */

// <05999D06> ../public/mathlib/ssemath_impl.h:1242
inline fltx4 LoadOneSIMD<>(void)
{
} /* size: 0 */

// <0449894C> ../public/mathlib/ssemath_impl.h:1247
inline fltx4 MaskedAssign<(ESIMDLevel)40>(const fltx4& ReplacementMask, const fltx4& a, const fltx4& b)
{
} /* size: 0 */

// <003C9D10> ../public/mathlib/ssemath_impl.h:1247
inline fltx4 MaskedAssign<>(const fltx4& ReplacementMask, const fltx4& a, const fltx4& b)
{
} /* size: 0 */

// <06D6B08B> ../../public/mathlib/ssemath_impl.h:1271
// variables: 2
inline void ShuffleSIMD<216>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1282
	{
		fltx4 retVal; // 1276
	}
} /* size: 0, variables: 1 */

// <05A4E42F> ../public/mathlib/ssemath_impl.h:1271
// variables: 2
inline void ShuffleSIMD<27>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1282
	{
		fltx4 retVal; // 1276
	}
} /* size: 0, variables: 1 */

// <05A4E3E8> ../public/mathlib/ssemath_impl.h:1271
// variables: 2
inline void ShuffleSIMD<177>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1282
	{
		fltx4 retVal; // 1276
	}
} /* size: 0, variables: 1 */

// <059997DD> ../public/mathlib/ssemath_impl.h:1271
// variables: 2
inline void ShuffleSIMD<68>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1282
	{
		fltx4 retVal; // 1276
	}
} /* size: 0, variables: 1 */

// <05999796> ../public/mathlib/ssemath_impl.h:1271
// variables: 2
inline void ShuffleSIMD<238>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1282
	{
		fltx4 retVal; // 1276
	}
} /* size: 0, variables: 1 */

// <0599974F> ../public/mathlib/ssemath_impl.h:1271
// variables: 2
inline void ShuffleSIMD<200>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1282
	{
		fltx4 retVal; // 1276
	}
} /* size: 0, variables: 1 */

// <05999708> ../public/mathlib/ssemath_impl.h:1271
// variables: 2
inline void ShuffleSIMD<221>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1282
	{
		fltx4 retVal; // 1276
	}
} /* size: 0, variables: 1 */

// <059996C1> ../public/mathlib/ssemath_impl.h:1271
// variables: 2
inline void ShuffleSIMD<232>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1282
	{
		fltx4 retVal; // 1276
	}
} /* size: 0, variables: 1 */

// <059995F4> ../public/mathlib/ssemath_impl.h:1271
// variables: 2
inline void ShuffleSIMD<4>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1282
	{
		fltx4 retVal; // 1276
	}
} /* size: 0, variables: 1 */

// <059995AD> ../public/mathlib/ssemath_impl.h:1271
// variables: 2
inline void ShuffleSIMD<14>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1282
	{
		fltx4 retVal; // 1276
	}
} /* size: 0, variables: 1 */

// <05999566> ../public/mathlib/ssemath_impl.h:1271
// variables: 2
inline void ShuffleSIMD<255>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1282
	{
		fltx4 retVal; // 1276
	}
} /* size: 0, variables: 1 */

// <0599951F> ../public/mathlib/ssemath_impl.h:1271
// variables: 2
inline void ShuffleSIMD<248>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1282
	{
		fltx4 retVal; // 1276
	}
} /* size: 0, variables: 1 */

// <0586BA38> ../../public/mathlib/ssemath_impl.h:1271
// variables: 2
inline void ShuffleSIMD<0>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1282
	{
		fltx4 retVal; // 1276
	}
} /* size: 0, variables: 1 */

// <0586B9F1> ../../public/mathlib/ssemath_impl.h:1271
// variables: 2
inline void ShuffleSIMD<136>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1282
	{
		fltx4 retVal; // 1276
	}
} /* size: 0, variables: 1 */

// <0586B9AA> ../../public/mathlib/ssemath_impl.h:1271
// variables: 2
inline void ShuffleSIMD<85>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1282
	{
		fltx4 retVal; // 1276
	}
} /* size: 0, variables: 1 */

// <003C9C71> ../public/mathlib/ssemath_impl.h:1290
// variables: 2
inline fltx4 SplatXSIMD<>(const fltx4& a)
{
	fltx4 retVal; // 1301
	{
		fltx4 retVal; // 1295
	}
} /* size: 0, variables: 1 */

// <003C9C27> ../public/mathlib/ssemath_impl.h:1309
// variables: 2
inline fltx4 SplatYSIMD<>(const fltx4& a)
{
	fltx4 retVal; // 1320
	{
		fltx4 retVal; // 1314
	}
} /* size: 0, variables: 1 */

// <003C9BDD> ../public/mathlib/ssemath_impl.h:1328
// variables: 2
inline fltx4 SplatZSIMD<>(const fltx4& a)
{
	fltx4 retVal; // 1339
	{
		fltx4 retVal; // 1333
	}
} /* size: 0, variables: 1 */

// <00DCF280> ../public/mathlib/ssemath_impl.h:1347
// variables: 2
inline fltx4 SplatWSIMD<>(const fltx4& a)
{
	fltx4 retVal; // 1358
	{
		fltx4 retVal; // 1352
	}
} /* size: 0, variables: 1 */

// <00DCF14A> ../public/mathlib/ssemath_impl.h:1366
// variables: 2
inline fltx4 SetXSIMD<>(const fltx4& a, const fltx4& x)
{
	fltx4 retVal; // 1377
	{
		fltx4 retVal; // 1371
	}
} /* size: 0, variables: 1 */

// <044AB5B6> ../public/mathlib/ssemath_impl.h:1408
// variable: 1
inline fltx4 SetWSIMD<(ESIMDLevel)20>(const fltx4& a, const fltx4& w)
{
	{
		fltx4 zzww; // 1414
	}
} /* size: 0 */

// <003C985E> ../public/mathlib/ssemath_impl.h:1408
// variable: 1
inline fltx4 SetWSIMD<>(const fltx4& a, const fltx4& w)
{
	{
		fltx4 zzww; // 1414
	}
} /* size: 0 */

// <00C85ECD> ../public/mathlib/ssemath_impl.h:1437
// variables: 2
inline fltx4 SetYSIMD<>(fltx4 a, float f)
{
	fltx4 retVal; // 1450
	{
		fltx4 retVal; // 1442
	}
} /* size: 0, variables: 1 */

// <00C85E77> ../public/mathlib/ssemath_impl.h:1455
// variables: 2
inline fltx4 SetZSIMD<>(fltx4 a, float f)
{
	fltx4 retVal; // 1468
	{
		fltx4 retVal; // 1460
	}
} /* size: 0, variables: 1 */

// <0047CCEF> ../public/mathlib/ssemath_impl.h:1473
// variables: 2
inline fltx4 SetWSIMD<>(fltx4 a, float f)
{
	fltx4 retVal; // 1486
	{
		fltx4 retVal; // 1478
	}
} /* size: 0, variables: 1 */

// <003C9F4E> ../public/mathlib/ssemath_impl.h:1491
inline float GetXSIMD<>(fltx4 a)
{
} /* size: 0 */

// <00B18279> ../public/mathlib/ssemath_impl.h:1510
inline float GetYSIMD<>(fltx4 a)
{
} /* size: 0 */

// <00B1824A> ../public/mathlib/ssemath_impl.h:1529
inline float GetZSIMD<>(fltx4 a)
{
} /* size: 0 */

// <009F7DB4> ../public/mathlib/ssemath_impl.h:1548
inline float GetWSIMD<>(fltx4 a)
{
} /* size: 0 */

// <04498B01> ../public/mathlib/ssemath_impl.h:1588
// variables: 2
inline fltx4 AddSIMD<(ESIMDLevel)40>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1608
	{
		fltx4 retVal; // 1593
	}
} /* size: 0, variables: 1 */

// <003C9E55> ../public/mathlib/ssemath_impl.h:1588
// variables: 2
inline fltx4 AddSIMD<>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1608
	{
		fltx4 retVal; // 1593
	}
} /* size: 0, variables: 1 */

// <04498A2E> ../public/mathlib/ssemath_impl.h:1611
// variables: 2
inline fltx4 SubSIMD<(ESIMDLevel)40>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1631
	{
		fltx4 retVal; // 1616
	}
} /* size: 0, variables: 1 */

// <003C9E00> ../public/mathlib/ssemath_impl.h:1611
// variables: 2
inline fltx4 SubSIMD<>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1631
	{
		fltx4 retVal; // 1616
	}
} /* size: 0, variables: 1 */

// <04498A82> ../public/mathlib/ssemath_impl.h:1634
// variables: 2
inline fltx4 MulSIMD<(ESIMDLevel)40>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1654
	{
		fltx4 retVal; // 1639
	}
} /* size: 0, variables: 1 */

// <003C9DAB> ../public/mathlib/ssemath_impl.h:1634
// variables: 2
inline fltx4 MulSIMD<>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1654
	{
		fltx4 retVal; // 1639
	}
} /* size: 0, variables: 1 */

// <00B17F94> ../public/mathlib/ssemath_impl.h:1657
// variables: 2
inline fltx4 DivSIMD<>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1679
	{
		fltx4 retVal; // 1662
	}
} /* size: 0, variables: 1 */

// <00DCF23C> ../public/mathlib/ssemath_impl.h:1682
inline fltx4 MaddSIMD<>(const fltx4& a, const fltx4& b, const fltx4& c)
{
} /* size: 0 */

// <0175D6AB> ../public/mathlib/ssemath_impl.h:1692
// variable: 1
inline fltx4 Dot3SIMD<>(const fltx4& a, const fltx4& b)
{
	fltx4 m; // 1694
} /* size: 0, variables: 1 */

// <00B17E64> ../public/mathlib/ssemath_impl.h:1698
// variables: 7
inline fltx4 Dot4SIMD<>(const fltx4& a, const fltx4& b)
{
	float flDot; // 1748
	{
		fltx4 fl4Product; // 1713
		fltx4 retVal; // 1715
	}
	{
		fltx4 fl4Product; // 1725
		fltx4 fl4YXWZ; // 1727
		fltx4 fl4UUVV; // 1729
		fltx4 fl4VVUU; // 1731
	}
} /* size: 0, variables: 1 */

// <044AB1AC> ../public/mathlib/ssemath_impl.h:1757
// variables: 3
inline fltx4 PairwiseHorizontalAddSIMD<>(const fltx4& a, const fltx4& b)
{
	fltx4 fl4a; // 1787
	fltx4 fl4b; // 1788
	{
		fltx4 retVal; // 1762
	}
} /* size: 0, variables: 2 */

// <00DCF6A5> ../public/mathlib/ssemath_impl.h:1795
inline fltx4 NegSIMD<>(const fltx4& a)
{
} /* size: 0 */

// <003C9EAA> ../public/mathlib/ssemath_impl.h:1800
// variable: 1
inline int TestSignSIMD<>(const fltx4& a)
{
	int nRet; // 1809
} /* size: 0, variables: 1 */

// <003C9830> ../public/mathlib/ssemath_impl.h:1840
inline bool IsAnyNegative<>(const fltx4& a)
{
} /* size: 0 */

// <0127598D> ../public/mathlib/ssemath_impl.h:1846
// variables: 2
inline fltx4 CmpEqSIMD<>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1866
	{
		fltx4 retVal; // 1851
	}
} /* size: 0, variables: 1 */

// <00B11DE2> ../public/mathlib/ssemath_impl.h:1875
// variables: 2
inline fltx4 CmpEqSIMD<>(const i32x4& a, const i32x4& b)
{
	i32x4 retVal; // 1886
	{
		fltx4 retVal; // 1880
	}
} /* size: 0, variables: 1 */

// <003C9D56> ../public/mathlib/ssemath_impl.h:1976
// variables: 2
inline fltx4 CmpGtSIMD<>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 1996
	{
		fltx4 retVal; // 1981
	}
} /* size: 0, variables: 1 */

// <0586BEB0> ../../public/mathlib/ssemath_impl.h:2004
inline int CmpGtFirstValueSIMD<>(const fltx4& a, const fltx4& b)
{
} /* size: 0 */

// <04498991> ../public/mathlib/ssemath_impl.h:2062
// variables: 2
inline fltx4 CmpLtSIMD<(ESIMDLevel)40>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 2082
	{
		fltx4 retVal; // 2067
	}
} /* size: 0, variables: 1 */

// <003C98D6> ../public/mathlib/ssemath_impl.h:2062
// variables: 2
inline fltx4 CmpLtSIMD<>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 2082
	{
		fltx4 retVal; // 2067
	}
} /* size: 0, variables: 1 */

// <003C99D5> ../public/mathlib/ssemath_impl.h:2090
// variables: 2
inline fltx4 CmpLeSIMD<>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 2110
	{
		fltx4 retVal; // 2095
	}
} /* size: 0, variables: 1 */

// <04BB869D> ../public/mathlib/ssemath_impl.h:2155
inline bool IsAllGreaterThan<>(const fltx4& a, const fltx4& b)
{
} /* size: 0 */

// <017235B1> ../public/mathlib/ssemath_impl.h:2167
inline bool IsAllEqual<>(const fltx4& a, const fltx4& b)
{
} /* size: 0 */

// <044A980F> ../public/mathlib/ssemath_impl.h:2195
// variables: 2
inline fltx4 MinSIMD<(ESIMDLevel)40>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 2215
	{
		fltx4 retVal; // 2200
	}
} /* size: 0, variables: 1 */

// <003C9CBB> ../public/mathlib/ssemath_impl.h:2195
// variables: 2
inline fltx4 MinSIMD<>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 2215
	{
		fltx4 retVal; // 2200
	}
} /* size: 0, variables: 1 */

// <04498B55> ../public/mathlib/ssemath_impl.h:2223
// variables: 2
inline fltx4 MaxSIMD<(ESIMDLevel)40>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 2243
	{
		fltx4 retVal; // 2228
	}
} /* size: 0, variables: 1 */

// <00DCF2F8> ../public/mathlib/ssemath_impl.h:2223
// variables: 2
inline fltx4 MaxSIMD<>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 2243
	{
		fltx4 retVal; // 2228
	}
} /* size: 0, variables: 1 */

// <00511748> ../public/mathlib/ssemath_impl.h:2223
// variables: 2
inline fltx4 MaxSIMD<(ESIMDLevel)20>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 2243
	{
		fltx4 retVal; // 2228
	}
} /* size: 0, variables: 1 */

// <03534CCD> ../public/mathlib/ssemath_impl.h:2252
// variables: 4
inline fltx4 CeilSIMD<>(const fltx4& val)
{
	fltx4 f4PushAwayFromZero; // 2256
	fltx4 fRoundToAny; // 2257
	fltx4 fRoundToAnyPlus1; // 2259
	fltx4 f4Mask; // 2260
} /* size: 0, variables: 4 */

// <044988F3> ../public/mathlib/ssemath_impl.h:2265
inline fltx4 fabs<(ESIMDLevel)40>(const fltx4& x)
{
} /* size: 0 */

// <02EB44A6> ../public/mathlib/ssemath_impl.h:2265
inline fltx4 fabs<>(const fltx4& x)
{
} /* size: 0 */

// <044A9863> ../public/mathlib/ssemath_impl.h:2270
inline fltx4 AbsSIMD<(ESIMDLevel)40>(const fltx4& val)
{
} /* size: 0 */

// <02EB47C0> ../public/mathlib/ssemath_impl.h:2270
inline fltx4 AbsSIMD<>(const fltx4& val)
{
} /* size: 0 */

// <03534D31> ../public/mathlib/ssemath_impl.h:2283
// variables: 3
inline fltx4 FloorSIMD<>(const fltx4& val)
{
	fltx4 f4PushAwayFromZero; // 2287
	fltx4 fRoundToAny; // 2288
	fltx4 fRoundToAnyMinus1; // 2290
} /* size: 0, variables: 3 */

// <0594AD60> ../../public/mathlib/ssemath_impl.h:2322
inline bool IsAllZeros<>(const fltx4& var)
{
} /* size: 0 */

// <0583EE7D> ../../public/mathlib/ssemath_impl.h:2327
inline fltx4 SqrtEstSIMD<>(const fltx4& a)
{
} /* size: 0 */

// <044989E5> ../public/mathlib/ssemath_impl.h:2345
// variables: 2
inline fltx4 SqrtSIMD<(ESIMDLevel)40>(const fltx4& a)
{
	fltx4 retVal; // 2356
	{
		fltx4 retVal; // 2350
	}
} /* size: 0, variables: 1 */

// <00B17F49> ../public/mathlib/ssemath_impl.h:2345
// variables: 2
inline fltx4 SqrtSIMD<>(const fltx4& a)
{
	fltx4 retVal; // 2356
	{
		fltx4 retVal; // 2350
	}
} /* size: 0, variables: 1 */

// <044DB00D> ../public/mathlib/ssemath_impl.h:2364
// variables: 2
inline fltx4 ReciprocalSqrtEstSIMD<>(const fltx4& a)
{
	fltx4 retVal; // 2387
	{
		fltx4 retVal; // 2369
	}
} /* size: 0, variables: 1 */

// <044DAC9B> ../public/mathlib/ssemath_impl.h:2404
// variable: 1
inline fltx4 ReciprocalSqrtSIMD<>(const fltx4& a)
{
	fltx4 guess; // 2406
} /* size: 0, variables: 1 */

// <0583EBE2> ../../public/mathlib/ssemath_impl.h:2413
// variables: 2
inline fltx4 ReciprocalEstSIMD<>(const fltx4& a)
{
	fltx4 retVal; // 2434
	{
		fltx4 retVal; // 2418
	}
} /* size: 0, variables: 1 */

// <0594B3E3> ../../public/mathlib/ssemath_impl.h:2460
// variable: 1
inline fltx4 ReciprocalSIMD<>(const fltx4& a)
{
	fltx4 ret; // 2462
} /* size: 0, variables: 1 */

// <00DCEE54> ../public/mathlib/ssemath_impl.h:2486
// variables: 14
inline void TransposeSIMD<>(fltx4& x, fltx4& y, fltx4& z, fltx4& w)
{
	{
		__v4sf __r0; // 2491
		__v4sf __r1; // 2491
		__v4sf __r2; // 2491
		__v4sf __r3; // 2491
		__v4sf __t0; // 2491
		__v4sf __t1; // 2491
		__v4sf __t2; // 2491
		__v4sf __t3; // 2491
	}
	{
		float tmp; // 2503
	}
	{
		float tmp; // 2504
	}
	{
		float tmp; // 2505
	}
	{
		float tmp; // 2506
	}
	{
		float tmp; // 2507
	}
	{
		float tmp; // 2508
	}
} /* size: 0 */

// <0594ACEA> ../../public/mathlib/ssemath_impl.h:2512
// variables: 2
inline fltx4 FindLowestSIMD3<>(const fltx4& a)
{
	fltx4 compareOne; // 2516
	fltx4 retVal; // 2518
} /* size: 0, variables: 2 */

// <0594B143> ../../public/mathlib/ssemath_impl.h:2528
// variables: 2
inline fltx4 FindHighestSIMD3<>(const fltx4& a)
{
	fltx4 compareOne; // 2532
	fltx4 retVal; // 2534
} /* size: 0, variables: 2 */

// <06D6B279> ../../public/mathlib/ssemath_impl.h:2633
// variables: 3
inline i32x4 LoadUnalignedIntSIMD<>(const void* pSIMD)
{
	const uint32* pnSIMD; // 2644
	i32x4 retVal; // 2645
	{
		__m128i retVal; // 2638
	}
} /* size: 0, variables: 2 */

// <001357CD> ../public/mathlib/ssemath_impl.h:2675
inline void StoreAlignedIntSIMD<>(i32x4& pSIMD, const fltx4& a)
{
} /* size: 0 */

// <044DA41E> ../public/mathlib/ssemath_impl.h:2764
// variables: 2
inline fltx4 CompressSIMD<>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 2775
	{
		fltx4 retVal; // 2769
	}
} /* size: 0, variables: 1 */

// <06D6B4D8> ../../public/mathlib/ssemath_impl.h:2839
// variables: 2
inline fltx4 InterleaveSIMDZW<>(const fltx4& a, const fltx4& b)
{
	fltx4 retVal; // 2850
	{
		fltx4 retVal; // 2844
	}
} /* size: 0, variables: 1 */

// <044DA3A6> ../public/mathlib/ssemath_impl.h:2885
// variables: 3
inline fltx4 Compress4SIMD<>(const fltx4 a, const fltx4& b, const fltx4& c, const fltx4& d)
{
	fltx4 retVal; // 2898
	{
		fltx4 aacc; // 2890
		fltx4 bbdd; // 2892
	}
} /* size: 0, variables: 1 */

// <00DCF2CA> ../public/mathlib/ssemath_impl.h:2926
inline fltx4 ReverseSIMD<>(const fltx4& v)
{
} /* size: 0 */

// <059768B4> ../public/mathlib/ssemath_impl.h:2946
// variables: 2
inline fltx4 SignedIntConvertToFltSIMD<>(const i32x4& vSrcA)
{
	fltx4 retVal; // 2957
	{
		fltx4 retVal; // 2951
	}
} /* size: 0, variables: 1 */

// <06D6B73F> ../../public/mathlib/ssemath_impl.h:3176
// variables: 2
inline i16x8 PackSignedIntsToShortsWithSaturateSIMD<>(const i32x4& a, const i32x4& b)
{
	i16x8 retVal; // 3196
	{
		__m128i retVal; // 3181
	}
} /* size: 0, variables: 1 */

// <06D6B7E9> ../../public/mathlib/ssemath_impl.h:3210
// variables: 2
inline i32x4 InterleaveLowIntsSIMD<>(const i32x4& a, const i32x4& b)
{
	i32x4 retVal; // 3233
	{
		__m128i retVal; // 3215
	}
} /* size: 0, variables: 1 */

// <06D6B794> ../../public/mathlib/ssemath_impl.h:3243
// variables: 2
inline i32x4 InterleaveHighIntsSIMD<>(const i32x4& a, const i32x4& b)
{
	i32x4 retVal; // 3266
	{
		__m128i retVal; // 3248
	}
} /* size: 0, variables: 1 */

// <0597686A> ../public/mathlib/ssemath_impl.h:3291
// variables: 2
inline i32x4 RoundFloatToIntSIMD<>(const fltx4& a)
{
	i32x4 retVal; // 3327
	{
		__m128i retVal; // 3296
	}
} /* size: 0, variables: 1 */

// <00DCF34D> ../public/mathlib/ssemath_impl.h:3335
// variables: 5
inline fltx4 CrossProduct3SIMD<>(const fltx4& v1, const fltx4& v2)
{
	fltx4 retVal; // 3355
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
	}
} /* size: 0, variables: 1 */

// <03537520> ../public/mathlib/ssemath_impl.h:3365
// variable: 1
inline fltx4 _Sin01SIMD<>(const fltx4& val)
{
	fltx4 fl4BadEst; // 3369
} /* size: 0, variables: 1 */

// <0353755D> ../public/mathlib/ssemath_impl.h:3384
// variable: 1
inline fltx4 Mod2SIMDPositiveInput<>(const fltx4& val)
{
	fltx4 ival; // 3386
} /* size: 0, variables: 1 */

// <03536171> ../public/mathlib/ssemath_impl.h:3392
// variables: 8
inline void SinCosSIMD<>(fltx4& sine, fltx4& cosine, const fltx4& radians)
{
	fltx4 fl4Param; // 3394
	fltx4 fl4Abs; // 3395
	fltx4 fl4Reduced2; // 3396
	fltx4 fl4OddMask; // 3397
	fltx4 fl4val; // 3398
	fltx4 fl4Sin; // 3399
	fltx4 fl4AbsCos; // 3401
	fltx4 fl4NegCosMask; // 3403
} /* size: 0, variables: 8 */


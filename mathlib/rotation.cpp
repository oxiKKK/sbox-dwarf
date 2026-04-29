
//
// mathlib/rotation.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 18
//

// <05A34732> mathlib/rotation.cpp:10
// variables: 103
// function calls: 234
void CRotation::CRotation(const QuaternionAligned& qRot, const VectorAligned& vAxis)
{
	{
		{
			VectorAligned vReferenceVector; // 17
			VectorAligned vRotatedVector; // 29
			float flProjectionDp; // 32
			float dp; // 37
			float flAngleRadians; // 39
			VectorAligned vCp; // 42
			{
			}
			{
			}
			{
				VectorAligned tmpAxis; // 19
			}
		}
	}
	{
		{
			VectorAligned vReferenceVector; // 17
			VectorAligned vRotatedVector; // 29
			float flProjectionDp; // 32
			float dp; // 37
			float flAngleRadians; // 39
			VectorAligned vCp; // 42
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			QuaternionAligned::x(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			QuaternionAligned::y(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			QuaternionAligned::z(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 77
			QuaternionAligned::w(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			QuaternionAligned::IsValid(); // 12
			{
			}
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			VectorAligned::x(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			VectorAligned::IsValid(); // 13
			{
			}
			VectorAligned::VectorAligned(); // 17
			{
				VectorAligned tmpAxis; // 19
				CloseEnough(float a,
						float b,
						float epsilon);  // 20
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1694
				{
					fltx4 retVal; // 1333
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1334
				}
				SplatZSIMD<>(const fltx4& a); // 1695
				{
					fltx4 retVal; // 1314
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1315
				}
				SplatYSIMD<>(const fltx4& a); // 1695
				{
					fltx4 retVal; // 1295
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1296
				}
				SplatXSIMD<>(const fltx4& a); // 1695
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1695
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1695
				Dot3SIMD<>(const fltx4& a,
						const fltx4& b);  // 379
				_mm_cvtss_f32(__m128 __A); // 1496
				GetXSIMD<>(fltx4 a); // 380
				VectorAligned::Dot(
					const VectorAligned& v);  // 416
				DotProduct(const VectorAligned& lhs,
						const VectorAligned& rhs);  // 20
				VectorAligned::operator=(
						const VectorAligned& src);  // 22
				{
					fltx4 v1_yzxx; // 3340
					fltx4 v2_zxyy; // 3342
					fltx4 v1_zxyy; // 3344
					fltx4 v2_yzxx; // 3346
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 3341
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 3343
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 3345
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 3347
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 3348
					{
						fltx4 retVal; // 1639
						_mm_mul_ps(__m128 __A,
								__m128 __B);  // 1640
					}
					MulSIMD<>(const fltx4& a,
							const fltx4& b);  // 3348
					{
						fltx4 retVal; // 1616
						_mm_sub_ps(__m128 __A,
								__m128 __B);  // 1617
					}
					SubSIMD<>(const fltx4& a,
							const fltx4& b);  // 3348
				}
				CrossProduct3SIMD<>(const fltx4& v1,
							const fltx4& v2);  // 386
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 386
				VectorAligned::Cross(
					const VectorAligned& v);  // 422
				CrossProduct(const VectorAligned& lhs,
						const VectorAligned& rhs);  // 25
				{
					fltx4 retVal; // 1981
					_mm_cmpgt_ps(__m128 __A,
							__m128 __B);  // 1982
				}
				CmpGtSIMD<>(const fltx4& a,
						const fltx4& b);  // 361
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1694
				{
					fltx4 retVal; // 1333
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1334
				}
				SplatZSIMD<>(const fltx4& a); // 1695
				{
					fltx4 retVal; // 1314
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1315
				}
				SplatYSIMD<>(const fltx4& a); // 1695
				{
					fltx4 retVal; // 1295
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1296
				}
				SplatXSIMD<>(const fltx4& a); // 1695
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1695
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1695
				Dot3SIMD<>(const fltx4& a,
						const fltx4& b);  // 359
				{
					fltx4 retVal; // 2350
					_mm_sqrt_ps(__m128 __A); // 2351
				}
				SqrtSIMD<>(const fltx4& a); // 360
				{
					fltx4 retVal; // 1662
					_mm_div_ps(__m128 __A,
							__m128 __B);  // 1663
				}
				DivSIMD<>(const fltx4& a,
						const fltx4& b);  // 362
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<(ESIMDLevel)20>(const fltx4& a,
							const fltx4& b); // 1259
				{
					fltx4 retVal; // 718
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 719
				}
				AndSIMD<(ESIMDLevel)20>(const fltx4& a,
							const fltx4& b); // 1259
				{
					fltx4 retVal; // 826
					_mm_xor_ps(__m128 __A,
							__m128 __B);  // 827
				}
				XorSIMD<(ESIMDLevel)20>(const fltx4& a,
							const fltx4& b); // 1259
				MaskedAssign<>(const fltx4& ReplacementMask,
						const fltx4& a,
						const fltx4& b);  // 362
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 362
				VectorAligned::NormalizedSafe(
						const VectorAligned& v);  // 351
				VectorAligned::VectorAligned(
						fltx4 rhs);  // 351
				VectorAligned::Normalized(); // 25
				VectorAligned::operator=(
						const VectorAligned& src);  // 25
			}
			{
				fltx4 v1_yzxx; // 3340
				fltx4 v2_zxyy; // 3342
				fltx4 v1_zxyy; // 3344
				fltx4 v2_yzxx; // 3346
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3341
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3343
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3347
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3345
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
			}
			CrossProduct3SIMD<>(const fltx4& v1,
						const fltx4& v2);  // 310
			{
				fltx4 retVal; // 1352
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1353
			}
			SplatWSIMD<>(const fltx4& a); // 313
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 311
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			MaddSIMD<>(const fltx4& a,
					const fltx4& b,
					const fltx4& c);  // 313
			{
				fltx4 v1_yzxx; // 3340
				fltx4 v2_zxyy; // 3342
				fltx4 v1_zxyy; // 3344
				fltx4 v2_yzxx; // 3346
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3343
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3347
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
			}
			CrossProduct3SIMD<>(const fltx4& v1,
						const fltx4& v2);  // 315
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 316
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 318
			QuaternionAligned::operator*(
					const VectorAligned& v);  // 29
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 379
			VectorAligned::Dot(
				const VectorAligned& v);  // 416
			DotProduct(const VectorAligned& lhs,
					const VectorAligned& rhs);  // 32
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 268
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 268
			VectorAligned::operator*(
					vec_t s);  // 33
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 215
			VectorAligned::operator-=(
					const VectorAligned& v);  // 33
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 330
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 338
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 339
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 341
			{
				fltx4 retVal; // 1662
				_mm_div_ps(__m128 __A,
						__m128 __B);  // 1663
			}
			DivSIMD<>(const fltx4& a,
					const fltx4& b);  // 343
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<(ESIMDLevel)20>(const fltx4& a,
						const fltx4& b); // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<(ESIMDLevel)20>(const fltx4& a,
						const fltx4& b); // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<(ESIMDLevel)20>(const fltx4& a,
						const fltx4& b); // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 343
			VectorAligned::NormalizeInPlaceSafe(
						const VectorAligned& vFallback);  // 330
			VectorAligned::NormalizeInPlace(); // 34
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 379
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 380
			VectorAligned::Dot(
				const VectorAligned& v);  // 416
			DotProduct(const VectorAligned& lhs,
					const VectorAligned& rhs);  // 37
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 39
			{
				fltx4 v1_yzxx; // 3340
				fltx4 v2_zxyy; // 3342
				fltx4 v1_zxyy; // 3344
				fltx4 v2_yzxx; // 3346
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3343
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 3347
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
				{
					fltx4 retVal; // 1616
					_mm_sub_ps(__m128 __A,
							__m128 __B);  // 1617
				}
				SubSIMD<>(const fltx4& a,
						const fltx4& b);  // 3348
			}
			CrossProduct3SIMD<>(const fltx4& v1,
						const fltx4& v2);  // 386
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 386
			VectorAligned::Cross(
				const VectorAligned& v);  // 422
			CrossProduct(const VectorAligned& lhs,
					const VectorAligned& rhs);  // 42
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 379
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 380
			VectorAligned::Dot(
				const VectorAligned& v);  // 416
			DotProduct(const VectorAligned& lhs,
					const VectorAligned& rhs);  // 43
			RAD2DEG(float flRadians); // 48
		}
	}
} /* size: 0 */

// <05A3464F> mathlib/rotation.cpp:10
// variables: 10
void CRotation::CRotation(const QuaternionAligned& qRot, const VectorAligned& vAxis)
{
	const char   __FUNCTION__; // 57161
	{
		VectorAligned vReferenceVector; // 17
		VectorAligned vRotatedVector; // 29
		float flProjectionDp; // 32
		float dp; // 37
		float flAngleRadians; // 39
		VectorAligned vCp; // 42
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 12
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 13
		}
		{
			VectorAligned tmpAxis; // 19
		}
	}
} /* size: 0, variables: 1 */

// <02BF62C5> mathlib/rotation.cpp:10
// variables: 10
void CRotation::CRotation(const QuaternionAligned& qRot, const VectorAligned& vAxis)
{
	const char   __FUNCTION__; // 51892
	{
		VectorAligned vReferenceVector; // 17
		VectorAligned vRotatedVector; // 29
		float flProjectionDp; // 32
		float dp; // 37
		float flAngleRadians; // 39
		VectorAligned vCp; // 42
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 12
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 13
		}
		{
			VectorAligned tmpAxis; // 19
		}
	}
} /* size: 0, variables: 1 */

// <01A9B1AD> mathlib/rotation.cpp:10
// variables: 10
void CRotation::CRotation(const QuaternionAligned& qRot, const VectorAligned& vAxis)
{
	const char   __FUNCTION__; // 22284
	{
		VectorAligned vReferenceVector; // 17
		VectorAligned vRotatedVector; // 29
		float flProjectionDp; // 32
		float dp; // 37
		float flAngleRadians; // 39
		VectorAligned vCp; // 42
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 12
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 13
		}
		{
			VectorAligned tmpAxis; // 19
		}
	}
} /* size: 0, variables: 1 */

// <05A345D1> mathlib/rotation.cpp:53
// function call: 1
void CRotation::CRotation(const QAngle& rot, RotationAxis nAxis)
{
	QAngle::operator[](
			RotationAxis axis);  // 55
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05A3459D> mathlib/rotation.cpp:53
void CRotation::CRotation(const QAngle& rot, RotationAxis nAxis)
{
} /* size: 0 */

// <05A34509> mathlib/rotation.cpp:60
// function calls: 2
void CRotation::CRotation(const RadianEuler& rot, RotationAxis nAxis)
{
	RadianEuler::operator[](
			RotationAxis axis);  // 62
	RAD2DEG(float flRadians); // 62
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05A344D5> mathlib/rotation.cpp:60
void CRotation::CRotation(const RadianEuler& rot, RotationAxis nAxis)
{
} /* size: 0 */

// <05A38A41> mathlib/rotation.cpp:67
// function calls: 2
void CRotation::IsValid()
{
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 69
} /* size: 17, inline expansions: 2 (12 bytes) */

// <05A344B9> mathlib/rotation.cpp:67
void CRotation::IsValid()
{
} /* size: 0 */

// <05A33F31> mathlib/rotation.cpp:74
// variables: 4
// function calls: 23
void CRotation::ToQuaternion(const Vector& vAxis)
{
	{
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 69
		CRotation::IsValid(); // 23
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 118
	CRotation::Normalize(); // 119
	CRotation::Normalized(); // 76
	DEG2RAD(float flDegrees); // 35
	CRotation::ToRadians(); // 76
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 76
	SinCos(float radians,
		float* sine,
		float* cosine);  // 361
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 363
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 364
	QuaternionAligned::SetAxisAngle(
			const VectorAligned& axis,
			vec_t angleRadians);  // 31
	QuaternionAligned::QuaternionAligned(
				const VectorAligned& axis,
				vec_t angle);  // 76
} /* size: 0, inline expansions: 15 (509 bytes) */

// <05A33E41> mathlib/rotation.cpp:81
// variable: 1
// function calls: 2
void CRotation::ToQAngle(RotationAxis nAxis)
{
	QAngle tmp; // 84
	QAngle::operator[](
			RotationAxis axis);  // 85
	QAngle::QAngle(
		vec_t flPitchDegrees,
		vec_t flYawDegrees,
		vec_t flRollDegrees);  // 84
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <05A33D35> mathlib/rotation.cpp:91
// variable: 1
// function calls: 3
void CRotation::ToRadianEuler(RotationAxis nAxis)
{
	RadianEuler tmp; // 94
	RadianEuler::operator[](
			RotationAxis axis);  // 95
	DEG2RAD(float flDegrees); // 95
	RadianEuler::RadianEuler(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 94
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <05A38AD0> mathlib/rotation.cpp:101
void CRotation::Normalize()
{
} /* size: 0 */

// <05A38B19> mathlib/rotation.cpp:116
// variable: 1
// function calls: 6
void CRotation::Normalized()
{
	CRotation tmp; // 118
	{
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 69
		CRotation::IsValid(); // 23
	}
	{
	}
	CRotation::CRotation(
			angle_t angleDegrees);  // 23
	CRotation::CRotation(
			angle_t angleDegrees);  // 118
	CRotation::Normalize(); // 119
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <05A33CF1> mathlib/rotation.cpp:116
// variable: 1
void CRotation::Normalized()
{
	CRotation tmp; // 118
} /* size: 0, variables: 1 */

// <05A38CCC> mathlib/rotation.cpp:125
// variable: 1
void CRotation::Align(const CRotation& referenceRotation)
{
	float diff; // 127
} /* size: 0, variables: 1 */

// <05A33AD8> mathlib/rotation.cpp:144
// variable: 1
// function calls: 6
void CRotation::Aligned(const CRotation& referenceRotation)
{
	CRotation tmp; // 146
	{
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 69
		CRotation::IsValid(); // 22
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 146
	CRotation::Align(
		const CRotation& referenceRotation);  // 147
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */


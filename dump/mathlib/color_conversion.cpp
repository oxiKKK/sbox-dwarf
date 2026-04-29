
//
// mathlib/color_conversion.cpp
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 14
//

// <05979B18> mathlib/color_conversion.cpp:20
// variable: 1
// function calls: 5
Vector SRGBColorToLinearColor(const Color& color)
{
	Vector vRet; // 22
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 22
	Vector::operator*=(
			float fl);  // 23
	SrgbGammaToLinear(float flSrgbGammaValue); // 24
	SrgbGammaToLinear(float flSrgbGammaValue); // 25
	SrgbGammaToLinear(float flSrgbGammaValue); // 26
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <0115869B> mathlib/color_conversion.cpp:31
// variable: 1
// function calls: 26
Color LinearColorToSRGBColor(const Vector& vLinearColor)
{
	Color ret; // 33
	Color::Color(); // 33
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 129
	SrgbLinearToGamma(float flLinearValue); // 34
	_mm_load_ss(const float* __P); // 1619
	_mm_cvtss_si32(__m128 __A); // 1619
	RoundFloatToUnsignedLong(float f); // 1642
	{
	}
	RoundFloatToByte(float f); // 34
	Color::SetRed(
		int _r);  // 34
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 129
	SrgbLinearToGamma(float flLinearValue); // 35
	_mm_load_ss(const float* __P); // 1619
	_mm_cvtss_si32(__m128 __A); // 1619
	RoundFloatToUnsignedLong(float f); // 1642
	{
	}
	RoundFloatToByte(float f); // 35
	Color::SetGreen(
		int _g);  // 35
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 129
	SrgbLinearToGamma(float flLinearValue); // 36
	_mm_load_ss(const float* __P); // 1619
	_mm_cvtss_si32(__m128 __A); // 1619
	RoundFloatToUnsignedLong(float f); // 1642
	{
	}
	RoundFloatToByte(float f); // 36
	Color::SetBlue(
		int _b);  // 36
	Color::SetAlpha(
		int _a);  // 37
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 34
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 36
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 35
} /* size: 0, variables: 1, inline expansions: 26 (0 bytes) */

// <0115863A> mathlib/color_conversion.cpp:42
float GammaToLinearFullRange(float gamma)
{
} /* size: 0 */

// <059793FA> mathlib/color_conversion.cpp:47
float LinearToGammaFullRange(float linear)
{
} /* size: 0 */

// <0083D10F> mathlib/color_conversion.cpp:62
// variable: 1
float SrgbGammaToLinear(float flSrgbGammaValue)
{
	float x; // 64
} /* size: 0, variables: 1 */

// <01157D18> mathlib/color_conversion.cpp:88
// variables: 21
// function calls: 33
fltx4 SrgbGammaToLinearSIMD(fltx4 fl4SrgbGammaValue)
{
	fltx4 fl4ClampedGammaValue; // 91
	fltx4 fl4LinearRegionValue; // 92
	fltx4 fl4PowInput; // 94
	fltx4 fl4SqrtX; // 97
	fltx4 fl4XToThe2Point4; // 99
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 91
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 91
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 94
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 92
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 94
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 97
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 99
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 99
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 99
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 99
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 99
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 99
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 101
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	MaskedAssign<>(const fltx4& ReplacementMask,
			const fltx4& a,
			const fltx4& b);  // 101
} /* size: 125, variables: 5, inline expansions: 17 (126 bytes) */

// <059780D2> mathlib/color_conversion.cpp:106
// variables: 25
// function calls: 40
fltx4 SrgbGammaToLinearSIMD_RGBA(fltx4 fl4SrgbGammaValue)
{
	fltx4 fl4ClampedGammaValue; // 109
	fltx4 fl4LinearRegionValue; // 110
	fltx4 fl4PowInput; // 112
	fltx4 fl4SqrtX; // 115
	fltx4 fl4XToThe2Point4; // 117
	fltx4 fl4Out; // 119
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 109
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 109
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 112
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 110
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 112
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 115
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 117
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 117
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 117
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 117
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 117
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 117
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 119
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	MaskedAssign<>(const fltx4& ReplacementMask,
			const fltx4& a,
			const fltx4& b);  // 119
	{
		fltx4 zzww; // 1414
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<250>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<250>(const fltx4& a,
				const fltx4& b);  // 1414
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<148>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<148>(const fltx4& a,
				const fltx4& b);  // 1415
	}
	SetWSIMD<>(const fltx4& a,
			const fltx4& w);  // 120
} /* size: 0, variables: 6, inline expansions: 18 (0 bytes) */

// <0083BDE7> mathlib/color_conversion.cpp:127
// variable: 1
float SrgbLinearToGamma(float flLinearValue)
{
	float x; // 129
} /* size: 0, variables: 1 */

// <0597805E> mathlib/color_conversion.cpp:146
// variables: 3
inline fltx4 XToTheOOTwoPointFour(FLTX4 fl4X)
{
	fltx4 fl4PartialRoot; // 149
	fltx4 fl4XPow; // 150
	fltx4 fl4NegPartialRoot; // 156
} /* size: 0, variables: 3 */

// <011566A5> mathlib/color_conversion.cpp:172
// variables: 25
// function calls: 46
fltx4 SrgbLinearToGammaSIMD(fltx4 fl4LinearValue)
{
	fltx4 fl4ClampedLinearValue; // 174
	fltx4 fl4LinearRegionValue; // 175
	fltx4 fl4NonLinearRegionValue; // 178
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 174
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 174
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 175
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 149
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 149
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 151
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 152
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 153
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 154
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 155
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 157
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 158
	{
		fltx4 retVal; // 2350
		_mm_sqrt_ps(__m128 __A); // 2351
	}
	SqrtSIMD<>(const fltx4& a); // 159
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 160
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 161
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 161
	XToTheOOTwoPointFour(FLTX4 fl4X); // 178
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 179
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 178
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 178
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	{
		fltx4 retVal; // 826
		_mm_xor_ps(__m128 __A,
				__m128 __B);  // 827
	}
	XorSIMD<>(const fltx4& a,
			const fltx4& b);  // 1259
	MaskedAssign<>(const fltx4& ReplacementMask,
			const fltx4& a,
			const fltx4& b);  // 179
} /* size: 140, variables: 3, inline expansions: 24 (183 bytes) */

// <01156501> mathlib/color_conversion.cpp:185
// variables: 2
// function calls: 6
Vector4D EncodeRGBM(const Vector& vLinear)
{
	Vector4D vResult; // 187
	float flOoW; // 193
	Vector4D::Vector4D(); // 187
	VectorMaximum(const Vector& v); // 191
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 192
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 194
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 195
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 196
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <059770ED> mathlib/color_conversion.cpp:203
// variable: 1
// function calls: 10
Vector DecodeRGBM(const Vector4D& vRGBM)
{
	Vector vLinearColor; // 205
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 205
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 205
	VectorMultiply(const Vector& a,
			const Vector& b,
			Vector& c);  // 1458
	Vector::Vector(); // 1457
	Vector::operator*(
			const Vector& v);  // 578
	Square<Vector>(const Vector& a); // 205
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <05976F1C> mathlib/color_conversion.cpp:210
// variables: 3
// function calls: 7
fltx4 UnpackRGBA8(uint32 nRawColor)
{
	i32x4 nColor; // 213
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 213
	_mm_unpacklo_epi8(__m128i __A,
				__m128i __B);  // 214
	_mm_unpacklo_epi16(__m128i __A,
				__m128i __B);  // 215
	{
		fltx4 retVal; // 2951
		_mm_cvtepi32_ps(__m128i __A); // 2952
	}
	SignedIntConvertToFltSIMD<>(const i32x4& vSrcA); // 215
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <05976D90> mathlib/color_conversion.cpp:227
// variables: 2
// function calls: 5
uint32 PackRGBA8(fltx4 fl4Color)
{
	i32x4 nColor; // 230
	{
		__m128i retVal; // 3296
		_mm_cvtps_epi32(__m128 __A); // 3297
	}
	RoundFloatToIntSIMD<>(const fltx4& a); // 230
	_mm_packs_epi32(__m128i __A,
			__m128i __B);  // 231
	_mm_packus_epi16(__m128i __A,
			__m128i __B);  // 232
	_mm_cvtsi128_si32(__m128i __A); // 233
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */


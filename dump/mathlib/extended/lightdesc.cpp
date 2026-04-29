
//
// mathlib/extended/lightdesc.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 30
//

// <0584D18C> mathlib/extended/lightdesc.cpp:20
void GetBaseMap(void)
{
} /* size: 0 */

// <0584C01B> mathlib/extended/lightdesc.cpp:20
// variables: 2
datamap_t* DataMapInit<LightDesc_t>(LightDesc_t *)
{
	const char* pDataMapInit_className; // 20
	typedescription_t dataDesc; // 20
} /* size: 737, variables: 2 */

// <0584D1AA> mathlib/extended/lightdesc.cpp:55
// variable: 1
void LightDesc_t::RecalculateOneOverThetaDotMinusPhiDot()
{
	float flSpread; // 57
} /* size: 0, variables: 1 */

// <05848E1A> mathlib/extended/lightdesc.cpp:71
// variables: 18
// function calls: 218
void LightDesc_t::RecalculateDerivedValues(float flTruncationErrorTolerance)
{
	{
		float flRange; // 114
	}
	{
		Vector vRadius; // 136
		Vector vLine; // 145
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 137
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 136
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 145
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 138
		Vector::operator-=(
				const Vector& v);  // 141
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 141
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 142
		Vector::operator+=(
				const Vector& v);  // 142
		Vector::operator-=(
				const Vector& v);  // 150
		Vector::operator+=(
				const Vector& v);  // 151
	}
	{
		Vector vLeft; // 157
		Vector vUp; // 158
		float flSinPhi; // 161
		float flCosPhi; // 161
		float flExtentsAtMidPoint; // 164
		Vector pnts; // 166
		Vector vMidPoint; // 167
		Vector vFarPoint; // 168
		Vector vRadius; // 193
		{
			int i; // 186
			VectorMin(const Vector& a,
					const Vector& b,
					Vector& result);  // 188
			VectorMax(const Vector& a,
					const Vector& b,
					Vector& result);  // 189
		}
		Vector::Vector(); // 157
		Vector::Vector(); // 158
		DEG2RAD(float flDegrees); // 162
		SinCos(float radians,
			float* sine,
			float* cosine);  // 162
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 167
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 167
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 167
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 168
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 168
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 169
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 169
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 176
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 174
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 169
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 169
		Vector::operator=(
				const Vector& vOther);  // 169
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 170
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 170
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 170
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 170
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 171
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 171
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 171
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 171
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 172
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 172
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 172
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 172
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 173
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 173
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 173
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 173
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 174
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 174
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 174
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 175
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 175
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 175
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 175
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 176
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 176
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 176
		Vector::operator=(
				const Vector& vOther);  // 178
		Vector::operator=(
				const Vector& vOther);  // 179
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 195
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 194
		Vector::operator=(
				const Vector& vOther);  // 194
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 193
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1539
		VectorMax(const Vector& a,
				const Vector& b);  // 194
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1534
		VectorMin(const Vector& a,
				const Vector& b);  // 195
		Vector::operator=(
				const Vector& vOther);  // 195
		Vector::operator-=(
				const Vector& v);  // 182
		Vector::operator+=(
				const Vector& v);  // 183
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 182
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 183
	}
	{
		Vector vTangent; // 201
		float flHw; // 202
		float flHh; // 203
		Vector vPoints; // 205
		{
			int i; // 217
			VectorMin(const Vector& a,
					const Vector& b,
					Vector& result);  // 219
			VectorMax(const Vector& a,
					const Vector& b,
					Vector& result);  // 220
		}
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 201
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 206
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 206
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 206
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 207
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 210
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 207
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 206
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 208
		Vector::operator=(
				const Vector& vOther);  // 208
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 209
		Vector::operator=(
				const Vector& vOther);  // 207
		Vector::operator=(
				const Vector& vOther);  // 206
		Vector::operator=(
				const Vector& vOther);  // 209
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 210
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 207
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 207
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 208
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 208
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 208
		Vector::operator=(
				const Vector& vOther);  // 210
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 209
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 209
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 209
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 212
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 211
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 211
		Vector::operator=(
				const Vector& vOther);  // 211
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 213
		Vector::operator=(
				const Vector& vOther);  // 213
		Vector::operator=(
				const Vector& vOther);  // 212
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 212
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 213
	}
	Vector::operator=(
			const Vector& vOther);  // 106
	Vector::operator*=(
			float fl);  // 107
	Vector::operator=(
			const Vector& vOther);  // 128
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 228
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 229
	Vector::operator=(
			const Vector& vOther);  // 129
	DEG2RAD(float flDegrees); // 91
	DEG2RAD(float flDegrees); // 92
	DEG2RAD(float flDegrees); // 93
	LightDesc_t::RecalculateOneOverThetaDotMinusPhiDot(); // 94
} /* size: 2803, inline expansions: 10 (263 bytes) */

// <05848CDC> mathlib/extended/lightdesc.cpp:238
// variables: 7
// function call: 1
void LightDesc_t::DistanceAtWhichBrightnessIsLessThan(float flAmount)
{
	float flBrightness; // 240
	{
		float a; // 246
		float b; // 247
		float c; // 248
		float r0; // 250
		float r1; // 250
		{
			float rslt; // 253
		}
	}
	RelativeLuminance(const Vector& vRGB); // 240
} /* size: 205, variables: 1, inline expansions: 1 (47 bytes) */

// <05848A44> mathlib/extended/lightdesc.cpp:267
// variable: 1
// function calls: 9
void LightDesc_t::ComputeLightDirection(const Vector& vPosition)
{
	Vector vPositionToLightDir; // 269
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 278
	Vector::operator=(
			const Vector& vOther);  // 278
	Vector::operator=(
			const Vector& vOther);  // 273
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 282
	Vector::Normalized(); // 282
	Vector::operator=(
			const Vector& vOther);  // 282
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <05844093> mathlib/extended/lightdesc.cpp:288
// variables: 137
// function calls: 316
void LightDesc_t::ComputeLightAtPoints(const FourVectors& v4Position, const FourVectors* p4Normal, FourVectors& v4AccumulatedColors, ComputeLightAtPointsFlags_t nFlags)
{
	const char   __FUNCTION__; // 710
	fltx4 fl4Falloff; // 299
	FourVectors v4PositionToLightDir; // 300
	fltx4 fl4Strength; // 431
	const Vector& vColor; // 442
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
	}
	{
		Vector vTangent; // 308
		fltx4 fl4DirectionDot; // 314
		fltx4 fl4TanDot; // 319
		fltx4 fl4UpDot; // 320
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 308
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 175
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 174
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 174
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
				const fltx4& c);  // 175
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 176
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
				const fltx4& c);  // 176
		FourVectors::operator*(
				const Vector& b);  // 314
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 321
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 98
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 99
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 100
		FourVectors::DuplicateVector(
				const Vector& v);  // 310
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 174
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 176
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 174
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 175
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
				const fltx4& c);  // 175
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
				const fltx4& c);  // 176
		FourVectors::operator*(
				const Vector& b);  // 320
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		FourVectors::ApplyBinaryUpdateFunction<SubSIMD<> >(
							const FourVectors& v4Arg);  // 143
		FourVectors::operator-=(
				const FourVectors& b);  // 311
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 176
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 175
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
				const fltx4& c);  // 175
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
				const fltx4& c);  // 176
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 174
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 174
		FourVectors::operator*(
				const Vector& b);  // 319
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 153
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 154
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 155
		FourVectors::operator*=(
				const fltx4& scale);  // 326
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 322
		{
			fltx4 retVal; // 2067
			_mm_cmplt_ps(__m128 __A,
					__m128 __B);  // 2068
		}
		CmpLtSIMD<>(const fltx4& a,
				const fltx4& b);  // 315
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 315
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 316
		{
			fltx4 retVal; // 2067
			_mm_cmplt_ps(__m128 __A,
					__m128 __B);  // 2068
		}
		CmpLtSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 321
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 2267
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 2267
		fabs<>(const fltx4& x); // 2272
		AbsSIMD<>(const fltx4& val); // 321
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 322
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 2267
		fabs<>(const fltx4& x); // 2272
		AbsSIMD<>(const fltx4& val); // 322
		{
			fltx4 retVal; // 2067
			_mm_cmplt_ps(__m128 __A,
					__m128 __B);  // 2068
		}
		CmpLtSIMD<>(const fltx4& a,
				const fltx4& b);  // 322
		{
			fltx4 retVal; // 2067
			_mm_cmplt_ps(__m128 __A,
					__m128 __B);  // 2068
		}
		CmpLtSIMD<>(const fltx4& a,
				const fltx4& b);  // 321
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 321
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 322
	}
	{
		float flAbsoluteStrength; // 331
		Vector vPosition; // 332
		fltx4 fl4DistanceSqr; // 374
		{
			Vector vPoint; // 336
			{
				Vector vLine; // 340
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 340
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 342
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 340
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 342
			}
			{
				Vector vFwd; // 353
				Vector vUp; // 354
				Vector vLeft; // 355
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 360
				VMatrix::Init(
					vec_t m00,
					vec_t m01,
					vec_t m02,
					vec_t m03,
					vec_t m10,
					vec_t m11,
					vec_t m12,
					vec_t m13,
					vec_t m20,
					vec_t m21,
					vec_t m22,
					vec_t m23,
					vec_t m30,
					vec_t m31,
					vec_t m32,
					vec_t m33);  // 509
				VMatrix::VMatrix(
					const Vector& xAxis,
					const Vector& yAxis,
					const Vector& zAxis);  // 358
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 359
				CrossProduct(const Vector& a,
						const Vector& b,
						Vector& result);  // 1488
				Vector::Vector(); // 1487
				Vector::Cross(
					const Vector& vOther);  // 355
				Vector::Normalized(); // 363
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 360
				Vector::operator=(
						const Vector& vOther);  // 360
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 363
				DotProduct(const Vector& a,
						const Vector& b);  // 363
			}
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 288
			FourVectors::Vec(
				int idx);  // 336
			Vector::Vector(); // 1305
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1306
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 1307
			Vector::DistTo(
				const Vector& vOther);  // 367
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 288
			FourVectors::Vec(
				int idx);  // 368
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 368
			Vector::operator+=(
					const Vector& v);  // 368
			Vector::operator=(
					const Vector& vOther);  // 348
		}
		{
			fltx4 fl4Range; // 401
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 402
			{
				fltx4 retVal; // 2067
				_mm_cmplt_ps(__m128 __A,
						__m128 __B);  // 2068
			}
			CmpLtSIMD<>(const fltx4& a,
					const fltx4& b);  // 402
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 402
		}
		{
			fltx4 fl4ConeDot; // 409
			fltx4 fl4ConeFalloffScale; // 411
			fltx4 fl4OutsideMask; // 423
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 174
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 174
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 175
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
					const fltx4& c);  // 175
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 176
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
					const fltx4& c);  // 176
			FourVectors::operator*(
					const Vector& b);  // 409
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 409
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 411
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 411
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 411
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 411
			{
				fltx4 retVal; // 2200
				_mm_min_ps(__m128 __A,
						__m128 __B);  // 2201
			}
			MinSIMD<>(const fltx4& a,
					const fltx4& b);  // 412
			PowSIMD_Approx(const fltx4& x,
					float exponent);  // 417
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 423
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 419
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 423
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 424
		}
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 98
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 99
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 100
		FourVectors::DuplicateVector(
				const Vector& v);  // 371
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		FourVectors::ApplyBinaryUpdateFunction<SubSIMD<> >(
							const FourVectors& v4Arg);  // 143
		FourVectors::operator-=(
				const FourVectors& b);  // 372
		{
			fltx4 retVal; // 2228
			_mm_max_ps(__m128 __A,
					__m128 __B);  // 2229
		}
		MaxSIMD<>(const fltx4& a,
				const fltx4& b);  // 375
		DotProduct(const FourVectors& a,
				const FourVectors& b);  // 374
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 2342
		SqrtEstSIMD<>(const fltx4& a); // 384
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 384
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 384
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 384
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 388
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 388
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 388
		{
			fltx4 retVal; // 2418
			_mm_rcp_ps(__m128 __A); // 2419
		}
		ReciprocalEstSIMD<>(const fltx4& a); // 390
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 394
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 394
		{
			fltx4 retVal; // 2228
			_mm_max_ps(__m128 __A,
					__m128 __B);  // 2229
		}
		MaxSIMD<>(const fltx4& a,
				const fltx4& b);  // 394
		{
			fltx4 retVal; // 2369
			_mm_rsqrt_ps(__m128 __A); // 2370
		}
		ReciprocalSqrtEstSIMD<>(const fltx4& a); // 475
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 153
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 154
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 155
		FourVectors::operator*=(
				const fltx4& scale);  // 475
		FourVectors::VectorNormalizeFast(); // 405
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 428
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 428
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 380
	}
	{
		fltx4 NdotL; // 436
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 166
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
				const fltx4& c);  // 167
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
				const fltx4& c);  // 168
		FourVectors::operator*(
				const FourVectors& b);  // 436
		{
			fltx4 retVal; // 2228
			_mm_max_ps(__m128 __A,
					__m128 __B);  // 2229
		}
		MaxSIMD<>(const fltx4& a,
				const fltx4& b);  // 437
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 438
	}
	FourVectors::Init(
		float flX,
		float flY,
		float flZ);  // 293
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 98
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 99
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 100
	FourVectors::DuplicateVector(
			const Vector& v);  // 304
	FourVectors::FourVectors(); // 300
	FourVectors::Init(); // 301
	operator&(ComputeLightAtPointsFlags_t a,
			ComputeLightAtPointsFlags_t b);  // 434
	operator&(ComputeLightAtPointsFlags_t a,
			ComputeLightAtPointsFlags_t b);  // 442
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 444
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 444
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 444
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 445
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 445
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 445
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 446
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 446
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 446
} /* size: 0, variables: 5, inline expansions: 18 (0 bytes) */

// <03521962> mathlib/extended/lightdesc.cpp:288
// variables: 137
// function calls: 316
void LightDesc_t::ComputeLightAtPoints(const FourVectors& v4Position, const FourVectors* p4Normal, FourVectors& v4AccumulatedColors, ComputeLightAtPointsFlags_t nFlags)
{
	const char   __FUNCTION__; // 43658
	fltx4 fl4Falloff; // 299
	FourVectors v4PositionToLightDir; // 300
	fltx4 fl4Strength; // 431
	const Vector& vColor; // 442
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
	}
	{
		Vector vTangent; // 308
		fltx4 fl4DirectionDot; // 314
		fltx4 fl4TanDot; // 319
		fltx4 fl4UpDot; // 320
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 308
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 175
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 174
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 174
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
				const fltx4& c);  // 175
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 176
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
				const fltx4& c);  // 176
		FourVectors::operator*(
				const Vector& b);  // 314
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 321
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 98
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 99
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 100
		FourVectors::DuplicateVector(
				const Vector& v);  // 310
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 174
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 176
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 174
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 175
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
				const fltx4& c);  // 175
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
				const fltx4& c);  // 176
		FourVectors::operator*(
				const Vector& b);  // 320
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		FourVectors::ApplyBinaryUpdateFunction<SubSIMD<> >(
							const FourVectors& v4Arg);  // 143
		FourVectors::operator-=(
				const FourVectors& b);  // 311
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 176
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 175
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
				const fltx4& c);  // 175
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
				const fltx4& c);  // 176
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 174
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 174
		FourVectors::operator*(
				const Vector& b);  // 319
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 153
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 154
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 155
		FourVectors::operator*=(
				const fltx4& scale);  // 326
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 322
		{
			fltx4 retVal; // 2067
			_mm_cmplt_ps(__m128 __A,
					__m128 __B);  // 2068
		}
		CmpLtSIMD<>(const fltx4& a,
				const fltx4& b);  // 315
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 315
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 316
		{
			fltx4 retVal; // 2067
			_mm_cmplt_ps(__m128 __A,
					__m128 __B);  // 2068
		}
		CmpLtSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 321
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 2267
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 2267
		fabs<>(const fltx4& x); // 2272
		AbsSIMD<>(const fltx4& val); // 321
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 322
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 2267
		fabs<>(const fltx4& x); // 2272
		AbsSIMD<>(const fltx4& val); // 322
		{
			fltx4 retVal; // 2067
			_mm_cmplt_ps(__m128 __A,
					__m128 __B);  // 2068
		}
		CmpLtSIMD<>(const fltx4& a,
				const fltx4& b);  // 322
		{
			fltx4 retVal; // 2067
			_mm_cmplt_ps(__m128 __A,
					__m128 __B);  // 2068
		}
		CmpLtSIMD<>(const fltx4& a,
				const fltx4& b);  // 321
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 321
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 322
	}
	{
		float flAbsoluteStrength; // 331
		Vector vPosition; // 332
		fltx4 fl4DistanceSqr; // 374
		{
			Vector vPoint; // 336
			{
				Vector vLine; // 340
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 340
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 342
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 340
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 342
			}
			{
				Vector vFwd; // 353
				Vector vUp; // 354
				Vector vLeft; // 355
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 360
				VMatrix::Init(
					vec_t m00,
					vec_t m01,
					vec_t m02,
					vec_t m03,
					vec_t m10,
					vec_t m11,
					vec_t m12,
					vec_t m13,
					vec_t m20,
					vec_t m21,
					vec_t m22,
					vec_t m23,
					vec_t m30,
					vec_t m31,
					vec_t m32,
					vec_t m33);  // 509
				VMatrix::VMatrix(
					const Vector& xAxis,
					const Vector& yAxis,
					const Vector& zAxis);  // 358
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 359
				CrossProduct(const Vector& a,
						const Vector& b,
						Vector& result);  // 1488
				Vector::Vector(); // 1487
				Vector::Cross(
					const Vector& vOther);  // 355
				Vector::Normalized(); // 363
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 360
				Vector::operator=(
						const Vector& vOther);  // 360
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 363
				DotProduct(const Vector& a,
						const Vector& b);  // 363
			}
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 288
			FourVectors::Vec(
				int idx);  // 336
			Vector::Vector(); // 1305
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1306
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 1307
			Vector::DistTo(
				const Vector& vOther);  // 367
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 288
			FourVectors::Vec(
				int idx);  // 368
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 368
			Vector::operator+=(
					const Vector& v);  // 368
			Vector::operator=(
					const Vector& vOther);  // 348
		}
		{
			fltx4 fl4Range; // 401
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 402
			{
				fltx4 retVal; // 2067
				_mm_cmplt_ps(__m128 __A,
						__m128 __B);  // 2068
			}
			CmpLtSIMD<>(const fltx4& a,
					const fltx4& b);  // 402
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 402
		}
		{
			fltx4 fl4ConeDot; // 409
			fltx4 fl4ConeFalloffScale; // 411
			fltx4 fl4OutsideMask; // 423
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 174
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 174
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 175
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
					const fltx4& c);  // 175
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 176
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
					const fltx4& c);  // 176
			FourVectors::operator*(
					const Vector& b);  // 409
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 409
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 411
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 411
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 411
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 411
			{
				fltx4 retVal; // 2200
				_mm_min_ps(__m128 __A,
						__m128 __B);  // 2201
			}
			MinSIMD<>(const fltx4& a,
					const fltx4& b);  // 412
			PowSIMD_Approx(const fltx4& x,
					float exponent);  // 417
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 423
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 419
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 423
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 424
		}
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 98
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 99
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 100
		FourVectors::DuplicateVector(
				const Vector& v);  // 371
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		FourVectors::ApplyBinaryUpdateFunction<SubSIMD<> >(
							const FourVectors& v4Arg);  // 143
		FourVectors::operator-=(
				const FourVectors& b);  // 372
		{
			fltx4 retVal; // 2228
			_mm_max_ps(__m128 __A,
					__m128 __B);  // 2229
		}
		MaxSIMD<>(const fltx4& a,
				const fltx4& b);  // 375
		DotProduct(const FourVectors& a,
				const FourVectors& b);  // 374
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 2342
		SqrtEstSIMD<>(const fltx4& a); // 384
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 384
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 384
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 384
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 388
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 388
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 388
		{
			fltx4 retVal; // 2418
			_mm_rcp_ps(__m128 __A); // 2419
		}
		ReciprocalEstSIMD<>(const fltx4& a); // 390
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 394
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 394
		{
			fltx4 retVal; // 2228
			_mm_max_ps(__m128 __A,
					__m128 __B);  // 2229
		}
		MaxSIMD<>(const fltx4& a,
				const fltx4& b);  // 394
		{
			fltx4 retVal; // 2369
			_mm_rsqrt_ps(__m128 __A); // 2370
		}
		ReciprocalSqrtEstSIMD<>(const fltx4& a); // 475
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 153
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 154
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 155
		FourVectors::operator*=(
				const fltx4& scale);  // 475
		FourVectors::VectorNormalizeFast(); // 405
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 428
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 428
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 380
	}
	{
		fltx4 NdotL; // 436
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 166
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
				const fltx4& c);  // 167
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
				const fltx4& c);  // 168
		FourVectors::operator*(
				const FourVectors& b);  // 436
		{
			fltx4 retVal; // 2228
			_mm_max_ps(__m128 __A,
					__m128 __B);  // 2229
		}
		MaxSIMD<>(const fltx4& a,
				const fltx4& b);  // 437
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 438
	}
	FourVectors::Init(
		float flX,
		float flY,
		float flZ);  // 293
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 98
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 99
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 100
	FourVectors::DuplicateVector(
			const Vector& v);  // 304
	FourVectors::FourVectors(); // 300
	FourVectors::Init(); // 301
	operator&(ComputeLightAtPointsFlags_t a,
			ComputeLightAtPointsFlags_t b);  // 434
	operator&(ComputeLightAtPointsFlags_t a,
			ComputeLightAtPointsFlags_t b);  // 442
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 444
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 444
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 444
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 445
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 445
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 445
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 446
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 446
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 446
} /* size: 0, variables: 5, inline expansions: 18 (0 bytes) */

// <01AC4FBB> mathlib/extended/lightdesc.cpp:288
// variables: 137
// function calls: 316
void LightDesc_t::ComputeLightAtPoints(const FourVectors& v4Position, const FourVectors* p4Normal, FourVectors& v4AccumulatedColors, ComputeLightAtPointsFlags_t nFlags)
{
	const char   __FUNCTION__; // 7763
	fltx4 fl4Falloff; // 299
	FourVectors v4PositionToLightDir; // 300
	fltx4 fl4Strength; // 431
	const Vector& vColor; // 442
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
	}
	{
		Vector vTangent; // 308
		fltx4 fl4DirectionDot; // 314
		fltx4 fl4TanDot; // 319
		fltx4 fl4UpDot; // 320
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 308
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 175
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 174
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 174
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
				const fltx4& c);  // 175
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 176
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
				const fltx4& c);  // 176
		FourVectors::operator*(
				const Vector& b);  // 314
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 321
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 98
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 99
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 100
		FourVectors::DuplicateVector(
				const Vector& v);  // 310
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 174
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 176
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 174
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 175
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
				const fltx4& c);  // 175
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
				const fltx4& c);  // 176
		FourVectors::operator*(
				const Vector& b);  // 320
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		FourVectors::ApplyBinaryUpdateFunction<SubSIMD<> >(
							const FourVectors& v4Arg);  // 143
		FourVectors::operator-=(
				const FourVectors& b);  // 311
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 176
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 175
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
				const fltx4& c);  // 175
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
				const fltx4& c);  // 176
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 174
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 174
		FourVectors::operator*(
				const Vector& b);  // 319
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 153
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 154
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 155
		FourVectors::operator*=(
				const fltx4& scale);  // 326
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 322
		{
			fltx4 retVal; // 2067
			_mm_cmplt_ps(__m128 __A,
					__m128 __B);  // 2068
		}
		CmpLtSIMD<>(const fltx4& a,
				const fltx4& b);  // 315
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 315
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 316
		{
			fltx4 retVal; // 2067
			_mm_cmplt_ps(__m128 __A,
					__m128 __B);  // 2068
		}
		CmpLtSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 321
		{
			fltx4 retVal; // 602
			_mm_load_ps(const float* __P); // 603
		}
		LoadAlignedSIMD<>(const void* pSIMD); // 2267
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 2267
		fabs<>(const fltx4& x); // 2272
		AbsSIMD<>(const fltx4& val); // 321
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 322
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 2267
		fabs<>(const fltx4& x); // 2272
		AbsSIMD<>(const fltx4& val); // 322
		{
			fltx4 retVal; // 2067
			_mm_cmplt_ps(__m128 __A,
					__m128 __B);  // 2068
		}
		CmpLtSIMD<>(const fltx4& a,
				const fltx4& b);  // 322
		{
			fltx4 retVal; // 2067
			_mm_cmplt_ps(__m128 __A,
					__m128 __B);  // 2068
		}
		CmpLtSIMD<>(const fltx4& a,
				const fltx4& b);  // 321
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 321
		{
			fltx4 retVal; // 718
			_mm_and_ps(__m128 __A,
					__m128 __B);  // 719
		}
		AndSIMD<>(const fltx4& a,
				const fltx4& b);  // 322
	}
	{
		float flAbsoluteStrength; // 331
		Vector vPosition; // 332
		fltx4 fl4DistanceSqr; // 374
		{
			Vector vPoint; // 336
			{
				Vector vLine; // 340
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 340
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 342
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 340
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 342
			}
			{
				Vector vFwd; // 353
				Vector vUp; // 354
				Vector vLeft; // 355
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 360
				VMatrix::Init(
					vec_t m00,
					vec_t m01,
					vec_t m02,
					vec_t m03,
					vec_t m10,
					vec_t m11,
					vec_t m12,
					vec_t m13,
					vec_t m20,
					vec_t m21,
					vec_t m22,
					vec_t m23,
					vec_t m30,
					vec_t m31,
					vec_t m32,
					vec_t m33);  // 509
				VMatrix::VMatrix(
					const Vector& xAxis,
					const Vector& yAxis,
					const Vector& zAxis);  // 358
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 359
				CrossProduct(const Vector& a,
						const Vector& b,
						Vector& result);  // 1488
				Vector::Vector(); // 1487
				Vector::Cross(
					const Vector& vOther);  // 355
				Vector::Normalized(); // 363
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 360
				Vector::operator=(
						const Vector& vOther);  // 360
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 363
				DotProduct(const Vector& a,
						const Vector& b);  // 363
			}
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 288
			FourVectors::Vec(
				int idx);  // 336
			Vector::Vector(); // 1305
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1306
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 1307
			Vector::DistTo(
				const Vector& vOther);  // 367
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 288
			FourVectors::Vec(
				int idx);  // 368
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 368
			Vector::operator+=(
					const Vector& v);  // 368
			Vector::operator=(
					const Vector& vOther);  // 348
		}
		{
			fltx4 fl4Range; // 401
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 402
			{
				fltx4 retVal; // 2067
				_mm_cmplt_ps(__m128 __A,
						__m128 __B);  // 2068
			}
			CmpLtSIMD<>(const fltx4& a,
					const fltx4& b);  // 402
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 402
		}
		{
			fltx4 fl4ConeDot; // 409
			fltx4 fl4ConeFalloffScale; // 411
			fltx4 fl4OutsideMask; // 423
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 174
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 174
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 175
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
					const fltx4& c);  // 175
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 176
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
					const fltx4& c);  // 176
			FourVectors::operator*(
					const Vector& b);  // 409
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 409
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 411
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 411
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 411
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 411
			{
				fltx4 retVal; // 2200
				_mm_min_ps(__m128 __A,
						__m128 __B);  // 2201
			}
			MinSIMD<>(const fltx4& a,
					const fltx4& b);  // 412
			PowSIMD_Approx(const fltx4& x,
					float exponent);  // 417
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 423
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 419
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 423
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 424
		}
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 98
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 99
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 100
		FourVectors::DuplicateVector(
				const Vector& v);  // 371
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 143
		FourVectors::ApplyBinaryUpdateFunction<SubSIMD<> >(
							const FourVectors& v4Arg);  // 143
		FourVectors::operator-=(
				const FourVectors& b);  // 372
		{
			fltx4 retVal; // 2228
			_mm_max_ps(__m128 __A,
					__m128 __B);  // 2229
		}
		MaxSIMD<>(const fltx4& a,
				const fltx4& b);  // 375
		DotProduct(const FourVectors& a,
				const FourVectors& b);  // 374
		{
			fltx4 retVal; // 2350
			_mm_sqrt_ps(__m128 __A); // 2351
		}
		SqrtSIMD<>(const fltx4& a); // 2342
		SqrtEstSIMD<>(const fltx4& a); // 384
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 384
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 384
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 384
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 388
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 388
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 388
		{
			fltx4 retVal; // 2418
			_mm_rcp_ps(__m128 __A); // 2419
		}
		ReciprocalEstSIMD<>(const fltx4& a); // 390
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 394
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 394
		{
			fltx4 retVal; // 2228
			_mm_max_ps(__m128 __A,
					__m128 __B);  // 2229
		}
		MaxSIMD<>(const fltx4& a,
				const fltx4& b);  // 394
		{
			fltx4 retVal; // 2369
			_mm_rsqrt_ps(__m128 __A); // 2370
		}
		ReciprocalSqrtEstSIMD<>(const fltx4& a); // 475
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 153
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 154
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 155
		FourVectors::operator*=(
				const fltx4& scale);  // 475
		FourVectors::VectorNormalizeFast(); // 405
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 428
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 428
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 380
	}
	{
		fltx4 NdotL; // 436
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 166
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
				const fltx4& c);  // 167
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
				const fltx4& c);  // 168
		FourVectors::operator*(
				const FourVectors& b);  // 436
		{
			fltx4 retVal; // 2228
			_mm_max_ps(__m128 __A,
					__m128 __B);  // 2229
		}
		MaxSIMD<>(const fltx4& a,
				const fltx4& b);  // 437
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 438
	}
	FourVectors::Init(
		float flX,
		float flY,
		float flZ);  // 293
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 98
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 99
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 100
	FourVectors::DuplicateVector(
			const Vector& v);  // 304
	FourVectors::FourVectors(); // 300
	FourVectors::Init(); // 301
	operator&(ComputeLightAtPointsFlags_t a,
			ComputeLightAtPointsFlags_t b);  // 434
	operator&(ComputeLightAtPointsFlags_t a,
			ComputeLightAtPointsFlags_t b);  // 442
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 444
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 444
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 444
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 445
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 445
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 445
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 446
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 446
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 446
} /* size: 0, variables: 5, inline expansions: 18 (0 bytes) */

// <05843FA5> mathlib/extended/lightdesc.cpp:450
// variable: 1
// function calls: 2
void LightDesc_t::SetupOldStyleAttenuation(float fQuadraticAttn, float fLinearAttn, float fConstantAttn)
{
	float fScaleFactor; // 470
	Vector::operator*=(
			float fl);  // 474
	Vector::operator*=(
			float fl);  // 475
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <05843E09> mathlib/extended/lightdesc.cpp:479
// variables: 7
void LightDesc_t::SetupNewStyleAttenuation(float fFiftyPercentDistance, float fZeroPercentDistance)
{
	float d50; // 483
	float d0; // 484
	float a; // 491
	float b; // 491
	float c; // 491
	float v50; // 496
	float scale; // 497
} /* size: 0, variables: 7 */

// <05843D4B> mathlib/extended/lightdesc.cpp:506
// function calls: 2
void LightDesc_t::IsDirectionWithinLightCone(const Vector& rdir)
{
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 511
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05843D19> mathlib/extended/lightdesc.cpp:518
void LightDesc_t::SetPointLightSourceShape()
{
} /* size: 0 */

// <05843CD2> mathlib/extended/lightdesc.cpp:525
void LightDesc_t::SetSphereLightSourceShape(float flSphereRadius)
{
} /* size: 0 */

// <05843C2F> mathlib/extended/lightdesc.cpp:532
// function call: 1
void LightDesc_t::SetSphereLightSourceShapeForDirectionalLight(float flAngularRadiusInDegrees)
{
	DEG2RAD(float flDegrees); // 535
} /* size: 0, inline expansions: 1 (0 bytes) */

// <058434C9> mathlib/extended/lightdesc.cpp:539
// variables: 6
// function calls: 29
void LightDesc_t::EstimateEnergy(bool bUseBounceColor, float flSceneDiameter)
{
	Vector vColor; // 541
	float flAttenScale; // 544
	const char   __FUNCTION__; // 563
	{
		float flSceneDiskArea; // 557
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 558
	}
	{
		float flRectangleArea; // 562
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 563
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 566
	}
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 553
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 553
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 553
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 553
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 549
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 549
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 549
} /* size: 0, variables: 3, inline expansions: 23 (0 bytes) */

// <03520D98> mathlib/extended/lightdesc.cpp:539
// variables: 6
// function calls: 29
void LightDesc_t::EstimateEnergy(bool bUseBounceColor, float flSceneDiameter)
{
	Vector vColor; // 541
	float flAttenScale; // 544
	const char   __FUNCTION__; // 43511
	{
		float flSceneDiskArea; // 557
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 558
	}
	{
		float flRectangleArea; // 562
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 563
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 566
	}
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 553
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 553
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 553
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 553
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 549
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 549
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 549
} /* size: 0, variables: 3, inline expansions: 23 (0 bytes) */

// <01AC43F1> mathlib/extended/lightdesc.cpp:539
// variables: 6
// function calls: 29
void LightDesc_t::EstimateEnergy(bool bUseBounceColor, float flSceneDiameter)
{
	Vector vColor; // 541
	float flAttenScale; // 544
	const char   __FUNCTION__; // 7616
	{
		float flSceneDiskArea; // 557
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 558
	}
	{
		float flRectangleArea; // 562
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 563
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 566
	}
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 553
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 553
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 553
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 553
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 549
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 549
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 549
} /* size: 0, variables: 3, inline expansions: 23 (0 bytes) */

// <0584241C> mathlib/extended/lightdesc.cpp:570
// variables: 12
// function calls: 63
void LightDesc_t::GenerateRay(Vector& vPosition, Vector& vDirection, float flR1, float flR2, const Vector& vSceneCenter, float flSceneDiameter)
{
	const char   __FUNCTION__; // 492
	{
		Vector vTangent1; // 594
		Vector vTangent2; // 594
		{
			Vector2D vConcentricSample; // 601
			Vector vPointOnDisc; // 602
		}
		Vector::operator=(
				const Vector& vOther);  // 592
		Vector::Vector(); // 594
		Vector::Vector(); // 594
		SinCos(float radians,
			float* sine,
			float* cosine);  // 758
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 761
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 759
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 760
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 760
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 761
		UniformCone(const Vector& vDirection,
				const Vector& vTangent,
				const Vector& vBitangent,
				float flR1,
				float flR2,
				float flCosThetaMax);  // 612
		Vector::operator=(
				const Vector& vOther);  // 612
	}
	{
		Vector vTangent1; // 625
		Vector vTangent2; // 625
		float flTheta; // 628
		float flR; // 629
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 623
		Vector::operator=(
				const Vector& vOther);  // 623
		Vector::Vector(); // 625
		Vector::Vector(); // 625
		Vector::operator=(
				const Vector& vOther);  // 631
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 632
		Vector::operator+=(
				const Vector& v);  // 632
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 633
		Vector::operator+=(
				const Vector& v);  // 633
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 634
		Vector::operator+=(
				const Vector& v);  // 634
	}
	{
		Vector vTangent; // 644
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 643
		}
		Vector::operator=(
				const Vector& vOther);  // 641
		Vector::operator!=(
				const Vector& src);  // 643
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 644
		Vector::Normalized(); // 644
		Vector::operator=(
				const Vector& vOther);  // 646
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 647
		Vector::operator+=(
				const Vector& v);  // 647
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 648
		Vector::operator+=(
				const Vector& v);  // 648
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 653
	}
	Vector::operator=(
			const Vector& vOther);  // 574
	SinCos(float radians,
		float* sine,
		float* cosine);  // 823
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 824
	UniformSphere(float flR1,
			float flR2);  // 582
	Vector::operator=(
			const Vector& vOther);  // 582
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <0351FCEB> mathlib/extended/lightdesc.cpp:570
// variables: 12
// function calls: 63
void LightDesc_t::GenerateRay(Vector& vPosition, Vector& vDirection, float flR1, float flR2, const Vector& vSceneCenter, float flSceneDiameter)
{
	const char   __FUNCTION__; // 43440
	{
		Vector vTangent1; // 594
		Vector vTangent2; // 594
		{
			Vector2D vConcentricSample; // 601
			Vector vPointOnDisc; // 602
		}
		Vector::operator=(
				const Vector& vOther);  // 592
		Vector::Vector(); // 594
		Vector::Vector(); // 594
		SinCos(float radians,
			float* sine,
			float* cosine);  // 758
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 761
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 759
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 760
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 760
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 761
		UniformCone(const Vector& vDirection,
				const Vector& vTangent,
				const Vector& vBitangent,
				float flR1,
				float flR2,
				float flCosThetaMax);  // 612
		Vector::operator=(
				const Vector& vOther);  // 612
	}
	{
		Vector vTangent1; // 625
		Vector vTangent2; // 625
		float flTheta; // 628
		float flR; // 629
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 623
		Vector::operator=(
				const Vector& vOther);  // 623
		Vector::Vector(); // 625
		Vector::Vector(); // 625
		Vector::operator=(
				const Vector& vOther);  // 631
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 632
		Vector::operator+=(
				const Vector& v);  // 632
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 633
		Vector::operator+=(
				const Vector& v);  // 633
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 634
		Vector::operator+=(
				const Vector& v);  // 634
	}
	{
		Vector vTangent; // 644
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 643
		}
		Vector::operator=(
				const Vector& vOther);  // 641
		Vector::operator!=(
				const Vector& src);  // 643
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 644
		Vector::Normalized(); // 644
		Vector::operator=(
				const Vector& vOther);  // 646
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 647
		Vector::operator+=(
				const Vector& v);  // 647
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 648
		Vector::operator+=(
				const Vector& v);  // 648
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 653
	}
	Vector::operator=(
			const Vector& vOther);  // 574
	SinCos(float radians,
		float* sine,
		float* cosine);  // 823
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 824
	UniformSphere(float flR1,
			float flR2);  // 582
	Vector::operator=(
			const Vector& vOther);  // 582
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <01AC3344> mathlib/extended/lightdesc.cpp:570
// variables: 12
// function calls: 63
void LightDesc_t::GenerateRay(Vector& vPosition, Vector& vDirection, float flR1, float flR2, const Vector& vSceneCenter, float flSceneDiameter)
{
	const char   __FUNCTION__; // 7545
	{
		Vector vTangent1; // 594
		Vector vTangent2; // 594
		{
			Vector2D vConcentricSample; // 601
			Vector vPointOnDisc; // 602
		}
		Vector::operator=(
				const Vector& vOther);  // 592
		Vector::Vector(); // 594
		Vector::Vector(); // 594
		SinCos(float radians,
			float* sine,
			float* cosine);  // 758
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 761
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 759
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 760
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 760
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 761
		UniformCone(const Vector& vDirection,
				const Vector& vTangent,
				const Vector& vBitangent,
				float flR1,
				float flR2,
				float flCosThetaMax);  // 612
		Vector::operator=(
				const Vector& vOther);  // 612
	}
	{
		Vector vTangent1; // 625
		Vector vTangent2; // 625
		float flTheta; // 628
		float flR; // 629
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 623
		Vector::operator=(
				const Vector& vOther);  // 623
		Vector::Vector(); // 625
		Vector::Vector(); // 625
		Vector::operator=(
				const Vector& vOther);  // 631
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 632
		Vector::operator+=(
				const Vector& v);  // 632
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 633
		Vector::operator+=(
				const Vector& v);  // 633
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 634
		Vector::operator+=(
				const Vector& v);  // 634
	}
	{
		Vector vTangent; // 644
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 643
		}
		Vector::operator=(
				const Vector& vOther);  // 641
		Vector::operator!=(
				const Vector& src);  // 643
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 644
		Vector::Normalized(); // 644
		Vector::operator=(
				const Vector& vOther);  // 646
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 647
		Vector::operator+=(
				const Vector& v);  // 647
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 648
		Vector::operator+=(
				const Vector& v);  // 648
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 653
	}
	Vector::operator=(
			const Vector& vOther);  // 574
	SinCos(float radians,
		float* sine,
		float* cosine);  // 823
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 824
	UniformSphere(float flR1,
			float flR2);  // 582
	Vector::operator=(
			const Vector& vOther);  // 582
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <058416E2> mathlib/extended/lightdesc.cpp:657
// variables: 30
// function calls: 42
void LightDesc_t::GenerateRaySeed(const Vector& vPosition, const Vector& vSceneCenter, float flSceneDiameter)
{
	const char   __FUNCTION__; // 590
	{
		Vector vDirection; // 661
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 666
		}
		{
			float flR1; // 671
			float flR2; // 678
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 680
		}
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 661
		Vector::Normalized(); // 661
	}
	{
		Vector vDirection; // 686
		Vector vTangent1; // 688
		Vector vTangent2; // 688
		{
			float fDiskX; // 693
			float fDiskY; // 694
			float fDiskZ; // 695
		}
		{
			float flR2; // 704
			float flDotTangent1; // 705
			float flDotTangent2; // 706
			float flR1; // 714
			DotProduct(const Vector& a,
					const Vector& b);  // 705
			DotProduct(const Vector& a,
					const Vector& b);  // 706
			DotProduct(const Vector& a,
					const Vector& b);  // 714
			Clamp<float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 717
			Clamp<float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 718
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 719
		}
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 686
		Vector::Normalized(); // 686
		Vector::Vector(); // 688
		Vector::Vector(); // 688
	}
	{
		Vector vPositionOnLight; // 725
		Vector vTangent1; // 727
		Vector vTangent2; // 727
		float flDotTangent1; // 730
		float flDotTangent2; // 731
		float flR1; // 733
		float flR2; // 741
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 725
		Vector::Vector(); // 727
		Vector::Vector(); // 727
		DotProduct(const Vector& a,
				const Vector& b);  // 730
		DotProduct(const Vector& a,
				const Vector& b);  // 731
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 744
	}
	{
		Vector vPositionOnLight; // 749
		Vector vTangent; // 753
		float flDotTangent; // 754
		float flDotUp; // 755
		float flR1; // 757
		float flR2; // 758
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 752
		}
		DotProduct(const Vector& a,
				const Vector& b);  // 749
		Vector::operator!=(
				const Vector& src);  // 752
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 749
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 749
		Vector::operator-=(
				const Vector& v);  // 750
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 753
		Vector::Normalized(); // 753
		DotProduct(const Vector& a,
				const Vector& b);  // 754
		DotProduct(const Vector& a,
				const Vector& b);  // 755
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 760
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 763
	}
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 764
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0351EFB1> mathlib/extended/lightdesc.cpp:657
// variables: 30
// function calls: 42
void LightDesc_t::GenerateRaySeed(const Vector& vPosition, const Vector& vSceneCenter, float flSceneDiameter)
{
	const char   __FUNCTION__; // 43538
	{
		Vector vDirection; // 661
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 666
		}
		{
			float flR1; // 671
			float flR2; // 678
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 680
		}
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 661
		Vector::Normalized(); // 661
	}
	{
		Vector vDirection; // 686
		Vector vTangent1; // 688
		Vector vTangent2; // 688
		{
			float fDiskX; // 693
			float fDiskY; // 694
			float fDiskZ; // 695
		}
		{
			float flR2; // 704
			float flDotTangent1; // 705
			float flDotTangent2; // 706
			float flR1; // 714
			DotProduct(const Vector& a,
					const Vector& b);  // 705
			DotProduct(const Vector& a,
					const Vector& b);  // 706
			DotProduct(const Vector& a,
					const Vector& b);  // 714
			Clamp<float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 717
			Clamp<float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 718
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 719
		}
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 686
		Vector::Normalized(); // 686
		Vector::Vector(); // 688
		Vector::Vector(); // 688
	}
	{
		Vector vPositionOnLight; // 725
		Vector vTangent1; // 727
		Vector vTangent2; // 727
		float flDotTangent1; // 730
		float flDotTangent2; // 731
		float flR1; // 733
		float flR2; // 741
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 725
		Vector::Vector(); // 727
		Vector::Vector(); // 727
		DotProduct(const Vector& a,
				const Vector& b);  // 730
		DotProduct(const Vector& a,
				const Vector& b);  // 731
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 744
	}
	{
		Vector vPositionOnLight; // 749
		Vector vTangent; // 753
		float flDotTangent; // 754
		float flDotUp; // 755
		float flR1; // 757
		float flR2; // 758
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 752
		}
		DotProduct(const Vector& a,
				const Vector& b);  // 749
		Vector::operator!=(
				const Vector& src);  // 752
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 749
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 749
		Vector::operator-=(
				const Vector& v);  // 750
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 753
		Vector::Normalized(); // 753
		DotProduct(const Vector& a,
				const Vector& b);  // 754
		DotProduct(const Vector& a,
				const Vector& b);  // 755
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 760
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 763
	}
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 764
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <01AC260A> mathlib/extended/lightdesc.cpp:657
// variables: 30
// function calls: 42
void LightDesc_t::GenerateRaySeed(const Vector& vPosition, const Vector& vSceneCenter, float flSceneDiameter)
{
	const char   __FUNCTION__; // 7643
	{
		Vector vDirection; // 661
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 666
		}
		{
			float flR1; // 671
			float flR2; // 678
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 680
		}
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 661
		Vector::Normalized(); // 661
	}
	{
		Vector vDirection; // 686
		Vector vTangent1; // 688
		Vector vTangent2; // 688
		{
			float fDiskX; // 693
			float fDiskY; // 694
			float fDiskZ; // 695
		}
		{
			float flR2; // 704
			float flDotTangent1; // 705
			float flDotTangent2; // 706
			float flR1; // 714
			DotProduct(const Vector& a,
					const Vector& b);  // 705
			DotProduct(const Vector& a,
					const Vector& b);  // 706
			DotProduct(const Vector& a,
					const Vector& b);  // 714
			Clamp<float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 717
			Clamp<float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 718
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 719
		}
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 686
		Vector::Normalized(); // 686
		Vector::Vector(); // 688
		Vector::Vector(); // 688
	}
	{
		Vector vPositionOnLight; // 725
		Vector vTangent1; // 727
		Vector vTangent2; // 727
		float flDotTangent1; // 730
		float flDotTangent2; // 731
		float flR1; // 733
		float flR2; // 741
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 725
		Vector::Vector(); // 727
		Vector::Vector(); // 727
		DotProduct(const Vector& a,
				const Vector& b);  // 730
		DotProduct(const Vector& a,
				const Vector& b);  // 731
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 744
	}
	{
		Vector vPositionOnLight; // 749
		Vector vTangent; // 753
		float flDotTangent; // 754
		float flDotUp; // 755
		float flR1; // 757
		float flR2; // 758
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 752
		}
		DotProduct(const Vector& a,
				const Vector& b);  // 749
		Vector::operator!=(
				const Vector& src);  // 752
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 749
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 749
		Vector::operator-=(
				const Vector& v);  // 750
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 753
		Vector::Normalized(); // 753
		DotProduct(const Vector& a,
				const Vector& b);  // 754
		DotProduct(const Vector& a,
				const Vector& b);  // 755
		Vector2D::Vector2D(
			vec_t X,
			vec_t Y);  // 760
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 763
	}
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 764
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05840FEF> mathlib/extended/lightdesc.cpp:767
// variables: 8
// function calls: 24
void LightDesc_t::GenerateRayPdf(const Vector& vPosition, const Vector& vNormal, const Vector& vSceneCenter, float flSceneDiameter)
{
	const char   __FUNCTION__; // 563
	{
		Vector vDirection; // 771
		float flDist; // 773
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 771
		Vector::NormalizeInPlace(); // 773
		DotProduct(const Vector& a,
				const Vector& b);  // 777
	}
	{
		Vector vDirection; // 782
		float flDist; // 783
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 782
		Vector::NormalizeInPlace(); // 783
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 788
		DotProduct(const Vector& a,
				const Vector& b);  // 788
		DotProduct(const Vector& a,
				const Vector& b);  // 791
	}
	{
		Vector vDisplacement; // 803
		Vector vTangent; // 808
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 803
		DotProduct(const Vector& a,
				const Vector& b);  // 804
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 808
		Vector::Normalized(); // 808
		DotProduct(const Vector& a,
				const Vector& b);  // 809
		DotProduct(const Vector& a,
				const Vector& b);  // 813
		DotProduct(const Vector& a,
				const Vector& b);  // 816
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 819
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 797
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0351E8BE> mathlib/extended/lightdesc.cpp:767
// variables: 8
// function calls: 24
void LightDesc_t::GenerateRayPdf(const Vector& vPosition, const Vector& vNormal, const Vector& vSceneCenter, float flSceneDiameter)
{
	const char   __FUNCTION__; // 43511
	{
		Vector vDirection; // 771
		float flDist; // 773
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 771
		Vector::NormalizeInPlace(); // 773
		DotProduct(const Vector& a,
				const Vector& b);  // 777
	}
	{
		Vector vDirection; // 782
		float flDist; // 783
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 782
		Vector::NormalizeInPlace(); // 783
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 788
		DotProduct(const Vector& a,
				const Vector& b);  // 788
		DotProduct(const Vector& a,
				const Vector& b);  // 791
	}
	{
		Vector vDisplacement; // 803
		Vector vTangent; // 808
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 803
		DotProduct(const Vector& a,
				const Vector& b);  // 804
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 808
		Vector::Normalized(); // 808
		DotProduct(const Vector& a,
				const Vector& b);  // 809
		DotProduct(const Vector& a,
				const Vector& b);  // 813
		DotProduct(const Vector& a,
				const Vector& b);  // 816
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 819
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 797
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <01AC1F17> mathlib/extended/lightdesc.cpp:767
// variables: 8
// function calls: 24
void LightDesc_t::GenerateRayPdf(const Vector& vPosition, const Vector& vNormal, const Vector& vSceneCenter, float flSceneDiameter)
{
	const char   __FUNCTION__; // 7616
	{
		Vector vDirection; // 771
		float flDist; // 773
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 771
		Vector::NormalizeInPlace(); // 773
		DotProduct(const Vector& a,
				const Vector& b);  // 777
	}
	{
		Vector vDirection; // 782
		float flDist; // 783
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 782
		Vector::NormalizeInPlace(); // 783
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 788
		DotProduct(const Vector& a,
				const Vector& b);  // 788
		DotProduct(const Vector& a,
				const Vector& b);  // 791
	}
	{
		Vector vDisplacement; // 803
		Vector vTangent; // 808
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 803
		DotProduct(const Vector& a,
				const Vector& b);  // 804
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 808
		Vector::Normalized(); // 808
		DotProduct(const Vector& a,
				const Vector& b);  // 809
		DotProduct(const Vector& a,
				const Vector& b);  // 813
		DotProduct(const Vector& a,
				const Vector& b);  // 816
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 819
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 797
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0583F111> mathlib/extended/lightdesc.cpp:823
// variables: 23
// function calls: 128
void LightDesc_t::ShadowRayEndpoint(const Vector& vPosition, float flR1, float flR2)
{
	bool bAreaLight; // 825
	const char   __FUNCTION__; // 639
	{
		Vector vShadowRayEnd; // 829
		{
			Vector vTangent; // 833
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 833
			SinCos(float radians,
				float* sine,
				float* cosine);  // 732
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 735
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 734
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 735
			UniformDisk(float flR1,
					float flR2,
					const Vector& vTangent1,
					const Vector& vTangent2);  // 835
			Vector::operator+=(
					const Vector& v);  // 835
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 835
		}
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 838
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 838
	}
	{
		Vector vTangent; // 842
		Vector vDirection; // 844
		float flT; // 851
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 844
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 842
		DotProduct(const Vector& a,
				const Vector& b);  // 851
		DotProduct(const Vector& a,
				const Vector& b);  // 855
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 858
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 858
		DotProduct(const Vector& a,
				const Vector& b);  // 855
		SinCos(float radians,
			float* sine,
			float* cosine);  // 732
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 735
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 734
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 735
		UniformDisk(float flR1,
				float flR2,
				const Vector& vTangent1,
				const Vector& vTangent2);  // 847
		Vector::NormalizeInPlace(); // 848
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 847
		Vector::operator+=(
				const Vector& v);  // 847
	}
	{
		Vector vShadowRayEnd; // 863
		{
			Vector vLine; // 870
			Vector vPositionAreaLight; // 872
			Min<float>(const float& val1,
					const float& val2);  // 872
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 870
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 872
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 872
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 872
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 875
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 875
			Vector::operator=(
					const Vector& vOther);  // 877
		}
		{
			Vector vR; // 883
			float flDistToLightSource; // 884
			float flCosAlpha; // 885
			float flSinAlpha; // 886
			float flSubtendedDiskRadius; // 887
			Vector vTan1; // 889
			Vector vTan2; // 889
			Vector2D vDiskSample; // 892
			Vector vAreaLightOffset; // 893
			float flPushOffsetSqr; // 895
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 883
			Vector::NormalizeInPlace(); // 884
			Vector::Vector(); // 889
			Vector::Vector(); // 889
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 893
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 893
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 893
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 893
			DotProduct(const Vector& a,
					const Vector& b);  // 895
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 896
			Vector::operator+=(
					const Vector& v);  // 896
			Vector::operator+=(
					const Vector& v);  // 898
		}
		{
			Vector vLeft; // 904
			Vector vRectLightOffset; // 906
			Vector::Vector(); // 1487
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1488
			Vector::Cross(
				const Vector& vOther);  // 904
			Min<float>(const float& val1,
					const float& val2);  // 907
			Min<float>(const float& val1,
					const float& val2);  // 906
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 907
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 907
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 906
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 906
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 907
			Vector::operator+=(
					const Vector& v);  // 909
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 917
	}
} /* size: 0, variables: 2 */

// <0351C9E0> mathlib/extended/lightdesc.cpp:823
// variables: 23
// function calls: 128
void LightDesc_t::ShadowRayEndpoint(const Vector& vPosition, float flR1, float flR2)
{
	bool bAreaLight; // 825
	const char   __FUNCTION__; // 43587
	{
		Vector vShadowRayEnd; // 829
		{
			Vector vTangent; // 833
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 833
			SinCos(float radians,
				float* sine,
				float* cosine);  // 732
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 735
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 734
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 735
			UniformDisk(float flR1,
					float flR2,
					const Vector& vTangent1,
					const Vector& vTangent2);  // 835
			Vector::operator+=(
					const Vector& v);  // 835
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 835
		}
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 838
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 838
	}
	{
		Vector vTangent; // 842
		Vector vDirection; // 844
		float flT; // 851
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 844
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 842
		DotProduct(const Vector& a,
				const Vector& b);  // 851
		DotProduct(const Vector& a,
				const Vector& b);  // 855
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 858
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 858
		DotProduct(const Vector& a,
				const Vector& b);  // 855
		SinCos(float radians,
			float* sine,
			float* cosine);  // 732
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 735
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 734
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 735
		UniformDisk(float flR1,
				float flR2,
				const Vector& vTangent1,
				const Vector& vTangent2);  // 847
		Vector::NormalizeInPlace(); // 848
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 847
		Vector::operator+=(
				const Vector& v);  // 847
	}
	{
		Vector vShadowRayEnd; // 863
		{
			Vector vLine; // 870
			Vector vPositionAreaLight; // 872
			Min<float>(const float& val1,
					const float& val2);  // 872
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 870
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 872
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 872
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 872
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 875
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 875
			Vector::operator=(
					const Vector& vOther);  // 877
		}
		{
			Vector vR; // 883
			float flDistToLightSource; // 884
			float flCosAlpha; // 885
			float flSinAlpha; // 886
			float flSubtendedDiskRadius; // 887
			Vector vTan1; // 889
			Vector vTan2; // 889
			Vector2D vDiskSample; // 892
			Vector vAreaLightOffset; // 893
			float flPushOffsetSqr; // 895
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 883
			Vector::NormalizeInPlace(); // 884
			Vector::Vector(); // 889
			Vector::Vector(); // 889
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 893
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 893
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 893
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 893
			DotProduct(const Vector& a,
					const Vector& b);  // 895
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 896
			Vector::operator+=(
					const Vector& v);  // 896
			Vector::operator+=(
					const Vector& v);  // 898
		}
		{
			Vector vLeft; // 904
			Vector vRectLightOffset; // 906
			Vector::Vector(); // 1487
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1488
			Vector::Cross(
				const Vector& vOther);  // 904
			Min<float>(const float& val1,
					const float& val2);  // 907
			Min<float>(const float& val1,
					const float& val2);  // 906
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 907
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 907
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 906
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 906
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 907
			Vector::operator+=(
					const Vector& v);  // 909
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 917
	}
} /* size: 0, variables: 2 */

// <01AC0039> mathlib/extended/lightdesc.cpp:823
// variables: 23
// function calls: 128
void LightDesc_t::ShadowRayEndpoint(const Vector& vPosition, float flR1, float flR2)
{
	bool bAreaLight; // 825
	const char   __FUNCTION__; // 7692
	{
		Vector vShadowRayEnd; // 829
		{
			Vector vTangent; // 833
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 833
			SinCos(float radians,
				float* sine,
				float* cosine);  // 732
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 735
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 734
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 735
			UniformDisk(float flR1,
					float flR2,
					const Vector& vTangent1,
					const Vector& vTangent2);  // 835
			Vector::operator+=(
					const Vector& v);  // 835
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 835
		}
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 838
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 838
	}
	{
		Vector vTangent; // 842
		Vector vDirection; // 844
		float flT; // 851
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1431
		Vector::operator-(); // 844
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 842
		DotProduct(const Vector& a,
				const Vector& b);  // 851
		DotProduct(const Vector& a,
				const Vector& b);  // 855
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 858
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 858
		DotProduct(const Vector& a,
				const Vector& b);  // 855
		SinCos(float radians,
			float* sine,
			float* cosine);  // 732
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 735
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 734
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 735
		UniformDisk(float flR1,
				float flR2,
				const Vector& vTangent1,
				const Vector& vTangent2);  // 847
		Vector::NormalizeInPlace(); // 848
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 847
		Vector::operator+=(
				const Vector& v);  // 847
	}
	{
		Vector vShadowRayEnd; // 863
		{
			Vector vLine; // 870
			Vector vPositionAreaLight; // 872
			Min<float>(const float& val1,
					const float& val2);  // 872
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 870
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 872
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 872
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 872
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 875
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 875
			Vector::operator=(
					const Vector& vOther);  // 877
		}
		{
			Vector vR; // 883
			float flDistToLightSource; // 884
			float flCosAlpha; // 885
			float flSinAlpha; // 886
			float flSubtendedDiskRadius; // 887
			Vector vTan1; // 889
			Vector vTan2; // 889
			Vector2D vDiskSample; // 892
			Vector vAreaLightOffset; // 893
			float flPushOffsetSqr; // 895
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 883
			Vector::NormalizeInPlace(); // 884
			Vector::Vector(); // 889
			Vector::Vector(); // 889
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 893
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 893
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 893
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 893
			DotProduct(const Vector& a,
					const Vector& b);  // 895
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 896
			Vector::operator+=(
					const Vector& v);  // 896
			Vector::operator+=(
					const Vector& v);  // 898
		}
		{
			Vector vLeft; // 904
			Vector vRectLightOffset; // 906
			Vector::Vector(); // 1487
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1488
			Vector::Cross(
				const Vector& vOther);  // 904
			Min<float>(const float& val1,
					const float& val2);  // 907
			Min<float>(const float& val1,
					const float& val2);  // 906
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 907
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 907
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 906
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 906
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 907
			Vector::operator+=(
					const Vector& v);  // 909
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 917
	}
} /* size: 0, variables: 2 */


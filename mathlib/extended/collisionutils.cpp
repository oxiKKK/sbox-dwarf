
//
// mathlib/extended/collisionutils.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 53
//

// <0596AFDE> mathlib/extended/collisionutils.cpp:28
void Collision_ClearTrace(const Vector& vecRayStart, const Vector& vecRayDelta, CollisionTrace_t* pTrace)
{
} /* size: 0 */

// <0596CAD9> mathlib/extended/collisionutils.cpp:41
// variable: 1
// function calls: 28
float ComputeBoxOffset(const Ray_t& ray)
{
	float offset; // 47
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 288
	VectorAligned::operator[](
			int index);  // 47
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 288
	VectorAligned::operator[](
			int index);  // 47
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 289
	VectorAligned::operator[](
			int index);  // 48
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 289
	VectorAligned::operator[](
			int index);  // 48
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 290
	VectorAligned::operator[](
			int index);  // 49
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 290
	VectorAligned::operator[](
			int index);  // 49
	InvRSquared(const float* v); // 2823
	InvRSquared(const Vector& v); // 54
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 54
} /* size: 0, variables: 1, inline expansions: 28 (0 bytes) */

// <0596AFB3> mathlib/extended/collisionutils.cpp:41
// variable: 1
float ComputeBoxOffset(const Ray_t& ray)
{
	float offset; // 47
} /* size: 0, variables: 1 */

// <0596A5BD> mathlib/extended/collisionutils.cpp:64
// variables: 11
// function calls: 45
float IntersectRayWithTriangle(const Ray_t& ray, const Vector& v1, const Vector& v2, const Vector& v3, bool oneSided)
{
	Vector edge1; // 78
	Vector edge2; // 78
	Vector org; // 78
	Vector dirCrossEdge2; // 96
	Vector orgCrossEdge1; // 96
	float denom; // 103
	float u; // 113
	float v; // 120
	float boxt; // 126
	float t; // 127
	{
		Vector normal; // 85
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 40
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 40
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 87
		Vector::Vector(); // 85
		CrossProduct(const Vector& a,
				const Vector& b,
				Vector& result);  // 86
		DotProduct(const Vector& a,
				const Vector& b);  // 87
	}
	Vector::Vector(); // 78
	Vector::Vector(); // 78
	Vector::Vector(); // 78
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 79
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 80
	Vector::Vector(); // 96
	Vector::Vector(); // 96
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 97
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 97
	DotProduct(const Vector& a,
			const Vector& b);  // 103
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 112
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 112
	DotProduct(const Vector& a,
			const Vector& b);  // 113
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 119
	DotProduct(const Vector& a,
			const Vector& b);  // 120
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 120
	ComputeBoxOffset(const Ray_t& ray); // 126
	DotProduct(const Vector& a,
			const Vector& b);  // 127
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 131
} /* size: 0, variables: 10, inline expansions: 31 (0 bytes) */

// <05969BFD> mathlib/extended/collisionutils.cpp:138
// variables: 7
// function calls: 48
bool ComputeIntersectionBarycentricCoordinates(const Ray_t& ray, const Vector& v1, const Vector& v2, const Vector& v3, float& u, float& v, float* t)
{
	Vector edge1; // 142
	Vector edge2; // 142
	Vector org; // 142
	Vector dirCrossEdge2; // 147
	Vector orgCrossEdge1; // 147
	float denom; // 154
	{
		float boxt; // 175
		ComputeBoxOffset(const Ray_t& ray); // 175
		DotProduct(const Vector& a,
				const Vector& b);  // 176
	}
	Vector::Vector(); // 142
	Vector::Vector(); // 142
	Vector::Vector(); // 142
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 143
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 144
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 148
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 148
	Vector::Vector(); // 147
	Vector::Vector(); // 147
	DotProduct(const Vector& a,
			const Vector& b);  // 154
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 163
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 163
	DotProduct(const Vector& a,
			const Vector& b);  // 164
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 168
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 169
	DotProduct(const Vector& a,
			const Vector& b);  // 169
} /* size: 0, variables: 6, inline expansions: 46 (0 bytes) */

// <05969A79> mathlib/extended/collisionutils.cpp:188
// variables: 6
// function calls: 3
int IntersectTriangleWithPlaneBarycentric(const Vector& org, const Vector& edgeU, const Vector& edgeV, const Vector4D& plane, Vector2D* pIntersection)
{
	float orgDotNormal; // 197
	float edgeUDotNormal; // 198
	float edgeVDotNormal; // 199
	int ptIdx; // 201
	const char   __FUNCTION__; // 33495
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 235
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 197
	DotProduct(const Vector& a,
			const Vector& b);  // 198
	DotProduct(const Vector& a,
			const Vector& b);  // 199
} /* size: 0, variables: 5, inline expansions: 3 (0 bytes) */

// <02B537EB> mathlib/extended/collisionutils.cpp:188
// variables: 6
// function calls: 3
int IntersectTriangleWithPlaneBarycentric(const Vector& org, const Vector& edgeU, const Vector& edgeV, const Vector4D& plane, Vector2D* pIntersection)
{
	float orgDotNormal; // 197
	float edgeUDotNormal; // 198
	float edgeVDotNormal; // 199
	int ptIdx; // 201
	const char   __FUNCTION__; // 61246
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 235
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 197
	DotProduct(const Vector& a,
			const Vector& b);  // 198
	DotProduct(const Vector& a,
			const Vector& b);  // 199
} /* size: 0, variables: 5, inline expansions: 3 (0 bytes) */

// <01B058BA> mathlib/extended/collisionutils.cpp:188
// variables: 6
// function calls: 3
int IntersectTriangleWithPlaneBarycentric(const Vector& org, const Vector& edgeU, const Vector& edgeV, const Vector4D& plane, Vector2D* pIntersection)
{
	float orgDotNormal; // 197
	float edgeUDotNormal; // 198
	float edgeVDotNormal; // 199
	int ptIdx; // 201
	const char   __FUNCTION__; // 19837
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 235
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 197
	DotProduct(const Vector& a,
			const Vector& b);  // 198
	DotProduct(const Vector& a,
			const Vector& b);  // 199
} /* size: 0, variables: 5, inline expansions: 3 (0 bytes) */

// <0596956A> mathlib/extended/collisionutils.cpp:246
// variables: 4
// function calls: 15
bool IsPointInBox(const Vector& pt, const Vector& boxMin, const Vector& boxMax)
{
	const char   __FUNCTION__; // 32920
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 248
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 250
	}
	Vector::operator[](
			int i);  // 248
	Vector::operator[](
			int i);  // 248
	Vector::operator[](
			int i);  // 249
	Vector::operator[](
			int i);  // 249
	Vector::operator[](
			int i);  // 250
	Vector::operator[](
			int i);  // 250
	Vector::operator[](
			int i);  // 252
	Vector::operator[](
			int i);  // 252
	Vector::operator[](
			int i);  // 252
	Vector::operator[](
			int i);  // 254
	Vector::operator[](
			int i);  // 254
	Vector::operator[](
			int i);  // 254
	Vector::operator[](
			int i);  // 256
	Vector::operator[](
			int i);  // 256
	Vector::operator[](
			int i);  // 256
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <02B532DC> mathlib/extended/collisionutils.cpp:246
// variables: 4
// function calls: 15
bool IsPointInBox(const Vector& pt, const Vector& boxMin, const Vector& boxMax)
{
	const char   __FUNCTION__; // 60671
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 248
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 250
	}
	Vector::operator[](
			int i);  // 248
	Vector::operator[](
			int i);  // 248
	Vector::operator[](
			int i);  // 249
	Vector::operator[](
			int i);  // 249
	Vector::operator[](
			int i);  // 250
	Vector::operator[](
			int i);  // 250
	Vector::operator[](
			int i);  // 252
	Vector::operator[](
			int i);  // 252
	Vector::operator[](
			int i);  // 252
	Vector::operator[](
			int i);  // 254
	Vector::operator[](
			int i);  // 254
	Vector::operator[](
			int i);  // 254
	Vector::operator[](
			int i);  // 256
	Vector::operator[](
			int i);  // 256
	Vector::operator[](
			int i);  // 256
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <05969392> mathlib/extended/collisionutils.cpp:262
// variables: 3
// function calls: 4
bool IsPointInCone(const Vector& pt, const Vector& origin, const Vector& axis, float cosAngle, float length)
{
	Vector delta; // 264
	float dist; // 265
	float dot; // 266
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 264
	DotProduct(const Vector& a,
			const Vector& b);  // 266
} /* size: 0, variables: 3, inline expansions: 4 (0 bytes) */

// <059691A8> mathlib/extended/collisionutils.cpp:278
// variables: 2
// function calls: 3
bool IsPointInOBB(const Vector& pt, const Vector& boxOrg, const QAngle& boxAngles, const Vector& boxMin, const Vector& boxMax)
{
	matrix3x4_t mWorldToBox; // 280
	Vector ptTransformed; // 283
	matrix3x4_t::matrix3x4_t(); // 280
	Vector::Vector(); // 283
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 284
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <059687D0> mathlib/extended/collisionutils.cpp:312
// variables: 2
// function calls: 4
bool IsBoxIntersectingBoxExtents(const Vector& boxCenter1, const Vector& boxHalfDiagonal1, const Vector& boxCenter2, const Vector& boxHalfDiagonal2)
{
	Vector vecDelta; // 315
	Vector vecSize; // 315
	Vector::Vector(); // 315
	Vector::Vector(); // 315
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 316
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 317
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <05968777> mathlib/extended/collisionutils.cpp:323
// variable: 1
bool IsBoxIntersectingBox(fltx4 vMins0, fltx4 vMaxs0, fltx4 vMins1, fltx4 vMaxs1)
{
	fltx4 fl4Out0; // 325
} /* size: 0, variables: 1 */

// <059685E8> mathlib/extended/collisionutils.cpp:337
// variables: 2
bool IsOBBIntersectingOBB(const Vector& vecOrigin1, const QAngle& vecAngles1, const Vector& boxMin1, const Vector& boxMax1, const Vector& vecOrigin2, const QAngle& vecAngles2, const Vector& boxMin2, const Vector& boxMax2, float flTolerance)
{
	cplane_t plane; // 352
	bool bFoundPlane; // 353
} /* size: 0, variables: 2 */

// <05967C69> mathlib/extended/collisionutils.cpp:359
// variables: 6
// function calls: 32
bool IsOBBIntersectingCapsule(const Vector& vecOrigin1, const QAngle& vecAngles1, const Vector& boxMin1, const Vector& boxMax1, const Vector& vecOrigin2, const QAngle& vecAngles2, const Vector& vCenter1, const Vector& vCenter2, float flRadius, float flTolerance)
{
	matrix3x4_t xform1; // 363
	CGJKBoxProxy proxy1; // 365
	matrix3x4_t xform2; // 369
	CGJKCapsuleProxy proxy2; // 371
	DistanceQueryResult_t query; // 375
	matrix3x4_t::InitFromQAngles(
			const QAngle& angles,
			const Vector& vPosition);  // 364
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 365
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 365
	CGJKShapeProxy::CGJKShapeProxy(
			int nVertexCount,
			const Vector* pVertexBuffer,
			float flScale);  // 107
	{
		Vector e; // 110
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 111
		Vector::operator=(
				const Vector& vOther);  // 111
		Vector::operator=(
				const Vector& vOther);  // 112
		Vector::operator=(
				const Vector& vOther);  // 113
		Vector::operator=(
				const Vector& vOther);  // 114
		Vector::operator=(
				const Vector& vOther);  // 115
		Vector::operator=(
				const Vector& vOther);  // 116
		Vector::operator=(
				const Vector& vOther);  // 117
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 112
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 113
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 114
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 115
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 116
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 117
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 118
		Vector::operator=(
				const Vector& vOther);  // 118
	}
	CGJKBoxProxy::CGJKBoxProxy(
			const Vector& vHalfExtent);  // 365
	matrix3x4_t::InitFromQAngles(
			const QAngle& angles,
			const Vector& vPosition);  // 370
	matrix3x4_t::matrix3x4_t(); // 369
	CGJKShapeProxy::CGJKShapeProxy(
			int nVertexCount,
			const Vector* pVertexBuffer,
			float flScale);  // 91
	Vector::operator=(
			const Vector& vOther);  // 93
	Vector::operator=(
			const Vector& vOther);  // 94
	CGJKCapsuleProxy::CGJKCapsuleProxy(
			const Vector& vCenter1,
			const Vector& vCenter2);  // 371
} /* size: 0, variables: 5, inline expansions: 16 (0 bytes) */

// <0596172B> mathlib/extended/collisionutils.cpp:683
// variables: 20
// function calls: 34
bool IsBoxIntersectingRay(fltx4 boxMin, fltx4 boxMax, const Ray_t& ray, float flTolerance)
{
	fltx4 vTolerance; // 686
	fltx4 rayStart; // 687
	fltx4 rayExtents; // 688
	fltx4 rayDelta; // 700
	fltx4 vecExpandedBoxMin; // 701
	fltx4 vecExpandedBoxMax; // 701
	{
		VectorAligned rayMins; // 691
		VectorAligned rayMaxs; // 691
		VectorAligned::VectorAligned(); // 691
		VectorAligned::VectorAligned(); // 691
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 692
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 693
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 694
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 695
		{
			fltx4 retVal; // 2067
			_mm_cmplt_ps(__m128 __A,
					__m128 __B);  // 2068
		}
		CmpLtSIMD<>(const fltx4& a,
				const fltx4& b);  // 325
		{
			fltx4 retVal; // 2067
			_mm_cmplt_ps(__m128 __A,
					__m128 __B);  // 2068
		}
		CmpLtSIMD<>(const fltx4& a,
				const fltx4& b);  // 326
		{
			fltx4 retVal; // 927
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 928
			_mm_move_ss(__m128 __A,
					__m128 __B);  // 930
		}
		SetWToZeroSIMD<>(const fltx4& a); // 327
		{
			fltx4 retVal; // 875
			_mm_or_ps(__m128 __A,
					__m128 __B);  // 876
		}
		OrSIMD<>(const fltx4& a,
			const fltx4& b);  // 326
		_mm_movemask_ps(__m128 __A); // 1805
		TestSignSIMD<>(const fltx4& a); // 1842
		IsAnyNegative<>(const fltx4& a); // 327
		IsBoxIntersectingBox(fltx4 vMins0,
					fltx4 vMaxs0,
					fltx4 vMins1,
					fltx4 vMaxs1);  // 697
	}
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 686
	VectorAligned::operator fltx4(); // 688
	VectorAligned::operator fltx4(); // 687
	VectorAligned::operator fltx4(); // 700
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 705
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 702
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 703
} /* size: 0, variables: 6, inline expansions: 7 (0 bytes) */

// <0596075A> mathlib/extended/collisionutils.cpp:776
// variables: 2
bool IntersectRayWithRay(const Ray2D_t& ray0, const Ray2D_t& ray1, float& t, float& s)
{
	const float  epsilon; // 778
	float den; // 779
} /* size: 0, variables: 2 */

// <059600D7> mathlib/extended/collisionutils.cpp:823
// variable: 1
// function calls: 2
float IntersectRayWithPlane(const Vector& org, const Vector& dir, const Vector& normal, float dist)
{
	float denom; // 825
	DotProduct(const Vector& a,
			const Vector& b);  // 825
	DotProduct(const Vector& a,
			const Vector& b);  // 830
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <05960071> mathlib/extended/collisionutils.cpp:833
// variable: 1
float IntersectRayWithAAPlane(const Vector& vecStart, const Vector& vecEnd, int nAxis, float flSign, float flDist)
{
	float denom; // 835
} /* size: 0, variables: 1 */

// <0595DFCA> mathlib/extended/collisionutils.cpp:1066
// variable: 1
inline void ComputeSupportMap(const Vector& vecDirection, int i1, int i2, const Vector& vecBoxMins, const Vector& vecBoxMaxs, float* pDist)
{
	int nIndex; // 1069
} /* size: 0, variables: 1 */

// <0595BC32> mathlib/extended/collisionutils.cpp:1319
// variables: 3
// function calls: 16
bool IntersectRayWithOBB(const Ray_t& ray, const Vector& vecBoxOrigin, const QAngle& angBoxRotation, const Vector& vecOBBMins, const Vector& vecOBBMaxs, float flTolerance, CollisionTrace_t* pTrace)
{
	matrix3x4_t matOBBToWorld; // 1335
	{
		Vector vecWorldMins; // 1324
		Vector vecWorldMaxs; // 1324
		Vector::Vector(); // 1324
		Vector::Vector(); // 1324
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1325
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1326
	}
	QAngle::operator==(
			const QAngle& src);  // 1322
	matrix3x4_t::matrix3x4_t(); // 1335
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1332
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 1332
} /* size: 0, variables: 1, inline expansions: 12 (0 bytes) */

// <0595BC04> mathlib/extended/collisionutils.cpp:1344
void GetNonMajorAxes(const Vector& vNormal, IntVector2D& axes)
{
} /* size: 0 */

// <0595B195> mathlib/extended/collisionutils.cpp:1370
// variables: 10
// function calls: 34
QuadBarycentricRetval_t QuadWithParallelEdges(const Vector& vecOrigin, const Vector& vecU, float lengthU, const Vector& vecV, float lengthV, const Vector& pt, Vector2D& vecUV)
{
	Ray_t rayAxis; // 1374
	Ray_t rayPt; // 1375
	float s; // 1388
	float t; // 1388
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
			float p3);  // 177
	VectorAligned::operator=(
			const Vector& src);  // 1385
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
			float p3);  // 177
	VectorAligned::operator=(
			const Vector& src);  // 1380
	VectorAligned::VectorAligned(); // 22
	VectorAligned::VectorAligned(); // 22
	VectorAligned::VectorAligned(); // 22
	VectorAligned::VectorAligned(); // 22
	Ray_t::Ray_t(); // 1374
	VectorAligned::VectorAligned(); // 22
	VectorAligned::VectorAligned(); // 22
	VectorAligned::VectorAligned(); // 22
	VectorAligned::VectorAligned(); // 22
	Ray_t::Ray_t(); // 1375
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
			float p3);  // 177
	VectorAligned::operator=(
			const Vector& src);  // 1381
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
			float p3);  // 177
	VectorAligned::operator=(
			const Vector& src);  // 1384
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1385
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
			float p3);  // 177
	VectorAligned::operator=(
			const Vector& src);  // 1397
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
			float p3);  // 177
	VectorAligned::operator=(
			const Vector& src);  // 1395
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1397
} /* size: 0, variables: 4, inline expansions: 28 (0 bytes) */

// <0595AEB2> mathlib/extended/collisionutils.cpp:1413
// variables: 10
// function calls: 5
void ResolveQuadratic(double tPlus, double tMinus, const Vector axisU0, const Vector axisU1, const Vector axisV0, const Vector axisV1, const Vector axisOrigin, const Vector pt, int projU, double& s, double& t)
{
	double sDenomPlus; // 1420
	double sDenomMinus; // 1421
	double sPlus; // 1423
	double sMinus; // 1423
	double s0; // 1448
	double t0; // 1448
	double s1; // 1448
	double t1; // 1448
	double max0; // 1465
	double max1; // 1465
	Vector::operator[](
			int i);  // 1420
	Vector::operator[](
			int i);  // 1420
	Vector::operator[](
			int i);  // 1426
	Vector::operator[](
			int i);  // 1426
	Vector::operator[](
			int i);  // 1426
} /* size: 0, variables: 10, inline expansions: 5 (0 bytes) */

// <05959F15> mathlib/extended/collisionutils.cpp:1488
// variables: 24
// function calls: 56
QuadBarycentricRetval_t PointInQuadToBarycentric(const Vector& v1, const Vector& v2, const Vector& v3, const Vector& v4, const Vector& point, Vector2D& uv)
{
	Vector axisU; // 1502
	Vector axisV; // 1502
	Vector axisUNorm; // 1503
	Vector axisVNorm; // 1503
	float lengthU; // 1509
	float lengthV; // 1509
	bool bFlipped; // 1532
	IntVector2D projAxes; // 1548
	Vector vNormal; // 1549
	double s; // 1584
	double t; // 1584
	double A; // 1585
	double negB; // 1585
	double C; // 1585
	{
		Vector tmp; // 1535
		Vector::operator=(
				const Vector& vOther);  // 1538
		Vector::operator=(
				const Vector& vOther);  // 1539
		Vector::operator=(
				const Vector& vOther);  // 1540
		Vector::operator=(
				const Vector& vOther);  // 1541
	}
	{
		int tmp; // 1558
	}
	{
		Vector vecUAvg; // 1608
		Vector vecVAvg; // 1608
		float fLengthUAvg; // 1612
		float fLengthVAvg; // 1613
		Vector::Vector(); // 1608
		Vector::Vector(); // 1608
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1609
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1609
		Vector::operator=(
				const Vector& vOther);  // 1609
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 1610
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1610
		Vector::operator=(
				const Vector& vOther);  // 1610
	}
	{
		double discriminant; // 1635
		double quad; // 1643
		double QPlus; // 1644
		double QMinus; // 1645
	}
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 1504
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 1505
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 1507
	Vector::operator=(
			const Vector& vOther);  // 1504
	Vector::operator=(
			const Vector& vOther);  // 1504
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 1506
	Vector::operator=(
			const Vector& vOther);  // 1505
	Vector::operator=(
			const Vector& vOther);  // 1505
	Vector::operator=(
			const Vector& vOther);  // 1507
	Vector::operator=(
			const Vector& vOther);  // 1506
	Vector::operator=(
			const Vector& vOther);  // 1506
	Vector::operator=(
			const Vector& vOther);  // 1507
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 1520
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 1533
	IntVector2D::IntVector2D(); // 1548
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 1549
	GetNonMajorAxes(const Vector& vNormal,
			IntVector2D& axes);  // 1550
	Vector::operator[](
			int i);  // 1556
	Vector::operator[](
			int i);  // 1590
	Vector::operator[](
			int i);  // 1593
	Vector::operator[](
			int i);  // 1594
	Vector::operator[](
			int i);  // 1587
	Vector::operator[](
			int i);  // 1591
	Vector::operator[](
			int i);  // 1592
} /* size: 0, variables: 14, inline expansions: 36 (0 bytes) */

// <05959D27> mathlib/extended/collisionutils.cpp:1674
// variable: 1
// function calls: 5
void PointInQuadFromBarycentric(const Vector& v1, const Vector& v2, const Vector& v3, const Vector& v4, const Vector2D& uv, Vector& point)
{
	Vector vPts; // 1681
	Vector2D::operator[](
			int i);  // 1682
	VectorLerp(const Vector& src1,
			const Vector& src2,
			vec_t t,
			Vector& dest);  // 1682
	Vector2D::operator[](
			int i);  // 1684
	VectorLerp(const Vector& src1,
			const Vector& src2,
			vec_t t,
			Vector& dest);  // 1683
	VectorLerp(const Vector& src1,
			const Vector& src2,
			vec_t t,
			Vector& dest);  // 1684
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <05959A49> mathlib/extended/collisionutils.cpp:1690
// variable: 1
// function calls: 9
void TexCoordInQuadFromBarycentric(const Vector2D& v1, const Vector2D& v2, const Vector2D& v3, const Vector2D& v4, const Vector2D& uv, Vector2D& texCoord)
{
	Vector2D vCoords; // 1697
	Vector2D::operator[](
			int i);  // 1698
	Vector2D::operator[](
			int i);  // 468
	Vector2D::operator[](
			int i);  // 468
	Vector2DLerp(const Vector2D& src1,
			const Vector2D& src2,
			vec_t t,
			Vector2D& dest);  // 1698
	Vector2D::operator[](
			int i);  // 1700
	Vector2D::operator[](
			int i);  // 468
	Vector2D::operator[](
			int i);  // 468
	Vector2DLerp(const Vector2D& src1,
			const Vector2D& src2,
			vec_t t,
			Vector2D& dest);  // 1699
	Vector2DLerp(const Vector2D& src1,
			const Vector2D& src2,
			vec_t t,
			Vector2D& dest);  // 1700
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <059595D9> mathlib/extended/collisionutils.cpp:1718
// variables: 2
// function calls: 6
void ComputePointFromBarycentric(const Vector2D& v0, const Vector2D& v1, const Vector2D& v2, float u, float v, Vector2D& pt)
{
	Vector2D edgeU; // 1721
	Vector2D edgeV; // 1721
	Vector2D::Vector2D(); // 1721
	Vector2D::Vector2D(); // 1721
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 1722
	Vector2DMA(const Vector2D& start,
			float s,
			const Vector2D& dir,
			Vector2D& result);  // 1725
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 1723
	Vector2DMA(const Vector2D& start,
			float s,
			const Vector2D& dir,
			Vector2D& result);  // 1724
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <0596CFBE> mathlib/extended/collisionutils.cpp:1733
// variables: 2
// function calls: 8
void ComputeCenterMatrix(const Vector& origin, const QAngle& angles, matrix3x4_t& matrix, const Vector& maxs, const Vector& mins)
{
	Vector centroid; // 1736
	Vector worldCentroid; // 1741
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1737
	Vector::Vector(); // 1736
	Vector::operator*=(
			float fl);  // 1738
	Vector::Vector(); // 1741
	VectorRotate(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1742
	Vector::operator+=(
			const Vector& v);  // 1743
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 1744
} /* size: 0, variables: 2, inline expansions: 8 (0 bytes) */

// <0595956E> mathlib/extended/collisionutils.cpp:1733
// variables: 2
void ComputeCenterMatrix(const Vector& origin, const QAngle& angles, const Vector& mins, const Vector& maxs, matrix3x4_t& matrix)
{
	Vector centroid; // 1736
	Vector worldCentroid; // 1741
} /* size: 0, variables: 2 */

// <05959503> mathlib/extended/collisionutils.cpp:1747
// variables: 2
void ComputeCenterIMatrix(const Vector& origin, const QAngle& angles, const Vector& mins, const Vector& maxs, matrix3x4_t& matrix)
{
	Vector centroid; // 1750
	Vector localOrigin; // 1758
} /* size: 0, variables: 2 */

// <059594DA> mathlib/extended/collisionutils.cpp:1768
inline void ComputeAbsMatrix(const matrix3x4_t& in, matrix3x4_t& out)
{
} /* size: 0 */

// <05957725> mathlib/extended/collisionutils.cpp:2075
// variables: 4
// function calls: 17
bool ComputeSeparatingPlane(const Vector& org1, const QAngle& angles1, const Vector& min1, const Vector& max1, const Vector& org2, const QAngle& angles2, const Vector& min2, const Vector& max2, float tolerance, cplane_t* pPlane)
{
	matrix3x4_t worldToBox1; // 2079
	matrix3x4_t box2ToWorld; // 2079
	Vector box1Size; // 2084
	Vector box2Size; // 2084
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1751
	Vector::operator*=(
			float fl);  // 1752
	Vector::Vector(); // 1750
	Vector::Vector(); // 1758
	VectorRotate(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1759
	Vector::operator-=(
			const Vector& v);  // 1760
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 1761
	ComputeCenterIMatrix(const Vector& origin,
				const QAngle& angles,
				const Vector& mins,
				const Vector& maxs,
				matrix3x4_t& matrix);  // 2080
	matrix3x4_t::matrix3x4_t(); // 2079
	matrix3x4_t::matrix3x4_t(); // 2079
	Vector::Vector(); // 2084
	Vector::Vector(); // 2084
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 2085
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 2086
	Vector::operator*=(
			float fl);  // 2088
	Vector::operator*=(
			float fl);  // 2087
} /* size: 0, variables: 4, inline expansions: 17 (0 bytes) */

// <059550A8> mathlib/extended/collisionutils.cpp:2097
// variables: 25
// function calls: 178
bool IsRayIntersectingOBB(const Ray_t& ray, const Vector& org, const QAngle& angles, const Vector& mins, const Vector& maxs)
{
	matrix3x4_t worldToBox1; // 2135
	matrix3x4_t box2ToWorld; // 2135
	Vector vecRayCenter; // 2139
	Vector box1Size; // 2145
	Vector box2Size; // 2148
	cplane_t plane; // 2153
	Vector vecRayDirection; // 2158
	Vector vecCenterDelta; // 2162
	Vector vecAbsRayDirBox2; // 2168
	Vector vecPlaneNormal; // 2195
	float flCenterDeltaProjection; // 2199
	float flBoxProjectionSum; // 2200
	{
		Vector vecWorldMins; // 2102
		Vector vecWorldMaxs; // 2102
		Vector::Vector(); // 2102
		Vector::Vector(); // 2102
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 2103
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 2104
	}
	{
		matrix3x4_t worldToBox; // 2110
		Ray_t rotatedRay; // 2113
		matrix3x4_t::matrix3x4_t(); // 2110
		VectorAligned::VectorAligned(); // 22
		VectorAligned::VectorAligned(); // 22
		VectorAligned::VectorAligned(); // 22
		VectorAligned::VectorAligned(); // 22
		Ray_t::Ray_t(); // 2113
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2114
		VectorTransform(const Vector& in1,
				const matrix3x4_t& in2,
				Vector& out);  // 1307
		Vector::Vector(); // 1306
		VectorTransform(const Vector& in1,
				const matrix3x4_t& in2);  // 2114
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
				float p3);  // 177
		VectorAligned::operator=(
				const Vector& src);  // 2114
		VectorRotate(const Vector& in1,
				const matrix3x4_t& in2,
				Vector& out);  // 1315
		Vector::Vector(); // 1314
		VectorRotate(const Vector& in1,
				const matrix3x4_t& in2);  // 2115
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2115
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
				float p3);  // 177
		VectorAligned::operator=(
				const Vector& src);  // 2115
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
				float p3);  // 177
		VectorAligned::operator=(
				const Vector& src);  // 2116
		VectorAligned::operator=(
				const Vector& src);  // 2117
	}
	{
		cplane_t plane; // 2126
		Vector::Vector(); // 42
		cplane_t::cplane_t(); // 2126
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2127
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 1797
		NegSIMD<>(const fltx4& a); // 164
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 164
		VectorAligned::operator-(); // 2127
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2127
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2127
	}
	QAngle::operator==(
			const QAngle& src);  // 2100
	matrix3x4_t::matrix3x4_t(); // 2135
	matrix3x4_t::matrix3x4_t(); // 2135
	Vector::Vector(); // 2139
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2140
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2140
	VectorMA(const Vector& start,
		float scale,
		const Vector& direction,
		Vector& dest);  // 2140
	Vector::operator*=(
			float fl);  // 2141
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 2143
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2267
	{
		fltx4 retVal; // 602
		_mm_load_ps(const float* __P); // 603
	}
	LoadAlignedSIMD<>(const void* pSIMD); // 2267
	fabs<>(const fltx4& x); // 2272
	AbsSIMD<>(const fltx4& val); // 392
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 392
	VectorAligned::Abs(); // 2145
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
			vec_t s);  // 2145
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 2145
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2145
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 2149
	Vector::operator*=(
			float fl);  // 2150
	Vector::Vector(); // 2148
	Vector::Vector(); // 42
	cplane_t::cplane_t(); // 2153
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2158
	Vector::Vector(); // 2162
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 2163
	VectorIRotate(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 2169
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 2164
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 2165
	Vector::Vector(); // 2168
	FloatMakePositive(vec_t f); // 1387
	FloatMakePositive(vec_t f); // 1388
	FloatMakePositive(vec_t f); // 1389
	VectorAbs(const Vector& src,
			Vector& dst);  // 2172
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 2198
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2202
	Vector::Vector(); // 2195
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2198
	DotProduct(const Vector& a,
			const Vector& b);  // 2199
	FloatMakePositive(vec_t f); // 1234
	FloatMakePositive(vec_t f); // 1234
	FloatMakePositive(vec_t f); // 1234
	DotProductAbs(const Vector& v0,
			const Vector& v1);  // 2202
	FloatBits(const vec_t& f); // 2203
	FloatBits(const vec_t& f); // 2203
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 2207
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2207
	FloatMakePositive(vec_t f); // 1234
	FloatMakePositive(vec_t f); // 1234
	FloatMakePositive(vec_t f); // 1234
	DotProductAbs(const Vector& v0,
			const Vector& v1);  // 2211
	DotProduct(const Vector& a,
			const Vector& b);  // 2208
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2211
	FloatBits(const vec_t& f); // 2212
	FloatBits(const vec_t& f); // 2212
	DotProduct(const Vector& a,
			const Vector& b);  // 2217
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2216
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 2216
	FloatMakePositive(vec_t f); // 1234
	FloatMakePositive(vec_t f); // 1234
	FloatMakePositive(vec_t f); // 1234
	DotProductAbs(const Vector& v0,
			const Vector& v1);  // 2220
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2220
	FloatBits(const vec_t& f); // 2221
	FloatBits(const vec_t& f); // 2221
} /* size: 0, variables: 12, inline expansions: 116 (0 bytes) */

// <05954232> mathlib/extended/collisionutils.cpp:2230
// variables: 20
// function calls: 57
Vector CalcClosestPointOnTriangle(const Vector& P, const Vector& v0, const Vector& v1, const Vector& v2)
{
	Vector e0; // 2232
	Vector e1; // 2233
	Vector p0; // 2234
	float d1; // 2237
	float d2; // 2238
	Vector p1; // 2243
	float d3; // 2244
	float d4; // 2245
	float ve2; // 2250
	Vector p2; // 2257
	float d5; // 2258
	float d6; // 2259
	float ve1; // 2263
	float ve0; // 2270
	float denom; // 2277
	float v; // 2278
	float w; // 2279
	{
		float v; // 2253
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2254
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2254
	}
	{
		float w; // 2266
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2267
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2267
	}
	{
		float w; // 2273
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 2274
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 2274
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2274
	}
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2232
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2233
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2234
	DotProduct(const Vector& a,
			const Vector& b);  // 2237
	DotProduct(const Vector& a,
			const Vector& b);  // 2238
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2243
	DotProduct(const Vector& a,
			const Vector& b);  // 2244
	DotProduct(const Vector& a,
			const Vector& b);  // 2245
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2257
	DotProduct(const Vector& a,
			const Vector& b);  // 2258
	DotProduct(const Vector& a,
			const Vector& b);  // 2259
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2280
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 2280
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2280
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2280
} /* size: 0, variables: 17, inline expansions: 33 (0 bytes) */

// <05953209> mathlib/extended/collisionutils.cpp:2288
// variables: 18
// function calls: 61
Vector TriangleCentroid(const Vector& v0, const Vector& v1, const Vector& v2)
{
	Vector vEdge0; // 2291
	Vector vEdge1; // 2292
	Vector vBasis0; // 2293
	Vector vNormal; // 2294
	Vector vBasis1; // 2295
	matrix3x4_t xform; // 2298
	Vector vOpp0; // 2302
	Vector vOpp1; // 2303
	Vector vProj0; // 2304
	Vector vProjOpp0; // 2305
	Vector vProj1; // 2306
	Vector vProjOpp1; // 2307
	Ray2D_t ray0; // 2310
	Ray2D_t ray1; // 2311
	float s; // 2312
	float t; // 2312
	Vector2D vCenter; // 2314
	Vector vLocalCenter; // 2316
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2291
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2292
	Vector::Normalized(); // 2293
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 2294
	Vector::Normalized(); // 2294
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 2295
	VectorITransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1328
	Vector::Vector(); // 1327
	VectorITransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2747
	matrix3x4_t::TransformVectorByInverse(
				const Vector& v0);  // 2304
	matrix3x4_t::InitXYZ(
		const Vector& xAxis,
		const Vector& yAxis,
		const Vector& zAxis,
		const Vector& vecOrigin);  // 2299
	matrix3x4_t::matrix3x4_t(); // 2298
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2302
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2303
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2302
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2303
	VectorITransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1328
	Vector::Vector(); // 1327
	VectorITransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2747
	matrix3x4_t::TransformVectorByInverse(
				const Vector& v0);  // 2305
	Vector::Vector(); // 1327
	VectorITransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1328
	VectorITransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2747
	matrix3x4_t::TransformVectorByInverse(
				const Vector& v0);  // 2306
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 15
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 16
	Ray2D_t::Ray2D_t(
		const Vector& start,
		const Vector& end);  // 2310
	VectorITransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1328
	Vector::Vector(); // 1327
	VectorITransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2747
	matrix3x4_t::TransformVectorByInverse(
				const Vector& v0);  // 2307
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 15
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 16
	Ray2D_t::Ray2D_t(
		const Vector& start,
		const Vector& end);  // 2311
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 2318
	Vector2DMultiply(const Vector2D& a,
			vec_t b,
			Vector2D& c);  // 702
	Vector2D::Vector2D(); // 701
	Vector2D::operator*(
			float fl);  // 2314
	Vector2D::Vector2D(); // 687
	Vector2DAdd(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 688
	Vector2D::operator+(
			const Vector2D& v);  // 2314
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2316
} /* size: 0, variables: 18, inline expansions: 61 (0 bytes) */

// <05951EB0> mathlib/extended/collisionutils.cpp:2322
// variables: 19
// function calls: 76
bool OBBHasFullyContainedIntersectionWithQuad(const Vector& vOBBExtent1_Scaled, const Vector& vOBBExtent2_Scaled, const Vector& vOBBExtent3_Scaled, const Vector& ptOBBCenter, const Vector& vQuadNormal, float fQuadPlaneDist, const Vector& ptQuadCenter, const Vector& vQuadExtent1_Normalized, float fQuadExtent1Length, const Vector& vQuadExtent2_Normalized, float fQuadExtent2Length)
{
	Vector ptOBB; // 2327
	float fDists; // 2337
	int iSides; // 2341
	int iSideMask; // 2342
	Vector ptPlaneIntersections; // 2360
	int iPlaneIntersectionsCount; // 2361
	const char   __FUNCTION__; // 33566
	{
		int i; // 2338
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 2339
	}
	{
		int i; // 2343
	}
	{
		int i; // 2363
		{
			int iAxisCrossings; // 2367
			{
				int j; // 2372
				{
					float fTotalDist; // 2377
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2380
					}
					DotProduct(const Vector& a,
							const Vector& b);  // 1167
					Vector::Dot(
						const Vector& vOther);  // 2380
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 2378
					Vector::Vector(); // 1450
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::operator*(
							float fl);  // 2378
					Vector::operator=(
							const Vector& vOther);  // 2378
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::Vector(); // 1436
					Vector::operator+(
							const Vector& v);  // 2378
				}
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2388
	}
	{
		int i; // 2390
		{
			Vector vToPointFromQuadCenter; // 2393
			float fExt1Dist; // 2395
			float fExt2Dist; // 2401
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 2393
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2395
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2401
		}
	}
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2328
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2328
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2332
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2328
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2334
	Vector::operator=(
			const Vector& vOther);  // 2328
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2329
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2329
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2329
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2330
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2330
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2330
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2331
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2331
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2331
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2332
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2332
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2333
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2333
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2333
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2334
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2334
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2335
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2335
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2335
} /* size: 0, variables: 7, inline expansions: 55 (0 bytes) */

// <02B3BC22> mathlib/extended/collisionutils.cpp:2322
// variables: 19
// function calls: 76
bool OBBHasFullyContainedIntersectionWithQuad(const Vector& vOBBExtent1_Scaled, const Vector& vOBBExtent2_Scaled, const Vector& vOBBExtent3_Scaled, const Vector& ptOBBCenter, const Vector& vQuadNormal, float fQuadPlaneDist, const Vector& ptQuadCenter, const Vector& vQuadExtent1_Normalized, float fQuadExtent1Length, const Vector& vQuadExtent2_Normalized, float fQuadExtent2Length)
{
	Vector ptOBB; // 2327
	float fDists; // 2337
	int iSides; // 2341
	int iSideMask; // 2342
	Vector ptPlaneIntersections; // 2360
	int iPlaneIntersectionsCount; // 2361
	const char   __FUNCTION__; // 61317
	{
		int i; // 2338
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 2339
	}
	{
		int i; // 2343
	}
	{
		int i; // 2363
		{
			int iAxisCrossings; // 2367
			{
				int j; // 2372
				{
					float fTotalDist; // 2377
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2380
					}
					DotProduct(const Vector& a,
							const Vector& b);  // 1167
					Vector::Dot(
						const Vector& vOther);  // 2380
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 2378
					Vector::Vector(); // 1450
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::operator*(
							float fl);  // 2378
					Vector::operator=(
							const Vector& vOther);  // 2378
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::Vector(); // 1436
					Vector::operator+(
							const Vector& v);  // 2378
				}
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2388
	}
	{
		int i; // 2390
		{
			Vector vToPointFromQuadCenter; // 2393
			float fExt1Dist; // 2395
			float fExt2Dist; // 2401
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 2393
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2395
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2401
		}
	}
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2328
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2328
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2332
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2328
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2334
	Vector::operator=(
			const Vector& vOther);  // 2328
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2329
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2329
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2329
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2330
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2330
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2330
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2331
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2331
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2331
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2332
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2332
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2333
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2333
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2333
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2334
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2334
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2335
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2335
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2335
} /* size: 0, variables: 7, inline expansions: 55 (0 bytes) */

// <01AEDCF1> mathlib/extended/collisionutils.cpp:2322
// variables: 19
// function calls: 76
bool OBBHasFullyContainedIntersectionWithQuad(const Vector& vOBBExtent1_Scaled, const Vector& vOBBExtent2_Scaled, const Vector& vOBBExtent3_Scaled, const Vector& ptOBBCenter, const Vector& vQuadNormal, float fQuadPlaneDist, const Vector& ptQuadCenter, const Vector& vQuadExtent1_Normalized, float fQuadExtent1Length, const Vector& vQuadExtent2_Normalized, float fQuadExtent2Length)
{
	Vector ptOBB; // 2327
	float fDists; // 2337
	int iSides; // 2341
	int iSideMask; // 2342
	Vector ptPlaneIntersections; // 2360
	int iPlaneIntersectionsCount; // 2361
	const char   __FUNCTION__; // 19908
	{
		int i; // 2338
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 2339
	}
	{
		int i; // 2343
	}
	{
		int i; // 2363
		{
			int iAxisCrossings; // 2367
			{
				int j; // 2372
				{
					float fTotalDist; // 2377
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2380
					}
					DotProduct(const Vector& a,
							const Vector& b);  // 1167
					Vector::Dot(
						const Vector& vOther);  // 2380
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 2378
					Vector::Vector(); // 1450
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::operator*(
							float fl);  // 2378
					Vector::operator=(
							const Vector& vOther);  // 2378
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::Vector(); // 1436
					Vector::operator+(
							const Vector& v);  // 2378
				}
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2388
	}
	{
		int i; // 2390
		{
			Vector vToPointFromQuadCenter; // 2393
			float fExt1Dist; // 2395
			float fExt2Dist; // 2401
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 2393
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2395
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2401
		}
	}
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2328
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2328
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2332
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2328
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2334
	Vector::operator=(
			const Vector& vOther);  // 2328
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2329
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2329
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2329
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2330
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2330
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2330
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2331
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2331
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2331
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2332
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2332
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2333
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2333
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2333
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2334
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2334
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2335
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2335
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2335
} /* size: 0, variables: 7, inline expansions: 55 (0 bytes) */

// <05950571> mathlib/extended/collisionutils.cpp:2416
// variables: 33
// function calls: 99
bool RayHasFullyContainedIntersectionWithQuad(const Ray_t& ray, const Vector& vQuadNormal, float fQuadPlaneDist, const Vector& ptQuadCenter, const Vector& vQuadExtent1_Normalized, float fQuadExtent1Length, const Vector& vQuadExtent2_Normalized, float fQuadExtent2Length)
{
	Vector ptPlaneIntersections; // 2421
	int iPlaneIntersectionsCount; // 2424
	const char   __FUNCTION__; // 33566
	{
		Vector ptEndPoints; // 2431
		int i; // 2435
		float fDists; // 2436
		{
			int j; // 2444
			{
				float fInvTotalDist; // 2447
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2449
				}
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 2448
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 2448
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 2448
				Vector::operator=(
						const Vector& vOther);  // 2448
				DotProduct(const Vector& a,
						const Vector& b);  // 1167
				Vector::Dot(
					const Vector& vOther);  // 2449
			}
		}
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2432
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 2438
		Vector::operator=(
				const Vector& vOther);  // 2432
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 40
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2433
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 2433
		Vector::operator=(
				const Vector& vOther);  // 2433
	}
	{
		Vector ptEndPoints; // 2478
		float fDists; // 2489
		int iSides; // 2490
		int iSideMask; // 2491
		{
			int i; // 2492
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2494
		}
		{
			int i; // 2509
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 2510
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 2510
			Vector::operator=(
					const Vector& vOther);  // 2510
		}
		{
			int i; // 2512
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2514
		}
		{
			int k; // 2536
			{
				int i; // 2540
				{
					int iAxisCrossings; // 2544
					{
						int j; // 2549
						{
							float fInvTotalDist; // 2554
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2557
							}
							DotProduct(const Vector& a,
									const Vector& b);  // 1167
							Vector::Dot(
								const Vector& vOther);  // 2557
							VectorMultiply(const Vector& a,
									vec_t b,
									Vector& c);  // 1451
							Vector::Vector(); // 1450
							Vector::operator*(
									float fl);  // 2555
							Vector::Vector(); // 1450
							VectorMultiply(const Vector& a,
									vec_t b,
									Vector& c);  // 1451
							Vector::operator*(
									float fl);  // 2555
							Vector::operator=(
									const Vector& vOther);  // 2555
							VectorAdd(const Vector& a,
									const Vector& b,
									Vector& c);  // 1437
							Vector::Vector(); // 1436
							Vector::operator+(
									const Vector& v);  // 2555
						}
					}
				}
			}
		}
		{
			int i; // 2569
			{
				int iPosSide; // 2573
				int iNegSide; // 2573
				float fInvTotalDist; // 2587
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2585
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2590
				}
				DotProduct(const Vector& a,
						const Vector& b);  // 1167
				Vector::Dot(
					const Vector& vOther);  // 2590
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 2588
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 2588
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 2588
				Vector::operator=(
						const Vector& vOther);  // 2588
			}
		}
		VectorAligned::x(); // 2480
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2480
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2481
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2482
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2483
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2484
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2485
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2486
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2487
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2599
	}
	{
		int i; // 2601
		{
			Vector vToPointFromQuadCenter; // 2604
			float fExt1Dist; // 2606
			float fExt2Dist; // 2612
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2606
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 2604
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2612
		}
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 2465
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2465
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2467
	Vector::operator=(
			const Vector& vOther);  // 2467
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <02B3A2E3> mathlib/extended/collisionutils.cpp:2416
// variables: 33
// function calls: 99
bool RayHasFullyContainedIntersectionWithQuad(const Ray_t& ray, const Vector& vQuadNormal, float fQuadPlaneDist, const Vector& ptQuadCenter, const Vector& vQuadExtent1_Normalized, float fQuadExtent1Length, const Vector& vQuadExtent2_Normalized, float fQuadExtent2Length)
{
	Vector ptPlaneIntersections; // 2421
	int iPlaneIntersectionsCount; // 2424
	const char   __FUNCTION__; // 61317
	{
		Vector ptEndPoints; // 2431
		int i; // 2435
		float fDists; // 2436
		{
			int j; // 2444
			{
				float fInvTotalDist; // 2447
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2449
				}
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 2448
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 2448
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 2448
				Vector::operator=(
						const Vector& vOther);  // 2448
				DotProduct(const Vector& a,
						const Vector& b);  // 1167
				Vector::Dot(
					const Vector& vOther);  // 2449
			}
		}
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2432
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 2438
		Vector::operator=(
				const Vector& vOther);  // 2432
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 40
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2433
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 2433
		Vector::operator=(
				const Vector& vOther);  // 2433
	}
	{
		Vector ptEndPoints; // 2478
		float fDists; // 2489
		int iSides; // 2490
		int iSideMask; // 2491
		{
			int i; // 2492
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2494
		}
		{
			int i; // 2509
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 2510
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 2510
			Vector::operator=(
					const Vector& vOther);  // 2510
		}
		{
			int i; // 2512
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2514
		}
		{
			int k; // 2536
			{
				int i; // 2540
				{
					int iAxisCrossings; // 2544
					{
						int j; // 2549
						{
							float fInvTotalDist; // 2554
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2557
							}
							DotProduct(const Vector& a,
									const Vector& b);  // 1167
							Vector::Dot(
								const Vector& vOther);  // 2557
							VectorMultiply(const Vector& a,
									vec_t b,
									Vector& c);  // 1451
							Vector::Vector(); // 1450
							Vector::operator*(
									float fl);  // 2555
							Vector::Vector(); // 1450
							VectorMultiply(const Vector& a,
									vec_t b,
									Vector& c);  // 1451
							Vector::operator*(
									float fl);  // 2555
							Vector::operator=(
									const Vector& vOther);  // 2555
							VectorAdd(const Vector& a,
									const Vector& b,
									Vector& c);  // 1437
							Vector::Vector(); // 1436
							Vector::operator+(
									const Vector& v);  // 2555
						}
					}
				}
			}
		}
		{
			int i; // 2569
			{
				int iPosSide; // 2573
				int iNegSide; // 2573
				float fInvTotalDist; // 2587
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2585
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2590
				}
				DotProduct(const Vector& a,
						const Vector& b);  // 1167
				Vector::Dot(
					const Vector& vOther);  // 2590
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 2588
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 2588
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 2588
				Vector::operator=(
						const Vector& vOther);  // 2588
			}
		}
		VectorAligned::x(); // 2480
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2480
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2481
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2482
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2483
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2484
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2485
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2486
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2487
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2599
	}
	{
		int i; // 2601
		{
			Vector vToPointFromQuadCenter; // 2604
			float fExt1Dist; // 2606
			float fExt2Dist; // 2612
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2606
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 2604
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2612
		}
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 2465
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2465
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2467
	Vector::operator=(
			const Vector& vOther);  // 2467
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <01AEC3B2> mathlib/extended/collisionutils.cpp:2416
// variables: 33
// function calls: 99
bool RayHasFullyContainedIntersectionWithQuad(const Ray_t& ray, const Vector& vQuadNormal, float fQuadPlaneDist, const Vector& ptQuadCenter, const Vector& vQuadExtent1_Normalized, float fQuadExtent1Length, const Vector& vQuadExtent2_Normalized, float fQuadExtent2Length)
{
	Vector ptPlaneIntersections; // 2421
	int iPlaneIntersectionsCount; // 2424
	const char   __FUNCTION__; // 19908
	{
		Vector ptEndPoints; // 2431
		int i; // 2435
		float fDists; // 2436
		{
			int j; // 2444
			{
				float fInvTotalDist; // 2447
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2449
				}
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 2448
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 2448
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 2448
				Vector::operator=(
						const Vector& vOther);  // 2448
				DotProduct(const Vector& a,
						const Vector& b);  // 1167
				Vector::Dot(
					const Vector& vOther);  // 2449
			}
		}
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2432
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 2438
		Vector::operator=(
				const Vector& vOther);  // 2432
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 40
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2433
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 2433
		Vector::operator=(
				const Vector& vOther);  // 2433
	}
	{
		Vector ptEndPoints; // 2478
		float fDists; // 2489
		int iSides; // 2490
		int iSideMask; // 2491
		{
			int i; // 2492
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2494
		}
		{
			int i; // 2509
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 2510
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 2510
			Vector::operator=(
					const Vector& vOther);  // 2510
		}
		{
			int i; // 2512
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2514
		}
		{
			int k; // 2536
			{
				int i; // 2540
				{
					int iAxisCrossings; // 2544
					{
						int j; // 2549
						{
							float fInvTotalDist; // 2554
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2557
							}
							DotProduct(const Vector& a,
									const Vector& b);  // 1167
							Vector::Dot(
								const Vector& vOther);  // 2557
							VectorMultiply(const Vector& a,
									vec_t b,
									Vector& c);  // 1451
							Vector::Vector(); // 1450
							Vector::operator*(
									float fl);  // 2555
							Vector::Vector(); // 1450
							VectorMultiply(const Vector& a,
									vec_t b,
									Vector& c);  // 1451
							Vector::operator*(
									float fl);  // 2555
							Vector::operator=(
									const Vector& vOther);  // 2555
							VectorAdd(const Vector& a,
									const Vector& b,
									Vector& c);  // 1437
							Vector::Vector(); // 1436
							Vector::operator+(
									const Vector& v);  // 2555
						}
					}
				}
			}
		}
		{
			int i; // 2569
			{
				int iPosSide; // 2573
				int iNegSide; // 2573
				float fInvTotalDist; // 2587
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2585
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2590
				}
				DotProduct(const Vector& a,
						const Vector& b);  // 1167
				Vector::Dot(
					const Vector& vOther);  // 2590
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 2588
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 2588
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 2588
				Vector::operator=(
						const Vector& vOther);  // 2588
			}
		}
		VectorAligned::x(); // 2480
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2480
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2481
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2482
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2483
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2484
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2485
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2486
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 2487
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2599
	}
	{
		int i; // 2601
		{
			Vector vToPointFromQuadCenter; // 2604
			float fExt1Dist; // 2606
			float fExt2Dist; // 2612
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2606
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 2604
			DotProduct(const Vector& a,
					const Vector& b);  // 1167
			Vector::Dot(
				const Vector& vOther);  // 2612
		}
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 2465
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2465
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2467
	Vector::operator=(
			const Vector& vOther);  // 2467
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <0595014F> mathlib/extended/collisionutils.cpp:2624
// variables: 11
// function calls: 13
bool LineCircleIntersection(const Vector2D& center, const float radius, const Vector2D& vLinePt, const Vector2D& vLineDir, float* fIntersection1, float* fIntersection2)
{
	const Vector2D  P; // 2641
	const float  a; // 2643
	const float  b; // 2644
	const float  c; // 2645
	const float  insideSqr; // 2647
	const char   __FUNCTION__; // 33155
	{
		const float  sqr; // 2656
		const float  denom; // 2657
		const float  t0; // 2658
		const float  t1; // 2659
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2669
		}
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 2656
	}
	Vector2D::Vector2D(); // 694
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 695
	Vector2D::operator-(
			const Vector2D& v);  // 2641
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 2643
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 2644
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 2645
} /* size: 0, variables: 6, inline expansions: 9 (0 bytes) */

// <02B39EC1> mathlib/extended/collisionutils.cpp:2624
// variables: 11
// function calls: 13
bool LineCircleIntersection(const Vector2D& center, const float radius, const Vector2D& vLinePt, const Vector2D& vLineDir, float* fIntersection1, float* fIntersection2)
{
	const Vector2D  P; // 2641
	const float  a; // 2643
	const float  b; // 2644
	const float  c; // 2645
	const float  insideSqr; // 2647
	const char   __FUNCTION__; // 60906
	{
		const float  sqr; // 2656
		const float  denom; // 2657
		const float  t0; // 2658
		const float  t1; // 2659
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2669
		}
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 2656
	}
	Vector2D::Vector2D(); // 694
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 695
	Vector2D::operator-(
			const Vector2D& v);  // 2641
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 2643
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 2644
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 2645
} /* size: 0, variables: 6, inline expansions: 9 (0 bytes) */

// <01AEBF90> mathlib/extended/collisionutils.cpp:2624
// variables: 11
// function calls: 13
bool LineCircleIntersection(const Vector2D& center, const float radius, const Vector2D& vLinePt, const Vector2D& vLineDir, float* fIntersection1, float* fIntersection2)
{
	const Vector2D  P; // 2641
	const float  a; // 2643
	const float  b; // 2644
	const float  c; // 2645
	const float  insideSqr; // 2647
	const char   __FUNCTION__; // 19497
	{
		const float  sqr; // 2656
		const float  denom; // 2657
		const float  t0; // 2658
		const float  t1; // 2659
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2669
		}
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 2656
	}
	Vector2D::Vector2D(); // 694
	Vector2DSubtract(const Vector2D& a,
			const Vector2D& b,
			Vector2D& c);  // 695
	Vector2D::operator-(
			const Vector2D& v);  // 2641
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 2643
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 2644
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 484
	Vector2D::Dot(
		const Vector2D& vOther);  // 2645
} /* size: 0, variables: 6, inline expansions: 9 (0 bytes) */

// <0594F0C8> mathlib/extended/collisionutils.cpp:2686
// variables: 14
// function calls: 73
bool IntersectRayWithAACylinder(const Ray_t& ray, const Vector& center, float radius, float height, CollisionTrace_t* pTrace)
{
	const char   __FUNCTION__; // 33248
	float halfHeight; // 2693
	Vector vStart; // 2696
	Vector vEnd; // 2697
	float flEnterFrac; // 2699
	float flLeaveFrac; // 2699
	float flCircleEnterFrac; // 2728
	float flCircleLeaveFrac; // 2728
	Vector collisionCenter; // 2753
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2689
	}
	{
		float temp; // 2716
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2735
	}
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2690
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2690
	Vector::operator+=(
			const Vector& v);  // 32
	Vector::operator=(
			const Vector& vOther);  // 30
	Collision_ClearTrace(const Vector& vecRayStart,
				const Vector& vecRayDelta,
				CollisionTrace_t* pTrace);  // 2690
	IntersectRayWithAAPlane(const Vector& vecStart,
				const Vector& vecEnd,
				int nAxis,
				float flSign,
				float flDist);  // 2711
	IntersectRayWithAAPlane(const Vector& vecStart,
				const Vector& vecEnd,
				int nAxis,
				float flSign,
				float flDist);  // 2712
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
			const Vector& rhs);  // 2696
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 2696
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2696
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2697
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2697
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2730
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2749
	VectorMA(const Vector& start,
		float scale,
		const Vector& direction,
		Vector& dest);  // 2749
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2749
	Vector::Vector(); // 2753
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2754
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2754
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2754
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2754
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2757
	Vector::operator=(
			const Vector& vOther);  // 2757
} /* size: 0, variables: 9, inline expansions: 71 (0 bytes) */

// <02B38E3A> mathlib/extended/collisionutils.cpp:2686
// variables: 14
// function calls: 73
bool IntersectRayWithAACylinder(const Ray_t& ray, const Vector& center, float radius, float height, CollisionTrace_t* pTrace)
{
	const char   __FUNCTION__; // 60999
	float halfHeight; // 2693
	Vector vStart; // 2696
	Vector vEnd; // 2697
	float flEnterFrac; // 2699
	float flLeaveFrac; // 2699
	float flCircleEnterFrac; // 2728
	float flCircleLeaveFrac; // 2728
	Vector collisionCenter; // 2753
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2689
	}
	{
		float temp; // 2716
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2735
	}
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2690
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2690
	Vector::operator+=(
			const Vector& v);  // 32
	Vector::operator=(
			const Vector& vOther);  // 30
	Collision_ClearTrace(const Vector& vecRayStart,
				const Vector& vecRayDelta,
				CollisionTrace_t* pTrace);  // 2690
	IntersectRayWithAAPlane(const Vector& vecStart,
				const Vector& vecEnd,
				int nAxis,
				float flSign,
				float flDist);  // 2711
	IntersectRayWithAAPlane(const Vector& vecStart,
				const Vector& vecEnd,
				int nAxis,
				float flSign,
				float flDist);  // 2712
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
			const Vector& rhs);  // 2696
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 2696
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2696
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2697
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2697
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2730
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2749
	VectorMA(const Vector& start,
		float scale,
		const Vector& direction,
		Vector& dest);  // 2749
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2749
	Vector::Vector(); // 2753
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2754
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2754
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2754
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2754
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2757
	Vector::operator=(
			const Vector& vOther);  // 2757
} /* size: 0, variables: 9, inline expansions: 71 (0 bytes) */

// <01AEAF09> mathlib/extended/collisionutils.cpp:2686
// variables: 14
// function calls: 73
bool IntersectRayWithAACylinder(const Ray_t& ray, const Vector& center, float radius, float height, CollisionTrace_t* pTrace)
{
	const char   __FUNCTION__; // 19590
	float halfHeight; // 2693
	Vector vStart; // 2696
	Vector vEnd; // 2697
	float flEnterFrac; // 2699
	float flLeaveFrac; // 2699
	float flCircleEnterFrac; // 2728
	float flCircleLeaveFrac; // 2728
	Vector collisionCenter; // 2753
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2689
	}
	{
		float temp; // 2716
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2735
	}
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2690
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2690
	Vector::operator+=(
			const Vector& v);  // 32
	Vector::operator=(
			const Vector& vOther);  // 30
	Collision_ClearTrace(const Vector& vecRayStart,
				const Vector& vecRayDelta,
				CollisionTrace_t* pTrace);  // 2690
	IntersectRayWithAAPlane(const Vector& vecStart,
				const Vector& vecEnd,
				int nAxis,
				float flSign,
				float flDist);  // 2711
	IntersectRayWithAAPlane(const Vector& vecStart,
				const Vector& vecEnd,
				int nAxis,
				float flSign,
				float flDist);  // 2712
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
			const Vector& rhs);  // 2696
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 2696
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2696
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2697
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2697
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 2730
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2749
	VectorMA(const Vector& start,
		float scale,
		const Vector& direction,
		Vector& dest);  // 2749
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 2749
	Vector::Vector(); // 2753
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2754
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2754
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2754
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2754
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2757
	Vector::operator=(
			const Vector& vOther);  // 2757
} /* size: 0, variables: 9, inline expansions: 71 (0 bytes) */

// <02B386E3> mathlib/extended/collisionutils.cpp:2778
// variables: 2
// function calls: 12
Vector CalcClosestPointOnOBB(const matrix3x4_t& m, const Vector& vMins, const Vector& vMaxs, const Vector& vPoint)
{
	Vector vLocalPoint; // 2781
	Vector vClosest; // 2784
	VectorITransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1328
	Vector::Vector(); // 1327
	VectorITransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2747
	matrix3x4_t::TransformVectorByInverse(
				const Vector& v0);  // 2781
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 2785
	Vector::Vector(); // 2784
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 2786
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 2787
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 2707
	matrix3x4_t::TransformVector(
			const Vector& v0);  // 2790
} /* size: 0, variables: 2, inline expansions: 12 (0 bytes) */

// <0594CE6C> mathlib/extended/collisionutils.cpp:2794
// variables: 65
// function calls: 112
bool IsBoxTouchingRay(const AABB_t& box, const Vector& vStart, const Vector& vDelta)
{
	fltx4 fl4BoxMin; // 2796
	fltx4 fl4BoxMax; // 2797
	fltx4 fl4Start; // 2798
	fltx4 fl4Delta; // 2799
	fltx4 fl4InvDelta; // 2800
	fltx4 startOutMins; // 2809
	fltx4 startOutMaxs; // 2810
	fltx4 mint; // 2819
	fltx4 maxt; // 2820
	fltx4 firstOut; // 2823
	fltx4 lastIn; // 2824
	fltx4 separation; // 2830
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1012
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 2796
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1012
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 2798
	{
		fltx4 retVal; // 927
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 928
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 930
	}
	SetWToZeroSIMD<>(const fltx4& a); // 2796
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1012
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 2797
	{
		fltx4 retVal; // 927
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 928
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 930
	}
	SetWToZeroSIMD<>(const fltx4& a); // 2797
	{
		fltx4 retVal; // 927
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 928
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 930
	}
	SetWToZeroSIMD<>(const fltx4& a); // 2798
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1012
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1010
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 2799
	{
		fltx4 retVal; // 927
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 928
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 930
	}
	SetWToZeroSIMD<>(const fltx4& a); // 2799
	{
		fltx4 retVal; // 2418
		_mm_rcp_ps(__m128 __A); // 2419
	}
	ReciprocalEstSIMD<>(const fltx4& a); // 2462
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 2464
	ReciprocalSIMD<>(const fltx4& a); // 2800
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 2804
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 2805
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 2809
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 2809
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2809
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 2810
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 2810
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 2810
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 2811
	{
		fltx4 retVal; // 927
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 928
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 930
	}
	SetWToZeroSIMD<>(const fltx4& a); // 2811
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 1842
	IsAnyNegative<>(const fltx4& a); // 2811
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 2826
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2815
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 2816
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 2819
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 2820
	{
		fltx4 retVal; // 341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 342
	}
	RotateLeft<>(const fltx4& a); // 2516
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 2518
	{
		fltx4 retVal; // 373
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 374
	}
	RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 2520
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 2522
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 2525
	FindLowestSIMD3<>(const fltx4& a); // 2823
	{
		fltx4 retVal; // 341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 342
	}
	RotateLeft<>(const fltx4& a); // 2532
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 2534
	{
		fltx4 retVal; // 373
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 374
	}
	RotateLeft2<(ESIMDLevel)20>(const fltx4& a); // 2536
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 2538
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 2541
	FindHighestSIMD3<>(const fltx4& a); // 2824
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 2827
	{
		fltx4 retVal; // 1981
		_mm_cmpgt_ps(__m128 __A,
				__m128 __B);  // 1982
	}
	CmpGtSIMD<>(const fltx4& a,
			const fltx4& b);  // 2830
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 2324
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 2324
	IsAllZeros<>(const fltx4& var); // 2832
} /* size: 0, variables: 12, inline expansions: 50 (0 bytes) */

// <0594C28E> mathlib/extended/collisionutils.cpp:2838
// variables: 14
// function calls: 47
ClosestApproach_t CalcClosestApproachBetweenSegments(const Vector& p1, const Vector& q1, const Vector& p2, const Vector& q2)
{
	ClosestApproach_t out; // 2840
	Vector d1; // 2842
	Vector d2; // 2843
	Vector r; // 2844
	float a; // 2846
	float e; // 2847
	float f; // 2848
	float c; // 2875
	float s1; // 2892
	float s2; // 2892
	float b; // 2893
	float denom; // 2895
	{
		float s2; // 2865
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 2865
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 2869
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2869
	}
	{
		float s1; // 2880
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 2880
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 2882
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2882
	}
	Vector::Vector(); // 487
	Vector::Vector(); // 487
	ClosestApproach_t::ClosestApproach_t(); // 2840
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2842
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2844
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 2843
	DotProduct(const Vector& a,
			const Vector& b);  // 2846
	DotProduct(const Vector& a,
			const Vector& b);  // 2847
	DotProduct(const Vector& a,
			const Vector& b);  // 2848
	Vector::operator=(
			const Vector& vOther);  // 2854
	DotProduct(const Vector& a,
			const Vector& b);  // 2875
	DotProduct(const Vector& a,
			const Vector& b);  // 2893
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 2904
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 2919
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 2923
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2923
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2925
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 2925
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 2914
} /* size: 0, variables: 12, inline expansions: 33 (0 bytes) */

// <0594B78A> mathlib/extended/collisionutils.cpp:2931
// variables: 15
// function calls: 44
ClosestApproach_t CalcClosestApproachBetweenLines(const Vector& p1, const Vector& d1, const Vector& p2, const Vector& d2)
{
	float a11; // 2936
	float a12; // 2936
	float a21; // 2937
	float a22; // 2937
	Vector w; // 2939
	float b1; // 2940
	float b2; // 2941
	float flDet; // 2943
	float s1; // 2961
	float s2; // 2962
	ClosestApproach_t out; // 2964
	{
		Vector dp; // 2947
		float s1; // 2949
		float s2; // 2950
		ClosestApproach_t out; // 2952
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 2947
		DotProduct(const Vector& a,
				const Vector& b);  // 2949
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::Vector(); // 1436
		Vector::operator+(
				const Vector& v);  // 2955
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 2955
		Vector::Vector(); // 487
		Vector::Vector(); // 487
		ClosestApproach_t::ClosestApproach_t(); // 2952
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 2953
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 2953
		Vector::operator=(
				const Vector& vOther);  // 2953
		Vector::operator=(
				const Vector& vOther);  // 2955
	}
	DotProduct(const Vector& a,
			const Vector& b);  // 2936
	DotProduct(const Vector& a,
			const Vector& b);  // 2936
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 2939
	DotProduct(const Vector& a,
			const Vector& b);  // 2937
	DotProduct(const Vector& a,
			const Vector& b);  // 2940
	DotProduct(const Vector& a,
			const Vector& b);  // 2941
	Vector::Vector(); // 487
	Vector::Vector(); // 487
	ClosestApproach_t::ClosestApproach_t(); // 2964
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 2965
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2965
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 2967
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2967
} /* size: 0, variables: 11, inline expansions: 23 (0 bytes) */


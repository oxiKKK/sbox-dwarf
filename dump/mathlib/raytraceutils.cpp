
//
// mathlib/raytraceutils.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 25
//

// <01AAA92A> mathlib/raytraceutils.cpp:10
// variables: 3
// function calls: 7
bool IntersectRayWithPlane(const Vector& vRayOrig, const Vector& vRayDir, const Vector& vPlanePos, const Vector& vPlaneNormal, float& flHitDistance)
{
	Vector vRayToPlane; // 15
	float flDistToPlane; // 16
	float dp; // 17
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 15
	DotProduct(const Vector& a,
			const Vector& b);  // 16
	DotProduct(const Vector& a,
			const Vector& b);  // 17
	Sign(float x); // 20
	Sign(float x); // 20
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <01AAA6C6> mathlib/raytraceutils.cpp:34
// variables: 5
// function calls: 6
bool IntersectRayWithBox(const Vector& vecRayStart, const Vector& vecRayDelta, const Vector& boxMins, const Vector& boxMaxs, float flTolerance, BoxTraceInfo_t* pTrace)
{
	int i; // 36
	float d1; // 37
	float d2; // 37
	float f; // 38
	int nHitSide; // 42
	Vector::operator[](
			int i);  // 51
	Vector::operator[](
			int i);  // 51
	Vector::operator[](
			int i);  // 52
	Vector::operator[](
			int i);  // 56
	Vector::operator[](
			int i);  // 56
	Vector::operator[](
			int i);  // 57
} /* size: 0, variables: 5, inline expansions: 6 (0 bytes) */

// <01AAA4EF> mathlib/raytraceutils.cpp:117
// variables: 2
// function calls: 2
bool IntersectRayWithOBB(const Vector& vecRayStart, const Vector& vecRayDelta, const matrix3x4_t& matOBBToWorld, const Vector& vecOBBMins, const Vector& vecOBBMaxs, float flTolerance, BoxTraceInfo_t* pTrace)
{
	Vector start; // 120
	Vector delta; // 120
	VectorITransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 121
	VectorIRotate(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 122
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <05A8A1B4> mathlib/raytraceutils.cpp:147
inline void FindMinMax(float v1, float v2, float v3, float& min, float& max)
{
} /* size: 0 */

// <05A8A11B> mathlib/raytraceutils.cpp:159
// variables: 3
inline bool AxisTestEdgeCrossX2(float flEdgeZ, float flEdgeY, float flAbsEdgeZ, float flAbsEdgeY, const Vector& p1, const Vector& p3, const Vector& vecExtents, float flTolerance)
{
	float flDist1; // 165
	float flDist3; // 166
	float flDistBox; // 169
} /* size: 0, variables: 3 */

// <05A8A082> mathlib/raytraceutils.cpp:189
// variables: 3
inline bool AxisTestEdgeCrossX3(float flEdgeZ, float flEdgeY, float flAbsEdgeZ, float flAbsEdgeY, const Vector& p1, const Vector& p2, const Vector& vecExtents, float flTolerance)
{
	float flDist1; // 195
	float flDist2; // 196
	float flDistBox; // 199
} /* size: 0, variables: 3 */

// <05A89FE9> mathlib/raytraceutils.cpp:218
// variables: 3
inline bool AxisTestEdgeCrossY2(float flEdgeZ, float flEdgeX, float flAbsEdgeZ, float flAbsEdgeX, const Vector& p1, const Vector& p3, const Vector& vecExtents, float flTolerance)
{
	float flDist1; // 224
	float flDist3; // 225
	float flDistBox; // 228
} /* size: 0, variables: 3 */

// <05A89F4F> mathlib/raytraceutils.cpp:247
// variables: 3
inline bool AxisTestEdgeCrossY3(float flEdgeZ, float flEdgeX, float flAbsEdgeZ, float flAbsEdgeX, const Vector& p1, const Vector& p2, const Vector& vecExtents, float flTolerance)
{
	float flDist1; // 253
	float flDist2; // 254
	float flDistBox; // 257
} /* size: 0, variables: 3 */

// <05A89EAA> mathlib/raytraceutils.cpp:276
// variables: 3
inline bool AxisTestEdgeCrossZ1(float flEdgeY, float flEdgeX, float flAbsEdgeY, float flAbsEdgeX, const Vector& p2, const Vector& p3, const Vector& vecExtents, float flTolerance)
{
	float flDist2; // 282
	float flDist3; // 283
	float flDistBox; // 286
} /* size: 0, variables: 3 */

// <05A89E05> mathlib/raytraceutils.cpp:305
// variables: 3
inline bool AxisTestEdgeCrossZ2(float flEdgeY, float flEdgeX, float flAbsEdgeY, float flAbsEdgeX, const Vector& p1, const Vector& p3, const Vector& vecExtents, float flTolerance)
{
	float flDist1; // 311
	float flDist3; // 312
	float flDistBox; // 315
} /* size: 0, variables: 3 */

// <05A88EF6> mathlib/raytraceutils.cpp:345
// variables: 12
// function calls: 46
bool IsBoxIntersectingTriangle(const Vector& vecBoxCenter, const Vector& vecBoxExtents, const Vector& v1, const Vector& v2, const Vector& v3, float flTolerance)
{
	float flMin; // 348
	float flMax; // 348
	Vector p1; // 349
	Vector p2; // 349
	Vector p3; // 349
	Vector vecAbsEdge; // 376
	Vector vecEdge0; // 379
	Vector vecEdge1; // 394
	Vector vecEdge2; // 409
	Vector vNormal; // 424
	float flDist; // 426
	float flRadius; // 427
	Vector::Vector(); // 349
	Vector::Vector(); // 349
	Vector::Vector(); // 349
	FindMinMax(float v1,
			float v2,
			float v3,
			float& min,
			float& max);  // 355
	FindMinMax(float v1,
			float v2,
			float v3,
			float& min,
			float& max);  // 363
	FindMinMax(float v1,
			float v2,
			float v3,
			float& min,
			float& max);  // 371
	Vector::Vector(); // 376
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 379
	Vector::NormalizeInPlace(); // 380
	AxisTestEdgeCrossX2(float flEdgeZ,
				float flEdgeY,
				float flAbsEdgeZ,
				float flAbsEdgeY,
				const Vector& p1,
				const Vector& p3,
				const Vector& vecExtents,
				float flTolerance);  // 383
	FloatMakePositive(vec_t f); // 381
	FloatMakePositive(vec_t f); // 382
	AxisTestEdgeCrossY2(float flEdgeZ,
				float flEdgeX,
				float flAbsEdgeZ,
				float flAbsEdgeX,
				const Vector& p1,
				const Vector& p3,
				const Vector& vecExtents,
				float flTolerance);  // 387
	FloatMakePositive(vec_t f); // 386
	AxisTestEdgeCrossZ1(float flEdgeY,
				float flEdgeX,
				float flAbsEdgeY,
				float flAbsEdgeX,
				const Vector& p2,
				const Vector& p3,
				const Vector& vecExtents,
				float flTolerance);  // 390
	Vector::NormalizeInPlace(); // 395
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 394
	AxisTestEdgeCrossX2(float flEdgeZ,
				float flEdgeY,
				float flAbsEdgeZ,
				float flAbsEdgeY,
				const Vector& p1,
				const Vector& p3,
				const Vector& vecExtents,
				float flTolerance);  // 398
	FloatMakePositive(vec_t f); // 396
	FloatMakePositive(vec_t f); // 397
	AxisTestEdgeCrossY2(float flEdgeZ,
				float flEdgeX,
				float flAbsEdgeZ,
				float flAbsEdgeX,
				const Vector& p1,
				const Vector& p3,
				const Vector& vecExtents,
				float flTolerance);  // 402
	FloatMakePositive(vec_t f); // 401
	AxisTestEdgeCrossZ2(float flEdgeY,
				float flEdgeX,
				float flAbsEdgeY,
				float flAbsEdgeX,
				const Vector& p1,
				const Vector& p3,
				const Vector& vecExtents,
				float flTolerance);  // 405
	Vector::NormalizeInPlace(); // 410
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 409
	AxisTestEdgeCrossX3(float flEdgeZ,
				float flEdgeY,
				float flAbsEdgeZ,
				float flAbsEdgeY,
				const Vector& p1,
				const Vector& p2,
				const Vector& vecExtents,
				float flTolerance);  // 413
	FloatMakePositive(vec_t f); // 411
	FloatMakePositive(vec_t f); // 412
	AxisTestEdgeCrossY3(float flEdgeZ,
				float flEdgeX,
				float flAbsEdgeZ,
				float flAbsEdgeX,
				const Vector& p1,
				const Vector& p2,
				const Vector& vecExtents,
				float flTolerance);  // 417
	FloatMakePositive(vec_t f); // 416
	AxisTestEdgeCrossZ1(float flEdgeY,
				float flEdgeX,
				float flAbsEdgeY,
				float flAbsEdgeX,
				const Vector& p2,
				const Vector& p3,
				const Vector& vecExtents,
				float flTolerance);  // 420
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 424
	Vector::NormalizeInPlace(); // 425
	DotProduct(const Vector& a,
			const Vector& b);  // 426
	FloatMakePositive(vec_t f); // 1234
	FloatMakePositive(vec_t f); // 1234
	FloatMakePositive(vec_t f); // 1234
	DotProductAbs(const Vector& v0,
			const Vector& v1);  // 427
} /* size: 0, variables: 12, inline expansions: 46 (0 bytes) */

// <05A88DBB> mathlib/raytraceutils.cpp:435
// variables: 3
// function calls: 3
bool IsSphereIntersectingSphere(const Vector& center1, float radius1, const Vector& center2, float radius2)
{
	Vector delta; // 438
	float distSq; // 440
	float radiusSum; // 441
	Vector::Vector(); // 438
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 439
	Vector::LengthSqr(); // 440
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <05A88AFD> mathlib/raytraceutils.cpp:446
// variables: 3
// function calls: 9
bool IsBoxIntersectingSphere(const Vector& boxMin, const Vector& boxMax, const Vector& center, float radius)
{
	float dmin; // 450
	float flDelta; // 451
	float radiusSquared; // 452
	Vector::operator[](
			int i);  // 456
	Vector::operator[](
			int i);  // 456
	Vector::operator[](
			int i);  // 467
	Vector::operator[](
			int i);  // 467
	Vector::operator[](
			int i);  // 478
	Vector::operator[](
			int i);  // 478
	Vector::operator[](
			int i);  // 461
	Vector::operator[](
			int i);  // 472
	Vector::operator[](
			int i);  // 483
} /* size: 0, variables: 3, inline expansions: 9 (0 bytes) */

// <05A889C5> mathlib/raytraceutils.cpp:492
// variables: 4
// function calls: 3
bool IsBoxIntersectingSphereExtents(const Vector& boxCenter, const Vector& boxHalfDiag, const Vector& center, float radius)
{
	float dmin; // 496
	float flDelta; // 497
	float flDiff; // 497
	float radiusSquared; // 498
	FloatMakePositive(vec_t f); // 502
	FloatMakePositive(vec_t f); // 509
	FloatMakePositive(vec_t f); // 516
} /* size: 0, variables: 4, inline expansions: 3 (0 bytes) */

// <05A887B5> mathlib/raytraceutils.cpp:527
// variables: 3
// function calls: 6
bool IsCircleIntersectingRectangle(const Vector2D& boxMin, const Vector2D& boxMax, const Vector2D& center, float radius)
{
	float dmin; // 531
	float flDelta; // 532
	float radiusSquared; // 533
	Vector2D::operator[](
			int i);  // 536
	Vector2D::operator[](
			int i);  // 536
	Vector2D::operator[](
			int i);  // 547
	Vector2D::operator[](
			int i);  // 547
	Vector2D::operator[](
			int i);  // 541
	Vector2D::operator[](
			int i);  // 552
} /* size: 0, variables: 3, inline expansions: 6 (0 bytes) */

// <01AA874E> mathlib/raytraceutils.cpp:562
// variables: 7
// function calls: 9
bool IsRayIntersectingSphere(const Vector& vecRayOrigin, const Vector& vecRayDelta, const Vector& vecCenter, float flRadius, float flTolerance)
{
	const char   __FUNCTION__; // 12063
	Vector vecRayToSphere; // 578
	float flNumerator; // 580
	float t; // 582
	Vector vecClosestPoint; // 596
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
	{
		float flDenominator; // 589
		DotProduct(const Vector& a,
				const Vector& b);  // 589
	}
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 579
	Vector::Vector(); // 578
	DotProduct(const Vector& a,
			const Vector& b);  // 580
	Vector::Vector(); // 596
	VectorMA(const Vector& start,
		float scale,
		const Vector& direction,
		Vector& dest);  // 597
	Vector::Vector(); // 194
	Vector::LengthSqr(); // 198
	Vector::DistToSqr(
			const Vector& vOther);  // 598
} /* size: 0, variables: 5, inline expansions: 8 (0 bytes) */

// <05A8825C> mathlib/raytraceutils.cpp:622
// variables: 6
// function calls: 5
bool IntersectInfiniteRayWithSphere(const Vector& vecRayOrigin, const Vector& vecRayDelta, const Vector& vecSphereCenter, float flRadius, float* pT1, float* pT2)
{
	Vector vecSphereToRay; // 639
	float a; // 642
	float b; // 651
	float c; // 652
	float flDiscrim; // 653
	float oo2a; // 658
	Vector::Vector(); // 639
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 640
	DotProduct(const Vector& a,
			const Vector& b);  // 642
	Vector::LengthSqr(); // 648
	DotProduct(const Vector& a,
			const Vector& b);  // 651
} /* size: 290, variables: 6, inline expansions: 5 (133 bytes) */

// <02C49E11> mathlib/raytraceutils.cpp:674
bool IntersectRayWithSphere(const Vector& vecRayOrigin, const Vector& vecRayDelta, const Vector& vecSphereCenter, float flRadius, float* pT1, float* pT2)
{
} /* size: 0 */

// <05A88135> mathlib/raytraceutils.cpp:708
// variables: 2
void CastCapsuleRay2DCoaxialInternal(CapsuleCast2D_t& out, float mx, float dx, float h, float e)
{
	float mxProj; // 711
	{
		float mxEnd; // 730
	}
} /* size: 0, variables: 1 */

// <05A880D2> mathlib/raytraceutils.cpp:740
// variables: 2
void CastCapsuleRay2DParallelInternal(CapsuleCast2D_t& out, const Vector2D& m, float dx, float h, float rr)
{
	float e2; // 742
	{
		float e; // 746
	}
} /* size: 0, variables: 1 */

// <05A87FE6> mathlib/raytraceutils.cpp:752
// variables: 13
void CastCapsuleRay2DInternal(CapsuleCast2D_t& out, const Vector2D& m, const Vector2D& d, float h, float rr)
{
	float my2; // 757
	float r; // 769
	float dd; // 769
	float ddInv; // 769
	float dymy; // 769
	float t; // 773
	float t0; // 773
	float s0; // 773
	float mxh; // 778
	float b; // 802
	float c; // 802
	float D; // 802
	{
		float tc; // 805
	}
} /* size: 0, variables: 12 */

// <05A87F52> mathlib/raytraceutils.cpp:816
// variables: 3
bool CastCapsuleShortRay(const Vector& sUnit, float sLen, const Vector& m, const Vector& vRayStart, const Vector* vCenter, float flRadius, Vector* pOutIntersection)
{
	float flProjOnCapsule; // 820
	Vector vDistance; // 821
	float flDistFromCapsuleSqr; // 836
} /* size: 0, variables: 3 */

// <02C482F0> mathlib/raytraceutils.cpp:855
// variables: 26
// function calls: 96
bool IntersectRayWithCapsule(const Vector& vRayStart, const Vector& vRayDelta, const Vector* vCenter, float flRadius, Vector* pOutIntersection)
{
	Vector m; // 857
	Vector s; // 857
	float sLen; // 858
	Vector sUnit; // 870
	float dLen; // 871
	{
		Vector dUnit; // 874
		Vector z; // 875
		float zLenSqr; // 876
		float dsUnit; // 877
		CapsuleCast2D_t cast; // 879
		{
			float zLen; // 884
			Vector zUnit; // 885
			float mzUnit; // 891
			float rr; // 891
			{
				Vector yUnit; // 898
				Vector2D mProj; // 899
				float dyUnit; // 900
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1508
				CrossProduct(const Vector& a,
						const Vector& b);  // 898
				DotProduct(const Vector& a,
						const Vector& b);  // 899
				DotProduct(const Vector& a,
						const Vector& b);  // 899
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 758
				Sqr(float f); // 757
				Sqr(float f); // 763
				Sqr(float f); // 769
				Sqr(float f); // 769
				{
					float tc; // 805
				}
				CastCapsuleRay2DInternal(CapsuleCast2D_t& out,
							const Vector2D& m,
							const Vector2D& d,
							float h,
							float rr);  // 901
				Vector2D::Vector2D(
					vec_t X,
					vec_t Y);  // 899
				DotProduct(const Vector& a,
						const Vector& b);  // 900
				Vector2D::Vector2D(
					vec_t X,
					vec_t Y);  // 901
			}
			Vector::Vector(); // 1464
			VectorDivide(const Vector& a,
					vec_t b,
					Vector& c);  // 1465
			Vector::operator/(
					float fl);  // 885
			Sqr(float f); // 891
			DotProduct(const Vector& a,
					const Vector& b);  // 891
			Sqr(float f); // 891
		}
		{
			float msUnit; // 907
			Vector zAlt; // 908
			float zAltLenSqr; // 909
			{
				Vector zUnit; // 918
				Vector yUnit; // 918
				{
					float e; // 746
					{
						float mxEnd; // 730
					}
					CastCapsuleRay2DCoaxialInternal(CapsuleCast2D_t& out,
									float mx,
									float dx,
									float h,
									float e);  // 708
					CastCapsuleRay2DCoaxialInternal(CapsuleCast2D_t& out,
									float mx,
									float dx,
									float h,
									float e);  // 747
				}
				Sqr(float f); // 742
				CastCapsuleRay2DParallelInternal(CapsuleCast2D_t& out,
								const Vector2D& m,
								float dx,
								float h,
								float rr);  // 919
				Vector::Vector(); // 1464
				VectorDivide(const Vector& a,
						vec_t b,
						Vector& c);  // 1465
				Vector::operator/(
						float fl);  // 918
				Sqr(float f); // 919
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1508
				CrossProduct(const Vector& a,
						const Vector& b);  // 918
				DotProduct(const Vector& a,
						const Vector& b);  // 919
				Vector2D::Vector2D(
					vec_t X,
					vec_t Y);  // 919
			}
			DotProduct(const Vector& a,
					const Vector& b);  // 907
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 908
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 908
			DotProduct(const Vector& a,
					const Vector& b);  // 909
			{
				float mxEnd; // 730
			}
			CastCapsuleRay2DCoaxialInternal(CapsuleCast2D_t& out,
							float mx,
							float dx,
							float h,
							float e);  // 708
			CastCapsuleRay2DCoaxialInternal(CapsuleCast2D_t& out,
							float mx,
							float dx,
							float h,
							float e);  // 913
		}
		Vector::Vector(); // 1464
		VectorDivide(const Vector& a,
				vec_t b,
				Vector& c);  // 1465
		Vector::operator/(
				float fl);  // 874
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1508
		CrossProduct(const Vector& a,
				const Vector& b);  // 875
		DotProduct(const Vector& a,
				const Vector& b);  // 877
		DotProduct(const Vector& a,
				const Vector& b);  // 876
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 926
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 926
		Vector::operator=(
				const Vector& vOther);  // 926
	}
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 857
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 857
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 858
	VectorDivide(const Vector& a,
			vec_t b,
			Vector& c);  // 1465
	Vector::Vector(); // 1464
	Vector::operator/(
			float fl);  // 870
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 871
	DotProduct(const Vector& a,
			const Vector& b);  // 820
	Vector::Vector(); // 821
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 828
	Vector::operator=(
			const Vector& vOther);  // 828
	DotProduct(const Vector& a,
			const Vector& b);  // 836
	Vector::operator=(
			const Vector& vOther);  // 847
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 833
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 833
	Vector::operator=(
			const Vector& vOther);  // 833
	CastCapsuleShortRay(const Vector& sUnit,
				float sLen,
				const Vector& m,
				const Vector& vRayStart,
				const Vector* vCenter,
				float flRadius,
				Vector* pOutIntersection);  // 933
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 867
	Vector::Vector(); // 1464
	VectorDivide(const Vector& a,
			vec_t b,
			Vector& c);  // 1465
	Vector::operator/(
			float fl);  // 867
} /* size: 0, variables: 5, inline expansions: 41 (0 bytes) */

// <05A85F89> mathlib/raytraceutils.cpp:951
// variables: 7
// function calls: 27
bool IntersectRayWithSpherePrecise(const Vector& vRayOrigin, const Vector& vRayDelta, const Vector& vCenter, float flRadius, Vector* pOutIntersection)
{
	const float  flRadiusSQ; // 953
	float div; // 966
	float flParam; // 970
	Vector vClosestPointOnRay; // 977
	const float  flDistSQ; // 980
	{
		float flSurfaceDistance; // 987
		Vector vRayDir; // 988
		Vector::Normalized(); // 988
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 989
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::Vector(); // 1443
		Vector::operator-(
				const Vector& v);  // 989
		Vector::operator=(
				const Vector& vOther);  // 989
	}
	Vector::Vector(); // 194
	Vector::LengthSqr(); // 198
	Vector::DistToSqr(
			const Vector& vOther);  // 956
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 966
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 970
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 970
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 977
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 977
	Vector::Vector(); // 194
	Vector::LengthSqr(); // 198
	Vector::DistToSqr(
			const Vector& vOther);  // 980
	Vector::operator=(
			const Vector& vOther);  // 960
} /* size: 0, variables: 5, inline expansions: 19 (0 bytes) */

// <05A8597F> mathlib/raytraceutils.cpp:997
// variables: 3
// function calls: 27
bool IsSphereIntersectingCone(const Vector& sphereCenter, float sphereRadius, const Vector& coneOrigin, const Vector& coneNormal, float coneSine, float coneCosine)
{
	Vector backCenter; // 999
	Vector delta; // 1000
	float deltaLen; // 1001
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 999
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 999
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 1000
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 1001
	DotProduct(const Vector& a,
			const Vector& b);  // 1002
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 1004
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 1005
	DotProduct(const Vector& a,
			const Vector& b);  // 1006
} /* size: 0, variables: 3, inline expansions: 27 (0 bytes) */


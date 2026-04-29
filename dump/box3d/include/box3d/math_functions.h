
//
// box3d/include/box3d/math_functions.h
//
//	referenced by: libengine2.so
//
//	functions: 100
//	structs: 8
//

// <06B02E35> ../box3d/include/box3d/math_functions.h:20
// member variables: 2
// struct size: 8
struct b3Vec2 {
	float x; /* 0 4 */
	float y; /* 4 4 */
};

// <009956DB> ../box3d/include/box3d/math_functions.h:26
// member variables: 3
// struct size: 12
struct b3Vec3 {
	float x; /* 0 4 */
	float y; /* 4 4 */
	float z; /* 8 4 */
};

// <00CA5014> ../box3d/include/box3d/math_functions.h:35
// member variables: 2
// struct size: 8
struct b3CosSin {
	float cosine; /* 0 4 */
	float sine; /* 4 4 */
};

// <00995721> ../box3d/include/box3d/math_functions.h:42
// member variables: 2
// struct size: 16
struct b3Quat {
	b3Vec3 v; /* 0 12 */
	float s; /* 12 4 */
};

// <0099575A> ../box3d/include/box3d/math_functions.h:48
// member variables: 2
// struct size: 28
struct b3Transform {
	b3Vec3 p; /* 0 12 */
	b3Quat q; /* 12 16 */
};

// <00995793> ../box3d/include/box3d/math_functions.h:54
// member variables: 3
// struct size: 36
struct b3Matrix3 {
	b3Vec3 cx; /* 0 12 */
	b3Vec3 cy; /* 12 12 */
	b3Vec3 cz; /* 24 12 */
};

// <009957DC> ../box3d/include/box3d/math_functions.h:59
// member variables: 2
// struct size: 24
struct b3AABB {
	b3Vec3 lowerBound; /* 0 12 */
	b3Vec3 upperBound; /* 12 12 */
};

// <00B8FE03> ../box3d/include/box3d/math_functions.h:66
// member variables: 2
// struct size: 16
struct b3Plane {
	b3Vec3 normal; /* 0 12 */
	float offset; /* 12 4 */
};

// <06BB33D1> ../box3d/include/box3d/math_functions.h:108
inline int b3MinInt(int a, int b)
{
} /* size: 0 */

// <06B26588> ../box3d/include/box3d/math_functions.h:114
inline int b3MaxInt(int a, int b)
{
} /* size: 0 */

// <06B1AA48> ../box3d/include/box3d/math_functions.h:120
inline int b3ClampInt(int a, int lower, int upper)
{
} /* size: 0 */

// <00CB325B> ../box3d/include/box3d/math_functions.h:129
inline float b3AbsFloat(float a)
{
} /* size: 0 */

// <00A172CC> ../box3d/include/box3d/math_functions.h:135
inline float b3MinFloat(float a, float b)
{
} /* size: 0 */

// <00A172A0> ../box3d/include/box3d/math_functions.h:141
inline float b3MaxFloat(float a, float b)
{
} /* size: 0 */

// <00C74A45> ../box3d/include/box3d/math_functions.h:147
inline float b3ClampFloat(float a, float lower, float upper)
{
} /* size: 0 */

// <06CD5437> ../box3d/include/box3d/math_functions.h:153
inline float b3LerpFloat(float a, float b, float alpha)
{
} /* size: 0 */

// <06B8E2EB> ../box3d/include/box3d/math_functions.h:162
float b3Atan2(float, float)
{
} /* size: 0 */

// <00CA6FF8> ../box3d/include/box3d/math_functions.h:166
b3CosSin b3ComputeCosSin(float)
{
} /* size: 0 */

// <00CB322D> ../box3d/include/box3d/math_functions.h:168
// variable: 1
inline float b3Sin(float radians)
{
	b3CosSin cs; // 170
} /* size: 0, variables: 1 */

// <00CB31FF> ../box3d/include/box3d/math_functions.h:174
// variable: 1
inline float b3Cos(float radians)
{
	b3CosSin cs; // 176
} /* size: 0, variables: 1 */

// <06B9C88F> ../box3d/include/box3d/math_functions.h:181
inline float b3UnwindAngle(float radians)
{
} /* size: 0 */

// <00A17274> ../box3d/include/box3d/math_functions.h:188
inline b3Vec3 b3Add(b3Vec3 a, b3Vec3 b)
{
} /* size: 0 */

// <00A17248> ../box3d/include/box3d/math_functions.h:194
inline b3Vec3 b3Sub(b3Vec3 a, b3Vec3 b)
{
} /* size: 0 */

// <00B4A848> ../box3d/include/box3d/math_functions.h:200
inline b3Vec3 b3Mul(b3Vec3 a, b3Vec3 b)
{
} /* size: 0 */

// <00CB315D> ../box3d/include/box3d/math_functions.h:206
inline b3Vec3 b3Neg(b3Vec3 a)
{
} /* size: 0 */

// <00C749ED> ../box3d/include/box3d/math_functions.h:212
inline float b3Dot(b3Vec3 a, b3Vec3 b)
{
} /* size: 0 */

// <00C749CB> ../box3d/include/box3d/math_functions.h:218
inline float b3Length(b3Vec3 v)
{
} /* size: 0 */

// <06B1A90E> ../box3d/include/box3d/math_functions.h:224
inline float b3LengthSquared(b3Vec3 a)
{
} /* size: 0 */

// <00CB30D9> ../box3d/include/box3d/math_functions.h:229
// variable: 1
inline float b3Distance(b3Vec3 v1, b3Vec3 v2)
{
	b3Vec3 dv; // 231
} /* size: 0, variables: 1 */

// <06B5ADF5> ../box3d/include/box3d/math_functions.h:235
// variable: 1
inline float b3DistanceSquared(b3Vec3 v1, b3Vec3 v2)
{
	b3Vec3 dv; // 237
} /* size: 0, variables: 1 */

// <00CB3095> ../box3d/include/box3d/math_functions.h:241
// variables: 3
inline b3Vec3 b3Normalize(b3Vec3 a)
{
	float lengthSquared; // 243
	{
		float s; // 247
		b3Vec3 u; // 248
	}
} /* size: 0, variables: 1 */

// <06C0FFF9> ../box3d/include/box3d/math_functions.h:255
// variables: 2
inline b3Vec3 b3GetLengthAndNormalize(float* length, b3Vec3 v)
{
	float invLength; // 263
	b3Vec3 n; // 264
} /* size: 0, variables: 2 */

// <00CB3067> ../box3d/include/box3d/math_functions.h:268
// variable: 1
inline b3Vec3 b3Perp(b3Vec3 v)
{
	b3Vec3 p; // 273
} /* size: 0, variables: 1 */

// <06B436A4> ../box3d/include/box3d/math_functions.h:286
// variable: 1
inline bool b3IsNormalized(b3Vec3 a)
{
	float aa; // 288
} /* size: 0, variables: 1 */

// <00B4A80F> ../box3d/include/box3d/math_functions.h:293
inline b3Vec3 b3MulAdd(b3Vec3 a, float s, b3Vec3 b)
{
} /* size: 0 */

// <00CB2FF5> ../box3d/include/box3d/math_functions.h:299
inline b3Vec3 b3MulSub(b3Vec3 a, float s, b3Vec3 b)
{
} /* size: 0 */

// <00A1721A> ../box3d/include/box3d/math_functions.h:305
inline b3Vec3 b3MulSV(float s, b3Vec3 a)
{
} /* size: 0 */

// <00B4A7D6> ../box3d/include/box3d/math_functions.h:310
// variable: 1
inline b3Vec3 b3Cross(b3Vec3 a, b3Vec3 b)
{
	b3Vec3 c; // 312
} /* size: 0, variables: 1 */

// <00CB2F48> ../box3d/include/box3d/math_functions.h:319
// variable: 1
inline b3Vec3 b3Lerp(b3Vec3 a, b3Vec3 b, float alpha)
{
	b3Vec3 c; // 323
} /* size: 0, variables: 1 */

// <00CB2F25> ../box3d/include/box3d/math_functions.h:331
inline b3Vec3 b3Abs(b3Vec3 a)
{
} /* size: 0 */

// <06B73331> ../box3d/include/box3d/math_functions.h:341
inline b3Vec3 b3Sign(b3Vec3 a)
{
} /* size: 0 */

// <06B1A7A1> ../box3d/include/box3d/math_functions.h:350
inline b3Vec3 b3Min(b3Vec3 a, b3Vec3 b)
{
} /* size: 0 */

// <06B1A773> ../box3d/include/box3d/math_functions.h:359
inline b3Vec3 b3Max(b3Vec3 a, b3Vec3 b)
{
} /* size: 0 */

// <06B7328B> ../box3d/include/box3d/math_functions.h:370
// variables: 3
inline b3Vec3 b3SafeScale(b3Vec3 a)
{
	b3Vec3 absScale; // 372
	b3Vec3 minScale; // 373
	b3Vec3 safeScale; // 374
} /* size: 0, variables: 3 */

// <06B9C728> ../box3d/include/box3d/math_functions.h:378
// variable: 1
inline bool b3IsNormalizedQuat(b3Quat q)
{
	float qq; // 380
} /* size: 0, variables: 1 */

// <00B4A784> ../box3d/include/box3d/math_functions.h:385
// variables: 3
inline b3Vec3 b3RotateVector(b3Quat q, b3Vec3 v)
{
	b3Vec3 t1; // 389
	b3Vec3 t2; // 390
	b3Vec3 t3; // 391
} /* size: 0, variables: 3 */

// <00CB2E81> ../box3d/include/box3d/math_functions.h:396
// variables: 3
inline b3Vec3 b3InvRotateVector(b3Quat q, b3Vec3 v)
{
	b3Vec3 t1; // 400
	b3Vec3 t2; // 401
	b3Vec3 t3; // 402
} /* size: 0, variables: 3 */

// <00BB0AD2> ../box3d/include/box3d/math_functions.h:406
inline float b3DotQuat(b3Quat a, b3Quat b)
{
} /* size: 0 */

// <06B1A642> ../box3d/include/box3d/math_functions.h:411
// variables: 4
inline b3Quat b3MulQuat(b3Quat q1, b3Quat q2)
{
	b3Vec3 t1; // 413
	b3Vec3 t2; // 414
	b3Vec3 t3; // 415
	b3Quat q; // 416
} /* size: 0, variables: 4 */

// <06B4351A> ../box3d/include/box3d/math_functions.h:420
// variables: 4
inline b3Quat b3InvMulQuat(b3Quat q1, b3Quat q2)
{
	b3Vec3 t1; // 422
	b3Vec3 t2; // 423
	b3Vec3 t3; // 424
	b3Quat q; // 425
} /* size: 0, variables: 4 */

// <00CB2E5E> ../box3d/include/box3d/math_functions.h:429
inline b3Quat b3Conjugate(b3Quat q)
{
} /* size: 0 */

// <06B1A5FC> ../box3d/include/box3d/math_functions.h:434
inline b3Quat b3NegateQuat(b3Quat q)
{
} /* size: 0 */

// <00BB0A89> ../box3d/include/box3d/math_functions.h:439
// variables: 3
inline b3Quat b3NormalizeQuat(b3Quat q)
{
	float lengthSq; // 441
	{
		float s; // 444
		b3Quat qn; // 445
	}
} /* size: 0, variables: 1 */

// <06B95F04> ../box3d/include/box3d/math_functions.h:476
// variable: 1
inline float b3GetQuatAngle(b3Quat q)
{
	float length; // 478
} /* size: 0, variables: 1 */

// <06B95ED4> ../box3d/include/box3d/math_functions.h:483
// variable: 1
inline float b3GetTwistAngle(b3Quat q)
{
	float twist; // 487
} /* size: 0, variables: 1 */

// <06B95E8E> ../box3d/include/box3d/math_functions.h:494
// variables: 3
inline float b3GetSwingAngle(b3Quat q)
{
	float x; // 497
	float y; // 498
	float swing; // 499
} /* size: 0, variables: 3 */

// <06B6B96A> ../box3d/include/box3d/math_functions.h:505
b3Quat b3MakeQuatFromMatrix(const b3Matrix3 *)
{
} /* size: 0 */

// <06B28C78> ../box3d/include/box3d/math_functions.h:508
b3Quat b3ComputeQuatBetweenUnitVectors(b3Vec3, b3Vec3)
{
} /* size: 0 */

// <06C68FE3> ../box3d/include/box3d/math_functions.h:511
// variable: 1
inline b3Quat b3NLerp(b3Quat q1, b3Quat q2, float alpha)
{
	b3Quat q; // 519
} /* size: 0, variables: 1 */

// <06B39482> ../box3d/include/box3d/math_functions.h:529
// variable: 1
inline b3Transform b3MulTransforms(b3Transform a, b3Transform b)
{
	b3Transform out; // 531
} /* size: 0, variables: 1 */

// <06B434DF> ../box3d/include/box3d/math_functions.h:540
// variable: 1
inline b3Transform b3InvMulTransforms(b3Transform a, b3Transform b)
{
	b3Transform out; // 542
} /* size: 0, variables: 1 */

// <00CB2E2E> ../box3d/include/box3d/math_functions.h:548
// variable: 1
inline b3Transform b3InvertTransform(b3Transform t)
{
	b3Transform out; // 550
} /* size: 0, variables: 1 */

// <00B4A74A> ../box3d/include/box3d/math_functions.h:564
// variable: 1
inline b3Vec3 b3TransformPoint(b3Transform t, b3Vec3 v)
{
	b3Vec3 rv; // 566
} /* size: 0, variables: 1 */

// <06B1A594> ../box3d/include/box3d/math_functions.h:570
inline b3Vec3 b3InvTransformPoint(b3Transform t, b3Vec3 v)
{
} /* size: 0 */

// <06B9C678> ../box3d/include/box3d/math_functions.h:575
inline b3Matrix3 b3MakeDiagonalMatrix(float a, float b, float c)
{
} /* size: 0 */

// <06B1A571> ../box3d/include/box3d/math_functions.h:580
inline float b3Det(b3Matrix3 m)
{
} /* size: 0 */

// <00CB2DBB> ../box3d/include/box3d/math_functions.h:585
// variable: 1
inline b3Vec3 b3MulMV(b3Matrix3 m, b3Vec3 a)
{
	b3Vec3 b; // 587
} /* size: 0, variables: 1 */

// <06BD5A86> ../box3d/include/box3d/math_functions.h:595
inline b3Matrix3 b3NegateMat3(b3Matrix3 a)
{
} /* size: 0 */

// <00A171EC> ../box3d/include/box3d/math_functions.h:604
inline b3Matrix3 b3AddMM(b3Matrix3 a, b3Matrix3 b)
{
} /* size: 0 */

// <06B1A4DC> ../box3d/include/box3d/math_functions.h:613
inline b3Matrix3 b3SubMM(b3Matrix3 a, b3Matrix3 b)
{
} /* size: 0 */

// <00A171BE> ../box3d/include/box3d/math_functions.h:622
inline b3Matrix3 b3MulSM(float s, b3Matrix3 a)
{
} /* size: 0 */

// <06B1A4A1> ../box3d/include/box3d/math_functions.h:631
// variable: 1
inline b3Matrix3 b3MulMM(b3Matrix3 a, b3Matrix3 b)
{
	b3Matrix3 out; // 633
} /* size: 0, variables: 1 */

// <06B1A471> ../box3d/include/box3d/math_functions.h:640
// variable: 1
inline b3Matrix3 b3Transpose(b3Matrix3 m)
{
	b3Matrix3 out; // 642
} /* size: 0, variables: 1 */

// <06BD5973> ../box3d/include/box3d/math_functions.h:650
// variables: 3
inline b3Matrix3 b3InvertMatrix(b3Matrix3 m)
{
	float det; // 652
	{
		float invDet; // 655
		b3Matrix3 out; // 656
	}
} /* size: 0, variables: 1 */

// <06BD5913> ../box3d/include/box3d/math_functions.h:667
// variables: 4
inline b3Vec3 b3Solve3(b3Matrix3 m, b3Vec3 x)
{
	float det; // 669
	{
		float invDet; // 672
		b3Matrix3 a; // 673
		b3Vec3 b; // 678
	}
} /* size: 0, variables: 1 */

// <06B1A425> ../box3d/include/box3d/math_functions.h:690
// variables: 3
inline b3Matrix3 b3InvertT(b3Matrix3 m)
{
	float det; // 692
	{
		float invDet; // 695
		b3Matrix3 out; // 696
	}
} /* size: 0, variables: 1 */

// <06BD58E3> ../box3d/include/box3d/math_functions.h:722
// variable: 1
inline b3Matrix3 b3Skew(b3Vec3 v)
{
	b3Matrix3 out; // 724
} /* size: 0, variables: 1 */

// <00CB2D8B> ../box3d/include/box3d/math_functions.h:732
// variable: 1
inline b3Matrix3 b3AbsMatrix3(b3Matrix3 m)
{
	b3Matrix3 out; // 734
} /* size: 0, variables: 1 */

// <00C749A7> ../box3d/include/box3d/math_functions.h:742
inline float b3Trace(b3Matrix3 m)
{
} /* size: 0 */

// <00BB09F3> ../box3d/include/box3d/math_functions.h:747
inline b3Matrix3 b3ScaleMatrix(float s, b3Matrix3 m)
{
} /* size: 0 */

// <00CB2CFC> ../box3d/include/box3d/math_functions.h:757
// variables: 9
inline b3Matrix3 b3MakeMatrixFromQuat(b3Quat q)
{
	float xx; // 759
	float yy; // 760
	float zz; // 761
	float xy; // 762
	float xz; // 763
	float xw; // 764
	float yz; // 765
	float yw; // 766
	float zw; // 767
} /* size: 0, variables: 9 */

// <009DC0CF> ../box3d/include/box3d/math_functions.h:777
b3Matrix3 b3Steiner(float, b3Vec3)
{
} /* size: 0 */

// <06B72F8E> ../box3d/include/box3d/math_functions.h:779
inline b3Plane b3MakePlaneFromNormalAndPoint(b3Vec3 normal, b3Vec3 point)
{
} /* size: 0 */

// <06B676FC> ../box3d/include/box3d/math_functions.h:784
// variable: 1
inline b3Plane b3MakePlaneFromPoints(b3Vec3 point1, b3Vec3 point2, b3Vec3 point3)
{
	b3Plane plane; // 786
} /* size: 0, variables: 1 */

// <06B72F4F> ../box3d/include/box3d/math_functions.h:800
// variable: 1
inline b3Plane b3TransformPlane(b3Transform transform, b3Plane plane)
{
	b3Vec3 normal; // 802
} /* size: 0, variables: 1 */

// <00CB2CB0> ../box3d/include/box3d/math_functions.h:808
// variables: 2
inline b3Plane b3InvTransformPlane(b3Transform transform, b3Plane plane)
{
	float offset; // 810
	b3Vec3 normal; // 811
} /* size: 0, variables: 2 */

// <00CB2C7E> ../box3d/include/box3d/math_functions.h:816
inline float b3PlaneSeparation(b3Plane plane, b3Vec3 point)
{
} /* size: 0 */

// <06B67668> ../box3d/include/box3d/math_functions.h:826
// variables: 3
inline b3AABB b3MakeAABB(const b3Vec3* points, int count, float radius)
{
	b3AABB a; // 829
	b3Vec3 r; // 836
	{
		int i; // 830
	}
} /* size: 0, variables: 2 */

// <06BB2E6D> ../box3d/include/box3d/math_functions.h:843
inline b3AABB b3AABB_AddPoint(b3AABB a, b3Vec3 point)
{
} /* size: 0 */

// <00CB2C50> ../box3d/include/box3d/math_functions.h:860
inline bool b3AABB_Contains(b3AABB a, b3AABB b)
{
} /* size: 0 */

// <06BB2E3B> ../box3d/include/box3d/math_functions.h:872
// variable: 1
inline float b3AABB_Area(b3AABB bounds)
{
	b3Vec3 delta; // 874
} /* size: 0, variables: 1 */

// <00CB2C2B> ../box3d/include/box3d/math_functions.h:878
inline b3Vec3 b3AABB_Center(b3AABB bounds)
{
} /* size: 0 */

// <00CB2C06> ../box3d/include/box3d/math_functions.h:883
inline b3Vec3 b3AABB_Extents(b3AABB bounds)
{
} /* size: 0 */

// <06B1A329> ../box3d/include/box3d/math_functions.h:888
// variable: 1
inline b3AABB b3AABB_Union(b3AABB bounds1, b3AABB bounds2)
{
	b3AABB out; // 890
} /* size: 0, variables: 1 */

// <06B2655A> ../box3d/include/box3d/math_functions.h:906
inline bool b3AABB_Overlaps(b3AABB a, b3AABB b)
{
} /* size: 0 */

// <00CB25F4> ../box3d/include/box3d/math_functions.h:920
// variables: 4
// function calls: 30
b3AABB b3AABB_Transform(b3Transform transform, b3AABB a)
{
	b3Vec3 center; // 922
	b3Matrix3 m; // 923
	b3Vec3 extent; // 924
	b3AABB out; // 925
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 880
	b3MulSV(float s,
		b3Vec3 a);  // 880
	b3AABB_Center(b3AABB bounds); // 922
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 566
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 567
	b3TransformPoint(b3Transform t,
			b3Vec3 v);  // 922
	b3MakeMatrixFromQuat(b3Quat q); // 923
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 885
	b3MulSV(float s,
		b3Vec3 a);  // 885
	b3AABB_Extents(b3AABB bounds); // 924
	b3AbsFloat(float a); // 334
	b3AbsFloat(float a); // 335
	b3AbsFloat(float a); // 336
	b3Abs(b3Vec3 a); // 735
	b3AbsFloat(float a); // 334
	b3AbsFloat(float a); // 335
	b3AbsFloat(float a); // 336
	b3Abs(b3Vec3 a); // 736
	b3AbsFloat(float a); // 334
	b3AbsFloat(float a); // 335
	b3AbsFloat(float a); // 336
	b3Abs(b3Vec3 a); // 737
	b3AbsMatrix3(b3Matrix3 m); // 924
	b3MulMV(b3Matrix3 m,
		b3Vec3 a);  // 924
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 925
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 925
} /* size: 1084, variables: 4, inline expansions: 30 (2346 bytes) */

// <00B99F67> ../box3d/include/box3d/math_functions.h:930
bool b3IsValidFloat(float)
{
} /* size: 0 */

// <00B99E2A> ../box3d/include/box3d/math_functions.h:933
bool b3IsValidVec3(b3Vec3)
{
} /* size: 0 */

// <00B99DA6> ../box3d/include/box3d/math_functions.h:936
bool b3IsValidQuat(b3Quat)
{
} /* size: 0 */

// <06B0D4BF> ../box3d/include/box3d/math_functions.h:939
bool b3IsValidTransform(b3Transform)
{
} /* size: 0 */

// <00B99E43> ../box3d/include/box3d/math_functions.h:942
bool b3IsValidMatrix3(b3Matrix3)
{
} /* size: 0 */

// <06B56026> ../box3d/include/box3d/math_functions.h:945
bool b3IsValidAABB(b3AABB)
{
} /* size: 0 */

// <009DC6FA> ../box3d/include/box3d/math_functions.h:957
void b3SetLengthUnitsPerMeter(float)
{
} /* size: 0 */

// <00CB25C0> ../box3d/include/box3d/math_functions.h:976
inline b3Vec3& operator+=(b3Vec3& a, b3Vec3 b)
{
} /* size: 0 */

// <06B3944E> ../box3d/include/box3d/math_functions.h:982
inline b3Vec3& operator-=(b3Vec3& a, b3Vec3 b)
{
} /* size: 0 */

// <06B72824> ../box3d/include/box3d/math_functions.h:988
inline b3Vec3& operator*=(b3Vec3& a, float s)
{
} /* size: 0 */

// <00A17134> ../box3d/include/box3d/math_functions.h:1019
inline b3Vec3 operator-(b3Vec3 a, b3Vec3 b)
{
} /* size: 0 */

// <00A17106> ../box3d/include/box3d/math_functions.h:1040
inline b3Matrix3 operator+(b3Matrix3 a, b3Matrix3 b)
{
} /* size: 0 */


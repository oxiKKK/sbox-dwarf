
//
// src/math_internal.h
//
//	referenced by: libengine2.so
//
//	functions: 18
//	structs: 4
//

// <06BF4F2F> src/math_internal.h:22
// member variables: 2
// struct size: 16
struct b3Matrix2 {
	b3Vec2 cx; /* 0 8 */
	b3Vec2 cy; /* 8 8 */
};

// <06B5F736> src/math_internal.h:27
// member variables: 5
// struct size: 52
struct b3Triangle {
	b3Vec3 vertices[3]; /* 0 36 */
	int i1; /* 36 4 */
	int i2; /* 40 4 */
	int i3; /* 44 4 */
	int flags; /* 48 4 */
};

// <06C9FB87> src/math_internal.h:38
inline float b3Dot2(b3Vec2 v1, b3Vec2 v2)
{
} /* size: 0 */

// <06C9FB66> src/math_internal.h:43
inline float b3Length2(b3Vec2 v)
{
} /* size: 0 */

// <06C9FB45> src/math_internal.h:48
inline float b3LengthSquared2(b3Vec2 v)
{
} /* size: 0 */

// <06C68943> src/math_internal.h:119
// variables: 2
inline b3Quat b3IntegrateRotation(b3Quat q1, b3Vec3 deltaRotation)
{
	b3Quat qd; // 122
	b3Quat q2; // 124
} /* size: 0, variables: 2 */

// <06B432FB> src/math_internal.h:131
// variable: 1
inline float b3ScalarTripleProduct(b3Vec3 a, b3Vec3 b, b3Vec3 c)
{
	b3Vec3 d; // 133
} /* size: 0, variables: 1 */

// <06B432C2> src/math_internal.h:141
// variable: 1
inline float b3GetByIndex(b3Vec3 v, int index)
{
	float temp; // 144
} /* size: 0, variables: 1 */

// <06BB2593> src/math_internal.h:153
inline int b3MajorAxis(b3Vec3 v)
{
} /* size: 0 */

// <06C0FD17> src/math_internal.h:168
inline int b3MaxElementIndex(b3Vec3 v)
{
} /* size: 0 */

// <06D2A9C7> src/math_internal.h:173
// variable: 1
inline b3Vec2 b3MulMV2(b3Matrix2 m, b3Vec2 a)
{
	b3Vec2 b; // 175
} /* size: 0, variables: 1 */

// <06C04BBE> src/math_internal.h:187
inline float b3Det2(b3Matrix2 m)
{
} /* size: 0 */

// <06D2A96B> src/math_internal.h:192
// variables: 2
inline b3Matrix2 b3Invert2(b3Matrix2 m)
{
	float det; // 194
	{
		float invDet; // 197
	}
} /* size: 0, variables: 1 */

// <06C04B79> src/math_internal.h:208
// variables: 2
inline b3Vec2 b3Solve2(b3Matrix2 m, b3Vec2 b)
{
	float det; // 210
	{
		float invDet; // 213
	}
} /* size: 0, variables: 1 */

// <06BB2531> src/math_internal.h:230
// variables: 3
inline float b3SignedVolume(b3Vec3 v1, b3Vec3 v2, b3Vec3 v3, b3Vec3 p)
{
	b3Vec3 e1; // 232
	b3Vec3 e2; // 233
	b3Vec3 n; // 234
} /* size: 0, variables: 3 */

// <06CE8D5C> src/math_internal.h:239
inline bool b3IsWithinSegments(const b3ClosestApproachResult* result)
{
} /* size: 0 */

// <06B984FE> src/math_internal.h:245
// member variables: 2
// struct size: 16
typedef struct {
	b3Vec3 point; /* 0 12 */
	b3TriangleFeature feature; /* 12 4 */
} b3TrianglePoint;

// <06B06060> src/math_internal.h:255
// member variables: 2
// struct size: 8
struct b3ShapeExtent {
	float minExtent; /* 0 4 */
	float maxExtent; /* 4 4 */
};

// <06B28CBD> src/math_internal.h:266
b3Matrix3 b3SphereInertia(float, float)
{
} /* size: 0 */

// <06B28C96> src/math_internal.h:267
b3Matrix3 b3CylinderInertia(float, float, float)
{
} /* size: 0 */

// <06B6B9A2> src/math_internal.h:268
b3Matrix3 b3BoxInertia(float, b3Vec3, b3Vec3)
{
} /* size: 0 */

// <06B72278> src/math_internal.h:273
// variables: 2
// function calls: 11
b3Matrix3 b3TransformInertia(b3Transform transform, b3Matrix3 centralInertia, float mass)
{
	b3Matrix3 rotationMatrix; // 275
	b3Matrix3 inertia; // 276
	b3MakeMatrixFromQuat(b3Quat q); // 275
	b3MulMV(b3Matrix3 m,
		b3Vec3 a);  // 634
	b3MulMV(b3Matrix3 m,
		b3Vec3 a);  // 635
	b3MulMV(b3Matrix3 m,
		b3Vec3 a);  // 636
	b3MulMM(b3Matrix3 a,
		b3Matrix3 b);  // 276
	b3Transpose(b3Matrix3 m); // 276
	b3MulMV(b3Matrix3 m,
		b3Vec3 a);  // 634
	b3MulMV(b3Matrix3 m,
		b3Vec3 a);  // 635
	b3MulMV(b3Matrix3 m,
		b3Vec3 a);  // 636
	b3MulMM(b3Matrix3 a,
		b3Matrix3 b);  // 276
	b3AddMM(b3Matrix3 a,
		b3Matrix3 b);  // 277
} /* size: 1142, variables: 2, inline expansions: 11 (1756 bytes) */


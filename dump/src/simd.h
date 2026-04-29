
//
// src/simd.h
//
//	referenced by: libengine2.so
//
//	functions: 18
//	union: 1
//

// <06B9FE85> src/simd.h:15
union b3128 {
	b3V32 v; /* 0 16 */
	float f[4]; /* 0 16 */
};

// <06B5A8DF> src/simd.h:62
// variables: 2
inline b3V32 b3LoadV(const float* src)
{
	const __m128i  masK3; // 64
	b3V32 a; // 67
} /* size: 0, variables: 2 */

// <06B66C4B> src/simd.h:76
inline float b3GetXV(b3V32 a)
{
} /* size: 0 */

// <06B66C2A> src/simd.h:86
inline float b3GetZV(b3V32 a)
{
} /* size: 0 */

// <06BB21B6> src/simd.h:91
// variable: 1
inline float b3GetV(b3V32 a, int index)
{
	union b3128 b; // 93
} /* size: 0, variables: 1 */

// <06B66C09> src/simd.h:98
inline b3V32 b3SplatV(float x)
{
} /* size: 0 */

// <06B5A8B2> src/simd.h:103
// variable: 1
inline b3V32 b3AbsV(b3V32 a)
{
	b3V32 zero; // 106
} /* size: 0, variables: 1 */

// <06B66BDE> src/simd.h:110
inline b3V32 b3MinV(b3V32 a, b3V32 b)
{
} /* size: 0 */

// <06B66BB3> src/simd.h:115
inline b3V32 b3MaxV(b3V32 a, b3V32 b)
{
} /* size: 0 */

// <06B5A857> src/simd.h:120
// variables: 4
inline b3V32 b3CrossV(b3V32 a, b3V32 b)
{
	b3V32 yzX1; // 122
	b3V32 zxY1; // 123
	b3V32 yzX2; // 124
	b3V32 zxY2; // 125
} /* size: 0, variables: 4 */

// <06B5A7FC> src/simd.h:130
// variables: 4
inline b3V32 b3ModifiedCrossV(b3V32 a, b3V32 b)
{
	b3V32 yzX1; // 132
	b3V32 zxY1; // 133
	b3V32 yzX2; // 134
	b3V32 zxY2; // 135
} /* size: 0, variables: 4 */

// <06C53591> src/simd.h:140
// variable: 1
inline bool b3AnyLess3V(b3V32 a, b3V32 b)
{
	b3V32 v; // 142
} /* size: 0, variables: 1 */

// <06C5355C> src/simd.h:146
// variable: 1
inline bool b3AnyLessEq3V(b3V32 a, b3V32 b)
{
	b3V32 v; // 148
} /* size: 0, variables: 1 */

// <06C53527> src/simd.h:152
// variable: 1
inline bool b3AnyGreater3V(b3V32 a, b3V32 b)
{
	b3V32 v; // 154
} /* size: 0, variables: 1 */

// <06B5A7C7> src/simd.h:158
// variable: 1
inline bool b3AllLessEq3V(b3V32 a, b3V32 b)
{
	b3V32 v; // 160
} /* size: 0, variables: 1 */

// <06BB1FCE> src/simd.h:334
// variable: 1
inline bool b3TestBoundsOverlap(b3V32 nodeMin1, b3V32 nodeMax1, b3V32 nodeMin2, b3V32 nodeMax2)
{
	b3V32 separation; // 336
} /* size: 0, variables: 1 */

// <06B5A754> src/simd.h:341
// variables: 3
inline bool b3TestBoundsRayOverlap(b3V32 nodeMin, b3V32 nodeMax, b3V32 rayStart, b3V32 rayDelta)
{
	b3V32 nodeCenter; // 344
	b3V32 nodeExtent; // 345
	b3V32 edgeSeparation; // 351
} /* size: 0, variables: 3 */

// <06B60019> src/simd.h:355
bool b3TestBoundsTriangleOverlap(b3V32, b3V32, b3V32, b3V32, b3V32)
{
} /* size: 0 */

// <06B600A3> src/simd.h:356
float b3IntersectRayTriangle(b3V32, b3V32, b3V32, b3V32, b3V32)
{
} /* size: 0 */


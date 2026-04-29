
//
// src/distance.cpp
//
//	referenced by: libengine2.so
//
//	functions: 12
//

// <06B430BD> src/distance.cpp:10
// variables: 7
// function calls: 3
int b3GetProxySupport(const b3ShapeProxy* proxy, b3Vec3 axis)
{
	int count; // 12
	const b3Vec3* points; // 13
	b3Vec3 origin; // 21
	int maxIndex; // 22
	float maxProjection; // 23
	{
		int index; // 25
		{
			float projection; // 28
			b3Sub(b3Vec3 a,
				b3Vec3 b);  // 1021
			operator-(b3Vec3 a,
					b3Vec3 b);  // 28
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 28
		}
	}
} /* size: 0, variables: 5 */

// <06B42EC9> src/distance.cpp:39
// variables: 5
// function calls: 3
int b3GetPointSupport(const b3Vec3* points, int count, b3Vec3 axis)
{
	b3Vec3 origin; // 47
	int maxIndex; // 48
	float maxProjection; // 49
	{
		int index; // 51
		{
			float projection; // 54
			b3Sub(b3Vec3 a,
				b3Vec3 b);  // 1021
			operator-(b3Vec3 a,
					b3Vec3 b);  // 54
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 54
		}
	}
} /* size: 0, variables: 3 */

// <06B42ACA> src/distance.cpp:67
// variables: 13
// function calls: 11
bool b3IntersectRayAndAABB(b3Vec3 lowerBound, b3Vec3 upperBound, b3Vec3 p1, b3Vec3 p2, float* minFraction, float* maxFraction)
{
	b3Vec3 d; // 71
	float rayLength; // 72
	b3Vec3 rayDir; // 91
	float tMin; // 94
	float tMax; // 95
	{
		int i; // 98
		{
			float rayComponent; // 100
			float rayStart; // 101
			float boxMin; // 102
			float boxMax; // 103
			{
				float t1; // 116
				float t2; // 117
				{
					float temp; // 122
				}
			}
			b3AbsFloat(float a); // 105
			b3GetByIndex(b3Vec3 v,
					int index);  // 100
			b3GetByIndex(b3Vec3 v,
					int index);  // 101
			b3GetByIndex(b3Vec3 v,
					int index);  // 102
			b3GetByIndex(b3Vec3 v,
					int index);  // 103
		}
	}
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 71
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 220
	b3Length(b3Vec3 v); // 72
	b3MulSV(float s,
		b3Vec3 a);  // 91
	b3ClampFloat(float a,
			float lower,
			float upper);  // 146
	b3ClampFloat(float a,
			float lower,
			float upper);  // 147
} /* size: 708, variables: 5, inline expansions: 6 (173 bytes) */

// <06B42A85> src/distance.cpp:214
// variables: 2
void b3BarycentricCoordinates(float* out, b3Vec3 a, b3Vec3 b)
{
	b3Vec3 ab; // 216
	float divisor; // 219
} /* size: 0, variables: 2 */

// <06B427BD> src/distance.cpp:226
// variables: 7
// function calls: 9
void b3BarycentricCoordinates(float* out, b3Vec3 a, b3Vec3 b, b3Vec3 c)
{
	b3Vec3 ab; // 228
	b3Vec3 ac; // 229
	b3Vec3 bXC; // 231
	b3Vec3 cXA; // 232
	b3Vec3 aXB; // 233
	b3Vec3 abXAc; // 235
	float divisor; // 238
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 229
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 228
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 235
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 231
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 232
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 233
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 240
} /* size: 433, variables: 7, inline expansions: 9 (475 bytes) */

// <06B42742> src/distance.cpp:246
// variables: 5
void b3BarycentricCoordinates(float* out, b3Vec3 a, b3Vec3 b, b3Vec3 c, b3Vec3 d)
{
	b3Vec3 ab; // 248
	b3Vec3 ac; // 249
	b3Vec3 ad; // 250
	float divisor; // 253
	float sign; // 255
} /* size: 0, variables: 5 */

// <06B4222C> src/distance.cpp:263
// variables: 11
// function calls: 17
float b3GetMetric(const b3Simplex* simplex)
{
	int count; // 265
	const b3SimplexVertex* vertices; // 268
	{
		b3Vec3 a; // 279
		b3Vec3 b; // 280
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 232
		b3Distance(b3Vec3 v1,
				b3Vec3 v2);  // 281
	}
	{
		b3Vec3 a; // 286
		b3Vec3 b; // 287
		b3Vec3 c; // 288
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 289
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 289
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 289
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 289
	}
	{
		b3Vec3 a; // 294
		b3Vec3 b; // 295
		b3Vec3 c; // 296
		b3Vec3 d; // 297
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 298
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 298
		b3ScalarTripleProduct(b3Vec3 a,
					b3Vec3 b,
					b3Vec3 c);  // 298
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 298
	}
} /* size: 0, variables: 2 */

// <06B421E7> src/distance.cpp:374
// variables: 2
void b3WriteCache(b3SimplexCache* cache, const b3Simplex* simplex)
{
	int count; // 376
	{
		int index; // 379
	}
} /* size: 0, variables: 1 */

// <06B42169> src/distance.cpp:397
// variables: 8
bool b3Solve2(b3Simplex* simplex)
{
	b3SimplexVertex* vs; // 399
	b3Vec3 a; // 408
	b3Vec3 b; // 409
	b3Vec3 ab; // 410
	float divisor; // 413
	float u; // 415
	float v; // 416
	float denominator; // 448
} /* size: 0, variables: 8 */

// <06B420A3> src/distance.cpp:455
// variables: 12
bool b3Solve3(b3Simplex* simplex)
{
	b3SimplexVertex* vs; // 457
	b3SimplexVertex v1; // 461
	b3SimplexVertex v2; // 462
	b3SimplexVertex v3; // 463
	float wAB; // 466
	float wBC; // 466
	float wCA; // 466
	float wABC; // 505
	float divisor; // 572
	{
		float divisor; // 517
	}
	{
		float divisor; // 538
	}
	{
		float divisor; // 559
	}
} /* size: 0, variables: 9 */

// <06B41EBD> src/distance.cpp:586
// variables: 27
bool b3Solve4(b3Simplex* simplex)
{
	b3SimplexVertex* vs; // 588
	b3SimplexVertex vertexA; // 592
	b3SimplexVertex vertexB; // 593
	b3SimplexVertex vertexC; // 594
	b3SimplexVertex vertexD; // 595
	float wAB; // 598
	float wAC; // 598
	float wAD; // 598
	float wBC; // 598
	float wCD; // 598
	float wDB; // 598
	float wACB; // 655
	float wABD; // 655
	float wADC; // 655
	float wBCD; // 655
	float wABCD; // 788
	float divisor; // 884
	{
		float divisor; // 670
	}
	{
		float divisor; // 691
	}
	{
		float divisor; // 712
	}
	{
		float divisor; // 733
	}
	{
		float divisor; // 754
	}
	{
		float divisor; // 775
	}
	{
		float divisor; // 801
	}
	{
		float divisor; // 824
	}
	{
		float divisor; // 847
	}
	{
		float divisor; // 870
	}
} /* size: 0, variables: 17 */

// <06B41478> src/distance.cpp:1040
// variables: 2
// function calls: 46
void b3ComputeWitnessPoints(const b3Simplex* simplex, b3Vec3* vertexA, b3Vec3* vertexB)
{
	const b3SimplexVertex* vs; // 1042
	int count; // 1043
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1054
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1054
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 1054
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1055
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1055
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 1055
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1065
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1065
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1065
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1065
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 1065
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 1065
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 1065
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1059
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1059
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1059
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 1059
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 1059
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1060
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1060
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1060
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 1060
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 1060
} /* size: 0, variables: 2, inline expansions: 46 (872 bytes) */


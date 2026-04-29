
//
// src/capsule.cpp
//
//	referenced by: libengine2.so
//
//	functions: 7
//

// <06B29D40> src/capsule.cpp:65
// variables: 6
// function calls: 32
b3AABB b3ComputeSweptCapsuleAABB(const b3Capsule* shape, b3Transform xf1, b3Transform xf2)
{
	b3Vec3 r; // 67
	b3Vec3 a; // 68
	b3Vec3 b; // 69
	b3Vec3 c; // 70
	b3Vec3 d; // 71
	b3AABB aabb; // 73
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
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
			b3Vec3 v);  // 68
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 566
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 567
	b3TransformPoint(b3Transform t,
			b3Vec3 v);  // 69
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
			b3Vec3 v);  // 70
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
			b3Vec3 v);  // 71
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 74
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 75
} /* size: 1155, variables: 6, inline expansions: 32 (2987 bytes) */

// <06B29CD6> src/capsule.cpp:80
// variables: 3
b3CastOutput b3CastRayAgainstCap(b3Vec3 p, b3Vec3 q, b3Vec3 c, float r, float maxFraction)
{
	b3Sphere sphere; // 82
	b3RayCastInput input; // 83
	b3CastOutput output; // 89
} /* size: 0, variables: 3 */

// <06B299EF> src/capsule.cpp:93
// variable: 1
// function calls: 12
b3CastOutput b3TransformCapsuleResult(const b3CastOutput& result, const b3Quat& rotation, b3Vec3 translation)
{
	b3CastOutput out; // 95
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 96
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 96
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 97
} /* size: 536, variables: 1, inline expansions: 12 (878 bytes) */

// <06B2991F> src/capsule.cpp:101
// variables: 3
bool b3OverlapCapsule(const b3Capsule* shape, b3Transform shapeTransform, const b3ShapeProxy* proxy)
{
	b3DistanceInput input; // 103
	b3SimplexCache cache; // 110
	b3DistanceOutput output; // 111
} /* size: 216, variables: 3 */

// <06B28E9B> src/capsule.cpp:118
// variables: 24
// function calls: 37
b3CastOutput b3RayCastCapsule(const b3Capsule* shape, const b3RayCastInput* input)
{
	b3Vec3 c1; // 120
	b3Vec3 c2; // 121
	float r; // 122
	b3CastOutput output; // 125
	float height; // 128
	b3Quat rotation; // 136
	b3Vec3 offset; // 137
	b3Vec3 a; // 140
	b3Vec3 b; // 141
	b3Vec3 ab; // 142
	b3Vec3 p; // 145
	b3Vec3 q; // 146
	b3Vec3 pq; // 147
	float k1; // 150
	float k3; // 153
	float k2; // 191
	float discriminant; // 193
	float t; // 200
	b3Vec3 c; // 210
	b3Vec3 ac; // 213
	float s; // 216
	{
		b3Sphere sphere; // 131
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 131
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 131
	}
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 220
	b3Length(b3Vec3 v); // 232
	b3Distance(b3Vec3 v1,
			b3Vec3 v2);  // 128
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 136
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 136
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 145
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 400
	b3MulSub(b3Vec3 a,
		float s,
		b3Vec3 b);  // 401
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 403
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 402
	b3InvRotateVector(b3Quat q,
				b3Vec3 v);  // 145
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 400
	b3MulSub(b3Vec3 a,
		float s,
		b3Vec3 b);  // 401
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 402
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 403
	b3InvRotateVector(b3Quat q,
				b3Vec3 v);  // 146
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 146
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 147
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 210
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 210
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 216
	b3CastRayAgainstCap(b3Vec3 p,
				b3Vec3 q,
				b3Vec3 c,
				float r,
				float maxFraction);  // 182
	b3CastRayAgainstCap(b3Vec3 p,
				b3Vec3 q,
				b3Vec3 c,
				float r,
				float maxFraction);  // 228
	b3CastRayAgainstCap(b3Vec3 p,
				b3Vec3 q,
				b3Vec3 c,
				float r,
				float maxFraction);  // 221
	b3CastRayAgainstCap(b3Vec3 p,
				b3Vec3 q,
				b3Vec3 c,
				float r,
				float maxFraction);  // 175
	{
		float s; // 247
		b3Vec3 u; // 248
	}
	b3Normalize(b3Vec3 a); // 243
} /* size: 1834, variables: 21, inline expansions: 33 (1538 bytes) */

// <06B28DFB> src/capsule.cpp:249
// variables: 2
b3CastOutput b3ShapeCastCapsule(const b3Capsule* capsule, const b3ShapeCastInput* input)
{
	b3ShapeCastPairInput pairInput; // 251
	b3CastOutput output; // 260
} /* size: 176, variables: 2 */

// <06B28CDF> src/capsule.cpp:264
// variables: 5
int b3CollideMoverAndCapsule(b3PlaneResult* result, const b3Capsule* shape, const b3Capsule* mover)
{
	b3DistanceInput distanceInput; // 266
	float totalRadius; // 273
	b3SimplexCache cache; // 275
	b3DistanceOutput distanceOutput; // 276
	{
		b3Plane plane; // 280
	}
} /* size: 0, variables: 4 */


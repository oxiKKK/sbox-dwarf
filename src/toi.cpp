
//
// src/toi.cpp
//
//	referenced by: libengine2.so
//
//	functions: 7
//	struct: 1
//

// <06CAB108> src/toi.cpp:20
// variables: 22
// function calls: 18
b3CastOutput b3DefaultShapeCastFcn(const b3ShapeCastPairInput* input)
{
	float linearSlop; // 29
	float totalRadius; // 30
	float target; // 31
	float tolerance; // 32
	b3SimplexCache cache; // 37
	float alpha; // 39
	b3DistanceInput distanceInput; // 41
	b3Vec3 delta2; // 48
	b3DistanceOutput distanceOutput; // 49
	b3CastOutput output; // 50
	int iteration; // 53
	const int  maxIterations; // 54
	{
		float denominator; // 138
		{
			b3Vec3 c1; // 76
			b3Vec3 c2; // 77
			b3MulAdd(b3Vec3 a,
				float s,
				b3Vec3 b);  // 76
			b3MulAdd(b3Vec3 a,
				float s,
				b3Vec3 b);  // 77
			b3Lerp(b3Vec3 a,
				b3Vec3 b,
				float alpha);  // 78
		}
		{
			int i; // 87
			{
				b3Vec3 p; // 89
			}
		}
		{
			int i; // 94
			{
				b3Vec3 p; // 96
			}
		}
		{
			b3Transform xfA; // 102
		}
		{
			b3Transform xfB; // 107
		}
		{
			b3Vec3 t; // 113
		}
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 153
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 288
		b3AbsFloat(float a); // 289
		b3IsNormalized(b3Vec3 a); // 85
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 127
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 127
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 288
		b3AbsFloat(float a); // 289
		b3IsNormalized(b3Vec3 a); // 135
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 138
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 153
	}
} /* size: 0, variables: 12 */

// <06CAACD1> src/toi.cpp:168
int b3UniqueCount(int vertexCount, const uint8_t* vertices)
{
} /* size: 0 */

// <06CAA950> src/toi.cpp:210
// variables: 5
// function calls: 13
bool b3CheckFastEdges(const b3Transform& transform1, b3Vec3 localEdge1, const b3Transform& transform2, b3Vec3 localEdge2, b3Vec3 axis0)
{
	b3Vec3 edge1; // 215
	b3Vec3 edge2; // 216
	b3Vec3 axis; // 217
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
			b3Vec3 v);  // 215
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
			b3Vec3 v);  // 216
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 217
	{
		float s; // 247
		b3Vec3 u; // 248
	}
	b3Normalize(b3Vec3 a); // 218
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 220
} /* size: 606, variables: 3, inline expansions: 13 (932 bytes) */

// <06CA30DA> src/toi.cpp:232
// member variables: 7
// struct size: 184
struct b3SeparationFunction {
	const b3ShapeProxy * proxyA; /* 0 8 */
	const b3ShapeProxy * proxyB; /* 8 8 */
	b3Sweep sweepA; /* 16 68 */
	b3Sweep sweep2; /* 84 68 */
	b3Vec3 witnessA; /* 152 12 */
	b3Vec3 witnessB; /* 164 12 */
	b3SeparationType type; /* 176 4 */
};

// <06CA700E> src/toi.cpp:243
// variables: 55
// function calls: 246
b3SeparationFunction b3MakeSeparationFunction(const b3Sweep& sweep1, const b3ShapeProxy* proxy1, const b3Sweep& sweep2, const b3ShapeProxy* proxy2, const b3DistanceOutput& query, b3SimplexCache cache, float beta)
{
	b3SeparationFunction fcn; // 249
	int uniqueCount1; // 256
	int uniqueCount2; // 257
	b3Transform transform1; // 259
	b3Transform transform2; // 260
	{
		b3Vec3 vertex1; // 266
		b3Vec3 vertex2; // 267
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
				b3Vec3 v);  // 566
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 567
		b3TransformPoint(b3Transform t,
				b3Vec3 v);  // 266
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
				b3Vec3 v);  // 566
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 567
		b3TransformPoint(b3Transform t,
				b3Vec3 v);  // 267
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 270
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 270
	}
	{
		b3Vec3 vertexA1; // 280
		b3Vec3 vertexA2; // 281
		b3Vec3 edgeA; // 282
		b3Vec3 vertexB1; // 284
		b3Vec3 vertexB2; // 285
		b3Vec3 edgeB; // 286
		b3Vec3 axis; // 288
		float length; // 289
		const float  kTolerance; // 292
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
				b3Vec3 v);  // 280
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
				b3Vec3 v);  // 281
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 282
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 282
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
				b3Vec3 v);  // 284
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
				b3Vec3 v);  // 285
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 286
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 286
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 288
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 289
		b3MulSV(float s,
			b3Vec3 a);  // 990
		operator*=(b3Vec3& a,
				float s);  // 302
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 303
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 303
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
					b3Vec3 v);  // 310
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
					b3Vec3 v);  // 310
		b3Neg(b3Vec3 a); // 996
		operator-(b3Vec3 a); // 305
		b3Neg(b3Vec3 a); // 996
		operator-(b3Vec3 a); // 306
	}
	{
		b3Vec3 vertexA1; // 340
		b3Vec3 vertexA2; // 341
		b3Vec3 vertexA3; // 342
		b3Vec3 axis; // 343
		b3Vec3 point1; // 346
		b3Vec3 point2; // 347
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
				b3Vec3 v);  // 340
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 567
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
		b3TransformPoint(b3Transform t,
				b3Vec3 v);  // 341
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
				b3Vec3 v);  // 342
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 343
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 343
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 343
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 346
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 346
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 344
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 346
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
					b3Vec3 v);  // 355
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
					b3Vec3 v);  // 572
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 572
		b3InvTransformPoint(b3Transform t,
					b3Vec3 v);  // 356
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
				b3Vec3 v);  // 347
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 349
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 349
		b3Neg(b3Vec3 a); // 996
		operator-(b3Vec3 a); // 351
	}
	{
		b3Vec3 vertexB1; // 360
		b3Vec3 vertexB2; // 361
		b3Vec3 vertexB3; // 362
		b3Vec3 axis; // 363
		b3Vec3 point1; // 366
		b3Vec3 point2; // 367
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
				b3Vec3 v);  // 360
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 567
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
		b3TransformPoint(b3Transform t,
				b3Vec3 v);  // 361
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
				b3Vec3 v);  // 362
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 363
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 363
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 363
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 367
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 367
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 367
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 364
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
					b3Vec3 v);  // 375
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 572
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
					b3Vec3 v);  // 572
		b3InvTransformPoint(b3Transform t,
					b3Vec3 v);  // 376
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
				b3Vec3 v);  // 366
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 369
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 369
		b3Neg(b3Vec3 a); // 996
		operator-(b3Vec3 a); // 371
	}
	{
		b3Vec3 vertexA1; // 390
		b3Vec3 vertexA2; // 391
		b3Vec3 edgeA; // 392
		b3Vec3 vertexB1; // 404
		b3Vec3 vertexB2; // 405
		b3Vec3 edgeB; // 406
		b3Vec3 axis; // 408
		float length; // 409
		const float  kTolerance; // 412
		{
			uint8_t temp; // 384
		}
		{
			uint8_t temp; // 396
		}
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
				b3Vec3 v);  // 390
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
				b3Vec3 v);  // 391
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 392
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 392
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
				b3Vec3 v);  // 404
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
				b3Vec3 v);  // 405
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 406
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 406
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 408
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 409
		b3MulSV(float s,
			b3Vec3 a);  // 990
		operator*=(b3Vec3& a,
				float s);  // 422
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 423
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 423
		b3Neg(b3Vec3 a); // 996
		operator-(b3Vec3 a); // 425
		b3Neg(b3Vec3 a); // 996
		operator-(b3Vec3 a); // 426
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
					b3Vec3 v);  // 431
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
					b3Vec3 v);  // 431
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 417
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 417
	}
} /* size: 0, variables: 5 */

// <06CA6E8F> src/toi.cpp:458
// variables: 22
float b3FindMinSeparation(b3SeparationFunction* fcn, int& index1, int& index2, float beta)
{
	b3Transform transform1; // 460
	b3Transform transform2; // 461
	{
		b3Vec3 axis; // 467
		b3Vec3 axis1; // 469
		b3Vec3 point1; // 471
		b3Vec3 axis2; // 473
		b3Vec3 point2; // 475
	}
	{
		b3Vec3 edge1; // 483
		b3Vec3 edge2; // 484
		b3Vec3 axis; // 485
		b3Vec3 axis1; // 489
		b3Vec3 point1; // 491
		b3Vec3 axis2; // 493
		b3Vec3 point2; // 495
	}
	{
		b3Vec3 axis; // 503
		b3Vec3 point1; // 506
		b3Vec3 axis2; // 508
		b3Vec3 point2; // 510
	}
	{
		b3Vec3 axis; // 518
		b3Vec3 axis1; // 520
		b3Vec3 point1; // 522
		b3Vec3 point2; // 525
	}
} /* size: 0, variables: 2 */

// <06CA5954> src/toi.cpp:539
// variables: 18
// function calls: 90
float b3Evaluate(b3SeparationFunction* fcn, int index1, int index2, float beta)
{
	b3Transform transform1; // 541
	b3Transform transform2; // 542
	{
		b3Vec3 axis; // 548
		b3Vec3 point1; // 550
		b3Vec3 point2; // 551
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
				b3Vec3 v);  // 550
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
				b3Vec3 v);  // 551
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 553
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 553
	}
	{
		b3Vec3 edge1; // 559
		b3Vec3 edge2; // 560
		b3Vec3 axis; // 561
		b3Vec3 point1; // 564
		b3Vec3 point2; // 565
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
				b3Vec3 v);  // 559
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
				b3Vec3 v);  // 560
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 561
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 562
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
				b3Vec3 v);  // 564
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
				b3Vec3 v);  // 565
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 567
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 567
	}
	{
		b3Vec3 axis; // 573
		b3Vec3 point1; // 575
		b3Vec3 point2; // 576
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
				b3Vec3 v);  // 573
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
				b3Vec3 v);  // 575
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
				b3Vec3 v);  // 576
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 578
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 578
	}
	{
		b3Vec3 axis; // 584
		b3Vec3 point1; // 586
		b3Vec3 point2; // 587
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
				b3Vec3 v);  // 584
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
				b3Vec3 v);  // 587
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
				b3Vec3 v);  // 586
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 589
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 589
	}
} /* size: 0, variables: 2 */

// <06CA58E4> src/toi.cpp:601
// variables: 5
void b3ForceFixedAxis(b3SeparationFunction* fcn, float beta)
{
	b3Transform transform1; // 605
	b3Transform transform2; // 606
	b3Vec3 edge1; // 608
	b3Vec3 edge2; // 609
	b3Vec3 axis; // 610
} /* size: 0, variables: 5 */


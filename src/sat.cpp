
//
// src/sat.cpp
//
//	referenced by: libengine2.so
//
//	functions: 16
//

// <06C2AD47> src/sat.cpp:12
// variable: 1
// function calls: 4
float b3Project(const b3Plane& plane, const b3Hull* hull)
{
	b3Vec3 support; // 14
	b3Neg(b3Vec3 a); // 996
	operator-(b3Vec3 a); // 14
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 818
	b3PlaneSeparation(b3Plane plane,
				b3Vec3 point);  // 15
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <06C2A815> src/sat.cpp:18
// variables: 10
// function calls: 19
b3FaceQuery b3QueryFaceDirectionHullAndCapsule(const b3Hull* hull, const b3Capsule* capsule, b3Transform capsuleTransform)
{
	int maxFaceIndex; // 20
	int maxVertexIndex; // 21
	float maxFaceSeparation; // 22
	const b3Plane* planes; // 23
	b3Vec3 capsulePoints; // 25
	{
		int faceIndex; // 30
		{
			b3Plane plane; // 32
			int vertexIndex; // 34
			b3Vec3 support; // 35
			float separation; // 36
			b3Neg(b3Vec3 a); // 996
			operator-(b3Vec3 a); // 34
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 818
			b3PlaneSeparation(b3Plane plane,
						b3Vec3 point);  // 36
		}
	}
	b3GetHullPlanes(const b3Hull* hull); // 23
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
			b3Vec3 v);  // 27
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
			b3Vec3 v);  // 26
} /* size: 882, variables: 5, inline expansions: 15 (1038 bytes) */

// <06C2A2F3> src/sat.cpp:52
// variables: 11
// function calls: 21
b3FaceQuery b3QueryFaceDirections(const b3Hull* hullA, const b3Hull* hullB, const b3Transform& relativeTransform)
{
	b3Transform transform; // 55
	const b3Plane* planesA; // 56
	const b3Vec3* pointsB; // 57
	int maxFaceIndex; // 59
	int maxVertexIndex; // 60
	float maxFaceSeparation; // 61
	{
		int faceIndex; // 63
		{
			b3Plane plane; // 65
			int vertexIndex; // 67
			b3Vec3 support; // 68
			float separation; // 69
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
					b3Vec3 v);  // 802
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 803
			b3TransformPlane(b3Transform transform,
					b3Plane plane);  // 65
			b3Neg(b3Vec3 a); // 996
			operator-(b3Vec3 a); // 67
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 818
			b3PlaneSeparation(b3Plane plane,
						b3Vec3 point);  // 69
		}
	}
	b3Neg(b3Vec3 a); // 551
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
				b3Vec3 v);  // 551
	b3Conjugate(b3Quat q); // 552
	b3InvertTransform(b3Transform t); // 55
	b3GetHullPlanes(const b3Hull* hull); // 56
	b3GetHullPoints(const b3Hull* hull); // 57
} /* size: 941, variables: 6, inline expansions: 10 (741 bytes) */

// <06C2A11A> src/sat.cpp:101
// variables: 4
// function calls: 4
bool b3IsMinkowskiFace(b3Vec3 a, b3Vec3 b, b3Vec3 bxa, b3Vec3 c, b3Vec3 d, b3Vec3 dxc)
{
	float cba; // 105
	float dba; // 106
	float adc; // 107
	float bdc; // 108
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 105
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 106
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 107
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 108
} /* size: 222, variables: 4, inline expansions: 4 (116 bytes) */

// <06C29C0C> src/sat.cpp:113
// variables: 6
// function calls: 22
float b3EdgeEdgeSeparation(b3Vec3 p1, b3Vec3 e1, b3Vec3 c1, b3Vec3 p2, b3Vec3 e2, b3Vec3 c2)
{
	b3Vec3 u; // 116
	float length; // 117
	const float  kTolerance; // 120
	b3Vec3 n; // 131
	float sign1; // 138
	float sign2; // 139
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 116
	b3LengthSquared(b3Vec3 a); // 121
	b3LengthSquared(b3Vec3 a); // 121
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 220
	b3Length(b3Vec3 v); // 117
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 131
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 138
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 138
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 139
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 139
	b3AbsFloat(float a); // 140
	b3AbsFloat(float a); // 140
	b3Neg(b3Vec3 a); // 996
	operator-(b3Vec3 a); // 151
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 156
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 156
	b3Neg(b3Vec3 a); // 996
	operator-(b3Vec3 a); // 144
} /* size: 658, variables: 6, inline expansions: 22 (555 bytes) */

// <06C29487> src/sat.cpp:159
// variables: 20
// function calls: 28
b3EdgeQuery b3QueryEdgeDirectionHullAndCapsule(const b3Hull* hull, const b3Capsule* capsule, b3Transform capsuleTransform)
{
	float maxSeparation; // 162
	int maxIndex1; // 163
	int maxIndex2; // 164
	b3Vec3 p1; // 167
	b3Vec3 q1; // 168
	b3Vec3 e1; // 169
	const b3HullHalfEdge* edges; // 171
	const b3Vec3* points; // 172
	const b3Plane* planes; // 173
	{
		int index; // 175
		{
			const b3HullHalfEdge* edge; // 177
			const b3HullHalfEdge* twin; // 178
			b3Vec3 p2; // 181
			b3Vec3 q2; // 182
			b3Vec3 e2; // 183
			b3Vec3 u2; // 185
			b3Vec3 v2; // 186
			{
				b3Vec3 c1; // 192
				b3Vec3 c2; // 193
				float separation; // 194
				b3MulSV(float s,
					b3Vec3 a);  // 1001
				operator*(float s,
						b3Vec3 a);  // 192
				b3Add(b3Vec3 a,
					b3Vec3 b);  // 1016
				operator+(b3Vec3 a,
						b3Vec3 b);  // 192
			}
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 93
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 94
			b3IsMinkowskiFace(b3Vec3 a,
						b3Vec3 b,
						b3Vec3 n);  // 188
			b3Sub(b3Vec3 a,
				b3Vec3 b);  // 1021
			operator-(b3Vec3 a,
					b3Vec3 b);  // 183
		}
	}
	b3GetHullEdges(const b3Hull* hull); // 171
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
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
			b3Vec3 v);  // 168
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
			b3Vec3 v);  // 167
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 169
	b3GetHullPoints(const b3Hull* hull); // 172
	b3GetHullPlanes(const b3Hull* hull); // 173
} /* size: 0, variables: 9, inline expansions: 19 (1595 bytes) */

// <06C28ADB> src/sat.cpp:214
// variables: 33
// function calls: 36
b3EdgeQuery b3QueryEdgeDirections(const b3Hull* hullA, const b3Hull* hullB, const b3Transform& relativeTransform)
{
	float maxSeparation; // 217
	int maxIndex1; // 218
	int maxIndex2; // 219
	const b3HullHalfEdge* edgesA; // 221
	const b3Vec3* pointsA; // 222
	const b3Plane* planesA; // 223
	const b3HullHalfEdge* edgesB; // 224
	const b3Vec3* pointsB; // 225
	const b3Plane* planesB; // 226
	b3Transform transform; // 229
	b3Matrix3 matrix; // 230
	{
		int index1; // 232
		{
			const b3HullHalfEdge* edge1; // 234
			const b3HullHalfEdge* twin1; // 235
			b3Vec3 q1; // 238
			b3Vec3 e1; // 239
			b3Vec3 u1; // 242
			b3Vec3 v1; // 243
			{
				int index2; // 245
				{
					const b3HullHalfEdge* edge2; // 247
					const b3HullHalfEdge* twin2; // 248
					b3Vec3 q2; // 251
					b3Vec3 e2; // 252
					b3Vec3 u2; // 254
					b3Vec3 v2; // 255
					bool isMinkowski; // 257
					{
						float cba; // 262
						float dba; // 263
						float adc; // 264
						float bdc; // 265
						b3Dot(b3Vec3 a,
							b3Vec3 b);  // 262
						b3Dot(b3Vec3 a,
							b3Vec3 b);  // 263
						b3Dot(b3Vec3 a,
							b3Vec3 b);  // 264
						b3Dot(b3Vec3 a,
							b3Vec3 b);  // 265
					}
					{
						b3Vec3 c1; // 275
						b3Vec3 c2; // 276
						float separation; // 277
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
								b3Vec3 v);  // 275
					}
					b3Sub(b3Vec3 a,
						b3Vec3 b);  // 1021
					operator-(b3Vec3 a,
							b3Vec3 b);  // 252
				}
			}
			b3MulMV(b3Matrix3 m,
				b3Vec3 a);  // 239
			b3Sub(b3Vec3 a,
				b3Vec3 b);  // 1021
			operator-(b3Vec3 a,
					b3Vec3 b);  // 239
			b3MulMV(b3Matrix3 m,
				b3Vec3 a);  // 240
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 1016
			operator+(b3Vec3 a,
					b3Vec3 b);  // 240
			b3MulMV(b3Matrix3 m,
				b3Vec3 a);  // 242
			b3MulMV(b3Matrix3 m,
				b3Vec3 a);  // 243
		}
	}
	b3GetHullEdges(const b3Hull* hull); // 221
	b3GetHullPoints(const b3Hull* hull); // 225
	b3GetHullPoints(const b3Hull* hull); // 222
	b3GetHullPlanes(const b3Hull* hull); // 223
	b3GetHullEdges(const b3Hull* hull); // 224
	b3GetHullPlanes(const b3Hull* hull); // 226
	b3Neg(b3Vec3 a); // 551
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
				b3Vec3 v);  // 551
	b3Conjugate(b3Quat q); // 552
	b3InvertTransform(b3Transform t); // 229
	b3MakeMatrixFromQuat(b3Quat q); // 230
} /* size: 0, variables: 11, inline expansions: 15 (1162 bytes) */

// <06C28607> src/sat.cpp:303
// variables: 22
// function calls: 11
int b3FindIncidentFace(const b3Hull* hull, b3Vec3 refNormal, int vertexIndex)
{
	const b3HullVertex* vertices; // 305
	const b3HullHalfEdge* edges; // 306
	const b3Plane* planes; // 307
	const b3Vec3* points; // 308
	int minEdgeIndex; // 310
	float minEdgeProjection; // 311
	const b3HullVertex* vertex; // 313
	int edgeIndex; // 316
	const b3HullHalfEdge* edge; // 317
	b3Vec3 edgeOrigin; // 318
	const b3HullHalfEdge* minEdge; // 341
	int minFaceIndex1; // 342
	b3Plane minPlane1; // 343
	const b3HullHalfEdge* minTwin; // 345
	int minFaceIndex2; // 346
	b3Plane minPlane2; // 347
	{
		const b3HullHalfEdge* twin; // 323
		b3Vec3 twinOrigin; // 324
		b3Vec3 axis; // 326
		float edgeProjection; // 327
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 326
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 327
		b3AbsFloat(float a); // 327
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 326
	}
	b3GetHullVertices(const b3Hull* hull); // 305
	b3GetHullEdges(const b3Hull* hull); // 306
	b3GetHullPlanes(const b3Hull* hull); // 307
	b3GetHullPoints(const b3Hull* hull); // 308
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 349
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 349
} /* size: 0, variables: 16, inline expansions: 6 (131 bytes) */

// <06C285D1> src/sat.cpp:352
// variable: 1
void b3SwapUint8(uint8_t& a, uint8_t& b)
{
	uint8_t c; // 354
} /* size: 0, variables: 1 */

// <06C28578> src/sat.cpp:359
// variable: 1
b3FeaturePair b3MakeFeaturePair(b3FeatureOwner owner1, int index1, b3FeatureOwner owner2, int index2)
{
	b3FeaturePair pair; // 364
} /* size: 0, variables: 1 */

// <06C28485> src/sat.cpp:374
// function call: 1
b3FeaturePair b3FlipPair(b3FeaturePair pair)
{
	b3MakeFeatureKey(b3FeaturePair pair); // 384
} /* size: 0, inline expansions: 1 (21 bytes) */

// <06C281A5> src/sat.cpp:388
// variables: 6
// function calls: 10
bool b3ClipSegment(b3ClipVertex* segment, b3Plane plane)
{
	int vertexCount; // 390
	b3ClipVertex vertex1; // 391
	b3ClipVertex vertex2; // 392
	float distance1; // 394
	float distance2; // 395
	{
		float t; // 411
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 412
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 412
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 412
	}
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 818
	b3PlaneSeparation(b3Plane plane,
				b3Vec3 point);  // 394
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 818
	b3PlaneSeparation(b3Plane plane,
				b3Vec3 point);  // 395
} /* size: 475, variables: 5, inline expansions: 4 (144 bytes) */

// <06C27EAF> src/sat.cpp:420
// function calls: 14
void b3BuildCapsuleSegment(b3ClipVertex* out, const b3Capsule* capsule, b3Transform capsuleTransform)
{
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
			b3Vec3 v);  // 422
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
			b3Vec3 v);  // 425
} /* size: 535, inline expansions: 14 (1290 bytes) */

// <06C276D5> src/sat.cpp:430
// variables: 16
// function calls: 30
bool b3ClipSegmentToHullFace(b3ClipVertex* segment, const b3Hull* hull, b3Transform hullTransform, int refFace)
{
	const b3HullFace* faces; // 432
	const b3Plane* planes; // 433
	const b3HullHalfEdge* edges; // 434
	const b3Vec3* points; // 435
	b3Plane refPlane; // 437
	const b3HullFace* face; // 439
	int edgeIndex; // 441
	{
		const b3HullHalfEdge* edge; // 445
		int nextEdgeIndex; // 447
		const b3HullHalfEdge* next; // 448
		b3Vec3 vertex1; // 450
		b3Vec3 vertex2; // 451
		b3Vec3 tangent; // 452
		b3Vec3 binormal; // 453
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 452
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 453
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 781
		b3MakePlaneFromNormalAndPoint(b3Vec3 normal,
						b3Vec3 point);  // 455
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
				b3Vec3 v);  // 450
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
				b3Vec3 v);  // 451
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 452
	}
	b3GetHullFaces(const b3Hull* hull); // 432
	b3GetHullEdges(const b3Hull* hull); // 434
	b3GetHullPoints(const b3Hull* hull); // 435
	b3GetHullPlanes(const b3Hull* hull); // 433
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
			b3Vec3 v);  // 802
	b3TransformPlane(b3Transform transform,
			b3Plane plane);  // 437
} /* size: 1169, variables: 7, inline expansions: 10 (697 bytes) */

// <06C272D0> src/sat.cpp:499
// variables: 10
// function calls: 12
int b3BuildPolygon(b3ClipVertex* out, const b3Transform& transform, const b3Hull* hull, int incFace, b3Plane refPlane)
{
	const b3HullFace* faces; // 501
	const b3HullHalfEdge* edges; // 502
	const b3Vec3* points; // 503
	const b3HullFace* face; // 505
	int edgeIndex; // 506
	int outCount; // 509
	{
		const b3HullHalfEdge* edge; // 513
		int nextEdgeIndex; // 515
		const b3HullHalfEdge* next; // 516
		b3ClipVertex vertex; // 518
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
				b3Vec3 v);  // 519
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 818
		b3PlaneSeparation(b3Plane plane,
					b3Vec3 point);  // 520
	}
	b3GetHullFaces(const b3Hull* hull); // 501
	b3GetHullEdges(const b3Hull* hull); // 502
	b3GetHullPoints(const b3Hull* hull); // 503
} /* size: 0, variables: 6, inline expansions: 3 (59 bytes) */

// <06C26CE2> src/sat.cpp:535
// variables: 12
// function calls: 20
int b3ClipPolygon(b3ClipVertex* out, b3ClipVertex* polygon, int count, b3Plane clipPlane, int edge, b3Plane refPlane)
{
	b3ClipVertex vertex1; // 539
	float distance1; // 540
	int outCount; // 541
	{
		int index; // 543
		{
			b3ClipVertex vertex2; // 545
			float distance2; // 546
			{
				float fraction; // 558
				b3Vec3 position; // 559
				b3ClipVertex vertex; // 562
				b3Sub(b3Vec3 a,
					b3Vec3 b);  // 1021
				operator-(b3Vec3 a,
						b3Vec3 b);  // 559
				b3Dot(b3Vec3 a,
					b3Vec3 b);  // 818
				b3PlaneSeparation(b3Plane plane,
							b3Vec3 point);  // 564
				b3MulSV(float s,
					b3Vec3 a);  // 1001
				operator*(float s,
						b3Vec3 a);  // 559
				b3Add(b3Vec3 a,
					b3Vec3 b);  // 1016
				operator+(b3Vec3 a,
						b3Vec3 b);  // 559
			}
			{
				float fraction; // 574
				b3Vec3 position; // 575
				b3ClipVertex vertex; // 578
				b3Sub(b3Vec3 a,
					b3Vec3 b);  // 1021
				operator-(b3Vec3 a,
						b3Vec3 b);  // 575
				b3Dot(b3Vec3 a,
					b3Vec3 b);  // 818
				b3PlaneSeparation(b3Plane plane,
							b3Vec3 point);  // 580
				b3MulSV(float s,
					b3Vec3 a);  // 1001
				operator*(float s,
						b3Vec3 a);  // 575
				b3Add(b3Vec3 a,
					b3Vec3 b);  // 1016
				operator+(b3Vec3 a,
						b3Vec3 b);  // 575
			}
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 818
			b3PlaneSeparation(b3Plane plane,
						b3Vec3 point);  // 546
		}
	}
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 818
	b3PlaneSeparation(b3Plane plane,
				b3Vec3 point);  // 540
} /* size: 0, variables: 3, inline expansions: 2 (88 bytes) */


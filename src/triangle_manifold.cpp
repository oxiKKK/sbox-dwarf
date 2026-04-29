
//
// src/triangle_manifold.cpp
//
//	referenced by: libengine2.so
//
//	functions: 10
//	struct: 1
//

// <06CD7DD4> src/triangle_manifold.cpp:17
// member variables: 9
// struct size: 104
struct b3TriangleData {
	b3Vec3 v1; /* 0 12 */
	b3Vec3 v2; /* 12 12 */
	b3Vec3 v3; /* 24 12 */
	b3Vec3 e1; /* 36 12 */
	b3Vec3 e2; /* 48 12 */
	b3Vec3 e3; /* 60 12 */
	b3Vec3 center; /* 72 12 */
	b3Plane plane; /* 84 16 */
	int flags; /* 100 4 */
};

// <06CDA0EC> src/triangle_manifold.cpp:87
// variables: 3
inline int b3GetTriangleSupport(b3Vec3* points, b3Vec3 direction)
{
	int index; // 89
	float distance; // 90
	float d; // 92
} /* size: 0, variables: 3 */

// <06CDA086> src/triangle_manifold.cpp:108
// variables: 5
b3FaceQuery b3QueryTriangleFace(const b3TriangleData* triangle, const b3Hull* hull)
{
	const b3Vec3* hullPoints; // 110
	b3Plane plane; // 111
	int vertexIndex; // 112
	b3Vec3 support; // 113
	float separation; // 114
} /* size: 0, variables: 5 */

// <06CD9FD4> src/triangle_manifold.cpp:123
// variables: 11
b3FaceQuery b3QueryHullFace(const b3TriangleData* triangle, const b3Hull* hull)
{
	const b3Plane* hullPlanes; // 125
	int faceCount; // 126
	b3Vec3 trianglePoints; // 128
	int maxFaceIndex; // 130
	int maxVertexIndex; // 131
	float maxFaceSeparation; // 132
	{
		int faceIndex; // 134
		{
			b3Plane plane; // 136
			int vertexIndex; // 138
			b3Vec3 support; // 139
			float separation; // 140
		}
	}
} /* size: 0, variables: 6 */

// <06CD9E7A> src/triangle_manifold.cpp:156
// variables: 25
b3EdgeQuery b3TestEdgePairs(const b3TriangleData* triangle, const b3Hull* hull)
{
	b3EdgeQuery result; // 158
	b3Vec3 trianglePoints; // 160
	b3Vec3 triangleEdges; // 161
	float speculativeDistance; // 162
	int edgeFlags; // 163
	int triangleFlags; // 168
	b3Vec3 triNormal; // 171
	const b3HullHalfEdge* hullEdges; // 173
	const b3Vec3* hullPoints; // 174
	const b3Plane* hullPlanes; // 175
	int edgeCount; // 176
	{
		int i; // 178
		{
			const b3HullHalfEdge* edge; // 180
			const b3HullHalfEdge* twin; // 181
			b3Vec3 hullPoint; // 184
			b3Vec3 hullEdge; // 185
			b3Vec3 hullNormal1; // 187
			b3Vec3 hullNormal2; // 188
			{
				int j; // 190
				{
					b3Vec3 triEdge; // 192
					float cab; // 194
					float dab; // 195
					float bcd; // 196
					b3Vec3 triPoint; // 202
					float separation; // 203
				}
			}
		}
	}
} /* size: 0, variables: 11 */

// <06CD97CB> src/triangle_manifold.cpp:230
// variables: 33
// function calls: 15
void b3CollideHullFace(b3Manifold* manifold, const b3TriangleData* triangle, const b3Hull* hull, b3FaceQuery query, b3SATCache* cache)
{
	const b3HullFace* hullFaces; // 233
	const b3HullHalfEdge* hullEdges; // 234
	const b3Plane* hullPlanes; // 235
	const b3Vec3* hullPoints; // 236
	int refFace; // 239
	b3Plane refPlane; // 240
	b3ClipVertex buffer1; // 243
	b3ClipVertex buffer2; // 243
	b3Vec3 trianglePoints; // 245
	int pointCount; // 252
	b3ClipVertex* input; // 255
	b3ClipVertex* output; // 256
	const b3HullFace* face; // 258
	int edgeIndex; // 259
	b3ManifoldPoint points; // 291
	float minSeparation; // 292
	{
		int i; // 246
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 818
		b3PlaneSeparation(b3Plane plane,
					b3Vec3 point);  // 249
	}
	{
		const b3HullHalfEdge* edge; // 263
		int nextEdgeIndex; // 264
		const b3HullHalfEdge* next; // 265
		b3Vec3 vertex1; // 266
		b3Vec3 vertex2; // 267
		b3Vec3 tangent; // 268
		b3Vec3 binormal; // 269
		b3Plane clipPlane; // 271
		{
			b3ClipVertex* B3_SWAP_TEMP; // 284
		}
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 268
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 269
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 781
		b3MakePlaneFromNormalAndPoint(b3Vec3 normal,
						b3Vec3 point);  // 271
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 268
	}
	{
		int i; // 294
		{
			b3ClipVertex* clipPoint; // 296
			b3Vec3 point; // 299
			b3ManifoldPoint* mp; // 301
			b3FeaturePair pair; // 307
			b3MulSub(b3Vec3 a,
				float s,
				b3Vec3 b);  // 299
		}
	}
	b3GetHullFaces(const b3Hull* hull); // 233
	b3GetHullEdges(const b3Hull* hull); // 234
	b3GetHullPoints(const b3Hull* hull); // 236
	b3GetHullPlanes(const b3Hull* hull); // 235
	b3MinInt(int a,
		int b);  // 289
	b3Neg(b3Vec3 a); // 320
} /* size: 0, variables: 16, inline expansions: 6 (133 bytes) */

// <06CDAC49> src/triangle_manifold.cpp:331
// variables: 30
// function calls: 11
void b3CollideTriangleFace(b3Manifold* manifold, const b3TriangleData* triangle, const b3Hull* hull, b3FaceQuery query, b3SATCache* cache, int triangleIndex)
{
	const b3HullFace* hullFaces; // 336
	const b3HullHalfEdge* hullEdges; // 337
	const b3Vec3* hullPoints; // 338
	b3Plane refPlane; // 342
	int incFace; // 344
	b3ClipVertex buffer1; // 347
	b3ClipVertex buffer2; // 347
	int pointCount; // 348
	const b3HullFace* face; // 349
	int hullEdgeIndex; // 350
	b3ClipVertex* input; // 373
	b3ClipVertex* output; // 374
	b3Vec3 trianglePoints; // 376
	b3Vec3 triangleEdges; // 377
	b3ManifoldPoint points; // 394
	float minSeparation; // 395
	b3GetHullFaces(const b3Hull* hull); // 336
	b3GetHullEdges(const b3Hull* hull); // 337
	b3GetHullPoints(const b3Hull* hull); // 338
	{
		const b3HullHalfEdge* edge; // 354
		int nextEdgeIndex; // 356
		const b3HullHalfEdge* next; // 357
		b3Vec3 hullPoint; // 359
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 818
		b3PlaneSeparation(b3Plane plane,
					b3Vec3 point);  // 361
	}
	{
		int i; // 379
		{
			b3Vec3 sideNormal; // 381
			b3Plane clipPlane; // 384
			b3Cross(b3Vec3 a,
				b3Vec3 b);  // 381
			{
				float s; // 247
				b3Vec3 u; // 248
			}
			b3Normalize(b3Vec3 a); // 382
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 781
			b3MakePlaneFromNormalAndPoint(b3Vec3 normal,
							b3Vec3 point);  // 384
		}
	}
	b3MinInt(int a,
		int b);  // 392
	{
		int i; // 397
		{
			b3ClipVertex* clipPoint; // 399
			b3Vec3 point; // 402
			b3ManifoldPoint* mp; // 404
			b3FeaturePair pair; // 410
			b3MulSub(b3Vec3 a,
				float s,
				b3Vec3 b);  // 402
		}
	}
} /* size: 0, variables: 16, inline expansions: 4 (92 bytes) */

// <06CD95BA> src/triangle_manifold.cpp:331
// variables: 29
void b3CollideTriangleFace(b3Manifold* manifold, const b3TriangleData* triangle, const b3Hull* hull, b3FaceQuery query, b3SATCache* cache, int triangleIndex)
{
	const b3HullFace* hullFaces; // 336
	const b3HullHalfEdge* hullEdges; // 337
	const b3Vec3* hullPoints; // 338
	b3Plane refPlane; // 342
	int incFace; // 344
	b3ClipVertex buffer1; // 347
	b3ClipVertex buffer2; // 347
	int pointCount; // 348
	const b3HullFace* face; // 349
	int hullEdgeIndex; // 350
	b3ClipVertex* input; // 373
	b3ClipVertex* output; // 374
	b3Vec3 trianglePoints; // 376
	b3Vec3 triangleEdges; // 377
	b3ManifoldPoint points; // 394
	float minSeparation; // 395
	{
		const b3HullHalfEdge* edge; // 354
		int nextEdgeIndex; // 356
		const b3HullHalfEdge* next; // 357
		b3Vec3 hullPoint; // 359
	}
	{
		int i; // 379
		{
			b3Vec3 sideNormal; // 381
			b3Plane clipPlane; // 384
			{
				b3ClipVertex* B3_SWAP_TEMP; // 389
			}
		}
	}
	{
		int i; // 397
		{
			b3ClipVertex* clipPoint; // 399
			b3Vec3 point; // 402
			b3ManifoldPoint* mp; // 404
			b3FeaturePair pair; // 410
		}
	}
} /* size: 0, variables: 16 */

// <06CDB164> src/triangle_manifold.cpp:434
// variables: 17
// function calls: 19
void b3CollideEdges(b3Manifold* manifold, b3Vec3 trianglePoint, b3Vec3 triangleEdge, b3Vec3 triangleCenter, const b3Hull* hull, b3SATCache* cache, b3EdgeQuery query)
{
	b3Vec3 cA; // 441
	b3Vec3 pA; // 442
	b3Vec3 eA; // 443
	const b3HullHalfEdge* edgesB; // 445
	const b3Vec3* pointsB; // 446
	const b3HullHalfEdge* edgeB; // 447
	const b3HullHalfEdge* twinB; // 448
	b3Vec3 pB; // 449
	b3Vec3 qB; // 450
	b3Vec3 eB; // 451
	b3Vec3 normal; // 453
	b3ClosestApproachResult result; // 463
	float separation; // 473
	b3Vec3 point; // 476
	b3ManifoldPoint* mp; // 480
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 453
	b3GetHullEdges(const b3Hull* hull); // 445
	b3GetHullPoints(const b3Hull* hull); // 446
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 451
	{
		float s; // 247
		b3Vec3 u; // 248
	}
	b3Normalize(b3Vec3 a); // 454
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 457
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 457
	b3Neg(b3Vec3 a); // 996
	operator-(b3Vec3 a); // 459
	b3MakeFeatureKeyFull(b3FeatureOwner owner1,
				int index1,
				b3FeatureOwner owner2,
				int index2);  // 485
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 473
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 473
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 476
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 476
} /* size: 1009, variables: 15, inline expansions: 19 (684 bytes) */

// <06CD9494> src/triangle_manifold.cpp:434
// variables: 15
void b3CollideEdges(b3Manifold* manifold, b3Vec3 trianglePoint, b3Vec3 triangleEdge, b3Vec3 triangleCenter, const b3Hull* hull, b3EdgeQuery query, b3SATCache* cache)
{
	b3Vec3 cA; // 441
	b3Vec3 pA; // 442
	b3Vec3 eA; // 443
	const b3HullHalfEdge* edgesB; // 445
	const b3Vec3* pointsB; // 446
	const b3HullHalfEdge* edgeB; // 447
	const b3HullHalfEdge* twinB; // 448
	b3Vec3 pB; // 449
	b3Vec3 qB; // 450
	b3Vec3 eB; // 451
	b3Vec3 normal; // 453
	b3ClosestApproachResult result; // 463
	float separation; // 473
	b3Vec3 point; // 476
	b3ManifoldPoint* mp; // 480
} /* size: 0, variables: 15 */

// <06CD9419> src/triangle_manifold.cpp:498
// variables: 3
inline bool b3IsTriangleMinkowskiFace(b3Vec3 triNormal, b3Vec3 triEdge, b3Vec3 hullNormal1, b3Vec3 hullNormal2, b3Vec3 hullEdge)
{
	float cab; // 501
	float dab; // 502
	float bcd; // 503
} /* size: 0, variables: 3 */


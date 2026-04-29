
//
// src/hull.cpp
//
//	referenced by: libengine2.so
//
//	functions: 31
//

// <06B721EA> src/hull.cpp:14
b3Vec3* b3GetHullPointsWrite(b3Hull* hull)
{
} /* size: 0 */

// <06B721CC> src/hull.cpp:24
b3Plane* b3GetHullPlanesWrite(b3Hull* hull)
{
} /* size: 0 */

// <06B721AE> src/hull.cpp:34
b3HullVertex* b3GetHullVerticesWrite(b3Hull* hull)
{
} /* size: 0 */

// <06B72190> src/hull.cpp:44
b3HullHalfEdge* b3GetHullEdgesWrite(b3Hull* hull)
{
} /* size: 0 */

// <06B72172> src/hull.cpp:54
b3HullFace* b3GetHullFacesWrite(b3Hull* hull)
{
} /* size: 0 */

// <06B72106> src/hull.cpp:66
// variables: 5
void b3SortEdges(const b3QHHalfEdge ** edges, int count)
{
	{
		int edgeIndex; // 68
		{
			const b3QHHalfEdge* pEdge; // 70
			{
				int twinIndex; // 71
				{
					const b3QHHalfEdge* pTwin; // 73
					{
						const b3QHHalfEdge* temp; // 77
					}
				}
			}
		}
	}
} /* size: 0 */

// <06B71FB5> src/hull.cpp:103
// variables: 6
// function calls: 2
int b3FindHullSupportVertex(const b3Hull* hull, b3Vec3 direction)
{
	int bestIndex; // 105
	float bestDot; // 106
	int vertexCount; // 108
	const b3Vec3* points; // 109
	{
		int index; // 111
		{
			float dot; // 113
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 113
		}
	}
	b3GetHullPoints(const b3Hull* hull); // 109
} /* size: 0, variables: 4, inline expansions: 1 (15 bytes) */

// <06B71E1B> src/hull.cpp:125
// variables: 6
// function calls: 3
b3Vec3 b3FindHullSupportPoint(const b3Hull* hull, b3Vec3 direction)
{
	int vertexCount; // 127
	const b3Vec3* points; // 130
	b3Vec3 bestPoint; // 132
	float bestDot; // 133
	{
		int index; // 135
		{
			float dot; // 137
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 137
		}
	}
	b3GetHullPoints(const b3Hull* hull); // 130
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 133
} /* size: 0, variables: 4, inline expansions: 2 (0 bytes) */

// <06B71CCA> src/hull.cpp:148
// variables: 6
// function calls: 2
int b3FindHullSupportFace(const b3Hull* hull, b3Vec3 direction)
{
	int bestIndex; // 150
	float bestDot; // 151
	int faceCount; // 153
	const b3Plane* planes; // 154
	{
		int index; // 156
		{
			float dot; // 158
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 158
		}
	}
	b3GetHullPlanes(const b3Hull* hull); // 154
} /* size: 0, variables: 4, inline expansions: 1 (18 bytes) */

// <06B71CA9> src/hull.cpp:272
bool b3IsValidHull(const b3Hull* hull)
{
} /* size: 0 */

// <06B718F3> src/hull.cpp:280
// variables: 8
// function calls: 2
b3Hull* b3CreateCylinder(float height, float radius, float yOffset, int sides)
{
	int pointCount; // 286
	b3Vec3* points; // 287
	float alpha; // 290
	float deltaAlpha; // 291
	b3Hull* hull; // 304
	{
		int index; // 293
		{
			float sinAlpha; // 295
			float cosAlpha; // 296
			b3Sin(float radians); // 295
			b3Cos(float radians); // 296
		}
	}
} /* size: 0, variables: 5 */

// <06B714FE> src/hull.cpp:314
// variables: 8
// function calls: 2
b3Hull* b3CreateCone(float height, float radius1, float radius2, int slices)
{
	int pointCount; // 321
	b3Vec3* points; // 322
	float alpha; // 325
	float deltaAlpha; // 326
	b3Hull* hull; // 339
	{
		int index; // 328
		{
			float sinAlpha; // 330
			float cosAlpha; // 331
			b3Sin(float radians); // 330
			b3Cos(float radians); // 331
		}
	}
} /* size: 0, variables: 5 */

// <06B6BC35> src/hull.cpp:349
// variable: 1
inline int b3FindIndexSlow<b3QHHalfEdge>(const b3QHHalfEdge ** array, int count, const b3QHHalfEdge* value)
{
	{
		int i; // 351
	}
} /* size: 0 */

// <06B6BBDB> src/hull.cpp:349
// variable: 1
inline int b3FindIndexSlow<b3QHFace>(const b3QHFace ** array, int count, const b3QHFace* value)
{
	{
		int i; // 351
	}
} /* size: 0 */

// <06B6BB81> src/hull.cpp:349
// variable: 1
inline int b3FindIndexSlow<b3QHVertex>(const b3QHVertex ** array, int count, const b3QHVertex* value)
{
	{
		int i; // 351
	}
} /* size: 0 */

// <06B7140D> src/hull.cpp:362
// variables: 5
// function call: 1
void b3UpdateHullBounds(b3Hull* hull)
{
	const b3Vec3* points; // 364
	int vertexCount; // 365
	b3AABB bounds; // 368
	{
		int i; // 372
		{
			b3Vec3 p; // 374
		}
	}
	b3GetHullPoints(const b3Hull* hull); // 364
} /* size: 0, variables: 3, inline expansions: 1 (21 bytes) */

// <06B70A42> src/hull.cpp:384
// variables: 31
// function calls: 28
void b3UpdateHullBulkProperties(b3Hull* hull)
{
	const b3Vec3* points; // 386
	const b3HullFace* faces; // 387
	const b3HullHalfEdge* edges; // 388
	const b3Plane* planes; // 389
	float area; // 391
	float volume; // 392
	b3Vec3 center; // 393
	float xx; // 395
	float xy; // 396
	float yy; // 397
	float xz; // 398
	float zz; // 399
	float yz; // 400
	int faceCount; // 402
	float radius; // 457
	b3Matrix3 inertia; // 470
	float mass; // 481
	b3Matrix3 centralInertia; // 482
	{
		int faceIndex; // 404
		{
			const b3HullFace* face; // 406
			const b3HullHalfEdge* edge1; // 407
			const b3HullHalfEdge* edge2; // 408
			const b3HullHalfEdge* edge3; // 409
			b3Vec3 v1; // 414
			{
				b3Vec3 v2; // 421
				b3Vec3 v3; // 422
				float det; // 428
				b3Vec3 v4; // 434
				b3Add(b3Vec3 a,
					b3Vec3 b);  // 1016
				operator+(b3Vec3 a,
						b3Vec3 b);  // 434
				b3Sub(b3Vec3 a,
					b3Vec3 b);  // 1021
				operator-(b3Vec3 a,
						b3Vec3 b);  // 425
				b3Sub(b3Vec3 a,
					b3Vec3 b);  // 1021
				operator-(b3Vec3 a,
						b3Vec3 b);  // 425
				b3Add(b3Vec3 a,
					b3Vec3 b);  // 1016
				operator+(b3Vec3 a,
						b3Vec3 b);  // 434
				b3Cross(b3Vec3 a,
					b3Vec3 b);  // 425
				b3ScalarTripleProduct(b3Vec3 a,
							b3Vec3 b,
							b3Vec3 c);  // 428
				b3Dot(b3Vec3 a,
					b3Vec3 b);  // 220
				b3Length(b3Vec3 v); // 425
				b3MulSV(float s,
					b3Vec3 a);  // 1001
				operator*(float s,
						b3Vec3 a);  // 435
				b3Add(b3Vec3 a,
					b3Vec3 b);  // 978
				operator+=(b3Vec3& a,
						b3Vec3 b);  // 435
			}
		}
	}
	{
		int faceIndex; // 458
		{
			b3Plane plane; // 460
			float distance; // 462
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 818
			b3PlaneSeparation(b3Plane plane,
						b3Vec3 point);  // 462
		}
	}
	b3GetHullPoints(const b3Hull* hull); // 386
	b3GetHullEdges(const b3Hull* hull); // 388
	b3GetHullFaces(const b3Hull* hull); // 387
	b3GetHullPlanes(const b3Hull* hull); // 389
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 454
	b3MulSM(float s,
		b3Matrix3 a);  // 1052
	operator*(float s,
			b3Matrix3 a);  // 482
	b3SubMM(b3Matrix3 a,
		b3Matrix3 b);  // 1047
	operator-(b3Matrix3 a,
			b3Matrix3 b);  // 482
} /* size: 0, variables: 18, inline expansions: 10 (577 bytes) */

// <06B6FF81> src/hull.cpp:659
// variable: 1
// function call: 1
b3Hull* b3CloneHull(const b3Hull* hull)
{
	b3Hull* clone; // 666
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 667
} /* size: 59, variables: 1, inline expansions: 1 (11 bytes) */

// <06B6F40B> src/hull.cpp:672
// variables: 38
// function calls: 33
b3Hull* b3CloneAndTransformHull(const b3Hull* original, b3Transform transform, b3Vec3 scale)
{
	b3Hull* hull; // 680
	b3Vec3 safeScale; // 684
	b3HullHalfEdge* edges; // 687
	const b3HullFace* faces; // 688
	int faceCount; // 689
	int vertexCount; // 690
	b3Matrix3 matrix; // 755
	b3Vec3* points; // 756
	b3Plane* planes; // 764
	{
		b3HullVertex* vertices; // 744
		{
			int i; // 696
			{
				const b3HullFace* face; // 698
				uint8_t startEdgeIndex; // 701
				uint8_t currentEdgeIndex; // 702
				uint8_t prevEdgeIndex; // 703
				{
					b3HullHalfEdge* edge; // 707
				}
				{
					b3HullHalfEdge* edge; // 726
					uint8_t nextIndex; // 727
					{
						b3HullHalfEdge* twin; // 733
						{
							unsigned char B3_SWAP_TEMP; // 734
						}
					}
				}
			}
		}
		{
			int i; // 746
			{
				b3HullVertex* vertex; // 748
				const b3HullHalfEdge* edge; // 749
			}
		}
		b3GetHullVerticesWrite(b3Hull* hull); // 744
	}
	{
		int i; // 758
		b3Mul(b3Vec3 a,
			b3Vec3 b);  // 760
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 760
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 760
	}
	{
		int i; // 766
		{
			int count; // 768
			b3Vec3 centroid; // 769
			b3Vec3 normal; // 770
			const b3HullFace* face; // 772
			uint8_t startEdgeIndex; // 773
			uint8_t currentEdgeIndex; // 774
			const b3HullHalfEdge* startEdge; // 776
			b3Vec3 origin; // 782
			float area; // 807
			{
				b3HullHalfEdge* edge; // 786
				b3HullHalfEdge* twin; // 787
				b3Vec3 v1; // 790
				b3Vec3 v2; // 791
				b3Sub(b3Vec3 a,
					b3Vec3 b);  // 1021
				operator-(b3Vec3 a,
						b3Vec3 b);  // 790
				b3Add(b3Vec3 a,
					b3Vec3 b);  // 978
				operator+=(b3Vec3& a,
						b3Vec3 b);  // 794
				b3Sub(b3Vec3 a,
					b3Vec3 b);  // 1021
				operator-(b3Vec3 a,
						b3Vec3 b);  // 791
			}
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 220
			b3Length(b3Vec3 v); // 807
			b3MulSV(float s,
				b3Vec3 a);  // 990
			operator*=(b3Vec3& a,
					float s);  // 804
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 978
			operator+=(b3Vec3& a,
					b3Vec3 b);  // 805
			b3MulSV(float s,
				b3Vec3 a);  // 990
			operator*=(b3Vec3& a,
					float s);  // 809
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 781
			b3MakePlaneFromNormalAndPoint(b3Vec3 normal,
							b3Vec3 point);  // 811
		}
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 681
	b3AbsFloat(float a); // 334
	b3AbsFloat(float a); // 335
	b3AbsFloat(float a); // 336
	b3Abs(b3Vec3 a); // 372
	b3Mul(b3Vec3 a,
		b3Vec3 b);  // 374
	b3Sign(b3Vec3 a); // 374
	b3SafeScale(b3Vec3 a); // 684
	b3GetHullEdgesWrite(b3Hull* hull); // 687
	b3GetHullFaces(const b3Hull* hull); // 688
	b3MakeMatrixFromQuat(b3Quat q); // 755
	b3GetHullPointsWrite(b3Hull* hull); // 756
	b3GetHullPlanesWrite(b3Hull* hull); // 764
} /* size: 0, variables: 9, inline expansions: 13 (1396 bytes) */

// <06B6F09C> src/hull.cpp:843
// variables: 2
// function calls: 3
b3AABB b3ComputeSweptHullAABB(const b3Hull* shape, b3Transform xf1, b3Transform xf2)
{
	b3AABB aabb1; // 845
	b3AABB aabb2; // 846
	b3Min(b3Vec3 a,
		b3Vec3 b);  // 891
	b3Max(b3Vec3 a,
		b3Vec3 b);  // 892
	b3AABB_Union(b3AABB bounds1,
			b3AABB bounds2);  // 847
} /* size: 325, variables: 2, inline expansions: 3 (116 bytes) */

// <06B6EF8F> src/hull.cpp:850
// variables: 4
// function call: 1
bool b3OverlapHull(const b3Hull* shape, b3Transform shapeTransform, const b3ShapeProxy* proxy)
{
	const b3Vec3* points; // 852
	b3DistanceInput input; // 854
	b3SimplexCache cache; // 861
	b3DistanceOutput output; // 862
	b3GetHullPoints(const b3Hull* hull); // 852
} /* size: 226, variables: 4, inline expansions: 1 (16 bytes) */

// <06B6ECE3> src/hull.cpp:866
// variables: 10
// function calls: 7
b3CastOutput b3RayCastHull(const b3Hull* shape, const b3RayCastInput* input)
{
	b3CastOutput output; // 869
	float lower; // 871
	float upper; // 872
	int bestFace; // 873
	const b3Plane* planes; // 875
	{
		int faceIndex; // 877
		{
			b3Plane plane; // 879
			float distance; // 884
			float denominator; // 885
			{
				float fraction; // 903
			}
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 884
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 885
		}
	}
	b3GetHullPlanes(const b3Hull* hull); // 875
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 931
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 931
} /* size: 0, variables: 5, inline expansions: 5 (95 bytes) */

// <06B6EC09> src/hull.cpp:946
// variables: 3
// function call: 1
b3CastOutput b3ShapeCastHull(const b3Hull* shape, const b3ShapeCastInput* input)
{
	const b3Vec3* points; // 948
	b3ShapeCastPairInput pairInput; // 950
	b3CastOutput output; // 959
	b3GetHullPoints(const b3Hull* hull); // 948
} /* size: 193, variables: 3, inline expansions: 1 (16 bytes) */

// <06B6EAB7> src/hull.cpp:963
// variables: 6
// function call: 1
int b3CollideMoverAndHull(b3PlaneResult* result, const b3Hull* shape, const b3Capsule* mover)
{
	const b3Vec3* points; // 965
	b3DistanceInput distanceInput; // 966
	float totalRadius; // 973
	b3SimplexCache cache; // 975
	b3DistanceOutput distanceOutput; // 976
	{
		b3Plane plane; // 980
	}
	b3GetHullPoints(const b3Hull* hull); // 965
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <06B6E98C> src/hull.cpp:988
// variables: 5
// function calls: 2
b3ShapeExtent b3ComputeHullExtent(const b3Hull* hull, b3Vec3 origin)
{
	const b3Vec3* points; // 990
	float maxExtentSquared; // 992
	b3ShapeExtent extent; // 999
	{
		int index; // 993
		{
			b3Vec3 point; // 995
			b3DistanceSquared(b3Vec3 v1,
						b3Vec3 v2);  // 996
		}
	}
	b3GetHullPoints(const b3Hull* hull); // 990
} /* size: 259, variables: 3, inline expansions: 1 (21 bytes) */

// <06B6E62B> src/hull.cpp:1003
// variables: 17
// function calls: 9
float b3ComputeHullProjectedArea(const b3Hull* hull, b3Vec3 direction)
{
	float area; // 1005
	int faceCount; // 1007
	const b3HullFace* hullFaces; // 1008
	const b3HullHalfEdge* hullEdges; // 1009
	const b3Vec3* hullPoints; // 1010
	{
		int i; // 1012
		{
			const b3HullFace* face; // 1014
			int baseEdge; // 1016
			const b3HullHalfEdge* edge; // 1017
			b3Vec3 p1; // 1018
			int edgeIndex; // 1020
			b3Vec3 p2; // 1022
			{
				b3Vec3 p3; // 1029
				b3Vec3 e1; // 1031
				b3Vec3 e2; // 1032
				b3Vec3 n; // 1033
				float a; // 1034
				b3Sub(b3Vec3 a,
					b3Vec3 b);  // 1021
				operator-(b3Vec3 a,
						b3Vec3 b);  // 1031
				b3Sub(b3Vec3 a,
					b3Vec3 b);  // 1021
				operator-(b3Vec3 a,
						b3Vec3 b);  // 1032
				b3Cross(b3Vec3 a,
					b3Vec3 b);  // 1033
				b3Dot(b3Vec3 a,
					b3Vec3 b);  // 1034
			}
		}
	}
	b3GetHullFaces(const b3Hull* hull); // 1008
	b3GetHullEdges(const b3Hull* hull); // 1009
	b3GetHullPoints(const b3Hull* hull); // 1010
} /* size: 0, variables: 5, inline expansions: 3 (0 bytes) */

// <06B6E122> src/hull.cpp:1047
// variables: 6
// function calls: 21
b3TriangleHull b3MakeTriangleHull(b3Vec3 a, b3Vec3 b, b3Vec3 c)
{
	b3TriangleHull triangle; // 1049
	b3Vec3 lower; // 1052
	b3Vec3 upper; // 1053
	b3Vec3 normal; // 1084
	b3Min(b3Vec3 a,
		b3Vec3 b);  // 1052
	b3Min(b3Vec3 a,
		b3Vec3 b);  // 1052
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1058
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 1058
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 1058
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 1084
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 1084
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 1084
	{
		float s; // 247
		b3Vec3 u; // 248
	}
	b3Normalize(b3Vec3 a); // 1085
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 781
	b3MakePlaneFromNormalAndPoint(b3Vec3 normal,
					b3Vec3 point);  // 1093
	b3Neg(b3Vec3 a); // 996
	operator-(b3Vec3 a); // 1094
	b3AbsFloat(float a); // 289
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 288
	b3IsNormalized(b3Vec3 a); // 1086
} /* size: 0, variables: 4, inline expansions: 21 (604 bytes) */

// <06B6E102> src/hull.cpp:1105
// variable: 1
b3BoxHull b3MakeStaticBoxHull(void)
{
	b3BoxHull box; // 1107
} /* size: 0, variables: 1 */

// <06B6C9F7> src/hull.cpp:1215
b3BoxHull b3MakeBoxHull(b3Vec3 halfWidths)
{
} /* size: 0 */

// <06B6BF7E> src/hull.cpp:1220
// variables: 18
// function calls: 44
void b3ScaleBox(b3Vec3* halfWidths, b3Transform* transform, b3Vec3 postScale, float minHalfWidth)
{
	b3Quat q; // 1224
	b3Vec3 absScale; // 1251
	b3Vec3 h; // 1253
	b3Vec3 p1; // 1254
	b3Vec3 p2; // 1255
	b3Vec3 localP1; // 1258
	b3Vec3 localP2; // 1259
	b3Vec3 lower; // 1262
	b3Vec3 upper; // 1263
	b3Vec3 scaledHalfWidth; // 1266
	b3Vec3 m; // 1268
	{
		b3Matrix3 m; // 1232
		b3MakeMatrixFromQuat(b3Quat q); // 1232
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 1242
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 1243
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 1244
		b3Neg(b3Vec3 a); // 996
		operator-(b3Vec3 a); // 1245
		b3Neg(b3Vec3 a); // 996
		operator-(b3Vec3 a); // 1246
		b3Neg(b3Vec3 a); // 996
		operator-(b3Vec3 a); // 1247
	}
	b3AbsFloat(float a); // 335
	b3AbsFloat(float a); // 334
	b3AbsFloat(float a); // 336
	b3Abs(b3Vec3 a); // 1251
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
			b3Vec3 v);  // 1254
	b3Neg(b3Vec3 a); // 996
	operator-(b3Vec3 a); // 1254
	b3Mul(b3Vec3 a,
		b3Vec3 b);  // 1011
	operator*(b3Vec3 a,
			b3Vec3 b);  // 1254
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 1255
	b3Mul(b3Vec3 a,
		b3Vec3 b);  // 1011
	operator*(b3Vec3 a,
			b3Vec3 b);  // 1255
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
				b3Vec3 v);  // 1258
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
				b3Vec3 v);  // 1259
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 1266
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 1266
	b3Mul(b3Vec3 a,
		b3Vec3 b);  // 1011
	operator*(b3Vec3 a,
			b3Vec3 b);  // 1270
} /* size: 0, variables: 11, inline expansions: 34 (0 bytes) */

// <06B6BEC0> src/hull.cpp:1274
// variables: 2
b3BoxHull b3MakeScaledBoxHull(b3Vec3 halfWidths, b3Transform transform, b3Vec3 postScale)
{
	b3Vec3 h; // 1276
	b3Transform xf; // 1277
} /* size: 0, variables: 2 */


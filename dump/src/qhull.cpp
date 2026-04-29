
//
// src/qhull.cpp
//
//	referenced by: libengine2.so
//
//	functions: 57
//

// <06C097EC> src/qhull.cpp:18
// variables: 2
int b3Size<b3QHVertex>(const b3QHVertex& head)
{
	int count; // 20
	{
		const b3QHVertex* node; // 21
	}
} /* size: 0, variables: 1 */

// <06C0974E> src/qhull.cpp:18
// variables: 2
int b3Size<b3QHFace>(const b3QHFace& head)
{
	int count; // 20
	{
		const b3QHFace* node; // 21
	}
} /* size: 0, variables: 1 */

// <06C08DD9> src/qhull.cpp:29
bool b3Empty<b3QHVertex>(const b3QHVertex& head)
{
} /* size: 0 */

// <06C0899F> src/qhull.cpp:34
// function calls: 2
void b3Insert<b3QHVertex>(b3QHVertex* node, b3QHVertex* where)
{
	b3Contains<b3QHVertex>(b3QHVertex* node); // 36
	b3Contains<b3QHVertex>(b3QHVertex* node); // 36
} /* size: 109, inline expansions: 2 (32 bytes) */

// <06C088BF> src/qhull.cpp:34
// function calls: 2
void b3Insert<b3QHFace>(b3QHFace* node, b3QHFace* where)
{
	b3Contains<b3QHFace>(b3QHFace* node); // 36
	b3Contains<b3QHFace>(b3QHFace* node); // 36
} /* size: 109, inline expansions: 2 (32 bytes) */

// <06C09542> src/qhull.cpp:45
// function call: 1
void b3Remove<b3QHFace>(b3QHFace* node)
{
	b3Contains<b3QHFace>(b3QHFace* node); // 47
} /* size: 103, inline expansions: 1 (17 bytes) */

// <06C09456> src/qhull.cpp:45
// function call: 1
void b3Remove<b3QHVertex>(b3QHVertex* node)
{
	b3Contains<b3QHVertex>(b3QHVertex* node); // 47
} /* size: 103, inline expansions: 1 (17 bytes) */

// <06C08F7A> src/qhull.cpp:56
bool b3Contains<b3QHVertex>(b3QHVertex* node)
{
} /* size: 0 */

// <06C08ED5> src/qhull.cpp:56
bool b3Contains<b3QHFace>(b3QHFace* node)
{
} /* size: 0 */

// <06C08E3B> src/qhull.cpp:75
void b3PushBack<b3QHVertex>(b3QHVertex& head, b3QHVertex* node)
{
} /* size: 0 */

// <06C08E03> src/qhull.cpp:75
void b3PushBack<b3QHFace>(b3QHFace& head, b3QHFace* node)
{
} /* size: 0 */

// <06C10242> src/qhull.cpp:89
// variable: 1
// function calls: 2
void b3HullBuilder::GetVertexCount()
{
	{
		const b3QHVertex* node; // 21
		b3Begin<b3QHVertex>(const b3QHVertex& head); // 21
	}
	b3Size<b3QHVertex>(const b3QHVertex& head); // 91
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06C0FCFB> src/qhull.cpp:89
void b3HullBuilder::GetVertexCount()
{
} /* size: 0 */

// <06C0FC31> src/qhull.cpp:94
// variables: 3
// function call: 1
void b3HullBuilder::GetHalfEdgeCount()
{
	int count; // 96
	{
		const b3QHFace* face; // 97
		{
			b3QHHalfEdge* edge; // 99
		}
		b3Begin<b3QHFace>(const b3QHFace& head); // 97
	}
} /* size: 0, variables: 1 */

// <06C102D7> src/qhull.cpp:113
// variable: 1
// function calls: 2
void b3HullBuilder::GetFaceCount()
{
	{
		const b3QHFace* node; // 21
		b3Begin<b3QHFace>(const b3QHFace& head); // 21
	}
	b3Size<b3QHFace>(const b3QHFace& head); // 115
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06C0FC15> src/qhull.cpp:113
void b3HullBuilder::GetFaceCount()
{
} /* size: 0 */

// <06C0FBE4> src/qhull.cpp:118
void b3HullBuilder::GetVertexList()
{
} /* size: 9 */

// <06C0FBB3> src/qhull.cpp:123
void b3HullBuilder::GetFaceList()
{
} /* size: 0 */

// <06C0FB71> src/qhull.cpp:128
// variables: 2
b3AABB b3BuildBounds(int vertexCount, const b3Vec3* vertices)
{
	b3AABB bounds; // 130
	{
		int i; // 131
	}
} /* size: 0, variables: 1 */

// <06C0FA9A> src/qhull.cpp:140
// variables: 10
void b3FindFarthestPointsAlongCardinalAxes(int& index1, int& index2, float tolerance, int vertexCount, const b3Vec3* vertexBase)
{
	b3Vec3 v0; // 145
	b3Vec3 min; // 146
	b3Vec3 max; // 147
	int minIndex; // 149
	int maxIndex; // 150
	b3Vec3 distance; // 193
	float distanceArray; // 198
	int maxElement; // 199
	{
		int i; // 152
		{
			b3Vec3 v; // 154
		}
	}
} /* size: 0, variables: 8 */

// <06C0F9D2> src/qhull.cpp:208
// variables: 11
int b3FindFarthestPointFromLine(int index1, int index2, float tolerance, int vertexCount, const b3Vec3* vertexBase)
{
	b3Vec3 a; // 210
	b3Vec3 b; // 211
	b3Vec3 ab; // 213
	float maxDistance; // 214
	int maxIndex; // 215
	{
		int i; // 217
		{
			const b3Vec3& p; // 224
			b3Vec3 ap; // 226
			float s; // 227
			b3Vec3 q; // 228
			float distance; // 230
		}
	}
} /* size: 0, variables: 5 */

// <06C0F91B> src/qhull.cpp:241
// variables: 8
int b3FindFarthestPointFromPlane(int index1, int index2, int index3, float tolerance, int vertexCount, const b3Vec3* vertexBase)
{
	b3Vec3 a; // 244
	b3Vec3 b; // 245
	b3Vec3 c; // 246
	b3Plane plane; // 248
	float maxDistance; // 250
	int maxIndex; // 251
	{
		int i; // 253
		{
			float distance; // 260
		}
	}
} /* size: 0, variables: 6 */

// <06C0F8DC> src/qhull.cpp:271
// variable: 1
bool b3IsEdgeConvex(const b3QHHalfEdge* edge, float tolerance)
{
	float distance; // 273
} /* size: 0, variables: 1 */

// <06C0F89D> src/qhull.cpp:277
// variable: 1
bool b3IsEdgeConcave(const b3QHHalfEdge* edge, float tolerance)
{
	float distance; // 279
} /* size: 0, variables: 1 */

// <06C0F863> src/qhull.cpp:283
// variables: 2
int b3VertexCount(const b3QHFace* face)
{
	int vertexCount; // 285
	const b3QHHalfEdge* edge; // 287
} /* size: 0, variables: 2 */

// <06C0F820> src/qhull.cpp:298
// variable: 1
void b3LinkFace(b3QHFace* face, int index, b3QHHalfEdge* twin)
{
	b3QHHalfEdge* edge; // 302
} /* size: 0, variables: 1 */

// <06C0F7C3> src/qhull.cpp:314
// variables: 2
void b3LinkFaces(b3QHFace* face1, int index1, b3QHFace* face2, int index2)
{
	b3QHHalfEdge* edge1; // 318
	b3QHHalfEdge* edge2; // 324
} /* size: 0, variables: 2 */

// <06C0F343> src/qhull.cpp:335
// variables: 9
// function calls: 16
void b3NewellPlane(b3QHFace* face)
{
	int count; // 337
	b3Vec3 centroid; // 338
	b3Vec3 normal; // 339
	b3QHHalfEdge* edge; // 341
	b3Vec3 origin; // 345
	float area; // 369
	{
		b3QHHalfEdge* twin; // 349
		b3Vec3 v1; // 352
		b3Vec3 v2; // 353
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 352
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 353
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 978
		operator+=(b3Vec3& a,
				b3Vec3 b);  // 356
	}
	b3MulSV(float s,
		b3Vec3 a);  // 990
	operator*=(b3Vec3& a,
			float s);  // 366
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 978
	operator+=(b3Vec3& a,
			b3Vec3 b);  // 367
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 220
	b3Length(b3Vec3 v); // 369
	b3MulSV(float s,
		b3Vec3 a);  // 990
	operator*=(b3Vec3& a,
			float s);  // 371
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 781
	b3MakePlaneFromNormalAndPoint(b3Vec3 normal,
					b3Vec3 point);  // 374
} /* size: 0, variables: 6, inline expansions: 10 (196 bytes) */

// <06C0F289> src/qhull.cpp:378
// variables: 2
// function call: 1
bool b3CheckConsistency(const b3QHFace* face)
{
	const b3QHHalfEdge* edge; // 392
	{
		const b3QHHalfEdge* twin; // 396
	}
	b3VertexCount(const b3QHFace* face); // 386
} /* size: 158, variables: 1, inline expansions: 1 (29 bytes) */

// <06C0F204> src/qhull.cpp:446
// function call: 1
bool b3IsTriangle(const b3QHFace* face)
{
	b3VertexCount(const b3QHFace* face); // 448
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06C0F148> src/qhull.cpp:451
// function calls: 3
void b3HullBuilder::b3HullBuilder()
{
	b3Pool<b3QHVertex>::b3Pool(); // 455
	b3Pool<b3QHHalfEdge>::b3Pool(); // 455
	b3Pool<b3QHFace>::b3Pool(); // 455
} /* size: 172, inline expansions: 3 (93 bytes) */

// <06C0F12B> src/qhull.cpp:451
void b3HullBuilder::b3HullBuilder()
{
} /* size: 0 */

// <06C0EE8C> src/qhull.cpp:468
// variables: 8
// function calls: 7
void b3HullBuilder::~b3HullBuilder()
{
	{
		b3QHFace* face; // 471
		b3QHVertex* vertex; // 482
		{
			b3QHFace* nuke; // 474
		}
		{
			b3QHVertex* nuke; // 485
		}
	}
	{
		b3QHFace* face; // 471
		b3QHVertex* vertex; // 482
		b3Begin<b3QHFace>(b3QHFace& head); // 471
		b3End<b3QHFace>(b3QHFace& head); // 472
		{
			b3QHFace* nuke; // 474
		}
		b3Begin<b3QHVertex>(b3QHVertex& head); // 482
		b3End<b3QHVertex>(b3QHVertex& head); // 483
		{
			b3QHVertex* nuke; // 485
		}
	}
	b3Pool<b3QHFace>::~b3Pool(); // 491
	b3Pool<b3QHHalfEdge>::~b3Pool(); // 491
	b3Pool<b3QHVertex>::~b3Pool(); // 491
} /* size: 218, inline expansions: 3 (83 bytes) */

// <06C0EE31> src/qhull.cpp:468
// variables: 4
void b3HullBuilder::~b3HullBuilder()
{
	{
		b3QHFace* face; // 471
		b3QHVertex* vertex; // 482
		{
			b3QHFace* nuke; // 474
		}
		{
			b3QHVertex* nuke; // 485
		}
	}
} /* size: 0 */

// <06C0E9B4> src/qhull.cpp:493
// variables: 4
// function calls: 11
void b3HullBuilder::Construct(const b3Vec3* points, int pointCount)
{
	b3Vec3 origin; // 501
	b3StackArray<b3Vec3, 64> shiftedPoints; // 502
	b3QHVertex* vertex; // 518
	{
		int i; // 504
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 506
		b3StackArray<b3Vec3, 64>::operator[](
				int index);  // 506
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 115
	b3StackArray<b3Vec3, 64>::Reserve(
		int capacity);  // 72
	b3StackArray<b3Vec3, 64>::Resize(
		int count);  // 503
	b3StackArray<b3Vec3, 64>::Create(); // 19
	b3StackArray<b3Vec3, 64>::b3StackArray(); // 502
	b3HullBuilder::AllocateMemory(
			int vertexCount);  // 510
	b3StackArray<b3Vec3, 64>::Destroy(); // 24
	b3StackArray<b3Vec3, 64>::~b3StackArray(); // 526
} /* size: 0, variables: 3, inline expansions: 8 (443 bytes) */

// <06C0E6DD> src/qhull.cpp:528
// variables: 7
// function calls: 9
void b3HullBuilder::IsConsistent()
{
	int v; // 531
	int e; // 532
	int f; // 533
	{
		const b3QHFace* face; // 542
		{
			const b3QHHalfEdge* edge; // 571
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 818
			b3PlaneSeparation(b3Plane plane,
						b3Vec3 point);  // 561
			b3DistanceSquared(b3Vec3 v1,
						b3Vec3 v2);  // 608
		}
	}
	{
		const b3QHVertex* node; // 21
		b3Begin<b3QHVertex>(const b3QHVertex& head); // 21
	}
	b3Size<b3QHVertex>(const b3QHVertex& head); // 91
	b3HullBuilder::GetVertexCount(); // 531
	{
		const b3QHFace* node; // 21
		b3Begin<b3QHFace>(const b3QHFace& head); // 21
	}
	b3Size<b3QHFace>(const b3QHFace& head); // 115
	b3HullBuilder::GetFaceCount(); // 533
} /* size: 430, variables: 3, inline expansions: 4 (161 bytes) */

// <06C104BA> src/qhull.cpp:623
// variables: 3
void b3HullBuilder::AllocateMemory(int vertexCount)
{
	int maxVertexCount; // 626
	int maxEdgeCount; // 627
	int maxFaceCount; // 628
} /* size: 0, variables: 3 */

// <06C0E58A> src/qhull.cpp:637
// variables: 2
// function calls: 2
void b3HullBuilder::CreateVertex(const b3Vec3& position, int index)
{
	b3QHVertex* vertex; // 642
	{
		int newCapacity; // 84
	}
	b3Pool<b3QHVertex>::Alloc(); // 106
	b3Pool<b3QHVertex>::Allocate(); // 642
} /* size: 159, variables: 1, inline expansions: 2 (176 bytes) */

// <06C0E44E> src/qhull.cpp:655
// function calls: 3
void b3HullBuilder::DestroyVertex(b3QHVertex* vertex)
{
	b3Contains<b3QHVertex>(b3QHVertex* node); // 657
	b3Pool<b3QHVertex>::Free(
		int index);  // 113
	b3Pool<b3QHVertex>::Free(
		b3QHVertex* address);  // 663
} /* size: 0, inline expansions: 3 (214 bytes) */

// <06C0DD6A> src/qhull.cpp:666
// variables: 14
// function calls: 25
void b3HullBuilder::CreateFace(b3QHVertex* vertex1, b3QHVertex* vertex2, b3QHVertex* vertex3)
{
	b3QHFace* face; // 675
	b3QHHalfEdge* edge1; // 678
	b3QHHalfEdge* edge2; // 679
	b3QHHalfEdge* edge3; // 680
	b3Vec3 p1; // 682
	b3Vec3 p2; // 683
	b3Vec3 p3; // 684
	b3Plane plane; // 686
	float length; // 688
	float area; // 692
	{
		int newCapacity; // 84
	}
	b3Pool<b3QHFace>::Alloc(); // 106
	b3Pool<b3QHFace>::Allocate(); // 675
	{
		int newCapacity; // 84
	}
	b3Pool<b3QHHalfEdge>::Alloc(); // 106
	b3Pool<b3QHHalfEdge>::Allocate(); // 678
	{
		int newCapacity; // 84
	}
	b3Pool<b3QHHalfEdge>::Alloc(); // 106
	b3Pool<b3QHHalfEdge>::Allocate(); // 679
	{
		int newCapacity; // 84
	}
	b3Pool<b3QHHalfEdge>::Alloc(); // 106
	b3Pool<b3QHHalfEdge>::Allocate(); // 680
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 687
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 687
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 687
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 220
	b3Length(b3Vec3 v); // 257
	b3GetLengthAndNormalize(float* length,
				b3Vec3 v);  // 689
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 690
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 702
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 702
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 702
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 818
	b3PlaneSeparation(b3Plane plane,
				b3Vec3 point);  // 704
} /* size: 999, variables: 10, inline expansions: 25 (1357 bytes) */

// <06C0DB38> src/qhull.cpp:731
// variables: 2
// function calls: 5
void b3HullBuilder::DestroyFace(b3QHFace* face)
{
	b3QHHalfEdge* edge; // 736
	{
		b3QHHalfEdge* nuke; // 741
		b3Pool<b3QHHalfEdge>::Free(
			int index);  // 113
		b3Pool<b3QHHalfEdge>::Free(
			b3QHHalfEdge* address);  // 745
	}
	b3Contains<b3QHFace>(b3QHFace* node); // 733
	b3Pool<b3QHFace>::Free(
		int index);  // 113
	b3Pool<b3QHFace>::Free(
		b3QHFace* address);  // 754
} /* size: 0, variables: 1, inline expansions: 3 (195 bytes) */

// <06C0D89E> src/qhull.cpp:757
// variables: 7
// function calls: 9
void b3HullBuilder::ComputeTolerance(int pointCount, const b3Vec3* points)
{
	b3AABB bounds; // 760
	b3Vec3 max; // 761
	float maxSum; // 763
	float maxCoord; // 764
	float maxDistance; // 765
	float tolerance; // 767
	{
		int i; // 131
	}
	b3BuildBounds(int vertexCount,
			const b3Vec3* vertices);  // 760
	b3AbsFloat(float a); // 334
	b3AbsFloat(float a); // 336
	b3AbsFloat(float a); // 335
	b3Abs(b3Vec3 a); // 761
	b3AbsFloat(float a); // 334
	b3AbsFloat(float a); // 335
	b3AbsFloat(float a); // 336
	b3Abs(b3Vec3 a); // 761
} /* size: 0, variables: 6, inline expansions: 9 (545 bytes) */

// <06C0C178> src/qhull.cpp:775
// variables: 35
// function calls: 60
void b3HullBuilder::BuildInitialHull(int pointCount, const b3Vec3* points)
{
	int index1; // 777
	int index2; // 777
	int index3; // 784
	int index4; // 790
	b3Vec3 v1; // 797
	b3Vec3 v2; // 798
	b3Vec3 v3; // 799
	b3QHVertex* vertex1; // 817
	b3QHVertex* vertex2; // 819
	b3QHVertex* vertex3; // 821
	b3QHVertex* vertex4; // 823
	b3QHFace* face1; // 827
	b3QHFace* face2; // 829
	b3QHFace* face3; // 831
	b3QHFace* face4; // 833
	{
		int temp; // 803
	}
	{
		int index; // 851
		{
			const b3Vec3& point; // 858
			float maxDistance; // 860
			b3QHFace* maxFace; // 861
			{
				b3QHFace* face; // 863
				{
					float distance; // 865
					b3Dot(b3Vec3 a,
						b3Vec3 b);  // 818
					b3PlaneSeparation(b3Plane plane,
								b3Vec3 point);  // 865
				}
				b3Begin<b3QHFace>(b3QHFace& head); // 863
			}
			{
				b3QHVertex* vertex; // 875
				b3PushBack<b3QHVertex>(b3QHVertex& head,
							b3QHVertex* node);  // 878
			}
		}
	}
	{
		int i; // 152
		{
			b3Vec3 v; // 154
		}
	}
	b3MaxElementIndex(b3Vec3 v); // 199
	b3FindFarthestPointsAlongCardinalAxes(int& index1,
						int& index2,
						float tolerance,
						int vertexCount,
						const b3Vec3* vertexBase);  // 778
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 213
	{
		int i; // 217
		{
			const b3Vec3& p; // 224
			b3Vec3 ap; // 226
			float s; // 227
			b3Vec3 q; // 228
			float distance; // 230
			b3Sub(b3Vec3 a,
				b3Vec3 b);  // 1021
			operator-(b3Vec3 a,
					b3Vec3 b);  // 226
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 227
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 227
			b3MulSV(float s,
				b3Vec3 a);  // 1001
			operator*(float s,
					b3Vec3 a);  // 228
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 1016
			operator+(b3Vec3 a,
					b3Vec3 b);  // 228
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 220
			b3Length(b3Vec3 v); // 232
			b3Distance(b3Vec3 v1,
					b3Vec3 v2);  // 230
		}
	}
	b3FindFarthestPointFromLine(int index1,
					int index2,
					float tolerance,
					int vertexCount,
					const b3Vec3* vertexBase);  // 784
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 787
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 787
	{
		float s; // 247
		b3Vec3 u; // 248
	}
	b3Normalize(b3Vec3 a); // 788
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 789
	b3MakePlaneFromPoints(b3Vec3 point1,
				b3Vec3 point2,
				b3Vec3 point3);  // 248
	{
		int i; // 253
		{
			float distance; // 260
			b3AbsFloat(float a); // 260
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 818
			b3PlaneSeparation(b3Plane plane,
						b3Vec3 point);  // 260
		}
	}
	b3FindFarthestPointFromPlane(int index1,
					int index2,
					int index3,
					float tolerance,
					int vertexCount,
					const b3Vec3* vertexBase);  // 790
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 799
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 797
	b3ScalarTripleProduct(b3Vec3 a,
				b3Vec3 b,
				b3Vec3 c);  // 801
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 798
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 978
	operator+=(b3Vec3& a,
			b3Vec3 b);  // 810
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 978
	operator+=(b3Vec3& a,
			b3Vec3 b);  // 811
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 978
	operator+=(b3Vec3& a,
			b3Vec3 b);  // 812
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 978
	operator+=(b3Vec3& a,
			b3Vec3 b);  // 813
	b3MulSV(float s,
		b3Vec3 a);  // 990
	operator*=(b3Vec3& a,
			float s);  // 814
	b3PushBack<b3QHVertex>(b3QHVertex& head,
				b3QHVertex* node);  // 818
	b3PushBack<b3QHVertex>(b3QHVertex& head,
				b3QHVertex* node);  // 820
	b3PushBack<b3QHVertex>(b3QHVertex& head,
				b3QHVertex* node);  // 822
	b3PushBack<b3QHVertex>(b3QHVertex& head,
				b3QHVertex* node);  // 824
	b3PushBack<b3QHFace>(b3QHFace& head,
				b3QHFace* node);  // 828
	b3PushBack<b3QHFace>(b3QHFace& head,
				b3QHFace* node);  // 830
	b3PushBack<b3QHFace>(b3QHFace& head,
				b3QHFace* node);  // 832
	b3PushBack<b3QHFace>(b3QHFace& head,
				b3QHFace* node);  // 834
	b3LinkFaces(b3QHFace* face1,
			int index1,
			b3QHFace* face2,
			int index2);  // 837
	b3LinkFaces(b3QHFace* face1,
			int index1,
			b3QHFace* face2,
			int index2);  // 838
	b3LinkFaces(b3QHFace* face1,
			int index1,
			b3QHFace* face2,
			int index2);  // 839
	b3LinkFaces(b3QHFace* face1,
			int index1,
			b3QHFace* face2,
			int index2);  // 841
	b3LinkFaces(b3QHFace* face1,
			int index1,
			b3QHFace* face2,
			int index2);  // 842
	b3LinkFaces(b3QHFace* face1,
			int index1,
			b3QHFace* face2,
			int index2);  // 843
} /* size: 0, variables: 15, inline expansions: 42 (3703 bytes) */

// <06C0BFCF> src/qhull.cpp:885
// variables: 5
// function calls: 4
void b3HullBuilder::NextConflictVertex()
{
	b3QHVertex* maxVertex; // 888
	float maxDistance; // 889
	{
		b3QHFace* face; // 892
		{
			b3QHVertex* vertex; // 896
			{
				float distance; // 900
				b3Dot(b3Vec3 a,
					b3Vec3 b);  // 818
				b3PlaneSeparation(b3Plane plane,
							b3Vec3 point);  // 900
			}
		}
		b3Begin<b3QHFace>(b3QHFace& head); // 892
		b3Empty<b3QHVertex>(const b3QHVertex& head); // 894
	}
} /* size: 0, variables: 2 */

// <06C0BC44> src/qhull.cpp:914
// variables: 3
// function calls: 9
void b3HullBuilder::AddVertexToHull(b3QHVertex* vertex)
{
	b3QHFace* face; // 917
	b3StackArray<b3QHHalfEdge*, 32> horizon; // 923
	b3StackArray<b3QHFace*, 32> cone; // 928
	b3StackArray<b3QHHalfEdge::Create(); // 19
	b3StackArray<b3QHHalfEdge::b3StackArray(); // 923
	b3PushBack<b3QHVertex>(b3QHVertex& head,
				b3QHVertex* node);  // 920
	b3StackArray<b3QHFace::Create(); // 19
	b3StackArray<b3QHFace::b3StackArray(); // 928
	b3StackArray<b3QHFace::Destroy(); // 24
	b3StackArray<b3QHFace::~b3StackArray(); // 946
	b3StackArray<b3QHHalfEdge::Destroy(); // 24
	b3StackArray<b3QHHalfEdge::~b3StackArray(); // 946
} /* size: 0, variables: 3, inline expansions: 9 (199 bytes) */

// <06C0B96E> src/qhull.cpp:948
// variables: 4
// function calls: 9
void b3HullBuilder::CleanHull(b3Vec3 origin)
{
	b3QHVertex* vertex; // 967
	{
		b3QHFace* face; // 951
		{
			b3QHHalfEdge* edge; // 953
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 962
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 978
			operator+=(b3Vec3& a,
					b3Vec3 b);  // 963
		}
		b3Begin<b3QHFace>(b3QHFace& head); // 951
	}
	{
		b3QHVertex* next; // 970
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 978
		operator+=(b3Vec3& a,
				b3Vec3 b);  // 978
	}
	b3Begin<b3QHVertex>(b3QHVertex& head); // 967
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 978
	operator+=(b3Vec3& a,
			b3Vec3 b);  // 983
} /* size: 346, variables: 1, inline expansions: 3 (39 bytes) */

// <06C0B5EA> src/qhull.cpp:986
// variables: 6
// function calls: 8
void b3HullBuilder::BuildHorizon(b3StackArray<b3QHHalfEdge*, 32>& horizon, b3QHVertex* apex, b3QHFace* seed, b3QHHalfEdge* edge1)
{
	b3QHVertex* vertex; // 992
	b3QHHalfEdge* edge; // 1005
	{
		b3QHVertex* orphan; // 995
		b3PushBack<b3QHVertex>(b3QHVertex& head,
					b3QHVertex* node);  // 1001
	}
	{
		b3QHHalfEdge* twin; // 1018
		{
			float distance; // 1021
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 818
			b3PlaneSeparation(b3Plane plane,
						b3Vec3 point);  // 1021
			{
				int newCapacity; // 132
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 115
				b3StackArray<b3QHHalfEdge::Reserve(
					int capacity);  // 133
			}
			b3StackArray<b3QHHalfEdge::PushBack(
				b3QHHalfEdge* const& value);  // 1028
		}
	}
	b3Begin<b3QHVertex>(b3QHVertex& head); // 992
	b3Empty<b3QHVertex>(const b3QHVertex& head); // 1003
} /* size: 0, variables: 2, inline expansions: 2 (4 bytes) */

// <06C0B12A> src/qhull.cpp:1037
// variables: 7
// function calls: 8
void b3HullBuilder::BuildCone(b3StackArray<b3QHFace*, 32>& cone, const b3StackArray<b3QHHalfEdge*, 32>& horizon, b3QHVertex* apex)
{
	b3QHFace* face1; // 1054
	{
		int i; // 1041
		{
			b3QHHalfEdge* edge; // 1043
			b3QHFace* face; // 1046
			{
				int newCapacity; // 132
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 115
				b3StackArray<b3QHFace::Reserve(
					int capacity);  // 133
			}
			b3StackArray<b3QHFace::PushBack(
				b3QHFace* const& value);  // 1047
			b3LinkFace(b3QHFace* face,
					int index,
					b3QHHalfEdge* twin);  // 1050
			b3StackArray<b3QHHalfEdge::operator[](
					int index);  // 1043
		}
	}
	{
		int i; // 1055
		{
			b3QHFace* face2; // 1057
			b3LinkFaces(b3QHFace* face1,
					int index1,
					b3QHFace* face2,
					int index2);  // 1058
			b3StackArray<b3QHFace::operator[](
					int index);  // 1057
		}
	}
	b3StackArray<b3QHFace::operator[](
			int index);  // 1054
} /* size: 0, variables: 1, inline expansions: 1 (58 bytes) */

// <06C0AE2A> src/qhull.cpp:1063
// variables: 11
// function calls: 3
void b3HullBuilder::MergeFaces(const b3StackArray<b3QHFace*, 32>& cone)
{
	{
		int i; // 1066
		{
			b3QHFace* face; // 1068
			{
				float bestArea; // 1075
				b3QHHalfEdge* bestEdge; // 1076
				b3QHHalfEdge* edge; // 1078
				{
					b3QHHalfEdge* twin; // 1082
					float area; // 1084
				}
			}
			b3StackArray<b3QHFace::operator[](
					int index);  // 1068
		}
	}
	{
		int i; // 1102
		{
			b3QHFace* face; // 1104
			b3StackArray<b3QHFace::operator[](
					int index);  // 1104
		}
	}
	{
		int i; // 1115
		{
			b3QHFace* face; // 1117
			b3StackArray<b3QHFace::operator[](
					int index);  // 1117
		}
	}
} /* size: 0 */

// <06C0AB54> src/qhull.cpp:1128
// variables: 6
// function calls: 6
void b3HullBuilder::ResolveVertices(const b3StackArray<b3QHFace*, 32>& cone)
{
	b3QHVertex* vertex; // 1131
	{
		b3QHVertex* next; // 1134
		float maxDistance; // 1137
		b3QHFace* maxFace; // 1138
		{
			int i; // 1140
			{
				float distance; // 1145
				b3Dot(b3Vec3 a,
					b3Vec3 b);  // 818
				b3PlaneSeparation(b3Plane plane,
							b3Vec3 point);  // 1145
			}
			b3StackArray<b3QHFace::operator[](
					int index);  // 1143
		}
		b3PushBack<b3QHVertex>(b3QHVertex& head,
					b3QHVertex* node);  // 1157
	}
	b3Begin<b3QHVertex>(b3QHVertex& head); // 1131
	b3Empty<b3QHVertex>(const b3QHVertex& head); // 1171
} /* size: 0, variables: 1, inline expansions: 2 (4 bytes) */

// <06C0A93C> src/qhull.cpp:1174
// variables: 4
// function calls: 4
void b3HullBuilder::ResolveFaces(const b3StackArray<b3QHFace*, 32>& cone)
{
	{
		b3QHFace* face; // 1178
		{
			b3QHFace* nuke; // 1181
			b3Empty<b3QHVertex>(const b3QHVertex& head); // 1186
		}
		b3Begin<b3QHFace>(b3QHFace& head); // 1178
	}
	{
		int i; // 1196
		{
			b3QHFace* face; // 1198
			b3PushBack<b3QHFace>(b3QHFace& head,
						b3QHFace* node);  // 1207
			b3StackArray<b3QHFace::operator[](
					int index);  // 1198
		}
	}
} /* size: 0 */

// <06C0A77B> src/qhull.cpp:1212
// variables: 2
// function calls: 6
void b3HullBuilder::MergeConcave(b3QHFace* face)
{
	b3QHHalfEdge* edge; // 1214
	{
		b3QHHalfEdge* twin; // 1218
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 818
		b3PlaneSeparation(b3Plane plane,
					b3Vec3 point);  // 279
		b3IsEdgeConcave(const b3QHHalfEdge* edge,
				float tolerance);  // 1220
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 818
		b3PlaneSeparation(b3Plane plane,
					b3Vec3 point);  // 279
		b3IsEdgeConcave(const b3QHHalfEdge* edge,
				float tolerance);  // 1220
	}
} /* size: 171, variables: 1 */

// <06C0A5C6> src/qhull.cpp:1234
// variables: 2
// function calls: 6
void b3HullBuilder::MergeCoplanar(b3QHFace* face)
{
	b3QHHalfEdge* edge; // 1236
	{
		b3QHHalfEdge* twin; // 1240
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 818
		b3PlaneSeparation(b3Plane plane,
					b3Vec3 point);  // 273
		b3IsEdgeConvex(const b3QHHalfEdge* edge,
				float tolerance);  // 1242
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 818
		b3PlaneSeparation(b3Plane plane,
					b3Vec3 point);  // 273
		b3IsEdgeConvex(const b3QHHalfEdge* edge,
				float tolerance);  // 1242
	}
} /* size: 179, variables: 1 */

// <06C0A0DF> src/qhull.cpp:1255
// variables: 8
// function calls: 5
void b3HullBuilder::ConnectFaces(b3QHHalfEdge* edge)
{
	b3QHFace* face; // 1258
	b3QHHalfEdge* twin; // 1262
	b3QHHalfEdge* edgePrev; // 1265
	b3QHHalfEdge* edgeNext; // 1266
	b3QHHalfEdge* twinPrev; // 1267
	b3QHHalfEdge* twinNext; // 1268
	b3StackArray<b3QHFace*, 32> mergedFaces; // 1294
	{
		b3QHHalfEdge* absorbed; // 1299
	}
	b3StackArray<b3QHFace::Create(); // 19
	b3StackArray<b3QHFace::b3StackArray(); // 1294
	b3StackArray<b3QHFace::PushBack(
		b3QHFace* const& value);  // 1295
	b3StackArray<b3QHFace::Destroy(); // 24
	b3StackArray<b3QHFace::~b3StackArray(); // 1318
} /* size: 0, variables: 7, inline expansions: 5 (114 bytes) */

// <06C09CC6> src/qhull.cpp:1320
// variables: 3
// function calls: 8
void b3HullBuilder::ConnectEdges(b3QHHalfEdge* prev, b3QHHalfEdge* next, b3StackArray<b3QHFace*, 32>& mergedFaces)
{
	{
		b3QHHalfEdge* twin; // 1337
		{
			b3QHFace* opposingFace; // 1346
			{
				int newCapacity; // 132
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 115
				b3StackArray<b3QHFace::Reserve(
					int capacity);  // 133
			}
			b3StackArray<b3QHFace::PushBack(
				b3QHFace* const& value);  // 1348
		}
		b3VertexCount(const b3QHFace* face); // 1338
		b3Pool<b3QHHalfEdge>::Free(
			int index);  // 113
		b3Pool<b3QHHalfEdge>::Free(
			b3QHHalfEdge* address);  // 1365
		b3Pool<b3QHHalfEdge>::Free(
			int index);  // 113
		b3Pool<b3QHHalfEdge>::Free(
			b3QHHalfEdge* address);  // 1379
	}
} /* size: 0 */

// <06C09BA1> src/qhull.cpp:1391
// variables: 2
// function calls: 2
void b3HullBuilder::DestroyEdges(b3QHHalfEdge* begin, b3QHHalfEdge* end)
{
	b3QHHalfEdge* edge; // 1393
	{
		b3QHHalfEdge* nuke; // 1396
		b3Pool<b3QHHalfEdge>::Free(
			int index);  // 113
		b3Pool<b3QHHalfEdge>::Free(
			b3QHHalfEdge* address);  // 1408
	}
} /* size: 0, variables: 1 */

// <06C09830> src/qhull.cpp:1412
// variables: 4
// function calls: 8
void b3HullBuilder::AbsorbFaces(b3QHFace* face, b3StackArray<b3QHFace*, 32>& mergedFaces)
{
	{
		int i; // 1414
		{
			b3QHVertex& conflictList; // 1417
			b3QHVertex* vertex; // 1419
			{
				b3QHVertex* next; // 1422
				b3PushBack<b3QHVertex>(b3QHVertex& head,
							b3QHVertex* node);  // 1427
				b3Dot(b3Vec3 a,
					b3Vec3 b);  // 818
				b3PlaneSeparation(b3Plane plane,
							b3Vec3 point);  // 1425
				b3PushBack<b3QHVertex>(b3QHVertex& head,
							b3QHVertex* node);  // 1432
			}
			b3StackArray<b3QHFace::operator[](
					int index);  // 1416
			b3StackArray<b3QHFace::operator[](
					int index);  // 1417
			b3Begin<b3QHVertex>(b3QHVertex& head); // 1419
			b3Empty<b3QHVertex>(const b3QHVertex& head); // 1438
		}
	}
} /* size: 0 */


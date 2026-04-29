
//
// src/mesh.cpp
//
//	referenced by: libengine2.so
//
//	functions: 39
//	structs: 7
//

// <06BB1F3D> src/mesh.cpp:20
bool b3IsLeaf(const b3MeshNode* node)
{
} /* size: 0 */

// <06BB1F1F> src/mesh.cpp:25
b3MeshNode* b3GetMeshNodesWrite(b3MeshData* mesh)
{
} /* size: 0 */

// <06BB1F01> src/mesh.cpp:35
b3MeshNode* b3GetLeftChild(b3MeshNode* node)
{
} /* size: 0 */

// <06BB1EE3> src/mesh.cpp:42
const b3MeshNode* b3GetLeftChild(const b3MeshNode* node)
{
} /* size: 0 */

// <06BB1EC5> src/mesh.cpp:49
b3MeshNode* b3GetRightChild(b3MeshNode* node)
{
} /* size: 0 */

// <06BB1EA7> src/mesh.cpp:56
const b3MeshNode* b3GetRightChild(const b3MeshNode* node)
{
} /* size: 0 */

// <06BB1E89> src/mesh.cpp:63
const b3MeshNode* b3GetRoot(const b3MeshData* mesh)
{
} /* size: 0 */

// <06BB1E6B> src/mesh.cpp:69
b3MeshNode* b3GetRootWrite(b3MeshData* mesh)
{
} /* size: 0 */

// <06BB1E4D> src/mesh.cpp:75
b3MeshTriangle* b3GetMeshTrianglesWrite(b3MeshData* mesh)
{
} /* size: 0 */

// <06BB1E2F> src/mesh.cpp:85
b3Vec3* b3GetMeshVerticesWrite(b3MeshData* mesh)
{
} /* size: 0 */

// <06BB1E11> src/mesh.cpp:102
uint8_t* b3GetMeshMaterialIndicesWrite(b3MeshData* mesh)
{
} /* size: 0 */

// <06BB1DF3> src/mesh.cpp:112
uint8_t* b3GetMeshFlagsWrite(b3MeshData* mesh)
{
} /* size: 0 */

// <06BB1C34> src/mesh.cpp:122
// variables: 4
// function calls: 5
int b3GetNodeHeight(const b3MeshNode* node)
{
	const b3MeshNode* leftChild; // 129
	int leftHeight; // 130
	const b3MeshNode* rightChild; // 131
	int rightHeight; // 132
	b3IsLeaf(const b3MeshNode* node); // 124
	b3GetLeftChild(const b3MeshNode* node); // 129
	b3IsLeaf(const b3MeshNode* node); // 59
	b3GetRightChild(const b3MeshNode* node); // 131
	b3MaxInt(int a,
		int b);  // 134
} /* size: 0, variables: 4, inline expansions: 5 (0 bytes) */

// <06BB1B72> src/mesh.cpp:137
// variable: 1
// function calls: 2
int b3GetHeight(const b3MeshData* mesh)
{
	const b3MeshNode* root; // 139
	b3GetMeshNodes(const b3MeshData* mesh); // 66
	b3GetRoot(const b3MeshData* mesh); // 139
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <06BB1B42> src/mesh.cpp:295
bool b3IsValidMesh(const b3MeshData *)
{
} /* size: 10 */

// <06B9FF12> src/mesh.cpp:302
// member variables: 2
// struct size: 8
struct b3VertexNode {
	int32_t vertexIndex; /* 0 4 */
	int nextNodeIndex; /* 4 4 */
};

// <06BA041C> src/mesh.cpp:317
// member functions: 5
// member variables: 6
// struct size: 72
struct b3SpatialHash {
	/* src/mesh.cpp:319 */
	void b3SpatialHash(b3SpatialHash* , const b3Vec3* , int, float);
	/* src/mesh.cpp:333 */
	void ~b3SpatialHash(b3SpatialHash* );
	/* src/mesh.cpp:339 */
	bool IsEqual(const b3SpatialHash* , b3Vec3, b3Vec3);
	/* src/mesh.cpp:344 */
	uint64_t ComputeHash(const b3SpatialHash* , b3Vec3);
	/* src/mesh.cpp:362 */
	int32_t FindDuplicate(b3SpatialHash* , int32_t);
	b3Array<b3VertexNode> m_nodes; /* 0 16 */
	const b3Vec3 * m_vertices; /* 16 8 */
	int m_vertexCount; /* 24 4 */
	b3VertexMap m_vertexMap; /* 32 32 */
	float m_cellSize; /* 64 4 */
	float m_tolerance; /* 68 4 */
};

// <06BB0F78> src/mesh.cpp:319
void b3SpatialHash::b3SpatialHash(const b3Vec3* vertices, int vertexCount, float tolerance)
{
} /* size: 0 */

// <06BB0F38> src/mesh.cpp:319
inline void b3SpatialHash::b3SpatialHash(const b3Vec3* vertices, int vertexCount, float tolerance)
{
} /* size: 0 */

// <06BB0F21> src/mesh.cpp:333
void b3SpatialHash::~b3SpatialHash()
{
} /* size: 0 */

// <06BB0F08> src/mesh.cpp:333
inline void b3SpatialHash::~b3SpatialHash()
{
} /* size: 0 */

// <06BB0ED9> src/mesh.cpp:339
inline void b3SpatialHash::IsEqual(const b3Vec3 a, const b3Vec3 b)
{
} /* size: 0 */

// <06BB0787> src/mesh.cpp:362
// variables: 28
// function calls: 14
void b3SpatialHash::FindDuplicate(int32_t currentIndex)
{
	b3Vec3 vertex; // 365
	int32_t baseX; // 368
	int32_t baseY; // 369
	int32_t baseZ; // 370
	uint64_t currentKey; // 419
	b3VertexMap_itr it; // 424
	{
		int dx; // 373
		{
			int dy; // 375
			{
				int dz; // 377
				{
					int32_t x; // 379
					int32_t y; // 380
					int32_t z; // 381
					uint64_t key; // 384
					b3VertexMap_itr it; // 389
					{
						int nodeIndex; // 393
						{
							b3VertexNode node; // 397
							int32_t existingIndex; // 399
							b3Vec3 other; // 403
							b3Array<b3VertexNode>::operator[](
									int index);  // 397
							b3SpatialHash::IsEqual(
								const b3Vec3  a,
								const b3Vec3  b);  // 405
						}
					}
					vt_hash_integer(uint64_t key); // 1551
					vt_hashfrag(uint64_t hash); // 1561
					{
						uint16_t displacement; // 1579
						{
							b3VertexMap_itr itr; // 1570
						}
						vt_quadratic(uint16_t displacement); // 1583
					}
					b3VertexMap_get(const b3VertexMap* table,
							uint64_t key);  // 389
				}
			}
		}
	}
	{
		int nodeIndex; // 427
		b3VertexNode node; // 429
		{
			int newCapacity; // 132
		}
		b3Array<b3VertexNode>::PushBack(
			const b3VertexNode& value);  // 435
	}
	{
		b3VertexNode node; // 439
		{
			b3VertexMap_itr itr; // 1488
			b3VertexMap_is_end(b3VertexMap_itr itr); // 1500
		}
		b3VertexMap_insert(b3VertexMap* table,
					uint64_t key,
					int val);  // 444
		{
			int newCapacity; // 132
		}
		b3Array<b3VertexNode>::PushBack(
			const b3VertexNode& value);  // 445
	}
	vt_hash_integer(uint64_t key); // 1551
	vt_hashfrag(uint64_t hash); // 1561
	{
		uint16_t displacement; // 1579
		{
			b3VertexMap_itr itr; // 1570
		}
		vt_quadratic(uint16_t displacement); // 1583
	}
	b3VertexMap_get(const b3VertexMap* table,
			uint64_t key);  // 424
} /* size: 1780, variables: 6, inline expansions: 3 (244 bytes) */

// <06BA056B> src/mesh.cpp:460
// member variables: 6
// struct size: 40
struct b3WeldData {
	const b3Vec3 * srcVertices; /* 0 8 */
	const int32_t * srcIndices; /* 8 8 */
	b3Vec3 * dstVertices; /* 16 8 */
	int32_t * dstIndices; /* 24 8 */
	int vertexCount; /* 32 4 */
	int indexCount; /* 36 4 */
};

// <06BB06D7> src/mesh.cpp:472
// variables: 9
int b3WeldVertices(b3WeldData* data, float tolerance)
{
	int vertexCount; // 474
	int uniqueCount; // 475
	b3SpatialHash spatialHash; // 478
	b3Array<int> vertexMapping; // 479
	int indexCount; // 502
	{
		int i; // 483
		{
			int32_t duplicateIndex; // 485
		}
	}
	{
		int i; // 503
		{
			int srcIndex; // 505
		}
	}
} /* size: 0, variables: 5 */

// <06BB0688> src/mesh.cpp:515
inline void b3StoreLeaf(b3MeshNode& node, const b3AABB& aabb, int triangleCount, int triangleOffset)
{
} /* size: 0 */

// <06BA0994> src/mesh.cpp:524
// member variables: 3
// struct size: 40
struct b3Primitive {
	b3AABB aabb; /* 0 24 */
	b3Vec3 center; /* 24 12 */
	int triangleIndex; /* 36 4 */
};

// <06BA09D8> src/mesh.cpp:531
// member variables: 2
// struct size: 28
struct b3Bucket {
	int count; /* 0 4 */
	b3AABB bounds; /* 4 24 */
};

// <06BA0A07> src/mesh.cpp:537
// member functions: 2
// member variables: 4
// struct size: 56
struct b3Split {
	b3AABB leftBounds; /* 0 24 */
	b3AABB rightBounds; /* 24 24 */
	int axis; /* 48 4 */
	int index; /* 52 4 */
	/* src/mesh.cpp:544 */
	bool Succeeded(const b3Split* );
	/* src/mesh.cpp:549 */
	bool Failed(const b3Split* );
};

// <06BB066F> src/mesh.cpp:549
inline void b3Split::Failed()
{
} /* size: 0 */

// <06BB049E> src/mesh.cpp:555
// variables: 28
b3Split b3SplitBinnedSah(int count, b3Primitive* primitives)
{
	b3Split split; // 557
	b3AABB bounds; // 562
	int bestBucket; // 571
	float bestCost; // 572
	{
		int i; // 563
	}
	{
		int axis; // 574
		{
			b3Vec3 extent; // 576
			b3Bucket buckets; // 583
			float factor; // 591
			{
				int i; // 584
			}
			{
				int i; // 593
				{
					b3Vec3 center; // 595
					int index; // 596
				}
			}
			{
				int i; // 604
				{
					int leftCount; // 606
					b3AABB leftBounds; // 607
					int rightCount; // 614
					b3AABB rightBounds; // 615
					{
						int k; // 608
					}
					{
						int k; // 616
					}
					{
						float cost; // 625
					}
				}
			}
		}
	}
	{
		int axis; // 644
		float factor; // 645
		int splitIndex; // 648
		{
			int i; // 649
			{
				b3Vec3 center; // 651
				int index; // 652
				{
					b3Primitive temp; // 656
				}
			}
		}
	}
} /* size: 0, variables: 4 */

// <06BB0405> src/mesh.cpp:668
// variables: 8
b3Split b3SplitHalf(int count, b3Primitive* primitives)
{
	int splitIndex; // 671
	b3AABB leftBounds; // 673
	b3AABB rightBounds; // 679
	b3AABB bounds; // 686
	int axis; // 687
	b3Split split; // 689
	{
		int i; // 674
	}
	{
		int i; // 680
	}
} /* size: 0, variables: 6 */

// <06BB02D4> src/mesh.cpp:698
// variables: 18
b3Split b3SplitMedian(int count, b3Primitive* primitives)
{
	b3Vec3 lowerBound; // 702
	b3Vec3 upperBound; // 703
	b3Vec3 d; // 711
	b3Vec3 c; // 712
	b3Split split; // 714
	int i1; // 720
	int i2; // 720
	b3AABB leftBounds; // 820
	b3AABB rightBounds; // 826
	{
		int i; // 705
	}
	{
		float pivot; // 725
		{
			b3Primitive temp; // 742
		}
	}
	{
		float pivot; // 755
		{
			b3Primitive temp; // 772
		}
	}
	{
		float pivot; // 785
		{
			b3Primitive temp; // 802
		}
	}
	{
		int i; // 821
	}
	{
		int i; // 827
	}
} /* size: 0, variables: 9 */

// <06BAEF05> src/mesh.cpp:868
// variables: 52
// function calls: 52
int b3BuildRecursive(b3Array<b3MeshNode>& nodes, int count, b3Primitive* primitives, b3Primitive* base, bool useMedianSplit, int* height)
{
	b3AABB aabb; // 929
	int index; // 935
	{
		b3Split split; // 874
		int index; // 909
		int heightLeft; // 910
		int heightRight; // 910
		int leftIndex; // 911
		int rightIndex; // 912
		b3AABB aabb; // 919
		b3MeshNode* node; // 920
		{
			b3AABB bounds; // 893
			int index; // 900
			{
				int i; // 894
				b3AABB_Union(b3AABB bounds1,
						b3AABB bounds2);  // 896
			}
			{
				int newCapacity; // 98
			}
			b3Array<b3MeshNode>::AddUninitialized(); // 900
			b3Array<b3MeshNode>::operator[](
					int index);  // 901
			b3StoreLeaf(b3MeshNode& node,
					const b3AABB& aabb,
					int triangleCount,
					int triangleOffset);  // 901
		}
		{
			int i; // 705
		}
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 711
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 712
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 712
		{
			float pivot; // 725
			{
				b3Primitive temp; // 742
			}
		}
		{
			float pivot; // 785
			{
				b3Primitive temp; // 802
			}
		}
		{
			float pivot; // 755
			{
				b3Primitive temp; // 772
			}
		}
		{
			int i; // 821
			b3AABB_Union(b3AABB bounds1,
					b3AABB bounds2);  // 823
		}
		{
			int i; // 827
			b3AABB_Union(b3AABB bounds1,
					b3AABB bounds2);  // 829
		}
		b3SplitMedian(int count,
				b3Primitive* primitives);  // 877
		{
			int i; // 563
			b3Min(b3Vec3 a,
				b3Vec3 b);  // 845
			b3AABB_AddPoint(b3AABB a,
					b3Vec3 point);  // 565
		}
		{
			int axis; // 574
			{
				b3Vec3 extent; // 576
				b3Bucket buckets; // 583
				float factor; // 591
				b3Sub(b3Vec3 a,
					b3Vec3 b);  // 885
				b3MulSV(float s,
					b3Vec3 a);  // 885
				b3AABB_Extents(b3AABB bounds); // 576
				b3GetByIndex(b3Vec3 v,
						int index);  // 577
				{
					int i; // 584
				}
				b3GetByIndex(b3Vec3 v,
						int index);  // 592
				{
					int i; // 593
					{
						b3Vec3 center; // 595
						int index; // 596
						b3Min(b3Vec3 a,
							b3Vec3 b);  // 891
						b3Max(b3Vec3 a,
							b3Vec3 b);  // 892
						b3AABB_Union(b3AABB bounds1,
								b3AABB bounds2);  // 600
						b3GetByIndex(b3Vec3 v,
								int index);  // 596
						b3GetByIndex(b3Vec3 v,
								int index);  // 596
					}
				}
				b3GetByIndex(b3Vec3 v,
						int index);  // 592
				{
					int i; // 604
					{
						int leftCount; // 606
						b3AABB leftBounds; // 607
						int rightCount; // 614
						b3AABB rightBounds; // 615
						{
							int k; // 608
							b3AABB_Union(b3AABB bounds1,
									b3AABB bounds2);  // 611
						}
						{
							int k; // 616
							b3AABB_Union(b3AABB bounds1,
									b3AABB bounds2);  // 619
						}
						{
							float cost; // 625
							b3Sub(b3Vec3 a,
								b3Vec3 b);  // 874
							b3AABB_Area(b3AABB bounds); // 625
							b3Sub(b3Vec3 a,
								b3Vec3 b);  // 874
							b3AABB_Area(b3AABB bounds); // 625
						}
					}
				}
			}
		}
		{
			int axis; // 644
			float factor; // 645
			int splitIndex; // 648
			b3GetByIndex(b3Vec3 v,
					int index);  // 646
			b3GetByIndex(b3Vec3 v,
					int index);  // 646
			{
				int i; // 649
				{
					b3Vec3 center; // 651
					int index; // 652
					b3GetByIndex(b3Vec3 v,
							int index);  // 652
					b3GetByIndex(b3Vec3 v,
							int index);  // 652
					{
						b3Primitive temp; // 656
					}
				}
			}
		}
		b3SplitBinnedSah(int count,
				b3Primitive* primitives);  // 881
		{
			int i; // 674
			b3AABB_Union(b3AABB bounds1,
					b3AABB bounds2);  // 676
		}
		{
			int i; // 680
			b3AABB_Union(b3AABB bounds1,
					b3AABB bounds2);  // 683
		}
		b3AABB_Union(b3AABB bounds1,
				b3AABB bounds2);  // 686
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 885
		b3MulSV(float s,
			b3Vec3 a);  // 885
		b3AABB_Extents(b3AABB bounds); // 687
		b3MajorAxis(b3Vec3 v); // 687
		b3SplitHalf(int count,
				b3Primitive* primitives);  // 889
		{
			int newCapacity; // 98
		}
		b3Array<b3MeshNode>::AddUninitialized(); // 909
		b3MaxInt(int a,
			int b);  // 914
		b3AABB_Union(b3AABB bounds1,
				b3AABB bounds2);  // 919
		b3Array<b3MeshNode>::Get(
			int index);  // 920
	}
	{
		int i; // 930
		b3AABB_Union(b3AABB bounds1,
				b3AABB bounds2);  // 932
	}
	{
		int newCapacity; // 98
	}
	b3Array<b3MeshNode>::AddUninitialized(); // 935
	b3Array<b3MeshNode>::operator[](
			int index);  // 936
	b3StoreLeaf(b3MeshNode& node,
			const b3AABB& aabb,
			int triangleCount,
			int triangleOffset);  // 936
} /* size: 0, variables: 2, inline expansions: 3 (300 bytes) */

// <06BAE955> src/mesh.cpp:943
// variables: 14
// function calls: 14
bool b3SortMeshTriangles(b3MeshData* mesh)
{
	b3MeshTriangle* triangles; // 945
	uint8_t* materialIndices; // 946
	int offset; // 949
	b3Array<b3MeshTriangle> tempTriangles; // 950
	b3Array<unsigned char> tempMaterialIndices; // 953
	int count; // 956
	b3MeshNode* stack; // 957
	{
		b3MeshNode* node; // 962
		{
			int triangleCount; // 976
			int triangleOffset; // 977
			{
				int triangle; // 979
				{
					int index; // 981
					{
						int newCapacity; // 132
					}
					b3Array<unsigned char>::PushBack(
						const unsigned char& value);  // 983
					{
						int newCapacity; // 132
					}
					b3Array<b3MeshTriangle>::PushBack(
						const b3MeshTriangle& value);  // 982
				}
			}
		}
		b3GetRightChild(b3MeshNode* node); // 971
		b3IsLeaf(const b3MeshNode* node); // 964
	}
	b3GetMeshTrianglesWrite(b3MeshData* mesh); // 945
	b3GetMeshMaterialIndicesWrite(b3MeshData* mesh); // 946
	b3Array<b3MeshTriangle>::Create(
		int initialCapacity);  // 951
	b3Array<unsigned char>::Create(
		int initialCapacity);  // 954
	b3GetMeshNodesWrite(b3MeshData* mesh); // 72
	b3GetRootWrite(b3MeshData* mesh); // 958
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 996
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 997
	b3Array<b3MeshTriangle>::Destroy(); // 999
	b3Array<unsigned char>::Destroy(); // 1000
} /* size: 0, variables: 7, inline expansions: 10 (371 bytes) */

// <06BA15EC> src/mesh.cpp:1006
// member variables: 7
// struct size: 20
typedef struct {
	int vertex1; /* 0 4 */
	int vertex2; /* 4 4 */
	int triangle1; /* 8 4 */
	int triangle2; /* 12 4 */
	uint16_t triangleCount; /* 16 2 */
	uint8_t triangleEdgeIndex1; /* 18 1 */
	uint8_t triangleEdgeIndex2; /* 19 1 */
} b3MeshEdge;

// <06BADB98> src/mesh.cpp:1046
// variables: 49
void b3IdentifyEdges(b3MeshData* mesh)
{
	b3MeshTriangle* triangles; // 1048
	const b3Vec3* vertices; // 1049
	uint8_t* flags; // 1050
	int triangleCount; // 1052
	int edgeCount; // 1053
	b3MeshEdge* edges; // 1054
	b3Vec3* normals; // 1055
	b3EdgeMap map; // 1099
	uint64_t key; // 1103
	{
		int i; // 1057
		{
			b3MeshTriangle* triangle; // 1059
			int i1; // 1060
			int i2; // 1061
			int i3; // 1062
			b3Vec3 v1; // 1088
			b3Vec3 v2; // 1089
			b3Vec3 v3; // 1090
			b3Vec3 e1; // 1092
			b3Vec3 e2; // 1093
			b3Vec3 n; // 1094
		}
	}
	{
		int i; // 1107
		{
			b3MeshEdge* edge; // 1109
			b3EdgeMap_itr itr; // 1111
			{
				int otherIndex; // 1119
				b3MeshEdge* base; // 1122
			}
		}
	}
	{
		int i; // 1135
		{
			b3MeshEdge* edge; // 1137
			b3MeshTriangle* triangle1; // 1146
			b3MeshTriangle* triangle2; // 1147
			uint8_t* flag1; // 1148
			uint8_t* flag2; // 1149
			int j1; // 1151
			int j2; // 1152
			int j3; // 1153
			int opposite; // 1155
			int i1; // 1175
			int i2; // 1176
			int i3; // 1177
			b3Vec3 v1; // 1179
			b3Vec3 v2; // 1180
			b3Vec3 v3; // 1181
			b3Vec3 p; // 1182
			float cos5Deg; // 1184
			float signedVolume; // 1185
			b3Vec3 n1; // 1186
			b3Vec3 n2; // 1187
			float cosAngle; // 1188
			{
				int edgeFlags; // 1191
			}
			{
				int edgeFlags; // 1198
			}
		}
	}
} /* size: 0, variables: 9 */

// <06BAD22C> src/mesh.cpp:1208
// variables: 21
// function calls: 15
b3MeshData* b3CreateGridMesh(int xCount, int zCount, float cellWidth, int materialCount, bool identifyEdges)
{
	int vertexCount; // 1213
	b3Array<b3Vec3> vertices; // 1215
	int index; // 1217
	float xWidth; // 1219
	float zWidth; // 1220
	float x; // 1222
	int triangleCount; // 1237
	b3Array<int> indices; // 1239
	b3Array<unsigned char> materialIndices; // 1242
	int materialIndex; // 1245
	b3MeshDef def; // 1281
	b3MeshData* meshData; // 1290
	{
		int ix; // 1223
		{
			float z; // 1225
			{
				int iz; // 1226
				b3Array<b3Vec3>::operator[](
						int index);  // 1228
			}
		}
	}
	{
		int ix; // 1247
		{
			int iz; // 1249
			{
				int index1; // 1251
				int index2; // 1252
				int index3; // 1253
				int index4; // 1254
				b3Array<int>::operator[](
						int index);  // 1261
				b3Array<int>::operator[](
						int index);  // 1262
				b3Array<int>::operator[](
						int index);  // 1263
				b3Array<int>::operator[](
						int index);  // 1265
				b3Array<int>::operator[](
						int index);  // 1266
				b3Array<int>::operator[](
						int index);  // 1267
				b3Array<unsigned char>::operator[](
						int index);  // 1271
				b3Array<unsigned char>::operator[](
						int index);  // 1272
			}
		}
	}
	b3Array<b3Vec3>::Resize(
		int newCount);  // 1216
	b3Array<int>::Resize(
		int newCount);  // 1240
	b3Array<unsigned char>::Resize(
		int newCount);  // 1243
	b3Array<int>::Destroy(); // 1292
	b3Array<b3Vec3>::Destroy(); // 1293
	b3Array<unsigned char>::Destroy(); // 1294
} /* size: 0, variables: 12, inline expansions: 6 (0 bytes) */

// <06BAC987> src/mesh.cpp:1299
// variables: 24
// function calls: 11
b3MeshData* b3CreateWaveMesh(int xCount, int zCount, float cellWidth, float amplitude, float rowFrequency, float columnFrequency)
{
	int vertexCount; // 1303
	b3Array<b3Vec3> vertices; // 1305
	int index; // 1307
	float xWidth; // 1309
	float zWidth; // 1310
	float omegaZ; // 1312
	float omegaX; // 1313
	float x; // 1315
	int triangleCount; // 1335
	b3Array<int> indices; // 1337
	b3MeshDef def; // 1368
	b3MeshData* meshData; // 1376
	{
		int ix; // 1316
		{
			float rowHeight; // 1318
			float z; // 1320
			{
				int iz; // 1321
				{
					float columnHeight; // 1323
					float y; // 1325
					b3Array<b3Vec3>::operator[](
							int index);  // 1326
				}
			}
		}
	}
	{
		int ix; // 1341
		{
			int iz; // 1343
			{
				int index1; // 1345
				int index2; // 1346
				int index3; // 1347
				int index4; // 1348
				b3Array<int>::operator[](
						int index);  // 1355
				b3Array<int>::operator[](
						int index);  // 1356
				b3Array<int>::operator[](
						int index);  // 1357
				b3Array<int>::operator[](
						int index);  // 1359
				b3Array<int>::operator[](
						int index);  // 1360
				b3Array<int>::operator[](
						int index);  // 1361
			}
		}
	}
	b3Array<b3Vec3>::Resize(
		int newCount);  // 1306
	b3Array<int>::Resize(
		int newCount);  // 1338
	b3Array<int>::Destroy(); // 1378
	b3Array<b3Vec3>::Destroy(); // 1379
} /* size: 0, variables: 12, inline expansions: 4 (0 bytes) */

// <06BAC27F> src/mesh.cpp:1384
// variables: 26
// function calls: 14
b3MeshData* b3CreateTorusMesh(int radialResolution, int tubularResolution, float radius, float thickness)
{
	b3Array<b3Vec3> vertices; // 1387
	b3Array<int> indices; // 1405
	b3MeshDef def; // 1427
	b3MeshData* meshData; // 1435
	{
		int radialIndex; // 1389
		{
			int tubularIndex; // 1391
			{
				float u; // 1393
				float v; // 1394
				float x; // 1396
				float y; // 1397
				float z; // 1398
				{
					int newCapacity; // 132
				}
				b3Array<b3Vec3>::PushBack(
					const b3Vec3& value);  // 1400
				b3Cos(float radians); // 1396
				b3Cos(float radians); // 1396
				b3Cos(float radians); // 1397
				b3Sin(float radians); // 1397
				b3Sin(float radians); // 1398
			}
		}
	}
	{
		int radialIndex1; // 1406
		{
			int radialIndex2; // 1408
			{
				int tubularIndex1; // 1409
				{
					int tubularIndex2; // 1411
					int index1; // 1412
					int index2; // 1413
					int index3; // 1414
					int index4; // 1415
					{
						int newCapacity; // 132
					}
					b3Array<int>::PushBack(
						const int& value);  // 1417
					{
						int newCapacity; // 132
					}
					b3Array<int>::PushBack(
						const int& value);  // 1418
					{
						int newCapacity; // 132
					}
					b3Array<int>::PushBack(
						const int& value);  // 1419
					{
						int newCapacity; // 132
					}
					b3Array<int>::PushBack(
						const int& value);  // 1421
					{
						int newCapacity; // 132
					}
					b3Array<int>::PushBack(
						const int& value);  // 1422
					{
						int newCapacity; // 132
					}
					b3Array<int>::PushBack(
						const int& value);  // 1423
				}
			}
		}
	}
	b3Array<b3Vec3>::Destroy(); // 1437
	b3Array<int>::Destroy(); // 1438
} /* size: 0, variables: 4, inline expansions: 2 (0 bytes) */

// <06BAC0BB> src/mesh.cpp:1442
// variables: 7
// function calls: 2
b3MeshData* b3CreateBoxMesh(b3Vec3 center, b3Vec3 extent, bool identifyEdges)
{
	float x; // 1444
	float y; // 1445
	float z; // 1446
	b3Vec3 vertices; // 1447
	int indices; // 1456
	b3MeshDef def; // 1465
	{
		int i; // 1451
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 978
		operator+=(b3Vec3& a,
				b3Vec3 b);  // 1453
	}
} /* size: 0, variables: 6 */

// <06BA9022> src/mesh.cpp:1690
// variables: 35
// function calls: 49
bool b3OverlapMesh(const b3Mesh* shape, b3Transform shapeTransform, const b3ShapeProxy* proxy)
{
	b3SimplexCache cache; // 1693
	b3Vec3 buffer; // 1695
	b3ShapeProxy localProxy; // 1696
	b3AABB aabb; // 1697
	b3Vec3 meshScale; // 1699
	b3V32 scale; // 1702
	b3V32 invScale; // 1703
	b3V32 temp1; // 1704
	b3V32 temp2; // 1705
	b3V32 invScaledBoundsMin; // 1706
	b3V32 invScaledBoundsMax; // 1707
	b3V32 invScaledBoundsCenter; // 1708
	b3V32 invScaledBoundsExtent; // 1709
	b3DistanceInput input; // 1711
	int count; // 1717
	const b3MeshNode* stack; // 1718
	const b3MeshNode* node; // 1719
	const b3MeshTriangle* triangles; // 1720
	const b3Vec3* vertices; // 1721
	{
		b3V32 nodeMin; // 1726
		b3V32 nodeMax; // 1727
		{
			int triangleCount; // 1732
			int triangleOffset; // 1733
			{
				int index; // 1735
				{
					int triangleIndex; // 1737
					const b3MeshTriangle& triangle; // 1738
					b3Vec3 vertex1; // 1740
					b3Vec3 vertex2; // 1741
					b3Vec3 vertex3; // 1742
					b3V32 v1; // 1743
					b3V32 v2; // 1744
					b3V32 v3; // 1745
					{
						b3Vec3 triangleVertices; // 1751
						b3DistanceOutput output; // 1758
						float tolerance; // 1760
						b3Mul(b3Vec3 a,
							b3Vec3 b);  // 1011
						operator*(b3Vec3 a,
								b3Vec3 b);  // 1751
						b3Mul(b3Vec3 a,
							b3Vec3 b);  // 1011
						operator*(b3Vec3 a,
								b3Vec3 b);  // 1751
						b3Mul(b3Vec3 a,
							b3Vec3 b);  // 1011
						operator*(b3Vec3 a,
								b3Vec3 b);  // 1751
					}
					_mm_loadu_ps(const float* __P); // 67
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 68
					b3LoadV(const float* src); // 1744
					_mm_loadu_ps(const float* __P); // 67
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 68
					b3LoadV(const float* src); // 1743
					_mm_loadu_ps(const float* __P); // 67
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 68
					b3LoadV(const float* src); // 1745
				}
			}
		}
		_mm_loadu_ps(const float* __P); // 67
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 68
		b3LoadV(const float* src); // 1726
		_mm_loadu_ps(const float* __P); // 67
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 68
		b3LoadV(const float* src); // 1727
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 160
		_mm_movemask_ps(__m128 __A); // 161
		b3AllLessEq3V(b3V32 a,
				b3V32 b);  // 337
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 117
		b3MaxV(b3V32 a,
			b3V32 b);  // 336
		b3TestBoundsOverlap(b3V32 nodeMin1,
					b3V32 nodeMax1,
					b3V32 nodeMin2,
					b3V32 nodeMax2);  // 1728
		b3IsLeaf(const b3MeshNode* node); // 1730
		b3IsLeaf(const b3MeshNode* node); // 59
		b3GetRightChild(const b3MeshNode* node); // 1773
		b3IsLeaf(const b3MeshNode* node); // 45
		b3GetLeftChild(const b3MeshNode* node); // 1774
	}
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	_mm_loadu_ps(const float* __P); // 67
	b3LoadV(const float* src); // 1702
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	_mm_loadu_ps(const float* __P); // 67
	b3LoadV(const float* src); // 1704
	_mm_loadu_ps(const float* __P); // 67
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	b3LoadV(const float* src); // 1705
	b3GetMeshNodes(const b3MeshData* mesh); // 66
	b3GetRoot(const b3MeshData* mesh); // 1719
	_mm_min_ps(__m128 __A,
			__m128 __B);  // 112
	b3MinV(b3V32 a,
		b3V32 b);  // 1706
	_mm_max_ps(__m128 __A,
			__m128 __B);  // 117
	b3MaxV(b3V32 a,
		b3V32 b);  // 1707
	b3GetMeshTriangles(const b3MeshData* mesh); // 1720
	b3GetMeshVertices(const b3MeshData* mesh); // 1721
} /* size: 0, variables: 19, inline expansions: 17 (218 bytes) */

// <06BA7574> src/mesh.cpp:1798
// variables: 39
// function calls: 101
b3CastOutput b3RayCastMesh(const b3Mesh* mesh, const b3RayCastInput* input)
{
	const b3MeshData* data; // 1800
	b3Vec3 meshScale; // 1801
	b3CastOutput bestOutput; // 1803
	b3V32 lambda; // 1807
	b3V32 rayStart; // 1809
	b3V32 rayDelta; // 1810
	b3V32 scale; // 1812
	b3V32 invScale; // 1813
	bool clockwise; // 1814
	b3V32 invScaledRayStart; // 1817
	b3V32 invScaledRayDelta; // 1818
	b3V32 invScaledRayEnd; // 1819
	b3V32 invScaledRayMin; // 1820
	b3V32 invScaledRayMax; // 1821
	int count; // 1823
	const b3MeshNode* stack; // 1824
	const b3MeshNode* node; // 1825
	const b3MeshTriangle* triangles; // 1826
	const b3Vec3* vertices; // 1827
	const uint8_t* materialIndices; // 1828
	{
		b3V32 nodeMin; // 1833
		b3V32 nodeMax; // 1834
		{
			int triangleCount; // 1841
			int triangleOffset; // 1842
			{
				int index; // 1844
				{
					int triangleIndex; // 1846
					const b3MeshTriangle& triangle; // 1847
					b3Vec3 vertex1; // 1850
					b3Vec3 vertex2; // 1851
					b3Vec3 vertex3; // 1851
					b3V32 v1; // 1866
					b3V32 v2; // 1867
					b3V32 v3; // 1868
					float alpha; // 1870
					{
						b3Vec3 edge1; // 1875
						b3Vec3 edge2; // 1876
						b3Sub(b3Vec3 a,
							b3Vec3 b);  // 1021
						operator-(b3Vec3 a,
								b3Vec3 b);  // 1876
						b3Sub(b3Vec3 a,
							b3Vec3 b);  // 1021
						operator-(b3Vec3 a,
								b3Vec3 b);  // 1875
						b3Cross(b3Vec3 a,
							b3Vec3 b);  // 1877
						{
							float s; // 247
							b3Vec3 u; // 248
						}
						b3Normalize(b3Vec3 a); // 1877
						b3MulSV(float s,
							b3Vec3 a);  // 1001
						operator*(float s,
								b3Vec3 a);  // 1878
						b3Add(b3Vec3 a,
							b3Vec3 b);  // 1016
						operator+(b3Vec3 a,
								b3Vec3 b);  // 1878
						_mm_set1_ps(float __F); // 948
						_mm_set_ps1(float __F); // 100
						b3SplatV(float x); // 1885
						_mm_min_ps(__m128 __A,
								__m128 __B);  // 112
						b3MinV(b3V32 a,
							b3V32 b);  // 1887
						_mm_max_ps(__m128 __A,
								__m128 __B);  // 117
						b3MaxV(b3V32 a,
							b3V32 b);  // 1888
					}
					b3Mul(b3Vec3 a,
						b3Vec3 b);  // 1011
					operator*(b3Vec3 a,
							b3Vec3 b);  // 1850
					b3Mul(b3Vec3 a,
						b3Vec3 b);  // 1011
					operator*(b3Vec3 a,
							b3Vec3 b);  // 1856
					b3Mul(b3Vec3 a,
						b3Vec3 b);  // 1011
					operator*(b3Vec3 a,
							b3Vec3 b);  // 1857
					_mm_loadu_ps(const float* __P); // 67
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 68
					b3LoadV(const float* src); // 1866
					_mm_loadu_ps(const float* __P); // 67
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 68
					b3LoadV(const float* src); // 1867
					_mm_loadu_ps(const float* __P); // 67
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 68
					b3LoadV(const float* src); // 1868
				}
			}
		}
		{
			int axis; // 1895
			b3GetV(b3V32 a,
				int index);  // 1896
			b3IsLeaf(const b3MeshNode* node); // 59
			b3GetRightChild(const b3MeshNode* node); // 1899
			b3IsLeaf(const b3MeshNode* node); // 45
			b3GetLeftChild(const b3MeshNode* node); // 1900
			b3IsLeaf(const b3MeshNode* node); // 45
			b3GetLeftChild(const b3MeshNode* node); // 1905
			b3IsLeaf(const b3MeshNode* node); // 59
			b3GetRightChild(const b3MeshNode* node); // 1906
		}
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 122
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 123
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 124
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 125
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 127
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 127
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 127
		b3CrossV(b3V32 a,
			b3V32 b);  // 351
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 134
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 135
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 132
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 133
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 137
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 137
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 137
		b3ModifiedCrossV(b3V32 a,
				b3V32 b);  // 351
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 107
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 107
		b3AbsV(b3V32 a); // 351
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 107
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 107
		b3AbsV(b3V32 a); // 351
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 160
		_mm_movemask_ps(__m128 __A); // 161
		b3AllLessEq3V(b3V32 a,
				b3V32 b);  // 352
		b3TestBoundsRayOverlap(b3V32 nodeMin,
					b3V32 nodeMax,
					b3V32 rayStart,
					b3V32 rayDelta);  // 1836
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 117
		b3MaxV(b3V32 a,
			b3V32 b);  // 336
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 160
		_mm_movemask_ps(__m128 __A); // 161
		b3AllLessEq3V(b3V32 a,
				b3V32 b);  // 337
		b3TestBoundsOverlap(b3V32 nodeMin1,
					b3V32 nodeMax1,
					b3V32 nodeMin2,
					b3V32 nodeMax2);  // 1835
		b3IsLeaf(const b3MeshNode* node); // 1839
		_mm_loadu_ps(const float* __P); // 67
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 68
		b3LoadV(const float* src); // 1833
		_mm_loadu_ps(const float* __P); // 67
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 68
		b3LoadV(const float* src); // 1834
	}
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	_mm_loadu_ps(const float* __P); // 67
	b3LoadV(const float* src); // 1809
	_mm_loadu_ps(const float* __P); // 67
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	b3LoadV(const float* src); // 1810
	_mm_set1_ps(float __F); // 948
	_mm_set_ps1(float __F); // 100
	b3SplatV(float x); // 1807
	_mm_loadu_ps(const float* __P); // 67
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	b3LoadV(const float* src); // 1812
	b3GetMeshNodes(const b3MeshData* mesh); // 66
	b3GetRoot(const b3MeshData* mesh); // 1825
	b3GetMeshTriangles(const b3MeshData* mesh); // 1826
	b3GetMeshVertices(const b3MeshData* mesh); // 1827
	b3GetMeshMaterialIndices(const b3MeshData* mesh); // 1828
	_mm_min_ps(__m128 __A,
			__m128 __B);  // 112
	b3MinV(b3V32 a,
		b3V32 b);  // 1820
	_mm_max_ps(__m128 __A,
			__m128 __B);  // 117
	b3MaxV(b3V32 a,
		b3V32 b);  // 1821
} /* size: 0, variables: 20, inline expansions: 21 (253 bytes) */

// <06BA54F6> src/mesh.cpp:1923
// variables: 51
// function calls: 136
b3CastOutput b3ShapeCastMesh(const b3Mesh* mesh, const b3ShapeCastInput* input)
{
	const b3MeshData* data; // 1925
	b3Vec3 meshScale; // 1926
	b3CastOutput bestOutput; // 1928
	b3V32 lambda; // 1932
	b3AABB shapeBounds; // 1934
	b3Vec3 center; // 1935
	b3Vec3 extents; // 1936
	b3V32 shapeExtent; // 1937
	b3V32 rayStart; // 1939
	b3V32 rayDelta; // 1940
	b3V32 rayEnd; // 1941
	b3V32 rayMin; // 1942
	b3V32 rayMax; // 1943
	b3V32 scale; // 1945
	b3V32 invScale; // 1946
	b3V32 absInvScale; // 1947
	bool clockwise; // 1948
	b3V32 invScaledRayStart; // 1951
	b3V32 invScaledRayDelta; // 1952
	b3V32 invScaledRayEnd; // 1953
	b3V32 invScaledRayMin; // 1954
	b3V32 invScaledRayMax; // 1955
	b3V32 invScaledShapeExtent; // 1956
	int count; // 1958
	const b3MeshNode* stack; // 1959
	const b3MeshNode* node; // 1960
	const b3MeshTriangle* triangles; // 1961
	const b3Vec3* vertices; // 1962
	const uint8_t* materialIndices; // 1963
	{
		b3V32 nodeMin; // 1968
		b3V32 nodeMax; // 1969
		{
			int triangleCount; // 1977
			int triangleOffset; // 1978
			{
				int index; // 1980
				{
					int triangleIndex; // 1982
					const b3MeshTriangle& triangle; // 1983
					b3Vec3 vertex1; // 1986
					b3Vec3 vertex2; // 1987
					b3Vec3 vertex3; // 1987
					b3V32 v1; // 2001
					b3V32 v2; // 2002
					b3V32 v3; // 2003
					b3V32 triangleMin; // 2005
					b3V32 triangleMax; // 2006
					{
						b3Vec3 origin; // 2012
						b3Vec3 triangleVertices; // 2013
						b3Transform shiftedOrigin; // 2014
						b3ShapeCastPairInput pairInput; // 2016
						b3CastOutput pairOutput; // 2025
						b3Sub(b3Vec3 a,
							b3Vec3 b);  // 1021
						operator-(b3Vec3 a,
								b3Vec3 b);  // 2013
						b3Sub(b3Vec3 a,
							b3Vec3 b);  // 1021
						operator-(b3Vec3 a,
								b3Vec3 b);  // 2013
						b3Sub(b3Vec3 a,
							b3Vec3 b);  // 1021
						operator-(b3Vec3 a,
								b3Vec3 b);  // 2014
						b3Add(b3Vec3 a,
							b3Vec3 b);  // 978
						operator+=(b3Vec3& a,
								b3Vec3 b);  // 2029
						_mm_set1_ps(float __F); // 948
						_mm_set_ps1(float __F); // 100
						b3SplatV(float x); // 2036
						_mm_min_ps(__m128 __A,
								__m128 __B);  // 112
						b3MinV(b3V32 a,
							b3V32 b);  // 2038
						_mm_max_ps(__m128 __A,
								__m128 __B);  // 117
						b3MaxV(b3V32 a,
							b3V32 b);  // 2039
						_mm_min_ps(__m128 __A,
								__m128 __B);  // 112
						b3MinV(b3V32 a,
							b3V32 b);  // 2043
						_mm_max_ps(__m128 __A,
								__m128 __B);  // 117
						b3MaxV(b3V32 a,
							b3V32 b);  // 2044
					}
					_mm_max_ps(__m128 __A,
							__m128 __B);  // 117
					b3MaxV(b3V32 a,
						b3V32 b);  // 336
					_mm_cmple_ps(__m128 __A,
							__m128 __B);  // 160
					_mm_movemask_ps(__m128 __A); // 161
					b3AllLessEq3V(b3V32 a,
							b3V32 b);  // 337
					b3TestBoundsOverlap(b3V32 nodeMin1,
								b3V32 nodeMax1,
								b3V32 nodeMin2,
								b3V32 nodeMax2);  // 2009
					b3Mul(b3Vec3 a,
						b3Vec3 b);  // 1011
					operator*(b3Vec3 a,
							b3Vec3 b);  // 1986
					b3Mul(b3Vec3 a,
						b3Vec3 b);  // 1011
					operator*(b3Vec3 a,
							b3Vec3 b);  // 1992
					b3Mul(b3Vec3 a,
						b3Vec3 b);  // 1011
					operator*(b3Vec3 a,
							b3Vec3 b);  // 1993
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 68
					_mm_loadu_ps(const float* __P); // 67
					b3LoadV(const float* src); // 2001
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 68
					_mm_loadu_ps(const float* __P); // 67
					b3LoadV(const float* src); // 2002
					_mm_loadu_ps(const float* __P); // 67
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 68
					b3LoadV(const float* src); // 2003
					_mm_min_ps(__m128 __A,
							__m128 __B);  // 112
					b3MinV(b3V32 a,
						b3V32 b);  // 2005
					_mm_min_ps(__m128 __A,
							__m128 __B);  // 112
					b3MinV(b3V32 a,
						b3V32 b);  // 2005
					_mm_max_ps(__m128 __A,
							__m128 __B);  // 117
					b3MaxV(b3V32 a,
						b3V32 b);  // 2006
					_mm_max_ps(__m128 __A,
							__m128 __B);  // 117
					b3MaxV(b3V32 a,
						b3V32 b);  // 2006
				}
			}
		}
		{
			int axis; // 2052
			b3GetV(b3V32 a,
				int index);  // 2053
			b3IsLeaf(const b3MeshNode* node); // 59
			b3GetRightChild(const b3MeshNode* node); // 2056
			b3IsLeaf(const b3MeshNode* node); // 45
			b3GetLeftChild(const b3MeshNode* node); // 2057
			b3IsLeaf(const b3MeshNode* node); // 45
			b3GetLeftChild(const b3MeshNode* node); // 2062
			b3IsLeaf(const b3MeshNode* node); // 59
			b3GetRightChild(const b3MeshNode* node); // 2063
		}
		_mm_loadu_ps(const float* __P); // 67
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 68
		b3LoadV(const float* src); // 1968
		_mm_loadu_ps(const float* __P); // 67
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 68
		b3LoadV(const float* src); // 1969
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 117
		b3MaxV(b3V32 a,
			b3V32 b);  // 336
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 160
		_mm_movemask_ps(__m128 __A); // 161
		b3AllLessEq3V(b3V32 a,
				b3V32 b);  // 337
		b3TestBoundsOverlap(b3V32 nodeMin1,
					b3V32 nodeMax1,
					b3V32 nodeMin2,
					b3V32 nodeMax2);  // 1971
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 122
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 123
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 124
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 125
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 127
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 127
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 127
		b3CrossV(b3V32 a,
			b3V32 b);  // 351
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 134
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 135
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 132
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 133
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 137
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 137
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 137
		b3ModifiedCrossV(b3V32 a,
				b3V32 b);  // 351
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 107
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 107
		b3AbsV(b3V32 a); // 351
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 107
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 107
		b3AbsV(b3V32 a); // 351
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 160
		_mm_movemask_ps(__m128 __A); // 161
		b3AllLessEq3V(b3V32 a,
				b3V32 b);  // 352
		b3TestBoundsRayOverlap(b3V32 nodeMin,
					b3V32 nodeMax,
					b3V32 rayStart,
					b3V32 rayDelta);  // 1972
		b3IsLeaf(const b3MeshNode* node); // 1975
	}
	_mm_set1_ps(float __F); // 948
	_mm_set_ps1(float __F); // 100
	b3SplatV(float x); // 1932
	{
		int i; // 830
	}
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 838
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 837
	b3MakeAABB(const b3Vec3* points,
			int count,
			float radius);  // 1934
	b3MulSV(float s,
		b3Vec3 a);  // 880
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 880
	b3AABB_Center(b3AABB bounds); // 1935
	b3GetMeshNodes(const b3MeshData* mesh); // 66
	b3GetRoot(const b3MeshData* mesh); // 1960
	b3GetMeshVertices(const b3MeshData* mesh); // 1962
	b3GetMeshTriangles(const b3MeshData* mesh); // 1961
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 885
	b3MulSV(float s,
		b3Vec3 a);  // 885
	b3AABB_Extents(b3AABB bounds); // 1936
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	_mm_loadu_ps(const float* __P); // 67
	b3LoadV(const float* src); // 1945
	b3GetMeshMaterialIndices(const b3MeshData* mesh); // 1963
	_mm_loadu_ps(const float* __P); // 67
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	b3LoadV(const float* src); // 1940
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	_mm_loadu_ps(const float* __P); // 67
	b3LoadV(const float* src); // 1937
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	_mm_loadu_ps(const float* __P); // 67
	b3LoadV(const float* src); // 1939
	_mm_min_ps(__m128 __A,
			__m128 __B);  // 112
	b3MinV(b3V32 a,
		b3V32 b);  // 1942
	_mm_max_ps(__m128 __A,
			__m128 __B);  // 117
	b3MaxV(b3V32 a,
		b3V32 b);  // 1943
	_mm_sub_ps(__m128 __A,
			__m128 __B);  // 107
	_mm_max_ps(__m128 __A,
			__m128 __B);  // 107
	b3AbsV(b3V32 a); // 1947
	_mm_min_ps(__m128 __A,
			__m128 __B);  // 112
	b3MinV(b3V32 a,
		b3V32 b);  // 1954
	_mm_max_ps(__m128 __A,
			__m128 __B);  // 117
	b3MaxV(b3V32 a,
		b3V32 b);  // 1955
} /* size: 0, variables: 29, inline expansions: 40 (804 bytes) */

// <06BA527D> src/mesh.cpp:2080
// variables: 7
// function calls: 9
b3Triangle b3GetMeshTriangle(const b3Mesh* mesh, int triangleIndex)
{
	const b3MeshTriangle* triangles; // 2084
	const uint8_t* flags; // 2085
	const b3Vec3* vertices; // 2086
	b3Triangle result; // 2088
	b3MeshTriangle triangle; // 2089
	uint8_t triangleFlags; // 2090
	b3Vec3 scale; // 2092
	b3GetMeshTriangles(const b3MeshData* mesh); // 2084
	b3GetMeshVertices(const b3MeshData* mesh); // 2086
	b3GetMeshFlags(const b3MeshData* mesh); // 2085
	b3Mul(b3Vec3 a,
		b3Vec3 b);  // 1011
	operator*(b3Vec3 a,
			b3Vec3 b);  // 2094
	b3Mul(b3Vec3 a,
		b3Vec3 b);  // 1011
	operator*(b3Vec3 a,
			b3Vec3 b);  // 2099
	b3Mul(b3Vec3 a,
		b3Vec3 b);  // 1011
	operator*(b3Vec3 a,
			b3Vec3 b);  // 2100
} /* size: 0, variables: 7, inline expansions: 9 (254 bytes) */

// <06BA43E5> src/mesh.cpp:2124
// variables: 39
// function calls: 56
int b3CollideMoverAndMesh(b3PlaneResult* planes, int capacity, const b3Mesh* shape, const b3Capsule* mover)
{
	b3DistanceInput distanceInput; // 2131
	b3SimplexCache cache; // 2137
	float radius; // 2138
	b3V32 center1; // 2140
	b3V32 center2; // 2141
	b3V32 r; // 2142
	b3V32 boundsMin; // 2143
	b3V32 boundsMax; // 2144
	b3Vec3 meshScale; // 2147
	b3V32 scale; // 2148
	b3V32 invScale; // 2149
	b3V32 temp1; // 2150
	b3V32 temp2; // 2151
	b3V32 invScaledBoundsMin; // 2152
	b3V32 invScaledBoundsMax; // 2153
	b3V32 invScaledBoundsCenter; // 2154
	b3V32 invScaledBoundsExtent; // 2155
	int count; // 2157
	const b3MeshNode* stack; // 2158
	const b3MeshNode* node; // 2159
	const b3MeshTriangle* triangles; // 2160
	const b3Vec3* vertices; // 2161
	int planeCount; // 2163
	{
		b3V32 nodeMin; // 2167
		b3V32 nodeMax; // 2168
		{
			int triangleCount; // 2173
			int triangleOffset; // 2174
			{
				int index; // 2176
				{
					int triangleIndex; // 2178
					const b3MeshTriangle& triangle; // 2179
					b3Vec3 vertex1; // 2181
					b3Vec3 vertex2; // 2182
					b3Vec3 vertex3; // 2183
					b3V32 v1; // 2184
					b3V32 v2; // 2185
					b3V32 v3; // 2186
					{
						b3Vec3 triangleVertices; // 2193
						b3DistanceOutput distanceOutput; // 2200
						{
							b3Plane plane; // 2208
						}
						b3Mul(b3Vec3 a,
							b3Vec3 b);  // 1011
						operator*(b3Vec3 a,
								b3Vec3 b);  // 2193
						b3Mul(b3Vec3 a,
							b3Vec3 b);  // 1011
						operator*(b3Vec3 a,
								b3Vec3 b);  // 2193
						b3Mul(b3Vec3 a,
							b3Vec3 b);  // 1011
						operator*(b3Vec3 a,
								b3Vec3 b);  // 2193
					}
					_mm_loadu_ps(const float* __P); // 67
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 68
					b3LoadV(const float* src); // 2185
					_mm_loadu_ps(const float* __P); // 67
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 68
					b3LoadV(const float* src); // 2184
					_mm_loadu_ps(const float* __P); // 67
					_mm_and_ps(__m128 __A,
							__m128 __B);  // 68
					b3LoadV(const float* src); // 2186
				}
			}
		}
		b3IsLeaf(const b3MeshNode* node); // 2171
		b3IsLeaf(const b3MeshNode* node); // 59
		b3GetRightChild(const b3MeshNode* node); // 2224
		b3IsLeaf(const b3MeshNode* node); // 45
		b3GetLeftChild(const b3MeshNode* node); // 2225
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 117
		b3MaxV(b3V32 a,
			b3V32 b);  // 336
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 160
		_mm_movemask_ps(__m128 __A); // 161
		b3AllLessEq3V(b3V32 a,
				b3V32 b);  // 337
		b3TestBoundsOverlap(b3V32 nodeMin1,
					b3V32 nodeMax1,
					b3V32 nodeMin2,
					b3V32 nodeMax2);  // 2169
		_mm_loadu_ps(const float* __P); // 67
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 68
		b3LoadV(const float* src); // 2167
		_mm_loadu_ps(const float* __P); // 67
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 68
		b3LoadV(const float* src); // 2168
	}
	_mm_loadu_ps(const float* __P); // 67
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	b3LoadV(const float* src); // 2140
	_mm_loadu_ps(const float* __P); // 67
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	b3LoadV(const float* src); // 2141
	b3GetMeshNodes(const b3MeshData* mesh); // 66
	b3GetRoot(const b3MeshData* mesh); // 2159
	b3GetMeshTriangles(const b3MeshData* mesh); // 2160
	b3GetMeshVertices(const b3MeshData* mesh); // 2161
	_mm_set1_ps(float __F); // 948
	_mm_set_ps1(float __F); // 100
	b3SplatV(float x); // 2142
	_mm_min_ps(__m128 __A,
			__m128 __B);  // 112
	b3MinV(b3V32 a,
		b3V32 b);  // 2143
	_mm_max_ps(__m128 __A,
			__m128 __B);  // 117
	b3MaxV(b3V32 a,
		b3V32 b);  // 2144
	_mm_loadu_ps(const float* __P); // 67
	_mm_and_ps(__m128 __A,
			__m128 __B);  // 68
	b3LoadV(const float* src); // 2148
	_mm_min_ps(__m128 __A,
			__m128 __B);  // 112
	b3MinV(b3V32 a,
		b3V32 b);  // 2152
	_mm_max_ps(__m128 __A,
			__m128 __B);  // 117
	b3MaxV(b3V32 a,
		b3V32 b);  // 2153
} /* size: 0, variables: 23, inline expansions: 24 (0 bytes) */


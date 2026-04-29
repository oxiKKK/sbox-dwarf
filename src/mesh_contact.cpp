
//
// src/mesh_contact.cpp
//
//	referenced by: libengine2.so
//
//	functions: 11
//	structs: 5
//

// <06BBCBAB> src/mesh_contact.cpp:38
// member variable: 1
// struct size: 8
struct b3MeshTriangleIndexContext {
	b3StackArray<int, 128> * triangleIndices; /* 0 8 */
};

// <06BC4EDD> src/mesh_contact.cpp:43
// variables: 2
// function calls: 3
bool b3CollectTriangleIndicesCallback(b3Vec3 a, b3Vec3 b, b3Vec3 c, int triangleIndex, void* context)
{
	b3MeshTriangleIndexContext* triangleContext; // 46
	{
		int newCapacity; // 132
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 115
		b3StackArray<int, 128>::Reserve(
			int capacity);  // 133
	}
	b3StackArray<int, 128>::PushBack(
		const int& value);  // 47
} /* size: 284, variables: 1, inline expansions: 1 (221 bytes) */

// <06BC4E9F> src/mesh_contact.cpp:51
// variable: 1
void b3QueryMeshTriangles(b3StackArray<int, 128>& triangleIndices, const b3Mesh* mesh, const b3AABB& bounds)
{
	b3MeshTriangleIndexContext context; // 55
} /* size: 0, variables: 1 */

// <06BBCE69> src/mesh_contact.cpp:59
// member variable: 1
// struct size: 8
struct b3HeightFieldTriangleIndexContext {
	b3StackArray<int, 128> * triangleIndices; /* 0 8 */
};

// <06BC4D20> src/mesh_contact.cpp:64
// variables: 2
// function calls: 3
bool b3CollectHeightFieldTriangleIndicesCallback(b3Vec3 a, b3Vec3 b, b3Vec3 c, int triangleIndex, void* context)
{
	b3HeightFieldTriangleIndexContext* triangleContext; // 67
	{
		int newCapacity; // 132
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 115
		b3StackArray<int, 128>::Reserve(
			int capacity);  // 133
	}
	b3StackArray<int, 128>::PushBack(
		const int& value);  // 68
} /* size: 284, variables: 1, inline expansions: 1 (221 bytes) */

// <06BC4CDC> src/mesh_contact.cpp:72
// variable: 1
void b3QueryHeightFieldTriangles(b3StackArray<int, 128>& triangleIndices, const b3HeightField* heightField, const b3AABB& bounds)
{
	b3HeightFieldTriangleIndexContext context; // 77
} /* size: 0, variables: 1 */

// <06BC3ED7> src/mesh_contact.cpp:81
// variables: 9
// function calls: 43
void b3RefreshCache(b3ContactSim* sim, const b3Shape* shapeA, b3Transform xfA, const b3AABB& bounds)
{
	float radius; // 106
	b3Vec3 extension; // 107
	b3StackArray<int, 128> triangleIndices; // 112
	b3AABB localBounds; // 115
	b3StackArray<b3ContactCache, 128> contactCache; // 132
	int index2; // 135
	{
		int i; // 90
		b3Array<b3TriangleCache>::operator[](
				int index);  // 92
	}
	{
		int index1; // 136
		b3StackArray<b3ContactCache, 128>::operator[](
				int index);  // 138
		b3Array<b3TriangleCache>::operator[](
				int index);  // 140
		b3StackArray<int, 128>::operator[](
				int index);  // 140
		b3StackArray<int, 128>::operator[](
				int index);  // 145
		b3Array<b3TriangleCache>::operator[](
				int index);  // 145
		b3Array<b3TriangleCache>::operator[](
				int index);  // 147
		b3StackArray<b3ContactCache, 128>::operator[](
				int index);  // 147
	}
	{
		int i; // 153
		b3Array<b3TriangleCache>::operator[](
				int index);  // 155
		b3StackArray<int, 128>::operator[](
				int index);  // 155
		b3StackArray<b3ContactCache, 128>::operator[](
				int index);  // 155
		b3Array<b3TriangleCache>::operator[](
				int index);  // 159
		b3Array<b3TriangleCache>::operator[](
				int index);  // 159
	}
	b3AABB_Contains(b3AABB a,
			b3AABB b);  // 86
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
	b3InvertTransform(b3Transform t); // 115
	b3StackArray<int, 128>::Create(); // 19
	b3StackArray<int, 128>::b3StackArray(); // 112
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 108
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 109
	b3StackArray<int, 128>::Clear(); // 75
	b3QueryHeightFieldTriangles(b3StackArray<int, 128>& triangleIndices,
					const b3HeightField* heightField,
					const b3AABB& bounds);  // 123
	b3StackArray<b3ContactCache, 128>::Create(); // 19
	b3StackArray<b3ContactCache, 128>::b3StackArray(); // 132
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 115
	b3StackArray<b3ContactCache, 128>::Reserve(
		int capacity);  // 72
	b3StackArray<b3ContactCache, 128>::Resize(
		int count);  // 133
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 241
	b3Array<b3TriangleCache>::Reserve(
		int newCapacity);  // 78
	b3Array<b3TriangleCache>::Resize(
		int newCount);  // 152
	b3StackArray<b3ContactCache, 128>::Destroy(); // 24
	b3StackArray<b3ContactCache, 128>::~b3StackArray(); // 163
	b3StackArray<int, 128>::Destroy(); // 24
	b3StackArray<int, 128>::~b3StackArray(); // 163
	b3QueryMeshTriangles(b3StackArray<int, 128>& triangleIndices,
				const b3Mesh* mesh,
				const b3AABB& bounds);  // 118
} /* size: 0, variables: 6, inline expansions: 30 (2057 bytes) */

// <06BC3B02> src/mesh_contact.cpp:165
// variables: 20
// function calls: 5
int b3BuildTriangleClusters(b3Vec3* clusterNormals, int* memberships, const b3TriangleManifold* manifolds, int manifoldCount)
{
	int clusterCount; // 182
	{
		int i; // 175
	}
	{
		int i; // 183
		{
			b3Vec3 normal; // 185
			bool foundMatch; // 186
			{
				int j; // 187
				{
					float dot; // 189
					b3Dot(b3Vec3 a,
						b3Vec3 b);  // 189
				}
			}
		}
	}
	{
		int iteration; // 217
		{
			b3Vec3 normalAccumulators; // 219
			bool converged; // 222
			{
				int manifoldIndex; // 223
				{
					const b3Manifold& manifold; // 225
					float bestDot; // 228
					int bestClusterIndex; // 229
					{
						int clusterIndex; // 231
						{
							b3Vec3 clusterNormal; // 233
							float dot; // 235
							b3Dot(b3Vec3 a,
								b3Vec3 b);  // 235
						}
					}
					b3Add(b3Vec3 a,
						b3Vec3 b);  // 978
					operator+=(b3Vec3& a,
							b3Vec3 b);  // 250
				}
			}
			{
				int i; // 260
				{
					float s; // 247
					b3Vec3 u; // 248
				}
				b3Normalize(b3Vec3 a); // 262
			}
		}
	}
} /* size: 0, variables: 1 */

// <06BC3AC0> src/mesh_contact.cpp:269
// variable: 1
float b3FindImpulse(const b3ManifoldPoint& point, const b3Manifold& manifold)
{
	{
		int pointIndex; // 271
	}
} /* size: 0 */

// <06BC38A1> src/mesh_contact.cpp:282
// variables: 9
// function calls: 2
void b3MatchManifolds(b3Manifold* newManifolds, int newCount, b3Manifold* oldManifolds, int oldCount)
{
	bool consumed; // 285
	{
		int newManifoldIndex; // 286
		{
			b3Manifold& newManifold; // 288
			{
				int oldManifoldIndex; // 290
				{
					const b3Manifold& oldManifold; // 292
					{
						int newPointIndex; // 296
						{
							b3ManifoldPoint& newPoint; // 298
							float impulse; // 301
							{
								int pointIndex; // 271
							}
							b3FindImpulse(const b3ManifoldPoint& point,
									const b3Manifold& manifold);  // 301
						}
					}
					b3Dot(b3Vec3 a,
						b3Vec3 b);  // 293
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <06BBD13F> src/mesh_contact.cpp:321
// member variables: 2
// struct size: 8
struct b3TentativeTriangle {
	float squaredDistance; /* 0 4 */
	int index; /* 4 4 */
};

// <06BBD173> src/mesh_contact.cpp:329
// member variables: 2
// struct size: 520
struct b3FoundEdges {
	uint64_t keys[64]; /* 0 512 */
	int count; /* 512 4 */
};

// <06BC3828> src/mesh_contact.cpp:335
// variables: 5
inline bool b3AddEdge(b3FoundEdges* edges, int vertex1, int vertex2)
{
	uint64_t i1; // 337
	uint64_t i2; // 338
	uint64_t key; // 339
	int count; // 341
	{
		int i; // 342
	}
} /* size: 0, variables: 4 */

// <06BC37A9> src/mesh_contact.cpp:362
// variables: 5
inline bool b3FindEdge(b3FoundEdges* edges, int vertex1, int vertex2)
{
	uint64_t i1; // 364
	uint64_t i2; // 365
	uint64_t key; // 366
	int count; // 368
	{
		int i; // 369
	}
} /* size: 0, variables: 4 */

// <06BBD1B4> src/mesh_contact.cpp:382
// member variables: 2
// struct size: 260
struct b3FoundVertices {
	int keys[64]; /* 0 256 */
	int count; /* 256 4 */
};

// <06BC374F> src/mesh_contact.cpp:388
// variables: 3
inline bool b3AddVertex(b3FoundVertices* vertices, int vertex)
{
	int key; // 390
	int count; // 392
	{
		int i; // 393
	}
} /* size: 0, variables: 2 */


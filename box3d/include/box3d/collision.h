
//
// box3d/include/box3d/collision.h
//
//	referenced by: libengine2.so
//
//	functions: 65
//	structs: 50
//

// <00AC2CC8> ../box3d/include/box3d/collision.h:14
// member variables: 6
// struct size: 40
struct b3SurfaceMaterial {
	float friction; /* 0 4 */
	float restitution; /* 4 4 */
	float rollingResistance; /* 8 4 */
	b3Vec3 tangentVelocity; /* 12 12 */
	uint64_t userMaterialId; /* 24 8 */
	uint32_t customColor; /* 32 4 */
};

// <00B99842> ../box3d/include/box3d/collision.h:41
b3SurfaceMaterial b3DefaultSurfaceMaterial(void)
{
} /* size: 0 */

// <00995942> ../box3d/include/box3d/collision.h:59
// member variables: 3
// struct size: 28
struct b3RayCastInput {
	b3Vec3 origin; /* 0 12 */
	b3Vec3 translation; /* 12 12 */
	float maxFraction; /* 24 4 */
};

// <0099598E> ../box3d/include/box3d/collision.h:72
// member variables: 3
// struct size: 16
struct b3ShapeProxy {
	const b3Vec3 * points; /* 0 8 */
	int count; /* 8 4 */
	float radius; /* 12 4 */
};

// <06B03200> ../box3d/include/box3d/collision.h:87
// member variables: 4
// struct size: 40
struct b3ShapeCastInput {
	b3ShapeProxy proxy; /* 0 16 */
	b3Vec3 translation; /* 16 12 */
	float maxFraction; /* 28 4 */
	bool canEncroach; /* 32 1 */
};

// <009959DB> ../box3d/include/box3d/collision.h:103
// member variables: 9
// struct size: 48
struct b3CastOutput {
	b3Vec3 normal; /* 0 12 */
	b3Vec3 point; /* 12 12 */
	float fraction; /* 24 4 */
	int iterations; /* 28 4 */
	int triangleIndex; /* 32 4 */
	int childIndex; /* 36 4 */
	int materialIndex; /* 40 4 */
	bool hit; /* 44 1 */
	bool startSolid; /* 45 1 */
};

// <00AC2D8E> ../box3d/include/box3d/collision.h:159
// member variables: 2
// struct size: 8
struct b3TreeNodeChildren {
	int child1; /* 0 4 */
	int child2; /* 4 4 */
};

// <00AC2DC6> ../box3d/include/box3d/collision.h:167
// member variables: 6
// struct size: 48
struct b3TreeNode {
	/* ../box3d/include/box3d/collision.h:176 */
	union {
		b3TreeNodeChildren children; /* 0 8 */
		uint64_t userData; /* 0 8 */
	};
	/* ../box3d/include/box3d/collision.h:185 */
	union {
		int parent; /* 0 4 */
		int next; /* 0 4 */
	};
	b3AABB aabb; /* 0 24 */
	uint64_t categoryBits; /* 24 8 */
	union {
		b3TreeNodeChildren children; /* 32 8 */
		uint64_t userData; /* 32 8 */
	}; /* 32 8 */
	union {
		int parent; /* 40 4 */
		int next; /* 40 4 */
	}; /* 40 4 */
	uint16_t height; /* 44 2 */
	uint16_t flags; /* 46 2 */
};

// <00AC2E76> ../box3d/include/box3d/collision.h:202
// member variables: 12
// struct size: 80
struct b3DynamicTree {
	uint64_t version; /* 0 8 */
	b3TreeNode * nodes; /* 8 8 */
	int root; /* 16 4 */
	int nodeCount; /* 20 4 */
	int nodeCapacity; /* 24 4 */
	int proxyCount; /* 28 4 */
	int freeList; /* 32 4 */
	int * leafIndices; /* 40 8 */
	b3AABB * leafBoxes; /* 48 8 */
	b3Vec3 * leafCenters; /* 56 8 */
	int * binIndices; /* 64 8 */
	int rebuildCapacity; /* 72 4 */
};

// <00AC2F56> ../box3d/include/box3d/collision.h:241
// member variables: 2
// struct size: 8
struct b3TreeStats {
	int nodeVisits; /* 0 4 */
	int leafVisits; /* 4 4 */
};

// <06B24817> ../box3d/include/box3d/collision.h:251
b3DynamicTree b3DynamicTree_Create(int)
{
} /* size: 0 */

// <06B247B0> ../box3d/include/box3d/collision.h:254
void b3DynamicTree_Destroy(b3DynamicTree *)
{
} /* size: 0 */

// <06B24770> ../box3d/include/box3d/collision.h:257
int b3DynamicTree_CreateProxy(b3DynamicTree *, b3AABB, uint64_t, uint64_t)
{
} /* size: 0 */

// <06B24735> ../box3d/include/box3d/collision.h:260
void b3DynamicTree_DestroyProxy(b3DynamicTree *, int)
{
} /* size: 0 */

// <06B246F5> ../box3d/include/box3d/collision.h:263
void b3DynamicTree_MoveProxy(b3DynamicTree *, int, b3AABB)
{
} /* size: 0 */

// <06B246D6> ../box3d/include/box3d/collision.h:266
void b3DynamicTree_EnlargeProxy(b3DynamicTree *, int, b3AABB)
{
} /* size: 0 */

// <06B245FF> ../box3d/include/box3d/collision.h:280
b3TreeStats b3DynamicTree_Query(const b3DynamicTree *, b3AABB, uint64_t, bool, b3TreeQueryCallbackFcn *, void *)
{
} /* size: 0 */

// <06B24588> ../box3d/include/box3d/collision.h:345
int b3DynamicTree_Rebuild(b3DynamicTree *, bool)
{
} /* size: 0 */

// <06B2456D> ../box3d/include/box3d/collision.h:351
void b3DynamicTree_Validate(const b3DynamicTree *)
{
} /* size: 0 */

// <06B26528> ../box3d/include/box3d/collision.h:357
inline uint64_t b3DynamicTree_GetUserData(const b3DynamicTree* tree, int proxyId)
{
} /* size: 0 */

// <06B264F6> ../box3d/include/box3d/collision.h:363
inline b3AABB b3DynamicTree_GetAABB(const b3DynamicTree* tree, int proxyId)
{
} /* size: 0 */

// <00B9002F> ../box3d/include/box3d/collision.h:371
// member variables: 3
// struct size: 52
struct b3MassData {
	float mass; /* 0 4 */
	b3Vec3 center; /* 4 12 */
	b3Matrix3 inertia; /* 16 36 */
};

// <00AC2F8E> ../box3d/include/box3d/collision.h:379
// member variables: 2
// struct size: 16
struct b3Sphere {
	b3Vec3 center; /* 0 12 */
	float radius; /* 12 4 */
};

// <00AC2FCF> ../box3d/include/box3d/collision.h:390
// member variables: 3
// struct size: 28
struct b3Capsule {
	b3Vec3 center1; /* 0 12 */
	b3Vec3 center2; /* 12 12 */
	float radius; /* 24 4 */
};

// <00B9010D> ../box3d/include/box3d/collision.h:402
// member variable: 1
// struct size: 1
struct b3HullVertex {
	uint8_t edge; /* 0 1 */
};

// <00AC3020> ../box3d/include/box3d/collision.h:411
// member variables: 4
// struct size: 4
struct b3HullHalfEdge {
	uint8_t next; /* 0 1 */
	uint8_t twin; /* 1 1 */
	uint8_t origin; /* 2 1 */
	uint8_t face; /* 3 1 */
};

// <00B90195> ../box3d/include/box3d/collision.h:426
// member variable: 1
// struct size: 1
struct b3HullFace {
	uint8_t edge; /* 0 1 */
};

// <00995A88> ../box3d/include/box3d/collision.h:436
// member variables: 17
// struct size: 136
struct b3Hull {
	uint64_t version; /* 0 8 */
	int byteCount; /* 8 4 */
	b3AABB aabb; /* 12 24 */
	float surfaceArea; /* 36 4 */
	float volume; /* 40 4 */
	float innerRadius; /* 44 4 */
	float mass; /* 48 4 */
	b3Vec3 center; /* 52 12 */
	b3Matrix3 centralInertia; /* 64 36 */
	int vertexCount; /* 100 4 */
	int vertexOffset; /* 104 4 */
	int pointOffset; /* 108 4 */
	int edgeCount; /* 112 4 */
	int edgeOffset; /* 116 4 */
	int faceCount; /* 120 4 */
	int faceOffset; /* 124 4 */
	int planeOffset; /* 128 4 */
};

// <06C2AF2F> ../box3d/include/box3d/collision.h:468
inline const b3HullVertex* b3GetHullVertices(const b3Hull* hull)
{
} /* size: 0 */

// <00B4A6C9> ../box3d/include/box3d/collision.h:478
inline const b3Vec3* b3GetHullPoints(const b3Hull* hull)
{
} /* size: 0 */

// <00B4A6A4> ../box3d/include/box3d/collision.h:488
inline const b3HullHalfEdge* b3GetHullEdges(const b3Hull* hull)
{
} /* size: 0 */

// <00CB246B> ../box3d/include/box3d/collision.h:498
inline const b3HullFace* b3GetHullFaces(const b3Hull* hull)
{
} /* size: 0 */

// <06B7262B> ../box3d/include/box3d/collision.h:508
inline const b3Plane* b3GetHullPlanes(const b3Hull* hull)
{
} /* size: 0 */

// <009DC0ED> ../box3d/include/box3d/collision.h:520
b3Hull* b3CreateHull(const b3Vec3 *, int)
{
} /* size: 0 */

// <009DC0B3> ../box3d/include/box3d/collision.h:523
void b3DestroyHull(b3Hull *)
{
} /* size: 0 */

// <06B6A07C> ../box3d/include/box3d/collision.h:526
// member variables: 6
// struct size: 240
struct b3TriangleHull {
	b3Hull base; /* 0 136 */
	b3HullVertex triangleVertices[3]; /* 136 3 */
	b3Vec3 trianglePositions[3]; /* 140 36 */
	b3HullHalfEdge triangleEdges[6]; /* 176 24 */
	b3HullFace triangleFaces[2]; /* 200 2 */
	b3Plane trianglePlanes[2]; /* 204 32 */
};

// <00B902F3> ../box3d/include/box3d/collision.h:540
// member variables: 6
// struct size: 440
struct b3BoxHull {
	b3Hull base; /* 0 136 */
	b3HullVertex boxVertices[8]; /* 136 8 */
	b3Vec3 boxPoints[8]; /* 144 96 */
	b3HullHalfEdge boxEdges[24]; /* 240 96 */
	b3HullFace boxFaces[6]; /* 336 6 */
	b3Plane boxPlanes[6]; /* 344 96 */
};

// <00B99958> ../box3d/include/box3d/collision.h:556
b3BoxHull b3MakeTransformedBoxHull(b3Vec3, b3Transform)
{
} /* size: 0 */

// <00995BB5> ../box3d/include/box3d/collision.h:590
// member variables: 3
// struct size: 12
struct b3MeshTriangle {
	int32_t index1; /* 0 4 */
	int32_t index2; /* 4 4 */
	int32_t index3; /* 8 4 */
};

// <00995C06> ../box3d/include/box3d/collision.h:597
// member variables: 4
// struct size: 32
struct b3MeshNode {
	/* ../box3d/include/box3d/collision.h:601 */
	union {
		struct {
			uint32_t axis:2; /* 0: 0 4 */
			uint32_t childOffset:30; /* 0: 2 4 */
		} asNode; /* 0 4 */
		struct {
			uint32_t type:2; /* 0: 0 4 */
			uint32_t triangleCount:30; /* 0: 2 4 */
		} asLeaf; /* 0 4 */
	};
	b3Vec3 lowerBound; /* 0 12 */
	union {
		struct {
			uint32_t axis:2; /* 12: 0 4 */
			uint32_t childOffset:30; /* 12: 2 4 */
		} asNode; /* 12 4 */
		struct {
			uint32_t type:2; /* 12: 0 4 */
			uint32_t triangleCount:30; /* 12: 2 4 */
		} asLeaf; /* 12 4 */
	} data; /* 12 4 */
	b3Vec3 upperBound; /* 16 12 */
	uint32_t triangleOffset; /* 28 4 */
};

// <00995CF7> ../box3d/include/box3d/collision.h:623
// member variables: 15
// struct size: 88
struct b3MeshData {
	uint64_t version; /* 0 8 */
	int byteCount; /* 8 4 */
	b3AABB bounds; /* 12 24 */
	float surfaceArea; /* 36 4 */
	int treeHeight; /* 40 4 */
	int degenerateCount; /* 44 4 */
	int nodeOffset; /* 48 4 */
	int nodeCount; /* 52 4 */
	int vertexOffset; /* 56 4 */
	int vertexCount; /* 60 4 */
	int triangleOffset; /* 64 4 */
	int triangleCount; /* 68 4 */
	int materialOffset; /* 72 4 */
	int materialCount; /* 76 4 */
	int flagsOffset; /* 80 4 */
};

// <00AC3315> ../box3d/include/box3d/collision.h:658
// member variables: 2
// struct size: 24
struct b3Mesh {
	const b3MeshData * data; /* 0 8 */
	b3Vec3 scale; /* 8 12 */
};

// <00A170AD> ../box3d/include/box3d/collision.h:669
inline const b3MeshNode* b3GetMeshNodes(const b3MeshData* mesh)
{
} /* size: 0 */

// <00A17088> ../box3d/include/box3d/collision.h:679
inline const b3Vec3* b3GetMeshVertices(const b3MeshData* mesh)
{
} /* size: 0 */

// <00A1705D> ../box3d/include/box3d/collision.h:689
inline const b3MeshTriangle* b3GetMeshTriangles(const b3MeshData* mesh)
{
} /* size: 0 */

// <00A17038> ../box3d/include/box3d/collision.h:700
inline const uint8_t* b3GetMeshMaterialIndices(const b3MeshData* mesh)
{
} /* size: 0 */

// <00A17013> ../box3d/include/box3d/collision.h:711
inline const uint8_t* b3GetMeshFlags(const b3MeshData* mesh)
{
} /* size: 0 */

// <00995E0E> ../box3d/include/box3d/collision.h:722
// member variables: 9
// struct size: 40
struct b3MeshDef {
	b3Vec3 * vertices; /* 0 8 */
	int32_t * indices; /* 8 8 */
	uint8_t * materialIndices; /* 16 8 */
	float weldTolerance; /* 24 4 */
	int vertexCount; /* 28 4 */
	int triangleCount; /* 32 4 */
	bool weldVertices; /* 36 1 */
	bool useMedianSplit; /* 37 1 */
	bool identifyEdges; /* 38 1 */
};

// <009DC19F> ../box3d/include/box3d/collision.h:765
b3MeshData* b3CreateMesh(const b3MeshDef *, int *, int)
{
} /* size: 0 */

// <009DC183> ../box3d/include/box3d/collision.h:766
void b3DestroyMesh(b3MeshData *)
{
} /* size: 0 */

// <00B906CA> ../box3d/include/box3d/collision.h:770
// member variables: 8
// struct size: 48
struct b3HeightFieldDef {
	float * heights; /* 0 8 */
	uint8_t * materialIndices; /* 8 8 */
	b3Vec3 scale; /* 16 12 */
	int countX; /* 28 4 */
	int countZ; /* 32 4 */
	float globalMinimumHeight; /* 36 4 */
	float globalMaximumHeight; /* 40 4 */
	bool clockwiseWinding; /* 44 1 */
};

// <00995EC5> ../box3d/include/box3d/collision.h:803
// member variables: 13
// struct size: 104
struct b3HeightField {
	uint64_t version; /* 0 8 */
	int byteCount; /* 8 4 */
	uint16_t * compressedHeights; /* 16 8 */
	uint8_t * materialIndices; /* 24 8 */
	uint8_t * flags; /* 32 8 */
	b3AABB aabb; /* 40 24 */
	float minHeight; /* 64 4 */
	float maxHeight; /* 68 4 */
	float heightScale; /* 72 4 */
	b3Vec3 scale; /* 76 12 */
	int columnCount; /* 88 4 */
	int rowCount; /* 92 4 */
	bool clockwise; /* 96 1 */
};

// <00B9979E> ../box3d/include/box3d/collision.h:825
b3HeightField* b3CreateHeightField(const b3HeightFieldDef *)
{
} /* size: 0 */

// <00CA74F8> ../box3d/include/box3d/collision.h:829
void b3DestroyHeightField(b3HeightField *)
{
} /* size: 0 */

// <06CEDED5> ../box3d/include/box3d/collision.h:837
// member variables: 2
// struct size: 72
struct b3CompoundCapsuleDef {
	b3Capsule capsule; /* 0 28 */
	b3SurfaceMaterial material; /* 32 40 */
};

// <06CEDF16> ../box3d/include/box3d/collision.h:843
// member variables: 3
// struct size: 80
struct b3CompoundHullDef {
	const b3Hull * hull; /* 0 8 */
	b3Transform transform; /* 8 28 */
	b3SurfaceMaterial material; /* 40 40 */
};

// <06CEDF6D> ../box3d/include/box3d/collision.h:850
// member variables: 5
// struct size: 64
struct b3CompoundMeshDef {
	const b3MeshData * meshData; /* 0 8 */
	b3Transform transform; /* 8 28 */
	b3Vec3 scale; /* 36 12 */
	const b3SurfaceMaterial * materials; /* 48 8 */
	int materialCount; /* 56 4 */
};

// <06CEDFE4> ../box3d/include/box3d/collision.h:862
// member variables: 2
// struct size: 56
struct b3CompoundSphereDef {
	b3Sphere sphere; /* 0 16 */
	b3SurfaceMaterial material; /* 16 40 */
};

// <06CEE025> ../box3d/include/box3d/collision.h:870
// member variables: 8
// struct size: 64
struct b3CompoundDef {
	b3CompoundCapsuleDef * capsules; /* 0 8 */
	int capsuleCount; /* 8 4 */
	b3CompoundHullDef * hulls; /* 16 8 */
	int hullCount; /* 24 4 */
	b3CompoundMeshDef * meshes; /* 32 8 */
	int meshCount; /* 40 4 */
	b3CompoundSphereDef * spheres; /* 48 8 */
	int sphereCount; /* 56 4 */
};

// <00AC345F> ../box3d/include/box3d/collision.h:894
// member variables: 14
// struct size: 136
struct b3Compound {
	uint64_t version; /* 0 8 */
	int byteCount; /* 8 4 */
	int nodeOffset; /* 12 4 */
	b3DynamicTree tree; /* 16 80 */
	int materialOffset; /* 96 4 */
	int materialCount; /* 100 4 */
	int capsuleOffset; /* 104 4 */
	int capsuleCount; /* 108 4 */
	int hullOffset; /* 112 4 */
	int hullCount; /* 116 4 */
	int meshOffset; /* 120 4 */
	int meshCount; /* 124 4 */
	int sphereOffset; /* 128 4 */
	int sphereCount; /* 132 4 */
};

// <06CEE1E1> ../box3d/include/box3d/collision.h:921
// member variables: 2
// struct size: 32
struct b3CompoundCapsule {
	b3Capsule capsule; /* 0 28 */
	int materialIndex; /* 28 4 */
};

// <06CEE222> ../box3d/include/box3d/collision.h:927
// member variables: 3
// struct size: 40
struct b3CompoundHull {
	const b3Hull * hull; /* 0 8 */
	b3Transform transform; /* 8 28 */
	int materialIndex; /* 36 4 */
};

// <06CEE26E> ../box3d/include/box3d/collision.h:934
// member variables: 4
// struct size: 64
struct b3CompoundMesh {
	const b3MeshData * meshData; /* 0 8 */
	b3Transform transform; /* 8 28 */
	b3Vec3 scale; /* 36 12 */
	int materialIndices[3]; /* 48 12 */
};

// <06CEE2DA> ../box3d/include/box3d/collision.h:945
// member variables: 2
// struct size: 20
struct b3CompoundSphere {
	b3Sphere sphere; /* 0 16 */
	int materialIndex; /* 16 4 */
};

// <06C42C6F> ../box3d/include/box3d/collision.h:955
const b3SurfaceMaterial* b3GetCompoundMaterials(const b3Compound *)
{
} /* size: 0 */

// <00CA7215> ../box3d/include/box3d/collision.h:972
b3MassData b3ComputeSphereMass(const b3Sphere *, float)
{
} /* size: 0 */

// <00CA7251> ../box3d/include/box3d/collision.h:975
b3MassData b3ComputeCapsuleMass(const b3Capsule *, float)
{
} /* size: 0 */

// <00CA7233> ../box3d/include/box3d/collision.h:978
b3MassData b3ComputeHullMass(const b3Hull *, float)
{
} /* size: 0 */

// <00CA728E> ../box3d/include/box3d/collision.h:981
b3AABB b3ComputeSphereAABB(const b3Sphere *, b3Transform)
{
} /* size: 0 */

// <00CA736F> ../box3d/include/box3d/collision.h:984
b3AABB b3ComputeCapsuleAABB(const b3Capsule *, b3Transform)
{
} /* size: 0 */

// <00CA7301> ../box3d/include/box3d/collision.h:987
b3AABB b3ComputeHullAABB(const b3Hull *, b3Transform)
{
} /* size: 0 */

// <00CA72C5> ../box3d/include/box3d/collision.h:990
b3AABB b3ComputeMeshAABB(const b3MeshData *, b3Transform, b3Vec3)
{
} /* size: 0 */

// <00CA7338> ../box3d/include/box3d/collision.h:993
b3AABB b3ComputeHeightFieldAABB(const b3HeightField *, b3Transform)
{
} /* size: 0 */

// <06C42BD5> ../box3d/include/box3d/collision.h:996
b3AABB b3ComputeCompoundAABB(const b3Compound *, b3Transform)
{
} /* size: 0 */

// <06B6B9E2> ../box3d/include/box3d/collision.h:999
bool b3IsValidRay(const b3RayCastInput *)
{
} /* size: 0 */

// <06C35A07> ../box3d/include/box3d/collision.h:1005
bool b3OverlapCompound(const b3Compound *, b3Transform, const b3ShapeProxy *)
{
} /* size: 0 */

// <06C35975> ../box3d/include/box3d/collision.h:1017
bool b3OverlapSphere(const b3Sphere *, b3Transform, const b3ShapeProxy *)
{
} /* size: 0 */

// <06B28BEA> ../box3d/include/box3d/collision.h:1020
b3CastOutput b3RayCastSphere(const b3Sphere *, const b3RayCastInput *)
{
} /* size: 0 */

// <06C429E6> ../box3d/include/box3d/collision.h:1029
b3CastOutput b3RayCastCompound(const b3Compound *, const b3RayCastInput *)
{
} /* size: 0 */

// <009DC07C> ../box3d/include/box3d/collision.h:1038
b3CastOutput b3RayCastHeightField(const b3HeightField *, const b3RayCastInput *)
{
} /* size: 0 */

// <06C428BA> ../box3d/include/box3d/collision.h:1041
b3CastOutput b3ShapeCastSphere(const b3Sphere *, const b3ShapeCastInput *)
{
} /* size: 0 */

// <06C42932> ../box3d/include/box3d/collision.h:1047
b3CastOutput b3ShapeCastCompound(const b3Compound *, const b3ShapeCastInput *)
{
} /* size: 0 */

// <00CA6F9C> ../box3d/include/box3d/collision.h:1066
void b3QueryMesh(const b3Mesh *, b3AABB, b3MeshQueryFcn *, void *)
{
} /* size: 0 */

// <00995FCC> ../box3d/include/box3d/collision.h:1111
// member variables: 4
// struct size: 16
struct b3SimplexCache {
	float metric; /* 0 4 */
	uint16_t count; /* 4 2 */
	uint8_t indexA[4]; /* 6 4 */
	uint8_t indexB[4]; /* 10 4 */
};

// <0099605C> ../box3d/include/box3d/collision.h:1131
// member variables: 5
// struct size: 96
struct b3DistanceInput {
	b3ShapeProxy proxyA; /* 0 16 */
	b3ShapeProxy proxyB; /* 16 16 */
	b3Transform transformA; /* 32 28 */
	b3Transform transformB; /* 60 28 */
	bool useRadii; /* 88 1 */
};

// <009960CD> ../box3d/include/box3d/collision.h:1150
// member variables: 6
// struct size: 48
struct b3DistanceOutput {
	b3Vec3 pointA; /* 0 12 */
	b3Vec3 pointB; /* 12 12 */
	b3Vec3 normal; /* 24 12 */
	float distance; /* 36 4 */
	int iterations; /* 40 4 */
	int simplexCount; /* 44 4 */
};

// <00996149> ../box3d/include/box3d/collision.h:1161
// member variables: 6
// struct size: 48
struct b3SimplexVertex {
	b3Vec3 wA; /* 0 12 */
	b3Vec3 wB; /* 12 12 */
	b3Vec3 w; /* 24 12 */
	float a; /* 36 4 */
	int indexA; /* 40 4 */
	int indexB; /* 44 4 */
};

// <009961C3> ../box3d/include/box3d/collision.h:1172
// member variables: 2
// struct size: 196
struct b3Simplex {
	b3SimplexVertex vertices[4]; /* 0 192 */
	int count; /* 192 4 */
};

// <009DC5B9> ../box3d/include/box3d/collision.h:1182
b3DistanceOutput b3ShapeDistance(const b3DistanceInput *, b3SimplexCache *, b3Simplex *, int)
{
} /* size: 0 */

// <00996210> ../box3d/include/box3d/collision.h:1186
// member variables: 7
// struct size: 112
struct b3ShapeCastPairInput {
	b3ShapeProxy proxyA; /* 0 16 */
	b3ShapeProxy proxyB; /* 16 16 */
	b3Transform transformA; /* 32 28 */
	b3Transform transformB; /* 60 28 */
	b3Vec3 translationB; /* 88 12 */
	float maxFraction; /* 100 4 */
	bool canEncroach; /* 104 1 */
};

// <009DC09A> ../box3d/include/box3d/collision.h:1198
b3CastOutput b3ShapeCast(const b3ShapeCastPairInput *)
{
} /* size: 0 */

// <06C3A920> ../box3d/include/box3d/collision.h:1203
// member variables: 5
// struct size: 68
struct b3Sweep {
	b3Vec3 localCenter; /* 0 12 */
	b3Vec3 c1; /* 12 12 */
	b3Vec3 c2; /* 24 12 */
	b3Quat q1; /* 36 16 */
	b3Quat q2; /* 52 16 */
};

// <06C42B34> ../box3d/include/box3d/collision.h:1213
b3Transform b3GetSweepTransform(const b3Sweep *, float)
{
} /* size: 0 */

// <06C3A98D> ../box3d/include/box3d/collision.h:1216
// member variables: 5
// struct size: 176
struct b3TOIInput {
	b3ShapeProxy proxyA; /* 0 16 */
	b3ShapeProxy proxyB; /* 16 16 */
	b3Sweep sweepA; /* 32 68 */
	b3Sweep sweepB; /* 100 68 */
	float maxFraction; /* 168 4 */
};

// <06C3AA3E> ../box3d/include/box3d/collision.h:1236
// member variables: 4
// struct size: 32
struct b3TOIOutput {
	b3TOIState state; /* 0 4 */
	b3Vec3 point; /* 4 12 */
	b3Vec3 normal; /* 16 12 */
	float fraction; /* 28 4 */
};

// <06C42483> ../box3d/include/box3d/collision.h:1255
b3TOIOutput b3TimeOfImpact(const b3TOIInput *)
{
} /* size: 0 */

// <00AC3602> ../box3d/include/box3d/collision.h:1264
// member variables: 10
// struct size: 64
struct b3ManifoldPoint {
	b3Vec3 point; /* 0 12 */
	b3Vec3 anchorA; /* 12 12 */
	b3Vec3 anchorB; /* 24 12 */
	float separation; /* 36 4 */
	float normalImpulse; /* 40 4 */
	float totalNormalImpulse; /* 44 4 */
	float normalVelocity; /* 48 4 */
	uint32_t id; /* 52 4 */
	int triangleIndex; /* 56 4 */
	bool persisted; /* 60 1 */
};

// <00AC36C3> ../box3d/include/box3d/collision.h:1307
// member variables: 6
// struct size: 300
struct b3Manifold {
	b3ManifoldPoint points[4]; /* 0 256 */
	b3Vec3 normal; /* 256 12 */
	float twistImpulse; /* 268 4 */
	b3Vec3 frictionImpulse; /* 272 12 */
	b3Vec3 rollingImpulse; /* 284 12 */
	int pointCount; /* 296 4 */
};

// <06B03DCB> ../box3d/include/box3d/collision.h:1344
// member variables: 5
// struct size: 8
typedef struct {
	float separation; /* 0 4 */
	uint8_t type; /* 4 1 */
	uint8_t indexA; /* 5 1 */
	uint8_t indexB; /* 6 1 */
	uint8_t hit; /* 7 1 */
} b3SATCache;

// <06B35C8B> ../box3d/include/box3d/collision.h:1353
b3Manifold b3CollideSpheres(const b3Sphere *, b3Transform, const b3Sphere *, b3Transform)
{
} /* size: 0 */

// <06B35C63> ../box3d/include/box3d/collision.h:1355
b3Manifold b3CollideCapsuleAndSphere(const b3Capsule *, b3Transform, const b3Sphere *, b3Transform)
{
} /* size: 0 */

// <06B35C0E> ../box3d/include/box3d/collision.h:1357
b3Manifold b3CollideHullAndSphere(const b3Hull *, b3Transform, const b3Sphere *, b3Transform, b3SimplexCache *)
{
} /* size: 0 */

// <06B35C3B> ../box3d/include/box3d/collision.h:1360
b3Manifold b3CollideCapsules(const b3Capsule *, b3Transform, const b3Capsule *, b3Transform)
{
} /* size: 0 */

// <06B35BDB> ../box3d/include/box3d/collision.h:1362
b3Manifold b3CollideHullAndCapsule(const b3Hull *, b3Transform, const b3Capsule *, b3Transform, b3SimplexCache *)
{
} /* size: 0 */

// <06B35BA8> ../box3d/include/box3d/collision.h:1365
b3Manifold b3CollideHulls(const b3Hull *, b3Transform, const b3Hull *, b3Transform, b3SATCache *)
{
} /* size: 0 */

// <06BB5EA9> ../box3d/include/box3d/collision.h:1381
// member variables: 8
// struct size: 328
typedef struct {
	b3Manifold base; /* 0 300 */
	int triangleIndex; /* 300 4 */
	int i1; /* 304 4 */
	int i2; /* 308 4 */
	int i3; /* 312 4 */
	float squaredDistance; /* 316 4 */
	b3TriangleFeature feature; /* 320 4 */
	int triangleFlags; /* 324 4 */
} b3TriangleManifold;

// <06BBDE5F> ../box3d/include/box3d/collision.h:1390
b3TriangleManifold b3CollideTriangleAndSphere(const b3Vec3 *, int, const b3Sphere *)
{
} /* size: 0 */

// <06BBDE31> ../box3d/include/box3d/collision.h:1391
b3Manifold b3CollideTriangleAndCapsule(const b3Vec3 *, int, const b3Capsule *, b3SimplexCache *)
{
} /* size: 0 */

// <06BBDDF3> ../box3d/include/box3d/collision.h:1393
b3Manifold b3CollideTriangleAndHull(const b3Vec3 *, int, const b3Hull *, b3SATCache *, b3TriangleFeature *, int)
{
} /* size: 0 */

// <06B03E37> ../box3d/include/box3d/collision.h:1407
// member variables: 2
// struct size: 28
struct b3PlaneResult {
	b3Plane plane; /* 0 16 */
	b3Vec3 point; /* 16 12 */
};

// <06B9847D> ../box3d/include/box3d/collision.h:1432
// member variables: 4
// struct size: 32
struct b3ClosestApproachResult {
	b3Vec3 point1; /* 0 12 */
	float lambda1; /* 12 4 */
	b3Vec3 point2; /* 16 12 */
	float lambda2; /* 28 4 */
};

// <00B99851> ../box3d/include/box3d/collision.h:1452
b3MeshData* b3AllocateMesh(int, int, int)
{
} /* size: 0 */

// <00B99912> ../box3d/include/box3d/collision.h:1453
b3Hull* b3AllocateHull(int, int, int)
{
} /* size: 0 */

// <06B0D35B> ../box3d/include/box3d/collision.h:1454
b3Vec3 b3ClosestPointOnMesh(const b3Mesh *, b3Vec3)
{
} /* size: 0 */

// <009DC67F> ../box3d/include/box3d/collision.h:1458
void b3SetShapeCastFcn(b3ShapeCastFcn *)
{
} /* size: 0 */



//
// src/contact.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	structs: 4
//	union: 1
//

// <06B054C4> src/contact.h:16
union b3ContactCache {
	b3SATCache satCache; /* 0 8 */
	b3SimplexCache simplexCache; /* 0 16 */
};

// <06B054EA> src/contact.h:22
// member variables: 2
// struct size: 20
struct b3TriangleCache {
	int triangleIndex; /* 0 4 */
	union b3ContactCache cache; /* 4 16 */
};

// <06B05540> src/contact.h:45
// member variables: 3
// struct size: 12
struct b3ContactEdge {
	int bodyId; /* 0 4 */
	int prevKey; /* 4 4 */
	int nextKey; /* 8 4 */
};

// <06B0557B> src/contact.h:54
// member variables: 13
// struct size: 72
struct b3Contact {
	int setIndex; /* 0 4 */
	int colorIndex; /* 4 4 */
	int localIndex; /* 8 4 */
	b3ContactEdge edges[2]; /* 12 24 */
	int shapeIdA; /* 36 4 */
	int shapeIdB; /* 40 4 */
	int childIndex; /* 44 4 */
	int islandPrev; /* 48 4 */
	int islandNext; /* 52 4 */
	int islandId; /* 56 4 */
	int contactId; /* 60 4 */
	uint32_t flags; /* 64 4 */
	uint32_t generation; /* 68 4 */
};

// <06B05A1C> src/contact.h:114
// member variables: 20
// struct size: 208
struct b3ContactSim {
	int contactId; /* 0 4 */
	int bodySimIndexA; /* 4 4 */
	int bodySimIndexB; /* 8 4 */
	int shapeIdA; /* 12 4 */
	int shapeIdB; /* 16 4 */
	int childIndex; /* 20 4 */
	float invMassA; /* 24 4 */
	b3Matrix3 invIA; /* 28 36 */
	float invMassB; /* 64 4 */
	b3Matrix3 invIB; /* 68 36 */
	int manifoldCount; /* 104 4 */
	b3Manifold * manifolds; /* 112 8 */
	union b3ContactCache cache; /* 120 16 */
	b3Array<b3TriangleCache> triangleCache; /* 136 16 */
	b3AABB meshQueryBounds; /* 152 24 */
	float friction; /* 176 4 */
	float restitution; /* 180 4 */
	float rollingResistance; /* 184 4 */
	b3Vec3 tangentVelocity; /* 188 12 */
	uint32_t simFlags; /* 200 4 */
};

// <06B2468D> src/contact.h:161
void b3CreateContact(b3World *, b3Shape *, b3Shape *, int)
{
} /* size: 0 */

// <06B0D6D3> src/contact.h:162
void b3DestroyContact(b3World *, b3Contact *, bool)
{
} /* size: 0 */

// <06B0D678> src/contact.h:164
b3ContactSim* b3GetContactSim(b3World *, b3Contact *)
{
} /* size: 0 */

// <06B35CB3> src/contact.h:171
bool b3ComputeMeshManifolds(b3World *, int, b3ContactSim *, const b3Shape *, b3Transform, const int *, const b3Shape *, b3Transform)
{
} /* size: 0 */


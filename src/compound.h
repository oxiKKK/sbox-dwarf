
//
// src/compound.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	struct: 1
//

// <06B2F633> src/compound.h:8
// member variables: 4
// struct size: 80
struct b3ChildShape {
	/* src/compound.h:11 */
	union {
		b3Capsule capsule; /* 0 28 */
		const b3Hull * hull; /* 0 8 */
		b3Mesh mesh; /* 0 24 */
		b3Sphere sphere; /* 0 16 */
	};
	union {
		b3Capsule capsule; /* 0 28 */
		const b3Hull * hull; /* 0 8 */
		b3Mesh mesh; /* 0 24 */
		b3Sphere sphere; /* 0 16 */
	}; /* 0 32 */
	b3Transform transform; /* 32 28 */
	int materialIndices[3]; /* 60 12 */
	b3ShapeType type; /* 72 4 */
};

// <06B35CF8> src/compound.h:32
b3ChildShape b3GetCompoundChild(const b3Compound *, int)
{
} /* size: 0 */

// <06C424F0> src/compound.h:33
void b3QueryCompound(const b3Compound *, b3AABB, b3CompoundQueryFcn *, void *)
{
} /* size: 0 */

// <06C42449> src/compound.h:39
b3Sweep b3MakeCompoundChildSweep(b3Transform, b3Transform)
{
} /* size: 0 */

// <06C42799> src/compound.h:41
int b3CollideMoverAndCompound(b3PlaneResult *, int, const b3Compound *, const b3Capsule *)
{
} /* size: 0 */


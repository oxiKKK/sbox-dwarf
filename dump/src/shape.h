
//
// src/shape.h
//
//	referenced by: libengine2.so
//
//	functions: 19
//	struct: 1
//

// <06B09C14> src/shape.h:14
// member variables: 25
// struct size: 192
struct b3Shape {
	/* src/shape.h:46 */
	union {
		b3Capsule capsule; /* 0 28 */
		b3Sphere sphere; /* 0 16 */
		const b3Hull * hull; /* 0 8 */
		b3Mesh mesh; /* 0 24 */
		const b3HeightField * heightField; /* 0 8 */
		const b3Compound * compound; /* 0 8 */
	};
	int id; /* 0 4 */
	int bodyId; /* 4 4 */
	int prevShapeId; /* 8 4 */
	int nextShapeId; /* 12 4 */
	int sensorIndex; /* 16 4 */
	int proxyKey; /* 20 4 */
	b3ShapeType type; /* 24 4 */
	float density; /* 28 4 */
	b3AABB aabb; /* 32 24 */
	b3AABB fatAABB; /* 56 24 */
	b3Vec3 localCentroid; /* 80 12 */
	int materialCount; /* 92 4 */
	b3SurfaceMaterial * materials; /* 96 8 */
	b3Filter filter; /* 104 24 */
	char * name; /* 128 8 */
	void * userData; /* 136 8 */
	void * userShape; /* 144 8 */
	uint16_t generation; /* 152 2 */
	bool enableSensorEvents; /* 154 1 */
	bool enableContactEvents; /* 155 1 */
	bool enableCustomFiltering; /* 156 1 */
	bool enableHitEvents; /* 157 1 */
	bool enablePreSolveEvents; /* 158 1 */
	bool enlargedAABB; /* 159 1 */
	union {
		b3Capsule capsule; /* 160 28 */
		b3Sphere sphere; /* 160 16 */
		const b3Hull * hull; /* 160 8 */
		b3Mesh mesh; /* 160 24 */
		const b3HeightField * heightField; /* 160 8 */
		const b3Compound * compound; /* 160 8 */
	}; /* 160 32 */
};

// <06B0D408> src/shape.h:62
void b3CreateShapeProxy(b3Shape *, b3BroadPhase *, b3BodyType, b3Transform, bool)
{
} /* size: 0 */

// <06B0D74E> src/shape.h:63
void b3DestroyShapeProxy(b3Shape *, b3BroadPhase *)
{
} /* size: 0 */

// <06B0D735> src/shape.h:65
void b3DestroyShapeAllocations(b3World *, b3Shape *)
{
} /* size: 0 */

// <06B0D553> src/shape.h:67
b3MassData b3ComputeShapeMass(const b3Shape *)
{
} /* size: 0 */

// <06B0D56B> src/shape.h:68
b3ShapeExtent b3ComputeShapeExtent(const b3Shape *, b3Vec3)
{
} /* size: 0 */

// <06C42ACE> src/shape.h:70
b3AABB b3ComputeSweptSphereAABB(const b3Sphere *, b3Transform, b3Transform)
{
} /* size: 0 */

// <06B0D4F6> src/shape.h:73
b3AABB b3ComputeShapeAABB(const b3Shape *, b3Transform)
{
} /* size: 0 */

// <06BBDE82> src/shape.h:75
b3Vec3 b3GetShapeCentroid(const b3Shape *)
{
} /* size: 0 */

// <06B0D660> src/shape.h:79
b3ShapeProxy b3MakeShapeProxy(const b3Shape *)
{
} /* size: 0 */

// <06B60068> src/shape.h:80
b3ShapeProxy b3MakeLocalProxy(const b3ShapeProxy *, b3Transform, b3Vec3 *)
{
} /* size: 0 */

// <06B6004A> src/shape.h:81
b3AABB b3ComputeProxyAABB(const b3ShapeProxy *)
{
} /* size: 0 */

// <06B0D604> src/shape.h:83
b3CastOutput b3RayCastShape(const b3Shape *, b3Transform, const b3RayCastInput *)
{
} /* size: 0 */

// <06B0D5E2> src/shape.h:84
b3CastOutput b3ShapeCastShape(const b3Shape *, b3Transform, const b3ShapeCastInput *)
{
} /* size: 0 */

// <06B0D5BA> src/shape.h:85
bool b3OverlapShape(const b3Shape *, b3Transform, const b3ShapeProxy *)
{
} /* size: 0 */

// <06BE2E3B> src/shape.h:88
float b3GetShapeProjectedArea(const b3Shape *, b3Vec3)
{
} /* size: 0 */

// <06C42777> src/shape.h:91
int b3CollideMoverAndSphere(b3PlaneResult *, const b3Sphere *, const b3Capsule *)
{
} /* size: 0 */

// <06B0D588> src/shape.h:96
int b3CollideMover(b3PlaneResult *, int, const b3Shape *, b3Transform, const b3Capsule *)
{
} /* size: 0 */

// <06B2643E> src/shape.h:126
inline bool b3ShouldShapesCollide(b3Filter filterA, b3Filter filterB)
{
} /* size: 0 */

// <06B1A0D2> src/shape.h:136
inline bool b3ShouldQueryCollide(const b3Filter* shapeFilter, const b3QueryFilter* queryFilter)
{
} /* size: 0 */


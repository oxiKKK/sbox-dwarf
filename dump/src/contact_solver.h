
//
// src/contact_solver.h
//
//	referenced by: libengine2.so
//
//	functions: 11
//	structs: 2
//

// <06C588A0> src/contact_solver.h:11
// member variables: 7
// struct size: 44
struct b3ContactConstraintPoint {
	b3Vec3 anchorA; /* 0 12 */
	b3Vec3 anchorB; /* 12 12 */
	float baseSeparation; /* 24 4 */
	float relativeVelocity; /* 28 4 */
	float normalImpulse; /* 32 4 */
	float totalNormalImpulse; /* 36 4 */
	float normalMass; /* 40 4 */
};

// <06C58917> src/contact_solver.h:21
// member variables: 27
// struct size: 464
struct b3ContactConstraint {
	b3ContactConstraintPoint points[4]; /* 0 176 */
	int pointCount; /* 176 4 */
	int indexA; /* 180 4 */
	int indexB; /* 184 4 */
	float invMassA; /* 188 4 */
	float invMassB; /* 192 4 */
	b3Matrix3 invIA; /* 196 36 */
	b3Matrix3 invIB; /* 232 36 */
	b3Vec3 normal; /* 268 12 */
	b3Vec3 tangent1; /* 280 12 */
	b3Vec3 tangent2; /* 292 12 */
	b3Vec3 originA; /* 304 12 */
	b3Vec3 originB; /* 316 12 */
	float twistMass; /* 328 4 */
	float twistImpulse; /* 332 4 */
	b3Matrix2 tangentMass; /* 336 16 */
	b3Vec2 frictionImpulse; /* 352 8 */
	b3Matrix3 rollingMass; /* 360 36 */
	b3Vec3 rollingImpulse; /* 396 12 */
	float leverArms[4]; /* 408 16 */
	float friction; /* 424 4 */
	float rollingResistance; /* 428 4 */
	float tangentVelocity1; /* 432 4 */
	float tangentVelocity2; /* 436 4 */
	float restitution; /* 440 4 */
	b3Softness softness; /* 444 12 */
	b3Manifold * manifold; /* 456 8 */
};

// <06C6015E> src/contact_solver.h:51
int b3GetContactConstraintSIMDByteCount(void)
{
} /* size: 0 */

// <06C5FE1E> src/contact_solver.h:54
void b3PrepareOverflowContacts(b3StepContext *)
{
} /* size: 0 */

// <06C5FDED> src/contact_solver.h:55
void b3WarmStartOverflowContacts(b3StepContext *)
{
} /* size: 0 */

// <06C5FDB2> src/contact_solver.h:56
void b3SolveOverflowContacts(b3StepContext *, bool)
{
} /* size: 0 */

// <06C5FD9A> src/contact_solver.h:57
void b3ApplyOverflowRestitution(b3StepContext *)
{
} /* size: 0 */

// <06C5FD82> src/contact_solver.h:58
void b3StoreOverflowImpulses(b3StepContext *)
{
} /* size: 0 */

// <06C5FD51> src/contact_solver.h:61
void b3PrepareContactsTask(int, int, b3StepContext *, int)
{
} /* size: 0 */

// <06C5FD25> src/contact_solver.h:63
void b3WarmStartManifoldTask(int, int, b3StepContext *, int, int)
{
} /* size: 0 */

// <06C5FCF4> src/contact_solver.h:64
void b3SolveManifoldTask(int, int, b3StepContext *, int, int, bool)
{
} /* size: 0 */

// <06C5FCC8> src/contact_solver.h:65
void b3ApplyRestitutionTask(int, int, b3StepContext *, int, int)
{
} /* size: 0 */

// <06C5FCA1> src/contact_solver.h:67
void b3StoreImpulsesTask(int, int, b3StepContext *, int)
{
} /* size: 0 */


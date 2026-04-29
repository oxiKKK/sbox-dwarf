
//
// src/body.h
//
//	referenced by: libengine2.so
//
//	function: 1
//	structs: 3
//

// <06B05139> src/body.h:62
// member variables: 24
// struct size: 192
struct b3Body {
	char name[64]; /* 0 64 */
	void * userData; /* 64 8 */
	int setIndex; /* 72 4 */
	int localIndex; /* 76 4 */
	int headContactKey; /* 80 4 */
	int contactCount; /* 84 4 */
	int headShapeId; /* 88 4 */
	int shapeCount; /* 92 4 */
	int headChainId; /* 96 4 */
	int headJointKey; /* 100 4 */
	int jointCount; /* 104 4 */
	int islandId; /* 108 4 */
	int islandPrev; /* 112 4 */
	int islandNext; /* 116 4 */
	float sleepThreshold; /* 120 4 */
	float sleepTime; /* 124 4 */
	float mass; /* 128 4 */
	b3Matrix3 inertia; /* 132 36 */
	int bodyMoveIndex; /* 168 4 */
	int id; /* 172 4 */
	uint32_t flags; /* 176 4 */
	b3BodyType type; /* 180 4 */
	uint16_t generation; /* 184 2 */
	bool enableSleep; /* 186 1 */
};

// <06B052CB> src/body.h:151
// member variables: 5
// struct size: 56
struct b3BodyState {
	b3Vec3 linearVelocity; /* 0 12 */
	b3Vec3 angularVelocity; /* 12 12 */
	b3Vec3 deltaPosition; /* 24 12 */
	b3Quat deltaRotation; /* 36 16 */
	uint32_t flags; /* 52 4 */
};

// <06B0536F> src/body.h:175
// member variables: 17
// struct size: 208
struct b3BodySim {
	b3Transform transform; /* 0 28 */
	b3Vec3 center; /* 28 12 */
	b3Quat rotation0; /* 40 16 */
	b3Vec3 center0; /* 56 12 */
	b3Vec3 localCenter; /* 68 12 */
	b3Vec3 force; /* 80 12 */
	b3Vec3 torque; /* 92 12 */
	float invMass; /* 104 4 */
	b3Matrix3 invInertiaLocal; /* 108 36 */
	b3Matrix3 invInertiaWorld; /* 144 36 */
	float minExtent; /* 180 4 */
	float maxExtent; /* 184 4 */
	float linearDamping; /* 188 4 */
	float angularDamping; /* 192 4 */
	float gravityScale; /* 196 4 */
	int bodyId; /* 200 4 */
	uint32_t flags; /* 204 4 */
};

// <06C68987> src/body.h:234
// variable: 1
inline b3Sweep b3MakeSweep(const b3BodySim* bodySim)
{
	b3Sweep s; // 236
} /* size: 0, variables: 1 */


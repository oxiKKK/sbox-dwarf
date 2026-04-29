
//
// box3d/include/box3d/types.h
//
//	referenced by: libengine2.so
//
//	functions: 14
//	structs: 38
//

// <00ADF433> ../box3d/include/box3d/types.h:69
// member variables: 11
// struct size: 64
struct b3RayResult {
	b3ShapeId shapeId; /* 0 8 */
	b3Vec3 point; /* 8 12 */
	b3Vec3 normal; /* 20 12 */
	uint64_t userMaterialId; /* 32 8 */
	float fraction; /* 40 4 */
	int triangleIndex; /* 44 4 */
	int childIndex; /* 48 4 */
	int nodeVisits; /* 52 4 */
	int leafVisits; /* 56 4 */
	bool hit; /* 60 1 */
	bool startSolid; /* 61 1 */
};

// <00ADF506> ../box3d/include/box3d/types.h:87
// member variables: 5
// struct size: 20
struct b3Capacity {
	int staticShapeCount; /* 0 4 */
	int dynamicShapeCount; /* 4 4 */
	int staticBodyCount; /* 8 4 */
	int dynamicBodyCount; /* 12 4 */
	int contactCount; /* 16 4 */
};

// <00ADF573> ../box3d/include/box3d/types.h:97
// member variables: 21
// struct size: 144
struct b3WorldDef {
	b3Vec3 gravity; /* 0 12 */
	float restitutionThreshold; /* 12 4 */
	float hitEventThreshold; /* 16 4 */
	float contactHertz; /* 20 4 */
	float contactDampingRatio; /* 24 4 */
	float contactSpeed; /* 28 4 */
	float maximumLinearSpeed; /* 32 4 */
	b3FrictionCallback * frictionCallback; /* 40 8 */
	b3RestitutionCallback * restitutionCallback; /* 48 8 */
	bool enableSleep; /* 56 1 */
	bool enableContinuous; /* 57 1 */
	uint32_t workerCount; /* 60 4 */
	b3EnqueueTaskCallback * enqueueTask; /* 64 8 */
	b3FinishTaskCallback * finishTask; /* 72 8 */
	void * userTaskContext; /* 80 8 */
	void * userData; /* 88 8 */
	b3CreateDebugShapeCallback * createDebugShape; /* 96 8 */
	b3DestroyDebugShapeCallback * destroyDebugShape; /* 104 8 */
	void * userDebugShapeContext; /* 112 8 */
	b3Capacity capacity; /* 120 20 */
	int internalValue; /* 140 4 */
};

// <00B0B356> ../box3d/include/box3d/types.h:177
b3WorldDef b3DefaultWorldDef(void)
{
} /* size: 0 */

// <00ADF744> ../box3d/include/box3d/types.h:198
// member variables: 6
// struct size: 6
struct b3MotionLocks {
	bool linearX; /* 0 1 */
	bool linearY; /* 1 1 */
	bool linearZ; /* 2 1 */
	bool angularX; /* 3 1 */
	bool angularY; /* 4 1 */
	bool angularZ; /* 5 1 */
};

// <00ADF7C1> ../box3d/include/box3d/types.h:224
// member variables: 19
// struct size: 104
struct b3BodyDef {
	b3BodyType type; /* 0 4 */
	b3Vec3 position; /* 4 12 */
	b3Quat rotation; /* 16 16 */
	b3Vec3 linearVelocity; /* 32 12 */
	b3Vec3 angularVelocity; /* 44 12 */
	float linearDamping; /* 56 4 */
	float angularDamping; /* 60 4 */
	float gravityScale; /* 64 4 */
	float sleepThreshold; /* 68 4 */
	const char * name; /* 72 8 */
	void * userData; /* 80 8 */
	b3MotionLocks motionLocks; /* 88 6 */
	bool enableSleep; /* 94 1 */
	bool isAwake; /* 95 1 */
	bool isBullet; /* 96 1 */
	bool isEnabled; /* 97 1 */
	bool allowFastRotation; /* 98 1 */
	bool enableContinuousCollision; /* 99 1 */
	int internalValue; /* 100 4 */
};

// <00B0AEF2> ../box3d/include/box3d/types.h:301
b3BodyDef b3DefaultBodyDef(void)
{
} /* size: 0 */

// <00B94625> ../box3d/include/box3d/types.h:306
// member variables: 3
// struct size: 24
struct b3Filter {
	uint64_t categoryBits; /* 0 8 */
	uint64_t maskBits; /* 8 8 */
	int groupIndex; /* 16 4 */
};

// <00ADF920> ../box3d/include/box3d/types.h:348
// member variables: 2
// struct size: 16
struct b3QueryFilter {
	uint64_t categoryBits; /* 0 8 */
	uint64_t maskBits; /* 8 8 */
};

// <00B0A894> ../box3d/include/box3d/types.h:360
b3QueryFilter b3DefaultQueryFilter(void)
{
} /* size: 0 */

// <00B946F9> ../box3d/include/box3d/types.h:389
// member variables: 16
// struct size: 120
struct b3ShapeDef {
	const char * name; /* 0 8 */
	void * userData; /* 8 8 */
	b3SurfaceMaterial * materials; /* 16 8 */
	int materialCount; /* 24 4 */
	b3SurfaceMaterial baseMaterial; /* 32 40 */
	float density; /* 72 4 */
	b3Filter filter; /* 80 24 */
	bool enableCustomFiltering; /* 104 1 */
	bool isSensor; /* 105 1 */
	bool enableSensorEvents; /* 106 1 */
	bool enableContactEvents; /* 107 1 */
	bool enableHitEvents; /* 108 1 */
	bool enablePreSolveEvents; /* 109 1 */
	bool invokeContactCreation; /* 110 1 */
	bool updateBodyMass; /* 111 1 */
	int internalValue; /* 112 4 */
};

// <00B999FF> ../box3d/include/box3d/types.h:450
b3ShapeDef b3DefaultShapeDef(void)
{
} /* size: 0 */

// <06B04529> ../box3d/include/box3d/types.h:454
// member variables: 23
// struct size: 92
struct b3Profile {
	float step; /* 0 4 */
	float pairs; /* 4 4 */
	float collide; /* 8 4 */
	float solve; /* 12 4 */
	float prepareStages; /* 16 4 */
	float solveConstraints; /* 20 4 */
	float prepareConstraints; /* 24 4 */
	float integrateVelocities; /* 28 4 */
	float warmStart; /* 32 4 */
	float solveImpulses; /* 36 4 */
	float integratePositions; /* 40 4 */
	float relaxImpulses; /* 44 4 */
	float applyRestitution; /* 48 4 */
	float storeImpulses; /* 52 4 */
	float splitIslands; /* 56 4 */
	float transforms; /* 60 4 */
	float sensorHits; /* 64 4 */
	float jointEvents; /* 68 4 */
	float hitEvents; /* 72 4 */
	float refit; /* 76 4 */
	float bullets; /* 80 4 */
	float sleepIslands; /* 84 4 */
	float sensors; /* 88 4 */
};

// <06BD961E> ../box3d/include/box3d/types.h:482
// member variables: 14
// struct size: 156
struct b3Counters {
	int bodyCount; /* 0 4 */
	int shapeCount; /* 4 4 */
	int contactCount; /* 8 4 */
	int jointCount; /* 12 4 */
	int islandCount; /* 16 4 */
	int manifolds[3]; /* 20 12 */
	int stackUsed; /* 32 4 */
	int staticTreeHeight; /* 36 4 */
	int treeHeight; /* 40 4 */
	int satCallCount; /* 44 4 */
	int satCacheHitCount; /* 48 4 */
	int byteCount; /* 52 4 */
	int taskCount; /* 56 4 */
	int colorCounts[24]; /* 60 96 */
};

// <00ADF9AF> ../box3d/include/box3d/types.h:524
// member variables: 12
// struct size: 112
struct b3JointDef {
	void * userData; /* 0 8 */
	b3BodyId bodyIdA; /* 8 8 */
	b3BodyId bodyIdB; /* 16 8 */
	b3Transform localFrameA; /* 24 28 */
	b3Transform localFrameB; /* 52 28 */
	float forceThreshold; /* 80 4 */
	float torqueThreshold; /* 84 4 */
	float constraintHertz; /* 88 4 */
	float constraintDampingRatio; /* 92 4 */
	float drawScale; /* 96 4 */
	bool collideConnected; /* 100 1 */
	int internalValue; /* 104 4 */
};

// <00ADFA9A> ../box3d/include/box3d/types.h:567
// member variables: 13
// struct size: 160
struct b3DistanceJointDef {
	b3JointDef base; /* 0 112 */
	float length; /* 112 4 */
	bool enableSpring; /* 116 1 */
	float lowerSpringForce; /* 120 4 */
	float upperSpringForce; /* 124 4 */
	float hertz; /* 128 4 */
	float dampingRatio; /* 132 4 */
	bool enableLimit; /* 136 1 */
	float minLength; /* 140 4 */
	float maxLength; /* 144 4 */
	bool enableMotor; /* 148 1 */
	float maxMotorForce; /* 152 4 */
	float motorSpeed; /* 156 4 */
};

// <00B0AD57> ../box3d/include/box3d/types.h:612
b3DistanceJointDef b3DefaultDistanceJointDef(void)
{
} /* size: 0 */

// <00ADFBA3> ../box3d/include/box3d/types.h:616
// member variables: 11
// struct size: 168
struct b3MotorJointDef {
	b3JointDef base; /* 0 112 */
	b3Vec3 linearVelocity; /* 112 12 */
	float maxVelocityForce; /* 124 4 */
	b3Vec3 angularVelocity; /* 128 12 */
	float maxVelocityTorque; /* 140 4 */
	float linearHertz; /* 144 4 */
	float linearDampingRatio; /* 148 4 */
	float maxSpringForce; /* 152 4 */
	float angularHertz; /* 156 4 */
	float angularDampingRatio; /* 160 4 */
	float maxSpringTorque; /* 164 4 */
};

// <00B0AD20> ../box3d/include/box3d/types.h:654
b3MotorJointDef b3DefaultMotorJointDef(void)
{
} /* size: 0 */

// <00ADFC8A> ../box3d/include/box3d/types.h:659
// member variable: 1
// struct size: 112
struct b3FilterJointDef {
	b3JointDef base; /* 0 112 */
};

// <00B0AC7B> ../box3d/include/box3d/types.h:667
b3FilterJointDef b3DefaultFilterJointDef(void)
{
} /* size: 0 */

// <00ADFCBF> ../box3d/include/box3d/types.h:674
// member variables: 4
// struct size: 128
struct b3ParallelJointDef {
	b3JointDef base; /* 0 112 */
	float hertz; /* 112 4 */
	float dampingRatio; /* 116 4 */
	float maxTorque; /* 120 4 */
};

// <00B0ACB2> ../box3d/include/box3d/types.h:687
b3ParallelJointDef b3DefaultParallelJointDef(void)
{
} /* size: 0 */

// <00ADFD27> ../box3d/include/box3d/types.h:693
// member variables: 11
// struct size: 152
struct b3PrismaticJointDef {
	b3JointDef base; /* 0 112 */
	bool enableSpring; /* 112 1 */
	float hertz; /* 116 4 */
	float dampingRatio; /* 120 4 */
	float targetTranslation; /* 124 4 */
	bool enableLimit; /* 128 1 */
	float lowerTranslation; /* 132 4 */
	float upperTranslation; /* 136 4 */
	bool enableMotor; /* 140 1 */
	float maxMotorForce; /* 144 4 */
	float motorSpeed; /* 148 4 */
};

// <00B0ADC5> ../box3d/include/box3d/types.h:732
b3PrismaticJointDef b3DefaultPrismaticJointDef(void)
{
} /* size: 0 */

// <00ADFE0C> ../box3d/include/box3d/types.h:737
// member variables: 11
// struct size: 152
struct b3RevoluteJointDef {
	b3JointDef base; /* 0 112 */
	float targetAngle; /* 112 4 */
	bool enableSpring; /* 116 1 */
	float hertz; /* 120 4 */
	float dampingRatio; /* 124 4 */
	bool enableLimit; /* 128 1 */
	float lowerAngle; /* 132 4 */
	float upperAngle; /* 136 4 */
	bool enableMotor; /* 140 1 */
	float maxMotorTorque; /* 144 4 */
	float motorSpeed; /* 148 4 */
};

// <00B0ADFC> ../box3d/include/box3d/types.h:776
b3RevoluteJointDef b3DefaultRevoluteJointDef(void)
{
} /* size: 0 */

// <00ADFEF1> ../box3d/include/box3d/types.h:781
// member variables: 13
// struct size: 184
struct b3SphericalJointDef {
	b3JointDef base; /* 0 112 */
	bool enableSpring; /* 112 1 */
	float hertz; /* 116 4 */
	float dampingRatio; /* 120 4 */
	b3Quat targetRotation; /* 124 16 */
	bool enableConeLimit; /* 140 1 */
	float coneAngle; /* 144 4 */
	bool enableTwistLimit; /* 148 1 */
	float lowerTwistAngle; /* 152 4 */
	float upperTwistAngle; /* 156 4 */
	bool enableMotor; /* 160 1 */
	float maxMotorTorque; /* 164 4 */
	b3Vec3 motorVelocity; /* 168 12 */
};

// <00B0AD8E> ../box3d/include/box3d/types.h:826
b3SphericalJointDef b3DefaultSphericalJointDef(void)
{
} /* size: 0 */

// <00ADFFFA> ../box3d/include/box3d/types.h:833
// member variables: 5
// struct size: 128
struct b3WeldJointDef {
	b3JointDef base; /* 0 112 */
	float linearHertz; /* 112 4 */
	float angularHertz; /* 116 4 */
	float linearDampingRatio; /* 120 4 */
	float angularDampingRatio; /* 124 4 */
};

// <00B0AE95> ../box3d/include/box3d/types.h:853
b3WeldJointDef b3DefaultWeldJointDef(void)
{
} /* size: 0 */

// <00AE0073> ../box3d/include/box3d/types.h:861
// member variables: 18
// struct size: 184
struct b3WheelJointDef {
	b3JointDef base; /* 0 112 */
	bool enableSuspensionSpring; /* 112 1 */
	float suspensionHertz; /* 116 4 */
	float suspensionDampingRatio; /* 120 4 */
	bool enableSuspensionLimit; /* 124 1 */
	float lowerSuspensionLimit; /* 128 4 */
	float upperSuspensionLimit; /* 132 4 */
	bool enableSpinMotor; /* 136 1 */
	float maxSpinTorque; /* 140 4 */
	float spinSpeed; /* 144 4 */
	bool enableSteering; /* 148 1 */
	float steeringHertz; /* 152 4 */
	float steeringDampingRatio; /* 156 4 */
	float targetSteeringAngle; /* 160 4 */
	float maxSteeringTorque; /* 164 4 */
	bool enableSteeringLimit; /* 168 1 */
	float lowerSteeringLimit; /* 172 4 */
	float upperSteeringLimit; /* 176 4 */
};

// <00B0ACE9> ../box3d/include/box3d/types.h:920
b3WheelJointDef b3DefaultWheelJointDef(void)
{
} /* size: 0 */

// <06B8606F> ../box3d/include/box3d/types.h:925
// member variables: 5
// struct size: 32
struct b3ExplosionDef {
	uint64_t maskBits; /* 0 8 */
	b3Vec3 position; /* 8 12 */
	float radius; /* 20 4 */
	float falloff; /* 24 4 */
	float impulsePerArea; /* 28 4 */
};

// <00AE01D6> ../box3d/include/box3d/types.h:967
// member variables: 2
// struct size: 16
struct b3SensorBeginTouchEvent {
	b3ShapeId sensorShapeId; /* 0 8 */
	b3ShapeId visitorShapeId; /* 8 8 */
};

// <00AE021C> ../box3d/include/box3d/types.h:980
// member variables: 2
// struct size: 16
struct b3SensorEndTouchEvent {
	b3ShapeId sensorShapeId; /* 0 8 */
	b3ShapeId visitorShapeId; /* 8 8 */
};

// <00AE02D1> ../box3d/include/box3d/types.h:1012
// member variables: 3
// struct size: 28
struct b3ContactBeginTouchEvent {
	b3ShapeId shapeIdA; /* 0 8 */
	b3ShapeId shapeIdB; /* 8 8 */
	b3ContactId contactId; /* 16 12 */
};

// <00AE0328> ../box3d/include/box3d/types.h:1029
// member variables: 3
// struct size: 28
struct b3ContactEndTouchEvent {
	b3ShapeId shapeIdA; /* 0 8 */
	b3ShapeId shapeIdB; /* 8 8 */
	b3ContactId contactId; /* 16 12 */
};

// <00AE037F> ../box3d/include/box3d/types.h:1049
// member variables: 8
// struct size: 64
struct b3ContactHitEvent {
	b3ShapeId shapeIdA; /* 0 8 */
	b3ShapeId shapeIdB; /* 8 8 */
	b3Vec3 point; /* 16 12 */
	b3Vec3 normal; /* 28 12 */
	float approachSpeed; /* 40 4 */
	int triangleIndex; /* 44 4 */
	uint64_t userMaterialIdA; /* 48 8 */
	uint64_t userMaterialIdB; /* 56 8 */
};

// <00AE042B> ../box3d/include/box3d/types.h:1082
// member variables: 6
// struct size: 40
struct b3ContactEvents {
	b3ContactBeginTouchEvent * beginEvents; /* 0 8 */
	b3ContactEndTouchEvent * endEvents; /* 8 8 */
	b3ContactHitEvent * hitEvents; /* 16 8 */
	int beginCount; /* 24 4 */
	int endCount; /* 28 4 */
	int hitCount; /* 32 4 */
};

// <00AE04C2> ../box3d/include/box3d/types.h:1113
// member variables: 5
// struct size: 48
struct b3BodyMoveEvent {
	void * userData; /* 0 8 */
	b3Transform transform; /* 8 28 */
	b3BodyId bodyId; /* 36 8 */
	bool fellAsleep; /* 44 1 */
	bool wentOutOfBounds; /* 45 1 */
};

// <00AE053B> ../box3d/include/box3d/types.h:1127
// member variables: 2
// struct size: 16
struct b3BodyEvents {
	b3BodyMoveEvent * moveEvents; /* 0 8 */
	int moveCount; /* 8 4 */
};

// <00AE0582> ../box3d/include/box3d/types.h:1138
// member variables: 2
// struct size: 16
struct b3JointEvent {
	b3JointId jointId; /* 0 8 */
	void * userData; /* 8 8 */
};

// <00AE05C8> ../box3d/include/box3d/types.h:1150
// member variables: 2
// struct size: 16
struct b3JointEvents {
	b3JointEvent * jointEvents; /* 0 8 */
	int count; /* 8 4 */
};

// <00AE060F> ../box3d/include/box3d/types.h:1162
// member variables: 5
// struct size: 48
struct b3ContactData {
	b3ContactId contactId; /* 0 12 */
	b3ShapeId shapeIdA; /* 12 8 */
	b3ShapeId shapeIdB; /* 20 8 */
	const class b3Manifold * manifolds; /* 32 8 */
	int manifoldCount; /* 40 4 */
};

// <06B049F0> ../box3d/include/box3d/types.h:1237
// member variables: 4
// struct size: 48
struct b3BodyRayCastInput {
	b3Vec3 origin; /* 0 12 */
	b3Vec3 translation; /* 12 12 */
	b3QueryFilter filter; /* 24 16 */
	float maxFraction; /* 40 4 */
};

// <06B04A51> ../box3d/include/box3d/types.h:1246
// member variables: 5
// struct size: 56
struct b3BodyShapeCastInput {
	b3ShapeProxy proxy; /* 0 16 */
	b3Vec3 translation; /* 16 12 */
	b3QueryFilter filter; /* 32 16 */
	float maxFraction; /* 48 4 */
	bool canEncroach; /* 52 1 */
};

// <06B04AC2> ../box3d/include/box3d/types.h:1256
// member variables: 8
// struct size: 56
struct b3BodyCastResult {
	b3ShapeId shapeId; /* 0 8 */
	b3Vec3 point; /* 8 12 */
	b3Vec3 normal; /* 20 12 */
	float fraction; /* 32 4 */
	int triangleIndex; /* 36 4 */
	uint64_t userMaterialId; /* 40 8 */
	int iterations; /* 48 4 */
	bool hit; /* 52 1 */
};

// <06B04B5E> ../box3d/include/box3d/types.h:1269
// member variables: 2
// struct size: 36
struct b3BodyPlaneResult {
	b3ShapeId shapeId; /* 0 8 */
	b3PlaneResult result; /* 8 28 */
};

// <00ADF334> ../box3d/include/box3d/types.h:1431
// member variables: 2
// struct size: 16
struct b3DebugShape {
	/* ../box3d/include/box3d/types.h:1435 */
	union {
		const b3Capsule * capsule; /* 0 8 */
		const b3Compound * compound; /* 0 8 */
		const b3HeightField * heightField; /* 0 8 */
		const b3Hull * hull; /* 0 8 */
		const b3Mesh * mesh; /* 0 8 */
		const b3Sphere * sphere; /* 0 8 */
	};
	b3ShapeType type; /* 0 4 */
	union {
		const b3Capsule * capsule; /* 8 8 */
		const b3Compound * compound; /* 8 8 */
		const b3HeightField * heightField; /* 8 8 */
		const b3Hull * hull; /* 8 8 */
		const b3Mesh * mesh; /* 8 8 */
		const b3Sphere * sphere; /* 8 8 */
	}; /* 8 8 */
};

// <00AE0C88> ../box3d/include/box3d/types.h:1445
// member functions: 7
// member variables: 24
// struct size: 112
struct b3DebugDraw {
	bool (*DrawShapeFcn)(void* , b3Transform, b3HexColor, void* ); /* 0 8* /
	void (*DrawSegmentFcn)(b3Vec3, b3Vec3, b3HexColor, void* ); /* 8 8* /
	void (*DrawTransformFcn)(b3Transform, void* ); /* 16 8* /
	void (*DrawPointFcn)(b3Vec3, float, b3HexColor, void* ); /* 24 8* /
	void (*DrawBoundsFcn)(b3AABB, b3HexColor, void* ); /* 32 8* /
	void (*DrawBoxFcn)(b3Vec3, b3Transform, b3HexColor, void* ); /* 40 8* /
	void (*DrawStringFcn)(b3Vec3, const char* , b3HexColor, void* ); /* 48 8* /
	b3AABB drawingBounds; /* 56 24 */
	float forceScale; /* 80 4 */
	float jointScale; /* 84 4 */
	bool drawShapes; /* 88 1 */
	bool drawJoints; /* 89 1 */
	bool drawJointExtras; /* 90 1 */
	bool drawBounds; /* 91 1 */
	bool drawMass; /* 92 1 */
	bool drawBodyNames; /* 93 1 */
	bool drawContacts; /* 94 1 */
	bool drawGraphColors; /* 95 1 */
	bool drawContactFeatures; /* 96 1 */
	bool drawContactNormals; /* 97 1 */
	bool drawContactForces; /* 98 1 */
	bool drawFrictionForces; /* 99 1 */
	bool drawIslands; /* 100 1 */
	void * context; /* 104 8 */
};

// <00B0AB75> ../box3d/include/box3d/types.h:1520
b3DebugDraw b3DefaultDebugDraw(void)
{
} /* size: 0 */


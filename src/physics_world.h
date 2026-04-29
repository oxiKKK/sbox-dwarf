
//
// src/physics_world.h
//
//	referenced by: libengine2.so
//
//	functions: 7
//	structs: 4
//

// <06B07FB5> src/physics_world.h:37
// member variables: 3
// struct size: 20
struct b3DebugPoint {
	b3Vec3 p; /* 0 12 */
	int label; /* 12 4 */
	b3HexColor color; /* 16 4 */
};

// <06B07FEE> src/physics_world.h:44
// member variables: 4
// struct size: 32
struct b3DebugLine {
	b3Vec3 p1; /* 0 12 */
	b3Vec3 p2; /* 12 12 */
	int label; /* 24 4 */
	b3HexColor color; /* 28 4 */
};

// <06B08422> src/physics_world.h:52
// member variables: 15
// struct size: 4,296
struct b3TaskContext {
	b3ArenaAllocator arena; /* 0 800 */
	b3Array<b3SensorHit> sensorHits; /* 800 16 */
	b3BitSet contactStateBitSet; /* 816 16 */
	b3BitSet jointStateBitSet; /* 832 16 */
	b3BitSet enlargedSimBitSet; /* 848 16 */
	b3BitSet awakeIslandBitSet; /* 864 16 */
	float splitSleepTime; /* 880 4 */
	int splitIslandId; /* 884 4 */
	int satCallCount; /* 888 4 */
	int satCacheHitCount; /* 892 4 */
	b3DebugPoint points[64]; /* 896 1280 */
	int pointCount; /* 2176 4 */
	b3DebugLine lines[64]; /* 2180 2048 */
	int lineCount; /* 4228 4 */
	char cacheLine[64]; /* 4232 64 */
};

// <06B060DC> src/physics_world.h:92
// member variables: 72
// struct size: 4,672
struct b3World {
	b3ArenaAllocator arena; /* 0 800 */
	b3PoolAllocator manifoldPools[3]; /* 800 600 */
	b3Mutex * manifoldMutex[3]; /* 1400 24 */
	b3BroadPhase broadPhase; /* 1424 312 */
	b3ConstraintGraph constraintGraph; /* 1736 2112 */
	b3IdPool bodyIdPool; /* 3848 24 */
	b3Array<b3Body> bodies; /* 3872 16 */
	b3IdPool solverSetIdPool; /* 3888 24 */
	b3Array<b3SolverSet> solverSets; /* 3912 16 */
	b3IdPool jointIdPool; /* 3928 24 */
	b3Array<b3Joint> joints; /* 3952 16 */
	b3IdPool contactIdPool; /* 3968 24 */
	b3Array<b3Contact> contacts; /* 3992 16 */
	b3IdPool islandIdPool; /* 4008 24 */
	b3Array<b3Island> islands; /* 4032 16 */
	b3IdPool shapeIdPool; /* 4048 24 */
	b3Array<b3Shape> shapes; /* 4072 16 */
	b3Array<b3Sensor> sensors; /* 4088 16 */
	b3Array<b3TaskContext> taskContexts; /* 4104 16 */
	b3Array<b3SensorTaskContext> sensorTaskContexts; /* 4120 16 */
	b3Array<b3BodyMoveEvent> bodyMoveEvents; /* 4136 16 */
	b3Array<b3SensorBeginTouchEvent> sensorBeginEvents; /* 4152 16 */
	b3Array<b3ContactBeginTouchEvent> contactBeginEvents; /* 4168 16 */
	b3Array<b3SensorEndTouchEvent> sensorEndEvents[2]; /* 4184 32 */
	b3Array<b3ContactEndTouchEvent> contactEndEvents[2]; /* 4216 32 */
	int endEventArrayIndex; /* 4248 4 */
	b3Array<b3ContactHitEvent> contactHitEvents; /* 4256 16 */
	b3Array<b3JointEvent> jointEvents; /* 4272 16 */
	b3BitSet debugBodySet; /* 4288 16 */
	b3BitSet debugJointSet; /* 4304 16 */
	b3BitSet debugContactSet; /* 4320 16 */
	b3BitSet debugIslandSet; /* 4336 16 */
	b3CreateDebugShapeCallback * createDebugShape; /* 4352 8 */
	b3DestroyDebugShapeCallback * destroyDebugShape; /* 4360 8 */
	void * userDebugShapeContext; /* 4368 8 */
	uint64_t stepIndex; /* 4376 8 */
	int splitIslandId; /* 4384 4 */
	b3Vec3 gravity; /* 4388 12 */
	float hitEventThreshold; /* 4400 4 */
	float restitutionThreshold; /* 4404 4 */
	float maxLinearSpeed; /* 4408 4 */
	float contactSpeed; /* 4412 4 */
	float contactHertz; /* 4416 4 */
	float contactDampingRatio; /* 4420 4 */
	b3FrictionCallback * frictionCallback; /* 4424 8 */
	b3RestitutionCallback * restitutionCallback; /* 4432 8 */
	uint16_t generation; /* 4440 2 */
	b3Profile profile; /* 4444 92 */
	int satCallCount; /* 4536 4 */
	int satCacheHitCount; /* 4540 4 */
	b3Capacity maxCapacity; /* 4544 20 */
	b3PreSolveFcn * preSolveFcn; /* 4568 8 */
	void * preSolveContext; /* 4576 8 */
	b3CustomFilterFcn * customFilterFcn; /* 4584 8 */
	void * customFilterContext; /* 4592 8 */
	int workerCount; /* 4600 4 */
	b3EnqueueTaskCallback * enqueueTaskFcn; /* 4608 8 */
	b3FinishTaskCallback * finishTaskFcn; /* 4616 8 */
	void * userTaskContext; /* 4624 8 */
	void * userTreeTask; /* 4632 8 */
	void * userData; /* 4640 8 */
	float inv_h; /* 4648 4 */
	float inv_dt; /* 4652 4 */
	int activeTaskCount; /* 4656 4 */
	int taskCount; /* 4660 4 */
	uint16_t worldId; /* 4664 2 */
	bool enableSleep; /* 4666 1 */
	bool locked; /* 4667 1 */
	bool enableWarmStarting; /* 4668 1 */
	bool enableContinuous; /* 4669 1 */
	bool enableSpeculative; /* 4670 1 */
	bool inUse; /* 4671 1 */
};

// <06B0D867> src/physics_world.h:242
b3World* b3GetUnlockedWorldFromId(b3WorldId)
{
} /* size: 0 */

// <06B0D7A7> src/physics_world.h:245
b3World* b3GetUnlockedWorld(int)
{
} /* size: 0 */

// <06B0D519> src/physics_world.h:246
b3World* b3GetWorld(int)
{
} /* size: 0 */

// <06BC50A6> src/physics_world.h:248
// variables: 2
inline b3Manifold* b3AllocateManifolds(b3World* world, int count)
{
	int index; // 257
	b3Manifold* manifolds; // 259
} /* size: 0, variables: 2 */

// <06D05285> src/physics_world.h:264
// variable: 1
inline void b3FreeManifolds(b3World* world, b3Manifold* manifolds, int count)
{
	int index; // 272
} /* size: 0, variables: 1 */

// <06B0D379> src/physics_world.h:278
void b3ValidateConnectivity(b3World *)
{
} /* size: 0 */

// <06B0D832> src/physics_world.h:279
void b3ValidateSolverSets(b3World *)
{
} /* size: 0 */


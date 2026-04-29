
//
// src/solver.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	structs: 5
//

// <06B0609B> src/solver.h:66
// member variables: 3
// struct size: 12
struct b3Softness {
	float biasRate; /* 0 4 */
	float massScale; /* 4 4 */
	float impulseScale; /* 8 4 */
};

// <06B473DB> src/solver.h:75
// member variable: 1
// struct size: 8
struct b3ManifoldLookup {
	b3ContactSim * contactSim; /* 0 8 */
};

// <06B47409> src/solver.h:85
// member variables: 4
// struct size: 12
struct b3SolverBlock {
	int startIndex; /* 0 4 */
	int16_t count; /* 4 2 */
	b3SolverBlockType blockType; /* 6 2 */
	b3AtomicInt syncIndex; /* 8 4 */
};

// <06B47453> src/solver.h:95
// member variables: 5
// struct size: 32
struct b3SolverStage {
	b3SolverStageType type; /* 0 4 */
	b3SolverBlock * blocks; /* 8 8 */
	int blockCount; /* 16 4 */
	int colorIndex; /* 20 4 */
	b3AtomicInt completionCount; /* 24 4 */
};

// <06B474B2> src/solver.h:106
// member variables: 29
// struct size: 344
struct b3StepContext {
	float dt; /* 0 4 */
	float inv_dt; /* 4 4 */
	float h; /* 8 4 */
	float inv_h; /* 12 4 */
	int subStepCount; /* 16 4 */
	b3Softness contactSoftness; /* 20 12 */
	b3Softness staticSoftness; /* 32 12 */
	float restitutionThreshold; /* 44 4 */
	float maxLinearVelocity; /* 48 4 */
	b3World * world; /* 56 8 */
	b3ConstraintGraph * graph; /* 64 8 */
	b3BodyState * states; /* 72 8 */
	b3BodySim * sims; /* 80 8 */
	int * enlargedShapes; /* 88 8 */
	int enlargedShapeCount; /* 96 4 */
	int * bulletBodies; /* 104 8 */
	b3AtomicInt bulletBodyCount; /* 112 4 */
	b3JointSim * * joints; /* 120 8 */
	b3ContactSim * * contactSims; /* 128 8 */
	b3ManifoldLookup * manifoldLookups[3]; /* 136 24 */
	b3ContactConstraintSIMD * contactConstraints[3]; /* 160 24 */
	int activeColorCount; /* 184 4 */
	int workerCount; /* 188 4 */
	b3SolverStage * stages; /* 192 8 */
	int stageCount; /* 200 4 */
	bool enableWarmStarting; /* 204 1 */
	char dummy1[64]; /* 205 64 */
	b3AtomicU32 atomicSyncBits; /* 272 4 */
	char dummy2[64]; /* 276 64 */
};

// <06B52FBA> src/solver.h:176
// variables: 4
inline b3Softness b3MakeSoft(float hertz, float zeta, float h)
{
	float omega; // 187
	float a1; // 188
	float a2; // 189
	float a3; // 190
} /* size: 0, variables: 4 */

// <06BE33C4> src/solver.h:199
void b3Solve(b3World *, b3StepContext *)
{
} /* size: 0 */


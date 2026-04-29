
//
// src/joint.h
//
//	referenced by: libengine2.so
//
//	functions: 41
//	structs: 11
//

// <06B06755> src/joint.h:20
// member variables: 3
// struct size: 12
struct b3JointEdge {
	int bodyId; /* 0 4 */
	int prevKey; /* 4 4 */
	int nextKey; /* 8 4 */
};

// <06B06790> src/joint.h:28
// member variables: 13
// struct size: 72
struct b3Joint {
	void * userData; /* 0 8 */
	int setIndex; /* 8 4 */
	int colorIndex; /* 12 4 */
	int localIndex; /* 16 4 */
	b3JointEdge edges[2]; /* 20 24 */
	int jointId; /* 44 4 */
	int islandId; /* 48 4 */
	int islandPrev; /* 52 4 */
	int islandNext; /* 56 4 */
	float drawScale; /* 60 4 */
	b3JointType type; /* 64 4 */
	uint16_t generation; /* 68 2 */
	bool collideConnected; /* 70 1 */
};

// <06B06876> src/joint.h:62
// member variables: 23
// struct size: 116
struct b3DistanceJoint {
	float length; /* 0 4 */
	float hertz; /* 4 4 */
	float dampingRatio; /* 8 4 */
	float lowerSpringForce; /* 12 4 */
	float upperSpringForce; /* 16 4 */
	float minLength; /* 20 4 */
	float maxLength; /* 24 4 */
	float maxMotorForce; /* 28 4 */
	float motorSpeed; /* 32 4 */
	float impulse; /* 36 4 */
	float lowerImpulse; /* 40 4 */
	float upperImpulse; /* 44 4 */
	float motorImpulse; /* 48 4 */
	int indexA; /* 52 4 */
	int indexB; /* 56 4 */
	b3Vec3 anchorA; /* 60 12 */
	b3Vec3 anchorB; /* 72 12 */
	b3Vec3 deltaCenter; /* 84 12 */
	b3Softness distanceSoftness; /* 96 12 */
	float axialMass; /* 108 4 */
	bool enableSpring; /* 112 1 */
	bool enableLimit; /* 113 1 */
	bool enableMotor; /* 114 1 */
};

// <06B069DD> src/joint.h:93
// member variables: 22
// struct size: 240
struct b3MotorJoint {
	b3Vec3 linearVelocity; /* 0 12 */
	b3Vec3 angularVelocity; /* 12 12 */
	float maxVelocityForce; /* 24 4 */
	float maxVelocityTorque; /* 28 4 */
	float linearHertz; /* 32 4 */
	float linearDampingRatio; /* 36 4 */
	float maxSpringForce; /* 40 4 */
	float angularHertz; /* 44 4 */
	float angularDampingRatio; /* 48 4 */
	float maxSpringTorque; /* 52 4 */
	b3Vec3 linearVelocityImpulse; /* 56 12 */
	b3Vec3 angularVelocityImpulse; /* 68 12 */
	b3Vec3 linearSpringImpulse; /* 80 12 */
	b3Vec3 angularSpringImpulse; /* 92 12 */
	b3Softness linearSpring; /* 104 12 */
	b3Softness angularSpring; /* 116 12 */
	int indexA; /* 128 4 */
	int indexB; /* 132 4 */
	b3Transform frameA; /* 136 28 */
	b3Transform frameB; /* 164 28 */
	b3Vec3 deltaCenter; /* 192 12 */
	b3Matrix3 angularMass; /* 204 36 */
};

// <06B06B47> src/joint.h:122
// member variables: 11
// struct size: 96
struct b3ParallelJoint {
	float hertz; /* 0 4 */
	float dampingRatio; /* 4 4 */
	float maxTorque; /* 8 4 */
	b3Vec2 perpImpulse; /* 12 8 */
	b3Vec3 perpAxisX; /* 20 12 */
	b3Vec3 perpAxisY; /* 32 12 */
	b3Quat quatA; /* 44 16 */
	b3Quat quatB; /* 60 16 */
	int indexA; /* 76 4 */
	int indexB; /* 80 4 */
	b3Softness softness; /* 84 12 */
};

// <06B06BFA> src/joint.h:139
// member variables: 27
// struct size: 232
struct b3PrismaticJoint {
	b3Vec2 perpImpulse; /* 0 8 */
	b3Vec3 angularImpulse; /* 8 12 */
	float springImpulse; /* 20 4 */
	float motorImpulse; /* 24 4 */
	float lowerImpulse; /* 28 4 */
	float upperImpulse; /* 32 4 */
	float hertz; /* 36 4 */
	float dampingRatio; /* 40 4 */
	float maxMotorForce; /* 44 4 */
	float motorSpeed; /* 48 4 */
	float targetTranslation; /* 52 4 */
	float lowerTranslation; /* 56 4 */
	float upperTranslation; /* 60 4 */
	int indexA; /* 64 4 */
	int indexB; /* 68 4 */
	b3Transform frameA; /* 72 28 */
	b3Transform frameB; /* 100 28 */
	b3Vec3 jointAxis; /* 128 12 */
	b3Vec3 perpAxisY; /* 140 12 */
	b3Vec3 perpAxisZ; /* 152 12 */
	b3Vec3 deltaCenter; /* 164 12 */
	float deltaAngle; /* 176 4 */
	b3Matrix3 rotationMass; /* 180 36 */
	b3Softness springSoftness; /* 216 12 */
	bool enableSpring; /* 228 1 */
	bool enableLimit; /* 229 1 */
	bool enableMotor; /* 230 1 */
};

// <06B06DA7> src/joint.h:172
// member variables: 27
// struct size: 200
struct b3RevoluteJoint {
	b3Vec3 linearImpulse; /* 0 12 */
	b3Vec2 perpImpulse; /* 12 8 */
	float springImpulse; /* 20 4 */
	float motorImpulse; /* 24 4 */
	float lowerImpulse; /* 28 4 */
	float upperImpulse; /* 32 4 */
	float hertz; /* 36 4 */
	float dampingRatio; /* 40 4 */
	float maxMotorTorque; /* 44 4 */
	float motorSpeed; /* 48 4 */
	float targetAngle; /* 52 4 */
	float lowerAngle; /* 56 4 */
	float upperAngle; /* 60 4 */
	int indexA; /* 64 4 */
	int indexB; /* 68 4 */
	b3Transform frameA; /* 72 28 */
	b3Transform frameB; /* 100 28 */
	b3Vec3 rotationAxisZ; /* 128 12 */
	b3Vec3 perpAxisX; /* 140 12 */
	b3Vec3 perpAxisY; /* 152 12 */
	b3Vec3 deltaCenter; /* 164 12 */
	float deltaAngle; /* 176 4 */
	float axialMass; /* 180 4 */
	b3Softness springSoftness; /* 184 12 */
	bool enableSpring; /* 196 1 */
	bool enableMotor; /* 197 1 */
	bool enableLimit; /* 198 1 */
};

// <06B06F54> src/joint.h:205
// member variables: 29
// struct size: 260
struct b3SphericalJoint {
	b3Vec3 linearImpulse; /* 0 12 */
	b3Vec3 springImpulse; /* 12 12 */
	b3Vec3 motorImpulse; /* 24 12 */
	float lowerTwistImpulse; /* 36 4 */
	float upperTwistImpulse; /* 40 4 */
	float swingImpulse; /* 44 4 */
	float hertz; /* 48 4 */
	float dampingRatio; /* 52 4 */
	float maxMotorTorque; /* 56 4 */
	b3Vec3 motorVelocity; /* 60 12 */
	float lowerTwistAngle; /* 72 4 */
	float upperTwistAngle; /* 76 4 */
	float coneAngle; /* 80 4 */
	b3Quat targetRotation; /* 84 16 */
	int indexA; /* 100 4 */
	int indexB; /* 104 4 */
	b3Transform frameA; /* 108 28 */
	b3Transform frameB; /* 136 28 */
	b3Vec3 deltaCenter; /* 164 12 */
	b3Vec3 swingAxis; /* 176 12 */
	b3Vec3 twistJacobian; /* 188 12 */
	b3Matrix3 rotationMass; /* 200 36 */
	float swingMass; /* 236 4 */
	float twistMass; /* 240 4 */
	b3Softness springSoftness; /* 244 12 */
	bool enableSpring; /* 256 1 */
	bool enableMotor; /* 257 1 */
	bool enableConeLimit; /* 258 1 */
	bool enableTwistLimit; /* 259 1 */
};

// <06B07122> src/joint.h:241
// member variables: 14
// struct size: 176
struct b3WeldJoint {
	float linearHertz; /* 0 4 */
	float linearDampingRatio; /* 4 4 */
	float angularHertz; /* 8 4 */
	float angularDampingRatio; /* 12 4 */
	b3Softness linearSpring; /* 16 12 */
	b3Softness angularSpring; /* 28 12 */
	b3Vec3 linearImpulse; /* 40 12 */
	b3Vec3 angularImpulse; /* 52 12 */
	int indexA; /* 64 4 */
	int indexB; /* 68 4 */
	b3Transform frameA; /* 72 28 */
	b3Transform frameB; /* 100 28 */
	b3Vec3 deltaCenter; /* 128 12 */
	b3Matrix3 angularMass; /* 140 36 */
};

// <06B07207> src/joint.h:262
// member variables: 37
// struct size: 212
struct b3WheelJoint {
	b3Vec2 linearImpulse; /* 0 8 */
	b3Vec2 angularImpulse; /* 8 8 */
	float spinImpulse; /* 16 4 */
	float maxSpinTorque; /* 20 4 */
	float spinSpeed; /* 24 4 */
	float suspensionSpringImpulse; /* 28 4 */
	float lowerSuspensionImpulse; /* 32 4 */
	float upperSuspensionImpulse; /* 36 4 */
	float lowerSuspensionLimit; /* 40 4 */
	float upperSuspensionLimit; /* 44 4 */
	float suspensionHertz; /* 48 4 */
	float suspensionDampingRatio; /* 52 4 */
	float steeringSpringImpulse; /* 56 4 */
	float lowerSteeringImpulse; /* 60 4 */
	float upperSteeringImpulse; /* 64 4 */
	float lowerSteeringLimit; /* 68 4 */
	float upperSteeringLimit; /* 72 4 */
	float targetSteeringAngle; /* 76 4 */
	float maxSteeringTorque; /* 80 4 */
	float steeringHertz; /* 84 4 */
	float steeringDampingRatio; /* 88 4 */
	int indexA; /* 92 4 */
	int indexB; /* 96 4 */
	b3Transform frameA; /* 100 28 */
	b3Transform frameB; /* 128 28 */
	b3Vec3 deltaCenter; /* 156 12 */
	float spinMass; /* 168 4 */
	float suspensionMass; /* 172 4 */
	float steeringMass; /* 176 4 */
	b3Softness suspensionSoftness; /* 180 12 */
	b3Softness steeringSoftness; /* 192 12 */
	bool enableSpinMotor; /* 204 1 */
	bool enableSuspensionSpring; /* 205 1 */
	bool enableSuspensionLimit; /* 206 1 */
	bool enableSteering; /* 207 1 */
	bool enableSteeringLimit; /* 208 1 */
	bool enableSteeringMotor; /* 209 1 */
};

// <06B0659A> src/joint.h:307
// member variables: 17
// struct size: 444
struct b3JointSim {
	/* src/joint.h:334 */
	union {
		b3DistanceJoint distanceJoint; /* 0 116 */
		b3MotorJoint motorJoint; /* 0 240 */
		b3ParallelJoint parallelJoint; /* 0 96 */
		b3RevoluteJoint revoluteJoint; /* 0 200 */
		b3SphericalJoint sphericalJoint; /* 0 260 */
		b3PrismaticJoint prismaticJoint; /* 0 232 */
		b3WeldJoint weldJoint; /* 0 176 */
		b3WheelJoint wheelJoint; /* 0 212 */
	};
	int jointId; /* 0 4 */
	int bodyIdA; /* 4 4 */
	int bodyIdB; /* 8 4 */
	b3JointType type; /* 12 4 */
	b3Transform localFrameA; /* 16 28 */
	b3Transform localFrameB; /* 44 28 */
	float invMassA; /* 72 4 */
	float invMassB; /* 76 4 */
	b3Matrix3 invIA; /* 80 36 */
	b3Matrix3 invIB; /* 116 36 */
	float constraintHertz; /* 152 4 */
	float constraintDampingRatio; /* 156 4 */
	b3Softness constraintSoftness; /* 160 12 */
	float forceThreshold; /* 172 4 */
	float torqueThreshold; /* 176 4 */
	bool fixedRotation; /* 180 1 */
	union {
		b3DistanceJoint distanceJoint; /* 184 116 */
		b3MotorJoint motorJoint; /* 184 240 */
		b3ParallelJoint parallelJoint; /* 184 96 */
		b3RevoluteJoint revoluteJoint; /* 184 200 */
		b3SphericalJoint sphericalJoint; /* 184 260 */
		b3PrismaticJoint prismaticJoint; /* 184 232 */
		b3WeldJoint weldJoint; /* 184 176 */
		b3WheelJoint wheelJoint; /* 184 212 */
	}; /* 184 260 */
};

// <06B0D784> src/joint.h:346
void b3DestroyJointInternal(b3World *, b3Joint *, bool)
{
} /* size: 0 */

// <06B4E740> src/joint.h:350
b3JointSim* b3GetJointSimCheckType(b3JointId, b3JointType)
{
} /* size: 0 */

// <06B8E47E> src/joint.h:365
b3Vec3 b3GetMotorJointForce(b3World *, b3JointSim *)
{
} /* size: 0 */

// <06B8E45C> src/joint.h:366
b3Vec3 b3GetPrismaticJointForce(b3World *, b3JointSim *)
{
} /* size: 0 */

// <06B8E43A> src/joint.h:367
b3Vec3 b3GetRevoluteJointForce(b3World *, b3JointSim *)
{
} /* size: 0 */

// <06B8E418> src/joint.h:368
b3Vec3 b3GetSphericalJointForce(b3World *, b3JointSim *)
{
} /* size: 0 */

// <06B8E3F6> src/joint.h:369
b3Vec3 b3GetWeldJointForce(b3World *, b3JointSim *)
{
} /* size: 0 */

// <06B8E3D4> src/joint.h:370
b3Vec3 b3GetWheelJointForce(b3World *, b3JointSim *)
{
} /* size: 0 */

// <06B8E3B2> src/joint.h:372
b3Vec3 b3GetMotorJointTorque(b3World *, b3JointSim *)
{
} /* size: 0 */

// <06B8E390> src/joint.h:374
b3Vec3 b3GetPrismaticJointTorque(b3World *, b3JointSim *)
{
} /* size: 0 */

// <06B8E36E> src/joint.h:375
b3Vec3 b3GetRevoluteJointTorque(b3World *, b3JointSim *)
{
} /* size: 0 */

// <06B8E34C> src/joint.h:376
b3Vec3 b3GetSphericalJointTorque(b3World *, b3JointSim *)
{
} /* size: 0 */

// <06B8E32A> src/joint.h:377
b3Vec3 b3GetWeldJointTorque(b3World *, b3JointSim *)
{
} /* size: 0 */

// <06B8E308> src/joint.h:378
b3Vec3 b3GetWheelJointTorque(b3World *, b3JointSim *)
{
} /* size: 0 */

// <06B8E291> src/joint.h:381
void b3PrepareMotorJoint(b3JointSim *, b3StepContext *)
{
} /* size: 0 */

// <06B8E2CD> src/joint.h:382
void b3PrepareParallelJoint(b3JointSim *, b3StepContext *)
{
} /* size: 0 */

// <06B8E273> src/joint.h:383
void b3PreparePrismaticJoint(b3JointSim *, b3StepContext *)
{
} /* size: 0 */

// <06B8E255> src/joint.h:384
void b3PrepareRevoluteJoint(b3JointSim *, b3StepContext *)
{
} /* size: 0 */

// <06B8E237> src/joint.h:385
void b3PrepareSphericalJoint(b3JointSim *, b3StepContext *)
{
} /* size: 0 */

// <06B8E219> src/joint.h:386
void b3PrepareWeldJoint(b3JointSim *, b3StepContext *)
{
} /* size: 0 */

// <06B8E1FB> src/joint.h:387
void b3PrepareWheelJoint(b3JointSim *, b3StepContext *)
{
} /* size: 0 */

// <06B8E1A1> src/joint.h:390
void b3WarmStartMotorJoint(b3JointSim *, b3StepContext *)
{
} /* size: 0 */

// <06B8E1DD> src/joint.h:391
void b3WarmStartParallelJoint(b3JointSim *, b3StepContext *)
{
} /* size: 0 */

// <06B8E183> src/joint.h:392
void b3WarmStartPrismaticJoint(b3JointSim *, b3StepContext *)
{
} /* size: 0 */

// <06B8E165> src/joint.h:393
void b3WarmStartRevoluteJoint(b3JointSim *, b3StepContext *)
{
} /* size: 0 */

// <06B8E147> src/joint.h:394
void b3WarmStartSphericalJoint(b3JointSim *, b3StepContext *)
{
} /* size: 0 */

// <06B8E129> src/joint.h:395
void b3WarmStartWeldJoint(b3JointSim *, b3StepContext *)
{
} /* size: 0 */

// <06B8E10B> src/joint.h:396
void b3WarmStartWheelJoint(b3JointSim *, b3StepContext *)
{
} /* size: 0 */

// <06B8E0AC> src/joint.h:399
void b3SolveMotorJoint(b3JointSim *, b3StepContext *)
{
} /* size: 0 */

// <06B8E0ED> src/joint.h:400
void b3SolveParallelJoint(b3JointSim *, b3StepContext *)
{
} /* size: 0 */

// <06B8E089> src/joint.h:401
void b3SolvePrismaticJoint(b3JointSim *, b3StepContext *, bool)
{
} /* size: 0 */

// <06B8E066> src/joint.h:402
void b3SolveRevoluteJoint(b3JointSim *, b3StepContext *, bool)
{
} /* size: 0 */

// <06B8E043> src/joint.h:403
void b3SolveSphericalJoint(b3JointSim *, b3StepContext *, bool)
{
} /* size: 0 */

// <06B8E020> src/joint.h:404
void b3SolveWeldJoint(b3JointSim *, b3StepContext *, bool)
{
} /* size: 0 */

// <06B8DFF7> src/joint.h:405
void b3SolveWheelJoint(b3JointSim *, b3StepContext *, bool)
{
} /* size: 0 */

// <06B8DFA9> src/joint.h:408
void b3DrawParallelJoint(b3DebugDraw *, b3JointSim *, b3Transform, b3Transform, float)
{
} /* size: 0 */

// <06B8DF54> src/joint.h:409
void b3DrawPrismaticJoint(b3DebugDraw *, b3JointSim *, b3Transform, b3Transform, float)
{
} /* size: 0 */

// <06B8DF27> src/joint.h:410
void b3DrawRevoluteJoint(b3DebugDraw *, b3JointSim *, b3Transform, b3Transform, float)
{
} /* size: 0 */

// <06B8DEFA> src/joint.h:411
void b3DrawSphericalJoint(b3DebugDraw *, b3JointSim *, b3Transform, b3Transform, float)
{
} /* size: 0 */

// <06B8DECD> src/joint.h:412
void b3DrawWeldJoint(b3DebugDraw *, b3JointSim *, b3Transform, b3Transform, float)
{
} /* size: 0 */

// <06B8DE9A> src/joint.h:413
void b3DrawWheelJoint(b3DebugDraw *, b3JointSim *, b3Transform, b3Transform, float)
{
} /* size: 0 */


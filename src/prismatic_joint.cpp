
//
// src/prismatic_joint.cpp
//
//	referenced by: libengine2.so
//
//	functions: 12
//

// <06C04956> src/prismatic_joint.cpp:63
// variable: 1
bool b3PrismaticJoint_IsLimitEnabled(b3JointId jointId)
{
	b3JointSim* base; // 65
} /* size: 0, variables: 1 */

// <06C040D6> src/prismatic_joint.cpp:92
// variables: 7
// function calls: 27
float b3PrismaticJoint_GetTranslation(b3JointId jointId)
{
	b3World* world; // 94
	b3JointSim* base; // 95
	b3Transform transformA; // 96
	b3Transform transformB; // 97
	b3Vec3 jointAxis; // 99
	b3Vec3 d; // 102
	float translation; // 104
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 99
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 100
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 103
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 103
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 103
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 103
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 103
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 104
} /* size: 0, variables: 7, inline expansions: 27 (0 bytes) */

// <06C04002> src/prismatic_joint.cpp:118
// variable: 1
bool b3PrismaticJoint_IsSpringEnabled(b3JointId jointId)
{
	b3JointSim* base; // 120
} /* size: 0, variables: 1 */

// <06C03F4B> src/prismatic_joint.cpp:124
// variable: 1
void b3PrismaticJoint_SetTargetTranslation(b3JointId jointId, float targetTranslation)
{
	b3JointSim* base; // 127
} /* size: 0, variables: 1 */

// <06C03EE9> src/prismatic_joint.cpp:131
// variable: 1
float b3PrismaticJoint_GetTargetTranslation(b3JointId jointId)
{
	b3JointSim* base; // 133
} /* size: 0, variables: 1 */

// <06C03E32> src/prismatic_joint.cpp:137
// variable: 1
void b3PrismaticJoint_SetSpringHertz(b3JointId jointId, float hertz)
{
	b3JointSim* base; // 140
} /* size: 0, variables: 1 */

// <06C03DD0> src/prismatic_joint.cpp:144
// variable: 1
float b3PrismaticJoint_GetSpringHertz(b3JointId jointId)
{
	b3JointSim* base; // 146
} /* size: 0, variables: 1 */

// <06C03D19> src/prismatic_joint.cpp:150
// variable: 1
void b3PrismaticJoint_SetSpringDampingRatio(b3JointId jointId, float dampingRatio)
{
	b3JointSim* base; // 153
} /* size: 0, variables: 1 */

// <06C03CB7> src/prismatic_joint.cpp:157
// variable: 1
float b3PrismaticJoint_GetSpringDampingRatio(b3JointId jointId)
{
	b3JointSim* base; // 159
} /* size: 0, variables: 1 */

// <06C03BE3> src/prismatic_joint.cpp:173
// variable: 1
bool b3PrismaticJoint_IsMotorEnabled(b3JointId jointId)
{
	b3JointSim* base; // 175
} /* size: 0, variables: 1 */

// <06C03ACA> src/prismatic_joint.cpp:186
// variable: 1
float b3PrismaticJoint_GetMotorSpeed(b3JointId jointId)
{
	b3JointSim* base; // 188
} /* size: 0, variables: 1 */

// <06C039B1> src/prismatic_joint.cpp:199
// variable: 1
float b3PrismaticJoint_GetMaxMotorForce(b3JointId jointId)
{
	b3JointSim* base; // 201
} /* size: 0, variables: 1 */


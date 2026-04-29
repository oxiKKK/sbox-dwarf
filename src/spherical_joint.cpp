
//
// src/spherical_joint.cpp
//
//	referenced by: libengine2.so
//
//	functions: 13
//

// <06C90AB4> src/spherical_joint.cpp:25
// variable: 1
bool b3SphericalJoint_IsConeLimitEnabled(b3JointId jointId)
{
	b3JointSim* base; // 27
} /* size: 0, variables: 1 */

// <06C90A52> src/spherical_joint.cpp:31
// variable: 1
float b3SphericalJoint_GetConeLimit(b3JointId jointId)
{
	b3JointSim* base; // 33
} /* size: 0, variables: 1 */

// <06C9048D> src/spherical_joint.cpp:45
// variables: 7
// function calls: 18
float b3SphericalJoint_GetConeAngle(b3JointId jointId)
{
	b3World* world; // 47
	b3JointSim* base; // 48
	b3Transform transformA; // 49
	b3Transform transformB; // 50
	b3Quat quatA; // 52
	b3Quat quatB; // 53
	b3Quat relQ; // 61
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 413
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 414
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 415
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 416
	b3MulQuat(b3Quat q1,
			b3Quat q2);  // 52
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 413
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 414
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 415
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 416
	b3MulQuat(b3Quat q1,
			b3Quat q2);  // 53
	b3DotQuat(b3Quat a,
			b3Quat b);  // 55
	b3NegateQuat(b3Quat q); // 58
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 422
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 423
	b3MulSub(b3Vec3 a,
		float s,
		b3Vec3 b);  // 424
	b3InvMulQuat(b3Quat q1,
			b3Quat q2);  // 61
	b3GetSwingAngle(b3Quat q); // 494
	b3GetSwingAngle(b3Quat q); // 63
} /* size: 0, variables: 7, inline expansions: 18 (0 bytes) */

// <06C903B9> src/spherical_joint.cpp:77
// variable: 1
bool b3SphericalJoint_IsTwistLimitEnabled(b3JointId jointId)
{
	b3JointSim* base; // 79
} /* size: 0, variables: 1 */

// <06C90357> src/spherical_joint.cpp:83
// variable: 1
float b3SphericalJoint_GetLowerTwistLimit(b3JointId jointId)
{
	b3JointSim* base; // 85
} /* size: 0, variables: 1 */

// <06C8FC3A> src/spherical_joint.cpp:108
// variables: 7
// function calls: 18
float b3SphericalJoint_GetTwistAngle(b3JointId jointId)
{
	b3World* world; // 110
	b3JointSim* base; // 111
	b3Transform transformA; // 112
	b3Transform transformB; // 113
	b3Quat quatA; // 115
	b3Quat quatB; // 116
	b3Quat relQ; // 124
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 413
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 414
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 415
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 416
	b3MulQuat(b3Quat q1,
			b3Quat q2);  // 115
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 413
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 414
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 415
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 416
	b3MulQuat(b3Quat q1,
			b3Quat q2);  // 116
	b3DotQuat(b3Quat a,
			b3Quat b);  // 118
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 422
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 423
	b3MulSub(b3Vec3 a,
		float s,
		b3Vec3 b);  // 424
	b3InvMulQuat(b3Quat q1,
			b3Quat q2);  // 124
	b3GetTwistAngle(b3Quat q); // 483
	b3GetTwistAngle(b3Quat q); // 126
	b3NegateQuat(b3Quat q); // 121
} /* size: 0, variables: 7, inline expansions: 18 (0 bytes) */

// <06C8FB66> src/spherical_joint.cpp:139
// variable: 1
bool b3SphericalJoint_IsSpringEnabled(b3JointId jointId)
{
	b3JointSim* base; // 141
} /* size: 0, variables: 1 */

// <06C8FA5E> src/spherical_joint.cpp:152
// variable: 1
b3Quat b3SphericalJoint_GetTargetRotation(b3JointId jointId)
{
	b3JointSim* base; // 154
} /* size: 0, variables: 1 */

// <06C8F945> src/spherical_joint.cpp:165
// variable: 1
float b3SphericalJoint_GetSpringHertz(b3JointId jointId)
{
	b3JointSim* base; // 167
} /* size: 0, variables: 1 */

// <06C8F82C> src/spherical_joint.cpp:178
// variable: 1
float b3SphericalJoint_GetSpringDampingRatio(b3JointId jointId)
{
	b3JointSim* base; // 180
} /* size: 0, variables: 1 */

// <06C8F758> src/spherical_joint.cpp:194
// variable: 1
bool b3SphericalJoint_IsMotorEnabled(b3JointId jointId)
{
	b3JointSim* base; // 196
} /* size: 0, variables: 1 */

// <06C8F650> src/spherical_joint.cpp:207
// variable: 1
b3Vec3 b3SphericalJoint_GetMotorVelocity(b3JointId jointId)
{
	b3JointSim* base; // 209
} /* size: 0, variables: 1 */

// <06C8F537> src/spherical_joint.cpp:220
// variable: 1
float b3SphericalJoint_GetMaxMotorTorque(b3JointId jointId)
{
	b3JointSim* base; // 222
} /* size: 0, variables: 1 */


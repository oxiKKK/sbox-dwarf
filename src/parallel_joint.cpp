
//
// src/parallel_joint.cpp
//
//	referenced by: libengine2.so
//
//	function: 1
//

// <06C9EF3B> src/parallel_joint.cpp:54
// variables: 4
// function calls: 34
b3Vec3 b3GetParallelJointTorque(b3World* world, b3JointSim* base)
{
	b3ParallelJoint* joint; // 56
	b3Quat relQ; // 58
	b3Vec3 angularImpulse; // 62
	b3Vec3 torque; // 63
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 422
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 423
	b3MulSub(b3Vec3 a,
		float s,
		b3Vec3 b);  // 424
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 425
	b3InvMulQuat(b3Quat q1,
			b3Quat q2);  // 58
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 59
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 59
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 59
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
			b3Vec3 v);  // 59
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 59
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 60
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 60
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
			b3Vec3 v);  // 60
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 60
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 62
	b3MulSV(float s,
		b3Vec3 a);  // 1001
	operator*(float s,
			b3Vec3 a);  // 62
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 62
	b3MulSV(float s,
		b3Vec3 a);  // 63
} /* size: 0, variables: 4, inline expansions: 34 (0 bytes) */


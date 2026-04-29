
//
// src/joint.cpp
//
//	referenced by: libengine2.so
//
//	functions: 21
//	struct: 1
//

// <06B95C8C> src/joint.cpp:21
// variable: 1
b3JointDef b3DefaultJointDef(void)
{
	b3JointDef def; // 23
} /* size: 0, variables: 1 */

// <06B95950> src/joint.cpp:111
// variable: 1
b3ExplosionDef b3DefaultExplosionDef(void)
{
	b3ExplosionDef def; // 113
} /* size: 0, variables: 1 */

// <06B95851> src/joint.cpp:118
// variables: 2
// function call: 1
b3Joint* b3GetJointFullId(b3World* world, b3JointId jointId)
{
	int id; // 120
	b3Joint* joint; // 121
	b3Array<b3Joint>::Get(
		int index);  // 121
} /* size: 0, variables: 2, inline expansions: 1 (72 bytes) */

// <06B95802> src/joint.cpp:126
// variables: 2
b3JointSim* b3GetJointSim(b3World* world, b3Joint* joint)
{
	b3SolverSet* set; // 135
	{
		b3GraphColor* color; // 131
	}
} /* size: 0, variables: 1 */

// <06B8DE62> src/joint.cpp:150
// member variables: 2
// struct size: 16
struct b3JointPair {
	b3Joint * joint; /* 0 8 */
	b3JointSim * jointSim; /* 8 8 */
};

// <06B94963> src/joint.cpp:156
// variables: 23
// function calls: 24
b3JointPair b3CreateJoint(b3World* world, const b3JointDef* def, b3JointType type)
{
	b3Body* bodyA; // 161
	b3Body* bodyB; // 162
	int bodyIdA; // 164
	int bodyIdB; // 165
	int maxSetIndex; // 166
	int jointId; // 169
	b3Joint* joint; // 175
	int keyA; // 194
	int keyB; // 209
	b3JointSim* jointSim; // 219
	{
		b3Joint* jointA; // 197
		b3JointEdge* edgeA; // 198
		b3Array<b3Joint>::Get(
			int index);  // 197
	}
	{
		b3Joint* jointB; // 212
		b3JointEdge* edgeB; // 213
		b3Array<b3Joint>::Get(
			int index);  // 212
	}
	{
		b3SolverSet* set; // 224
		b3Array<b3SolverSet>::Get(
			int index);  // 224
		{
			int newCapacity; // 115
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 241
			b3Array<b3JointSim>::Reserve(
				int newCapacity);  // 117
		}
		b3Array<b3JointSim>::Add(); // 228
		memset(void* __dest,
			int __ch,
			size_t __len);  // 229
	}
	{
		b3SolverSet* set; // 238
		memset(void* __dest,
			int __ch,
			size_t __len);  // 243
		b3Array<b3SolverSet>::Get(
			int index);  // 238
		{
			int newCapacity; // 115
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 241
			b3Array<b3JointSim>::Reserve(
				int newCapacity);  // 117
		}
		b3Array<b3JointSim>::Add(); // 242
	}
	{
		int setIndex; // 271
		b3SolverSet* set; // 273
		{
			b3SolverSet* mergedSet; // 294
			b3Array<b3SolverSet>::Get(
				int index);  // 294
			b3Array<b3JointSim>::Get(
				int index);  // 297
		}
		b3Array<b3SolverSet>::Get(
			int index);  // 273
		{
			int newCapacity; // 115
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 241
			b3Array<b3JointSim>::Reserve(
				int newCapacity);  // 117
		}
		b3Array<b3JointSim>::Add(); // 277
		memset(void* __dest,
			int __ch,
			size_t __len);  // 278
	}
	b3MaxInt(int a,
		int b);  // 166
	b3Array<b3Joint>::Get(
		int index);  // 175
	{
		int newCapacity; // 132
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 241
		b3Array<b3Joint>::Reserve(
			int newCapacity);  // 134
	}
	b3Array<b3Joint>::PushBack(
		const b3Joint& value);  // 172
} /* size: 0, variables: 10, inline expansions: 3 (402 bytes) */

// <06B948CF> src/joint.cpp:335
// variables: 7
void b3DestroyContactsBetweenBodies(b3World* world, b3Body* bodyA, b3Body* bodyB)
{
	int contactKey; // 337
	int otherBodyId; // 338
	bool wakeBodies; // 353
	{
		int contactId; // 358
		int edgeIndex; // 359
		b3Contact* contact; // 361
		int otherEdgeIndex; // 364
	}
} /* size: 0, variables: 3 */

// <06B9474E> src/joint.cpp:375
// variables: 3
void b3Joint_SetConstraintTuning(b3JointId jointId, float hertz, float dampingRatio)
{
	b3World* world; // 380
	b3Joint* joint; // 381
	b3JointSim* base; // 382
} /* size: 0, variables: 3 */

// <06B94673> src/joint.cpp:387
// variables: 3
void b3Joint_GetConstraintTuning(b3JointId jointId, float* hertz, float* dampingRatio)
{
	b3World* world; // 389
	b3Joint* joint; // 390
	b3JointSim* base; // 391
} /* size: 0, variables: 3 */

// <06B91DD0> src/joint.cpp:962
// variables: 4
// function calls: 2
void b3Joint_WakeBodies(b3JointId jointId)
{
	b3World* world; // 964
	b3Joint* joint; // 972
	b3Body* bodyA; // 973
	b3Body* bodyB; // 974
	b3Array<b3Body>::Get(
		int index);  // 973
	b3Array<b3Body>::Get(
		int index);  // 974
} /* size: 0, variables: 4, inline expansions: 2 (0 bytes) */

// <06B90F6C> src/joint.cpp:982
// variables: 25
// function calls: 58
void b3GetJointReaction(b3World* world, b3JointSim* sim, float invTimeStep, float* force, float* torque)
{
	float linearImpulse; // 984
	float angularImpulse; // 985
	{
		b3ParallelJoint* joint; // 991
		b3Vec3 impulse; // 992
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 997
	}
	{
		b3DistanceJoint* joint; // 1003
		b3AbsFloat(float a); // 1004
	}
	{
		b3MotorJoint* joint; // 1010
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1011
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 1011
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1012
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 1012
	}
	{
		b3PrismaticJoint* joint; // 1018
		b3Vec3 impulse; // 1019
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 1024
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 1025
	}
	{
		b3RevoluteJoint* joint; // 1031
		b3Vec3 impulse; // 1033
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 1032
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 1038
	}
	{
		b3SphericalJoint* joint; // 1045
		b3Transform xfA; // 1048
		b3Transform xfB; // 1049
		b3Quat qA; // 1050
		b3Quat qB; // 1051
		b3Vec3 coneAxis; // 1054
		b3Vec3 twistAxis; // 1055
		b3Vec3 swingAxis; // 1056
		b3Vec3 impulse; // 1058
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 1046
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
				b3Quat q2);  // 1050
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 1056
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
				b3Quat q2);  // 1051
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
				b3Vec3 v);  // 1054
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
				b3Vec3 v);  // 1055
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 1056
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 1060
		b3MulSV(float s,
			b3Vec3 a);  // 1001
		operator*(float s,
				b3Vec3 a);  // 1060
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 1060
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 1060
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 1060
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 1062
	}
	{
		b3WeldJoint* joint; // 1068
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 1070
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 1069
	}
	{
		b3WheelJoint* joint; // 1077
		b3Vec2 perpImpulse; // 1078
		float axialImpulse; // 1079
		b3AbsFloat(float a); // 1081
	}
} /* size: 2038, variables: 2 */

// <06B90E5D> src/joint.cpp:1093
// variable: 1
b3Vec3 b3GetJointConstraintForce(b3World* world, b3Joint* joint)
{
	b3JointSim* base; // 1095
} /* size: 0, variables: 1 */

// <06B90D1A> src/joint.cpp:1132
// variable: 1
b3Vec3 b3GetJointConstraintTorque(b3World* world, b3Joint* joint)
{
	b3JointSim* base; // 1134
} /* size: 0, variables: 1 */

// <06B900A3> src/joint.cpp:1182
// variables: 27
// function calls: 40
float b3Joint_GetLinearSeparation(b3JointId jointId)
{
	b3World* world; // 1184
	b3Joint* joint; // 1185
	b3JointSim* base; // 1186
	b3Transform xfA; // 1188
	b3Transform xfB; // 1189
	b3Vec3 pA; // 1191
	b3Vec3 pB; // 1192
	b3Vec3 dp; // 1193
	{
		b3DistanceJoint* distanceJoint; // 1202
		float length; // 1203
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 1203
		b3AbsFloat(float a); // 1224
	}
	{
		b3PrismaticJoint* prismaticJoint; // 1235
		b3Vec3 axisA; // 1236
		b3Vec3 perpA; // 1237
		float perpendicularSeparation; // 1238
		float limitSeparation; // 1239
		{
			float translation; // 1243
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 1243
		}
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
				b3Vec3 v);  // 1236
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 283
		b3Perp(b3Vec3 v); // 1237
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 1238
	}
	{
		b3WeldJoint* weldJoint; // 1266
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 1269
	}
	{
		b3WheelJoint* wheelJoint; // 1277
		b3Vec3 axisA; // 1278
		b3Vec3 perpA; // 1279
		float perpendicularSeparation; // 1280
		float limitSeparation; // 1281
		{
			float translation; // 1285
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 1285
		}
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
				b3Vec3 v);  // 1278
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 283
		b3Perp(b3Vec3 v); // 1279
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 1280
	}
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
			b3Vec3 v);  // 566
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 567
	b3TransformPoint(b3Transform t,
			b3Vec3 v);  // 1191
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
			b3Vec3 v);  // 566
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 567
	b3TransformPoint(b3Transform t,
			b3Vec3 v);  // 1192
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1193
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 220
	b3Length(b3Vec3 v); // 1259
} /* size: 0, variables: 8, inline expansions: 17 (0 bytes) */

// <06B8FA2B> src/joint.cpp:1306
// variables: 13
// function calls: 16
float b3Joint_GetAngularSeparation(b3JointId jointId)
{
	b3World* world; // 1308
	b3Joint* joint; // 1309
	b3JointSim* base; // 1310
	b3Transform xfA; // 1312
	b3Transform xfB; // 1313
	b3Quat relQ; // 1315
	{
		b3RevoluteJoint* revoluteJoint; // 1340
		{
			float angle; // 1343
			b3GetTwistAngle(b3Quat q); // 483
			b3GetTwistAngle(b3Quat q); // 1343
			b3GetQuatAngle(b3Quat q); // 1346
			b3GetQuatAngle(b3Quat q); // 1351
		}
		b3GetQuatAngle(b3Quat q); // 1357
	}
	{
		b3SphericalJoint* sphericalJoint; // 1362
		float sum; // 1363
		{
			float swingAngle; // 1366
			b3GetSwingAngle(b3Quat q); // 494
			b3GetSwingAngle(b3Quat q); // 1366
		}
		{
			float twistAngle; // 1372
			b3GetTwistAngle(b3Quat q); // 483
			b3GetTwistAngle(b3Quat q); // 1372
		}
	}
	{
		b3WeldJoint* weldJoint; // 1382
	}
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
			b3Quat q2);  // 1315
	b3GetQuatAngle(b3Quat q); // 1336
	b3GetQuatAngle(b3Quat q); // 1323
} /* size: 0, variables: 6, inline expansions: 7 (0 bytes) */

// <06B8F85C> src/joint.cpp:1441
// variable: 1
// function calls: 2
void b3PrepareJoint(b3JointSim* joint, b3StepContext* context)
{
	float hertz; // 1444
	b3MakeSoft(float hertz,
			float zeta,
			float h);  // 176
	b3MakeSoft(float hertz,
			float zeta,
			float h);  // 1445
} /* size: 0, variables: 1, inline expansions: 2 (178 bytes) */

// <06B8F777> src/joint.cpp:1489
void b3WarmStartJoint(b3JointSim* joint, b3StepContext* context)
{
} /* size: 0 */

// <06B8F623> src/joint.cpp:1533
void b3SolveJoint(b3JointSim* joint, b3StepContext* context, bool useBias)
{
} /* size: 0 */

// <06B8F54C> src/joint.cpp:1579
// variables: 5
void b3PrepareOverflowJoints(b3StepContext* context)
{
	b3ConstraintGraph* graph; // 1583
	b3JointSim* joints; // 1584
	int jointCount; // 1585
	{
		int i; // 1587
		{
			b3JointSim* joint; // 1589
		}
	}
} /* size: 90, variables: 3 */

// <06B8F475> src/joint.cpp:1596
// variables: 5
void b3WarmStartOverflowJoints(b3StepContext* context)
{
	b3ConstraintGraph* graph; // 1600
	b3JointSim* joints; // 1601
	int jointCount; // 1602
	{
		int i; // 1604
		{
			b3JointSim* joint; // 1606
		}
	}
} /* size: 90, variables: 3 */

// <06B8F378> src/joint.cpp:1613
// variables: 5
void b3SolveOverflowJoints(b3StepContext* context, bool useBias)
{
	b3ConstraintGraph* graph; // 1617
	b3JointSim* joints; // 1618
	int jointCount; // 1619
	{
		int i; // 1621
		{
			b3JointSim* joint; // 1623
		}
	}
} /* size: 99, variables: 3 */

// <06B8E9ED> src/joint.cpp:1630
// variables: 16
// function calls: 24
void b3DrawJoint(b3DebugDraw* draw, b3World* world, b3Joint* joint)
{
	b3Body* bodyA; // 1632
	b3Body* bodyB; // 1633
	b3JointSim* jointSim; // 1639
	b3Transform transformA; // 1641
	b3Transform transformB; // 1642
	b3Vec3 pA; // 1643
	b3Vec3 pB; // 1644
	b3HexColor color; // 1646
	float scale; // 1648
	{
		b3HexColor graphColors; // 1698
		int colorIndex; // 1705
		{
			b3Vec3 p; // 1708
			b3Lerp(b3Vec3 a,
				b3Vec3 b,
				float alpha);  // 1708
		}
	}
	{
		b3Vec3 force; // 1715
		b3Vec3 torque; // 1716
		b3Vec3 p; // 1717
		char buffer; // 1721
		b3Lerp(b3Vec3 a,
			b3Vec3 b,
			float alpha);  // 1717
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 1719
		snprintf(char* __s,
			size_t __n,
			const char* __fmt, ...);  // 1722
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 1722
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 1722
	}
	b3Array<b3Body>::Get(
		int index);  // 1632
	b3Array<b3Body>::Get(
		int index);  // 1633
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 566
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 567
	b3TransformPoint(b3Transform t,
			b3Vec3 v);  // 1643
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 389
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 390
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 392
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 391
	b3RotateVector(b3Quat q,
			b3Vec3 v);  // 566
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 567
	b3TransformPoint(b3Transform t,
			b3Vec3 v);  // 1644
} /* size: 0, variables: 9, inline expansions: 16 (1868 bytes) */


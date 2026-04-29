
//
// src/body.cpp
//
//	referenced by: libengine2.so
//
//	functions: 31
//

// <06B19FEE> src/body.cpp:25
// function call: 1
b3Body* b3GetBodyFullId(b3World* world, b3BodyId bodyId)
{
	b3Array<b3Body>::Get(
		int index);  // 30
} /* size: 0, inline expansions: 1 (66 bytes) */

// <06B19EBD> src/body.cpp:33
// variables: 2
// function calls: 2
b3Transform b3GetBodyTransformQuick(b3World* world, b3Body* body)
{
	b3SolverSet* set; // 35
	b3BodySim* bodySim; // 36
	b3Array<b3SolverSet>::Get(
		int index);  // 35
	b3Array<b3BodySim>::Get(
		int index);  // 36
} /* size: 0, variables: 2, inline expansions: 2 (114 bytes) */

// <06B19E82> src/body.cpp:40
// variable: 1
b3Transform b3GetBodyTransform(b3World* world, int bodyId)
{
	b3Body* body; // 42
} /* size: 0, variables: 1 */

// <06B19DC8> src/body.cpp:47
// variable: 1
// function call: 1
b3BodyId b3MakeBodyId(b3World* world, int bodyId)
{
	b3Body* body; // 49
	b3Array<b3Body>::Get(
		int index);  // 49
} /* size: 0, variables: 1, inline expansions: 1 (65 bytes) */

// <06B19C97> src/body.cpp:53
// variables: 2
// function calls: 2
b3BodySim* b3GetBodySim(b3World* world, b3Body* body)
{
	b3SolverSet* set; // 55
	b3BodySim* bodySim; // 56
	b3Array<b3SolverSet>::Get(
		int index);  // 55
	b3Array<b3BodySim>::Get(
		int index);  // 56
} /* size: 0, variables: 2, inline expansions: 2 (115 bytes) */

// <06B19C5A> src/body.cpp:60
// variable: 1
b3BodyState* b3GetBodyState(b3World* world, b3Body* body)
{
	{
		b3SolverSet* set; // 64
	}
} /* size: 0 */

// <06B19B44> src/body.cpp:71
// variable: 1
void b3CreateIslandForBody(b3World* world, int setIndex, b3Body* body)
{
	b3Island* island; // 78
} /* size: 0, variables: 1 */

// <06B197AD> src/body.cpp:86
// variables: 5
// function calls: 3
void b3RemoveBodyFromIsland(b3World* world, b3Body* body)
{
	int islandId; // 95
	b3Island* island; // 96
	bool islandDestroyed; // 113
	{
		b3Body* prevBody; // 101
		b3Array<b3Body>::Get(
			int index);  // 101
	}
	{
		b3Body* nextBody; // 107
		b3Array<b3Body>::Get(
			int index);  // 107
	}
	b3Array<b3Island>::Get(
		int index);  // 96
} /* size: 0, variables: 3, inline expansions: 1 (82 bytes) */

// <06B1AA81> src/body.cpp:147
// variables: 4
// function call: 1
void b3DestroyBodyContacts(b3World* world, bool wakeBodies, b3Body* body)
{
	int edgeKey; // 150
	{
		int contactId; // 153
		int edgeIndex; // 154
		b3Contact* contact; // 156
		b3Array<b3Contact>::Get(
			int index);  // 156
	}
} /* size: 0, variables: 1 */

// <06B19748> src/body.cpp:147
// variables: 4
void b3DestroyBodyContacts(b3World* world, b3Body* body, bool wakeBodies)
{
	int edgeKey; // 150
	{
		int contactId; // 153
		int edgeIndex; // 154
		b3Contact* contact; // 156
	}
} /* size: 0, variables: 1 */

// <06B18D4B> src/body.cpp:336
bool b3IsBodyAwake(b3World* world, b3Body* body)
{
} /* size: 0 */

// <06B18D19> src/body.cpp:342
bool b3WakeBody(b3World* world, b3Body* body)
{
} /* size: 0 */

// <06B18C29> src/body.cpp:354
// variable: 1
// function call: 1
bool b3WakeBodyWithLock(b3World* world, b3Body* body)
{
	bool woke; // 358
	b3WakeBody(b3World* world,
			b3Body* body);  // 358
} /* size: 0, variables: 1, inline expansions: 1 (31 bytes) */

// <06B17D03> src/body.cpp:541
// variables: 11
// function calls: 3
float b3Body_GetClosestPoint(b3BodyId bodyId, b3Vec3* result, b3Vec3 target)
{
	b3World* world; // 543
	b3Body* body; // 550
	b3Transform transform; // 551
	float closestDistance; // 553
	b3Vec3 closestPoint; // 554
	b3DistanceInput input; // 556
	int shapeId; // 562
	{
		b3Shape* shape; // 565
		b3ShapeType type; // 568
		b3SimplexCache cache; // 576
		b3DistanceOutput output; // 577
		b3Array<b3Shape>::Get(
			int index);  // 565
	}
	b3Array<b3Body>::Get(
		int index);  // 42
	b3GetBodyTransform(b3World* world,
				int bodyId);  // 551
} /* size: 0, variables: 7, inline expansions: 2 (0 bytes) */

// <06B17A9C> src/body.cpp:589
// variables: 10
// function calls: 3
b3BodyCastResult b3Body_CastRay(b3BodyId bodyId, const b3BodyRayCastInput* input, b3Transform bodyTransform)
{
	b3World* world; // 591
	b3BodyCastResult result; // 597
	b3Body* body; // 598
	b3RayCastInput shapeInput; // 600
	int shapeId; // 605
	{
		b3Shape* shape; // 608
		b3CastOutput shapeOutput; // 616
		b3ShapeId id; // 629
		int materialIndex; // 631
		uint64_t userMaterialId; // 632
		b3Array<b3Shape>::Get(
			int index);  // 608
		b3ShouldQueryCollide(const b3Filter* shapeFilter,
					const b3QueryFilter* queryFilter);  // 611
		b3ClampInt(int a,
				int lower,
				int upper);  // 631
	}
} /* size: 0, variables: 5 */

// <06B17835> src/body.cpp:651
// variables: 10
// function calls: 3
b3BodyCastResult b3Body_CastShape(b3BodyId bodyId, const b3BodyShapeCastInput* input, b3Transform bodyTransform)
{
	b3World* world; // 653
	b3BodyCastResult result; // 659
	b3Body* body; // 660
	b3ShapeCastInput shapeInput; // 662
	int shapeId; // 668
	{
		b3Shape* shape; // 671
		b3CastOutput shapeOutput; // 679
		b3ShapeId id; // 692
		int materialIndex; // 693
		uint64_t userMaterialId; // 694
		b3Array<b3Shape>::Get(
			int index);  // 671
		b3ShouldQueryCollide(const b3Filter* shapeFilter,
					const b3QueryFilter* queryFilter);  // 674
		b3ClampInt(int a,
				int lower,
				int upper);  // 693
	}
} /* size: 0, variables: 5 */

// <06B1742E> src/body.cpp:744
// variables: 9
// function calls: 2
int b3Body_CollideMover(b3BodyId bodyId, b3BodyPlaneResult* bodyPlanes, int planeCapacity, const b3Capsule* mover, b3QueryFilter filter, b3Transform bodyTransform)
{
	b3World* world; // 747
	int resultCount; // 758
	b3Body* body; // 759
	int shapeId; // 761
	{
		b3Shape* shape; // 764
		b3ShapeType type; // 772
		b3PlaneResult plane; // 778
		int count; // 779
		{
			b3ShapeId id; // 783
		}
		b3Array<b3Shape>::Get(
			int index);  // 764
		b3ShouldQueryCollide(const b3Filter* shapeFilter,
					const b3QueryFilter* queryFilter);  // 767
	}
} /* size: 0, variables: 4 */

// <06B168DB> src/body.cpp:796
// variables: 16
// function calls: 42
void b3UpdateBodyMassData(b3World* world, b3Body* body)
{
	b3BodySim* bodySim; // 798
	b3Vec3 localCenter; // 837
	int shapeId; // 838
	b3Vec3 oldCenter; // 872
	b3BodyState* state; // 878
	{
		int shapeId; // 820
		{
			const b3Shape* s; // 823
			b3ShapeExtent extent; // 825
			b3Array<b3Shape>::Get(
				int index);  // 823
		}
	}
	{
		const b3Shape* s; // 841
		b3MassData massData; // 849
		b3Array<b3Shape>::Get(
			int index);  // 841
		b3AddMM(b3Matrix3 a,
			b3Matrix3 b);  // 1031
		operator+=(b3Matrix3& a,
				b3Matrix3 b);  // 852
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 851
	}
	{
		b3Matrix3 rotationMatrix; // 867
		b3MulSV(float s,
			b3Vec3 a);  // 859
		b3SubMM(b3Matrix3 a,
			b3Matrix3 b);  // 1047
		operator-(b3Matrix3 a,
				b3Matrix3 b);  // 862
		b3AbsFloat(float a); // 693
		{
			float invDet; // 695
			b3Matrix3 out; // 696
			b3Cross(b3Vec3 a,
				b3Vec3 b);  // 698
			b3MulSV(float s,
				b3Vec3 a);  // 697
			b3MulSV(float s,
				b3Vec3 a);  // 698
			b3Cross(b3Vec3 a,
				b3Vec3 b);  // 699
			b3MulSV(float s,
				b3Vec3 a);  // 699
		}
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 582
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 582
		b3Det(b3Matrix3 m); // 692
		b3InvertT(b3Matrix3 m); // 865
		b3MakeMatrixFromQuat(b3Quat q); // 867
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 634
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 635
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 636
		b3MulMM(b3Matrix3 a,
			b3Matrix3 b);  // 1037
		operator*(b3Matrix3 a,
				b3Matrix3 b);  // 868
		b3Transpose(b3Matrix3 m); // 868
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 634
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 635
		b3MulMV(b3Matrix3 m,
			b3Vec3 a);  // 636
		b3MulMM(b3Matrix3 a,
			b3Matrix3 b);  // 1037
		operator*(b3Matrix3 a,
				b3Matrix3 b);  // 868
	}
	{
		b3Vec3 deltaLinear; // 881
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 881
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 881
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 882
	}
	{
		b3Shape* s; // 889
		b3ShapeExtent extent; // 891
		b3Array<b3Shape>::Get(
			int index);  // 889
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
			b3Vec3 v);  // 874
	b3GetBodyState(b3World* world,
			b3Body* body);  // 878
} /* size: 0, variables: 5, inline expansions: 8 (639 bytes) */

// <06B15FEC> src/body.cpp:938
// variables: 3
// function calls: 5
b3Vec3 b3Body_GetLocalVector(b3BodyId bodyId, b3Vec3 worldVector)
{
	b3World* world; // 940
	b3Body* body; // 941
	b3Transform transform; // 942
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 400
	b3MulSub(b3Vec3 a,
		float s,
		b3Vec3 b);  // 401
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 402
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 403
	b3InvRotateVector(b3Quat q,
				b3Vec3 v);  // 943
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <06B15DF9> src/body.cpp:946
// variables: 3
// function calls: 5
b3Vec3 b3Body_GetWorldVector(b3BodyId bodyId, b3Vec3 localVector)
{
	b3World* world; // 948
	b3Body* body; // 949
	b3Transform transform; // 950
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
			b3Vec3 v);  // 951
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <06B145ED> src/body.cpp:1166
// variables: 7
// function calls: 11
b3Vec3 b3Body_GetLocalPointVelocity(b3BodyId bodyId, b3Vec3 localPoint)
{
	b3World* world; // 1168
	b3Body* body; // 1169
	b3BodyState* state; // 1170
	b3SolverSet* set; // 1176
	b3BodySim* bodySim; // 1177
	b3Vec3 r; // 1179
	b3Vec3 v; // 1180
	b3GetBodyState(b3World* world,
			b3Body* body);  // 1170
	b3Array<b3SolverSet>::Get(
		int index);  // 1176
	b3Array<b3BodySim>::Get(
		int index);  // 1177
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1179
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
			b3Vec3 v);  // 1179
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 1180
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1180
} /* size: 0, variables: 7, inline expansions: 11 (0 bytes) */

// <06B1201E> src/body.cpp:1588
// variables: 3
// function call: 1
void b3Body_SetName(b3BodyId bodyId, const char* name)
{
	b3World* world; // 1590
	b3Body* body; // 1591
	{
		int i; // 1595
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1610
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <06B11F9D> src/body.cpp:1614
// variables: 2
const char* b3Body_GetName(b3BodyId bodyId)
{
	b3World* world; // 1616
	b3Body* body; // 1617
} /* size: 0, variables: 2 */

// <06B11BED> src/body.cpp:1657
// variables: 3
b3Matrix3 b3Body_GetWorldInverseRotationalInertia(b3BodyId bodyId)
{
	b3World* world; // 1659
	b3Body* body; // 1660
	b3BodySim* sim; // 1661
} /* size: 0, variables: 3 */

// <06B10A67> src/body.cpp:1852
// variables: 2
void b3Body_SetSleepThreshold(b3BodyId bodyId, float sleepThreshold)
{
	b3World* world; // 1854
	b3Body* body; // 1855
} /* size: 0, variables: 2 */

// <06B109E6> src/body.cpp:1859
// variables: 2
float b3Body_GetSleepThreshold(b3BodyId bodyId)
{
	b3World* world; // 1861
	b3Body* body; // 1862
} /* size: 0, variables: 2 */

// <06B0FBFB> src/body.cpp:2119
// variables: 3
b3MotionLocks b3Body_GetMotionLocks(b3BodyId bodyId)
{
	b3World* world; // 2121
	b3Body* body; // 2122
	b3MotionLocks locks; // 2124
} /* size: 0, variables: 3 */

// <06B0FA7E> src/body.cpp:2155
// variables: 3
bool b3Body_IsBullet(b3BodyId bodyId)
{
	b3World* world; // 2157
	b3Body* body; // 2158
	b3BodySim* bodySim; // 2159
} /* size: 0, variables: 3 */

// <06B0F965> src/body.cpp:2163
// variables: 4
// function call: 1
void b3Body_EnableHitEvents(b3BodyId bodyId, bool enableHitEvents)
{
	b3World* world; // 2165
	b3Body* body; // 2166
	int shapeId; // 2167
	{
		b3Shape* shape; // 2170
		b3Array<b3Shape>::Get(
			int index);  // 2170
	}
} /* size: 0, variables: 3 */

// <06B0F3BC> src/body.cpp:2239
// variables: 6
// function call: 1
bool b3ShouldBodiesCollide(b3World* world, b3Body* bodyA, b3Body* bodyB)
{
	int jointKey; // 2246
	int otherBodyId; // 2247
	{
		int jointId; // 2261
		int edgeIndex; // 2262
		int otherEdgeIndex; // 2263
		b3Joint* joint; // 2265
		b3Array<b3Joint>::Get(
			int index);  // 2265
	}
} /* size: 0, variables: 2 */

// <06B0EA17> src/body.cpp:2373
// variables: 4
b3AABB b3Body_ComputeLocalAABB(b3World* world, const b3Body* body)
{
	b3AABB aabb; // 2375
	int shapeId; // 2379
	{
		b3Shape* shape; // 2389
		b3AABB sa; // 2392
	}
} /* size: 0, variables: 2 */


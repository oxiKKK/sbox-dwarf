
//
// src/shape.cpp
//
//	referenced by: libengine2.so
//
//	functions: 38
//	structs: 2
//

// <06C4FB82> src/shape.cpp:17
// variables: 2
// function call: 1
b3Shape* b3GetShape(b3World* world, b3ShapeId shapeId)
{
	int id; // 19
	b3Shape* shape; // 20
	b3Array<b3Shape>::Get(
		int index);  // 20
} /* size: 0, variables: 2, inline expansions: 1 (70 bytes) */

// <06C4EC1E> src/shape.cpp:17
// variables: 2
b3Shape* b3GetShape(b3World* world, b3ShapeId shapeId)
{
	int id; // 19
	b3Shape* shape; // 20
} /* size: 0, variables: 2 */

// <06C4EB45> src/shape.cpp:25
// variables: 5
void b3UpdateShapeAABBs(b3Shape* shape, b3Transform transform, b3BodyType proxyType)
{
	const float  speculativeDistance; // 28
	const float  aabbMargin; // 29
	b3AABB aabb; // 31
	float margin; // 41
	b3AABB fatAABB; // 42
} /* size: 282, variables: 5 */

// <06C4EA3B> src/shape.cpp:54
// variables: 9
b3Shape* b3CreateShapeInternal(b3World* world, b3Body* body, b3Transform bodyTransform, const b3ShapeDef* def, const void* geometry, b3ShapeType shapeType, b3Transform shapeTransform, b3Vec3 scale, bool haveShapeTransform)
{
	int shapeId; // 58
	b3Shape* shape; // 69
	{
		size_t length; // 136
	}
	{
		b3SurfaceMaterial* materials; // 153
	}
	{
		b3SurfaceMaterial* materials; // 160
	}
	{
		b3BodyType proxyType; // 168
		bool forcePairCreation; // 169
	}
	{
		b3Shape* headShape; // 176
	}
	{
		b3Sensor* sensor; // 188
	}
} /* size: 0, variables: 2 */

// <06C4DEB3> src/shape.cpp:204
// variables: 14
// function calls: 22
b3ShapeId b3CreateShape(b3BodyId bodyId, const b3ShapeDef* def, const void* geometry, b3ShapeType shapeType, b3Transform transform, b3Vec3 scale, bool haveTransform)
{
	b3World* world; // 212
	b3Body* body; // 226
	b3Transform bodyTransform; // 227
	b3Shape* shape; // 229
	b3ShapeId id; // 239
	b3Array<b3Shape>::Get(
		int index);  // 69
	{
		int newCapacity; // 132
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 241
		b3Array<b3Shape>::Reserve(
			int newCapacity);  // 134
	}
	b3Array<b3Shape>::PushBack(
		const b3Shape& value);  // 62
	{
		size_t length; // 136
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 138
	}
	{
		b3SurfaceMaterial* materials; // 153
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 154
	}
	{
		b3SurfaceMaterial* materials; // 160
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 161
	}
	{
		b3BodyType proxyType; // 168
		bool forcePairCreation; // 169
	}
	{
		b3Shape* headShape; // 176
		b3Array<b3Shape>::Get(
			int index);  // 176
	}
	{
		b3Sensor* sensor; // 188
		{
			int newCapacity; // 115
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 241
			b3Array<b3Sensor>::Reserve(
				int newCapacity);  // 117
		}
		b3Array<b3Sensor>::Add(); // 188
		b3Array<b3Visitor>::Create(
			int initialCapacity);  // 189
		b3Array<b3Visitor>::Create(
			int initialCapacity);  // 190
		b3Array<b3Visitor>::Create(
			int initialCapacity);  // 191
	}
	b3AbsFloat(float a); // 334
	b3AbsFloat(float a); // 336
	b3AbsFloat(float a); // 335
	b3Abs(b3Vec3 a); // 372
	b3Sign(b3Vec3 a); // 374
	b3Mul(b3Vec3 a,
		b3Vec3 b);  // 374
	b3SafeScale(b3Vec3 a); // 102
	b3CreateShapeInternal(b3World* world,
				b3Body* body,
				b3Transform bodyTransform,
				const b3ShapeDef* def,
				const void* geometry,
				b3ShapeType shapeType,
				b3Transform shapeTransform,
				b3Vec3 scale,
				bool haveShapeTransform);  // 230
} /* size: 0, variables: 5, inline expansions: 10 (3206 bytes) */

// <06C4DB9B> src/shape.cpp:269
b3ShapeId b3CreateTransformedHullShape(b3BodyId bodyId, const b3ShapeDef* def, const b3Hull* hull, b3Transform transform, b3Vec3 scale)
{
} /* size: 0 */

// <06C4D9D8> src/shape.cpp:287
b3ShapeId b3CreateCompoundShape(b3BodyId bodyId, b3ShapeDef* def, const b3Compound* compound)
{
} /* size: 0 */

// <06C4D8C3> src/shape.cpp:293
// variables: 14
void b3DestroyShapeInternal(b3World* world, b3Shape* shape, b3Body* body, bool wakeBodies)
{
	int shapeId; // 295
	int contactKey; // 321
	{
		b3Shape* prevShape; // 300
	}
	{
		b3Shape* nextShape; // 306
	}
	{
		int contactId; // 324
		int edgeIndex; // 325
		b3Contact* contact; // 327
	}
	{
		b3Sensor* sensor; // 338
		int movedIndex; // 365
		{
			int i; // 339
			{
				b3Visitor* ref; // 341
				b3SensorEndTouchEvent event; // 342
			}
		}
		{
			b3Sensor* movedSensor; // 369
			b3Shape* otherSensorShape; // 370
		}
	}
} /* size: 0, variables: 2 */

// <06C4CCCF> src/shape.cpp:442
// variables: 2
// function calls: 7
b3AABB b3ComputeSweptShapeAABB(const b3Shape* shape, const b3Sweep* sweep, float time)
{
	b3Transform xf1; // 445
	b3Transform xf2; // 446
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
			b3Vec3 v);  // 445
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 445
} /* size: 0, variables: 2, inline expansions: 7 (476 bytes) */

// <06C4C8EE> src/shape.cpp:495
// function calls: 3
float b3GetShapeArea(const b3Shape* shape)
{
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 501
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 220
	b3Length(b3Vec3 v); // 501
} /* size: 0, inline expansions: 3 (0 bytes) */

// <06C4AC2F> src/shape.cpp:830
// variable: 1
void b3DestroyShapeAllocationForShapeChange(b3World* world, b3Shape* shape)
{
	b3ShapeType type; // 832
} /* size: 0, variables: 1 */

// <06C4A50B> src/shape.cpp:941
// variable: 1
b3WorldId b3Shape_GetWorld(b3ShapeId shapeId)
{
	b3World* world; // 943
} /* size: 0, variables: 1 */

// <06C4A1EB> src/shape.cpp:968
// variables: 3
// function call: 1
void b3Shape_SetName(b3ShapeId shapeId, const char* name)
{
	b3World* world; // 970
	b3Shape* shape; // 971
	{
		size_t length; // 981
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 983
	}
} /* size: 0, variables: 2 */

// <06C4A163> src/shape.cpp:987
// variables: 2
const char* b3Shape_GetName(b3ShapeId shapeId)
{
	b3World* world; // 989
	b3Shape* shape; // 990
} /* size: 0, variables: 2 */

// <06C49A8C> src/shape.cpp:995
// variables: 5
// function calls: 24
b3CastOutput b3Shape_RayCast(b3ShapeId shapeId, const b3RayCastInput* input)
{
	b3World* world; // 997
	b3Shape* shape; // 998
	b3Transform transform; // 1000
	b3RayCastInput localInput; // 1003
	b3CastOutput output; // 1008
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 572
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
				b3Vec3 v);  // 572
	b3InvTransformPoint(b3Transform t,
				b3Vec3 v);  // 1004
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
				b3Vec3 v);  // 1005
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
			b3Vec3 v);  // 1043
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
			b3Vec3 v);  // 1044
} /* size: 0, variables: 5, inline expansions: 24 (0 bytes) */

// <06C4973D> src/shape.cpp:1083
// variables: 2
void b3Shape_SetFriction(b3ShapeId shapeId, float friction)
{
	b3World* world; // 1086
	b3Shape* shape; // 1087
} /* size: 0, variables: 2 */

// <06C496B5> src/shape.cpp:1092
// variables: 2
float b3Shape_GetFriction(b3ShapeId shapeId)
{
	b3World* world; // 1094
	b3Shape* shape; // 1095
} /* size: 0, variables: 2 */

// <06C4958E> src/shape.cpp:1099
// variables: 2
void b3Shape_SetRestitution(b3ShapeId shapeId, float restitution)
{
	b3World* world; // 1102
	b3Shape* shape; // 1103
} /* size: 0, variables: 2 */

// <06C49506> src/shape.cpp:1108
// variables: 2
float b3Shape_GetRestitution(b3ShapeId shapeId)
{
	b3World* world; // 1110
	b3Shape* shape; // 1111
} /* size: 0, variables: 2 */

// <06C48E60> src/shape.cpp:1165
// variables: 2
b3Filter b3Shape_GetFilter(b3ShapeId shapeId)
{
	b3World* world; // 1167
	b3Shape* shape; // 1168
} /* size: 0, variables: 2 */

// <06C48B41> src/shape.cpp:1172
// variables: 10
// function calls: 2
void b3ResetProxy(b3World* world, b3Shape* shape, bool wakeBodies, bool destroyProxy)
{
	b3Body* body; // 1174
	int shapeId; // 1176
	int contactKey; // 1179
	b3Transform transform; // 1194
	{
		int contactId; // 1182
		int edgeIndex; // 1183
		b3Contact* contact; // 1185
		b3Array<b3Contact>::Get(
			int index);  // 1185
	}
	{
		b3BodyType proxyType; // 1197
		{
			bool forcePairCreation; // 1204
		}
	}
	{
		b3BodyType proxyType; // 1215
	}
	b3Array<b3Body>::Get(
		int index);  // 1174
} /* size: 0, variables: 4, inline expansions: 1 (81 bytes) */

// <06C48A3A> src/shape.cpp:1222
// variables: 4
void b3Shape_SetFilter(b3ShapeId shapeId, b3Filter filter, bool invokeContacts)
{
	b3World* world; // 1224
	b3Shape* shape; // 1230
	{
		bool wakeBodies; // 1242
		bool destroyProxy; // 1245
	}
} /* size: 0, variables: 2 */

// <06C489A1> src/shape.cpp:1256
// variables: 2
void b3Shape_EnableSensorEvents(b3ShapeId shapeId, bool flag)
{
	b3World* world; // 1258
	b3Shape* shape; // 1264
} /* size: 0, variables: 2 */

// <06C48919> src/shape.cpp:1268
// variables: 2
bool b3Shape_AreSensorEventsEnabled(b3ShapeId shapeId)
{
	b3World* world; // 1270
	b3Shape* shape; // 1271
} /* size: 0, variables: 2 */

// <06C487F8> src/shape.cpp:1287
// variables: 2
bool b3Shape_AreContactEventsEnabled(b3ShapeId shapeId)
{
	b3World* world; // 1289
	b3Shape* shape; // 1290
} /* size: 0, variables: 2 */

// <06C4875F> src/shape.cpp:1294
// variables: 2
void b3Shape_EnablePreSolveEvents(b3ShapeId shapeId, bool flag)
{
	b3World* world; // 1296
	b3Shape* shape; // 1302
} /* size: 0, variables: 2 */

// <06C486D7> src/shape.cpp:1306
// variables: 2
bool b3Shape_ArePreSolveEventsEnabled(b3ShapeId shapeId)
{
	b3World* world; // 1308
	b3Shape* shape; // 1309
} /* size: 0, variables: 2 */

// <06C485B6> src/shape.cpp:1325
// variables: 2
bool b3Shape_AreHitEventsEnabled(b3ShapeId shapeId)
{
	b3World* world; // 1327
	b3Shape* shape; // 1328
} /* size: 0, variables: 2 */

// <06C479D3> src/shape.cpp:1483
// variables: 3
// function call: 1
int b3Shape_GetContactCapacity(b3ShapeId shapeId)
{
	b3World* world; // 1485
	b3Shape* shape; // 1491
	b3Body* body; // 1497
	b3Array<b3Body>::Get(
		int index);  // 1497
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <06C47727> src/shape.cpp:1503
// variables: 11
// function calls: 2
int b3Shape_GetContactData(b3ShapeId shapeId, b3ContactData* contactData, int capacity)
{
	b3World* world; // 1505
	b3Shape* shape; // 1511
	b3Body* body; // 1517
	int contactKey; // 1518
	int index; // 1519
	{
		int contactId; // 1522
		int edgeIndex; // 1523
		b3Contact* contact; // 1525
		{
			b3Shape* shapeA; // 1531
			b3Shape* shapeB; // 1532
			b3ContactSim* contactSim; // 1538
		}
		b3Array<b3Contact>::Get(
			int index);  // 1525
	}
	b3Array<b3Body>::Get(
		int index);  // 1517
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <06C4762C> src/shape.cpp:1552
// variables: 3
// function call: 1
int b3Shape_GetSensorCapacity(b3ShapeId shapeId)
{
	b3World* world; // 1554
	b3Shape* shape; // 1560
	b3Sensor* sensor; // 1566
	b3Array<b3Sensor>::Get(
		int index);  // 1566
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <06C47442> src/shape.cpp:1570
// variables: 7
// function calls: 2
int b3Shape_GetSensorData(b3ShapeId shapeId, b3ShapeId* visitorIds, int capacity)
{
	b3World* world; // 1572
	b3Shape* shape; // 1578
	b3Sensor* sensor; // 1584
	int count; // 1586
	b3Visitor* refs; // 1587
	{
		int i; // 1588
		{
			b3ShapeId visitorId; // 1590
		}
	}
	b3Array<b3Sensor>::Get(
		int index);  // 1584
	b3MinInt(int a,
		int b);  // 1586
} /* size: 0, variables: 5, inline expansions: 2 (0 bytes) */

// <06C47309> src/shape.cpp:1614
// variables: 2
b3MassData b3Shape_ComputeMassData(b3ShapeId shapeId)
{
	b3World* world; // 1616
	b3Shape* shape; // 1622
} /* size: 0, variables: 2 */

// <06C47140> src/shape.cpp:1626
// variables: 7
// function call: 1
b3Vec3 b3Shape_GetClosestPoint(b3ShapeId shapeId, b3Vec3 target)
{
	b3World* world; // 1628
	b3Shape* shape; // 1634
	b3Body* body; // 1635
	b3Transform transform; // 1636
	b3DistanceInput input; // 1638
	b3SimplexCache cache; // 1645
	b3DistanceOutput output; // 1646
	b3Array<b3Body>::Get(
		int index);  // 1635
} /* size: 0, variables: 7, inline expansions: 1 (0 bytes) */

// <06C458A3> src/shape.cpp:1657
// variables: 68
// function calls: 83
void b3Shape_ApplyWind(b3ShapeId shapeId, b3Vec3 wind, float drag, float lift, float maxSpeed, bool wake)
{
	b3World* world; // 1659
	b3Shape* shape; // 1665
	b3ShapeType shapeType; // 1667
	b3Body* body; // 1673
	b3BodySim* sim; // 1685
	b3BodyState* state; // 1695
	b3Transform transform; // 1696
	float lengthUnits; // 1698
	float volumeUnits; // 1699
	float airDensity; // 1701
	b3Vec3 force; // 1703
	b3Vec3 torque; // 1704
	{
		float radius; // 1710
		b3Vec3 centroid; // 1711
		b3Vec3 lever; // 1712
		b3Vec3 shapeVelocity; // 1713
		b3Vec3 relativeVelocity; // 1714
		float speed; // 1715
		b3Vec3 direction; // 1716
		float projectedArea; // 1718
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1712
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
				b3Vec3 v);  // 1712
		b3MulSub(b3Vec3 a,
			float s,
			b3Vec3 b);  // 1714
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 1713
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1713
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 257
		b3GetLengthAndNormalize(float* length,
					b3Vec3 v);  // 1716
		b3MulSV(float s,
			b3Vec3 a);  // 1719
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 1720
	}
	{
		b3Vec3 centroid; // 1726
		b3Vec3 lever; // 1727
		b3Vec3 shapeVelocity; // 1728
		b3Vec3 relativeVelocity; // 1729
		float speed; // 1730
		b3Vec3 direction; // 1731
		b3Vec3 d; // 1734
		float radius; // 1737
		float projectedArea; // 1738
		b3Vec3 e; // 1741
		b3Vec3 normal; // 1742
		b3Vec3 liftDirection; // 1745
		float forceMagnitude; // 1747
		b3Vec3 edgeLever; // 1750
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1727
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
				b3Vec3 v);  // 1727
		b3MulSub(b3Vec3 a,
			float s,
			b3Vec3 b);  // 1729
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 1728
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1728
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 257
		b3GetLengthAndNormalize(float* length,
					b3Vec3 v);  // 1731
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
				b3Vec3 v);  // 1735
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1734
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 1738
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 220
		b3Length(b3Vec3 v); // 1738
		{
			float s; // 247
			b3Vec3 u; // 248
		}
		b3Normalize(b3Vec3 a); // 1741
		b3Dot(b3Vec3 a,
			b3Vec3 b);  // 1742
		b3MulSV(float s,
			b3Vec3 a);  // 1742
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1742
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 1745
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 1750
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 1745
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 1748
		b3MulSV(float s,
			b3Vec3 a);  // 1748
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 1751
	}
	{
		b3Matrix3 matrix; // 1757
		int faceCount; // 1759
		const b3Vec3* points; // 1760
		const b3HullFace* faces; // 1761
		const b3HullHalfEdge* edges; // 1762
		const b3Plane* planes; // 1763
		b3Vec3 linearVelocity; // 1765
		b3Vec3 angularVelocity; // 1766
		b3Vec3 localCenterOfMass; // 1767
		{
			int i; // 1769
			{
				const b3HullFace* face; // 1771
				const b3HullHalfEdge* edge1; // 1772
				const b3HullHalfEdge* edge2; // 1773
				const b3HullHalfEdge* edge3; // 1774
				b3Vec3 localPoint1; // 1780
				b3Vec3 localPoint2; // 1781
				b3Vec3 v1; // 1782
				b3Vec3 v2; // 1783
				b3Vec3 normal; // 1784
				{
					b3Vec3 localPoint3; // 1789
					b3Vec3 v3; // 1790
					b3Vec3 localCenter; // 1793
					b3Vec3 lever; // 1796
					b3Vec3 centerVelocity; // 1799
					b3Vec3 relativeVelocity; // 1801
					float speed; // 1802
					b3Vec3 direction; // 1803
					{
						float projectedArea; // 1808
						b3Vec3 liftDirection; // 1811
						float forceMagnitude; // 1815
						b3Vec3 deltaForce; // 1816
						b3Vec3 deltaTorque; // 1817
						b3Sub(b3Vec3 a,
							b3Vec3 b);  // 1021
						operator-(b3Vec3 a,
								b3Vec3 b);  // 1808
						b3Sub(b3Vec3 a,
							b3Vec3 b);  // 1021
						operator-(b3Vec3 a,
								b3Vec3 b);  // 1808
						b3Cross(b3Vec3 a,
							b3Vec3 b);  // 1811
						b3Cross(b3Vec3 a,
							b3Vec3 b);  // 1808
						b3Dot(b3Vec3 a,
							b3Vec3 b);  // 1808
						b3Cross(b3Vec3 a,
							b3Vec3 b);  // 1811
						b3MulAdd(b3Vec3 a,
							float s,
							b3Vec3 b);  // 1816
						b3MulSV(float s,
							b3Vec3 a);  // 1816
						b3Cross(b3Vec3 a,
							b3Vec3 b);  // 1817
						b3Add(b3Vec3 a,
							b3Vec3 b);  // 1819
						b3Add(b3Vec3 a,
							b3Vec3 b);  // 1820
					}
					b3Dot(b3Vec3 a,
						b3Vec3 b);  // 1806
					b3MulMV(b3Matrix3 m,
						b3Vec3 a);  // 1790
					b3Add(b3Vec3 a,
						b3Vec3 b);  // 1793
					b3Add(b3Vec3 a,
						b3Vec3 b);  // 1793
					b3MulSV(float s,
						b3Vec3 a);  // 1793
					b3Sub(b3Vec3 a,
						b3Vec3 b);  // 1796
					b3MulMV(b3Matrix3 m,
						b3Vec3 a);  // 1796
					b3Cross(b3Vec3 a,
						b3Vec3 b);  // 1799
					b3MulSub(b3Vec3 a,
						float s,
						b3Vec3 b);  // 1801
					b3Add(b3Vec3 a,
						b3Vec3 b);  // 1799
					b3Dot(b3Vec3 a,
						b3Vec3 b);  // 220
					b3Length(b3Vec3 v); // 257
					b3GetLengthAndNormalize(float* length,
								b3Vec3 v);  // 1803
				}
				b3MulMV(b3Matrix3 m,
					b3Vec3 a);  // 1782
				b3MulMV(b3Matrix3 m,
					b3Vec3 a);  // 1783
				b3MulMV(b3Matrix3 m,
					b3Vec3 a);  // 1784
			}
		}
		b3MakeMatrixFromQuat(b3Quat q); // 1757
		b3GetHullPoints(const b3Hull* hull); // 1760
		b3GetHullEdges(const b3Hull* hull); // 1762
		b3GetHullPlanes(const b3Hull* hull); // 1763
		b3GetHullFaces(const b3Hull* hull); // 1761
	}
	b3Array<b3Body>::Get(
		int index);  // 1673
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1849
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 978
	operator+=(b3Vec3& a,
			b3Vec3 b);  // 1850
} /* size: 0, variables: 12, inline expansions: 4 (0 bytes) */

// <06C4234E> src/shape.cpp:1853
// member variables: 7
// struct size: 256
struct b3MeshImpactContext {
	b3TOIInput toiInput; /* 0 176 */
	b3TOIOutput toiOutput; /* 176 32 */
	b3Vec3 localCentroidB; /* 208 12 */
	b3Vec3 meshLocalCentroidB1; /* 220 12 */
	b3Vec3 meshLocalCentroidB2; /* 232 12 */
	float fallbackRadius; /* 244 4 */
	bool isSensor; /* 248 1 */
};

// <06C45464> src/shape.cpp:1865
// variables: 11
// function calls: 12
bool b3MeshTimeOfImpactFcn(b3Vec3 a, b3Vec3 b, b3Vec3 c, int triangleIndex, void* context)
{
	b3MeshImpactContext* toiContext; // 1869
	b3Vec3 c1; // 1872
	b3Vec3 c2; // 1873
	b3Vec3 n; // 1875
	float offset1; // 1876
	float offset2; // 1877
	b3Vec3 triangle; // 1891
	b3TOIOutput output; // 1895
	{
		b3TOIInput fallbackInput; // 1904
	}
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 1875
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 1875
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 1875
	{
		float s; // 247
		b3Vec3 u; // 248
	}
	b3Normalize(b3Vec3 a); // 1875
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 1876
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 1876
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 1877
	b3Dot(b3Vec3 a,
		b3Vec3 b);  // 1877
} /* size: 858, variables: 8, inline expansions: 12 (487 bytes) */

// <06C423D4> src/shape.cpp:1919
// member variables: 6
// struct size: 280
struct b3CompoundImpactContext {
	b3TOIInput toiInput; /* 0 176 */
	b3TOIOutput toiOutput; /* 176 32 */
	b3Transform compoundTransform; /* 208 28 */
	b3AABB localSweepBoundsB; /* 236 24 */
	b3Vec3 localCentroidB; /* 260 12 */
	float fallbackRadius; /* 272 4 */
};

// <06C44584> src/shape.cpp:1934
// variables: 9
// function calls: 63
bool b3CompoundTimeOfImpactFcn(const b3Compound* compound, int childIndex, void* context)
{
	b3CompoundImpactContext* toiContext; // 1936
	b3ChildShape child; // 1938
	b3TOIOutput output; // 1940
	{
		b3MeshImpactContext meshContext; // 1965
		b3Transform meshWorldTransform; // 1971
		const b3Sweep* sweepB; // 1973
		b3Transform xfB1; // 1974
		b3Transform xfB2; // 1979
		b3AABB localBounds; // 1990
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
				b3Vec3 v);  // 532
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 532
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
				b3Quat q2);  // 533
		b3MulTransforms(b3Transform a,
				b3Transform b);  // 1971
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
				b3Vec3 v);  // 1980
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
				b3Vec3 v);  // 1975
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 1975
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 1980
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
				b3Vec3 v);  // 1985
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 572
		b3MulSub(b3Vec3 a,
			float s,
			b3Vec3 b);  // 401
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 400
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 402
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 403
		b3InvRotateVector(b3Quat q,
					b3Vec3 v);  // 572
		b3InvTransformPoint(b3Transform t,
					b3Vec3 v);  // 1985
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 391
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 389
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 390
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 392
		b3RotateVector(b3Quat q,
				b3Vec3 v);  // 566
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 567
		b3TransformPoint(b3Transform t,
				b3Vec3 v);  // 1987
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 572
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 402
		b3Cross(b3Vec3 a,
			b3Vec3 b);  // 400
		b3MulSub(b3Vec3 a,
			float s,
			b3Vec3 b);  // 401
		b3MulAdd(b3Vec3 a,
			float s,
			b3Vec3 b);  // 403
		b3InvRotateVector(b3Quat q,
					b3Vec3 v);  // 572
		b3InvTransformPoint(b3Transform t,
					b3Vec3 v);  // 1987
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
					b3Vec3 v);  // 551
		b3Neg(b3Vec3 a); // 551
		b3Conjugate(b3Quat q); // 552
		b3InvertTransform(b3Transform t); // 1990
	}
	b3GetHullPoints(const b3Hull* hull); // 1956
} /* size: 0, variables: 3, inline expansions: 1 (16 bytes) */

// <06C43469> src/shape.cpp:2025
// variables: 17
// function calls: 65
b3TOIOutput b3ShapeTimeOfImpact(b3Shape* shapeA, b3Shape* shapeB, b3Sweep* sweepA, b3Sweep* sweepB, float maxFraction)
{
	bool isSensor; // 2027
	b3ShapeType typeA; // 2029
	b3TOIInput input; // 2124
	b3TOIOutput output; // 2131
	{
		b3CompoundImpactContext context; // 2033
		b3Vec3 localCentroidB; // 2043
		b3ShapeExtent extents; // 2046
		b3AABB bounds; // 2050
		b3AABB localBounds; // 2053
		b3Neg(b3Vec3 a); // 551
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
					b3Vec3 v);  // 551
		b3Conjugate(b3Quat q); // 552
		b3InvertTransform(b3Transform t); // 2053
	}
	{
		b3MeshImpactContext context; // 2066
		b3Vec3 localCentroidB; // 2074
		b3Transform xfA; // 2078
		b3Transform xfB1; // 2083
		b3Transform xfB2; // 2088
		b3ShapeExtent extents; // 2101
		b3AABB bounds; // 2105
		b3AABB localBounds; // 2108
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
				b3Vec3 v);  // 2079
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 2079
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
				b3Vec3 v);  // 2084
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 2084
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
				b3Vec3 v);  // 2089
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 2089
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
				b3Vec3 v);  // 2098
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 572
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
					b3Vec3 v);  // 572
		b3InvTransformPoint(b3Transform t,
					b3Vec3 v);  // 2098
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
				b3Vec3 v);  // 2099
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 572
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
					b3Vec3 v);  // 572
		b3InvTransformPoint(b3Transform t,
					b3Vec3 v);  // 2099
		b3Neg(b3Vec3 a); // 551
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
					b3Vec3 v);  // 551
		b3Conjugate(b3Quat q); // 552
		b3InvertTransform(b3Transform t); // 2108
	}
} /* size: 0, variables: 4 */


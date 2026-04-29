
//
// src/sensor.cpp
//
//	referenced by: libengine2.so
//
//	functions: 4
//	struct: 1
//

// <06C358DF> src/sensor.cpp:18
// member variables: 5
// struct size: 64
struct b3SensorQueryContext {
	b3World * world; /* 0 8 */
	b3SensorTaskContext * taskContext; /* 8 8 */
	b3Sensor * sensor; /* 16 8 */
	b3Shape * sensorShape; /* 24 8 */
	b3Transform transform; /* 32 28 */
};

// <06C3750C> src/sensor.cpp:27
// variables: 6
// function calls: 20
bool b3OverlapSensor(b3Shape* sensorShape, b3Transform sensorTransform, b3Shape* visitorShape, b3Transform visitorTransform)
{
	b3ShapeType type; // 30
	b3ShapeProxy proxy; // 32
	b3Transform relativeTransform; // 35
	b3Vec3 localPoints; // 37
	b3ShapeProxy localProxy; // 38
	{
		int i; // 41
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
				b3Vec3 v);  // 566
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 567
		b3TransformPoint(b3Transform t,
				b3Vec3 v);  // 43
	}
	b3MinInt(int a,
		int b);  // 40
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 543
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
				b3Vec3 v);  // 543
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
			b3Quat q2);  // 544
	b3InvMulTransforms(b3Transform a,
				b3Transform b);  // 35
} /* size: 0, variables: 5, inline expansions: 13 (1131 bytes) */

// <06C37237> src/sensor.cpp:91
// variables: 18
// function calls: 3
bool b3SensorQueryCallback(int proxyId, uint64_t userData, void* context)
{
	int shapeId; // 95
	b3SensorQueryContext* queryContext; // 97
	b3Shape* sensorShape; // 98
	int sensorShapeId; // 99
	b3World* world; // 106
	b3Shape* otherShape; // 107
	b3Transform otherTransform; // 150
	b3Shape* shapeA; // 153
	b3Shape* shapeB; // 154
	b3Transform transformA; // 155
	b3Transform transformB; // 156
	b3Sensor* sensor; // 186
	b3Visitor* shapeRef; // 187
	{
		b3CustomFilterFcn* customFilterFcn; // 137
		{
			b3ShapeId idA; // 140
			b3ShapeId idB; // 141
			bool shouldCollide; // 142
		}
	}
	b3Array<b3Shape>::Get(
		int index);  // 107
	b3ShouldShapesCollide(b3Filter filterA,
				b3Filter filterB);  // 129
	{
		int newCapacity; // 115
	}
	b3Array<b3Visitor>::Add(); // 187
} /* size: 0, variables: 13, inline expansions: 3 (206 bytes) */

// <06C371D4> src/sensor.cpp:194
// variables: 2
int b3CompareVisitors(const void* a, const void* b)
{
	const b3Visitor* sa; // 196
	const b3Visitor* sb; // 197
} /* size: 19, variables: 2 */

// <06C36B52> src/sensor.cpp:207
// variables: 22
// function calls: 8
void b3SensorTask(int startIndex, int endIndex, uint32_t threadIndex, void* context)
{
	b3World* world; // 211
	b3SensorTaskContext* taskContext; // 213
	b3DynamicTree* trees; // 217
	{
		int sensorIndex; // 218
		{
			b3Sensor* sensor; // 220
			b3Shape* sensorShape; // 221
			b3Array<b3Visitor> temp; // 224
			b3Body* body; // 235
			b3Transform transform; // 246
			b3SensorQueryContext queryContext; // 248
			b3AABB queryBounds; // 257
			int uniqueCount; // 268
			int overlapCount; // 269
			b3Visitor* overlapData; // 270
			int count1; // 281
			int count2; // 282
			{
				int i; // 271
			}
			{
				int i; // 290
				{
					b3Visitor* s1; // 292
					b3Visitor* s2; // 293
				}
			}
			b3Array<b3Sensor>::Get(
				int index);  // 220
			b3Array<b3Shape>::Get(
				int index);  // 221
			{
				int requiredCapacity; // 145
				int newCapacity; // 146
			}
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 150
			b3Array<b3Visitor>::Append(
				const b3Visitor* otherValues,
				int otherCount);  // 230
			b3Array<b3Visitor>::Clear(); // 227
			b3Array<b3Visitor>::Clear(); // 233
			b3Array<b3Body>::Get(
				int index);  // 235
			b3SetBit(b3BitSet* bitSet,
				uint32_t bitIndex);  // 241
		}
	}
} /* size: 0, variables: 3 */


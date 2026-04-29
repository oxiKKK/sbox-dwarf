
//
// src/solver.cpp
//
//	referenced by: libengine2.so
//
//	functions: 17
//	structs: 2
//

// <06C687A4> src/solver.cpp:26
void b3Pause(void)
{
} /* size: 0 */

// <06C5FAC4> src/solver.cpp:51
// member variables: 3
// struct size: 24
struct b3WorkerContext {
	b3StepContext * context; /* 0 8 */
	int workerIndex; /* 8 4 */
	void * userTask; /* 16 8 */
};

// <06C675E2> src/solver.cpp:59
// variables: 33
// function calls: 78
void b3IntegrateVelocitiesTask(int startIndex, int endIndex, b3StepContext* context)
{
	b3BodyState* states; // 63
	b3BodySim* sims; // 64
	b3Vec3 gravity; // 66
	float h; // 67
	float maxLinearSpeed; // 68
	float maxAngularSpeed; // 69
	float maxLinearSpeedSquared; // 70
	float maxAngularSpeedSquared; // 71
	{
		int i; // 73
		{
			b3BodySim* sim; // 75
			b3BodyState* state; // 76
			b3Vec3 v; // 78
			b3Vec3 w; // 79
			float linearDamping; // 88
			float angularDamping; // 89
			float gravityScale; // 92
			b3Vec3 linearVelocityDelta; // 94
			b3Vec3 angularVelocityDelta; // 98
			{
				b3Quat q0; // 107
				b3Quat q; // 108
				b3Matrix3 inertiaLocal; // 111
				b3Vec3 omega1; // 114
				b3Vec3 omega2; // 115
				{
					int gyroIteration; // 119
					{
						b3Vec3 b; // 122
						b3Matrix3 J; // 125
						b3MulMV(b3Matrix3 m,
							b3Vec3 a);  // 636
						b3MulMV(b3Matrix3 m,
							b3Vec3 a);  // 634
						b3MulMV(b3Matrix3 m,
							b3Vec3 a);  // 635
						b3MulMM(b3Matrix3 a,
							b3Matrix3 b);  // 137
						b3MulMV(b3Matrix3 m,
							b3Vec3 a);  // 122
						b3Cross(b3Vec3 a,
							b3Vec3 b);  // 122
						b3MulSV(float s,
							b3Vec3 a);  // 1001
						operator*(float s,
								b3Vec3 a);  // 122
						b3Sub(b3Vec3 a,
							b3Vec3 b);  // 1021
						operator-(b3Vec3 a,
								b3Vec3 b);  // 122
						b3MulMV(b3Matrix3 m,
							b3Vec3 a);  // 122
						b3Add(b3Vec3 a,
							b3Vec3 b);  // 1016
						operator+(b3Vec3 a,
								b3Vec3 b);  // 122
						b3Skew(b3Vec3 v); // 137
						b3Skew(b3Vec3 v); // 137
						b3SubMM(b3Matrix3 a,
							b3Matrix3 b);  // 1047
						operator-(b3Matrix3 a,
								b3Matrix3 b);  // 137
						b3MulSM(float s,
							b3Matrix3 a);  // 1052
						operator*(float s,
								b3Matrix3 a);  // 137
						b3AddMM(b3Matrix3 a,
							b3Matrix3 b);  // 1031
						operator+=(b3Matrix3& a,
								b3Matrix3 b);  // 137
						b3Cross(b3Vec3 a,
							b3Vec3 b);  // 582
						b3Dot(b3Vec3 a,
							b3Vec3 b);  // 582
						b3Det(b3Matrix3 m); // 669
						b3AbsFloat(float a); // 670
						{
							float invDet; // 672
							b3Matrix3 a; // 673
							b3Vec3 b; // 678
							b3Cross(b3Vec3 a,
								b3Vec3 b);  // 675
							b3Dot(b3Vec3 a,
								b3Vec3 b);  // 679
							b3Cross(b3Vec3 a,
								b3Vec3 b);  // 676
							b3Dot(b3Vec3 a,
								b3Vec3 b);  // 680
							b3Dot(b3Vec3 a,
								b3Vec3 b);  // 681
						}
						b3Solve3(b3Matrix3 m,
							b3Vec3 x);  // 139
						b3Sub(b3Vec3 a,
							b3Vec3 b);  // 984
						operator-=(b3Vec3& a,
								b3Vec3 b);  // 139
					}
				}
				{
					float invDet; // 655
					b3Matrix3 out; // 656
					b3MulSV(float s,
						b3Vec3 a);  // 657
					b3Cross(b3Vec3 a,
						b3Vec3 b);  // 658
					b3MulSV(float s,
						b3Vec3 a);  // 658
					b3Cross(b3Vec3 a,
						b3Vec3 b);  // 659
					b3MulSV(float s,
						b3Vec3 a);  // 659
					b3Transpose(b3Matrix3 m); // 661
				}
				b3AbsFloat(float a); // 653
				b3Cross(b3Vec3 a,
					b3Vec3 b);  // 582
				b3Dot(b3Vec3 a,
					b3Vec3 b);  // 582
				b3Det(b3Matrix3 m); // 652
				b3InvertMatrix(b3Matrix3 m); // 111
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
							b3Vec3 v);  // 114
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
						b3Vec3 v);  // 142
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
						b3Quat q2);  // 108
			}
			{
				float ratio; // 148
				b3Length(b3Vec3 v); // 148
				b3MulSV(float s,
					b3Vec3 a);  // 149
			}
			{
				float ratio; // 156
				b3Length(b3Vec3 v); // 156
				b3MulSV(float s,
					b3Vec3 a);  // 990
				operator*=(b3Vec3& a,
						float s);  // 157
			}
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 146
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 154
			b3MulSV(float s,
				b3Vec3 a);  // 94
			b3MulSV(float s,
				b3Vec3 a);  // 94
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 94
			b3MulAdd(b3Vec3 a,
				float s,
				b3Vec3 b);  // 95
			b3MulSV(float s,
				b3Vec3 a);  // 1001
			operator*(float s,
					b3Vec3 a);  // 99
			b3MulMV(b3Matrix3 m,
				b3Vec3 a);  // 1026
			operator*(b3Matrix3 m,
					b3Vec3 v);  // 98
			b3MulSV(float s,
				b3Vec3 a);  // 1001
			operator*(float s,
					b3Vec3 a);  // 98
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 1016
			operator+(b3Vec3 a,
					b3Vec3 b);  // 99
		}
	}
} /* size: 3731, variables: 8 */

// <06C6758A> src/solver.cpp:176
// variables: 3
void b3PrepareJointsTask(int startIndex, int endIndex, b3StepContext* context)
{
	b3JointSim** joints; // 180
	{
		int i; // 182
		{
			b3JointSim* joint; // 184
		}
	}
} /* size: 0, variables: 1 */

// <06C6751A> src/solver.cpp:191
// variables: 4
void b3WarmStartJointsTask(int startIndex, int endIndex, b3StepContext* context, int colorIndex)
{
	b3GraphColor* color; // 195
	b3JointSim* joints; // 196
	{
		int i; // 200
		{
			b3JointSim* joint; // 202
		}
	}
} /* size: 0, variables: 2 */

// <06C671EB> src/solver.cpp:209
// variables: 7
// function calls: 2
void b3SolveJointsTask(int startIndex, int endIndex, b3StepContext* context, int colorIndex, bool useBias, int workerIndex)
{
	b3GraphColor* color; // 214
	b3JointSim* joints; // 215
	b3BitSet* jointStateBitSet; // 219
	{
		int i; // 221
		{
			b3JointSim* joint; // 223
			{
				float force; // 229
				float torque; // 229
				b3SetBit(b3BitSet* bitSet,
					uint32_t bitIndex);  // 240
			}
			b3GetBit(const b3BitSet* bitSet,
				uint32_t bitIndex);  // 227
		}
	}
} /* size: 0, variables: 3 */

// <06C67148> src/solver.cpp:248
// variables: 9
void b3IntegratePositionsTask(int startIndex, int endIndex, b3StepContext* context)
{
	b3BodyState* states; // 252
	float h; // 253
	float maxAngularSpeed; // 257
	float maxAngularSpeedSquared; // 258
	{
		int i; // 260
		{
			b3BodyState* state; // 262
			b3Vec3 v; // 264
			b3Vec3 w; // 265
			{
				float ratio; // 278
			}
		}
	}
} /* size: 0, variables: 4 */

// <06C5FB11> src/solver.cpp:297
// member variables: 10
// struct size: 224
struct b3ContinuousContext {
	b3World * world; /* 0 8 */
	b3BodySim * fastBodySim; /* 8 8 */
	b3Shape * fastShape; /* 16 8 */
	b3Vec3 centroid1; /* 24 12 */
	b3Vec3 centroid2; /* 36 12 */
	b3Sweep sweep; /* 48 68 */
	float fraction; /* 116 4 */
	b3SensorHit sensorHits[8]; /* 120 64 */
	float sensorFractions[8]; /* 184 32 */
	int sensorCount; /* 216 4 */
};

// <06C66C77> src/solver.cpp:311
// variables: 21
// function calls: 5
bool b3ContinuousQueryCallback(int proxyId, uint64_t userData, void* context)
{
	int shapeId; // 315
	b3ContinuousContext* continuousContext; // 316
	b3Shape* fastShape; // 317
	b3BodySim* fastBodySim; // 318
	b3World* world; // 328
	b3Shape* shape; // 330
	bool isSensor; // 339
	bool canCollide; // 346
	b3Body* body; // 352
	b3BodySim* bodySim; // 354
	b3Body* fastBody; // 364
	b3Sweep sweepA; // 388
	b3TOIOutput output; // 391
	{
		b3CustomFilterFcn* customFilterFcn; // 374
		{
			b3ShapeId idA; // 377
			b3ShapeId idB; // 378
		}
	}
	{
		int index; // 398
		b3SensorHit sensorHit; // 401
	}
	{
		bool didHit; // 413
		{
			b3ShapeId shapeIdA; // 417
			b3ShapeId shapeIdB; // 418
		}
	}
	b3Array<b3Shape>::Get(
		int index);  // 330
	b3ShouldShapesCollide(b3Filter filterA,
				b3Filter filterB);  // 346
	b3Array<b3Body>::Get(
		int index);  // 352
	b3Array<b3Body>::Get(
		int index);  // 364
	b3MakeSweep(const b3BodySim* bodySim); // 388
} /* size: 0, variables: 13, inline expansions: 5 (377 bytes) */

// <06C65941> src/solver.cpp:434
// variables: 32
// function calls: 65
void b3SolveContinuous(b3World* world, int bodySimIndex, b3TaskContext* taskContext)
{
	b3SolverSet* awakeSet; // 438
	b3BodySim* fastBodySim; // 439
	b3Sweep sweep; // 442
	b3Transform xf1; // 444
	b3Transform xf2; // 448
	b3DynamicTree* staticTree; // 452
	b3DynamicTree* kinematicTree; // 453
	b3DynamicTree* dynamicTree; // 454
	b3Body* fastBody; // 455
	b3ContinuousContext context; // 457
	bool isBullet; // 463
	int shapeId; // 465
	const float  speculativeScalar; // 503
	const float  marginScalar; // 504
	const b3Vec3  speculativeMargin; // 505
	const b3Vec3  aabbMargin; // 506
	{
		b3Shape* fastShape; // 468
		b3AABB box1; // 475
		b3AABB box2; // 476
		b3AABB sweptBox; // 493
		b3Array<b3Shape>::Get(
			int index);  // 468
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
				b3Vec3 v);  // 472
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
				b3Vec3 v);  // 473
		b3Min(b3Vec3 a,
			b3Vec3 b);  // 891
		b3Max(b3Vec3 a,
			b3Vec3 b);  // 892
		b3AABB_Union(b3AABB bounds1,
				b3AABB bounds2);  // 493
	}
	{
		b3Quat q; // 511
		b3Vec3 c; // 512
		b3Vec3 origin; // 513
		b3Transform transform; // 516
		{
			b3Shape* shape; // 528
			b3AABB aabb; // 531
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 1016
			operator+(b3Vec3 a,
					b3Vec3 b);  // 538
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 978
			operator+=(b3Vec3& a,
					b3Vec3 b);  // 533
			b3AABB_Contains(b3AABB a,
					b3AABB b);  // 536
			b3Array<b3Shape>::Get(
				int index);  // 528
			b3Sub(b3Vec3 a,
				b3Vec3 b);  // 984
			operator-=(b3Vec3& a,
					b3Vec3 b);  // 532
			b3Sub(b3Vec3 a,
				b3Vec3 b);  // 1021
			operator-(b3Vec3 a,
					b3Vec3 b);  // 538
		}
		b3DotQuat(b3Quat a,
				b3Quat b);  // 514
		b3Lerp(b3Vec3 a,
			b3Vec3 b,
			float alpha);  // 520
		b3DotQuat(b3Quat a,
				b3Quat b);  // 441
		{
			float s; // 444
			b3Quat qn; // 445
		}
		b3NormalizeQuat(b3Quat q); // 523
		b3NLerp(b3Quat q1,
			b3Quat q2,
			float alpha);  // 511
		b3Lerp(b3Vec3 a,
			b3Vec3 b,
			float alpha);  // 512
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
				b3Vec3 v);  // 513
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 513
	}
	{
		b3Shape* shape; // 559
		{
			b3Vec3 c; // 569
		}
		b3Add(b3Vec3 a,
			b3Vec3 b);  // 1016
		operator+(b3Vec3 a,
				b3Vec3 b);  // 565
		b3Sub(b3Vec3 a,
			b3Vec3 b);  // 1021
		operator-(b3Vec3 a,
				b3Vec3 b);  // 565
		b3AABB_Contains(b3AABB a,
				b3AABB b);  // 563
		b3Array<b3Shape>::Get(
			int index);  // 559
	}
	{
		int i; // 584
		{
			int newCapacity; // 132
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 241
			b3Array<b3SensorHit>::Reserve(
				int newCapacity);  // 134
		}
		b3Array<b3SensorHit>::PushBack(
			const b3SensorHit& value);  // 589
	}
	b3Array<b3SolverSet>::Get(
		int index);  // 438
	b3Array<b3BodySim>::Get(
		int index);  // 439
	b3MakeSweep(const b3BodySim* bodySim); // 442
	b3Array<b3Body>::Get(
		int index);  // 455
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
			b3Vec3 v);  // 446
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 446
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
			b3Vec3 v);  // 450
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 450
} /* size: 0, variables: 16, inline expansions: 16 (1442 bytes) */

// <06C648FC> src/solver.cpp:596
// variables: 40
// function calls: 51
void b3FinalizeBodiesTask(int startIndex, int endIndex, uint32_t threadIndex, void* context)
{
	b3StepContext* stepContext; // 600
	b3World* world; // 601
	bool enableSleep; // 605
	b3BodyState* states; // 606
	b3BodySim* sims; // 607
	b3Body* bodies; // 608
	float timeStep; // 609
	float invTimeStep; // 610
	uint16_t worldId; // 612
	b3BodyMoveEvent* moveEvents; // 616
	b3BitSet* enlargedSimBitSet; // 618
	b3BitSet* awakeIslandBitSet; // 619
	b3TaskContext* taskContext; // 620
	bool enableContinuous; // 622
	const float  speculativeScalar; // 624
	const float  marginScalar; // 625
	const b3Vec3  speculativeMargin; // 626
	const b3Vec3  aabbMargin; // 627
	{
		int simIndex; // 631
		{
			b3BodyState* state; // 633
			b3BodySim* sim; // 634
			b3Vec3 v; // 636
			b3Vec3 w; // 637
			float maxVelocity; // 662
			float maxDeltaPosition; // 665
			float positionSleepFactor; // 668
			float sleepVelocity; // 670
			b3Body* body; // 679
			b3Matrix3 rotationMatrix; // 739
			b3Island* island; // 743
			b3Transform transform; // 762
			bool isFast; // 763
			int shapeId; // 764
			{
				const float  safetyFactor; // 705
				{
					int bulletIndex; // 715
					b3AtomicFetchAddInt(b3AtomicInt* a,
								int increment);  // 715
				}
			}
			{
				int islandIndex; // 747
				b3SetBit(b3BitSet* bitSet,
					uint32_t bitIndex);  // 748
			}
			{
				b3Shape* shape; // 767
				{
					b3AABB aabb; // 780
					b3Add(b3Vec3 a,
						b3Vec3 b);  // 978
					operator+=(b3Vec3& a,
							b3Vec3 b);  // 782
					b3Sub(b3Vec3 a,
						b3Vec3 b);  // 984
					operator-=(b3Vec3& a,
							b3Vec3 b);  // 781
					b3AABB_Contains(b3AABB a,
							b3AABB b);  // 787
					b3SetBit(b3BitSet* bitSet,
						uint32_t bitIndex);  // 793
					b3Sub(b3Vec3 a,
						b3Vec3 b);  // 1021
					operator-(b3Vec3 a,
							b3Vec3 b);  // 789
					b3Add(b3Vec3 a,
						b3Vec3 b);  // 1016
					operator+(b3Vec3 a,
							b3Vec3 b);  // 789
				}
				b3Array<b3Shape>::Get(
					int index);  // 767
			}
			{
				float s; // 444
				b3Quat qn; // 445
			}
			b3DotQuat(b3Quat a,
					b3Quat b);  // 441
			b3NormalizeQuat(b3Quat q); // 659
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 658
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
					b3Quat q2);  // 659
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 220
			b3Length(b3Vec3 v); // 662
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 220
			b3Length(b3Vec3 v); // 662
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
					b3Vec3 v);  // 676
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 220
			b3Length(b3Vec3 v); // 665
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 220
			b3Length(b3Vec3 v); // 665
			b3Sub(b3Vec3 a,
				b3Vec3 b);  // 676
			b3AbsFloat(float a); // 687
			b3AbsFloat(float a); // 688
			b3AbsFloat(float a); // 689
			b3MakeMatrixFromQuat(b3Quat q); // 739
			b3MulMV(b3Matrix3 m,
				b3Vec3 a);  // 634
			b3MulMV(b3Matrix3 m,
				b3Vec3 a);  // 635
			b3MulMV(b3Matrix3 m,
				b3Vec3 a);  // 636
			b3MulMM(b3Matrix3 a,
				b3Matrix3 b);  // 1037
			operator*(b3Matrix3 a,
					b3Matrix3 b);  // 740
			b3Transpose(b3Matrix3 m); // 740
			b3MulMV(b3Matrix3 m,
				b3Vec3 a);  // 634
			b3MulMV(b3Matrix3 m,
				b3Vec3 a);  // 635
			b3MulMV(b3Matrix3 m,
				b3Vec3 a);  // 636
			b3MulMM(b3Matrix3 a,
				b3Matrix3 b);  // 1037
			operator*(b3Matrix3 a,
					b3Matrix3 b);  // 740
			b3Array<b3Island>::Get(
				int index);  // 743
		}
	}
} /* size: 0, variables: 18 */

// <06C6949D> src/solver.cpp:828
// variables: 15
// function calls: 20
void b3ExecuteBlock(b3SolverStage* stage, b3StepContext* context, int workerIndex, b3SolverBlock* block)
{
	b3SolverStageType stageType; // 830
	b3SolverBlockType blockType; // 831
	int startIndex; // 832
	int endIndex; // 833
	{
		int i; // 182
		{
			b3JointSim* joint; // 184
		}
	}
	b3PrepareJointsTask(int startIndex,
				int endIndex,
				b3StepContext* context);  // 838
	{
		int i; // 260
		{
			b3BodyState* state; // 262
			b3Vec3 v; // 264
			b3Vec3 w; // 265
			{
				float s; // 444
				b3Quat qn; // 445
			}
			b3DotQuat(b3Quat a,
					b3Quat b);  // 441
			b3NormalizeQuat(b3Quat q); // 125
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
					b3Quat q2);  // 123
			b3MulSV(float s,
				b3Vec3 a);  // 122
			b3Add(b3Vec3 a,
				b3Vec3 b);  // 124
			b3IntegrateRotation(b3Quat q1,
						b3Vec3 deltaRotation);  // 288
			b3MulAdd(b3Vec3 a,
				float s,
				b3Vec3 b);  // 289
			b3Dot(b3Vec3 a,
				b3Vec3 b);  // 276
			{
				float ratio; // 278
				b3Length(b3Vec3 v); // 278
				b3MulSV(float s,
					b3Vec3 a);  // 990
				operator*=(b3Vec3& a,
						float s);  // 279
			}
			b3MulSV(float s,
				b3Vec3 a);  // 1001
			operator*(float s,
					b3Vec3 a);  // 288
		}
	}
	b3IntegratePositionsTask(int startIndex,
				int endIndex,
				b3StepContext* context);  // 902
	{
		int i; // 200
		{
			b3JointSim* joint; // 202
		}
	}
	b3WarmStartJointsTask(int startIndex,
				int endIndex,
				b3StepContext* context,
				int colorIndex);  // 877
} /* size: 0, variables: 4, inline expansions: 3 (1098 bytes) */

// <06C64884> src/solver.cpp:828
// variables: 4
void b3ExecuteBlock(b3SolverStage* stage, b3StepContext* context, b3SolverBlock* block, int workerIndex)
{
	b3SolverStageType stageType; // 830
	b3SolverBlockType blockType; // 831
	int startIndex; // 832
	int endIndex; // 833
} /* size: 0, variables: 4 */

// <06C64830> src/solver.cpp:956
// variables: 2
inline int GetWorkerStartIndex(int workerIndex, int blockCount, int workerCount)
{
	int blocksPerWorker; // 963
	int remainder; // 964
} /* size: 0, variables: 2 */

// <06C644E5> src/solver.cpp:968
// variables: 6
// function calls: 5
void b3ExecuteStage(b3SolverStage* stage, b3StepContext* context, int previousSyncIndex, int syncIndex, int workerIndex)
{
	int completedCount; // 970
	b3SolverBlock* blocks; // 971
	int blockCount; // 972
	int expectedSyncIndex; // 974
	int startIndex; // 976
	int blockIndex; // 984
	b3MinInt(int a,
		int b);  // 965
	GetWorkerStartIndex(int workerIndex,
				int blockCount,
				int workerCount);  // 976
	b3AtomicCompareExchangeInt(b3AtomicInt* a,
					int expected,
					int desired);  // 986
	b3AtomicCompareExchangeInt(b3AtomicInt* a,
					int expected,
					int desired);  // 1017
	b3AtomicFetchAddInt(b3AtomicInt* a,
				int increment);  // 1027
} /* size: 0, variables: 6, inline expansions: 5 (87 bytes) */

// <06C642FA> src/solver.cpp:1030
// variables: 4
// function calls: 4
void b3ExecuteMainStage(b3SolverStage* stage, b3StepContext* context, uint32_t syncBits)
{
	int blockCount; // 1032
	const int  workerIndex; // 1038
	{
		int syncIndex; // 1048
		int previousSyncIndex; // 1050
		b3AtomicStoreU32(b3AtomicU32* a,
				uint32_t value);  // 1046
		b3Pause(void); // 1057
		b3AtomicLoadInt(b3AtomicInt* a); // 1055
		b3AtomicStoreInt(b3AtomicInt* a,
				int value);  // 1060
	}
} /* size: 0, variables: 2 */

// <06C6375F> src/solver.cpp:1065
// variables: 31
// function calls: 4
void b3SolverTask(int startIndex, int endIndex, uint32_t threadIndexDontUse, void* taskContext)
{
	b3WorkerContext* workerContext; // 1071
	int workerIndex; // 1072
	b3StepContext* context; // 1073
	int activeColorCount; // 1074
	b3SolverStage* stages; // 1075
	b3Profile* profile; // 1076
	uint32_t lastSyncBits; // 1266
	{
		uint64_t ticks; // 1100
		int bodySyncIndex; // 1102
		int stageIndex; // 1103
		uint32_t jointSyncIndex; // 1106
		uint32_t syncBits; // 1107
		uint32_t contact1SyncIndex; // 1114
		uint32_t contact2SyncIndex; // 1121
		uint32_t contact3SyncIndex; // 1128
		int graphSyncIndex; // 1135
		int subStepCount; // 1144
		{
			int i; // 1145
			{
				int iterationStageIndex; // 1149
				bool useBias; // 1176
				{
					int colorIndex; // 1164
				}
				{
					int colorIndex; // 1180
				}
				{
					int colorIndex; // 1205
				}
			}
		}
		{
			int iterStageIndex; // 1225
			{
				int colorIndex; // 1226
			}
		}
		b3AtomicStoreU32(b3AtomicU32* a,
				uint32_t value);  // 1259
	}
	{
		uint32_t syncBits; // 1272
		int spinCount; // 1273
		int stageIndex; // 1304
		int syncIndex; // 1307
		int previousSyncIndex; // 1310
		b3SolverStage* stage; // 1312
		b3Pause(void); // 1292
		b3Pause(void); // 1293
		b3AtomicLoadU32(b3AtomicU32* a); // 1274
	}
} /* size: 0, variables: 7 */

// <06C635EB> src/solver.cpp:1319
// variables: 4
// function call: 1
void b3BulletBodyTask(int startIndex, int endIndex, uint32_t threadIndex, void* context)
{
	b3StepContext* stepContext; // 1325
	b3TaskContext* taskContext; // 1326
	{
		int i; // 1330
		{
			int simIndex; // 1332
		}
	}
	b3Array<b3TaskContext>::Get(
		int index);  // 1326
} /* size: 0, variables: 2, inline expansions: 1 (86 bytes) */

// <06C635CB> src/solver.cpp:1345
int b3SimdCount(int count)
{
} /* size: 0 */


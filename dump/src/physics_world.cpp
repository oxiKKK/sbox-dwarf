
//
// src/physics_world.cpp
//
//	referenced by: libengine2.so
//
//	functions: 48
//	structs: 7
//

// <06BF0AAC> src/physics_world.cpp:57
// variable: 1
b3World* b3GetWorldFromId(b3WorldId id)
{
	b3World* world; // 60
} /* size: 0, variables: 1 */

// <06BF087A> src/physics_world.cpp:88
void* b3DefaultAddTaskFcn(b3TaskCallback* task, int count, int minRange, void* taskContext, void* userContext)
{
} /* size: 21 */

// <06BF083C> src/physics_world.cpp:96
void b3DefaultFinishTaskFcn(void* userTask, void* userContext)
{
} /* size: 5 */

// <06BF07B9> src/physics_world.cpp:102
float b3DefaultFrictionCallback(float frictionA, uint64_t materialA, float frictionB, uint64_t materialB)
{
} /* size: 27 */

// <06BF0756> src/physics_world.cpp:108
float b3DefaultRestitutionCallback(float restitutionA, uint64_t materialA, float restitutionB, uint64_t materialB)
{
} /* size: 9 */

// <06BF02F8> src/physics_world.cpp:114
// variable: 1
// function calls: 11
void b3CreateWorkerContexts(b3World* world)
{
	{
		int i; // 124
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 241
		b3Array<b3SensorHit>::Reserve(
			int newCapacity);  // 27
		b3Array<b3SensorHit>::Create(
			int initialCapacity);  // 127
	}
	b3Array<b3TaskContext>::Create(
		int initialCapacity);  // 116
	b3Array<b3TaskContext>::Resize(
		int newCount);  // 117
	memset(void* __dest,
		int __ch,
		size_t __len);  // 86
	b3Array<b3TaskContext>::MemZero(); // 118
	b3Array<b3SensorTaskContext>::Create(
		int initialCapacity);  // 120
	b3Array<b3SensorTaskContext>::Resize(
		int newCount);  // 121
	memset(void* __dest,
		int __ch,
		size_t __len);  // 86
	b3Array<b3SensorTaskContext>::MemZero(); // 122
} /* size: 718, inline expansions: 8 (219 bytes) */

// <06BF01A5> src/physics_world.cpp:138
// variable: 1
// function calls: 3
void b3DestroyWorkerContexts(b3World* world)
{
	{
		int i; // 140
		b3Array<b3SensorHit>::Destroy(); // 143
	}
	b3Array<b3TaskContext>::Destroy(); // 152
	b3Array<b3SensorTaskContext>::Destroy(); // 153
} /* size: 342, inline expansions: 2 (101 bytes) */

// <06BEE2E8> src/physics_world.cpp:426
// function call: 1
int b3GetWorldCount(void)
{
	b3AtomicLoadInt(b3AtomicInt* a); // 428
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06BEE2C5> src/physics_world.cpp:431
int b3GetMaxWorldCount(void)
{
} /* size: 0 */

// <06BEDC49> src/physics_world.cpp:436
// variables: 22
// function calls: 14
void b3CollideTask(int startIndex, int endIndex, uint32_t threadIndex, void* context)
{
	b3StepContext* stepContext; // 440
	b3World* world; // 441
	b3TaskContext* taskContext; // 443
	b3ContactSim** contactSims; // 444
	b3Shape* shapes; // 445
	b3Body* bodies; // 446
	{
		int i; // 450
		{
			b3ContactSim* contactSim; // 452
			int contactId; // 454
			b3Shape* shapeA; // 456
			b3Shape* shapeB; // 457
			bool overlap; // 460
			{
				bool wasTouching; // 469
				b3Body* bodyA; // 472
				b3Body* bodyB; // 473
				b3BodySim* bodySimA; // 474
				b3BodySim* bodySimB; // 475
				b3Transform transformA; // 486
				b3Transform transformB; // 487
				b3Vec3 centerOffsetA; // 489
				b3Vec3 centerOffsetB; // 490
				bool touching; // 493
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
						b3Vec3 v);  // 489
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
						b3Vec3 v);  // 490
				b3SetBit(b3BitSet* bitSet,
					uint32_t bitIndex);  // 500
				b3SetBit(b3BitSet* bitSet,
					uint32_t bitIndex);  // 505
			}
			b3SetBit(b3BitSet* bitSet,
				uint32_t bitIndex);  // 465
			b3AABB_Overlaps(b3AABB a,
					b3AABB b);  // 460
		}
	}
} /* size: 0, variables: 6 */

// <06BEDBA4> src/physics_world.cpp:513
// variable: 1
void b3UpdateTreesTask(int startIndex, int endIndex, uint32_t threadIndex, void* context)
{
	b3World* world; // 521
} /* size: 16, variables: 1 */

// <06BEDB54> src/physics_world.cpp:527
// variables: 2
void b3AddNonTouchingContact(b3World* world, b3Contact* contact, b3ContactSim* contactSim)
{
	b3SolverSet* set; // 530
	b3ContactSim* newContactSim; // 534
} /* size: 0, variables: 2 */

// <06BEDAE8> src/physics_world.cpp:538
// variables: 4
void b3RemoveNonTouchingContact(b3World* world, int setIndex, int localIndex)
{
	b3SolverSet* set; // 540
	int movedIndex; // 541
	{
		b3ContactSim* movedContactSim; // 544
		b3Contact* movedContact; // 545
	}
} /* size: 0, variables: 2 */

// <06BED84A> src/physics_world.cpp:554
// variables: 46
void b3Collide(b3StepContext* context)
{
	b3World* world; // 556
	int contactCount; // 570
	b3GraphColor* graphColors; // 571
	int nonTouchingCount; // 577
	b3ContactSim** contactSims; // 586
	int contactIndex; // 589
	int contactIdCapacity; // 616
	int minRange; // 625
	void* userCollideTask; // 626
	int satMultiplier; // 641
	b3BitSet* bitSet; // 644
	b3SolverSet* awakeSet; // 654
	int endEventArrayIndex; // 656
	const b3Shape* shapes; // 658
	uint16_t worldId; // 659
	{
		int i; // 572
	}
	{
		int i; // 590
		{
			b3GraphColor* color; // 592
			int count; // 593
			b3ContactSim* base; // 594
			{
				int j; // 595
			}
		}
	}
	{
		b3ContactSim* base; // 603
		{
			int i; // 604
		}
	}
	{
		int i; // 617
	}
	{
		int i; // 647
	}
	{
		uint32_t k; // 662
		{
			uint64_t bits; // 664
			{
				uint32_t ctz; // 667
				int contactId; // 668
				b3Contact* contact; // 670
				int colorIndex; // 673
				int localIndex; // 674
				b3ContactSim* contactSim; // 676
				const b3Shape* shapeA; // 689
				const b3Shape* shapeB; // 690
				b3ShapeId shapeIdA; // 691
				b3ShapeId shapeIdB; // 692
				b3ContactId contactFullId; // 693
				uint32_t flags; // 699
				uint32_t simFlags; // 700
				{
					b3GraphColor* color; // 681
				}
				{
					b3ContactBeginTouchEvent event; // 715
				}
				{
					int bodyIdA; // 755
					int bodyIdB; // 756
					bool destroy; // 761
					{
						b3ContactEndTouchEvent event; // 748
					}
				}
			}
		}
	}
} /* size: 0, variables: 15 */

// <06BE2BC0> src/physics_world.cpp:936
// member variables: 2
// struct size: 16
struct DrawContext {
	b3World * world; /* 0 8 */
	b3DebugDraw * draw; /* 8 8 */
};

// <06BEBBAC> src/physics_world.cpp:942
// variables: 10
// function calls: 3
bool DrawQueryCallback(int proxyId, uint64_t userData, void* context)
{
	int shapeId; // 944
	DrawContext* drawContext; // 948
	b3World* world; // 949
	b3DebugDraw* draw; // 950
	b3Shape* shape; // 952
	{
		b3Body* body; // 959
		b3BodySim* bodySim; // 960
		b3HexColor color; // 962
		{
			b3DebugShape debugShape; // 1023
		}
		b3Array<b3Body>::Get(
			int index);  // 959
	}
	{
		b3AABB aabb; // 1066
	}
	b3Array<b3Shape>::Get(
		int index);  // 952
	b3SetBit(b3BitSet* bitSet,
		uint32_t bitIndex);  // 955
} /* size: 0, variables: 5, inline expansions: 2 (171 bytes) */

// <06BE99D7> src/physics_world.cpp:1617
// variable: 1
void b3World_EnableWarmStarting(b3WorldId worldId, bool flag)
{
	b3World* world; // 1619
} /* size: 0, variables: 1 */

// <06BE9978> src/physics_world.cpp:1628
// variable: 1
bool b3World_IsWarmStartingEnabled(b3WorldId worldId)
{
	b3World* world; // 1630
} /* size: 0, variables: 1 */

// <06BE98AC> src/physics_world.cpp:1634
// variables: 2
// function call: 1
int b3World_GetAwakeBodyCount(b3WorldId worldId)
{
	b3World* world; // 1636
	b3SolverSet* awakeSet; // 1641
	b3Array<b3SolverSet>::Get(
		int index);  // 1641
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <06BE971E> src/physics_world.cpp:1662
// variable: 1
// function call: 1
void b3World_SetRestitutionThreshold(b3WorldId worldId, float value)
{
	b3World* world; // 1664
	b3ClampFloat(float a,
			float lower,
			float upper);  // 1670
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06BE96BF> src/physics_world.cpp:1673
// variable: 1
float b3World_GetRestitutionThreshold(b3WorldId worldId)
{
	b3World* world; // 1675
} /* size: 0, variables: 1 */

// <06BE9600> src/physics_world.cpp:1679
// variable: 1
// function call: 1
void b3World_SetHitEventThreshold(b3WorldId worldId, float value)
{
	b3World* world; // 1681
	b3ClampFloat(float a,
			float lower,
			float upper);  // 1687
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06BE95A1> src/physics_world.cpp:1690
// variable: 1
float b3World_GetHitEventThreshold(b3WorldId worldId)
{
	b3World* world; // 1692
} /* size: 0, variables: 1 */

// <06BE9432> src/physics_world.cpp:1696
// variable: 1
// function calls: 3
void b3World_SetContactTuning(b3WorldId worldId, float hertz, float dampingRatio, float contactSpeed)
{
	b3World* world; // 1698
	b3ClampFloat(float a,
			float lower,
			float upper);  // 1704
	b3ClampFloat(float a,
			float lower,
			float upper);  // 1705
	b3ClampFloat(float a,
			float lower,
			float upper);  // 1706
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <06BE931C> src/physics_world.cpp:1722
// variable: 1
float b3World_GetMaximumLinearSpeed(b3WorldId worldId)
{
	b3World* world; // 1724
} /* size: 0, variables: 1 */

// <06BE92BD> src/physics_world.cpp:1728
// variable: 1
b3Profile b3World_GetProfile(b3WorldId worldId)
{
	b3World* world; // 1730
} /* size: 0, variables: 1 */

// <06BE901A> src/physics_world.cpp:1738
// variables: 6
// function calls: 6
b3Counters b3World_GetCounters(b3WorldId worldId)
{
	b3World* world; // 1740
	b3Counters s; // 1745
	b3DynamicTree* staticTree; // 1755
	b3DynamicTree* dynamicTree; // 1758
	b3DynamicTree* kinematicTree; // 1759
	{
		int i; // 1771
	}
	b3GetIdCount(const b3IdPool* pool); // 1746
	b3GetIdCount(const b3IdPool* pool); // 1747
	b3GetIdCount(const b3IdPool* pool); // 1748
	b3GetIdCount(const b3IdPool* pool); // 1753
	b3GetIdCount(const b3IdPool* pool); // 1752
	b3MaxInt(int a,
		int b);  // 1760
} /* size: 0, variables: 5, inline expansions: 6 (0 bytes) */

// <06BE8FBB> src/physics_world.cpp:1778
// variable: 1
b3Capacity b3World_GetMaxCapacity(b3WorldId worldId)
{
	b3World* world; // 1780
} /* size: 0, variables: 1 */

// <06BE8F4B> src/physics_world.cpp:1788
// variable: 1
void b3World_SetUserData(b3WorldId worldId, void* userData)
{
	b3World* world; // 1790
} /* size: 0, variables: 1 */

// <06BE8E0A> src/physics_world.cpp:1800
// variable: 1
// function call: 1
void b3World_SetWorkerCount(b3WorldId worldId, int count)
{
	b3World* world; // 1802
	b3ClampInt(int a,
			int lower,
			int upper);  // 1814
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06BE8DDC> src/physics_world.cpp:1818
// variable: 1
FILE* b3OpenFile(const char* fileName)
{
	FILE* file; // 1820
} /* size: 0, variables: 1 */

// <06BE79D1> src/physics_world.cpp:1835
// variables: 15
// function calls: 58
void b3World_DumpMemoryStats(b3WorldId worldId)
{
	b3World* world; // 1837
	FILE* file; // 1843
	b3HashSet* moveSet; // 1874
	b3HashSet* pairSet; // 1877
	int bodySimCapacity; // 1882
	int bodyStateCapacity; // 1883
	int jointSimCapacity; // 1884
	int contactSimCapacity; // 1885
	int islandSimCapacity; // 1886
	int solverSetCapacity; // 1887
	int bodyBitSetBytes; // 1912
	{
		int i; // 1888
		{
			b3SolverSet* set; // 1890
		}
	}
	{
		int i; // 1915
		{
			b3GraphColor* c; // 1917
			b3GetBitSetBytes(b3BitSet* bitSet); // 1918
		}
	}
	b3OpenFile(const char* fileName); // 1843
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1850
	b3Array<int>::GetByteCount(); // 33
	b3GetIdBytes(const b3IdPool* pool); // 1851
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1851
	b3Array<int>::GetByteCount(); // 33
	b3GetIdBytes(const b3IdPool* pool); // 1852
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1852
	b3Array<int>::GetByteCount(); // 33
	b3GetIdBytes(const b3IdPool* pool); // 1853
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1853
	b3Array<int>::GetByteCount(); // 33
	b3GetIdBytes(const b3IdPool* pool); // 1854
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1854
	b3Array<int>::GetByteCount(); // 33
	b3GetIdBytes(const b3IdPool* pool); // 1855
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1855
	b3Array<int>::GetByteCount(); // 33
	b3GetIdBytes(const b3IdPool* pool); // 1856
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1856
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1857
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1860
	b3Array<b3Body>::GetByteCount(); // 1861
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1861
	b3Array<b3SolverSet>::GetByteCount(); // 1862
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1862
	b3Array<b3Joint>::GetByteCount(); // 1863
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1863
	b3Array<b3Contact>::GetByteCount(); // 1864
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1864
	b3Array<b3Island>::GetByteCount(); // 1865
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1865
	b3Array<b3Shape>::GetByteCount(); // 1866
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1866
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1867
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1870
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1871
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1872
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1873
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1875
	b3Array<int>::GetByteCount(); // 1876
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1876
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1878
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1879
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1903
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1904
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1905
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1906
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1907
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1908
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1909
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1923
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1924
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1925
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1926
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1927
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1930
} /* size: 0, variables: 11, inline expansions: 57 (0 bytes) */

// <06BE778C> src/physics_world.cpp:1935
// variables: 10
// function calls: 2
void b3World_DumpShapeBounds(b3WorldId worldId, b3BodyType type)
{
	b3World* world; // 1938
	FILE* file; // 1944
	b3DynamicTree* tree; // 1950
	b3TreeNode* nodes; // 1951
	uint16_t requiredFlags; // 1953
	int capacity; // 1954
	{
		int i; // 1955
		{
			b3TreeNode* node; // 1957
			b3Vec3 a; // 1964
			b3Vec3 b; // 1965
			fprintf(FILE* __stream,
				const char* __fmt, ...);  // 1966
		}
	}
	b3OpenFile(const char* fileName); // 1944
} /* size: 0, variables: 6, inline expansions: 1 (0 bytes) */

// <06BE2BFB> src/physics_world.cpp:1972
// member variables: 4
// struct size: 40
struct WorldQueryContext {
	b3World * world; /* 0 8 */
	b3OverlapResultFcn * fcn; /* 8 8 */
	b3QueryFilter filter; /* 16 16 */
	void * userContext; /* 32 8 */
};

// <06BE7600> src/physics_world.cpp:1980
// variables: 8
// function calls: 2
bool TreeQueryCallback(int proxyId, uint64_t userData, void* context)
{
	int shapeId; // 1984
	WorldQueryContext* worldContext; // 1985
	b3World* world; // 1986
	b3Shape* shape; // 1988
	b3Filter shapeFilter; // 1990
	b3QueryFilter queryFilter; // 1991
	b3ShapeId id; // 1998
	bool result; // 1999
	b3Array<b3Shape>::Get(
		int index);  // 1988
	b3ShouldQueryCollide(const b3Filter* shapeFilter,
				const b3QueryFilter* queryFilter);  // 1993
} /* size: 0, variables: 8, inline expansions: 2 (0 bytes) */

// <06BE7486> src/physics_world.cpp:2003
// variables: 5
b3TreeStats b3World_OverlapAABB(b3WorldId worldId, b3AABB aabb, b3QueryFilter filter, b3OverlapResultFcn* fcn, void* context)
{
	b3TreeStats treeStats; // 2005
	b3World* world; // 2007
	WorldQueryContext worldContext; // 2015
	{
		int i; // 2017
		{
			b3TreeStats treeResult; // 2019
		}
	}
} /* size: 0, variables: 3 */

// <06BE2C50> src/physics_world.cpp:2029
// member variables: 5
// struct size: 56
struct WorldOverlapContext {
	b3World * world; /* 0 8 */
	b3OverlapResultFcn * fcn; /* 8 8 */
	b3QueryFilter filter; /* 16 16 */
	b3ShapeProxy proxy; /* 32 16 */
	void * userContext; /* 48 8 */
};

// <06BE720D> src/physics_world.cpp:2038
// variables: 11
// function calls: 3
bool b3TreeOverlapCallback(int proxyId, uint64_t userData, void* context)
{
	int shapeId; // 2042
	WorldOverlapContext* worldContext; // 2043
	b3World* world; // 2044
	b3Shape* shape; // 2046
	b3Filter shapeFilter; // 2048
	b3QueryFilter queryFilter; // 2049
	b3Body* body; // 2056
	b3Transform transform; // 2057
	bool overlapping; // 2059
	b3ShapeId id; // 2065
	bool result; // 2066
	b3Array<b3Shape>::Get(
		int index);  // 2046
	b3ShouldQueryCollide(const b3Filter* shapeFilter,
				const b3QueryFilter* queryFilter);  // 2051
	b3Array<b3Body>::Get(
		int index);  // 2056
} /* size: 0, variables: 11, inline expansions: 3 (162 bytes) */

// <06BE2CAF> src/physics_world.cpp:2098
// member variables: 5
// struct size: 72
struct WorldMoverContext {
	b3World * world; /* 0 8 */
	b3PlaneResultFcn * fcn; /* 8 8 */
	b3QueryFilter filter; /* 16 16 */
	b3Capsule mover; /* 32 28 */
	void * userContext; /* 64 8 */
};

// <06BE6D08> src/physics_world.cpp:2107
// variables: 11
// function calls: 3
bool TreeCollideCallback(int proxyId, uint64_t userData, void* context)
{
	int shapeId; // 2111
	WorldMoverContext* worldContext; // 2112
	b3World* world; // 2113
	b3Shape* shape; // 2115
	b3Filter shapeFilter; // 2117
	b3QueryFilter queryFilter; // 2118
	b3Body* body; // 2125
	b3Transform transform; // 2126
	b3PlaneResult buffer; // 2128
	int count; // 2129
	{
		b3ShapeId id; // 2133
	}
	b3Array<b3Shape>::Get(
		int index);  // 2115
	b3ShouldQueryCollide(const b3Filter* shapeFilter,
				const b3QueryFilter* queryFilter);  // 2120
	b3Array<b3Body>::Get(
		int index);  // 2125
} /* size: 0, variables: 10, inline expansions: 3 (0 bytes) */

// <06BE6AB4> src/physics_world.cpp:2142
// variables: 5
// function calls: 5
void b3World_CollideMover(b3WorldId worldId, const b3Capsule* mover, b3QueryFilter filter, b3PlaneResultFcn* fcn, void* context)
{
	b3World* world; // 2144
	b3Vec3 r; // 2150
	b3AABB aabb; // 2152
	WorldMoverContext worldContext; // 2156
	{
		int i; // 2160
	}
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 2154
	b3Min(b3Vec3 a,
		b3Vec3 b);  // 2153
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 2153
} /* size: 0, variables: 4, inline expansions: 5 (0 bytes) */

// <06BE2D14> src/physics_world.cpp:2166
// member variables: 5
// struct size: 48
struct WorldRayCastContext {
	b3World * world; /* 0 8 */
	b3CastResultFcn * fcn; /* 8 8 */
	b3QueryFilter filter; /* 16 16 */
	float fraction; /* 32 4 */
	void * userContext; /* 40 8 */
};

// <06BE671C> src/physics_world.cpp:2175
// variables: 15
// function calls: 4
float RayCastCallback(const b3RayCastInput* input, int proxyId, uint64_t userData, void* context)
{
	int shapeId; // 2179
	WorldRayCastContext* worldContext; // 2180
	b3World* world; // 2181
	b3Shape* shape; // 2183
	b3Filter shapeFilter; // 2184
	b3QueryFilter queryFilter; // 2185
	b3Body* body; // 2192
	b3Transform transform; // 2193
	b3CastOutput output; // 2194
	{
		b3ShapeId id; // 2200
		int materialIndex; // 2202
		uint64_t userMaterialId; // 2203
		int triangleIndex; // 2205
		int childIndex; // 2206
		float fraction; // 2208
		b3ClampInt(int a,
				int lower,
				int upper);  // 2202
	}
	b3Array<b3Shape>::Get(
		int index);  // 2183
	b3ShouldQueryCollide(const b3Filter* shapeFilter,
				const b3QueryFilter* queryFilter);  // 2187
	b3Array<b3Body>::Get(
		int index);  // 2192
} /* size: 0, variables: 9, inline expansions: 3 (166 bytes) */

// <06BE645A> src/physics_world.cpp:2265
// variable: 1
float b3RayCastClosestFcn(b3ShapeId shapeId, b3Vec3 point, b3Vec3 normal, float fraction, bool startSolid, uint64_t userMaterialId, int triangleIndex, int childIndex, void* context)
{
	b3RayResult* rayResult; // 2278
} /* size: 0, variables: 1 */

// <06BE6299> src/physics_world.cpp:2293
// variables: 6
b3RayResult b3World_CastRayClosest(b3WorldId worldId, b3Vec3 origin, b3Vec3 translation, b3QueryFilter filter)
{
	b3RayResult result; // 2295
	b3World* world; // 2297
	b3RayCastInput input; // 2306
	WorldRayCastContext worldContext; // 2307
	{
		int i; // 2309
		{
			b3TreeStats treeResult; // 2311
		}
	}
} /* size: 0, variables: 4 */

// <06BE5F28> src/physics_world.cpp:2327
// variables: 15
// function calls: 4
float b3ShapeCastCallback(const b3ShapeCastInput* input, int proxyId, uint64_t userData, void* context)
{
	int shapeId; // 2331
	WorldRayCastContext* worldContext; // 2332
	b3World* world; // 2333
	b3Shape* shape; // 2335
	b3Filter shapeFilter; // 2336
	b3QueryFilter queryFilter; // 2337
	b3Body* body; // 2344
	b3Transform transform; // 2345
	b3CastOutput output; // 2347
	{
		b3ShapeId id; // 2351
		int materialIndex; // 2352
		uint64_t userMaterialId; // 2353
		int triangleIndex; // 2355
		int childIndex; // 2356
		float fraction; // 2358
		b3ClampInt(int a,
				int lower,
				int upper);  // 2352
	}
	b3Array<b3Shape>::Get(
		int index);  // 2335
	b3ShouldQueryCollide(const b3Filter* shapeFilter,
				const b3QueryFilter* queryFilter);  // 2339
	b3Array<b3Body>::Get(
		int index);  // 2344
} /* size: 0, variables: 9, inline expansions: 3 (166 bytes) */

// <06BE2D79> src/physics_world.cpp:2416
// member variables: 3
// struct size: 32
struct WorldMoverCastContext {
	b3World * world; /* 0 8 */
	b3QueryFilter filter; /* 8 16 */
	float fraction; /* 24 4 */
};

// <06BE5AF5> src/physics_world.cpp:2423
// variables: 9
// function calls: 3
float MoverCastCallback(const b3ShapeCastInput* input, int proxyId, uint64_t userData, void* context)
{
	int shapeId; // 2427
	WorldMoverCastContext* worldContext; // 2428
	b3World* world; // 2429
	b3Shape* shape; // 2431
	b3Filter shapeFilter; // 2432
	b3QueryFilter queryFilter; // 2433
	b3Body* body; // 2440
	b3Transform transform; // 2441
	b3CastOutput output; // 2443
	b3Array<b3Shape>::Get(
		int index);  // 2431
	b3ShouldQueryCollide(const b3Filter* shapeFilter,
				const b3QueryFilter* queryFilter);  // 2435
	b3Array<b3Body>::Get(
		int index);  // 2440
} /* size: 0, variables: 9, inline expansions: 3 (0 bytes) */

// <06BE5996> src/physics_world.cpp:2454
// variables: 4
float b3World_CastMover(b3WorldId worldId, const b3Capsule* mover, b3Vec3 translation, b3QueryFilter filter)
{
	b3World* world; // 2458
	b3ShapeCastInput input; // 2464
	WorldMoverCastContext worldContext; // 2470
	{
		int i; // 2472
	}
} /* size: 0, variables: 3 */

// <06BE2DB8> src/physics_world.cpp:2521
// member variables: 5
// struct size: 32
struct ExplosionContext {
	b3World * world; /* 0 8 */
	b3Vec3 position; /* 8 12 */
	float radius; /* 20 4 */
	float falloff; /* 24 4 */
	float impulsePerArea; /* 28 4 */
};

// <06BE4E3F> src/physics_world.cpp:2530
// variables: 24
// function calls: 24
bool ExplosionCallback(int proxyId, uint64_t userData, void* context)
{
	int shapeId; // 2534
	ExplosionContext* explosionContext; // 2535
	b3World* world; // 2536
	b3Shape* shape; // 2538
	b3Body* body; // 2540
	b3Transform transform; // 2543
	b3DistanceInput input; // 2545
	b3SimplexCache cache; // 2552
	b3DistanceOutput output; // 2553
	float radius; // 2555
	float falloff; // 2556
	b3Vec3 closestPoint; // 2569
	b3Vec3 direction; // 2576
	float area; // 2586
	float scale; // 2587
	float magnitude; // 2593
	b3Vec3 impulse; // 2594
	int localIndex; // 2596
	b3SolverSet* set; // 2597
	b3BodyState* state; // 2598
	b3BodySim* bodySim; // 2599
	{
		b3Vec3 localCentroid; // 2572
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
				b3Vec3 v);  // 2573
	}
	b3Array<b3Shape>::Get(
		int index);  // 2538
	b3Array<b3Body>::Get(
		int index);  // 2540
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 2576
	b3LengthSquared(b3Vec3 a); // 2577
	b3ClampFloat(float a,
			float lower,
			float upper);  // 2590
	b3Array<b3SolverSet>::Get(
		int index);  // 2597
	b3MulSV(float s,
		b3Vec3 a);  // 2594
	b3Array<b3BodyState>::Get(
		int index);  // 2598
	b3Array<b3BodySim>::Get(
		int index);  // 2599
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 2601
	b3MulAdd(b3Vec3 a,
		float s,
		b3Vec3 b);  // 2600
	b3Cross(b3Vec3 a,
		b3Vec3 b);  // 2601
	b3MulMV(b3Matrix3 m,
		b3Vec3 a);  // 1026
	operator*(b3Matrix3 m,
			b3Vec3 v);  // 2601
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 978
	operator+=(b3Vec3& a,
			b3Vec3 b);  // 2601
	{
		float s; // 247
		b3Vec3 u; // 248
	}
	b3Normalize(b3Vec3 a); // 2579
} /* size: 0, variables: 21, inline expansions: 17 (0 bytes) */

// <06BE4B23> src/physics_world.cpp:2606
// variables: 10
// function calls: 4
void b3World_Explode(b3WorldId worldId, const b3ExplosionDef* explosionDef)
{
	uint64_t maskBits; // 2608
	b3Vec3 position; // 2609
	float radius; // 2610
	float falloff; // 2611
	float impulsePerArea; // 2612
	b3World* world; // 2619
	ExplosionContext explosionContext; // 2628
	float totalRadius; // 2630
	b3Vec3 r; // 2631
	b3AABB aabb; // 2632
	b3Sub(b3Vec3 a,
		b3Vec3 b);  // 1021
	operator-(b3Vec3 a,
			b3Vec3 b);  // 2632
	b3Add(b3Vec3 a,
		b3Vec3 b);  // 1016
	operator+(b3Vec3 a,
			b3Vec3 b);  // 2632
} /* size: 0, variables: 10, inline expansions: 4 (0 bytes) */

// <06BE4A9F> src/physics_world.cpp:2639
// variables: 2
void b3World_RebuildStaticTree(b3WorldId worldId)
{
	b3World* world; // 2641
	b3DynamicTree* staticTree; // 2647
} /* size: 0, variables: 2 */

// <06BE4A2F> src/physics_world.cpp:2651
// variable: 1
void b3World_EnableSpeculative(b3WorldId worldId, bool flag)
{
	b3World* world; // 2653
} /* size: 0, variables: 1 */

// <06BE49CC> src/physics_world.cpp:3199
void b3ValidateContacts(b3World* world)
{
} /* size: 0 */


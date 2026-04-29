
//
// src/broad_phase.cpp
//
//	referenced by: libengine2.so
//
//	functions: 14
//	structs: 3
//

// <06B2625C> src/broad_phase.cpp:26
// variables: 3
// function calls: 4
void b3CreateBroadPhase(b3BroadPhase* bp, const b3Capacity* capacity)
{
	int staticCapacity; // 44
	int kinematicCapacity; // 47
	int dynamicCapacity; // 50
	b3Array<int>::Create(
		int initialCapacity);  // 37
	b3AtomicStoreInt(b3AtomicInt* a,
			int value);  // 41
	b3MaxInt(int a,
		int b);  // 44
	b3MaxInt(int a,
		int b);  // 50
} /* size: 533, variables: 3, inline expansions: 4 (68 bytes) */

// <06B26161> src/broad_phase.cpp:54
// variable: 1
// function call: 1
void b3DestroyBroadPhase(b3BroadPhase* bp)
{
	{
		int i; // 56
	}
	b3Array<int>::Destroy(); // 62
} /* size: 130, inline expansions: 1 (45 bytes) */

// <06B26116> src/broad_phase.cpp:76
// variables: 3
void b3UnBufferMove(b3BroadPhase* bp, int proxyKey)
{
	bool found; // 78
	{
		int count; // 84
		{
			int i; // 85
		}
	}
} /* size: 0, variables: 1 */

// <06B25EF1> src/broad_phase.cpp:96
// variables: 3
// function calls: 2
int b3BroadPhase_CreateProxy(b3BroadPhase* bp, b3BodyType proxyType, b3AABB aabb, uint64_t categoryBits, int shapeIndex, bool forcePairCreation)
{
	int proxyId; // 100
	int proxyKey; // 101
	{
		int newCapacity; // 132
	}
	b3Array<int>::PushBack(
		const int& value);  // 90
	b3BufferMove(b3BroadPhase* bp,
			int queryProxy);  // 104
} /* size: 0, variables: 2, inline expansions: 2 (173 bytes) */

// <06B25D29> src/broad_phase.cpp:109
// variables: 4
// function calls: 2
void b3BroadPhase_DestroyProxy(b3BroadPhase* bp, int proxyKey)
{
	b3BodyType proxyType; // 114
	int proxyId; // 115
	{
		int count; // 84
		{
			int i; // 85
			b3Array<int>::RemoveSwap(
					int index);  // 89
		}
	}
	b3UnBufferMove(b3BroadPhase* bp,
			int proxyKey);  // 112
} /* size: 0, variables: 2, inline expansions: 1 (99 bytes) */

// <06B25A17> src/broad_phase.cpp:130
// variables: 3
// function calls: 2
void b3BroadPhase_EnlargeProxy(b3BroadPhase* bp, int proxyKey, b3AABB aabb)
{
	int typeIndex; // 133
	int proxyId; // 134
	{
		int newCapacity; // 132
	}
	b3Array<int>::PushBack(
		const int& value);  // 90
	b3BufferMove(b3BroadPhase* bp,
			int queryProxy);  // 139
} /* size: 0, variables: 2, inline expansions: 2 (165 bytes) */

// <06B1E8FF> src/broad_phase.cpp:142
// member variables: 5
// struct size: 32
struct b3MovePair {
	int shapeIndexA; /* 0 4 */
	int shapeIndexB; /* 4 4 */
	int childIndex; /* 8 4 */
	b3MovePair * next; /* 16 8 */
	bool heap; /* 24 1 */
};

// <06B1E8DC> src/broad_phase.cpp:151
// member variable: 1
// struct size: 8
struct b3MoveResult {
	b3MovePair * pairList; /* 0 8 */
};

// <06B244E1> src/broad_phase.cpp:156
// member variables: 8
// struct size: 64
struct b3QueryPairContext {
	b3World * world; /* 0 8 */
	b3MoveResult * moveResult; /* 8 8 */
	b3AABB aabb; /* 16 24 */
	b3BodyType queryTreeType; /* 40 4 */
	int queryProxyKey; /* 44 4 */
	int queryShapeIndex; /* 48 4 */
	int compoundProxyId; /* 52 4 */
	int compoundShapeIndex; /* 56 4 */
};

// <06B253EC> src/broad_phase.cpp:170
// variables: 27
// function calls: 8
bool b3PairQueryCallback(int proxyId, uint64_t userData, void* context)
{
	b3QueryPairContext* queryContext; // 172
	int shapeIndex; // 174
	b3World* world; // 181
	int childIndex; // 182
	b3BroadPhase* broadPhase; // 207
	int proxyKey; // 209
	int queryProxyKey; // 210
	b3BodyType treeType; // 215
	b3BodyType queryProxyType; // 216
	uint64_t pairKey; // 254
	int shapeIdA; // 262
	int shapeIdB; // 263
	b3Shape* shapeA; // 264
	b3Shape* shapeB; // 265
	int bodyIdA; // 266
	int bodyIdB; // 267
	b3Body* bodyA; // 287
	b3Body* bodyB; // 288
	int pairIndex; // 311
	b3MovePair* pair; // 313
	{
		b3Shape* shape; // 186
		b3Array<b3Shape>::Get(
			int index);  // 186
	}
	{
		bool moved; // 235
	}
	{
		bool moved; // 246
	}
	{
		b3CustomFilterFcn* customFilterFcn; // 297
		{
			b3ShapeId idA; // 300
			b3ShapeId idB; // 301
			bool shouldCollide; // 302
		}
	}
	b3ShapePairKey(int s1,
			int s2,
			int c);  // 254
	b3Array<b3Shape>::Get(
		int index);  // 264
	b3Array<b3Shape>::Get(
		int index);  // 265
	b3ShouldShapesCollide(b3Filter filterA,
				b3Filter filterB);  // 281
	b3Array<b3Body>::Get(
		int index);  // 287
	b3Array<b3Body>::Get(
		int index);  // 288
	b3AtomicFetchAddInt(b3AtomicInt* a,
				int increment);  // 311
} /* size: 0, variables: 20, inline expansions: 7 (557 bytes) */

// <06B25194> src/broad_phase.cpp:337
// variables: 10
// function calls: 2
void b3FindPairsTask(int startIndex, int endIndex, uint32_t threadIndex, void* context)
{
	b3World* world; // 343
	b3BroadPhase* bp; // 344
	b3QueryPairContext queryContext; // 346
	{
		int i; // 350
		{
			int proxyKey; // 356
			b3BodyType proxyType; // 363
			int proxyId; // 365
			const b3DynamicTree* baseTree; // 368
			b3AABB fatAABB; // 372
			bool requireAllBits; // 382
			b3DynamicTree_GetAABB(const b3DynamicTree* tree,
						int proxyId);  // 372
			b3DynamicTree_GetUserData(const b3DynamicTree* tree,
							int proxyId);  // 373
		}
	}
} /* size: 513, variables: 3 */

// <06B24D93> src/broad_phase.cpp:404
// variables: 14
// function calls: 4
void b3UpdateBroadPhasePairs(b3World* world)
{
	b3BroadPhase* bp; // 406
	int moveCount; // 408
	b3ArenaAllocator* alloc; // 418
	int minRange; // 432
	void* userPairTask; // 433
	{
		int i; // 447
		{
			b3MoveResult* result; // 449
			b3MovePair* pair; // 450
			{
				int shapeIdA; // 453
				int shapeIdB; // 454
				int childIndex; // 455
				b3Shape* shapeA; // 462
				b3Shape* shapeB; // 463
				{
					b3MovePair* temp; // 469
				}
				b3Array<b3Shape>::Get(
					int index);  // 463
				b3Array<b3Shape>::Get(
					int index);  // 462
			}
		}
	}
	b3AtomicStoreInt(b3AtomicInt* a,
			int value);  // 425
	b3Array<int>::Clear(); // 491
} /* size: 0, variables: 5, inline expansions: 2 (22 bytes) */

// <06B24C1B> src/broad_phase.cpp:506
// variables: 6
// function calls: 3
bool b3BroadPhase_TestOverlap(const b3BroadPhase* bp, int proxyKeyA, int proxyKeyB)
{
	int typeIndexA; // 508
	int proxyIdA; // 509
	int typeIndexB; // 510
	int proxyIdB; // 511
	b3AABB aabbA; // 513
	b3AABB aabbB; // 514
	b3DynamicTree_GetAABB(const b3DynamicTree* tree,
				int proxyId);  // 513
	b3DynamicTree_GetAABB(const b3DynamicTree* tree,
				int proxyId);  // 514
	b3AABB_Overlaps(b3AABB a,
			b3AABB b);  // 515
} /* size: 0, variables: 6, inline expansions: 3 (0 bytes) */

// <06B24BA8> src/broad_phase.cpp:518
void b3BroadPhase_RebuildTrees(b3BroadPhase* bp)
{
} /* size: 46 */

// <06B24AFD> src/broad_phase.cpp:524
// variables: 2
// function call: 1
int b3BroadPhase_GetShapeIndex(b3BroadPhase* bp, int proxyKey)
{
	int typeIndex; // 526
	int proxyId; // 527
	b3DynamicTree_GetUserData(const b3DynamicTree* tree,
					int proxyId);  // 529
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <06B24A94> src/broad_phase.cpp:532
void b3ValidateBroadphase(const b3BroadPhase* bp)
{
} /* size: 42 */

// <06B24A5D> src/broad_phase.cpp:540
void b3ValidateNoEnlarged(const b3BroadPhase* bp)
{
} /* size: 5 */


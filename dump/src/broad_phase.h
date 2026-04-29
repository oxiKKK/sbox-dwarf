
//
// src/broad_phase.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	struct: 1
//

// <06B07618> src/broad_phase.h:26
// member variables: 8
// struct size: 312
struct b3BroadPhase {
	b3DynamicTree trees[3]; /* 0 240 */
	b3HashSet moveSet; /* 240 16 */
	b3Array<int> moveArray; /* 256 16 */
	b3MoveResult * moveResults; /* 272 8 */
	b3MovePair * movePairs; /* 280 8 */
	int movePairCapacity; /* 288 4 */
	b3AtomicInt movePairIndex; /* 292 4 */
	b3HashSet pairSet; /* 296 16 */
};

// <06B0D4D8> src/broad_phase.h:63
void b3BroadPhase_MoveProxy(b3BroadPhase *, int, b3AABB)
{
} /* size: 0 */

// <06B264BF> src/broad_phase.h:84
// variable: 1
inline void b3BufferMove(b3BroadPhase* bp, int queryProxy)
{
	bool alreadyAdded; // 87
} /* size: 0, variables: 1 */


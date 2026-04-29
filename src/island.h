
//
// src/island.h
//
//	referenced by: libengine2.so
//
//	functions: 7
//	structs: 2
//

// <06B05F43> src/island.h:25
// member variables: 13
// struct size: 52
struct b3Island {
	int setIndex; /* 0 4 */
	int localIndex; /* 4 4 */
	int islandId; /* 8 4 */
	int headBody; /* 12 4 */
	int tailBody; /* 16 4 */
	int bodyCount; /* 20 4 */
	int headContact; /* 24 4 */
	int tailContact; /* 28 4 */
	int contactCount; /* 32 4 */
	int headJoint; /* 36 4 */
	int tailJoint; /* 40 4 */
	int jointCount; /* 44 4 */
	int constraintRemoveCount; /* 48 4 */
};

// <06B06019> src/island.h:55
// member variable: 1
// struct size: 4
struct b3IslandSim {
	int islandId; /* 0 4 */
};

// <06B0D7E0> src/island.h:60
b3Island* b3CreateIsland(b3World *, int)
{
} /* size: 0 */

// <06B0D6B6> src/island.h:61
void b3DestroyIsland(b3World *, int)
{
} /* size: 0 */

// <06B35DCB> src/island.h:67
void b3UnlinkContact(b3World *, b3Contact *)
{
} /* size: 0 */

// <06B0D3EB> src/island.h:70
void b3LinkJoint(b3World *, b3Joint *)
{
} /* size: 0 */

// <06B0D48A> src/island.h:73
void b3UnlinkJoint(b3World *, b3Joint *)
{
} /* size: 0 */

// <06B0D3B5> src/island.h:75
void b3SplitIsland(b3World *, int)
{
} /* size: 0 */

// <06B0D699> src/island.h:78
void b3ValidateIsland(b3World *, int)
{
} /* size: 0 */


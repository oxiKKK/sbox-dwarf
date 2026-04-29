
//
// src/solver_set.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//	struct: 1
//

// <06B08CA7> src/solver_set.h:25
// member variables: 6
// struct size: 88
struct b3SolverSet {
	b3Array<b3BodySim> bodySims; /* 0 16 */
	b3Array<b3BodyState> bodyStates; /* 16 16 */
	b3Array<b3JointSim> jointSims; /* 32 16 */
	b3Array<b3ContactSim> contactSims; /* 48 16 */
	b3Array<b3IslandSim> islandSims; /* 64 16 */
	int setIndex; /* 80 4 */
};

// <06B0D6F5> src/solver_set.h:51
void b3DestroySolverSet(b3World *, int)
{
} /* size: 0 */

// <06B0D7C3> src/solver_set.h:53
void b3WakeSolverSet(b3World *, int)
{
} /* size: 0 */

// <06B0D392> src/solver_set.h:54
void b3TrySleepIsland(b3World *, int)
{
} /* size: 0 */

// <06B8E68F> src/solver_set.h:58
void b3MergeSolverSets(b3World *, int, int)
{
} /* size: 0 */

// <06B0D43C> src/solver_set.h:60
void b3TransferBody(b3World *, b3SolverSet *, b3SolverSet *, b3Body *)
{
} /* size: 0 */

// <06B0D463> src/solver_set.h:61
void b3TransferJoint(b3World *, b3SolverSet *, b3SolverSet *, b3Joint *)
{
} /* size: 0 */



//
// src/constraint_graph.h
//
//	referenced by: libengine2.so
//
//	functions: 7
//	structs: 2
//

// <06B07E44> src/constraint_graph.h:28
// member variables: 6
// struct size: 88
struct b3GraphColor {
	b3BitSet bodySet; /* 0 16 */
	b3Array<b3ContactSim> contactSims; /* 16 16 */
	b3Array<b3JointSim> jointSims; /* 32 16 */
	b3ContactConstraint * overflowConstraints; /* 48 8 */
	b3ContactConstraintSIMD * simdConstraints[3]; /* 56 24 */
	int overflowManifoldCount; /* 80 4 */
};

// <06B06570> src/constraint_graph.h:54
// member variable: 1
// struct size: 2,112
struct b3ConstraintGraph {
	b3GraphColor colors[24]; /* 0 2112 */
};

// <06BE358D> src/constraint_graph.h:60
void b3CreateGraph(b3ConstraintGraph *, int)
{
} /* size: 0 */

// <06BE3495> src/constraint_graph.h:61
void b3DestroyGraph(b3ConstraintGraph *)
{
} /* size: 0 */

// <06BE328C> src/constraint_graph.h:63
void b3AddContactToGraph(b3World *, b3ContactSim *, b3Contact *)
{
} /* size: 0 */

// <06B35D9A> src/constraint_graph.h:64
void b3RemoveContactFromGraph(b3World *, int, int, int, int, bool)
{
} /* size: 0 */

// <06B8E6B7> src/constraint_graph.h:66
b3JointSim* b3CreateJointInGraph(b3World *, b3Joint *)
{
} /* size: 0 */

// <06C74F86> src/constraint_graph.h:67
void b3AddJointToGraph(b3World *, b3JointSim *, b3Joint *)
{
} /* size: 0 */

// <06B8E5C5> src/constraint_graph.h:68
void b3RemoveJointFromGraph(b3World *, int, int, int, int)
{
} /* size: 0 */


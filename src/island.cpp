
//
// src/island.cpp
//
//	referenced by: libengine2.so
//
//	functions: 6
//

// <06B813CF> src/island.cpp:82
// variables: 17
// function calls: 12
int b3MergeIslands(b3World* world, int islandIdA, int islandIdB)
{
	b3Island* islandA; // 101
	b3Island* islandB; // 102
	b3Island* big; // 105
	b3Island* small; // 106
	int bigId; // 118
	int bodyId; // 121
	int contactId; // 129
	int jointId; // 137
	b3Body* tailBody; // 147
	b3Body* headBody; // 152
	b3Array<b3Island>::Get(
		int index);  // 101
	b3Array<b3Island>::Get(
		int index);  // 102
	{
		b3Body* body; // 124
		b3Array<b3Body>::Get(
			int index);  // 124
	}
	{
		b3Contact* contact; // 132
		b3Array<b3Contact>::Get(
			int index);  // 132
	}
	{
		b3Joint* joint; // 140
		b3Array<b3Joint>::Get(
			int index);  // 140
	}
	b3Array<b3Body>::Get(
		int index);  // 147
	b3Array<b3Body>::Get(
		int index);  // 152
	{
		b3Contact* tailContact; // 174
		b3Contact* headContact; // 178
		b3Array<b3Contact>::Get(
			int index);  // 174
		b3Array<b3Contact>::Get(
			int index);  // 178
	}
	{
		b3Joint* tailJoint; // 200
		b3Joint* headJoint; // 204
		b3Array<b3Joint>::Get(
			int index);  // 200
		b3Array<b3Joint>::Get(
			int index);  // 204
	}
	b3MergeIslands(b3World* world,
			int islandIdA,
			int islandIdB);  // 82
} /* size: 0, variables: 10, inline expansions: 5 (2117 bytes) */

// <06B80BFA> src/island.cpp:82
// variables: 17
int b3MergeIslands(b3World* world, int islandIdA, int islandIdB)
{
	b3Island* islandA; // 101
	b3Island* islandB; // 102
	b3Island* big; // 105
	b3Island* small; // 106
	int bigId; // 118
	int bodyId; // 121
	int contactId; // 129
	int jointId; // 137
	b3Body* tailBody; // 147
	b3Body* headBody; // 152
	{
		b3Body* body; // 124
	}
	{
		b3Contact* contact; // 132
	}
	{
		b3Joint* joint; // 140
	}
	{
		b3Contact* tailContact; // 174
		b3Contact* headContact; // 178
	}
	{
		b3Joint* tailJoint; // 200
		b3Joint* headJoint; // 204
	}
} /* size: 0, variables: 10 */

// <06B80BAE> src/island.cpp:233
// variables: 2
void b3AddContactToIsland(b3World* world, int islandId, b3Contact* contact)
{
	b3Island* island; // 239
	{
		b3Contact* headContact; // 244
	}
} /* size: 0, variables: 1 */

// <06B806AB> src/island.cpp:261
// variables: 8
// function calls: 5
void b3LinkContact(b3World* world, b3Contact* contact)
{
	int bodyIdA; // 265
	int bodyIdB; // 266
	b3Body* bodyA; // 268
	b3Body* bodyB; // 269
	int islandIdA; // 286
	int islandIdB; // 287
	int finalIslandId; // 295
	b3Array<b3Body>::Get(
		int index);  // 268
	b3Array<b3Body>::Get(
		int index);  // 269
	b3Array<b3Island>::Get(
		int index);  // 239
	{
		b3Contact* headContact; // 244
		b3Array<b3Contact>::Get(
			int index);  // 244
	}
	b3AddContactToIsland(b3World* world,
				int islandId,
				b3Contact* contact);  // 298
} /* size: 0, variables: 7, inline expansions: 4 (554 bytes) */

// <06B803BF> src/island.cpp:345
// variables: 2
void b3AddJointToIsland(b3World* world, int islandId, b3Joint* joint)
{
	b3Island* island; // 351
	{
		b3Joint* headJoint; // 356
	}
} /* size: 0, variables: 1 */

// <06B7F47A> src/island.cpp:684
// variables: 2
void b3SplitIslandTask(int startIndex, int endIndex, uint32_t threadIndex, void* context)
{
	uint64_t ticks; // 692
	b3World* world; // 693
} /* size: 0, variables: 2 */


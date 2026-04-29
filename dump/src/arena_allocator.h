
//
// src/arena_allocator.h
//
//	referenced by: libengine2.so
//
//	functions: 7
//	structs: 2
//

// <06B07473> src/arena_allocator.h:9
// member variables: 4
// struct size: 24
struct b3ArenaEntry {
	char * data; /* 0 8 */
	const char * name; /* 8 8 */
	int size; /* 16 4 */
	bool usedMalloc; /* 20 1 */
};

// <06B074C9> src/arena_allocator.h:22
// member variables: 7
// struct size: 800
struct b3ArenaAllocator {
	char * data; /* 0 8 */
	int capacity; /* 8 4 */
	int index; /* 12 4 */
	int allocation; /* 16 4 */
	int maxAllocation; /* 20 4 */
	b3ArenaEntry entries[32]; /* 24 768 */
	int entryCount; /* 792 4 */
};

// <06BE35EF> src/arena_allocator.h:40
b3ArenaAllocator b3CreateArenaAllocator(int)
{
} /* size: 0 */

// <06BE3421> src/arena_allocator.h:41
void b3DestroyArenaAllocator(b3ArenaAllocator *)
{
} /* size: 0 */

// <06B246B4> src/arena_allocator.h:43
void* b3AllocateArenaItem(b3ArenaAllocator *, int, const char *)
{
} /* size: 0 */

// <06B24650> src/arena_allocator.h:44
void b3FreeArenaItem(b3ArenaAllocator *, void *)
{
} /* size: 0 */

// <06BE3366> src/arena_allocator.h:47
void b3GrowArena(b3ArenaAllocator *)
{
} /* size: 0 */

// <06BE337A> src/arena_allocator.h:50
int b3GetArenaAllocation(b3ArenaAllocator *)
{
} /* size: 0 */

// <06BE30DD> src/arena_allocator.h:51
int b3GetMaxArenaAllocation(b3ArenaAllocator *)
{
} /* size: 0 */


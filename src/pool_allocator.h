
//
// src/pool_allocator.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	structs: 2
//

// <06B07EC8> src/pool_allocator.h:15
// member variable: 1
// struct size: 8
struct b3PoolBlock {
	void * data; /* 0 8 */
};

// <06B07EE5> src/pool_allocator.h:20
// member variables: 7
// struct size: 200
struct b3PoolAllocator {
	b3PoolBlock blocks[20]; /* 0 160 */
	int blockCount; /* 160 4 */
	b3PoolItem * freeList; /* 168 8 */
	int itemSize; /* 176 4 */
	void * next; /* 184 8 */
	int remaining; /* 192 4 */
	int activeItems; /* 196 4 */
};

// <06BE35D7> src/pool_allocator.h:40
b3PoolAllocator b3CreatePool(int)
{
} /* size: 0 */

// <06BE3449> src/pool_allocator.h:41
void b3DestroyPool(b3PoolAllocator *)
{
} /* size: 0 */

// <06B35B8A> src/pool_allocator.h:42
void* b3AllocatePoolItem(b3PoolAllocator *)
{
} /* size: 0 */

// <06B35D29> src/pool_allocator.h:43
void b3FreePoolItem(b3PoolAllocator *, void *)
{
} /* size: 0 */


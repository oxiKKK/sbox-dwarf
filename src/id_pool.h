
//
// src/id_pool.h
//
//	referenced by: libengine2.so
//
//	functions: 5
//	struct: 1
//

// <06B05F17> src/id_pool.h:8
// member variables: 2
// struct size: 24
struct b3IdPool {
	b3Array<int> freeArray; /* 0 16 */
	int nextIndex; /* 16 4 */
};

// <06B0D84B> src/id_pool.h:17
int b3AllocId(b3IdPool *)
{
} /* size: 0 */

// <06B0D712> src/id_pool.h:18
void b3FreeId(b3IdPool *, int)
{
} /* size: 0 */

// <06BF0E49> src/id_pool.h:21
inline int b3GetIdCount(const b3IdPool* pool)
{
} /* size: 0 */

// <06BF0E26> src/id_pool.h:26
inline int b3GetIdCapacity(const b3IdPool* pool)
{
} /* size: 0 */

// <06BF0DFD> src/id_pool.h:31
inline int b3GetIdBytes(const b3IdPool* pool)
{
} /* size: 0 */


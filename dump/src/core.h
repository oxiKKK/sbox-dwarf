
//
// src/core.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//	structs: 2
//

// <06B05489> src/core.h:99
// member variable: 1
// struct size: 4
struct b3AtomicInt {
	int value; /* 0 4 */
};

// <06B47296> src/core.h:104
// member variable: 1
// struct size: 4
struct b3AtomicU32 {
	uint32_t value; /* 0 4 */
};

// <06B0D81A> src/core.h:132
void* b3Alloc(size_t)
{
} /* size: 0 */

// <06B0D801> src/core.h:134
void b3Free(void *, size_t)
{
} /* size: 0 */

// <06BE35C9> src/core.h:139
b3Mutex* b3CreateMutex(void)
{
} /* size: 0 */

// <06BE3435> src/core.h:140
void b3DestroyMutex(b3Mutex *)
{
} /* size: 0 */

// <06B35D42> src/core.h:141
void b3LockMutex(b3Mutex *)
{
} /* size: 0 */

// <06B35D15> src/core.h:142
void b3UnlockMutex(b3Mutex *)
{
} /* size: 0 */


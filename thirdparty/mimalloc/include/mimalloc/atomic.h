
//
// thirdparty/mimalloc/include/mimalloc/atomic.h
//
//	referenced by: libtier0.so
//
//	functions: 7
//	structs: 2
//

// <0033B52B> ../thirdparty/mimalloc/include/mimalloc/atomic.h:135
inline int64_t mi_atomic_addi64_relaxed(volatile int64_t* p, int64_t add)
{
} /* size: 0 */

// <0033B4F5> ../thirdparty/mimalloc/include/mimalloc/atomic.h:138
// variable: 1
inline void mi_atomic_void_addi64_relaxed(volatile int64_t* p, volatile const int64_t* padd)
{
	const int64_t  add; // 139
} /* size: 0, variables: 1 */

// <0033B4C1> ../thirdparty/mimalloc/include/mimalloc/atomic.h:144
// variable: 1
inline void mi_atomic_maxi64_relaxed(volatile int64_t* p, int64_t x)
{
	int64_t current; // 145
} /* size: 0, variables: 1 */

// <002C36D8> ../thirdparty/mimalloc/include/mimalloc/atomic.h:396
// member variable: 1
// struct size: 40
struct mi_lock_s {
	pthread_mutex_t mutex; /* 0 40 */
};

// <0033B498> ../thirdparty/mimalloc/include/mimalloc/atomic.h:405
// variable: 1
inline void mi_lock_acquire(mi_lock_t* lock)
{
	const int  err; // 406
} /* size: 0, variables: 1 */

// <0033B47C> ../thirdparty/mimalloc/include/mimalloc/atomic.h:411
inline void mi_lock_release(mi_lock_t* lock)
{
} /* size: 0 */

// <0033B453> ../thirdparty/mimalloc/include/mimalloc/atomic.h:414
// variable: 1
inline void mi_lock_init(mi_lock_t* lock)
{
	const pthread_mutex_t  mutex; // 417
} /* size: 0, variables: 1 */

// <0033B431> ../thirdparty/mimalloc/include/mimalloc/atomic.h:420
inline void mi_lock_done(mi_lock_t* lock)
{
} /* size: 0 */

// <002C3704> ../thirdparty/mimalloc/include/mimalloc/atomic.h:493
// member variables: 2
// struct size: 48
struct mi_atomic_once_s {
	atomic<long unsigned int> tid __attribute__((__aligned__(8))); /* 0 8 */
	mi_lock_t lock; /* 8 40 */
} __attribute__((__aligned__(8)));


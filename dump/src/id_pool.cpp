
//
// src/id_pool.cpp
//
//	referenced by: libengine2.so
//
//	functions: 3
//

// <06B73FE6> src/id_pool.cpp:6
// variable: 1
// function calls: 2
b3IdPool b3CreateIdPool(void)
{
	b3IdPool pool; // 8
	b3Array<int>::Reserve(
		int newCapacity);  // 27
	b3Array<int>::Create(
		int initialCapacity);  // 9
} /* size: 69, variables: 1, inline expansions: 2 (64 bytes) */

// <06B73F77> src/id_pool.cpp:13
// function call: 1
void b3DestroyIdPool(b3IdPool* pool)
{
	b3Array<int>::Destroy(); // 15
} /* size: 61, inline expansions: 1 (16 bytes) */

// <06B73CE5> src/id_pool.cpp:67
void b3ValidateFreeId(const b3IdPool* pool, int id)
{
} /* size: 0 */


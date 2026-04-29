
//
// src/table.h
//
//	referenced by: libengine2.so
//
//	functions: 8
//	structs: 2
//

// <06B075AB> src/table.h:10
// member variables: 2
// struct size: 16
struct b3SetItem {
	uint64_t key; /* 0 8 */
	uint32_t hash; /* 8 4 */
};

// <06B075D7> src/table.h:16
// member variables: 3
// struct size: 16
struct b3HashSet {
	b3SetItem * items; /* 0 8 */
	uint32_t capacity; /* 8 4 */
	uint32_t count; /* 12 4 */
};

// <06B3941C> src/table.h:26
inline uint64_t b3ShapePairKey(int s1, int s2, int c)
{
} /* size: 0 */

// <06B2482F> src/table.h:39
b3HashSet b3CreateSet(int32_t)
{
} /* size: 0 */

// <06B24798> src/table.h:40
void b3DestroySet(b3HashSet *)
{
} /* size: 0 */

// <06B2466F> src/table.h:42
void b3ClearSet(b3HashSet *)
{
} /* size: 0 */

// <06B2474F> src/table.h:45
bool b3AddKey(b3HashSet *, uint64_t)
{
} /* size: 0 */

// <06B24714> src/table.h:48
bool b3RemoveKey(b3HashSet *, uint64_t)
{
} /* size: 0 */

// <06B245D8> src/table.h:50
bool b3ContainsKey(const b3HashSet *, uint64_t)
{
} /* size: 0 */

// <06BE3094> src/table.h:52
int b3GetHashSetBytes(b3HashSet *)
{
} /* size: 0 */


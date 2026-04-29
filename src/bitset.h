
//
// src/bitset.h
//
//	referenced by: libengine2.so
//
//	functions: 8
//	struct: 1
//

// <06B0755E> src/bitset.h:12
// member variables: 3
// struct size: 16
struct b3BitSet {
	uint64_t * bits; /* 0 8 */
	uint32_t blockCapacity; /* 8 4 */
	uint32_t blockCount; /* 12 4 */
};

// <06BE3546> src/bitset.h:25
b3BitSet b3CreateBitSet(uint32_t)
{
} /* size: 0 */

// <06BE34E9> src/bitset.h:26
void b3DestroyBitSet(b3BitSet *)
{
} /* size: 0 */

// <06BE332B> src/bitset.h:27
void b3SetBitCountAndClear(b3BitSet *, uint32_t)
{
} /* size: 0 */

// <06C68A0F> src/bitset.h:36
// variable: 1
inline void b3SetBit(b3BitSet* bitSet, uint32_t bitIndex)
{
	uint32_t blockIndex; // 38
} /* size: 0, variables: 1 */

// <06D05361> src/bitset.h:43
// variable: 1
inline void b3SetBitGrow(b3BitSet* bitSet, uint32_t bitIndex)
{
	uint32_t blockIndex; // 45
} /* size: 0, variables: 1 */

// <06D0532F> src/bitset.h:53
// variable: 1
inline void b3ClearBit(b3BitSet* bitSet, uint32_t bitIndex)
{
	uint32_t blockIndex; // 55
} /* size: 0, variables: 1 */

// <06D052F3> src/bitset.h:63
// variable: 1
inline bool b3GetBit(const b3BitSet* bitSet, uint32_t bitIndex)
{
	uint32_t blockIndex; // 65
} /* size: 0, variables: 1 */

// <06BF13E1> src/bitset.h:73
inline int b3GetBitSetBytes(b3BitSet* bitSet)
{
} /* size: 0 */


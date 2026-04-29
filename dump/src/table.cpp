
//
// src/table.cpp
//
//	referenced by: libengine2.so
//
//	functions: 5
//

// <06CA0B18> src/table.cpp:62
// variable: 1
inline uint32_t b3KeyHash(uint64_t key)
{
	uint64_t h; // 64
} /* size: 0, variables: 1 */

// <06CA0AB8> src/table.cpp:74
// variables: 3
int32_t b3FindSlot(const b3HashSet* set, uint64_t key, uint32_t hash)
{
	uint32_t capacity; // 76
	int32_t index; // 77
	const b3SetItem* items; // 78
} /* size: 0, variables: 3 */

// <06CA09B8> src/table.cpp:90
// variables: 2
// function call: 1
void b3AddKeyHaveCapacity(b3HashSet* set, uint64_t key, uint32_t hash)
{
	int32_t index; // 92
	b3SetItem* items; // 93
	b3FindSlot(const b3HashSet* set,
			uint64_t key,
			uint32_t hash);  // 92
} /* size: 0, variables: 2, inline expansions: 1 (47 bytes) */

// <06CA0960> src/table.cpp:101
// variables: 5
void b3GrowTable(b3HashSet* set)
{
	uint32_t oldCount; // 103
	uint32_t oldCapacity; // 106
	b3SetItem* oldItems; // 107
	{
		uint32_t i; // 116
		{
			b3SetItem* item; // 118
		}
	}
} /* size: 0, variables: 3 */

// <06CA0285> src/table.cpp:238
// variables: 3
// function call: 1
int b3CountSetBits(b3BitSet* bitSet)
{
	int popCount; // 240
	uint32_t blockCount; // 241
	{
		uint32_t i; // 242
		b3PopCount64(uint64_t block); // 244
	}
} /* size: 0, variables: 2 */


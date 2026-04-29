
//
// public/profile/stackstats_memory.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libtier0.so
//
//	struct: 1
//

// <066EC750> ../public/profile/stackstats_memory.h:116
// member variables: 9
// struct size: 128
struct MemStdInfo_t {
	/* ../public/profile/stackstats_memory.h:158 */
	enum {
		SIZE_BUCKET_16 = 0,
		SIZE_BUCKET_32 = 1,
		SIZE_BUCKET_64 = 2,
		SIZE_BUCKET_128 = 3,
		SIZE_BUCKET_256 = 4,
		SIZE_BUCKET_512 = 5,
		SIZE_BUCKET_1024 = 6,
		SIZE_BUCKET_2048 = 7,
		NUM_SIZE_BUCKETS = 8,
	};
	size_t m_nCurrentSize; /* 0 8 */
	size_t m_nCurrentCount; /* 8 8 */
	uint64 m_nTotalSize; /* 16 8 */
	uint64 m_nTotalCount; /* 24 8 */
	size_t m_nMaxSingleAllocation; /* 32 8 */
	size_t m_nMaxConcurrentAllocations; /* 40 8 */
	size_t m_nCurrentWastedBytes; /* 48 8 */
	size_t m_nCurrentThatFitInAPointer; /* 56 8 */
	size_t m_nCurrentCount_SmallBuckets[8]; /* 64 64 */
};


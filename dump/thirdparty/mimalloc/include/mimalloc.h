
//
// thirdparty/mimalloc/include/mimalloc.h
//
//	referenced by: libtier0.so
//
//	struct: 1
//

// <002C2E1B> ../thirdparty/mimalloc/include/mimalloc.h:299
// member variables: 7
// struct size: 56
struct mi_heap_area_s {
	void * blocks; /* 0 8 */
	size_t reserved; /* 8 8 */
	size_t committed; /* 16 8 */
	size_t used; /* 24 8 */
	size_t block_size; /* 32 8 */
	size_t full_block_size; /* 40 8 */
	void * reserved1; /* 48 8 */
};


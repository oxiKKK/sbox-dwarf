
//
// lib/lz4.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	structs: 2
//	unions: 2
//

// <057A6CF0> lib/lz4.h:721
// member variables: 6
// struct size: 16,416
struct LZ4_stream_t_internal {
	LZ4_u32 hashTable[4096]; /* 0 16384 */
	const LZ4_byte * dictionary; /* 16384 8 */
	const class LZ4_stream_t_internal * dictCtx; /* 16392 8 */
	LZ4_u32 currentOffset; /* 16400 4 */
	LZ4_u32 tableType; /* 16404 4 */
	LZ4_u32 dictSize; /* 16408 4 */
};

// <057A6BB9> lib/lz4.h:732
union LZ4_stream_u {
	char minStateSize[16416]; /* 0 16416 */
	LZ4_stream_t_internal internal_donotuse; /* 0 16416 */
};

// <057A6D9D> lib/lz4.h:760
// member variables: 4
// struct size: 32
typedef struct {
	const LZ4_byte * externalDict; /* 0 8 */
	const LZ4_byte * prefixEnd; /* 8 8 */
	size_t extDictSize; /* 16 8 */
	size_t prefixSize; /* 24 8 */
} LZ4_streamDecode_t_internal;

// <008384AB> lib/lz4.h:768
union LZ4_streamDecode_u {
	char minStateSize[32]; /* 0 32 */
	LZ4_streamDecode_t_internal internal_donotuse; /* 0 32 */
};


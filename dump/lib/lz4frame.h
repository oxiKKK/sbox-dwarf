
//
// lib/lz4frame.h
//
//	referenced by: libengine2.so
//
//	structs: 5
//

// <057DBAAB> lib/lz4frame.h:176
// member variables: 7
// struct size: 32
typedef struct {
	LZ4F_blockSizeID_t blockSizeID; /* 0 4 */
	LZ4F_blockMode_t blockMode; /* 4 4 */
	LZ4F_contentChecksum_t contentChecksumFlag; /* 8 4 */
	LZ4F_frameType_t frameType; /* 12 4 */
	long long unsigned int contentSize; /* 16 8 */
	unsigned int dictID; /* 24 4 */
	LZ4F_blockChecksum_t blockChecksumFlag; /* 28 4 */
} LZ4F_frameInfo_t;

// <057DBB35> lib/lz4frame.h:193
// member variables: 5
// struct size: 56
typedef struct {
	LZ4F_frameInfo_t frameInfo; /* 0 32 */
	int compressionLevel; /* 32 4 */
	unsigned int autoFlush; /* 36 4 */
	unsigned int favorDecSpeed; /* 40 4 */
	unsigned int reserved[3]; /* 44 12 */
} LZ4F_preferences_t;

// <057DBCEE> lib/lz4frame.h:250
// member variables: 2
// struct size: 16
typedef struct {
	unsigned int stableSrc; /* 0 4 */
	unsigned int reserved[3]; /* 4 12 */
} LZ4F_compressOptions_t;

// <057DBEA1> lib/lz4frame.h:375
// member variables: 4
// struct size: 16
typedef struct {
	unsigned int stableDst; /* 0 4 */
	unsigned int skipChecksums; /* 4 4 */
	unsigned int reserved1; /* 8 4 */
	unsigned int reserved0; /* 12 4 */
} LZ4F_decompressOptions_t;

// <057DC07E> lib/lz4frame.h:745
// member variables: 4
// struct size: 32
typedef struct {
	LZ4F_AllocFunction customAlloc; /* 0 8 */
	LZ4F_CallocFunction customCalloc; /* 8 8 */
	LZ4F_FreeFunction customFree; /* 16 8 */
	void * opaqueState; /* 24 8 */
} LZ4F_CustomMem;


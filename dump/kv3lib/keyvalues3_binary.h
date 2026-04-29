
//
// kv3lib/keyvalues3_binary.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 6
//	structs: 2
//

// <0563E102> kv3lib/keyvalues3_binary.h:53
// member variables: 4
// struct size: 16
struct KeyValues3BinaryHeaderV1_t {
	uint32 nFlags; /* 0 4 */
	uint32 n1ByteValues; /* 4 4 */
	uint32 n4ByteValues; /* 8 4 */
	uint32 n8ByteValues; /* 12 4 */
};

// <0565EF5B> kv3lib/keyvalues3_binary.h:64
// member variables: 13
// struct size: 44
struct KeyValues3BinaryHeaderV2_t {
	uint32 nFlags; /* 0 4 */
	uint16 nDictionaryId; /* 4 2 */
	uint16 nFrameSize; /* 6 2 */
	uint32 n1ByteValues; /* 8 4 */
	uint32 n4ByteValues; /* 12 4 */
	uint32 n8ByteValues; /* 16 4 */
	uint32 nControlBytes; /* 20 4 */
	uint16 nTables; /* 24 2 */
	uint16 nArrays; /* 26 2 */
	uint32 nDataSizeBytes; /* 28 4 */
	uint32 nDataSizeCompressedBytes; /* 32 4 */
	uint32 nBinaryBlobs; /* 36 4 */
	uint32 nBinaryBlobBytes; /* 40 4 */
};

// <05544526> kv3lib/keyvalues3_binary.h:131
bool LooksLikeKV3BinaryV0Data(const void *, int, KV3ID_t *)
{
} /* size: 0 */

// <055444D0> kv3lib/keyvalues3_binary.h:132
bool LooksLikeKV3BinaryV1Data(const void *, int, KV3ID_t *)
{
} /* size: 0 */

// <0554447A> kv3lib/keyvalues3_binary.h:133
bool LooksLikeKV3BinaryV2Data(const void *, int, KV3ID_t *)
{
} /* size: 0 */

// <055444F6> kv3lib/keyvalues3_binary.h:136
bool LoadKV3BinaryV0(KeyValues3 *, CUtlString *, CUtlBuffer *, const KV3ID_t &, const char *)
{
} /* size: 0 */

// <055444A0> kv3lib/keyvalues3_binary.h:137
bool LoadKV3BinaryV1(KeyValues3 *, CUtlString *, CUtlBuffer *, const KV3ID_t &, const char *)
{
} /* size: 0 */

// <0554444A> kv3lib/keyvalues3_binary.h:138
bool LoadKV3BinaryV2(KeyValues3 *, CUtlString *, CUtlBuffer *, const KV3ID_t &, const char *)
{
} /* size: 0 */


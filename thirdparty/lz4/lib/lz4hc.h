
//
// thirdparty/lz4/lib/lz4hc.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 5
//	struct: 1
//	union: 1
//

// <00442A4B> ../thirdparty/lz4/lib/lz4hc.h:66
int LZ4_compress_HC(const char *, char *, int, int, int)
{
} /* size: 0 */

// <0568AC2C> ../thirdparty/lz4/lib/lz4hc.h:109
LZ4_streamHC_t* LZ4_createStreamHC(void)
{
} /* size: 0 */

// <0568ABC8> ../thirdparty/lz4/lib/lz4hc.h:110
int LZ4_freeStreamHC(LZ4_streamHC_t *)
{
} /* size: 0 */

// <0568AC12> ../thirdparty/lz4/lib/lz4hc.h:157
void LZ4_resetStreamHC_fast(LZ4_streamHC_t *, int)
{
} /* size: 0 */

// <0568ABE6> ../thirdparty/lz4/lib/lz4hc.h:160
int LZ4_compress_HC_continue(LZ4_streamHC_t *, const char *, char *, int, int)
{
} /* size: 0 */

// <0567F10F> ../thirdparty/lz4/lib/lz4hc.h:242
// member variables: 12
// struct size: 262,192
struct LZ4HC_CCtx_internal {
	LZ4_u32 hashTable[32768]; /* 0 131072 */
	LZ4_u16 chainTable[65536]; /* 131072 131072 */
	const LZ4_byte * end; /* 262144 8 */
	const LZ4_byte * prefixStart; /* 262152 8 */
	const LZ4_byte * dictStart; /* 262160 8 */
	LZ4_u32 dictLimit; /* 262168 4 */
	LZ4_u32 lowLimit; /* 262172 4 */
	LZ4_u32 nextToUpdate; /* 262176 4 */
	short int compressionLevel; /* 262180 2 */
	LZ4_i8 favorDecSpeed; /* 262182 1 */
	LZ4_i8 dirty; /* 262183 1 */
	const class LZ4HC_CCtx_internal * dictCtx; /* 262184 8 */
};

// <0567F0D6> ../thirdparty/lz4/lib/lz4hc.h:260
union LZ4_streamHC_u {
	char minStateSize[262200]; /* 0 262200 */
	LZ4HC_CCtx_internal internal_donotuse; /* 0 262192 */
};


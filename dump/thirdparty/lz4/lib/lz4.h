
//
// thirdparty/lz4/lib/lz4.h
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
//	functions: 4
//	struct: 1
//	union: 1
//

// <02995AF0> ../thirdparty/lz4/lib/lz4.h:208
int LZ4_decompress_safe(const char *, char *, int, int)
{
} /* size: 0 */

// <02A025AA> ../thirdparty/lz4/lib/lz4.h:226
int LZ4_compressBound(int)
{
} /* size: 0 */

// <05665BE2> ../thirdparty/lz4/lib/lz4.h:492
int LZ4_decoderRingBufferSize(int)
{
} /* size: 0 */

// <05665B97> ../thirdparty/lz4/lib/lz4.h:534
int LZ4_decompress_safe_continue(LZ4_streamDecode_t *, const char *, char *, int, int)
{
} /* size: 0 */

// <0565F10B> ../thirdparty/lz4/lib/lz4.h:760
// member variables: 4
// struct size: 32
typedef struct {
	const LZ4_byte * externalDict; /* 0 8 */
	const LZ4_byte * prefixEnd; /* 8 8 */
	size_t extDictSize; /* 16 8 */
	size_t prefixSize; /* 24 8 */
} LZ4_streamDecode_t_internal;

// <0565F0C9> ../thirdparty/lz4/lib/lz4.h:768
union LZ4_streamDecode_u {
	char minStateSize[32]; /* 0 32 */
	LZ4_streamDecode_t_internal internal_donotuse; /* 0 32 */
};


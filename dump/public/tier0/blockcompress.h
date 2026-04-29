
//
// public/tier0/blockcompress.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//
//	function: 1
//	class: 1
//

// <0561ACAF> ../public/tier0/blockcompress.h:14
// member functions: 4
// class size: 1
class CBlockCompress {
	/* ../public/tier0/blockcompress.h:22 */
	uint32 FastCompress(const uint8* , uint32, uint8* , uint32);
	/* ../public/tier0/blockcompress.h:25 */
	uint32 GetDecompressedSize(const uint8* , uint32);
	/* ../public/tier0/blockcompress.h:30 */
	bool IsStoredUncompressed(const uint8* , uint32);
	/* ../public/tier0/blockcompress.h:35 */
	uint32 FastDecompress(const uint8* , uint32, uint8* , uint32);
};

// <05627CC2> ../public/tier0/blockcompress.h:38
// variable: 1
inline void GetDecompressedSize(const uint8* pSrcBuf, uint32 nSrcBufSize)
{
	uint nHeaderBits; // 42
} /* size: 0, variables: 1 */


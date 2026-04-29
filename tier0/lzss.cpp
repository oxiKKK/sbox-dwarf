
//
// tier0/lzss.cpp
//
//	referenced by: libtier0.so
//
//	functions: 7
//

// <002965A5> tier0/lzss.cpp:21
// variable: 1
void CLZSS::IsCompressed(unsigned char* pInput)
{
	lzss_header_t* pHeader; // 23
} /* size: 21, variables: 1 */

// <00296552> tier0/lzss.cpp:37
// variable: 1
void CLZSS::GetActualSize(unsigned char* pInput)
{
	lzss_header_t* pHeader; // 39
} /* size: 28, variables: 1 */

// <002964D7> tier0/lzss.cpp:49
// variables: 3
void CLZSS::BuildHash(unsigned char* pData)
{
	lzss_list_t* pList; // 51
	lzss_node_t* pTarget; // 52
	int targetindex; // 54
} /* size: 128, variables: 3 */

// <00296129> tier0/lzss.cpp:86
// variables: 18
// function calls: 4
void CLZSS::CompressNoAlloc(unsigned char* pInput, int inputLength, unsigned char* pOutputBuf, unsigned int* pOutputSize, bool bFast)
{
	unsigned char* pStart; // 100
	unsigned char* pEnd; // 102
	lzss_header_t* pHeader; // 105
	unsigned char* pOutput; // 109
	unsigned char* pLookAhead; // 110
	unsigned char* pWindow; // 111
	unsigned char* pEncodedPosition; // 112
	unsigned char* pCmdByte; // 113
	int putCmdByte; // 114
	const char   __FUNCTION__; // 41798
	{
		int encodedLength; // 131
		int lookAheadLength; // 132
		lzss_node_t* pHash; // 134
		int nMaxProbes; // 135
		{
			int matchLength; // 138
			int length; // 139
		}
		{
			int i; // 169
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 186
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 95
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 97
} /* size: 0, variables: 10, inline expansions: 4 (46 bytes) */

// <00296010> tier0/lzss.cpp:215
// variables: 2
void CLZSS::Compress(unsigned char* pInput, int inputLength, unsigned int* pOutputSize, bool bFast)
{
	unsigned char* pStart; // 217
	unsigned char* pFinal; // 218
} /* size: 108, variables: 2 */

// <00295E53> tier0/lzss.cpp:293
// variables: 10
void CLZSS::SafeUncompress(unsigned char* pInput, unsigned char* pOutput, unsigned int unBufSize)
{
	unsigned int totalBytes; // 295
	int cmdByte; // 296
	int getCmdByte; // 297
	unsigned int actualSize; // 299
	const char   __FUNCTION__; // 40575
	{
		int position; // 323
		int count; // 325
		unsigned char* pSource; // 330
		{
			int i; // 337
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 357
	}
} /* size: 0, variables: 5 */

// <00295CB7> tier0/lzss.cpp:368
// variables: 10
void CLZSS::Uncompress(unsigned char* pInput, unsigned char* pOutput)
{
	unsigned int totalBytes; // 370
	int cmdByte; // 371
	int getCmdByte; // 372
	unsigned int actualSize; // 374
	const char   __FUNCTION__; // 40130
	{
		int position; // 393
		int count; // 395
		unsigned char* pSource; // 400
		{
			int i; // 401
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 418
	}
} /* size: 0, variables: 5 */


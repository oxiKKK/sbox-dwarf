
//
// tier0/circularbuffer.cpp
//
//	referenced by: libtier0.so
//
//	functions: 12
//

// <000950C5> tier0/circularbuffer.cpp:14
// function call: 1
void CCircularBuffer::~CCircularBuffer()
{
	CCircularBuffer::FreeData(); // 16
} /* size: 25, inline expansions: 1 (20 bytes) */

// <000950A9> tier0/circularbuffer.cpp:14
void CCircularBuffer::~CCircularBuffer()
{
} /* size: 0 */

// <0009505B> tier0/circularbuffer.cpp:19
void CCircularBuffer::CCircularBuffer()
{
} /* size: 19 */

// <00094FCF> tier0/circularbuffer.cpp:25
void CCircularBuffer::CCircularBuffer(uint nSize)
{
} /* size: 27 */

// <0009525A> tier0/circularbuffer.cpp:32
void CCircularBuffer::FreeData()
{
} /* size: 0 */

// <00094D79> tier0/circularbuffer.cpp:41
// variables: 9
void CCircularBuffer::AssertValid()
{
	const char   __FUNCTION__; // 36346
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 44
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 45
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 46
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 47
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 48
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 53
	}
	{
		int testCount; // 57
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 63
		}
	}
} /* size: 0, variables: 1 */

// <00094CEC> tier0/circularbuffer.cpp:68
// function call: 1
void CCircularBuffer::Resize(int nSize)
{
	CCircularBuffer::FreeData(); // 70
} /* size: 96, inline expansions: 1 (37 bytes) */

// <00094CA0> tier0/circularbuffer.cpp:85
void CCircularBuffer::Flush()
{
} /* size: 41 */

// <000949FF> tier0/circularbuffer.cpp:104
// variables: 3
// function calls: 6
void CCircularBuffer::Peek(void* pDest, int nCount)
{
	{
		char* pchDest; // 123
		int nCount1; // 124
		int nCount2; // 128
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 125
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 129
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 134
} /* size: 182, inline expansions: 2 (56 bytes) */

// <000949A6> tier0/circularbuffer.cpp:149
void CCircularBuffer::Advance(int nCount)
{
} /* size: 81 */

// <00094857> tier0/circularbuffer.cpp:191
// variables: 5
void CCircularBuffer::Read(void* pchDestIn, int nCount)
{
	int nPeeked; // 193
	int nRead; // 194
	char* pchDest; // 196
	const char   __FUNCTION__; // 34837
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 204
	}
} /* size: 0, variables: 4 */

// <00094580> tier0/circularbuffer.cpp:225
// variables: 6
// function calls: 6
void CCircularBuffer::Write(const void* pData, int nBytesRequested)
{
	int nBytesToWrite; // 228
	const char* pDataToWrite; // 229
	{
		int from; // 233
		int to; // 234
		int nBytesChunk; // 241
		{
			int nBytesToEnd; // 254
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 255
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 256
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 250
	}
} /* size: 256, variables: 2 */


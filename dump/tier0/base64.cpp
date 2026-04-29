
//
// tier0/base64.cpp
//
//	referenced by: libtier0.so
//
//	functions: 3
//

// <0003315B> tier0/base64.cpp:30
// variables: 8
unsigned int base64_encode(char* pDst, unsigned int nDstLength, const byte* pSrc, unsigned int nSrcLength)
{
	unsigned int x; // 32
	unsigned int nOutLength; // 33
	int n; // 34
	byte triple; // 35
	byte quad; // 35
	{
		int i; // 44
	}
	{
		int i; // 49
	}
	{
		int i; // 69
	}
} /* size: 427, variables: 5 */

// <0003313F> tier0/base64.cpp:85
inline bool is_base64(unsigned char c)
{
} /* size: 0 */

// <00032F95> tier0/base64.cpp:90
// variables: 7
// function calls: 2
unsigned int base64_decode(byte* pDst, unsigned int nDstLength, const char* pSrc, unsigned int nSrcLength)
{
	unsigned int nOutLength; // 92
	byte quad; // 93
	byte triple; // 94
	int i; // 96
	{
		int j; // 108
	}
	{
		int j; // 121
	}
	{
		int j; // 131
	}
	V_isalnum(char c); // 87
	is_base64(unsigned char c); // 97
} /* size: 532, variables: 4, inline expansions: 2 (54 bytes) */


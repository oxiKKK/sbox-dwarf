
//
// tier0/checksum_md5.cpp
//
//	referenced by: libtier0.so
//
//	functions: 8
//

// <00063F50> tier0/checksum_md5.cpp:31
// variables: 4
// function calls: 16
void MD5Transform(unsigned int* buf, const unsigned int* in)
{
	unsigned int a; // 33
	unsigned int b; // 33
	unsigned int c; // 33
	unsigned int d; // 33
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 40
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 41
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 42
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 43
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 45
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 47
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 50
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 44
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 49
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 46
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 51
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 48
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 52
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 54
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 53
	LoadLittleDWord(const uint32* base,
			unsigned int dwordIndex);  // 55
} /* size: 1787, variables: 4, inline expansions: 16 (139 bytes) */

// <00063F20> tier0/checksum_md5.cpp:119
void MD5Init(MD5Context_t* ctx)
{
} /* size: 24 */

// <00063C59> tier0/checksum_md5.cpp:136
// variables: 2
// function calls: 8
void MD5Update(MD5Context_t* ctx, const unsigned char* buf, unsigned int len)
{
	unsigned int t; // 138
	{
		unsigned char* p; // 153
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 79
		V_memcpy(void* dest,
			const void* src,
			uint count);  // 161
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 79
		V_memcpy(void* dest,
			const void* src,
			uint count);  // 158
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 171
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 179
} /* size: 654, variables: 1, inline expansions: 4 (352 bytes) */

// <000638FB> tier0/checksum_md5.cpp:188
// variables: 3
// function calls: 10
void MD5Final(unsigned char* digest, MD5Context_t* ctx)
{
	unsigned int count; // 190
	unsigned char* p; // 191
	{
		uint i; // 229
		StoreLittleDWord(uint32* base,
				unsigned int dwordIndex,
				uint32 dword);  // 231
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 208
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 213
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 218
	StoreLittleDWord(uint32* base,
			unsigned int dwordIndex,
			uint32 dword);  // 223
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 234
} /* size: 278, variables: 2, inline expansions: 9 (265 bytes) */

// <000637BD> tier0/checksum_md5.cpp:243
// variables: 3
// function call: 1
char* MD5_Print(unsigned char* hash, int hashlen)
{
	char szReturn; // 245
	const char   __FUNCTION__; // 30570
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 247
	}
	V_binarytohex<int, long unsigned int>(const byte* in,
						int inputbytes,
						char* out,
						long unsigned int outsize);  // 249
} /* size: 0, variables: 2, inline expansions: 1 (20 bytes) */

// <00063674> tier0/checksum_md5.cpp:258
// variables: 2
// function calls: 2
unsigned int MD5_PseudoRandom(unsigned int nSeed)
{
	MD5Context_t ctx; // 260
	unsigned char digest; // 261
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 263
} /* size: 133, variables: 2, inline expansions: 2 (30 bytes) */

// <00063623> tier0/checksum_md5.cpp:273
// variable: 1
void MD5Value_t::IsZero()
{
	{
		int i; // 275
	}
} /* size: 43 */

// <000634E5> tier0/checksum_md5.cpp:285
// variables: 3
void MD5_ProcessSingleBuffer(const void* p, int len, MD5Value_t& md5Result)
{
	const char   __FUNCTION__; // 29842
	MD5Context_t ctx; // 288
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 287
	}
} /* size: 0, variables: 2 */


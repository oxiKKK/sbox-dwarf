
//
// src/core.cpp
//
//	referenced by: libengine2.so
//
//	functions: 8
//

// <06B3C692> src/core.cpp:46
float b3GetLengthUnitsPerMeter(void)
{
} /* size: 0 */

// <06B3C5D8> src/core.cpp:51
// function call: 1
int b3DefaultAssertFcn(const char* condition, const char* fileName, int lineNumber)
{
	printf(const char* __fmt, ...); // 53
} /* size: 43, inline expansions: 1 (22 bytes) */

// <06B3C48C> src/core.cpp:74
// function call: 1
void b3DefaultLogFcn(const char* message)
{
	printf(const char* __fmt, ...); // 76
} /* size: 26, inline expansions: 1 (19 bytes) */

// <06B3C2EB> src/core.cpp:87
// variables: 2
// function call: 1
void b3Log(const char* format, ...)
{
	va_list args; // 89
	char buffer; // 91
	vsnprintf(char* __s,
			size_t __n,
			const char* __fmt,
			typedef __va_list_tag __va_list_tag* __ap);  // 92
} /* size: 232, variables: 2, inline expansions: 1 (37 bytes) */

// <06B3C2CA> src/core.cpp:97
b3Version b3GetVersion(void)
{
} /* size: 0 */

// <06B3BE76> src/core.cpp:188
// variable: 1
// function calls: 4
void* b3GrowAlloc(void* oldMem, int oldSize, int newSize)
{
	void* newMem; // 193
	b3InternalAssert(const char* condition,
			const char* fileName,
			int lineNumber);  // 192
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 196
	b3AtomicFetchAddInt(b3AtomicInt* a,
				int increment);  // 185
	b3Free(void* mem,
		size_t size);  // 197
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <06B3BE21> src/core.cpp:202
// function call: 1
int b3GetByteCount(void)
{
	b3AtomicLoadInt(b3AtomicInt* a); // 204
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06B3BD58> src/core.cpp:207
// variable: 1
// function call: 1
void* b3AllocZeroed(size_t size)
{
	void* mem; // 209
	memset(void* __dest,
		int __ch,
		size_t __len);  // 210
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */


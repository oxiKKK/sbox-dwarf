
//
// tier0/memalloc.cpp
//
//	referenced by: libtier0.so
//
//	functions: 12
//

// <002C95F6> tier0/memalloc.cpp:31
// variable: 1
// function calls: 2
void MemAlloc_OutOfMemory(size_t nSize)
{
	{
		int* _pCrash; // 40
	}
	Plat_IsInDebugSession(void); // 35
	Plat_IsInDebugSession(void); // 37
} /* size: 131, inline expansions: 2 (14 bytes) */

// <002C92D9> tier0/memalloc.cpp:55
// variable: 1
// function calls: 7
void* MemAlloc_Calloc(size_t num, size_t size)
{
	void* result; // 57
	_mi_theap_default(void); // 296
	mi_mul_overflow(size_t count,
			size_t size,
			size_t* total);  // 549
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 544
	mi_count_size_overflow(size_t count,
				size_t size,
				size_t* total);  // 291
	mi_theap_zalloc(mi_theap_t* theap,
			size_t size);  // 292
	mi_theap_calloc(mi_theap_t* theap,
			size_t count,
			size_t size);  // 296
	mi_calloc(size_t count,
			size_t size);  // 57
} /* size: 98, variables: 1, inline expansions: 7 (271 bytes) */

// <002C8A84> tier0/memalloc.cpp:117
// variable: 1
// function calls: 5
void* MemAlloc_ReallocAligned(void* pMemBlock, size_t size, size_t align)
{
	void* result; // 119
	_mi_theap_default(void); // 396
	mi_theap_realloc_zero_aligned(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment,
					bool zero);  // 356
	mi_theap_realloc_zero_aligned(mi_theap_t* theap,
					void* p,
					size_t newsize,
					size_t alignment,
					bool zero);  // 367
	mi_theap_realloc_aligned(mi_theap_t* theap,
				void* p,
				size_t newsize,
				size_t alignment);  // 396
	mi_realloc_aligned(void* p,
				size_t newsize,
				size_t alignment);  // 119
} /* size: 0, variables: 1, inline expansions: 5 (345 bytes) */

// <002C89EB> tier0/memalloc.cpp:140
// variable: 1
// function calls: 2
char* MemAlloc_StrDup(const char* pString)
{
	char* result; // 142
	_mi_theap_default(void); // 502
	mi_strdup(const char* s); // 142
} /* size: 48, variables: 1, inline expansions: 2 (39 bytes) */

// <002C898E> tier0/memalloc.cpp:149
// variable: 1
wchar_t* MemAlloc_WcStrDup(const wchar_t* pString)
{
	wchar_t* result; // 151
} /* size: 9, variables: 1 */

// <002C897E> tier0/memalloc.cpp:660
void MemAlloc_Init(void)
{
} /* size: 0 */

// <002C896E> tier0/memalloc.cpp:671
void CMemAllocSystemInitialize(void)
{
} /* size: 0 */

// <002C82B8> tier0/memalloc.cpp:688
// function calls: 5
void memory_stats(const CCommandContext& ctx, const CCommand& args)
{
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 472
	mi_subproc_current(void); // 498
	mi_stats_print_out(mi_output_fun* out,
				void* arg);  // 504
	mi_stats_print(void* out); // 690
} /* size: 56, inline expansions: 5 (196 bytes) */

// <002C8261> tier0/memalloc.cpp:716
void* QMallocWrapper(size_t nSize)
{
} /* size: 9 */

// <002C820E> tier0/memalloc.cpp:721
void QFreeWrapper(void* pMem)
{
} /* size: 9 */

// <002C819B> tier0/memalloc.cpp:726
void* QReallocWrapper(void* pMem, size_t nSize)
{
} /* size: 9 */

// <002C8135> tier0/memalloc.cpp:735
void Qt_GetCustomAllocators(QAlloc_t* pAlloc, QFree_t* pFree, QRealloc_t* pRealloc)
{
} /* size: 35 */


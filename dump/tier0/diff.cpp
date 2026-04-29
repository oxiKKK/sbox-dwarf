
//
// tier0/diff.cpp
//
//	referenced by: libtier0.so
//
//	functions: 7
//	struct: 1
//

// <000FAA2D> tier0/diff.cpp:35
// member variables: 2
// struct size: 16
struct CBlockPtr {
	CBlockPtr * m_pNext; /* 0 8 */
	const uint8 * m_pDataPtr; /* 8 8 */
};

// <000FB104> tier0/diff.cpp:41
inline void AddToHead<CBlockPtr, CBlockPtr>(CBlockPtr *& head, CBlockPtr* node)
{
} /* size: 0 */

// <000FC874> tier0/diff.cpp:48
// variables: 8
// function calls: 10
void ApplyDiffs(const uint8* OldBlock, const uint8* pDiffList, int OldSize, int pDiffListSize, int& ResultListSize, uint8* Output, uint32 OutSize)
{
	const uint8* copy_src; // 51
	const uint8* end_of_diff_list; // 52
	const uint8* obuf; // 53
	{
		uint8 op; // 57
		{
			uint16 copy_sz; // 60
			int copy_ofs; // 61
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 68
		}
		{
			int copy_sz; // 77
			int copy_ofs; // 78
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 101
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 116
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 86
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 125
	}
} /* size: 640, variables: 3 */

// <000FC569> tier0/diff.cpp:134
// variables: 3
// function calls: 6
void CopyPending(int len, const uint8* rawbytes, uint8 *& outbuf, const uint8* limit)
{
	const char   __FUNCTION__; // 1763
	{
		int* _pCrash; // 141
	}
	{
		int* _pCrash; // 151
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 141
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 144
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 151
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 158
} /* size: 479, variables: 1, inline expansions: 6 (307 bytes) */

// <000FC531> tier0/diff.cpp:163
// variables: 2
uint32 hasher(const uint8* mdata)
{
	uint32 ret; // 166
	{
		int i; // 167
	}
} /* size: 0, variables: 1 */

// <000FBE1B> tier0/diff.cpp:175
// variables: 25
// function calls: 8
int FindDiffsForLargeFiles(const uint8* pNewBlock, const uint8* OldBlock, int NewSize, int OldSize, int& pDiffListSize, uint8* Output, uint32 OutSize, int hashsize)
{
	int ret; // 181
	CBlockPtr** HashedMatches; // 187
	CBlockPtr* Blocks; // 189
	CBlockPtr* FreeList; // 194
	const uint8* walk; // 196
	int pending_raw_len; // 213
	uint8* outbuf; // 215
	const uint8* lastmatchend; // 216
	const char   __FUNCTION__; // 928
	{
		uint32 hash1; // 200
		CBlockPtr* newnode; // 202
		{
			int i; // 167
		}
		hasher(const uint8* mdata); // 200
		AddToHead<CBlockPtr, CBlockPtr>(CBlockPtr *& head,
						CBlockPtr* node);  // 205
	}
	{
		int longest; // 219
		CBlockPtr* longest_block; // 220
		{
			uint32 hash1; // 224
			{
				CBlockPtr* b; // 227
				{
					int match_of; // 230
					{
						int max_mlength; // 233
						int i; // 235
					}
				}
			}
			{
				int i; // 167
			}
			hasher(const uint8* mdata); // 224
		}
		{
			int match_of; // 263
			int nremaining; // 264
			{
				int* _pCrash; // 276
			}
			{
				int* _pCrash; // 291
			}
			{
				int* _pCrash; // 301
			}
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 291
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 301
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 276
		}
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 188
} /* size: 1444, variables: 9, inline expansions: 2 (44 bytes) */

// <000FB661> tier0/diff.cpp:335
// variables: 23
// function calls: 14
int FindDiffs(const uint8* pNewBlock, const uint8* OldBlock, int NewSize, int OldSize, int& pDiffListSize, uint8* Output, uint32 OutSize)
{
	int ret; // 339
	CArrayAutoPtr<CBlockPtr*> matchHashTable; // 345
	CBlockPtr* Blocks; // 348
	CBlockPtr* FreeList; // 353
	const uint8* walk; // 355
	int pending_raw_len; // 371
	uint8* outbuf; // 373
	const uint8* lastmatchend; // 374
	const char   __FUNCTION__; // 64650
	{
		uint16 hash1; // 359
		CBlockPtr* newnode; // 360
		AddToHead<CBlockPtr, CBlockPtr>(CBlockPtr *& head,
						CBlockPtr* node);  // 363
		CArrayAutoPtr<CBlockPtr::operator[](
				int k);  // 363
	}
	{
		int longest; // 377
		CBlockPtr* longest_block; // 378
		{
			uint16 hash1; // 382
			{
				CBlockPtr* b; // 384
				{
					int match_of; // 387
					{
						int max_mlength; // 390
						int i; // 392
					}
				}
				CArrayAutoPtr<CBlockPtr::operator[](
						int k);  // 384
			}
		}
		{
			int match_of; // 416
			int nremaining; // 417
			{
				int* _pCrash; // 427
			}
			{
				int* _pCrash; // 441
			}
			{
				int* _pCrash; // 451
			}
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 427
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 441
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 451
		}
	}
	CPlainAutoPtr<CBlockPtr::Attach(
		CBlockPtr** p);  // 146
	CArrayAutoPtr<CBlockPtr::CArrayAutoPtr(
			int nNumElements);  // 345
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 347
	CArrayAutoPtr<CBlockPtr::Delete(); // 147
	CPlainAutoPtr<CBlockPtr::Delete(); // 103
	CPlainAutoPtr<CBlockPtr::~CPlainAutoPtr(); // 147
	CArrayAutoPtr<CBlockPtr::~CArrayAutoPtr(); // 481
} /* size: 1255, variables: 9, inline expansions: 8 (91 bytes) */

// <000FB139> tier0/diff.cpp:484
// variables: 19
// function calls: 5
int FindDiffsLowMemory(const uint8* pNewBlock, const uint8* OldBlock, int NewSize, int OldSize, int& pDiffListSize, uint8* Output, uint32 OutSize)
{
	int ret; // 488
	const uint8* old_data_hash; // 493
	int pending_raw_len; // 495
	const uint8* walk; // 496
	const uint8* oldptr; // 497
	uint8* outbuf; // 498
	const uint8* lastmatchend; // 499
	const char   __FUNCTION__; // 62672
	{
		int longest; // 508
		const uint8* longest_block; // 509
		{
			uint16 hash1; // 504
		}
		{
			uint16 hash1; // 513
			{
				int max_bytes_to_compare; // 516
				int nmatches; // 517
			}
		}
		{
			int match_of; // 540
			int nremaining; // 541
			{
				int* _pCrash; // 551
			}
			{
				int* _pCrash; // 565
			}
			{
				int* _pCrash; // 575
			}
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 551
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 565
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 575
		}
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 494
} /* size: 1145, variables: 8, inline expansions: 2 (38 bytes) */


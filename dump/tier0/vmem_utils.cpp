
//
// tier0/vmem_utils.cpp
//
//	referenced by: libtier0.so
//
//	functions: 28
//

// <0051F325> tier0/vmem_utils.cpp:17
// function calls: 5
void CVirtualMemorySnapshot::CVirtualMemorySnapshot()
{
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 17
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 17
	CVirtualMemorySnapshot::Reset(); // 19
} /* size: 64, inline expansions: 5 (57 bytes) */

// <0051F309> tier0/vmem_utils.cpp:17
void CVirtualMemorySnapshot::CVirtualMemorySnapshot()
{
} /* size: 0 */

// <0051F244> tier0/vmem_utils.cpp:22
// function calls: 2
void CVirtualMemorySnapshot::~CVirtualMemorySnapshot()
{
	CBufferString::~CBufferString(); // 25
	CBufferString::~CBufferString(); // 25
} /* size: 44, inline expansions: 2 (10 bytes) */

// <0051F228> tier0/vmem_utils.cpp:22
void CVirtualMemorySnapshot::~CVirtualMemorySnapshot()
{
} /* size: 0 */

// <0051F187> tier0/vmem_utils.cpp:27
// variable: 1
void CVirtualMemorySnapshot::Capture()
{
	bool bSuccess; // 31
} /* size: 72, variables: 1 */

// <0051F0BA> tier0/vmem_utils.cpp:47
// function call: 1
void CVirtualMemorySnapshot::Purge()
{
	CVirtualMemorySnapshot::Reset(); // 56
} /* size: 113, inline expansions: 1 (37 bytes) */

// <0051E26B> tier0/vmem_utils.cpp:59
// variables: 12
// function calls: 33
void CVirtualMemorySnapshot::Report(LoggingChannelID_t channel)
{
	uint64 nMaxUserVa; // 81
	const char* pUnmappedExtra; // 82
	int nDigits; // 99
	uint64 nTotalUserBytes; // 103
	uint64 nTotalKernelBytes; // 104
	CBufferStringN<100> descStr; // 105
	CBufferStringN<32> shortStr; // 106
	{
		int i; // 107
		{
			Region_t* pRegion; // 109
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 120
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 128
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 129
			CBufferString::Append(
				const char* pString,
				int nChars,
				bool bExact);  // 129
			CBufferString::Append(
				char ch,
				bool bExact);  // 123
			CBufferString::Append(
				char ch,
				bool bExact);  // 375
			AppendPropertiesString(const Region_t* pRegion,
						CBufferString* pStr);  // 124
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 133
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 136
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 136
		}
	}
	{
		uint64 nAfterLast; // 152
		uint64 nStart; // 157
		uint64 nBytes; // 157
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<100>::CBufferStringN(); // 105
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<32>::CBufferStringN(); // 106
	CBufferString::~CBufferString(); // 587
	CBufferStringN<32>::~CBufferStringN(); // 176
	CBufferString::~CBufferString(); // 587
	CBufferStringN<100>::~CBufferStringN(); // 176
} /* size: 1964, variables: 7, inline expansions: 10 (140 bytes) */

// <0051E06B> tier0/vmem_utils.cpp:178
// variables: 4
// function calls: 4
void CVirtualMemorySnapshot::Diff(const CVirtualMemorySnapshot* pOldSnap, const CVirtualMemorySnapshot* pNewSnap)
{
	int nOldIdx; // 182
	int nNewIdx; // 183
	{
		const Region_t* pOld; // 186
		const Region_t* pNew; // 187
		CVirtualMemorySnapshot::GetRegion(
				int nIdx);  // 187
		CVirtualMemorySnapshot::GetRegionsCount(); // 189
		CVirtualMemorySnapshot::GetRegion(
				int nIdx);  // 191
	}
	CVirtualMemorySnapshot::GetRegionsCount(); // 184
} /* size: 178, variables: 2, inline expansions: 1 (0 bytes) */

// <0051DF2D> tier0/vmem_utils.cpp:214
// variables: 6
void CVirtualMemorySnapshot::GetLargestUnmappedRegion(uint64* pStart, uint64* pBytes, uint64 nMaxVirtualAddress)
{
	uint64 nPrevEnd; // 219
	{
		int i; // 220
		{
			Region_t* pRegion; // 222
			{
				uint64 nBytes; // 231
			}
		}
	}
	{
		uint64 nAfterLast; // 246
		{
			uint64 nBytes; // 249
		}
	}
} /* size: 222, variables: 1 */

// <0051DE9B> tier0/vmem_utils.cpp:264
// variables: 3
void CVirtualMemorySnapshot::GetAddressAfterLastRegion(uint64 nMaxVirtualAddress)
{
	Region_t* pLast; // 271
	{
		int i; // 275
		{
			Region_t* pRegion; // 277
		}
	}
} /* size: 118, variables: 1 */

// <0051DB83> tier0/vmem_utils.cpp:293
// variables: 2
// function calls: 13
void IsEqualRegion(const CVirtualMemorySnapshot* pSnap1, const Region_t* p1, const CVirtualMemorySnapshot* pSnap2, const Region_t* p2)
{
	const char* pDesc1; // 319
	const char* pDesc2; // 320
	CVirtualMemorySnapshot::RegionHasDesc(
			const Region_t* pRegion);  // 310
	CVirtualMemorySnapshot::RegionHasDesc(
			const Region_t* pRegion);  // 312
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 123
	CVirtualMemorySnapshot::GetRegionString(
			int nIdx);  // 131
	CVirtualMemorySnapshot::GetRegionDesc(
			const Region_t* pRegion);  // 319
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 123
	CVirtualMemorySnapshot::GetRegionString(
			int nIdx);  // 131
	CVirtualMemorySnapshot::GetRegionDesc(
			const Region_t* pRegion);  // 320
	V_strcmp(const char* s1,
		const char* s2);  // 321
} /* size: 157, variables: 2, inline expansions: 13 (309 bytes) */

// <0051F7F3> tier0/vmem_utils.cpp:324
void CVirtualMemorySnapshot::Reset()
{
} /* size: 0 */

// <0051D90C> tier0/vmem_utils.cpp:341
// variable: 1
// function calls: 5
void AppendAccessString(const Region_t* pRegion, CBufferString* pStr)
{
	bool bFlag; // 343
	CBufferString::Append(
		char ch,
		bool bExact);  // 344
	CBufferString::Append(
		char ch,
		bool bExact);  // 346
	CBufferString::Append(
		char ch,
		bool bExact);  // 348
	CBufferString::Append(
		char ch,
		bool bExact);  // 352
	CBufferString::Append(
		char ch,
		bool bExact);  // 356
} /* size: 275, variables: 1, inline expansions: 5 (112 bytes) */

// <0051F81D> tier0/vmem_utils.cpp:360
// variable: 1
// function call: 1
void AppendPropertiesString(const Region_t* pRegion, CBufferString* pStr)
{
	char chProp; // 362
	CBufferString::Append(
		char ch,
		bool bExact);  // 375
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0051D8D5> tier0/vmem_utils.cpp:360
// variable: 1
void AppendPropertiesString(const Region_t* pRegion, CBufferString* pStr)
{
	char chProp; // 362
} /* size: 0, variables: 1 */

// <0051D621> tier0/vmem_utils.cpp:378
// variables: 2
// function calls: 8
void CVirtualMemorySnapshot::AddRegionString(const char* pStr)
{
	const char* pScan; // 387
	int nIndex; // 398
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 387
	CBufferString::Length(); // 398
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 399
	CBufferString::Append(
		char ch,
		bool bExact);  // 400
	V_strlen(const char* str); // 395
	V_strcmp(const char* s1,
		const char* s2);  // 390
} /* size: 249, variables: 2, inline expansions: 8 (157 bytes) */

// <0051D4C6> tier0/vmem_utils.cpp:404
// variables: 4
void CVirtualMemorySnapshot::AddRegion(uint64 nStart, uint64 nBytes, uint32 nAccess)
{
	Region_t* pRegion; // 424
	{
		int nNewAlloc; // 408
		Region_t* pNewRegions; // 409
		{
			int i; // 410
		}
	}
} /* size: 378, variables: 1 */

// <0051D353> tier0/vmem_utils.cpp:440
// variable: 1
// function calls: 5
void CVirtualMemorySnapshot::CopyRegion(const CVirtualMemorySnapshot* pSrcSnap, const Region_t* pSrc)
{
	Region_t* pNew; // 443
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 123
	CVirtualMemorySnapshot::GetRegionString(
			int nIdx);  // 131
	CVirtualMemorySnapshot::GetRegionDesc(
			const Region_t* pRegion);  // 444
} /* size: 214, variables: 1, inline expansions: 5 (177 bytes) */

// <0051D2B5> tier0/vmem_utils.cpp:454
// variables: 3
void CompareByStart(void* pContext, const void* p1, const void* p2)
{
	CVirtualMemorySnapshot* pThis; // 456
	const Region_t* pRegion1; // 457
	const Region_t* pRegion2; // 458
} /* size: 78, variables: 3 */

// <0051D217> tier0/vmem_utils.cpp:484
// variables: 3
void CompareByBytes(void* pContext, const void* p1, const void* p2)
{
	CVirtualMemorySnapshot* pThis; // 486
	const Region_t* pRegion1; // 487
	const Region_t* pRegion2; // 488
} /* size: 81, variables: 3 */

// <0051D16E> tier0/vmem_utils.cpp:513
// variable: 1
void CVirtualMemorySnapshot::SortRegions()
{
	{
		int i; // 515
	}
} /* size: 113 */

// <0051CEF1> tier0/vmem_utils.cpp:526
// variables: 3
// function calls: 6
void CVirtualMemorySnapshot::ReadFileContent(const char* pFileName)
{
	FILE* pFile; // 532
	{
		char* pBuf; // 540
		int nRead; // 542
		CBufferString::Length(); // 549
		CBufferString::LengthUnusedBytes(); // 542
		fread(void* __ptr,
			size_t __size,
			size_t __n,
			FILE* __stream);  // 542
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 528
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0051CD69> tier0/vmem_utils.cpp:556
// variables: 5
// function call: 1
void CVirtualMemorySnapshot::ReadStatus()
{
	FILE* pFile; // 558
	char line; // 564
	{
		char* pScan; // 567
		uint64 nDecimalVal; // 586
		bool bHaveDecimal; // 587
	}
	fgets(char* __s,
		int __n,
		FILE* __stream);  // 565
} /* size: 601, variables: 2, inline expansions: 1 (20 bytes) */

// <0051CD4A> tier0/vmem_utils.cpp:634
uint64 GetHexValue(char ch)
{
} /* size: 0 */

// <0051CD0D> tier0/vmem_utils.cpp:654
// variable: 1
char* ScanHex(char* pScan, uint64* pValue)
{
	{
		uint64 nDigitVal; // 660
	}
} /* size: 0 */

// <0051CCE0> tier0/vmem_utils.cpp:673
char* ScanDecimal(char* pScan, uint64* pValue)
{
} /* size: 0 */

// <0051C8C5> tier0/vmem_utils.cpp:691
// variables: 21
// function calls: 11
void CVirtualMemorySnapshot::ParseMapsLine(char* pLine)
{
	char* pScan; // 693
	uint64 nStart; // 700
	uint64 nEnd; // 708
	uint32 nAccess; // 716
	bool bShared; // 717
	bool bSharedKnown; // 718
	bool bFileMapping; // 719
	bool bImageMapping; // 720
	bool bImageMappingKnown; // 721
	uint64 nOffset; // 763
	uint64 nDevMajor; // 771
	uint64 nDevMinor; // 779
	int nDescString; // 787
	uint64 nInode; // 788
	Region_t* pRegion; // 812
	{
		bool bValid; // 724
	}
	{
		uint64 nDigitVal; // 660
		GetHexValue(char ch); // 660
	}
	ScanHex(char* pScan,
		uint64* pValue);  // 701
	{
		uint64 nDigitVal; // 660
		GetHexValue(char ch); // 660
	}
	ScanHex(char* pScan,
		uint64* pValue);  // 709
	{
		uint64 nDigitVal; // 660
		GetHexValue(char ch); // 660
	}
	ScanHex(char* pScan,
		uint64* pValue);  // 764
	{
		uint64 nDigitVal; // 660
		GetHexValue(char ch); // 660
	}
	ScanHex(char* pScan,
		uint64* pValue);  // 772
	{
		uint64 nDigitVal; // 660
		GetHexValue(char ch); // 660
	}
	ScanHex(char* pScan,
		uint64* pValue);  // 780
	ScanDecimal(char* pScan,
			uint64* pValue);  // 789
} /* size: 798, variables: 15, inline expansions: 6 (258 bytes) */

// <0051C67A> tier0/vmem_utils.cpp:823
// variables: 3
// function calls: 2
void CVirtualMemorySnapshot::ReadMaps()
{
	FILE* pFile; // 825
	char line; // 831
	{
		int nLen; // 834
		V_strlen(const char* str); // 834
	}
	fgets(char* __s,
		int __n,
		FILE* __stream);  // 832
} /* size: 299, variables: 2, inline expansions: 1 (20 bytes) */


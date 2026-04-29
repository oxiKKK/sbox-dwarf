
//
// vpklib/packedstore.cpp
//
//	referenced by: libfilesystem_stdio.so
//
//	functions: 82
//	classes: 4
//	structs: 3
//

// <00227274> vpklib/packedstore.cpp:47
void CFilePartDescr::CFilePartDescr()
{
} /* size: 0 */

// <00227258> vpklib/packedstore.cpp:47
inline void CFilePartDescr::CFilePartDescr()
{
} /* size: 0 */

// <00202EAA> vpklib/packedstore.cpp:47
// member function: 1
// member variables: 3
// struct size: 10
struct CFilePartDescr {
	PackFileIndex_t m_nFileNumber; /* 0 2 */
	CPackedInt<unsigned int> m_nFileDataOffset; /* 2 4 */
	CPackedInt<unsigned int> m_nFileDataSize; /* 6 4 */
	void CFilePartDescr(CFilePartDescr* );
};

// <001F4817> vpklib/packedstore.cpp:57
// member functions: 4
// member variables: 3
// struct size: 16
struct CFileHeaderFixedData {
	FileCRC_t m_nFileCRC; /* 0 4 */
	MetaDataSize_t m_nMetaDataSize; /* 4 2 */
	CFilePartDescr m_PartDescriptors[1]; /* 6 10 */
	/* vpklib/packedstore.cpp:63 */
	const void* MetaData(const CFileHeaderFixedData* );
	/* vpklib/packedstore.cpp:65 */
	const CFilePartDescr* FileData(const CFileHeaderFixedData* , int);
	/* vpklib/packedstore.cpp:67 */
	uint32 TotalDataSize(const CFileHeaderFixedData* );
	/* vpklib/packedstore.cpp:72 */
	int HeaderSizeIncludingMetaData(const CFileHeaderFixedData* );
};

// <00238288> vpklib/packedstore.cpp:67
inline void CFileHeaderFixedData::TotalDataSize()
{
} /* size: 0 */

// <00238257> vpklib/packedstore.cpp:72
// variables: 2
inline void CFileHeaderFixedData::HeaderSizeIncludingMetaData()
{
	size_t nRet; // 74
	const CFilePartDescr* pPart; // 76
} /* size: 0, variables: 2 */

// <00238220> vpklib/packedstore.cpp:91
int s_FileHeaderSize(const char* pName, int nNumDataParts, int nNumMetaDataBytes)
{
} /* size: 0 */

// <00236BEE> vpklib/packedstore.cpp:101
void CFileDirectoryData::CFileDirectoryData()
{
} /* size: 0 */

// <00236BD2> vpklib/packedstore.cpp:101
inline void CFileDirectoryData::CFileDirectoryData()
{
} /* size: 0 */

// <0021B665> vpklib/packedstore.cpp:101
void CFileDirectoryData::~CFileDirectoryData()
{
} /* size: 0 */

// <0021B649> vpklib/packedstore.cpp:101
inline void CFileDirectoryData::~CFileDirectoryData()
{
} /* size: 0 */

// <00204738> vpklib/packedstore.cpp:101
// member functions: 4
// member variables: 3
// class size: 48
class CFileDirectoryData {
	CFileDirectoryData * m_pNext; /* 0 8 */
	const char * m_Name; /* 8 8 */
	CUtlHashtable<char const*, empty_t, DefaultHashFunctor<char const*>, DefaultEqualFunctor<char const*>, undefined_t, CUtlMemory<CUtlHashtableEntry<char const*, empty_t>, int> > m_FilenameTable; /* 16 32 */
	void ~CFileDirectoryData(CFileDirectoryData* );
	void CFileDirectoryData(CFileDirectoryData* );
	void ~CFileDirectoryData(class CFileDirectoryData *); /* linkage=_ZN18CFileDirectoryDataD4Ev */
	void CFileDirectoryData(class CFileDirectoryData *); /* linkage=_ZN18CFileDirectoryDataC4Ev */
};

// <00236C21> vpklib/packedstore.cpp:113
void CFileExtensionData::CFileExtensionData()
{
} /* size: 0 */

// <00236C05> vpklib/packedstore.cpp:113
inline void CFileExtensionData::CFileExtensionData()
{
} /* size: 0 */

// <001F5066> vpklib/packedstore.cpp:113
// member functions: 4
// member variables: 3
// class size: 360
class CFileExtensionData {
	CFileExtensionData * m_pNext; /* 0 8 */
	const char * m_Name; /* 8 8 */
	CUtlIntrusiveList<CFileDirectoryData> m_pDirectoryHashTable[43]; /* 16 344 */
	/* vpklib/packedstore.cpp:121 */
	void ~CFileExtensionData(CFileExtensionData* );
	void CFileExtensionData(CFileExtensionData* );
	void ~CFileExtensionData(class CFileExtensionData *); /* linkage=_ZN18CFileExtensionDataD4Ev */
	void CFileExtensionData(class CFileExtensionData *); /* linkage=_ZN18CFileExtensionDataC4Ev */
};

// <002381FD> vpklib/packedstore.cpp:121
// variable: 1
void CFileExtensionData::~CFileExtensionData()
{
	{
		int i; // 123
	}
} /* size: 0 */

// <002381D7> vpklib/packedstore.cpp:121
// variable: 1
inline void CFileExtensionData::~CFileExtensionData()
{
	{
		int i; // 123
	}
} /* size: 0 */

// <00237C5A> vpklib/packedstore.cpp:136
// variables: 4
// function calls: 21
void CPackedStore::SkipDataAfterFilePath(const char *& pData)
{
	int nHighestChunkIndex; // 138
	int nMetaDataSize; // 146
	{
		const CFilePartDescr* pFilePartDescr; // 164
		int nIdx; // 165
		CUtlMemory<unsigned char, int>::Base(); // 112
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 217
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 222
		CPackedStore::IsValidDirectoryData(
					const void* pPtr,
					size_t nBytes);  // 151
		CPackedInt<short unsigned int>::operator short unsigned int(); // 155
	}
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 217
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 222
	CPackedStore::IsValidDirectoryData(
				const void* pPtr,
				size_t nBytes);  // 256
	CPackedStore::AdvanceValidDirectoryData(
					const char  *& pPtr,
					size_t nBytes);  // 140
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 217
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 222
	CPackedStore::IsValidDirectoryData(
				const void* pPtr,
				size_t nBytes);  // 141
	CPackedInt<short unsigned int>::operator short unsigned int(); // 146
	CPackedStore::AdvanceValidDirectoryData(
					const char  *& pPtr,
					size_t nBytes);  // 173
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 217
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 222
	CPackedStore::IsValidDirectoryData(
				const void* pPtr,
				size_t nBytes);  // 256
	CPackedStore::AdvanceValidDirectoryData(
					const char  *& pPtr,
					size_t nBytes);  // 174
} /* size: 269, variables: 2, inline expansions: 16 (255 bytes) */

// <002377A6> vpklib/packedstore.cpp:182
// variables: 3
// function calls: 17
void CPackedStore::SkipAllFilesAfterDirName(const char *& pData, CUtlVector<char const*, CUtlMemory<char const*, int> >* pOutAllFilenames)
{
	int nHighestChunkIndex; // 184
	{
		int nchPath; // 191
		int nSkipIndex; // 209
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 238
		CUtlMemory<unsigned char, int>::Base(); // 112
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 233
		CPackedStore::IsValidDirectoryString(
					const char* pStr,
					int nMaxChars);  // 191
		CUtlMemory<char const::NumAllocated(); // 1196
		CUtlMemory<char const::Base(); // 112
		CUtlVectorBase<char const::Base(); // 368
		CUtlVectorBase<char const::ResetDbgInfo(); // 824
		CUtlMemory<char const::IsGrowable(); // 823
		CUtlMemory<char const::IsExternallyAllocated(); // 859
		CUtlMemory<char const::IsExternallyAllocated(); // 861
		CUtlMemory<char const::Grow(
			int num);  // 806
		CUtlVectorBase<char const::GrowMemory(
				int num);  // 1198
		CUtlMemory<char const::operator[](
				int i);  // 602
		CUtlVectorBase<char const::Element(
			int i);  // 1201
		CopyConstruct<char const*>(const char ** pMemory,
						const char* const& src);  // 1201
		CUtlVectorBase<char const::AddToTail(
				const char* const& src);  // 205
	}
} /* size: 468, variables: 1 */

// <00237277> vpklib/packedstore.cpp:223
// variables: 8
// function calls: 13
void CPackedStore::FindFileEntry(const char* pDirname, const char* pBaseName, const char* pExtension, uint8** pExtBaseOut, uint8** pNameBaseOut)
{
	int nExtensionHash; // 230
	const CFileExtensionData* pExt; // 231
	{
		int nDirHash; // 234
		const CFileDirectoryData* pDir; // 235
		{
			const char* pData; // 258
			{
				UtlHashHandle_t hEntry; // 246
				const char* pData; // 250
				{
					uint32 c; // 354
				}
				StringHashFunctor::operator(
						const char* s);  // 218
				CUtlHashtable<char const::Find(
					KeyArg_t k);  // 246
				CUtlMemory<CUtlHashtableEntry<char const::operator[](
						int i);  // 296
				CUtlHashtable<char const::operator[](
						handle_t idx);  // 250
				V_strlen(const char* str); // 253
			}
			CUtlHashtable<char const::Count(); // 244
			V_strcmp(const char* s1,
				const char* s2);  // 263
			CPackedStore::SkipFile(
				const char  *& pData);  // 273
			V_strlen(const char* str); // 270
		}
		FindNamedNodeCaseSensitive<CFileDirectoryData>(CFileDirectoryData* head,
								const char* name);  // 1048
		CUtlIntrusiveList<CFileDirectoryData>::FindNamedNodeCaseSensitive(
						const char* pName);  // 235
	}
	FindNamedNodeCaseSensitive<CFileExtensionData>(CFileExtensionData* head,
							const char* name);  // 1048
	CUtlIntrusiveList<CFileExtensionData>::FindNamedNodeCaseSensitive(
					const char* pName);  // 231
} /* size: 597, variables: 2, inline expansions: 2 (102 bytes) */

// <00237249> vpklib/packedstore.cpp:284
// variable: 1
inline const void* CFileHeaderFixedData::MetaData()
{
	const CFilePartDescr* ret; // 288
} /* size: 0, variables: 1 */

// <00236D09> vpklib/packedstore.cpp:301
// function calls: 27
void CPackedStore::Init()
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 306
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 307
	memset(void* __dest,
		int __ch,
		size_t __len);  // 308
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 313
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 314
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 315
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 317
} /* size: 395, inline expansions: 27 (700 bytes) */

// <002427C1> vpklib/packedstore.cpp:320
// function calls: 9
void CPackedStore::SetParent(CPackedStore* pParent)
{
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 2401
	CInterlockedIntT<int, 4>::operator int(); // 2406
	CPackedStore::Release(); // 2399
	CPackedStore::Release(); // 328
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 2396
	CPackedStore::AddRef(); // 333
	CPackedStore::SetParent(
			CPackedStore* pParent);  // 320
} /* size: 0, inline expansions: 9 (162 bytes) */

// <00236CA0> vpklib/packedstore.cpp:320
// variables: 2
void CPackedStore::SetParent(CPackedStore* pParent)
{
	const char   __FUNCTION__; // 25363
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 322
	}
} /* size: 0, variables: 1 */

// <00236C6C> vpklib/packedstore.cpp:337
void CPackedStore::GetParent()
{
} /* size: 12 */

// <00235A3E> vpklib/packedstore.cpp:344
// variables: 21
// function calls: 67
void CPackedStore::BuildHashTables()
{

Corrupt: // 422
	CUtlVector<char const*, CUtlMemory<char const*, int> > directoryFilenames; // 352
	const char* pData; // 354
	const char   __FUNCTION__; // 25520
	{
		int i; // 347
		{
			CFileExtensionData* tmp; // 1018
			{
				int i; // 123
				{
					CFileDirectoryData* tmp; // 1018
					{
						entry_t* table; // 896
						CUtlMemory<CUtlHashtableEntry<char const::Base(); // 896
						{
							int i; // 897
							CUtlMemory<CUtlHashtableEntry<char const::Count(); // 897
							CUtlHashtableEntry<char const::IsValid(); // 899
							CUtlHashtableEntry<char const::MarkInvalid(); // 901
							Destruct<CUtlKeyValuePair<char const*, empty_t> >(CUtlKeyValuePair<char const*, empty_t>* pMemory); // 902
						}
					}
					CUtlHashtable<char const::RemoveAll(); // 188
					ValidateAlignment<CUtlHashtableEntry<char const*, empty_t> >(void); // 508
					CUtlMemory<CUtlHashtableEntry<char const::IsExternallyAllocated(); // 905
					CUtlMemory<CUtlHashtableEntry<char const::Purge(); // 903
					CUtlMemory<CUtlHashtableEntry<char const::Purge(); // 510
					CUtlMemory<CUtlHashtableEntry<char const::~CUtlMemory(); // 188
					CUtlHashtable<char const::~CUtlHashtable(); // 101
					CFileDirectoryData::~CFileDirectoryData(); // 1019
				}
				CUtlIntrusiveList<CFileDirectoryData>::Purge(); // 125
			}
			CFileExtensionData::~CFileExtensionData(); // 1019
		}
		CUtlIntrusiveList<CFileExtensionData>::Purge(); // 349
	}
	{
		int nchExt; // 358
		int nExtensionHash; // 368
		CFileExtensionData* pNewExt; // 369
		{
			int nchDir; // 377
			int nDirHash; // 387
			CFileDirectoryData* pNewDir; // 388
			int nDirChunk; // 394
			const int  nNumFilesInDirectory; // 402
			{
				int iFile; // 406
				{
					const char* pFileName; // 408
					{
						uint32 c; // 354
					}
					StringHashFunctor::operator(
							const char* s);  // 240
					CUtlMemory<CUtlHashtableEntry<char const::operator[](
							int i);  // 706
					CUtlKeyValuePair<char const::CUtlKeyValuePair<char const*>(
									const char* const& k);  // 1514
					Construct<CUtlKeyValuePair<char const*, empty_t>, char const*&>(CUtlKeyValuePair<char const*, empty_t>* pMemory); // 706
					CUtlHashtable<char const::DoInsert<char const*>(
								const char* k,
								unsigned int h,
								bool* pDidInsert);  // 695
					CUtlHashtable<char const::DoInsert<char const*>(
								const char* k,
								unsigned int h,
								bool* pDidInsert);  // 240
					CUtlHashtable<char const::Insert(
						KeyArg_t k);  // 409
				}
			}
			CUtlMemory<unsigned char, int>::Base(); // 112
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 233
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 238
			CPackedStore::IsValidDirectoryString(
						const char* pStr,
						int nMaxChars);  // 377
			CUtlHashtable<char const::Reserve(
				int expected);  // 287
			CUtlHashtable<char const::Reserve(
				int expected);  // 405
			AddToHead<CFileDirectoryData, CFileDirectoryData>(CFileDirectoryData *& head,
										CFileDirectoryData* node);  // 960
			CUtlIntrusiveList<CFileDirectoryData>::AddToHead(
					CFileDirectoryData* node);  // 390
			CUtlMemory<CUtlHashtableEntry<char const::ValidateGrowSize(); // 475
			CUtlMemory<CUtlHashtableEntry<char const::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 178
			CUtlHashtable<char const::Init(); // 178
			CUtlHashtable<char const::CUtlHashtable(
					int minimumSize);  // 101
			CFileDirectoryData::CFileDirectoryData(); // 388
		}
		CUtlMemory<unsigned char, int>::Base(); // 112
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 233
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 238
		CPackedStore::IsValidDirectoryString(
					const char* pStr,
					int nMaxChars);  // 358
		CUtlIntrusiveList<CFileDirectoryData>::CUtlIntrusiveList(); // 113
		CFileExtensionData::CFileExtensionData(); // 369
		AddToHead<CFileExtensionData, CFileExtensionData>(CFileExtensionData *& head,
									CFileExtensionData* node);  // 960
		CUtlIntrusiveList<CFileExtensionData>::AddToHead(
				CFileExtensionData* node);  // 371
	}
	{
		int* _pCrash; // 427
	}
	CUtlMemory<char const::ValidateGrowSize(); // 475
	CUtlMemory<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char const::ResetDbgInfo(); // 530
	CUtlVectorBase<char const::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<char const::CUtlVector(
			int growSize,
			int initCapacity);  // 352
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 213
	CPackedStore::DirectoryData(); // 354
	CUtlMemory<char const::Purge(); // 903
	CUtlMemory<char const::Purge(); // 1799
	CUtlVectorBase<char const::Purge(); // 560
	CUtlVectorBase<char const::~CUtlVectorBase(); // 410
	CUtlVector<char const::~CUtlVector(); // 428
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 323
	CPackedStore::BaseName(); // 425
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 323
	CPackedStore::BaseName(); // 427
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 427
} /* size: 1607, variables: 3, goto labels: 1, inline expansions: 23 (727 bytes) */

// <002359D9> vpklib/packedstore.cpp:431
// function call: 1
void CPackedStore::IsEmpty()
{
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 433
} /* size: 15, inline expansions: 1 (0 bytes) */

// <0023136B> vpklib/packedstore.cpp:436
// variables: 35
// function calls: 270
void CPackedStore::CPackedStore(const char* pFileBasename, IFileSystem* pFS, int nOpenFlags, CPackedStore* pParent, const char* pParentFile, CUtlStringToken pathMergeToken)
{
	{

InvalidFile: // 602
		{
			bool bOpenAppend; // 438
			bool bOpenForWrite; // 439
			{
				CPathBufferString fileName; // 460
				CInputFile dirFile; // 461
				{
					VPKDirHeader_t dirHeader; // 480
					uint32 nSizeOfHeader; // 505
					int nSize; // 506
					int cbVecHashes; // 544
					{
						int* _pCrash; // 498
					}
					{
						int nRemainingSize; // 521
						CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > readBuffer; // 527
						{
							int nReadSize; // 532
							{
								int i; // 536
							}
						}
					}
					{
						uint32 nExpectedSignedSize; // 581
						uint32 cubPublicKey; // 588
						uint32 cubSignature; // 594
						{
							int* _pCrash; // 584
						}
					}
				}
			}
		}
	}
	{
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 436
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 436
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 436
		CUtlIntrusiveList<CFileExtensionData>::CUtlIntrusiveList(); // 436
		CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 436
		CUtlBlockMemory<unsigned char, int>::Init(
			int nGrowSize,
			int nInitSize);  // 126
		CUtlBlockMemory<unsigned char, int>::CUtlBlockMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 14
		CUtlBlockVector<unsigned char, int>::CUtlBlockVector(
				int growSize,
				int initCapacity);  // 436
		CUtlMemory<CUtlHashtableEntry<int, int>, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashtableEntry<int, int>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 178
		Init(const CUtlHashtable<int, int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEnt this); // 178
		CUtlHashtable(const CUtlHashtable<int, int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEnt this,
				int minimumSize);  // 436
		{
			bool bOpenAppend; // 438
			bool bOpenForWrite; // 439
			CUtlMemory<unsigned char, int>::NumAllocated(); // 1247
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
				int i);  // 1252
			Construct<unsigned char, unsigned char>(unsigned char* pMemory); // 1252
			CUtlMemory<unsigned char, int>::Base(); // 112
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 368
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddToTail(
					unsigned char& src);  // 448
			{
				CPathBufferString fileName; // 460
				CInputFile dirFile; // 461
				CBufferString::WriteBuffer(); // 1390
				CBufferString::WriteBuffer(); // 1101
				CBufferString::RemoveAll(); // 901
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 452
				CBufferString::IsEmpty(); // 1299
				CBufferString::WriteBuffer(); // 1390
				CBufferString::WriteBuffer(); // 1304
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 895
				V_strlen(const char* str); // 895
				CBufferString::SyncStringChars(); // 1305
				CBufferString::FixDoubleSlashes(); // 1297
				CBufferString::FixDoubleSlashes(); // 455
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 457
				CBufferString::WriteBuffer(); // 1390
				CBufferString::WriteBuffer(); // 1101
				CBufferString::RemoveAll(); // 901
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 457
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 460
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 604
				CBufferString::AppendConcat(
						const char* pStr1,
						int nChars1,
						const char* pStr2,
						int nChars2,
						bool bExact);  // 609
				CBufferStringN<200>::CBufferStringN(
						const char* pString1,
						const char* pString2,
						bool bExact,
						bool bGrowable);  // 460
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 461
				CBaseFile::CBaseFile(); // 353
				CBaseFile::Open(
					const char* fname,
					const char* modes);  // 350
				CInputFile::Open(
					const char* pFname);  // 355
				CInputFile::CInputFile(
						const char* pFname);  // 461
				CFileSystemPassThru::IsOk(
					FileHandle_t file);  // 111
				CFileSystemPassThru::IsOk(
					FileHandle_t file);  // 111
				CFileSystemPassThru::IsOk(
					FileHandle_t file);  // 111
				CFileSystemPassThru::IsOk(
					FileHandle_t file);  // 267
				CBaseFile::IsOk(); // 464
				CFileSystemPassThru::IsOk(
					FileHandle_t file);  // 111
				CFileSystemPassThru::IsOk(
					FileHandle_t file);  // 111
				CFileSystemPassThru::IsOk(
					FileHandle_t file);  // 111
				CFileSystemPassThru::IsOk(
					FileHandle_t file);  // 267
				CBaseFile::IsOk(); // 472
				CBaseFile::Close(); // 198
				CBaseFile::Open(
					const char* fname,
					const char* modes);  // 350
				CInputFile::Open(
					const char* pFname);  // 474
				CFileSystemPassThru::IsOk(
					FileHandle_t file);  // 111
				CFileSystemPassThru::IsOk(
					FileHandle_t file);  // 111
				CFileSystemPassThru::IsOk(
					FileHandle_t file);  // 111
				CFileSystemPassThru::IsOk(
					FileHandle_t file);  // 267
				CBaseFile::IsOk(); // 477
				{
					VPKDirHeader_t dirHeader; // 480
					uint32 nSizeOfHeader; // 505
					int nSize; // 506
					int cbVecHashes; // 544
					CPackedInt<int>::CPackedInt(); // 56
					CPackedInt<int>::CPackedInt(); // 56
					CPackedInt<int>::CPackedInt(); // 56
					CPackedInt<int>::CPackedInt(); // 56
					CPackedInt<int>::CPackedInt(); // 56
					CPackedInt<int>::CPackedInt(); // 56
					CPackedInt<int>::CPackedInt(); // 56
					CPackedInt<int>::operator=(
							int val);  // 57
					CPackedInt<int>::operator=(
							int val);  // 58
					CPackedInt<int>::operator=(
							int val);  // 59
					CPackedInt<int>::operator=(
							int val);  // 60
					CPackedInt<int>::operator=(
							int val);  // 61
					CPackedInt<int>::operator=(
							int val);  // 63
					CPackedInt<int>::operator=(
							int val);  // 62
					VPKDirHeader_t::VPKDirHeader_t(); // 480
					CBaseFile::Read(
						void* pOutput,
						int size);  // 483
					CPackedInt<int>::operator int(); // 484
					CPackedInt<int>::operator int(); // 486
					CPackedInt<int>::operator int(); // 496
					CPackedInt<int>::operator int(); // 498
					LeafCodeInfo_t::LeafCodeInfo_t(
							const char* szFile,
							int nLine,
							const char* szFunction);  // 498
					{
						int* _pCrash; // 498
					}
					CFileSystemPassThru::IsOk(
						FileHandle_t file);  // 111
					CFileSystemPassThru::IsOk(
						FileHandle_t file);  // 111
					CFileSystemPassThru::IsOk(
						FileHandle_t file);  // 111
					CFileSystemPassThru::IsOk(
						FileHandle_t file);  // 267
					CBaseFile::IsOk(); // 284
					{
					}
					CBaseFile::Size(); // 489
					CPackedInt<int>::operator int(); // 489
					CPackedInt<int>::operator=(
							int val);  // 489
					CBaseFile::Seek(
						int pos,
						FileSystemSeek_t nSeekType);  // 494
					CPackedInt<int>::operator=(
							int val);  // 490
					CPackedInt<int>::operator=(
							int val);  // 492
					CPackedInt<int>::operator=(
							int val);  // 491
					CBaseFile::Tell(); // 505
					CPackedInt<int>::operator int(); // 506
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
					CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
					CUtlMemory<unsigned char, int>::Purge(); // 903
					CUtlMemory<unsigned char, int>::Purge(); // 1799
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 1800
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 509
					CUtlMemory<unsigned char, int>::Base(); // 112
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 213
					CPackedStore::DirectoryData(); // 511
					CBaseFile::Read(
						void* pOutput,
						int size);  // 222
					LeafCodeInfo_t::LeafCodeInfo_t(
							const char* szFile,
							int nLine,
							const char* szFunction);  // 226
					CBaseFile::MustRead(
						void* pOutput,
						int size);  // 511
					CBaseFile::Tell(); // 514
					CPackedInt<int>::operator int(); // 519
					{
						int nRemainingSize; // 521
						CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > readBuffer; // 527
						CUtlBlockMemory<unsigned char, int>::NumElementsInBlock(); // 227
						CUtlBlockMemory<unsigned char, int>::NumAllocated(); // 311
						CUtlBlockMemory<unsigned char, int>::Grow(
							int num);  // 247
						CUtlBlockMemory<unsigned char, int>::Grow(
							int num);  // 311
						CUtlBlockMemory<unsigned char, int>::EnsureCapacity(
								int num);  // 1006
						CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::ResetDbgInfo(); // 1024
						CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::EnsureCapacity(
								int num);  // 523
						CPackedInt<int>::operator int(); // 521
						CPackedInt<int>::operator int(); // 523
						CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
						CUtlMemory<unsigned char, int>::CUtlMemory(
								int nGrowSize,
								int nInitAllocationCount);  // 527
						CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
						CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
								int growSize,
								int initCapacity);  // 418
						CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 527
						Min<int>(const int& val1,
							const int& val2);  // 528
						{
							int nReadSize; // 532
							CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 532
							Min<int>(const int& val1,
								const int& val2);  // 532
							CBaseFile::Read(
								void* pOutput,
								int size);  // 222
							LeafCodeInfo_t::LeafCodeInfo_t(
									const char* szFile,
									int nLine,
									const char* szFunction);  // 226
							CBaseFile::MustRead(
								void* pOutput,
								int size);  // 534
							CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 534
							{
								int i; // 536
								CUtlBlockMemory<unsigned char, int>::MajorIndex(
										int i);  // 243
								CUtlBlockMemory<unsigned char, int>::IsIdxValid(
										int i);  // 191
								CUtlBlockMemory<unsigned char, int>::MajorIndex(
										int i);  // 192
								CUtlBlockMemory<unsigned char, int>::MinorIndex(
										int i);  // 193
								{
								}
								CUtlBlockMemory<unsigned char, int>::operator[](
										int i);  // 602
								CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::Element(
									int i);  // 1201
								CopyConstruct<unsigned char>(unsigned char* pMemory,
												const unsigned char& src);  // 1201
								CUtlBlockMemory<unsigned char, int>::NumElementsInBlock(); // 227
								CUtlBlockMemory<unsigned char, int>::NumAllocated(); // 1196
								CUtlBlockMemory<unsigned char, int>::Grow(
									int num);  // 247
								CUtlBlockMemory<unsigned char, int>::Grow(
									int num);  // 806
								CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::ResetDbgInfo(); // 824
								CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::GrowMemory(
										int num);  // 1198
								CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::AddToTail(
										const unsigned char& src);  // 538
								CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
										int i);  // 538
							}
						}
						CUtlMemory<unsigned char, int>::Purge(); // 903
						CUtlMemory<unsigned char, int>::Purge(); // 1799
						CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
						ValidateAlignment<unsigned char>(void); // 508
						CUtlMemory<unsigned char, int>::Purge(); // 510
						CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
						CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
						CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 542
					}
					CPackedInt<int>::operator int(); // 544
					CBaseFile::Seek(
						int pos,
						FileSystemSeek_t nSeekType);  // 555
					memset(void* __dest,
						int __ch,
						size_t __len);  // 67
					V_memset(void* dest,
						int fill,
						size_t count);  // 559
					memset(void* __dest,
						int __ch,
						size_t __len);  // 67
					V_memset(void* dest,
						int fill,
						size_t count);  // 560
					memset(void* __dest,
						int __ch,
						size_t __len);  // 67
					V_memset(void* dest,
						int fill,
						size_t count);  // 561
					CPackedInt<int>::operator int(); // 562
					CPackedInt<int>::operator int(); // 576
					{
						uint32 nExpectedSignedSize; // 581
						uint32 cubPublicKey; // 588
						uint32 cubSignature; // 594
						CBaseFile::Tell(); // 580
						CPackedInt<int>::operator int(); // 68
						VPKDirHeader_t::ComputeSizeofSignedDataAfterHeader(); // 581
						LeafCodeInfo_t::LeafCodeInfo_t(
								const char* szFile,
								int nLine,
								const char* szFunction);  // 584
						{
							int* _pCrash; // 584
						}
						CBaseFile::Read(
							void* pOutput,
							int size);  // 222
						CBaseFile::MustRead(
							void* pOutput,
							int size);  // 589
						CBaseFile::Read(
							void* pOutput,
							int size);  // 222
						CBaseFile::MustRead(
							void* pOutput,
							int size);  // 591
						CUtlMemory<unsigned char, int>::Base(); // 112
						CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 591
						CBaseFile::Read(
							void* pOutput,
							int size);  // 222
						LeafCodeInfo_t::LeafCodeInfo_t(
								const char* szFile,
								int nLine,
								const char* szFunction);  // 226
						CBaseFile::MustRead(
							void* pOutput,
							int size);  // 595
						CBaseFile::Read(
							void* pOutput,
							int size);  // 222
						{
							int* _pCrash; // 226
						}
						LeafCodeInfo_t::LeafCodeInfo_t(
								const char* szFile,
								int nLine,
								const char* szFunction);  // 226
						CBaseFile::MustRead(
							void* pOutput,
							int size);  // 597
						CUtlMemory<unsigned char, int>::Base(); // 112
						CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 597
					}
					CBaseFile::Read(
						void* pOutput,
						int size);  // 222
					CBaseFile::MustRead(
						void* pOutput,
						int size);  // 565
					CBaseFile::Read(
						void* pOutput,
						int size);  // 222
					CBaseFile::MustRead(
						void* pOutput,
						int size);  // 567
					CBaseFile::Read(
						void* pOutput,
						int size);  // 222
					LeafCodeInfo_t::LeafCodeInfo_t(
							const char* szFile,
							int nLine,
							const char* szFunction);  // 226
					CBaseFile::MustRead(
						void* pOutput,
						int size);  // 571
				}
				CBaseFile::Close(); // 181
				CBaseFile::~CBaseFile(); // 345
				CInputFile::~CInputFile(); // 606
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 606
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 464
			}
		}
		CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 436
		CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 436
		CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 436
		CUtlBlockMemory<FileHandleTracker_t, int>::Init(
			int nGrowSize,
			int nInitSize);  // 126
		CUtlBlockMemory<FileHandleTracker_t, int>::CUtlBlockMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 14
		CUtlBlockVector<FileHandleTracker_t, int>::CUtlBlockVector(
				int growSize,
				int initCapacity);  // 436
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 11
		CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
		CUtlStringList::CUtlStringList(); // 436
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 11
		CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
		CUtlStringList::CUtlStringList(); // 436
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 11
		CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
		CUtlStringList::CUtlStringList(); // 436
		CUtlMemory<bool, int>::ValidateGrowSize(); // 475
		CUtlMemory<bool, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<bool, CUtlMemory<bool, int> >::CUtlVector(); // 436
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 436
		CUtlStringToken::CUtlStringToken(); // 436
		CUtlString::CUtlString(); // 436
	}
} /* size: 0 */

// <002311F6> vpklib/packedstore.cpp:436
// variables: 18
void CPackedStore::CPackedStore(const char* pFileBasename, IFileSystem* pFS, int nOpenFlags, CPackedStore* pParent, const char* pParentFile, CUtlStringToken pathMergeToken)
{

InvalidFile: // 602
	const char   __FUNCTION__; // 25444
	{
		bool bOpenAppend; // 438
		bool bOpenForWrite; // 439
		{
			CPathBufferString fileName; // 460
			CInputFile dirFile; // 461
			{
				VPKDirHeader_t dirHeader; // 480
				uint32 nSizeOfHeader; // 505
				int nSize; // 506
				int cbVecHashes; // 544
				{
					int* _pCrash; // 498
				}
				{
					int nRemainingSize; // 521
					CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > readBuffer; // 527
					{
						int nReadSize; // 532
						{
							int i; // 536
						}
					}
				}
				{
					uint32 nExpectedSignedSize; // 581
					uint32 cubPublicKey; // 588
					uint32 cubSignature; // 594
					{
						int* _pCrash; // 584
					}
				}
			}
		}
	}
} /* size: 0, variables: 1, goto labels: 1 */

// <0023048C> vpklib/packedstore.cpp:613
// variables: 6
// function calls: 56
void CPackedStore::GetDataFileName(CBufferString* pFileNameOut, int nFileNumber)
{
	{
		CFmtStr unqualifiedFile; // 630
		CBufferStringN<8192> bufferString; // 632
		char* pNext; // 644
		{
			char* pParse; // 645
			{
				char* pSplit; // 647
				CPathBufferString testPath; // 659
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 83
				CFmtStrN<256>::operator char const*(); // 660
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 666
				strchr(char* __s,
					int __c);  // 194
				V_strchr(char* s,
					char c);  // 647
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 659
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 661
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 663
				CBufferString::WriteBuffer(); // 1390
				CBufferString::WriteBuffer(); // 1101
				CBufferString::RemoveAll(); // 901
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 663
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 666
			}
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 803
			CBufferString::Access(); // 645
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 630
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<8192>::CBufferStringN(); // 632
		CUtlString::IsEmpty(); // 633
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 637
		CBufferString::~CBufferString(); // 587
		CBufferStringN<8192>::~CBufferStringN(); // 667
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 667
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 641
	}
	CUtlStringToken::IsValid(); // 628
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 670
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 619
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 619
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 623
} /* size: 1310, inline expansions: 14 (541 bytes) */

// <0022D54A> vpklib/packedstore.cpp:675
// variables: 28
// function calls: 222
void CPackedStore::~CPackedStore()
{
	{
		{
			int i; // 682
		}
		{
			FileHandleTracker_t& fileHandle; // 687
			CUtlBlockVector<FileHandleTracker_t, int>& __for_range; // 7473
			iterator __for_begin; // 7484
			iterator __for_end; // 7495
			{
			}
		}
	}
	{
		CInterlockedIntT<int, 4>::operator int(); // 677
		{
			int i; // 682
			{
				CFileExtensionData* tmp; // 1018
				{
					int i; // 123
					{
						CFileDirectoryData* tmp; // 1018
						{
							entry_t* table; // 896
							CUtlMemory<CUtlHashtableEntry<char const::Base(); // 896
							{
								int i; // 897
								CUtlMemory<CUtlHashtableEntry<char const::Count(); // 897
								CUtlHashtableEntry<char const::IsValid(); // 899
								CUtlHashtableEntry<char const::MarkInvalid(); // 901
								Destruct<CUtlKeyValuePair<char const*, empty_t> >(CUtlKeyValuePair<char const*, empty_t>* pMemory); // 902
							}
						}
						CUtlHashtable<char const::RemoveAll(); // 188
						ValidateAlignment<CUtlHashtableEntry<char const*, empty_t> >(void); // 508
						CUtlMemory<CUtlHashtableEntry<char const::IsExternallyAllocated(); // 905
						CUtlMemory<CUtlHashtableEntry<char const::Purge(); // 903
						CUtlMemory<CUtlHashtableEntry<char const::Purge(); // 510
						CUtlMemory<CUtlHashtableEntry<char const::~CUtlMemory(); // 188
						CUtlHashtable<char const::~CUtlHashtable(); // 101
						CFileDirectoryData::~CFileDirectoryData(); // 1019
					}
					CUtlIntrusiveList<CFileDirectoryData>::Purge(); // 125
				}
				CFileExtensionData::~CFileExtensionData(); // 1019
			}
			CUtlIntrusiveList<CFileExtensionData>::Purge(); // 684
		}
		{
			FileHandleTracker_t& fileHandle; // 687
			CUtlBlockVector<FileHandleTracker_t, int>& __for_range; // 7473
			iterator __for_begin; // 7484
			iterator __for_end; // 7495
			iterator::iterator(
				CUtlBlockVector<FileHandleTracker_t, int>* pParent,
				int nIndex);  // 53
			CUtlBlockVector<FileHandleTracker_t, int>::begin(); // 687
			CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::Count(); // 54
			iterator::iterator(
				CUtlBlockVector<FileHandleTracker_t, int>* pParent,
				int nIndex);  // 54
			CUtlBlockVector<FileHandleTracker_t, int>::end(); // 687
			iterator::operator!=(
					const iterator& other);  // 687
			CUtlBlockMemory<FileHandleTracker_t, int>::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<FileHandleTracker_t, int>::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<FileHandleTracker_t, int>::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<FileHandleTracker_t, int>::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<FileHandleTracker_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::Element(
				int i);  // 44
			iterator::operator*(); // 687
			{
			}
			iterator::operator++(); // 687
			iterator::~iterator(); // 715
			iterator::~iterator(); // 715
		}
		{
			int i; // 1721
			CUtlBlockMemory<FileHandleTracker_t, int>::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<FileHandleTracker_t, int>::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<FileHandleTracker_t, int>::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<FileHandleTracker_t, int>::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<FileHandleTracker_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::Element(
				int i);  // 1723
			CThreadEvent::~CThreadEvent(); // 2177
			CThreadEvent::~CThreadEvent(); // 2177
			CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 106
			FileHandleTracker_t::~FileHandleTracker_t(); // 1526
			Destruct<FileHandleTracker_t>(FileHandleTracker_t* pMemory); // 1723
		}
		CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::RemoveAll(); // 1798
		{
			int i; // 359
		}
		CUtlBlockMemory<FileHandleTracker_t, int>::Purge(); // 354
		CUtlBlockMemory<FileHandleTracker_t, int>::Purge(); // 1799
		CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::Purge(); // 716
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 2401
		CInterlockedIntT<int, 4>::operator int(); // 2406
		CPackedStore::Release(); // 2399
		CPackedStore::Release(); // 720
		{
			int i; // 22
			CUtlVectorBase<char::Count(); // 22
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 24
		}
		CUtlVectorBase<char::RemoveAll(); // 26
		CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 31
		CUtlStringList_Base<CUtlVector<char::PurgeAndDeleteElements(); // 725
		{
			int i; // 22
			CUtlVectorBase<char::Count(); // 22
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 24
		}
		CUtlVectorBase<char::RemoveAll(); // 26
		CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 31
		CUtlStringList_Base<CUtlVector<char::PurgeAndDeleteElements(); // 726
		{
			int i; // 22
			CUtlVectorBase<char::Count(); // 22
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 24
		}
		CUtlVectorBase<char::RemoveAll(); // 26
		CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 31
		CUtlStringList_Base<CUtlVector<char::PurgeAndDeleteElements(); // 727
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 679
		CUtlString::~CUtlString(); // 728
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveAll(); // 1798
		CUtlMemory<bool, int>::IsExternallyAllocated(); // 905
		CUtlMemory<bool, int>::Purge(); // 903
		CUtlMemory<bool, int>::Purge(); // 1799
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::Purge(); // 560
		ValidateAlignment<bool>(void); // 508
		CUtlMemory<bool, int>::Purge(); // 510
		CUtlMemory<bool, int>::~CUtlMemory(); // 562
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::~CUtlVectorBase(); // 410
		CUtlVector<bool, CUtlMemory<bool, int> >::~CUtlVector(); // 728
		{
			int i; // 22
			CUtlVectorBase<char::Count(); // 22
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 24
		}
		CUtlVectorBase<char::RemoveAll(); // 26
		CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 18
		CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
		CUtlStringList::~CUtlStringList(); // 728
		{
			int i; // 22
			CUtlVectorBase<char::Count(); // 22
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 24
		}
		CUtlVectorBase<char::RemoveAll(); // 26
		CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 18
		CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
		CUtlStringList::~CUtlStringList(); // 728
		{
			int i; // 22
			CUtlVectorBase<char::Count(); // 22
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 24
		}
		CUtlVectorBase<char::RemoveAll(); // 26
		CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 18
		CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
		CUtlStringList::~CUtlStringList(); // 728
		{
			int i; // 1721
			CUtlBlockMemory<FileHandleTracker_t, int>::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<FileHandleTracker_t, int>::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<FileHandleTracker_t, int>::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<FileHandleTracker_t, int>::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<FileHandleTracker_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::Element(
				int i);  // 1723
			CThreadEvent::~CThreadEvent(); // 2177
			CThreadEvent::~CThreadEvent(); // 2177
			CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 106
			FileHandleTracker_t::~FileHandleTracker_t(); // 1526
			Destruct<FileHandleTracker_t>(FileHandleTracker_t* pMemory); // 1723
		}
		CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::RemoveAll(); // 1798
		{
			int i; // 359
		}
		CUtlBlockMemory<FileHandleTracker_t, int>::Purge(); // 354
		CUtlBlockMemory<FileHandleTracker_t, int>::Purge(); // 1799
		CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::Purge(); // 560
		CUtlBlockMemory<FileHandleTracker_t, int>::Purge(); // 132
		CUtlBlockMemory<FileHandleTracker_t, int>::~CUtlBlockMemory(); // 562
		CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::~CUtlVectorBase(); // 10
		CUtlBlockVector<FileHandleTracker_t, int>::~CUtlBlockVector(); // 728
		{
			entry_t* table; // 896
			CUtlMemory<CUtlHashtableEntry<int, int>, int>::Base(); // 896
			{
				int i; // 897
				CUtlMemory<CUtlHashtableEntry<int, int>, int>::Count(); // 897
				CUtlHashtableEntry<int, int>::IsValid(); // 899
				CUtlHashtableEntry<int, int>::MarkInvalid(); // 901
				Destruct<CUtlKeyValuePair<int, int> >(CUtlKeyValuePair<int, int>* pMemory); // 902
			}
		}
		RemoveAll(const CUtlHashtable<int, int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEnt this); // 188
		ValidateAlignment<CUtlHashtableEntry<int, int> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<int, int>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<int, int>, int>::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<int, int>, int>::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<int, int>, int>::~CUtlMemory(); // 188
		~CUtlHashtable(const CUtlHashtable<int, int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEnt this); // 728
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 1799
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 728
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 1799
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 728
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 1799
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 728
		CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::RemoveAll(); // 1798
		{
			int i; // 359
		}
		CUtlBlockMemory<unsigned char, int>::Purge(); // 354
		CUtlBlockMemory<unsigned char, int>::Purge(); // 1799
		CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::Purge(); // 560
		CUtlBlockMemory<unsigned char, int>::Purge(); // 132
		CUtlBlockMemory<unsigned char, int>::~CUtlBlockMemory(); // 562
		CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::~CUtlVectorBase(); // 10
		CUtlBlockVector<unsigned char, int>::~CUtlBlockVector(); // 728
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 1799
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 728
		CThreadEvent::~CThreadEvent(); // 2177
		CThreadEvent::~CThreadEvent(); // 2177
		CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 728
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 728
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 728
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 728
	}
} /* size: 0 */

// <0022D4C2> vpklib/packedstore.cpp:675
// variables: 7
void CPackedStore::~CPackedStore()
{
	const char   __FUNCTION__; // 25471
	{
		int i; // 682
	}
	{
		FileHandleTracker_t& fileHandle; // 687
		CUtlBlockVector<FileHandleTracker_t, int>& __for_range; // 7533
		iterator __for_begin; // 62019
		iterator __for_end; // 62019
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 696
		}
	}
} /* size: 0, variables: 1 */

// <00241F03> vpklib/packedstore.cpp:730
// variable: 1
// function calls: 32
void SplitFileComponents(const char* pFileName, CBufferString* pDirOut, CBufferString* pBaseOut, CBufferString* pExtOut)
{
	char* pDot; // 742
	CBufferString::IsEmpty(); // 733
	CBufferString::IsEmpty(); // 1299
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1304
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 895
	V_strlen(const char* str); // 895
	CBufferString::SyncStringChars(); // 1305
	CBufferString::ReadBuffer(); // 1306
	CBufferString::FixDoubleSlashes(); // 1297
	CBufferString::FixDoubleSlashes(); // 736
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 741
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 742
	strrchr(char* __s,
		int __c);  // 212
	V_strrchr(char* s,
			char c);  // 742
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 895
	V_strlen(const char* str); // 895
	CBufferString::SyncStringChars(); // 746
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 734
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 751
} /* size: 613, variables: 1, inline expansions: 32 (1058 bytes) */

// <0022D471> vpklib/packedstore.cpp:730
// variable: 1
void SplitFileComponents(const char* pFileName, CBufferString* pDirOut, CBufferString* pBaseOut, CBufferString* pExtOut)
{
	char* pDot; // 742
} /* size: 0, variables: 1 */

// <0022CB6D> vpklib/packedstore.cpp:758
// variables: 5
// function calls: 40
void CPackedStore::OpenFile(const char* pFileName)
{
	CPathBufferString dirName; // 760
	CPathBufferString baseName; // 761
	CExtBufferString extName; // 762
	CPackedStoreFileHandle ret; // 765
	CFileHeaderFixedData* pHeader; // 767
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 760
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 761
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<20>::CBufferStringN(); // 762
	CPackedStoreFileHandle::CPackedStoreFileHandle(); // 765
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 767
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 767
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 767
	CPackedInt<short unsigned int>::operator short unsigned int(); // 771
	CPackedInt<unsigned int>::operator unsigned int(); // 772
	CPackedInt<short unsigned int>::operator short unsigned int(); // 773
	CPackedInt<unsigned int>::operator unsigned int(); // 773
	CPackedInt<short unsigned int>::operator short unsigned int(); // 289
	CFileHeaderFixedData::MetaData(); // 775
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 779
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 779
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 779
	CBufferString::~CBufferString(); // 587
	CBufferStringN<20>::~CBufferStringN(); // 788
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 788
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 788
} /* size: 644, variables: 5, inline expansions: 40 (917 bytes) */

// <0022C9FC> vpklib/packedstore.cpp:802
// function call: 1
void CPackedStoreMemoryMappedFile::~CPackedStoreMemoryMappedFile()
{
	IMemoryMappedFile::~IMemoryMappedFile(); // 802
} /* size: 5, inline expansions: 1 (0 bytes) */

// <0022C946> vpklib/packedstore.cpp:802
// function calls: 2
void CPackedStoreMemoryMappedFile::~CPackedStoreMemoryMappedFile()
{
	IMemoryMappedFile::~IMemoryMappedFile(); // 802
	CPackedStoreMemoryMappedFile::~CPackedStoreMemoryMappedFile(); // 802
} /* size: 14, inline expansions: 2 (0 bytes) */

// <0022C929> vpklib/packedstore.cpp:802
inline void CPackedStoreMemoryMappedFile::~CPackedStoreMemoryMappedFile()
{
} /* size: 0 */

// <0020AE0B> vpklib/packedstore.cpp:802
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 32
class CPackedStoreMemoryMappedFile : public IMemoryMappedFile {
public:
	/* class IMemoryMappedFile <ancestor>; */ /* 0 32 */
	void CPackedStoreMemoryMappedFile(CPackedStoreMemoryMappedFile* , CPackedStoreMemoryMappedFile& );
	void CPackedStoreMemoryMappedFile(CPackedStoreMemoryMappedFile* , const CPackedStoreMemoryMappedFile& );
	/* vpklib/packedstore.cpp:805 */
	void CPackedStoreMemoryMappedFile(CPackedStoreMemoryMappedFile* , void* , size_t);
	/* vpklib/packedstore.cpp:812 */
	virtual bool WriteToContents(CPackedStoreMemoryMappedFile* , size_t, const void* , size_t);
protected:
	/* vpklib/packedstore.cpp:815 */
	virtual void ReachedZeroReferences(CPackedStoreMemoryMappedFile* );
	virtual void ~CPackedStoreMemoryMappedFile(CPackedStoreMemoryMappedFile* );
	void CPackedStoreMemoryMappedFile(class CPackedStoreMemoryMappedFile *, class CPackedStoreMemoryMappedFile &); /* linkage=_ZN28CPackedStoreMemoryMappedFileC4EOS_ */
	void CPackedStoreMemoryMappedFile(class CPackedStoreMemoryMappedFile *, const class CPackedStoreMemoryMappedFile  &); /* linkage=_ZN28CPackedStoreMemoryMappedFileC4ERKS_ */
	void CPackedStoreMemoryMappedFile(class CPackedStoreMemoryMappedFile *, void *, size_t); /* linkage=_ZN28CPackedStoreMemoryMappedFileC4EPvm */
	virtual bool WriteToContents(class CPackedStoreMemoryMappedFile *, size_t, const void  *, size_t); /* linkage=_ZN28CPackedStoreMemoryMappedFile15WriteToContentsEmPKvm */
	/* <23b078> vpklib/packedstore.cpp:815 */
	virtual void ReachedZeroReferences(class CPackedStoreMemoryMappedFile *); /* linkage=_ZN28CPackedStoreMemoryMappedFile21ReachedZeroReferencesEv */
	virtual void ~CPackedStoreMemoryMappedFile(class CPackedStoreMemoryMappedFile *); /* linkage=_ZN28CPackedStoreMemoryMappedFileD4Ev */
} __attribute__((__aligned__(8)));

// <0022CB4C> vpklib/packedstore.cpp:805
void CPackedStoreMemoryMappedFile::CPackedStoreMemoryMappedFile(void* pMappedMemory, size_t nSize)
{
} /* size: 0 */

// <0022CB19> vpklib/packedstore.cpp:805
inline void CPackedStoreMemoryMappedFile::CPackedStoreMemoryMappedFile(void* pMappedMemory, size_t nSize)
{
} /* size: 0 */

// <0022CA5C> vpklib/packedstore.cpp:812
// variables: 2
void CPackedStoreMemoryMappedFile::WriteToContents(size_t nOffset, const void* pSource, size_t nWriteCount)
{
	const char   __FUNCTION__; // 25520
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 812
	}
} /* size: 29, variables: 1 */

// <0023B078> vpklib/packedstore.cpp:815
// variable: 1
void CPackedStoreMemoryMappedFile::ReachedZeroReferences()
{
	void* pFreeAddr; // 820
} /* size: 62, variables: 1 */

// <0022C903> vpklib/packedstore.cpp:815
// variable: 1
inline void CPackedStoreMemoryMappedFile::ReachedZeroReferences()
{
	void* pFreeAddr; // 820
} /* size: 0, variables: 1 */

// <0020D8A8> vpklib/packedstore.cpp:833
// function calls: 2
void CPackedStoreMemoryMappedFile_HierarchicalParent::~CPackedStoreMemoryMappedFile_HierarchicalParent()
{
	IMemoryMappedFile::~IMemoryMappedFile(); // 802
	CPackedStoreMemoryMappedFile::~CPackedStoreMemoryMappedFile(); // 833
} /* size: 5, inline expansions: 2 (0 bytes) */

// <0020D7C1> vpklib/packedstore.cpp:833
// function calls: 3
void CPackedStoreMemoryMappedFile_HierarchicalParent::~CPackedStoreMemoryMappedFile_HierarchicalParent()
{
	IMemoryMappedFile::~IMemoryMappedFile(); // 802
	CPackedStoreMemoryMappedFile::~CPackedStoreMemoryMappedFile(); // 833
	CPackedStoreMemoryMappedFile_HierarchicalParent::~CPackedStoreMemoryMappedFile_HierarchicalParent(); // 833
} /* size: 14, inline expansions: 3 (0 bytes) */

// <0020D7A4> vpklib/packedstore.cpp:833
inline void CPackedStoreMemoryMappedFile_HierarchicalParent::~CPackedStoreMemoryMappedFile_HierarchicalParent()
{
} /* size: 0 */

// <0020AD27> vpklib/packedstore.cpp:833
// member functions: 10
// member variables: 2
// vtable entry: 1
// class size: 40
class CPackedStoreMemoryMappedFile_HierarchicalParent : public CPackedStoreMemoryMappedFile {
public:
	/* class CPackedStoreMemoryMappedFile <ancestor>; */ /* 0 32 */
	void CPackedStoreMemoryMappedFile_HierarchicalParent(CPackedStoreMemoryMappedFile_HierarchicalParent* , CPackedStoreMemoryMappedFile_HierarchicalParent& );
	void CPackedStoreMemoryMappedFile_HierarchicalParent(CPackedStoreMemoryMappedFile_HierarchicalParent* , const CPackedStoreMemoryMappedFile_HierarchicalParent& );
	/* vpklib/packedstore.cpp:836 */
	void CPackedStoreMemoryMappedFile_HierarchicalParent(CPackedStoreMemoryMappedFile_HierarchicalParent* , FileHandleTracker_t& , void* , size_t);
	/* vpklib/packedstore.cpp:841 */
	virtual void ReachedZeroReferences(CPackedStoreMemoryMappedFile_HierarchicalParent* );
private:
	FileHandleTracker_t & m_ownerFileHandle; /* 32 8 */
	virtual void ~CPackedStoreMemoryMappedFile_HierarchicalParent(CPackedStoreMemoryMappedFile_HierarchicalParent* );
	void CPackedStoreMemoryMappedFile_HierarchicalParent(class CPackedStoreMemoryMappedFile_HierarchicalParent *, class CPackedStoreMemoryMappedFile_HierarchicalParent &); /* linkage=_ZN47CPackedStoreMemoryMappedFile_HierarchicalParentC4EOS_ */
	void CPackedStoreMemoryMappedFile_HierarchicalParent(class CPackedStoreMemoryMappedFile_HierarchicalParent *, const class CPackedStoreMemoryMappedFile_HierarchicalParent  &); /* linkage=_ZN47CPackedStoreMemoryMappedFile_HierarchicalParentC4ERKS_ */
	void CPackedStoreMemoryMappedFile_HierarchicalParent(class CPackedStoreMemoryMappedFile_HierarchicalParent *, class FileHandleTracker_t &, void *, size_t); /* linkage=_ZN47CPackedStoreMemoryMappedFile_HierarchicalParentC4ER19FileHandleTracker_tPvm */
	virtual void ReachedZeroReferences(class CPackedStoreMemoryMappedFile_HierarchicalParent *); /* linkage=_ZN47CPackedStoreMemoryMappedFile_HierarchicalParent21ReachedZeroReferencesEv */
	virtual void ~CPackedStoreMemoryMappedFile_HierarchicalParent(class CPackedStoreMemoryMappedFile_HierarchicalParent *); /* linkage=_ZN47CPackedStoreMemoryMappedFile_HierarchicalParentD4Ev */
} __attribute__((__aligned__(8)));

// <0022C8DD> vpklib/packedstore.cpp:836
void CPackedStoreMemoryMappedFile_HierarchicalParent::CPackedStoreMemoryMappedFile_HierarchicalParent(FileHandleTracker_t& fileHandle, void* pMappedMemory, size_t nSize)
{
} /* size: 0 */

// <0022C89D> vpklib/packedstore.cpp:836
inline void CPackedStoreMemoryMappedFile_HierarchicalParent::CPackedStoreMemoryMappedFile_HierarchicalParent(FileHandleTracker_t& fileHandle, void* pMappedMemory, size_t nSize)
{
} /* size: 0 */

// <0022C584> vpklib/packedstore.cpp:841
// variable: 1
// function calls: 10
void CPackedStoreMemoryMappedFile_HierarchicalParent::ReachedZeroReferences()
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_843; // 843
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 843
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 844
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 849
	CPackedStoreMemoryMappedFile::ReachedZeroReferences(); // 847
} /* size: 285, variables: 1, inline expansions: 10 (632 bytes) */

// <0022BF27> vpklib/packedstore.cpp:855
// variables: 5
// function calls: 25
void CPackedStore::DoesDirectoryExist(const char* pDirectory)
{
	CPathBufferString fixedDirName; // 857
	int nDirHash; // 863
	{
		int i; // 864
		{
			CFileExtensionData* pExt; // 866
			{
				const CFileDirectoryData* pDir; // 868
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 868
				FindNamedNodeCaseSensitive<CFileDirectoryData>(CFileDirectoryData* head,
										const char* name);  // 1048
				CUtlIntrusiveList<CFileDirectoryData>::FindNamedNodeCaseSensitive(
								const char* pName);  // 868
			}
			CUtlIntrusiveList<CFileExtensionData>::Head(); // 866
		}
	}
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 857
	CBufferString::IsEmpty(); // 1299
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1304
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 895
	V_strlen(const char* str); // 895
	CBufferString::SyncStringChars(); // 1305
	CBufferString::ReadBuffer(); // 1306
	CBufferString::FixDoubleSlashes(); // 1297
	CBufferString::FixDoubleSlashes(); // 859
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 863
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 874
} /* size: 0, variables: 2, inline expansions: 19 (0 bytes) */

// <0022A542> vpklib/packedstore.cpp:876
// variables: 9
// function calls: 108
void CPackedStore::Write()
{
	const char   __FUNCTION__; // 25255
	CUtlBuffer bufDirFile; // 883
	VPKDirHeader_t headerOut; // 885
	CPathBufferString outFileName; // 990
	COutputFile dirFile; // 1009
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
	}
	{
		int* _pCrash; // 907
	}
	{
		int i; // 917
		CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::Count(); // 917
		CUtlBlockMemory<unsigned char, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<unsigned char, int>::IsIdxValid(
				int i);  // 191
		CUtlBlockMemory<unsigned char, int>::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<unsigned char, int>::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<unsigned char, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::operator[](
				int i);  // 919
		CUtlBuffer::IsText(); // 1253
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1256
		CUtlBuffer::WasLastCharacterCR(); // 1303
		{
			int i; // 1262
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1264
		}
		CUtlBuffer::PutTabs(); // 1305
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1308
		CUtlBuffer::PutChar(
			char c);  // 919
	}
	CUtlStringToken::IsValid(); // 879
	CPackedInt<int>::CPackedInt(); // 56
	CPackedInt<int>::CPackedInt(); // 56
	CPackedInt<int>::CPackedInt(); // 56
	CPackedInt<int>::CPackedInt(); // 56
	CPackedInt<int>::CPackedInt(); // 56
	CPackedInt<int>::CPackedInt(); // 56
	CPackedInt<int>::CPackedInt(); // 56
	CPackedInt<int>::operator=(
			int val);  // 57
	CPackedInt<int>::operator=(
			int val);  // 58
	CPackedInt<int>::operator=(
			int val);  // 63
	CPackedInt<int>::operator=(
			int val);  // 59
	CPackedInt<int>::operator=(
			int val);  // 60
	CPackedInt<int>::operator=(
			int val);  // 61
	CPackedInt<int>::operator=(
			int val);  // 62
	VPKDirHeader_t::VPKDirHeader_t(); // 885
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 897
	CPackedInt<int>::operator=(
			int val);  // 886
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 886
	CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::Count(); // 887
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 901
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 901
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 907
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 912
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 213
	CPackedStore::DirectoryData(); // 912
	CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::Count(); // 914
	CUtlBuffer::TellPut(); // 916
	CUtlBuffer::TellPut(); // 933
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 933
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 994
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 990
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 995
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 996
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 997
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 998
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1009
	CBaseFile::CBaseFile(); // 299
	CBaseFile::Open(
		const char* fname,
		const char* modes);  // 296
	COutputFile::Open(
		const char* pFname);  // 301
	COutputFile::COutputFile(
			const char* pFname);  // 1009
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 267
	CBaseFile::IsOk(); // 1010
	CBaseFile::Write(
		const void* pInput,
		int size);  // 1012
	CUtlBuffer::TellPut(); // 1012
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 1012
	CUtlBuffer::TellPut(); // 1012
	CBaseFile::Close(); // 181
	CBaseFile::~CBaseFile(); // 291
	COutputFile::~COutputFile(); // 1017
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1017
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1017
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 999
	CBaseFile::Close(); // 1014
} /* size: 0, variables: 5, inline expansions: 87 (0 bytes) */

// <00229DF2> vpklib/packedstore.cpp:1076
// variables: 9
// function calls: 19
void CPackedStore::ReadData(CPackedStoreFileHandle& handle, void* pOutData, int nNumBytes)
{
	int nRet; // 1078
	const char   __FUNCTION__; // 25336
	{
		int nNumMetaDataBytes; // 1085
		{
			FileHandleTracker_t& fHandle; // 1098
			int nDesiredPos; // 1099
			int nRead; // 1100
			{
				CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_1110; // 1110
				ThreadInterlockedIncrement(volatile int32* p); // 576
				CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
				CThreadRWLock_FastRead::LockForRead(
						const char* pFileName,
						int nLineNumber);  // 951
				Lock(CThreadRWLock_FastRead& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
						const CThreadRWLock_FastRead& lock,
						const char* pFilename,
						int nLineNumber);  // 1110
				ThreadInterlockedDecrement(volatile int32* p); // 586
				CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
				CThreadRWLock_FastRead::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 952
				Unlock(CThreadRWLock_FastRead& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1112
			}
			{
				CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1116; // 1116
				CInterlockedIntT<int, 4>::GetRaw(); // 3180
				ThreadInterlockedExchangeAdd(volatile int32* p,
								int32 value);  // 660
				CInterlockedIntT<unsigned int, 4>::AtomicAdd(
						unsigned int add);  // 3189
				CThreadRWLock_FastRead::LockForWrite(
						const char* pFileName,
						int nLineNumber);  // 959
				Lock(CThreadRWLock_FastRead& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
						const CThreadRWLock_FastRead& lock,
						const char* pFilename,
						int nLineNumber);  // 1116
				Unlock(CThreadRWLock_FastRead& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1119
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1120
			}
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 1088
	}
} /* size: 0, variables: 2 */

// <00228F7F> vpklib/packedstore.cpp:1132
// variables: 12
// function calls: 42
void CPackedStore::MemoryMapFile(CPackedStoreFileHandle& handle, MemoryMappedFileFlags_t nFlags)
{
	{
		FileHandleTracker_t& fileHandle; // 1139
		CSemiAutoRWLockT<CThreadRWLock_FastRead> mutexHelper; // 1141
		bool bUseHierarchicalMemoryMap; // 1144
		{
			OSFILEHANDLE hMemoryMappingHandle; // 1163
			{
				void* pMappedAddr; // 1194
				size_t nAlignmentOffset; // 1195
				uint64 nSize; // 1196
				IMemoryMappedFile* pMappedFile; // 1255
				{
					uint64 nOffset; // 1200
					uint64 nMappedOffset; // 1219
					{
						_DebuggerBreakInlineExpressionWrapper(void); // 1204
					}
				}
				CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(
						unsigned int value);  // 225
				IMemoryMappedFile::IMemoryMappedFile(); // 806
				CPackedStoreMemoryMappedFile::CPackedStoreMemoryMappedFile(
								void* pMappedMemory,
								size_t nSize);  // 1266
				CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(
						unsigned int value);  // 225
				IMemoryMappedFile::IMemoryMappedFile(); // 806
				CPackedStoreMemoryMappedFile::CPackedStoreMemoryMappedFile(
								void* pMappedMemory,
								size_t nSize);  // 838
				CPackedStoreMemoryMappedFile_HierarchicalParent::CPackedStoreMemoryMappedFile_HierarchicalParent(
										FileHandleTracker_t& fileHandle,
										void* pMappedMemory,
										size_t nSize);  // 1260
				CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
					const char* pFileName,
					int nLineNumber);  // 1273
			}
		}
		{
			{
				uint64 nOffset; // 1296
				CMemoryMappedFileSection_SelfDelete* pRet; // 1301
				{
					IMemoryMappedFile::GetMappedSize(); // 279
					ThreadInterlockedIncrement(volatile int32* p); // 576
					CInterlockedIntT<unsigned int, 4>::operator++(); // 233
					IMemoryMappedFile::AddRef(); // 281
					IMemoryMappedFile::GetMappedMemory(); // 283
					IMemoryMappedFile::GetFlags(); // 285
					CMemoryMappedFileSection::MapSubsection(
							IMemoryMappedFile* pParentFile,
							size_t nOffset,
							size_t nSize);  // 276
					CMemoryMappedFileSection::MapSubsection(
							IMemoryMappedFile* pParentFile,
							size_t nOffset,
							size_t nSize);  // 1302
					_DebuggerBreakInlineExpressionWrapper(void); // 1302
				}
				CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(
						unsigned int value);  // 225
				IMemoryMappedFile::IMemoryMappedFile(); // 268
				CMemoryMappedFileSection::CMemoryMappedFileSection(); // 318
				CMemoryMappedFileSection_SelfDelete::CMemoryMappedFileSection_SelfDelete(); // 1301
				CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 238
				{
				}
				ThreadInterlockedDecrement(volatile int32* p); // 586
				CInterlockedIntT<unsigned int, 4>::operator--(); // 239
				IMemoryMappedFile::Release(); // 236
				IMemoryMappedFile::Release(); // 1308
			}
			_DebuggerBreakInlineExpressionWrapper(void); // 1293
		}
		CSemiAutoRWLockT<CThreadRWLock_FastRead>::CSemiAutoRWLockT(
				CThreadRWLock_FastRead* pLock);  // 1141
		CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
			const char* pFileName,
			int nLineNumber);  // 1113
		CSemiAutoRWLockT<CThreadRWLock_FastRead>::~CSemiAutoRWLockT(); // 1313
		CInterlockedIntT<int, 4>::GetRaw(); // 3180
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 3189
		CThreadRWLock_FastRead::LockForWrite(
				const char* pFileName,
				int nLineNumber);  // 1074
		CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite(
				const char* pFileName,
				int nLineNumber);  // 1152
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<unsigned int, 4>::operator++(); // 233
		IMemoryMappedFile::AddRef(); // 1155
		CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
			const char* pFileName,
			int nLineNumber);  // 1156
		CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
			const char* pFileName,
			int nLineNumber);  // 1113
		CSemiAutoRWLockT<CThreadRWLock_FastRead>::~CSemiAutoRWLockT(); // 1313
	}
} /* size: 0 */

// <00228F3B> vpklib/packedstore.cpp:1318
void CPackedStore::DiscardChunkHashes(int iChunkFileIndex)
{
} /* size: 0 */

// <00243201> vpklib/packedstore.cpp:1387
void CPackedStore::HashAllChunkFiles()
{
} /* size: 0 */

// <002429F4> vpklib/packedstore.cpp:1405
// variable: 1
// function calls: 4
void CPackedStore::ComputeDirectoryHash(MD5Value_t& md5Directory)
{
	MD5Context_t ctx; // 1407
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1408
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 1410
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1410
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <00228EE7> vpklib/packedstore.cpp:1405
// variable: 1
void CPackedStore::ComputeDirectoryHash(MD5Value_t& md5Directory)
{
	MD5Context_t ctx; // 1407
} /* size: 0, variables: 1 */

// <00242B76> vpklib/packedstore.cpp:1415
// variable: 1
// function call: 1
void CPackedStore::ComputeChunkHash(MD5Value_t& md5ChunkHashes)
{
	MD5Context_t ctx; // 1417
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1418
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00228EB0> vpklib/packedstore.cpp:1415
// variable: 1
void CPackedStore::ComputeChunkHash(MD5Value_t& md5ChunkHashes)
{
	MD5Context_t ctx; // 1417
} /* size: 0, variables: 1 */

// <00242C45> vpklib/packedstore.cpp:1427
// variable: 1
void CPackedStore::BTestDirectoryHash()
{
	MD5Value_t md5Directory; // 1431
} /* size: 0, variables: 1 */

// <00228E5C> vpklib/packedstore.cpp:1437
// variable: 1
void CPackedStore::BTestMasterChunkHash()
{
	MD5Value_t md5ChunkHashes; // 1441
} /* size: 0, variables: 1 */

// <00228B4B> vpklib/packedstore.cpp:1447
// function calls: 9
void CPackedStore::HashEverything()
{
	CPackedStore::HashAllChunkFiles(); // 1449
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1408
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 1410
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1410
	CPackedStore::ComputeDirectoryHash(
				MD5Value_t& md5Directory);  // 1455
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1418
	CPackedStore::ComputeChunkHash(
			MD5Value_t& md5ChunkHashes);  // 1456
	CPackedStore::HashMetadata(); // 1450
} /* size: 0, inline expansions: 9 (0 bytes) */

// <00242C75> vpklib/packedstore.cpp:1453
// function calls: 7
void CPackedStore::HashMetadata()
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1408
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 1410
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1410
	CPackedStore::ComputeDirectoryHash(
				MD5Value_t& md5Directory);  // 1455
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1418
	CPackedStore::ComputeChunkHash(
			MD5Value_t& md5ChunkHashes);  // 1456
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00228B2E> vpklib/packedstore.cpp:1453
void CPackedStore::HashMetadata()
{
} /* size: 0 */

// <00228AAE> vpklib/packedstore.cpp:1459
void CPackedStore::GetPackFileName(CPackedStoreFileHandle& handle, CBufferString* pFileNameOut)
{
} /* size: 0 */

// <00227763> vpklib/packedstore.cpp:1464
// variables: 6
// function calls: 72
void CPackedStore::GetFileHandle(int nFileNumber)
{
	CSemiAutoRWLockT<CThreadRWLock_FastRead> lockHelper; // 1466
	int nFileHandleIndex; // 1469
	const char   __FUNCTION__; // 25471
	{
		FileHandleTracker_t& handle; // 1493
		CPathBufferString dataFileName; // 1497
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1510
		}
		CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite(
				const char* pFileName,
				int nLineNumber);  // 1478
		Find(const CUtlHashtable<int, int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashta this,
			KeyArg_t k);  // 302
		CUtlMemory<CUtlHashtableEntry<int, int>, int>::operator[](
				int i);  // 294
		CUtlKeyValuePair<int, int>::GetValue(); // 294
		Element(const CUtlHashtable<int, int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashta this,
			handle_t idx);  // 302
		Get(const CUtlHashtable<int, int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashta this,
			KeyArg_t k,
			const Element_t& defaultValue);  // 1484
		CUtlBlockMemory<FileHandleTracker_t, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<FileHandleTracker_t, int>::IsIdxValid(
				int i);  // 191
		CUtlBlockMemory<FileHandleTracker_t, int>::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<FileHandleTracker_t, int>::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<FileHandleTracker_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::operator[](
				int i);  // 1487
		CUtlBlockMemory<FileHandleTracker_t, int>::NumElementsInBlock(); // 227
		CUtlBlockMemory<FileHandleTracker_t, int>::NumAllocated(); // 1143
		CUtlBlockMemory<FileHandleTracker_t, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<FileHandleTracker_t, int>::IsIdxValid(
				int i);  // 191
		CUtlBlockMemory<FileHandleTracker_t, int>::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<FileHandleTracker_t, int>::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<FileHandleTracker_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::Element(
			int i);  // 1148
		FileHandleTracker_t::FileHandleTracker_t(); // 1479
		Construct<FileHandleTracker_t>(FileHandleTracker_t* pMemory); // 1148
		CUtlBlockMemory<FileHandleTracker_t, int>::Grow(
			int num);  // 247
		CUtlBlockMemory<FileHandleTracker_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::AddToTail(); // 1490
		CUtlMemory<CUtlHashtableEntry<int, int>, int>::operator[](
				int i);  // 720
		CUtlKeyValuePair<int, int>::CUtlKeyValuePair<int, int>(
						const int& k,
						const int& v);  // 1514
		Construct<CUtlKeyValuePair<int, int>, int&, int&>(CUtlKeyValuePair<int, int>* pMemory); // 720
		DoInsert<int>(const CUtlHashtable<int, int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEnt this,
				int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 714
		DoInsert<int>(const CUtlHashtable<int, int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEnt this,
				int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 249
		Insert(const CUtlHashtable<int, int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEnt this,
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 1491
		CUtlBlockMemory<FileHandleTracker_t, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<FileHandleTracker_t, int>::IsIdxValid(
				int i);  // 191
		CUtlBlockMemory<FileHandleTracker_t, int>::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<FileHandleTracker_t, int>::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<FileHandleTracker_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::operator[](
				int i);  // 1493
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1497
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1514
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1503
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1518
	}
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::CSemiAutoRWLockT(
			CThreadRWLock_FastRead* pLock);  // 1466
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 1045
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForRead(
			const char* pFileName,
			int nLineNumber,
			bool bHoldExistingWriteLockInstead);  // 1468
	Mix32HashFunctor::operator(
			uint32 n);  // 218
	Find(const CUtlHashtable<int, int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashta this,
		KeyArg_t k);  // 302
	CUtlMemory<CUtlHashtableEntry<int, int>, int>::operator[](
			int i);  // 294
	CUtlKeyValuePair<int, int>::GetValue(); // 294
	Element(const CUtlHashtable<int, int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashta this,
		handle_t idx);  // 302
	Get(const CUtlHashtable<int, int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashta this,
		KeyArg_t k,
		const Element_t& defaultValue);  // 1469
	CUtlBlockMemory<FileHandleTracker_t, int>::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<FileHandleTracker_t, int>::IsIdxValid(
			int i);  // 191
	CUtlBlockMemory<FileHandleTracker_t, int>::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<FileHandleTracker_t, int>::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<FileHandleTracker_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<FileHandleTracker_t, CUtlBlockMemory<FileHandleTracker_t, int> >::operator[](
			int i);  // 1472
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 1098
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1113
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::~CSemiAutoRWLockT(); // 1519
} /* size: 0, variables: 3, inline expansions: 22 (1116 bytes) */

// <002276E2> vpklib/packedstore.cpp:1521
void CPackedStore::RemoveFileFromDirectory(const char* pszName)
{
} /* size: 0 */

// <002272BF> vpklib/packedstore.cpp:1532
// variables: 3
// function calls: 15
void CPackedStore::InternalRemoveFileFromDirectory(const char* pszName)
{
	CPackedStoreFileHandle pData; // 1534
	CFileHeaderFixedData* pHeader; // 1538
	int nBytesToRemove; // 1540
	CPackedStoreFileHandle::operator bool(); // 1535
	V_strlen(const char* str); // 1540
	CPackedInt<short unsigned int>::operator short unsigned int(); // 74
	CPackedInt<short unsigned int>::operator short unsigned int(); // 77
	CFileHeaderFixedData::HeaderSizeIncludingMetaData(); // 1540
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1541
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
		int i);  // 1114
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1661
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveMultiple(
			int elem,
			int num);  // 1541
} /* size: 0, variables: 3, inline expansions: 15 (0 bytes) */

// <00212439> vpklib/packedstore.cpp:1545
// variables: 50
// function calls: 299
void CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >& vecFilesToAddOrUpdate, const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& vecFilesToRemove)
{
	CUtlVector<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> > vecExistingFiles; // 1583
	CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >&)::FileSort_t, int, CDefLess<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >&)::FileSort_t>, CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<CUtlString, CUtlMemory<CUtlSt treeFiles; // 1587
	const char   __FUNCTION__; // 25865
	CUtlBuffer bufTempDirectory; // 1624
	const char* pszPrevExt; // 1626
	const char* pszPrevDir; // 1627
	{
		const VPKContentFileInfo_t& f; // 1589
		CUtlVector<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >& __for_range; // 4414
		iterator __for_begin; // 48589
		iterator __for_end; // 48589
		{
			FileSort_t x; // 1591
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 1557
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<20>::CBufferStringN(); // 1559
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 1558
			CBufferString::~CBufferString(); // 587
			CBufferStringN<20>::~CBufferStringN(); // 1564
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 1564
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 1564
			FileSort_t::SetName(
				const char* pName);  // 1592
			CUtlString::CUtlString(); // 1547
			CUtlString::CUtlString(); // 1547
			CUtlString::CUtlString(); // 1547
			FileSort_t::FileSort_t(); // 1591
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1592
			CUtlString::~CUtlString(); // 1547
			CUtlString::~CUtlString(); // 1547
			CUtlString::~CUtlString(); // 1547
			FileSort_t::~FileSort_t(); // 1596
		}
		CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::end(); // 1589
	}
	{
		const VPKContentFileInfo_t& f; // 1599
		const CUtlVector<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >& __for_range; // 3300
		const_iterator __for_begin; // 48634
		const_iterator __for_end; // 48634
		{
			FileSort_t x; // 1601
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<20>::CBufferStringN(); // 1559
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 1557
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 1558
			CBufferString::~CBufferString(); // 587
			CBufferStringN<20>::~CBufferStringN(); // 1564
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 1564
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 1564
			FileSort_t::SetName(
				const char* pName);  // 1602
			CUtlString::~CUtlString(); // 1547
			CUtlString::~CUtlString(); // 1547
			CUtlString::~CUtlString(); // 1547
			FileSort_t::~FileSort_t(); // 1609
			CUtlString::CUtlString(); // 1547
			CUtlString::CUtlString(); // 1547
			CUtlString::CUtlString(); // 1547
			FileSort_t::FileSort_t(); // 1601
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1602
			Remove(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<C this,
				const FileSort_t& search);  // 1607
		}
		CUtlMemory<VPKContentFileInfo_t, int>::Base(); // 113
		CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::Base(); // 103
		CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::begin(); // 1599
		CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::Count(); // 105
		CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::end(); // 1599
	}
	{
		const char* pszFilenameToRemove; // 1612
		const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& __for_range; // 3674
		const_iterator __for_begin; // 59111
		const_iterator __for_end; // 59111
		{
			FileSort_t x; // 1614
			int h; // 1616
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1619
			}
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<20>::CBufferStringN(); // 1559
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 1557
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 1558
			CBufferString::~CBufferString(); // 587
			CBufferStringN<20>::~CBufferStringN(); // 1564
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 1564
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 1564
			FileSort_t::SetName(
				const char* pName);  // 1615
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1612
			CUtlString::CUtlString(); // 1547
			CUtlString::CUtlString(); // 1547
			CUtlString::CUtlString(); // 1547
			FileSort_t::FileSort_t(); // 1614
			operator[](const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, co this,
					int i);  // 539
			Element(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<C this,
				int i);  // 551
			operator[](const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<C this,
					int i);  // 1619
			CUtlString::~CUtlString(); // 1547
			CUtlString::~CUtlString(); // 1547
			CUtlString::~CUtlString(); // 1547
			FileSort_t::~FileSort_t(); // 1621
		}
		CUtlMemory<CUtlString, int>::Base(); // 113
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 103
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 1612
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 1612
	}
	{
		int hFile; // 1628
		{
			const FileSort_t& f; // 1630
			const VPKContentFileInfo_t& info; // 1631
			FileCRC_t crc; // 1663
			MetaDataSize_t nMetaDataSize; // 1667
			CFilePartDescr newPart; // 1673
			PackFileIndex_t endOfPartMarker; // 1680
			{
				int* _pCrash; // 1670
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1676
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1684
			}
			operator[](const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, co this,
					int i);  // 539
			Element(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<C this,
				int i);  // 551
			operator[](const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<C this,
					int i);  // 1630
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1643
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1644
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1648
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1660
			CPackedInt<unsigned int>::operator=(
					unsigned int val);  // 24
			CPackedInt<unsigned int>::CPackedInt(
					unsigned int val);  // 1663
			CPackedInt<short unsigned int>::operator=(
					short unsigned int val);  // 24
			CPackedInt<short unsigned int>::CPackedInt(
					short unsigned int val);  // 1667
			CPackedInt<short unsigned int>::operator short unsigned int(); // 1669
			CUtlString::Get(); // 99
			CUtlString::String(); // 1670
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 1670
			CPackedInt<short unsigned int>::CPackedInt(); // 47
			CPackedInt<unsigned int>::CPackedInt(); // 47
			CPackedInt<unsigned int>::CPackedInt(); // 47
			CFilePartDescr::CFilePartDescr(); // 1673
			{
			}
			VPKContentFileInfo_t::GetSizeInChunkFile(); // 1674
			CPackedInt<unsigned int>::operator=(
					unsigned int val);  // 1674
			CPackedInt<short unsigned int>::operator=(
					short unsigned int val);  // 1675
			CPackedInt<unsigned int>::operator=(
					unsigned int val);  // 1677
			CPackedInt<short unsigned int>::operator=(
					short unsigned int val);  // 24
			CPackedInt<short unsigned int>::CPackedInt(
					short unsigned int val);  // 1680
			CPackedInt<short unsigned int>::operator short unsigned int(); // 1682
			CPackedInt<short unsigned int>::operator short unsigned int(); // 1685
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1634
			CUtlBuffer::IsText(); // 1253
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1256
			CUtlBuffer::WasLastCharacterCR(); // 1303
			{
				int i; // 1262
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 1166
				CUtlBuffer::PeekPut(
					int offset);  // 1210
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1204
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1264
			}
			CUtlBuffer::PutTabs(); // 1305
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1308
			CUtlBuffer::PutChar(
				char c);  // 1636
			CUtlBuffer::IsText(); // 1253
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1256
			CUtlBuffer::WasLastCharacterCR(); // 1303
			{
				int i; // 1262
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 1166
				CUtlBuffer::PeekPut(
					int offset);  // 1210
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1204
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1264
			}
			CUtlBuffer::PutTabs(); // 1305
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1308
			CUtlBuffer::PutChar(
				char c);  // 1638
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1308
			CUtlBuffer::IsText(); // 1253
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1256
			CUtlBuffer::WasLastCharacterCR(); // 1303
			{
				int i; // 1262
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 1166
				CUtlBuffer::PeekPut(
					int offset);  // 1210
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1204
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1264
			}
			CUtlBuffer::PutTabs(); // 1305
			CUtlBuffer::PutChar(
				char c);  // 1650
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1655
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1656
		}
		operator[](const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t this,
				int i);  // 611
		LeftChild(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVe this,
				int i);  // 1329
		FirstInorder(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVe this); // 1628
	}
	{
		int hFile; // 1707
		{
			const VPKContentFileInfo_t& info; // 1709
			CPackedStoreFileHandle h; // 1710
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1711
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1712
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1713
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1714
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1715
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1716
			}
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1710
			operator[](const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, co this,
					int i);  // 539
			Element(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<C this,
				int i);  // 551
			operator[](const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<C this,
					int i);  // 1709
			CPackedInt<unsigned int>::operator unsigned int(); // 1716
		}
		operator[](const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t this,
				int i);  // 611
		LeftChild(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVe this,
				int i);  // 1329
		FirstInorder(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVe this); // 1707
	}
	CUtlMemory<VPKContentFileInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VPKContentFileInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::CUtlVector(); // 1583
	ResetDbgInfo(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<C this); // 491
	ValidateGrowSize(const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, co this); // 475
	CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, co this,
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t this); // 489
	CUtlRBTree(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<C this,
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 1587
	EnsureCapacity(const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, co this,
			int num);  // 515
	EnsureCapacity(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<C this,
			int num);  // 1588
	CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::Count(); // 1588
	CUtlBuffer::IsText(); // 1253
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1308
	CUtlBuffer::PutChar(
		char c);  // 1688
	CUtlBuffer::IsText(); // 1253
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1308
	CUtlBuffer::PutChar(
		char c);  // 1689
	CUtlBuffer::IsText(); // 1253
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1256
	CUtlBuffer::WasLastCharacterCR(); // 1303
	{
		int i; // 1262
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1204
		CUtlBuffer::PutTypeBin<char>(
				char src);  // 1264
	}
	CUtlBuffer::PutTabs(); // 1305
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1204
	CUtlBuffer::PutTypeBin<char>(
			char src);  // 1308
	CUtlBuffer::PutChar(
		char c);  // 1697
	CUtlBuffer::TellPut(); // 1700
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 1701
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 1701
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1701
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 1701
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1718
	Iterator_t::Iterator_t(
			int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t this); // 1248
	{
	}
	{
	}
	{
	}
	{
		Iterator_t it; // 1256
		First(const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t this); // 1256
		Iterator_t::Iterator_t(
				int i);  // 86
		InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t this); // 1256
		{
			int i; // 1258
			IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t this,
					int i);  // 661
			operator[](const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t this,
					int i);  // 611
			LeftChild(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVe this,
					int i);  // 667
			IsValidIndex(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVe this,
					int i);  // 659
			IsValidIndex(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVe this,
					int i);  // 1259
			CUtlString::~CUtlString(); // 1547
			CUtlString::~CUtlString(); // 1547
			CUtlString::~CUtlString(); // 1547
			FileSort_t::~FileSort_t(); // 1526
			Destruct<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >&)::FileSort_t>(FileSort_t* pMemory); // 1261
			SetLeftChild(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<C this,
					int i,
					int child);  // 1263
		}
		IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t this,
				int i);  // 82
		Next(const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t this,
			const Iterator_t& it);  // 1256
	}
	RemoveAll(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<C this); // 1285
	Purge(const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, co this); // 903
	Purge(const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, co this); // 1287
	Iterator_t::Iterator_t(
			int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t this); // 1288
	Purge(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<C this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >&)::FileSort_t, int> >(void); // 508
	Purge(const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, co this); // 510
	~CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, co this); // 510
	~CUtlRBTree(const CUtlRBTree<CPackedStore::ChangeMultipleDirectoryEntries(const CUtlVector<VPKContentFileInfo_t>&, const CUtlVector<C this); // 1718
	{
		int i; // 1721
		CUtlMemory<VPKContentFileInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 149
		VPKContentFileInfo_t::~VPKContentFileInfo_t(); // 1526
		Destruct<VPKContentFileInfo_t>(VPKContentFileInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VPKContentFileInfo_t, int>::Purge(); // 903
	CUtlMemory<VPKContentFileInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::Purge(); // 560
	ValidateAlignment<VPKContentFileInfo_t>(void); // 508
	CUtlMemory<VPKContentFileInfo_t, int>::Purge(); // 510
	CUtlMemory<VPKContentFileInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::~CUtlVector(); // 1718
} /* size: 0, variables: 6, inline expansions: 81 (0 bytes) */

// <00225ABB> vpklib/packedstore.cpp:1720
// variables: 24
// function calls: 92
void CPackedStore::AddFileToDirectory(const VPKContentFileInfo_t& info)
{
	CPathBufferString dir; // 1734
	CPathBufferString base; // 1735
	CExtBufferString ext; // 1736
	const char   __FUNCTION__; // 25591
	int nNumDataParts; // 1743
	int nFileDataSize; // 1744
	int nTotalHeaderSize; // 1745
	char* pBuf; // 1746
	char* pOut; // 1747
	uint16 nMetaDataSize; // 1761
	CFilePartDescr newPart; // 1766
	PackFileIndex_t endOfPartMarker; // 1774
	int nExtensionHash; // 1788
	int nInsertOffset; // 1789
	const CFileExtensionData* pExt; // 1790
	char* pHeaderInsertPtr; // 1791
	{
		int* _pCrash; // 1741
	}
	{
		int* _pCrash; // 1760
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1779
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1785
	}
	{
		int nDirHash; // 1799
		const CFileDirectoryData* pDir; // 1800
		{
			const char* pStartOfDirFileData; // 1806
			V_strlen(const char* str); // 1804
			CUtlMemory<unsigned char, int>::Base(); // 112
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 1807
		}
		{
			const char* pStartOfExtFileData; // 1811
		}
		V_strlen(const char* str); // 1796
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1799
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1800
		FindNamedNodeCaseSensitive<CFileDirectoryData>(CFileDirectoryData* head,
								const char* name);  // 1048
		CUtlIntrusiveList<CFileDirectoryData>::FindNamedNodeCaseSensitive(
						const char* pName);  // 1800
	}
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1731
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1734
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1737
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1735
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<20>::CBufferStringN(); // 1736
	CBufferString::IsEmpty(); // 1740
	CUtlString::Get(); // 99
	CUtlString::String(); // 1741
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1741
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1744
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1745
	V_strlen(const char* str); // 93
	s_FileHeaderSize(const char* pName,
			int nNumDataParts,
			int nNumMetaDataBytes);  // 1744
	V_strlen(const char* str); // 1745
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1745
	V_strlen(const char* str); // 1745
	strcpy(char* __dest,
		const char* __src);  // 1748
	strcpy(char* __dest,
		const char* __src);  // 1751
	strcpy(char* __dest,
		const char* __src);  // 1754
	CPackedInt<unsigned int>::operator=(
			unsigned int val);  // 1757
	CUtlString::Get(); // 99
	CUtlString::String(); // 1760
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1760
	CPackedInt<short unsigned int>::operator=(
			short unsigned int val);  // 1762
	CPackedInt<short unsigned int>::CPackedInt(); // 47
	CPackedInt<unsigned int>::CPackedInt(); // 47
	CPackedInt<unsigned int>::CPackedInt(); // 47
	CFilePartDescr::CFilePartDescr(); // 1766
	{
	}
	VPKContentFileInfo_t::GetSizeInChunkFile(); // 1767
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1775
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1771
	CPackedInt<short unsigned int>::operator=(
			short unsigned int val);  // 24
	CPackedInt<short unsigned int>::CPackedInt(
			short unsigned int val);  // 1774
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1780
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1788
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1790
	FindNamedNodeCaseSensitive<CFileExtensionData>(CFileExtensionData* head,
							const char* name);  // 1048
	CUtlIntrusiveList<CFileExtensionData>::FindNamedNodeCaseSensitive(
					const char* pName);  // 1790
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
		int i);  // 1097
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
		int i);  // 1097
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1097
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ShiftElementsRight(
				int elem,
				int num);  // 1446
	CUtlMemory<unsigned char, int>::NumAllocated(); // 782
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1815
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 588
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
			int i);  // 1816
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1816
	CBufferString::~CBufferString(); // 587
	CBufferStringN<20>::~CBufferStringN(); // 1818
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1818
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1818
} /* size: 0, variables: 16, inline expansions: 80 (0 bytes) */

// <002238DF> vpklib/packedstore.cpp:1820
// variables: 46
// function calls: 127
void CPackedStore::AddFile(const char* pFile, uint16 nMetaDataSize, const void* pFileData, uint32 nFileTotalSize, bool bMultiChunk, const uint32* pCrcValue)
{
	const char   __FUNCTION__; // 25309
	uint32 nCRC; // 1826
	CPackedStoreFileHandle pData; // 1837
	ePackedStoreAddResultCode nRslt; // 1838
	VPKContentFileInfo_t dirEntry; // 1850
	uint32 nBytesInChunk; // 1856
	const unsigned char* pDataStart; // 1857
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1823
	}
	{
		CFileHeaderFixedData* pHeader; // 1841
		CPackedInt<short unsigned int>::operator short unsigned int(); // 69
		CPackedInt<unsigned int>::operator unsigned int(); // 69
		CFileHeaderFixedData::TotalDataSize(); // 1842
		CPackedInt<unsigned int>::operator unsigned int(); // 1842
	}
	{
		CPathBufferString dataFileName; // 1874
		FileHandle_t fHandle; // 1876
		{
			int* _pCrash; // 1880
		}
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1874
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1876
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1886
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 1880
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 1880
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1878
	}
	CUtlStringToken::IsValid(); // 1823
	CPackedStoreFileHandle::operator bool(); // 1839
	CUtlString::CUtlString(); // 167
	VPKContentFileInfo_t::VPKContentFileInfo_t(); // 1850
	CUtlString::operator=(
			const char* src);  // 1851
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 1853
	CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::Count(); // 1891
	CUtlBlockMemory<unsigned char, int>::NumElementsInBlock(); // 227
	CUtlBlockMemory<unsigned char, int>::NumAllocated(); // 782
	CUtlBlockMemory<unsigned char, int>::Grow(
		int num);  // 247
	CUtlBlockMemory<unsigned char, int>::Grow(
		int num);  // 806
	CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::GrowVector(
			int num);  // 1484
	{
		int i; // 1500
		CUtlBlockMemory<unsigned char, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<unsigned char, int>::IsIdxValid(
				int i);  // 191
		CUtlBlockMemory<unsigned char, int>::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<unsigned char, int>::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<unsigned char, int>::operator[](
				int i);  // 602
		CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::Element(
			int i);  // 1502
		CopyConstruct<unsigned char>(unsigned char* pMemory,
						const unsigned char& src);  // 1502
	}
	CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const unsigned char* pToInsert);  // 1476
	CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const unsigned char* pToInsert);  // 1303
	CUtlVectorBase<unsigned char, CUtlBlockMemory<unsigned char, int> >::AddMultipleToTail(
				int num,
				const unsigned char* pToCopy);  // 1892
	VPKContentFileInfo_t::GetSizeInChunkFile(); // 1856
	CUtlString::~CUtlString(); // 149
	VPKContentFileInfo_t::~VPKContentFileInfo_t(); // 1899
	{
		const xxh_u64  bitflip1; // 4743
		const xxh_u64  bitflip2; // 4744
		const xxh_u64  input_lo; // 4745
		const xxh_u64  input_hi; // 4746
		const xxh_u64  acc; // 4747
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4745
		XXH_read64(const void* ptr); // 3466
		XXH_readLE64(const void* ptr); // 4746
		XXH_mult64to128(xxh_u64 lhs,
				xxh_u64 rhs);  // 4627
		XXH3_mul128_fold64(xxh_u64 lhs,
					xxh_u64 rhs);  // 4749
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH3_avalanche(xxh_u64 h64); // 4750
	}
	XXH3_len_9to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4758
	{
		const xxh_u32  input1; // 4728
		const xxh_u32  input2; // 4729
		const xxh_u64  bitflip; // 4730
		const xxh_u64  input64; // 4731
		const xxh_u64  keyed; // 4732
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4728
		XXH_read32(const void* ptr); // 2905
		XXH_readLE32(const void* ptr); // 4729
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4662
		XXH3_rrmxmx(xxh_u64 h64,
				xxh_u64 len);  // 4733
	}
	XXH3_len_4to8_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4759
	{
		const xxh_u8  c1; // 4710
		const xxh_u8  c2; // 4711
		const xxh_u8  c3; // 4712
		const xxh_u32  combined; // 4713
		const xxh_u64  bitflip; // 4715
		const xxh_u64  keyed; // 4716
		XXH64_avalanche(xxh_u64 hash); // 4717
	}
	XXH3_len_1to3_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 4760
	XXH3_len_0to16_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				XXH64_hash_t seed);  // 6441
	{
		xxh_u64 acc; // 4832
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4644
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
		XXH3_avalanche(xxh_u64 h64); // 4856
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4844
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4845
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4847
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4848
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4850
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4851
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4853
		{
			const xxh_u64  input_lo; // 4814
			const xxh_u64  input_hi; // 4815
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4814
			XXH_read64(const void* ptr); // 3466
			XXH_readLE64(const void* ptr); // 4815
			XXH_mult64to128(xxh_u64 lhs,
					xxh_u64 rhs);  // 4627
			XXH3_mul128_fold64(xxh_u64 lhs,
						xxh_u64 rhs);  // 4816
		}
		XXH3_mix16B(const xxh_u8* input,
				const xxh_u8* secret,
				xxh_u64 seed64);  // 4854
	}
	XXH3_len_17to128_64b(const xxh_u8* input,
				size_t len,
				const xxh_u8* secret,
				size_t secretSize,
				XXH64_hash_t seed);  // 6443
	XXH3_64bits_internal(const void* input,
				size_t len,
				XXH64_hash_t seed64,
				const void* secret,
				size_t secretLen,
				XXH3_hashLong64_f f_hashLong);  // 6455
	XXH_INLINE_XXH3_64bits(const void* input,
				size_t length);  // 1833
} /* size: 0, variables: 7, inline expansions: 27 (0 bytes) */

// <00243174> vpklib/packedstore.cpp:1901
void CPackedStore::GetFileList(CUtlStringList& outFilenames, bool bFormattedOutput, bool bSortedOutput)
{
} /* size: 0 */

// <002216A6> vpklib/packedstore.cpp:1906
// variables: 18
// function calls: 145
void CPackedStore::GetFileList(const char* pWildCard, CUtlStringList& outFilenames, bool bFormattedOutput, bool bSortedOutput)
{
	CPathBufferString wildCardPath; // 1909
	CPathBufferString wildCardBase; // 1910
	CExtBufferString wildCardExt; // 1911
	bool bNoBaseWildcard; // 1912
	bool bNoExtWildcard; // 1913
	const char* pData; // 1941
	const char   __FUNCTION__; // 25417
	{
		char* pcStar; // 1925
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 1925
		strchr(char* __s,
			int __c);  // 194
		V_strchr(char* s,
			char c);  // 1925
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 895
		V_strlen(const char* str); // 895
		CBufferString::SyncStringChars(); // 1929
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 1932
		strchr(char* __s,
			int __c);  // 194
		V_strchr(char* s,
			char c);  // 1932
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 895
		V_strlen(const char* str); // 895
		CBufferString::SyncStringChars(); // 1936
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1942
	}
	{
		CExtBufferString curExtension; // 1946
		{
			CPathBufferString curDir; // 1954
			{
				CPathBufferString fileNameOut; // 1962
				bool matches; // 1986
				{
					const CFileHeaderFixedData* pHeader; // 1965
					const CFilePartDescr* pPart; // 1967
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 776
					CBufferString::String(); // 1966
					CPackedInt<short unsigned int>::operator short unsigned int(); // 1966
					CPackedInt<unsigned int>::operator unsigned int(); // 1966
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 776
					CBufferString::String(); // 1966
					CPackedInt<short unsigned int>::operator short unsigned int(); // 1968
					CPackedInt<unsigned int>::operator unsigned int(); // 1971
					CPackedInt<unsigned int>::operator unsigned int(); // 1971
				}
				{
					CPathBufferString fileNameOutPath; // 1991
					CPathBufferString fileNameOutBase; // 1992
					CExtBufferString fileNameOutExt; // 1993
					CBufferString::IsEmpty(); // 2000
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 2000
					CBufferString::Length(); // 2000
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 2000
					V_strnicmp_fast<int>(const char* s1,
								const char* s2,
								int n);  // 2000
					CBufferString::IsEmpty(); // 2001
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 2001
					CBufferString::Length(); // 2001
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 2001
					V_strnicmp_fast<int>(const char* s1,
								const char* s2,
								int n);  // 2001
					CBufferString::~CBufferString(); // 587
					CBufferStringN<20>::~CBufferStringN(); // 2002
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 2002
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 2002
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1991
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 1995
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1992
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<20>::CBufferStringN(); // 1993
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 1996
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 1997
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 1999
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 1999
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 2000
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 2000
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 2001
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 2001
				}
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 934
				CBufferString::Length(); // 934
				CBufferString::Append(
					const CBufferString& rhs,
					bool bExact);  // 1979
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1977
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 1977
				CBufferString::Append(
					const char* pString,
					int nChars,
					bool bExact);  // 1978
				CUtlMemory<char::NumAllocated(); // 1247
				CUtlMemory<char::operator[](
						int i);  // 602
				CUtlVectorBase<char::Element(
					int i);  // 1252
				Construct<char*, char*>(char** pMemory); // 1252
				CUtlMemory<char::Base(); // 112
				CUtlVectorBase<char::Base(); // 368
				CUtlVectorBase<char::ResetDbgInfo(); // 824
				CUtlVectorBase<char::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<char::AddToTail(
						char *& src);  // 2007
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 2009
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1962
				CPackedStore::SkipFile(
					const char  *& pData);  // 1981
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 2009
			}
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 1954
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 2011
		}
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<20>::CBufferStringN(); // 1946
		CBufferString::~CBufferString(); // 587
		CBufferStringN<20>::~CBufferStringN(); // 2013
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1909
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1910
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<20>::CBufferStringN(); // 1911
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 213
	CPackedStore::DirectoryData(); // 1941
	CUtlVectorBase<char::Count(); // 2020
	CBufferString::~CBufferString(); // 587
	CBufferStringN<20>::~CBufferStringN(); // 2021
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2021
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2021
} /* size: 0, variables: 7, inline expansions: 19 (0 bytes) */

// <00220BF0> vpklib/packedstore.cpp:2023
// variables: 7
// function calls: 46
void CPackedStore::GetFileList(const char* pWildcard, CUtlVector<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >& outVecResults)
{
	CUtlStringList vecFilenames; // 2027
	const char   __FUNCTION__; // 25417
	{
		int i; // 2031
		{
			CPackedStoreFileHandle h; // 2034
			VPKContentFileInfo_t& f; // 2039
			{
				int* _pCrash; // 2036
			}
			CUtlMemory<char::operator[](
					int i);  // 588
			CUtlVectorBase<char::operator[](
					int i);  // 2034
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 2036
			CUtlMemory<VPKContentFileInfo_t, int>::NumAllocated(); // 1143
			CUtlMemory<VPKContentFileInfo_t, int>::Base(); // 112
			CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::Base(); // 368
			CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::ResetDbgInfo(); // 824
			CUtlMemory<VPKContentFileInfo_t, int>::IsGrowable(); // 823
			CUtlMemory<VPKContentFileInfo_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<VPKContentFileInfo_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<VPKContentFileInfo_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<VPKContentFileInfo_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::Element(
				int i);  // 1148
			CUtlString::CUtlString(); // 167
			VPKContentFileInfo_t::VPKContentFileInfo_t(); // 1479
			Construct<VPKContentFileInfo_t>(VPKContentFileInfo_t* pMemory); // 1148
			CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::AddToTail(); // 2039
			CUtlMemory<VPKContentFileInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::operator[](
					int i);  // 2039
			CUtlString::operator=(
					const char* src);  // 2040
			CPackedInt<unsigned int>::operator unsigned int(); // 2045
			CPackedInt<short unsigned int>::operator short unsigned int(); // 286
			CPackedInt<short unsigned int>::operator short unsigned int(); // 289
			CFileHeaderFixedData::MetaData(); // 2046
		}
	}
	CPackedStore::GetFileList(
			CUtlStringList& outFilenames,
			bool bFormattedOutput,
			bool bSortedOutput);  // 2028
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 11
	CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
	CUtlStringList::CUtlStringList(); // 2027
	CUtlMemory<VPKContentFileInfo_t, int>::IsGrowable(); // 881
	CUtlMemory<VPKContentFileInfo_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<VPKContentFileInfo_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<VPKContentFileInfo_t, CUtlMemory<VPKContentFileInfo_t, int> >::EnsureCapacity(
			int num);  // 2030
	{
		int i; // 22
	}
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 18
	CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
	CUtlStringList::~CUtlStringList(); // 2048
} /* size: 0, variables: 2, inline expansions: 21 (0 bytes) */

// <0020AAC2> vpklib/packedstore.cpp:2050
// member function: 1
// member variables: 4
// struct size: 16
struct FileAndDirMatchInfo_t {
	/* vpklib/packedstore.cpp:2052 */
	void FileAndDirMatchInfo_t(FileAndDirMatchInfo_t* );
	const char * m_pBasePath; /* 0 8 */
	int m_nTestLen; /* 8 4 */
	bool m_bHasWildcard; /* 12 1 */
	bool m_bMatchTrailingSingleChar; /* 13 1 */
};

// <00220BD9> vpklib/packedstore.cpp:2052
void FileAndDirMatchInfo_t::FileAndDirMatchInfo_t()
{
} /* size: 0 */

// <00220BC0> vpklib/packedstore.cpp:2052
inline void FileAndDirMatchInfo_t::FileAndDirMatchInfo_t()
{
} /* size: 0 */

// <0022070C> vpklib/packedstore.cpp:2060
// variables: 2
// function calls: 20
void ComputeMatchInfo(FileAndDirMatchInfo_t* pInfo, CBufferString* pFileName)
{
	char* pStar; // 2068
	char* pQuestion; // 2078
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 2062
	strchr(char* __s,
		int __c);  // 194
	V_strchr(char* s,
		char c);  // 2068
	CBufferString::Length(); // 2065
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 2068
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 2073
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 2078
	strchr(char* __s,
		int __c);  // 194
	V_strchr(char* s,
		char c);  // 2078
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 2084
} /* size: 348, variables: 2, inline expansions: 20 (496 bytes) */

// <002206DA> vpklib/packedstore.cpp:2089
bool DoesFileOrExtMatch(const FileAndDirMatchInfo_t* pInfo, const char* pFileName)
{
} /* size: 0 */

// <00220566> vpklib/packedstore.cpp:2104
// variable: 1
// function calls: 3
const char* DoesDirMatch(const FileAndDirMatchInfo_t* pInfo, const char* pDirName)
{
	{
		const char* pSlash; // 2120
		strchr(const char* __s,
			int __c);  // 2120
		V_strlen(const char* str); // 2127
	}
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 2108
} /* size: 190, inline expansions: 1 (14 bytes) */

// <0021E7F1> vpklib/packedstore.cpp:2145
// variables: 20
// function calls: 108
void CPackedStore::GetFileAndDirLists(const char* pWildCard, CUtlStringList& outDirnames, CUtlStringList& outFilenames, bool bSortedOutput, bool bAbsolute)
{
	CUtlSymbolTable encounteredDirs; // 2147
	CPathBufferString wildCardPath; // 2149
	CPathBufferString wildCardBase; // 2150
	CExtBufferString wildCardExt; // 2151
	FileAndDirMatchInfo_t pathMatch; // 2153
	FileAndDirMatchInfo_t baseMatch; // 2154
	FileAndDirMatchInfo_t extMatch; // 2155
	const char* pWildCardExt; // 2170
	{
		int i; // 2182
		{
			const CFileExtensionData* pExt; // 2184
			{
				bool bTestDirectoriesOnly; // 2189
				bool bExtMatches; // 2190
				{
					int d; // 2195
					{
						const CFileDirectoryData* pDir; // 2197
						{
							const char* pDirName; // 2199
							const char* pSubDir; // 2208
							CPathBufferString firstDirBuf; // 2218
							{
								const char* pData; // 2234
								CPathBufferString path; // 2238
								CBufferString::ReadBuffer(); // 1374
								CBufferString::ReadBuffer(); // 776
								CBufferString::String(); // 2255
								V_strlen(const char* str); // 2235
								CBufferString::InitMinConstruct(
										bool bGrowable);  // 712
								CBufferString::CBufferString(); // 591
								CBufferStringN<200>::CBufferStringN(); // 2238
								CBufferString::ReadBuffer(); // 1374
								CBufferString::ReadBuffer(); // 781
								CBufferString::operator char const*(); // 2247
								CBufferString::Append(
									char ch,
									bool bExact);  // 2253
								CBufferString::Append(
									const char* pString,
									int nChars,
									bool bExact);  // 2254
								V_strlen(const char* str); // 46
								memcpy(void* __dest,
									const void* __src,
									size_t __len);  // 75
								V_memcpy(void* dest,
									const void* src,
									int count);  // 48
								CUtlMemory<char::NumAllocated(); // 1196
								CUtlMemory<char::operator[](
										int i);  // 602
								CUtlVectorBase<char::Element(
									int i);  // 1201
								CopyConstruct<char*>(char** pMemory,
											char* const& src);  // 1201
								CUtlMemory<char::Base(); // 112
								CUtlVectorBase<char::Base(); // 368
								CUtlVectorBase<char::ResetDbgInfo(); // 824
								CUtlVectorBase<char::GrowMemory(
										int num);  // 1198
								CUtlVectorBase<char::AddToTail(
										char* const& src);  // 49
								CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
										const char* pString);  // 2255
								CPackedStore::SkipFile(
									const char  *& pData);  // 2239
								CBufferString::WriteBuffer(); // 1390
								CBufferString::WriteBuffer(); // 1101
								CBufferString::RemoveAll(); // 901
								CBufferString::Set(
									const char* pString,
									int nChars,
									bool bExact);  // 2251
								CBufferString::~CBufferString(); // 587
								CBufferStringN<200>::~CBufferStringN(); // 2259
							}
							{
								CPathBufferString path; // 2273
								CBufferString::InitMinConstruct(
										bool bGrowable);  // 712
								CBufferString::CBufferString(); // 591
								CBufferStringN<200>::CBufferStringN(); // 2273
								CBufferString::ReadBuffer(); // 1374
								CBufferString::ReadBuffer(); // 781
								CBufferString::operator char const*(); // 2274
								CBufferString::ReadBuffer(); // 1374
								CBufferString::ReadBuffer(); // 776
								CBufferString::String(); // 2275
								V_strlen(const char* str); // 46
								memcpy(void* __dest,
									const void* __src,
									size_t __len);  // 75
								V_memcpy(void* dest,
									const void* src,
									int count);  // 48
								CUtlMemory<char::NumAllocated(); // 1196
								CUtlMemory<char::operator[](
										int i);  // 602
								CUtlVectorBase<char::Element(
									int i);  // 1201
								CopyConstruct<char*>(char** pMemory,
											char* const& src);  // 1201
								CUtlMemory<char::Base(); // 112
								CUtlVectorBase<char::Base(); // 368
								CUtlVectorBase<char::ResetDbgInfo(); // 824
								CUtlVectorBase<char::GrowMemory(
										int num);  // 1198
								CUtlVectorBase<char::AddToTail(
										char* const& src);  // 49
								CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
										const char* pString);  // 2275
								CBufferString::~CBufferString(); // 587
								CBufferStringN<200>::~CBufferStringN(); // 2276
							}
							CBufferString::InitMinConstruct(
									bool bGrowable);  // 712
							CBufferString::CBufferString(); // 591
							CBufferStringN<200>::CBufferStringN(); // 2218
							CUtlSymbol::operator==(
									UtlSymId_t id);  // 75
							CUtlSymbolTable::HasElement(
									const char* pStr);  // 2267
							CBufferString::~CBufferString(); // 587
							CBufferStringN<200>::~CBufferStringN(); // 2281
							strchr(const char* __s,
								int __c);  // 2219
							CBufferString::ReadBuffer(); // 1374
							CBufferString::ReadBuffer(); // 781
							CBufferString::operator char const*(); // 2222
							V_strlen(const char* str); // 46
							memcpy(void* __dest,
								const void* __src,
								size_t __len);  // 75
							V_memcpy(void* dest,
								const void* src,
								int count);  // 48
							CUtlMemory<char::NumAllocated(); // 1196
							CUtlMemory<char::operator[](
									int i);  // 602
							CUtlVectorBase<char::Element(
								int i);  // 1201
							CopyConstruct<char*>(char** pMemory,
										char* const& src);  // 1201
							CUtlMemory<char::Base(); // 112
							CUtlVectorBase<char::Base(); // 368
							CUtlVectorBase<char::ResetDbgInfo(); // 824
							CUtlVectorBase<char::GrowMemory(
									int num);  // 1198
							CUtlVectorBase<char::AddToTail(
									char* const& src);  // 49
							CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
									const char* pString);  // 2279
							CBufferString::~CBufferString(); // 587
							CBufferStringN<200>::~CBufferStringN(); // 2281
						}
						CUtlIntrusiveList<CFileDirectoryData>::Head(); // 2197
					}
				}
			}
			CUtlIntrusiveList<CFileExtensionData>::Head(); // 2184
		}
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 2149
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 2150
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<20>::CBufferStringN(); // 2151
	FileAndDirMatchInfo_t::FileAndDirMatchInfo_t(); // 2153
	FileAndDirMatchInfo_t::FileAndDirMatchInfo_t(); // 2154
	FileAndDirMatchInfo_t::FileAndDirMatchInfo_t(); // 2155
	V_isempty(const char* pszString); // 2171
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 2171
	CUtlVectorBase<char::Count(); // 2292
	CBufferString::~CBufferString(); // 587
	CBufferStringN<20>::~CBufferStringN(); // 2293
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2293
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2293
} /* size: 2519, variables: 8, inline expansions: 24 (397 bytes) */

// <0021BDE9> vpklib/packedstore.cpp:2296
// variables: 15
// function calls: 172
void CPackedStore::UpdateContentsFilter()
{
	CPathBufferString fileName; // 2304
	CInputFile filterFile; // 2305
	CUtlStringList tempList; // 2306
	const char* pToken; // 2314
	const int  nTokenSize; // 2315
	{
		int i; // 2318
		{
			CUtlString filterEntry; // 2320
			CUtlString dir; // 2321
			CUtlString extension; // 2322
			CUtlString basename; // 2323
			bool bRecurseDirs; // 2340
			strstr(const char* __haystack,
				const char* __needle);  // 247
			V_strstr(const char* s1,
				const char* search);  // 2340
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 2345
			CUtlString::~CUtlString(); // 2345
			CUtlString::~CUtlString(); // 2345
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 2346
			CUtlString::~CUtlString(); // 2346
			CUtlString::~CUtlString(); // 2346
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 2347
			CUtlString::~CUtlString(); // 2347
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 2357
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 2357
			CUtlString::~CUtlString(); // 2357
			CUtlString::Get(); // 2362
			V_strlen(const char* str); // 46
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 48
			CUtlMemory<char::NumAllocated(); // 1196
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 1201
			CopyConstruct<char*>(char** pMemory,
						char* const& src);  // 1201
			CUtlMemory<char::Base(); // 112
			CUtlVectorBase<char::Base(); // 368
			CUtlVectorBase<char::ResetDbgInfo(); // 824
			CUtlVectorBase<char::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<char::AddToTail(
					char* const& src);  // 49
			CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
					const char* pString);  // 2362
			CUtlString::Get(); // 2363
			V_strlen(const char* str); // 46
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 48
			CUtlMemory<char::NumAllocated(); // 1196
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 1201
			CopyConstruct<char*>(char** pMemory,
						char* const& src);  // 1201
			CUtlMemory<char::Base(); // 112
			CUtlVectorBase<char::Base(); // 368
			CUtlVectorBase<char::ResetDbgInfo(); // 824
			CUtlVectorBase<char::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<char::AddToTail(
					char* const& src);  // 49
			CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
					const char* pString);  // 2363
			CUtlString::Get(); // 2364
			V_strlen(const char* str); // 46
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 48
			CUtlMemory<char::NumAllocated(); // 1196
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 1201
			CopyConstruct<char*>(char** pMemory,
						char* const& src);  // 1201
			CUtlMemory<char::Base(); // 112
			CUtlVectorBase<char::Base(); // 368
			CUtlVectorBase<char::ResetDbgInfo(); // 824
			CUtlVectorBase<char::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<char::AddToTail(
					char* const& src);  // 49
			CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(
					const char* pString);  // 2364
			CUtlMemory<bool, int>::NumAllocated(); // 1196
			CUtlMemory<bool, int>::Base(); // 112
			CUtlVectorBase<bool, CUtlMemory<bool, int> >::Base(); // 368
			CUtlVectorBase<bool, CUtlMemory<bool, int> >::ResetDbgInfo(); // 824
			CUtlMemory<bool, int>::IsGrowable(); // 823
			CUtlMemory<bool, int>::IsExternallyAllocated(); // 859
			CUtlMemory<bool, int>::IsExternallyAllocated(); // 861
			CUtlMemory<bool, int>::Grow(
				int num);  // 806
			CUtlVectorBase<bool, CUtlMemory<bool, int> >::GrowMemory(
					int num);  // 1198
			CopyConstruct<bool>(bool* pMemory,
						const bool& src);  // 1201
			CUtlMemory<bool, int>::operator[](
					int i);  // 602
			CUtlVectorBase<bool, CUtlMemory<bool, int> >::Element(
				int i);  // 1201
			CUtlVectorBase<bool, CUtlMemory<bool, int> >::AddToTail(
					const bool& src);  // 2365
			CUtlString::~CUtlString(); // 2366
			CUtlString::~CUtlString(); // 2366
			CUtlString::~CUtlString(); // 2366
			CUtlString::~CUtlString(); // 2366
			CUtlMemory<char::operator[](
					int i);  // 588
			CUtlVectorBase<char::operator[](
					int i);  // 2320
			CUtlString::CUtlString(
					const char* pString);  // 2320
			CUtlString::CUtlString(
					const char* pString);  // 2321
			CUtlString::CUtlString(
					const char* pString);  // 2322
			CUtlString::CUtlString(
					const char* pString);  // 2323
			CUtlString::Get(); // 2327
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 2333
			CUtlString::CUtlString(
					const char* pString);  // 2343
			CUtlString::operator!=(
					const CUtlString& src);  // 2343
			CUtlString::~CUtlString(); // 2343
			CUtlString::~CUtlString(); // 2343
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 2351
		}
		CUtlVectorBase<char::Count(); // 2318
	}
	{
		int i; // 22
		CUtlVectorBase<char::Count(); // 22
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 24
	}
	CUtlVectorBase<char::RemoveAll(); // 26
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 31
	CUtlStringList_Base<CUtlVector<char::PurgeAndDeleteElements(); // 2299
	{
		int i; // 22
		CUtlVectorBase<char::Count(); // 22
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 24
	}
	CUtlVectorBase<char::RemoveAll(); // 26
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 31
	CUtlStringList_Base<CUtlVector<char::PurgeAndDeleteElements(); // 2300
	{
		int i; // 22
		CUtlVectorBase<char::Count(); // 22
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 24
	}
	CUtlVectorBase<char::RemoveAll(); // 26
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 31
	CUtlStringList_Base<CUtlVector<char::PurgeAndDeleteElements(); // 2301
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 2304
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveAll(); // 2302
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 604
	CBufferString::AppendConcat(
			const char* pStr1,
			int nChars1,
			const char* pStr2,
			int nChars2,
			bool bExact);  // 609
	CBufferStringN<200>::CBufferStringN(
			const char* pString1,
			const char* pString2,
			bool bExact,
			bool bGrowable);  // 2304
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 2305
	CBaseFile::CBaseFile(); // 353
	CBaseFile::Open(
		const char* fname,
		const char* modes);  // 350
	CInputFile::Open(
		const char* pFname);  // 355
	CInputFile::CInputFile(
			const char* pFname);  // 2305
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 11
	CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
	CUtlStringList::CUtlStringList(); // 2306
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 111
	CFileSystemPassThru::IsOk(
		FileHandle_t file);  // 267
	CBaseFile::IsOk(); // 2308
	CBaseFile::Close(); // 2312
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::IsExternallyAllocated(); // 905
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 18
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
	CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
	CUtlStringList::~CUtlStringList(); // 2369
	{
		int i; // 22
		CUtlVectorBase<char::Count(); // 22
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 24
	}
	CUtlVectorBase<char::RemoveAll(); // 26
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 31
	CUtlStringList_Base<CUtlVector<char::PurgeAndDeleteElements(); // 2368
	CBaseFile::Close(); // 181
	CBaseFile::~CBaseFile(); // 345
	CInputFile::~CInputFile(); // 2369
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2369
} /* size: 2903, variables: 5, inline expansions: 57 (2176 bytes) */

// <0021BA2D> vpklib/packedstore.cpp:2372
// variables: 2
// function calls: 12
void CPackedStore::IsFileBlacklisted(const char* pDirname, const char* pBaseName, const char* pExt)
{
	bool bRetVal; // 2374
	{
		int i; // 2376
		CUtlVectorBase<char::Count(); // 2376
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2379
		V_strcmp(const char* s1,
			const char* s2);  // 2379
		CUtlMemory<bool, int>::operator[](
				int i);  // 588
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
				int i);  // 2378
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 2378
		V_strlen(const char* str); // 2378
		V_strncmp<int>(const char* s1,
				const char* s2,
				int count);  // 2378
		CUtlMemory<bool, int>::operator[](
				int i);  // 588
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
				int i);  // 2379
	}
} /* size: 248, variables: 1 */

// <00242FC5> vpklib/packedstore.cpp:2394
// function calls: 2
void CPackedStore::AddRef()
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 2396
} /* size: 21, inline expansions: 2 (32 bytes) */

// <0021BA10> vpklib/packedstore.cpp:2394
void CPackedStore::AddRef()
{
} /* size: 0 */

// <00243052> vpklib/packedstore.cpp:2399
// function calls: 4
void CPackedStore::Release()
{
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 2401
	CInterlockedIntT<int, 4>::operator int(); // 2406
	CPackedStore::Release(); // 2399
} /* size: 67, inline expansions: 4 (57 bytes) */

// <0021B9F3> vpklib/packedstore.cpp:2399
void CPackedStore::Release()
{
} /* size: 0 */


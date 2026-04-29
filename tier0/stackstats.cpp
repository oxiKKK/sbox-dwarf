
//
// tier0/stackstats.cpp
//
//	referenced by: libtier0.so
//
//	functions: 65
//	classes: 3
//	structs: 2
//

// <0047E5B1> tier0/stackstats.cpp:22
// variable: 1
void GetSTUBFunctionTable(void)
{
	CallStackGatherer_FunctionTable_Template<CCallStackStatsGatherer_Base> functionTable; // 24
} /* size: 12, variables: 1 */

// <0047EB4E> tier0/stackstats.cpp:42
void CCallStackStatsGatherer_Base::STUB_GetCapturedCallStackDepth()
{
} /* size: 7 */

// <0047E57A> tier0/stackstats.cpp:47
void CCallStackStatsGatherer_Base::STUB_GetStatStructSize()
{
} /* size: 0 */

// <0047E549> tier0/stackstats.cpp:52
void CCallStackStatsGatherer_Base::STUB_GetStatStructName()
{
} /* size: 12 */

// <0047E4FC> tier0/stackstats.cpp:57
void CCallStackStatsGatherer_Base::STUB_GetVectorData_StatEntries(const void *& pBaseOut, uint32& nSizeOut)
{
} /* size: 18 */

// <0047E4AF> tier0/stackstats.cpp:63
void CCallStackStatsGatherer_Base::STUB_GetVectorData_StoredSubTrees(const CCallStackStatsGatherer_Base* const *& pBaseOut, uint32& nSizeOut)
{
} /* size: 18 */

// <0047EB78> tier0/stackstats.cpp:69
void CCallStackStatsGatherer_Base::STUB_EvaluateGathererLinkage(CCallStackStatsGatherer_Base& other)
{
} /* size: 5 */

// <0047E460> tier0/stackstats.cpp:73
void CCallStackStatsGatherer_Base::STUB_OnGathererRemoved(const CCallStackStatsGatherer_Base& other)
{
} /* size: 0 */

// <0047E413> tier0/stackstats.cpp:77
void CCallStackStatsGatherer_Base::STUB_OnLinkedGathererPushed(const CCallStackStatsGatherer_Base& SubTree, const CCallStackMarkerBase& PushMarker)
{
} /* size: 5 */

// <0047E3EC> tier0/stackstats.cpp:81
void CCallStackStatsGatherer_Base::STUB_OnLinkedGathererPopped(const CCallStackStatsGatherer_Base& SubTree)
{
} /* size: 0 */

// <0047E32F> tier0/stackstats.cpp:85
// variable: 1
// function call: 1
void CCallStackStatsGatherer_Base::STUB_LockEntry(uint32 nEntryIndex)
{
	void* pStackScribble; // 95
	memset(void* __dest,
		int __ch,
		size_t __len);  // 96
} /* size: 122, variables: 1, inline expansions: 1 (19 bytes) */

// <0047E2F0> tier0/stackstats.cpp:101
void CCallStackStatsGatherer_Base::STUB_UnlockEntry(uint32 nEntryIndex)
{
} /* size: 5 */

// <0047E2BF> tier0/stackstats.cpp:105
void CCallStackStatsGatherer_Base::STUB_PopFromLinkedGatherers()
{
} /* size: 5 */

// <0047E298> tier0/stackstats.cpp:109
void CCallStackStatsGatherer_Base::STUB_RemoveSharedInstanceData(const CallStackStatsGatherer_SharedInstanceData_t& SharedInstanceData)
{
} /* size: 0 */

// <004745B0> tier0/stackstats.cpp:117
// member functions: 12
// member variables: 6
// struct size: 48
struct CCallStackStatsGatherer_DumpHelperVars_t {
	/* tier0/stackstats.cpp:119 */
	void CCallStackStatsGatherer_DumpHelperVars_t(CCallStackStatsGatherer_DumpHelperVars_t* , uint8* , size_t, FILE* , bool);
	/* tier0/stackstats.cpp:127 */
	void BufferedFwrite(CCallStackStatsGatherer_DumpHelperVars_t* , const void* , size_t);
	/* tier0/stackstats.cpp:155 */
	void BufferedFwrite_AtFilePosition(CCallStackStatsGatherer_DumpHelperVars_t* , size_t, const void* , size_t);
	/* tier0/stackstats.cpp:205 */
	void BufferedFwrite_UpdateBlobSize(CCallStackStatsGatherer_DumpHelperVars_t* , size_t);
	/* tier0/stackstats.cpp:210 */
	void FlushBuffer(CCallStackStatsGatherer_DumpHelperVars_t* );
	/* tier0/stackstats.cpp:221 */
	size_t BufferedFTell(CCallStackStatsGatherer_DumpHelperVars_t* , bool);
	uint8 * m_pWriteBuffer; /* 0 8 */
	size_t m_nWriteBufferSize; /* 8 8 */
	size_t m_nWriteMarker; /* 16 8 */
	FILE * m_pFile; /* 24 8 */
	size_t m_nWrittenBytes; /* 32 8 */
	bool m_bAllowMemoryAllocations; /* 40 1 */
	/* tier0/stackstats.cpp:150 */
	void BufferedFwrite_Value<double>(CCallStackStatsGatherer_DumpHelperVars_t* , double);
	/* tier0/stackstats.cpp:150 */
	void BufferedFwrite_Value<long long unsigned int>(CCallStackStatsGatherer_DumpHelperVars_t* , long long unsigned int);
	/* tier0/stackstats.cpp:150 */
	void BufferedFwrite_Value<unsigned char>(CCallStackStatsGatherer_DumpHelperVars_t* , unsigned char);
	/* tier0/stackstats.cpp:150 */
	void BufferedFwrite_Value<const CCallStackStatsGatherer_Base*>(CCallStackStatsGatherer_DumpHelperVars_t* , const CCallStackStatsGatherer_Base* );
	/* tier0/stackstats.cpp:150 */
	void BufferedFwrite_Value<unsigned int>(CCallStackStatsGatherer_DumpHelperVars_t* , unsigned int);
	/* tier0/stackstats.cpp:199 */
	void BufferedFwrite_Value_AtFilePosition<unsigned int>(CCallStackStatsGatherer_DumpHelperVars_t* , size_t, unsigned int);
};

// <0047E26D> tier0/stackstats.cpp:119
void CCallStackStatsGatherer_DumpHelperVars_t::CCallStackStatsGatherer_DumpHelperVars_t(uint8* pWriteBuffer, size_t nWriteBufferSize, FILE* pFile, bool bAllowMemoryAllocations)
{
} /* size: 0 */

// <0047E224> tier0/stackstats.cpp:119
inline void CCallStackStatsGatherer_DumpHelperVars_t::CCallStackStatsGatherer_DumpHelperVars_t(uint8* pWriteBuffer, size_t nWriteBufferSize, FILE* pFile, bool bAllowMemoryAllocations)
{
} /* size: 0 */

// <004808F5> tier0/stackstats.cpp:127
// function calls: 6
void CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite(const void* pData, size_t iDataSize)
{
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 214
	}
	{
		{
		}
	}
	CCallStackStatsGatherer_DumpHelperVars_t::FlushBuffer(); // 210
	CCallStackStatsGatherer_DumpHelperVars_t::FlushBuffer(); // 133
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 138
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 145
	{
		{
		}
	}
	CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite(
			const void* pData,
			size_t iDataSize);  // 127
} /* size: 311, inline expansions: 4 (262 bytes) */

// <0047E103> tier0/stackstats.cpp:127
// variables: 2
inline void CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite(const void* pData, size_t iDataSize)
{
	const char   __FUNCTION__; // 8339
	{
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 140
		}
	}
} /* size: 0, variables: 1 */

// <0047755C> tier0/stackstats.cpp:150
inline void BufferedFwrite_Value<unsigned CCallStackStatsGatherer_DumpHelperVars_t::int>(unsigned int Data)
{
} /* size: 0 */

// <00477530> tier0/stackstats.cpp:150
inline void BufferedFwrite_Value<const CCallStackStatsGatherer_DumpHelperVars_t::CCallStackStatsGatherer_Base*>(const CCallStackStatsGatherer_Base* Data)
{
} /* size: 0 */

// <00477504> tier0/stackstats.cpp:150
inline void BufferedFwrite_Value<unsigned CCallStackStatsGatherer_DumpHelperVars_t::char>(unsigned char Data)
{
} /* size: 0 */

// <004774D8> tier0/stackstats.cpp:150
inline void BufferedFwrite_Value<long long unsigned CCallStackStatsGatherer_DumpHelperVars_t::int>(long long unsigned int Data)
{
} /* size: 0 */

// <004774AC> tier0/stackstats.cpp:150
inline void CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<double>(double Data)
{
} /* size: 0 */

// <0047DC94> tier0/stackstats.cpp:155
// variables: 7
// function calls: 3
void CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_AtFilePosition(size_t nFileWritePosition, const void* pData, size_t iDataSize)
{
	const char   __FUNCTION__; // 8050
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 157
	}
	{
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 169
		}
		_DebuggerBreakInlineExpressionWrapper(void); // 167
	}
	{
		size_t nRewritePortion; // 177
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 180
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 184
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 186
		}
		_DebuggerBreakInlineExpressionWrapper(void); // 179
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 194
} /* size: 517, variables: 1, inline expansions: 1 (20 bytes) */

// <00477588> tier0/stackstats.cpp:199
inline void BufferedFwrite_Value_AtFilePosition<unsigned CCallStackStatsGatherer_DumpHelperVars_t::int>(size_t nFileWritePosition, unsigned int Data)
{
} /* size: 0 */

// <0047DC6F> tier0/stackstats.cpp:205
inline void CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_UpdateBlobSize(size_t nFileWritePosition)
{
} /* size: 0 */

// <0047DBA9> tier0/stackstats.cpp:210
// variables: 2
inline void CCallStackStatsGatherer_DumpHelperVars_t::FlushBuffer()
{
	const char   __FUNCTION__; // 59707
	{
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 216
		}
	}
} /* size: 0, variables: 1 */

// <0047DB84> tier0/stackstats.cpp:221
inline void CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(bool bFlushBuffer)
{
} /* size: 0 */

// <00474803> tier0/stackstats.cpp:239
// member functions: 4
// member variable: 1
// class size: 1,680
class CCallStackStatsGatherer_DumpAccess : public CCallStackStatsGatherer_Base {
public:
	/* class CCallStackStatsGatherer_Base <ancestor>; */ /* 0 1680 */
	/* tier0/stackstats.cpp:242 */
	size_t WriteStructDescription(CCallStackStatsGatherer_DumpAccess* , CCallStackStatsGatherer_DumpHelperVars_t& );
private:
	/* tier0/stackstats.cpp:260 */
	void CCallStackStatsGatherer_DumpAccess(CCallStackStatsGatherer_DumpAccess* );
	size_t WriteStructDescription(class CCallStackStatsGatherer_DumpAccess *, class CCallStackStatsGatherer_DumpHelperVars_t &); /* linkage=_ZN34CCallStackStatsGatherer_DumpAccess22WriteStructDescriptionER40CCallStackStatsGatherer_DumpHelperVars_t */
	void CCallStackStatsGatherer_DumpAccess(class CCallStackStatsGatherer_DumpAccess *); /* linkage=_ZN34CCallStackStatsGatherer_DumpAccessC4Ev */
} __attribute__((__aligned__(16)));

// <0047DB3B> tier0/stackstats.cpp:242
// variables: 3
inline void CCallStackStatsGatherer_DumpAccess::WriteStructDescription(CCallStackStatsGatherer_DumpHelperVars_t& DumpHelper)
{
	uint8* pReadFrom; // 244
	uint8* pDescriptionEnd; // 245
	size_t nWriteSize; // 254
} /* size: 0, variables: 3 */

// <00474875> tier0/stackstats.cpp:263
// member functions: 4
// member variable: 1
// class size: 8
class CStatsGathererDumpAutoLock {
	/* tier0/stackstats.cpp:266 */
	void CStatsGathererDumpAutoLock(CStatsGathererDumpAutoLock* , const CCallStackStatsGatherer_Base& );
	/* tier0/stackstats.cpp:267 */
	void ~CStatsGathererDumpAutoLock(CStatsGathererDumpAutoLock* );
private:
	const class CCallStackStatsGatherer_DumpAccess * m_pStatsGatherer; /* 0 8 */
	void CStatsGathererDumpAutoLock(class CStatsGathererDumpAutoLock *, const class CCallStackStatsGatherer_Base  &); /* linkage=_ZN26CStatsGathererDumpAutoLockC4ERK28CCallStackStatsGatherer_Base */
	void ~CStatsGathererDumpAutoLock(class CStatsGathererDumpAutoLock *); /* linkage=_ZN26CStatsGathererDumpAutoLockD4Ev */
};

// <0047DB1F> tier0/stackstats.cpp:266
void CStatsGathererDumpAutoLock::CStatsGathererDumpAutoLock(const CCallStackStatsGatherer_Base& StatsGatherer)
{
} /* size: 0 */

// <0047DAF9> tier0/stackstats.cpp:266
inline void CStatsGathererDumpAutoLock::CStatsGathererDumpAutoLock(const CCallStackStatsGatherer_Base& StatsGatherer)
{
} /* size: 0 */

// <0047DAE2> tier0/stackstats.cpp:267
void CStatsGathererDumpAutoLock::~CStatsGathererDumpAutoLock()
{
} /* size: 0 */

// <0047DAC9> tier0/stackstats.cpp:267
inline void CStatsGathererDumpAutoLock::~CStatsGathererDumpAutoLock()
{
} /* size: 0 */

// <004748E7> tier0/stackstats.cpp:274
// member function: 1
// member variables: 3
// struct size: 24
struct SimpleVector_t<const CCallStackStatsGatherer_Base*> {
	/* tier0/stackstats.cpp:276 */
	void SimpleVector_t(SimpleVector_t<const CCallStackStatsGatherer_Base*>* , size_t);
	const size_t m_nMaxCount; /* 0 8 */
	size_t m_nCount; /* 8 8 */
	const class CCallStackStatsGatherer_Base * m_Elements[1]; /* 16 8 */
};

// <00477490> tier0/stackstats.cpp:276
void SimpleVector_t<const CCallStackStatsGatherer_Base::SimpleVector_t(size_t nElementArraySize)
{
} /* size: 0 */

// <0047746A> tier0/stackstats.cpp:276
inline void SimpleVector_t<const CCallStackStatsGatherer_Base::SimpleVector_t(size_t nElementArraySize)
{
} /* size: 0 */

// <0047BE9D> tier0/stackstats.cpp:283
// variables: 44
// function calls: 64
bool _CCallStackStatsGatherer_Internal_DumpTree(const CCallStackStatsGatherer_Base& StatsGatherer, CCallStackStatsGatherer_DumpHelperVars_t& DumpHelpers, bool bDumpTranslationTable, SimpleVector_t<const CCallStackStatsGatherer_Base*>& TreesAlreadyDumped)
{
	uint32 iSubTreeCount; // 303
	const CCallStackStatsGatherer_Base ** pSubTreesCopy; // 304
	const char   __FUNCTION__; // 6405
	{
		size_t i; // 287
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 296
	}
	{
		CStatsGathererDumpAutoLock dumpLock; // 307
		uint32 CapturedCallStackLength; // 309
		uint32 nStatStructSize; // 310
		uint32 nEntryStride; // 311
		const void* pEntries; // 312
		uint32 iEntryCount; // 313
		const CCallStackStatsGatherer_Base* const* pSubTrees; // 315
		const char* szStructName; // 322
		size_t nBlobSizeMarker_GTHR; // 326
		size_t nRestoreEntriesPosition; // 376
		{
			size_t nBlobSizeMarker_HEAD; // 333
			size_t iStructNameLength; // 339
			size_t nStructDescSizeWriteMarker; // 362
			uint32 nDescriptionSize; // 367
			{
				uint32 i; // 346
			}
			CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
								unsigned int Data);  // 332
			CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(
					bool bFlushBuffer);  // 333
			CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
								unsigned int Data);  // 334
			CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<const CCallStackStatsGatherer_Base*>(
											const CCallStackStatsGatherer_Base* Data);  // 337
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 214
			}
			{
				{
				}
			}
			CCallStackStatsGatherer_DumpHelperVars_t::FlushBuffer(); // 210
			CCallStackStatsGatherer_DumpHelperVars_t::FlushBuffer(); // 359
			CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(
					bool bFlushBuffer);  // 362
			CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
								unsigned int Data);  // 363
			CCallStackStatsGatherer_DumpAccess::WriteStructDescription(
						CCallStackStatsGatherer_DumpHelperVars_t& DumpHelper);  // 367
			CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(
					bool bFlushBuffer);  // 207
			CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value_AtFilePosition<unsigned int>(
										size_t nFileWritePosition,
										unsigned int Data);  // 207
			CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_UpdateBlobSize(
							size_t nFileWritePosition);  // 373
		}
		{
			size_t nBlobSizeMarker_NTRY; // 382
			CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
								unsigned int Data);  // 381
			CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(
					bool bFlushBuffer);  // 382
			CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
								unsigned int Data);  // 383
			CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(
					bool bFlushBuffer);  // 388
			CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(
					bool bFlushBuffer);  // 207
			CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value_AtFilePosition<unsigned int>(
										size_t nFileWritePosition,
										unsigned int Data);  // 207
			CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_UpdateBlobSize(
							size_t nFileWritePosition);  // 394
		}
		{
			int iUniqueAddresses; // 405
			int iSortSize; // 406
			const void ** pSortedAddresses; // 407
			uint8* pWriteBufferBackup; // 490
			size_t nWriteBufferSizeBackup; // 491
			{
				const uint8* pEntryRead; // 409
				{
					uint32 i; // 410
					{
						uint32 j; // 412
						{
							const void* pInsertAddress; // 414
							int iHigh; // 419
							int iLow; // 420
							{
								int iMid; // 423
							}
							{
								size_t maxSize; // 447
								const void ** pTemp; // 449
								memcpy(void* __dest,
									const void* __src,
									size_t __len);  // 457
							}
							{
								int k; // 468
							}
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 481
							}
						}
					}
				}
			}
			{
				size_t iUniqueAddressSpace; // 497
			}
			{
				size_t nBlobSizeMarker_MSFL; // 508
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 504
				}
				{
					int i; // 517
					{
						char szBuff; // 521
						uint32 iLine; // 534
					}
				}
				CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
									unsigned int Data);  // 507
				CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(
						bool bFlushBuffer);  // 508
				CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
									unsigned int Data);  // 509
				CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(
						bool bFlushBuffer);  // 207
				CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value_AtFilePosition<unsigned int>(
											size_t nFileWritePosition,
											unsigned int Data);  // 207
				CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_UpdateBlobSize(
								size_t nFileWritePosition);  // 545
			}
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 214
			}
			{
				{
				}
			}
			CCallStackStatsGatherer_DumpHelperVars_t::FlushBuffer(); // 210
			CCallStackStatsGatherer_DumpHelperVars_t::FlushBuffer(); // 400
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 214
			}
			{
				{
				}
			}
			CCallStackStatsGatherer_DumpHelperVars_t::FlushBuffer(); // 210
			CCallStackStatsGatherer_DumpHelperVars_t::FlushBuffer(); // 550
			fread(void* __ptr,
				size_t __size,
				size_t __n,
				FILE* __stream);  // 561
		}
		CInterlockedIntT<int, 4>::GetRaw(); // 3180
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 3189
		CThreadRWLock_FastRead::LockForWrite(
				const char* pFileName,
				int nLineNumber);  // 299
		CInterlockedIntT<int, 4>::GetRaw(); // 3180
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 3189
		CThreadRWLock_FastRead::LockForWrite(
				const char* pFileName,
				int nLineNumber);  // 300
		CInterlockedIntT<int, 4>::GetRaw(); // 3180
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 3189
		CThreadRWLock_FastRead::LockForWrite(
				const char* pFileName,
				int nLineNumber);  // 301
		CCallStackStatsGatherer_Base::LockEverything(
				bool bLock);  // 295
		CCallStackStatsGatherer_Base::LockEverything(
				bool bLock);  // 266
		CStatsGathererDumpAutoLock::CStatsGathererDumpAutoLock(
						const CCallStackStatsGatherer_Base& StatsGatherer);  // 307
		CCallStackStatsGatherer_Base::GetCapturedCallStackDepth(); // 309
		CCallStackStatsGatherer_Base::GetStatStructSize(); // 310
		CCallStackStatsGatherer_Base::GetVectorData_StatEntries(
						const void  *& pBaseOut,
						uint32& nSizeOut);  // 314
		CCallStackStatsGatherer_Base::GetVectorData_StoredSubTrees(
						const CCallStackStatsGatherer_Base* const *& pBaseOut,
						uint32& nSizeOut);  // 316
		CCallStackStatsGatherer_Base::GetStatStructName(); // 322
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
							unsigned int Data);  // 325
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(
				bool bFlushBuffer);  // 326
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
							unsigned int Data);  // 327
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(
				bool bFlushBuffer);  // 207
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value_AtFilePosition<unsigned int>(
									size_t nFileWritePosition,
									unsigned int Data);  // 207
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_UpdateBlobSize(
						size_t nFileWritePosition);  // 573
		CCallStackStatsGatherer_Base::LockEverything(
				bool bLock);  // 267
		CStatsGathererDumpAutoLock::~CStatsGathererDumpAutoLock(); // 574
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 320
	}
	{
		uint32 i; // 577
		{
			bool bRet; // 579
		}
	}
} /* size: 0, variables: 3 */

// <0047BD3E> tier0/stackstats.cpp:590
// variable: 1
bool _CCallStackStatsGatherer_ModuleEnumerationCallback(const StackTranslation_LoadedModuleInfo_t* pModuleInfo, uint32 nMappingChangeCounter, void* pContext)
{
	CCallStackStatsGatherer_DumpHelperVars_t& DumpHelpers; // 595
} /* size: 182, variables: 1 */

// <0047BB4D> tier0/stackstats.cpp:609
// variable: 1
// function calls: 2
bool _CCallStackStatsGatherer_VMEncodingIndexEnumerationCallback(CVirtualMachineCallStackTranslationEncoder* pVMEncoder, uint nIndex, const char* szFunctionName, const char* szFileName, uint nLineNumber, void* pContext)
{
	CCallStackStatsGatherer_DumpHelperVars_t& DumpHelpers; // 611
	CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
						unsigned int Data);  // 613
	CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
						unsigned int Data);  // 614
} /* size: 173, variables: 1, inline expansions: 2 (38 bytes) */

// <0047BB00> tier0/stackstats.cpp:622
// variables: 2
bool _CCallStackStatsGatherer_VirtualMachineEnumerationCallback(CVirtualMachineCallStackTranslationEncoder* pVMEncoder, void* pContext)
{
	CCallStackStatsGatherer_DumpHelperVars_t& DumpHelpers; // 624
	size_t nBlobSizeMarker_VMSM; // 630
} /* size: 0, variables: 2 */

// <0047AD6A> tier0/stackstats.cpp:673
// variables: 12
// function calls: 31
bool _CCallStackStatsGatherer_Internal_DumpStatsToFile(const char* szFileName, const CCallStackStatsGatherer_Base& StatsGatherer, bool bDumpTranslationTable, bool bAllowMemoryAllocations)
{
	FILE* pFile; // 677
	uint8 tempBuffer; // 681
	CCallStackStatsGatherer_DumpHelperVars_t DumpHelpers; // 682
	SimpleVector_MoreBuffer_t TreesAlreadyDumped; // 719
	bool bRetVal; // 721
	{
		uint8 version; // 687
		uint8 pointersize; // 690
		uint32 iEndian; // 693
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 145
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite(
				const void* pData,
				size_t iDataSize);  // 688
	}
	{
		size_t nBlobSizeMarker; // 700
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
							unsigned int Data);  // 699
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(
				bool bFlushBuffer);  // 700
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
							unsigned int Data);  // 701
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<long long unsigned int>(
								long long unsigned int Data);  // 703
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<double>(
						double Data);  // 704
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<long long unsigned int>(
								long long unsigned int Data);  // 705
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(
				bool bFlushBuffer);  // 207
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value_AtFilePosition<unsigned int>(
									size_t nFileWritePosition,
									unsigned int Data);  // 207
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_UpdateBlobSize(
						size_t nFileWritePosition);  // 708
	}
	{
		size_t nBlobSizeMarker_SYMM; // 728
		bool bOnce; // 733
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
							unsigned int Data);  // 727
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(
				bool bFlushBuffer);  // 728
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
							unsigned int Data);  // 729
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned char>(
							unsigned char Data);  // 731
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(
				bool bFlushBuffer);  // 207
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value_AtFilePosition<unsigned int>(
									size_t nFileWritePosition,
									unsigned int Data);  // 207
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_UpdateBlobSize(
						size_t nFileWritePosition);  // 741
	}
	{
		size_t nBlobSizeMarker_VIRT; // 747
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
							unsigned int Data);  // 746
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(
				bool bFlushBuffer);  // 747
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned int>(
							unsigned int Data);  // 748
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value<unsigned char>(
							unsigned char Data);  // 750
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFTell(
				bool bFlushBuffer);  // 207
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_Value_AtFilePosition<unsigned int>(
									size_t nFileWritePosition,
									unsigned int Data);  // 207
		CCallStackStatsGatherer_DumpHelperVars_t::BufferedFwrite_UpdateBlobSize(
						size_t nFileWritePosition);  // 754
	}
	CCallStackStatsGatherer_DumpHelperVars_t::CCallStackStatsGatherer_DumpHelperVars_t(
						uint8* pWriteBuffer,
						size_t nWriteBufferSize,
						FILE* pFile,
						bool bAllowMemoryAllocations);  // 682
	SimpleVector_t<const CCallStackStatsGatherer_Base::SimpleVector_t(
			size_t nElementArraySize);  // 713
	SimpleVector_MoreBuffer_t::SimpleVector_MoreBuffer_t(); // 719
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 214
	}
	{
		{
		}
	}
	CCallStackStatsGatherer_DumpHelperVars_t::FlushBuffer(); // 210
	CCallStackStatsGatherer_DumpHelperVars_t::FlushBuffer(); // 759
} /* size: 0, variables: 5, inline expansions: 5 (382 bytes) */

// <0047AC2B> tier0/stackstats.cpp:771
// variables: 5
// function call: 1
void BasicStatStructFieldDesc::DescribeField(uint8* pDescribeWriteBuffer, size_t iDescribeMaxLength)
{
	size_t iFieldNameStrLen; // 780
	const size_t  iOutputLength; // 781
	size_t iWriteOffset; // 785
	const char   __FUNCTION__; // 60377
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 807
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 804
} /* size: 131, variables: 4, inline expansions: 1 (14 bytes) */

// <004799DD> tier0/stackstats.cpp:817
void CCallStackStatsGathererSharedGlobalInstanceManager::CCallStackStatsGathererSharedGlobalInstanceManager()
{
} /* size: 0 */

// <004799C0> tier0/stackstats.cpp:817
inline void CCallStackStatsGathererSharedGlobalInstanceManager::CCallStackStatsGathererSharedGlobalInstanceManager()
{
} /* size: 0 */

// <00475CC6> tier0/stackstats.cpp:817
// variable: 1
// function calls: 16
void CCallStackStatsGathererSharedGlobalInstanceManager::~CCallStackStatsGathererSharedGlobalInstanceManager()
{
	_M_begin_node(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGa this); // 1609
	{
		_Node_ptr __y; // 2589
		_S_right(_Node_ptr __x); // 2588
		_S_left(_Node_ptr __x); // 2589
		RegisteredUniqueInstance_t::~RegisteredUniqueInstance_t(); // 302
		~pair(const pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalIn this); // 88
		destroy_at<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t> >(pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstance __location); // 698
		destroy<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t> >(allocator_type& __a,
																pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstance __p);  // 1265
		_M_destroy_node(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGatherer this,
				_Node_ptr __p);  // 1273
		deallocate(const __new_allocator<std::_Rb_tree_node<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_ this,
				_Rb_tree_node<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererS __p,
				size_type __n);  // 215
		deallocate(const allocator<std::_Rb_tree_node<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCa this,
				_Rb_tree_node<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererS __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 1191
		_M_put_node(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGatherer this,
				_Node_ptr __p);  // 1274
		_M_drop_node(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGatherer this,
				_Node_ptr __p);  // 2590
	}
	_M_erase(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGatherer this,
		_Node_ptr __x);  // 1609
	~_Rb_tree(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGatherer this); // 337
	~map(const map<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceM this); // 817
} /* size: 74, inline expansions: 4 (174 bytes) */

// <00475CA9> tier0/stackstats.cpp:817
inline void CCallStackStatsGathererSharedGlobalInstanceManager::~CCallStackStatsGathererSharedGlobalInstanceManager()
{
} /* size: 0 */

// <0047496B> tier0/stackstats.cpp:817
// member functions: 14
// member variables: 2
// class size: 72
class CCallStackStatsGathererSharedGlobalInstanceManager {
	/* tier0/stackstats.cpp:820 */
	struct IndexMapKey_t {
		/* tier0/stackstats.cpp:822 */
		void IndexMapKey_t(IndexMapKey_t* , const char* );
		/* tier0/stackstats.cpp:834 */
		bool operator<(const IndexMapKey_t* , const IndexMapKey_t& );
		uint m_nIDLength; /* 0 4 */
		uint8 m_nHashedString[32]; /* 4 32 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/stackstats.cpp:855 */
	struct RegisteredUniqueInstance_t {
		/* tier0/stackstats.cpp:857 */
		void RegisteredUniqueInstance_t(RegisteredUniqueInstance_t* );
		/* tier0/stackstats.cpp:864 */
		void ~RegisteredUniqueInstance_t(RegisteredUniqueInstance_t* );
		CCallStackStatsGatherer_Base * pGatherer; /* 0 8 */
		uint32 nReferenceCount; /* 8 4 */
		const char * pFullName; /* 16 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/stackstats.cpp:877 */
	CCallStackStatsGatherer_Base* GetInstance(CCallStackStatsGathererSharedGlobalInstanceManager* , const char* , CCallStackStatsGatherer_Base* (*)(void* ), void* );
	/* tier0/stackstats.cpp:907 */
	CCallStackStatsGatherer_Base* FindInstance(CCallStackStatsGathererSharedGlobalInstanceManager* , const char* );
	/* tier0/stackstats.cpp:923 */
	void ReleaseInstance(CCallStackStatsGathererSharedGlobalInstanceManager* , const char* , CCallStackStatsGatherer_Base* , const CallStackStatsGatherer_SharedInstanceData_t* , void (*)(CCallStackStatsGatherer_Base* ));
	/* tier0/stackstats.cpp:950 */
	typedef struct map<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t, std::less<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t>, std::allocator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t> > > IndexMap_t;
	IndexMap_t m_IndexMap; /* 0 48 */
	CThreadFastMutex m_IndexMapMutex; /* 48 24 */
	/* tier0/stackstats.cpp:951 */
	typedef iterator IndexMapIter_t;
	void ~CCallStackStatsGathererSharedGlobalInstanceManager(CCallStackStatsGathererSharedGlobalInstanceManager* );
	void CCallStackStatsGathererSharedGlobalInstanceManager(CCallStackStatsGathererSharedGlobalInstanceManager* );
	class CCallStackStatsGatherer_Base * GetInstance(class CCallStackStatsGathererSharedGlobalInstanceManager *, const char  *, class CCallStackStatsGatherer_Base * (*)(void *), void *); /* linkage=_ZN50CCallStackStatsGathererSharedGlobalInstanceManager11GetInstanceEPKcPFP28CCallStackStatsGatherer_BasePvES4_ */
	class CCallStackStatsGatherer_Base * FindInstance(class CCallStackStatsGathererSharedGlobalInstanceManager *, const char  *); /* linkage=_ZN50CCallStackStatsGathererSharedGlobalInstanceManager12FindInstanceEPKc */
	void ReleaseInstance(class CCallStackStatsGathererSharedGlobalInstanceManager *, const char  *, class CCallStackStatsGatherer_Base *, const class CallStackStatsGatherer_SharedInstanceData_t  *, void (*)(class CCallStackStatsGatherer_Base *)); /* linkage=_ZN50CCallStackStatsGathererSharedGlobalInstanceManager15ReleaseInstanceEPKcP28CCallStackStatsGatherer_BasePK43CallStackStatsGatherer_SharedInstanceData_tPFvS3_E */
	void ~CCallStackStatsGathererSharedGlobalInstanceManager(class CCallStackStatsGathererSharedGlobalInstanceManager *); /* linkage=_ZN50CCallStackStatsGathererSharedGlobalInstanceManagerD4Ev */
	void CCallStackStatsGathererSharedGlobalInstanceManager(class CCallStackStatsGathererSharedGlobalInstanceManager *); /* linkage=_ZN50CCallStackStatsGathererSharedGlobalInstanceManagerC4Ev */
};

// <0047AC03> tier0/stackstats.cpp:822
// variable: 1
void IndexMapKey_t::IndexMapKey_t(const char* szUniqueID)
{
	{
		int i; // 826
	}
} /* size: 0 */

// <0047ABD0> tier0/stackstats.cpp:822
// variable: 1
inline void IndexMapKey_t::IndexMapKey_t(const char* szUniqueID)
{
	{
		int i; // 826
	}
} /* size: 0 */

// <0047AB90> tier0/stackstats.cpp:834
// variables: 2
inline void IndexMapKey_t::operator<(const IndexMapKey_t& key)
{
	int nHashCheck; // 839
	{
		int i; // 841
	}
} /* size: 0, variables: 1 */

// <0047AB79> tier0/stackstats.cpp:857
void RegisteredUniqueInstance_t::RegisteredUniqueInstance_t()
{
} /* size: 0 */

// <0047AB60> tier0/stackstats.cpp:857
inline void RegisteredUniqueInstance_t::RegisteredUniqueInstance_t()
{
} /* size: 0 */

// <0047AB49> tier0/stackstats.cpp:864
void RegisteredUniqueInstance_t::~RegisteredUniqueInstance_t()
{
} /* size: 0 */

// <0047AB30> tier0/stackstats.cpp:864
inline void RegisteredUniqueInstance_t::~RegisteredUniqueInstance_t()
{
} /* size: 0 */

// <00479B9E> tier0/stackstats.cpp:877
// variables: 12
// function calls: 55
void CCallStackStatsGathererSharedGlobalInstanceManager::GetInstance(const char* szUniqueID, CCallStackStatsGatherer_Base* (*pCreateNewFunc)(void *), void* pContext)
{
	const char   __FUNCTION__; // 59707
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_881; // 881
	pair<std::_Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t> >, bool> indexMapIter; // 884
	RegisteredUniqueInstance_t testInsert; // 885
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
	}
	{
		int nUniqueIDLength; // 895
		char* pNameCopy; // 896
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 897
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 881
	_Rb_tree_iterator(const _Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStat this); // 369
	pair(const pair<std::_Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCal this); // 884
	RegisteredUniqueInstance_t::RegisteredUniqueInstance_t(); // 885
	{
		int i; // 826
		memset(void* __dest,
			int __ch,
			size_t __len);  // 824
	}
	IndexMapKey_t::IndexMapKey_t(
			const char* szUniqueID);  // 886
	pair<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t&>(const pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalIn this,
																IndexMapKey_t& __x,
																RegisteredUniqueInstance_t& __y);  // 886
	_M_end(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGa this); // 2735
	_M_begin(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGa this); // 2734
	Min<int>(const int& val1,
		const int& val2);  // 839
	{
		int i; // 841
	}
	IndexMapKey_t::operator<(
			const IndexMapKey_t& key);  // 405
	less<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t>::operator(
			const IndexMapKey_t& __x,
			const IndexMapKey_t& __y);  // 2740
	_S_left(_Base_ptr __x); // 2741
	_Rb_tree_iterator(const _Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStat this,
				_Base_ptr __x);  // 2743
	Min<int>(const int& val1,
		const int& val2);  // 839
	{
		int i; // 841
	}
	IndexMapKey_t::operator<(
			const IndexMapKey_t& key);  // 405
	less<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t>::operator(
			const IndexMapKey_t& __x,
			const IndexMapKey_t& __y);  // 2751
	_S_right(_Base_ptr __x); // 2741
	_Rb_tree_iterator(const _Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStat this,
				_Base_ptr __x);  // 1621
	begin(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGatherer this); // 2746
	operator--(const _Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStat this); // 2749
	_M_get_insert_unique_pos(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGatherer this,
				const key_type& __k);  // 2793
	{
		_Alloc_node __an; // 2797
		_Alloc_node::_Alloc_node(
				_Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGathererShared __t);  // 2797
		allocate(const __new_allocator<std::_Rb_tree_node<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_ this,
			size_type __n,
			const void  *);  // 203
		allocate(const allocator<std::_Rb_tree_node<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCa this,
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 1170
		_M_get_node(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGatherer this); // 1253
		construct_at<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t>, std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t> >(pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstance __location); // 676
		construct<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t>, std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t> >(allocator_type& __a,
																pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstance __p);  // 1237
		_M_construct_node<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t> >(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGatherer this,
																_Node_ptr __node);  // 1254
		_M_create_node<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t> >(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGatherer this); // 1136
		_Alloc_node::operator(
																pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstance __arg);  // 2481
		_S_insert_and_rebalance(const bool  __insert_left,
					_Node_base* __x,
					_Node_base* __p,
					_Node_base& __header);  // 2484
		_Rb_tree_iterator(const _Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStat this,
					_Base_ptr __x);  // 2486
		Min<int>(const int& val1,
			const int& val2);  // 839
		{
			int i; // 841
		}
		IndexMapKey_t::operator<(
				const IndexMapKey_t& key);  // 405
		less<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t>::operator(
				const IndexMapKey_t& __x,
				const IndexMapKey_t& __y);  // 2477
		_M_insert_<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t>, std::_Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t>, std::_Select1st<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t> >, std::less<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t>, std::allocator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t> > >::_Alloc_node>(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGatherer this,
																_Base_ptr __x,
																_Base_ptr __p,
																pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstance __v,
																_Alloc_node& __node_gen);  // 2798
		pair<std::_Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t> >, bool>(const pair<std::_Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCal this,
																_Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathe __x,
																bool& __y);  // 2798
	}
	_M_insert_unique<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceManager::RegisteredUniqueInstance_t> >(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGatherer this,
																pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstance __v);  // 865
	insert(const map<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceM this,
		value_type& __x);  // 886
	RegisteredUniqueInstance_t::~RegisteredUniqueInstance_t(); // 302
	~pair(const pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalIn this); // 886
	CCallStackStatsGatherer_Base::GetStatStructName(); // 893
	RegisteredUniqueInstance_t::~RegisteredUniqueInstance_t(); // 905
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 905
} /* size: 1341, variables: 4, inline expansions: 36 (3010 bytes) */

// <00479B5E> tier0/stackstats.cpp:907
// variables: 2
inline void CCallStackStatsGathererSharedGlobalInstanceManager::FindInstance(const char* szUniqueID)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_909; // 909
	IndexMapIter_t indexMapIter; // 912
} /* size: 0, variables: 2 */

// <00479AB8> tier0/stackstats.cpp:923
// variables: 4
inline void CCallStackStatsGathererSharedGlobalInstanceManager::ReleaseInstance(const char* szUniqueID, CCallStackStatsGatherer_Base* pGatherer, const CallStackStatsGatherer_SharedInstanceData_t* pRemoveSharedInstanceData, void (*pDeleteThisTypeFunc)(CCallStackStatsGatherer_Base *))
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_925; // 925
	IndexMapIter_t indexMapIter; // 928
	const char   __FUNCTION__; // 55757
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 932
	}
} /* size: 0, variables: 3 */

// <00479928> tier0/stackstats.cpp:961
CCallStackStatsGatherer_Base* _CCallStackStatsGatherer_GetSharedGlobalInstance(const char* szUniqueID, CCallStackStatsGatherer_Base* (*pCreateNewFunc)(void *), void* pContext)
{
} /* size: 25 */

// <004792CD> tier0/stackstats.cpp:970
// variable: 1
// function calls: 20
void _CCallStackStatsGatherer_ReleaseSharedGlobalInstance(const char* szUniqueID, CCallStackStatsGatherer_Base* pGatherer, const CallStackStatsGatherer_SharedInstanceData_t* pRemoveSharedInstanceData, void (*pDeleteThisTypeFunc)(CCallStackStatsGatherer_Base *))
{
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 925
	_Rb_tree_iterator(const _Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStat this); // 928
	{
		int i; // 826
		memset(void* __dest,
			int __ch,
			size_t __len);  // 824
	}
	IndexMapKey_t::IndexMapKey_t(
			const char* szUniqueID);  // 929
	find(const map<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceM this,
		const key_type& __x);  // 929
	_M_end(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGa this); // 1629
	_Rb_tree_iterator(const _Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStat this,
				_Base_ptr __x);  // 1629
	end(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGatherer this); // 410
	end(const map<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceM this); // 930
	{
	}
	CCallStackStatsGatherer_Base::RemoveSharedInstanceData(
				const CallStackStatsGatherer_SharedInstanceData_t& SharedInstanceData);  // 943
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 947
	CCallStackStatsGathererSharedGlobalInstanceManager::ReleaseInstance(
			const char* szUniqueID,
			CCallStackStatsGatherer_Base* pGatherer,
			const CallStackStatsGatherer_SharedInstanceData_t* pRemoveSharedInstanceData,
			void (*pDeleteThisTypeFunc)(CCallStackStatsGatherer_Base *));  // 973
} /* size: 0, inline expansions: 19 (1073 bytes) */

// <0047ED87> tier0/stackstats.cpp:984
// function calls: 8
GathererVector_t& LockGatherers(void)
{
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 986
	CNewDeleteAllocator<unsigned char>::CNewDeleteAllocator(); // 101
	CBareVector_SizedImpl<CCallStackStatsGatherer_Base::CBareVector_SizedImpl(); // 220
	CBareVector<CCallStackStatsGatherer_Base::CBareVector(); // 989
	LockGatherers(void); // 984
} /* size: 190, inline expansions: 8 (234 bytes) */

// <00479185> tier0/stackstats.cpp:984
// variable: 1
GathererVector_t& LockGatherers(void)
{
	CBareVector<CCallStackStatsGatherer_Base*> s_AllStackStatsGatherers; // 989
} /* size: 0, variables: 1 */

// <0047917A> tier0/stackstats.cpp:994
void UnlockGatherers(void)
{
} /* size: 0 */

// <00479121> tier0/stackstats.cpp:1000
// variable: 1
bool StackStats_GetSymbolTranslationDefault(void)
{
	bool bLocalTranslate; // 1003
} /* size: 28, variables: 1 */

// <004787C8> tier0/stackstats.cpp:1018
// variables: 6
// function calls: 32
bool StackStats_DumpNamedInstance(const char* szUniqueID, const char* szFileName, bool bDumpTranslationTable, bool bAllowMemoryAllocations)
{
	{
		CCallStackStatsGatherer_Base* pGatherer; // 1023
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 909
		_Rb_tree_iterator(const _Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStat this); // 912
		{
			int i; // 826
			memset(void* __dest,
				int __ch,
				size_t __len);  // 824
		}
		IndexMapKey_t::IndexMapKey_t(
				const char* szUniqueID);  // 913
		find(const map<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceM this,
			const key_type& __x);  // 913
		_M_end(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGa this); // 1629
		_Rb_tree_iterator(const _Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStat this,
					_Base_ptr __x);  // 1629
		end(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGatherer this); // 410
		end(const map<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceM this); // 914
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 921
		CCallStackStatsGathererSharedGlobalInstanceManager::FindInstance(
				const char* szUniqueID);  // 1023
	}
	{
		GathererVector_t& allGatherers; // 1032
		{
			uint32 i; // 1033
			{
				CCallStackStatsGatherer_Base* pGatherer; // 1035
				{
					bool bResult; // 1038
					CThreadFastMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 996
					ThreadInterlockedExchange64(volatile int64* p,
									int64 value);  // 874
					CThreadFastMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 996
					UnlockGatherers(void); // 994
					UnlockGatherers(void); // 1039
				}
				CBareVector_SizedImpl<CCallStackStatsGatherer_Base::operator[](
						uint32 i);  // 1035
				CCallStackStatsGatherer_Base::GetStatStructName(); // 1036
			}
			CBareVector_SizedImpl<CCallStackStatsGatherer_Base::Count(); // 1033
		}
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 996
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 996
		UnlockGatherers(void); // 994
		UnlockGatherers(void); // 1045
	}
} /* size: 687 */

// <00477E81> tier0/stackstats.cpp:1052
// variables: 14
// function calls: 30
void StackStats_EnumerateRegisteredInstances(FN_StackStats_EnumInstances_Callback pFN_Callback, void* pContext)
{
	GathererVector_t& allGatherers; // 1056
	const char   __FUNCTION__; // 50743
	{
		size_t nAlreadyEnumeratedBytes; // 1062
		uint8* pAlreadyEnumerated; // 1063
		bool bContinue; // 1066
		uint32 nEnumeratedInstances; // 1069
		{
			IndexMapIter_t iter; // 1073
			{
				CCallStackStatsGatherer_Base* pInstance; // 1077
				const char* pName; // 1078
				uint32 i; // 1086
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1095
				}
				CBareVector_SizedImpl<CCallStackStatsGatherer_Base::Count(); // 1087
				CBareVector_SizedImpl<CCallStackStatsGatherer_Base::operator[](
						uint32 i);  // 1089
				CBareVector_SizedImpl<CCallStackStatsGatherer_Base::Count(); // 1095
				CCallStackStatsGatherer_Base::GetStatStructName(); // 1080
			}
			_Rb_tree_iterator(const _Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStat this,
						_Base_ptr __x);  // 1621
			begin(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGatherer this); // 392
			begin(const map<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceM this); // 1073
			_M_end(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGa this); // 1629
			_Rb_tree_iterator(const _Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStat this,
						_Base_ptr __x);  // 1629
			end(const _Rb_tree<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, std::pair<const CCallStackStatsGatherer this); // 410
			end(const map<CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStatsGathererSharedGlobalInstanceM this); // 1074
			operator++(const _Rb_tree_iterator<std::pair<const CCallStackStatsGathererSharedGlobalInstanceManager::IndexMapKey_t, CCallStackStat this); // 1075
		}
		{
			uint32 i; // 1099
			{
				CCallStackStatsGatherer_Base* pInstance; // 1103
				CBareVector_SizedImpl<CCallStackStatsGatherer_Base::operator[](
						uint32 i);  // 1103
				CCallStackStatsGatherer_Base::GetStatStructName(); // 1104
			}
			CBareVector_SizedImpl<CCallStackStatsGatherer_Base::Count(); // 1099
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1111
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1064
		CBareVector_SizedImpl<CCallStackStatsGatherer_Base::Count(); // 1111
		CBareVector_SizedImpl<CCallStackStatsGatherer_Base::Count(); // 1111
	}
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 1055
	CBareVector_SizedImpl<CCallStackStatsGatherer_Base::Count(); // 1058
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 996
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 996
	UnlockGatherers(void); // 994
	UnlockGatherers(void); // 1114
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1115
} /* size: 0, variables: 2, inline expansions: 12 (323 bytes) */

// <0047770E> tier0/stackstats.cpp:1119
// variables: 12
// function calls: 23
void StackStats_GathererRegistration(CCallStackStatsGatherer_Base& StatsGatherer, bool bRegister)
{
	GathererVector_t& allGatherers; // 1122
	const char   __FUNCTION__; // 48368
	{
		uint32 i; // 1127
		{
			CCallStackStatsGatherer_Base* pGatherer; // 1129
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1130
			}
			CBareVector_SizedImpl<CCallStackStatsGatherer_Base::operator[](
					uint32 i);  // 1129
			CCallStackStatsGatherer_Base::EvaluateGathererLinkage(
						CCallStackStatsGatherer_Base& other);  // 1133
			CCallStackStatsGatherer_Base::EvaluateGathererLinkage(
						CCallStackStatsGatherer_Base& other);  // 1134
		}
		CBareVector_SizedImpl<CCallStackStatsGatherer_Base::Count(); // 1127
	}
	{
		int nGathererIndex; // 1141
		{
			uint32 i; // 1142
			{
				CCallStackStatsGatherer_Base* pGatherer; // 1144
				CCallStackStatsGatherer_Base::OnGathererRemoved(
							const CCallStackStatsGatherer_Base& other);  // 1152
				CBareVector_SizedImpl<CCallStackStatsGatherer_Base::operator[](
						uint32 i);  // 1144
			}
			CBareVector_SizedImpl<CCallStackStatsGatherer_Base::Count(); // 1142
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1155
		}
		Destruct<CCallStackStatsGatherer_Base*>(CCallStackStatsGatherer_Base** pMemory); // 158
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 160
		CBareVector_SizedImpl<CCallStackStatsGatherer_Base::Remove(
			uint32 nIndex);  // 1156
	}
	{
		uint32 nTestVal; // 181
	}
	CNewDeleteAllocator<unsigned char>::allocate(
		size_type num,
		const void  *);  // 194
	CBareVector_SizedImpl<CCallStackStatsGatherer_Base::Grow(); // 173
	{
		size_t nCurMemSize; // 199
		CCallStackStatsGatherer_Base** pNewMem; // 202
		CNewDeleteAllocator<unsigned char>::allocate(
			size_type num,
			const void  *);  // 202
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 205
		CNewDeleteAllocator<unsigned char>::deallocate(
				pointer p,
				size_type num);  // 207
	}
	CBareVector_SizedImpl<CCallStackStatsGatherer_Base::Grow(); // 138
	CBareVector_SizedImpl<CCallStackStatsGatherer_Base::AddToTail_NoConstruct(); // 146
	CBareVector_SizedImpl<CCallStackStatsGatherer_Base::AddToTail(
			CCallStackStatsGatherer_Base* const& val);  // 1136
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 996
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 996
	UnlockGatherers(void); // 994
	UnlockGatherers(void); // 1159
} /* size: 0, variables: 2, inline expansions: 10 (591 bytes) */

// <004775FF> tier0/stackstats.cpp:1166
// variables: 6
size_t _CCallStackStatsGatherer_Write_FieldDescriptions(CallStackStatStructDescFuncs* pFieldDescriptions, uint8* pWriteBuffer, size_t iWriteBufferSize)
{
	size_t iWriteMarker; // 1169
	size_t iLumpSizeMarker; // 1176
	size_t iNumFieldsWriteMarker; // 1180
	uint32 iNumFields; // 1182
	CallStackStatStructDescFuncs* pDesc; // 1185
	{
		size_t iFieldWrote; // 1188
	}
} /* size: 144, variables: 5 */


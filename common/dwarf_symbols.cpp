
//
// common/dwarf_symbols.cpp
//
//	referenced by: libtier0.so
//
//	functions: 155
//

// <004489A3> ../common/dwarf_symbols.cpp:69
uint32 SwapUint32(uint32 Val)
{
} /* size: 0 */

// <00448984> ../common/dwarf_symbols.cpp:78
inline bool IsContainerInfoTag(uint32 nTag)
{
} /* size: 0 */

// <00448733> ../common/dwarf_symbols.cpp:88
// variables: 6
// function calls: 5
void SDwarfSymbolInfo::IsEqualOrNested(const SDwarfSymbolInfo* pOther, bool* pKeepThis)
{
	int nLen; // 176
	int nOtherLen; // 177
	int nShorterLen; // 179
	int nLongerLen; // 180
	const char* pShorter; // 181
	const char* pLonger; // 182
	V_strlen(const char* str); // 176
	V_strlen(const char* str); // 177
	strchr(const char* __s,
		int __c);  // 200
	V_strcmp(const char* s1,
		const char* s2);  // 205
	V_strcmp(const char* s1,
		const char* s2);  // 214
} /* size: 0, variables: 6, inline expansions: 5 (0 bytes) */

// <00448647> ../common/dwarf_symbols.cpp:219
// function calls: 3
void CDwarfCfiState::CDwarfCfiState()
{
	CDwarfVector<SDwarfUnwindRule>::Clear(); // 37
	CDwarfVector<SDwarfUnwindRule>::CDwarfVector(); // 154
	SDwarfUnwindRuleState::SDwarfUnwindRuleState(); // 221
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0044862A> ../common/dwarf_symbols.cpp:219
void CDwarfCfiState::CDwarfCfiState()
{
} /* size: 0 */

// <0044841E> ../common/dwarf_symbols.cpp:234
// variables: 2
// function calls: 6
void CDwarfCfiState::~CDwarfCfiState()
{
	{
		SDwarfUnwindRuleState* pState; // 238
	}
	{
		SDwarfUnwindRuleState* pState; // 238
		CDwarfVector<SDwarfUnwindRule>::Purge(); // 41
		CDwarfVector<SDwarfUnwindRule>::~CDwarfVector(); // 154
		SDwarfUnwindRuleState::~SDwarfUnwindRuleState(); // 240
	}
	CDwarfVector<SDwarfUnwindRule>::Purge(); // 41
	CDwarfVector<SDwarfUnwindRule>::~CDwarfVector(); // 154
	SDwarfUnwindRuleState::~SDwarfUnwindRuleState(); // 243
} /* size: 0, inline expansions: 3 (0 bytes) */

// <004483F3> ../common/dwarf_symbols.cpp:234
// variable: 1
void CDwarfCfiState::~CDwarfCfiState()
{
	{
		SDwarfUnwindRuleState* pState; // 238
	}
} /* size: 0 */

// <00448092> ../common/dwarf_symbols.cpp:246
// variables: 5
// function calls: 11
void CDwarfCfiState::UpdateRule(uint16 nRuleRegister, uint16 op, uint16 nRefRegister, int32 nOffset)
{
	SDwarfUnwindRule* pRule; // 255
	const char   __FUNCTION__; // 50637
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 260
	}
	{
		int i; // 360
		CDwarfVector<SDwarfUnwindRule>::Count(); // 360
		{
			SDwarfUnwindRule* pCheck; // 362
			CDwarfVector<SDwarfUnwindRule>::operator[](
					int nIndex);  // 362
		}
	}
	FindRule(SDwarfUnwindRuleState* pState,
		uint16 nRuleRegister);  // 178
	CDwarfCfiState::FindRule(
		uint16 nRuleRegister);  // 255
	CDwarfVector<SDwarfUnwindRule>::GetIndex(
		const SDwarfUnwindRule* pPtr);  // 275
	CDwarfVector<SDwarfUnwindRule>::Count(); // 260
	CDwarfVector<SDwarfUnwindRule>::Count(); // 261
	CDwarfVector<SDwarfUnwindRule>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<SDwarfUnwindRule>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<SDwarfUnwindRule>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<SDwarfUnwindRule>::GetAppendPtr(
			int nCount);  // 265
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <0044802F> ../common/dwarf_symbols.cpp:278
// function call: 1
void CDwarfCfiState::ClearRules()
{
	CDwarfVector<SDwarfUnwindRule>::Empty(); // 282
} /* size: 0, inline expansions: 1 (0 bytes) */

// <004494D9> ../common/dwarf_symbols.cpp:285
// variable: 1
// function calls: 2
void CDwarfCfiState::GetCfaOp()
{
	{
		int i; // 287
		CDwarfVector<SDwarfUnwindRule>::Count(); // 287
		CDwarfVector<SDwarfUnwindRule>::operator[](
				int nIndex);  // 289
	}
} /* size: 0 */

// <00448005> ../common/dwarf_symbols.cpp:285
// variable: 1
void CDwarfCfiState::GetCfaOp()
{
	{
		int i; // 287
	}
} /* size: 0 */

// <0044958C> ../common/dwarf_symbols.cpp:297
// variable: 1
// function calls: 2
void CDwarfCfiState::GetCfaRefRegister()
{
	{
		int i; // 299
		CDwarfVector<SDwarfUnwindRule>::Count(); // 299
		CDwarfVector<SDwarfUnwindRule>::operator[](
				int nIndex);  // 301
	}
} /* size: 0 */

// <00447FDB> ../common/dwarf_symbols.cpp:297
// variable: 1
void CDwarfCfiState::GetCfaRefRegister()
{
	{
		int i; // 299
	}
} /* size: 0 */

// <0044963F> ../common/dwarf_symbols.cpp:309
// variable: 1
// function calls: 2
void CDwarfCfiState::GetCfaOffset()
{
	{
		int i; // 311
		CDwarfVector<SDwarfUnwindRule>::Count(); // 311
		CDwarfVector<SDwarfUnwindRule>::operator[](
				int nIndex);  // 313
	}
} /* size: 0 */

// <00447FB1> ../common/dwarf_symbols.cpp:309
// variable: 1
void CDwarfCfiState::GetCfaOffset()
{
	{
		int i; // 311
	}
} /* size: 0 */

// <004498BC> ../common/dwarf_symbols.cpp:321
// variable: 1
void CDwarfCfiState::PushRuleState()
{
	SDwarfUnwindRuleState* pCopy; // 323
} /* size: 0, variables: 1 */

// <004496F2> ../common/dwarf_symbols.cpp:328
// variable: 1
// function calls: 3
void CDwarfCfiState::PopRuleState()
{
	SDwarfUnwindRuleState* pPop; // 330
	CDwarfVector<SDwarfUnwindRule>::Purge(); // 41
	CDwarfVector<SDwarfUnwindRule>::~CDwarfVector(); // 154
	SDwarfUnwindRuleState::~SDwarfUnwindRuleState(); // 337
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00447F5D> ../common/dwarf_symbols.cpp:328
// variable: 1
void CDwarfCfiState::PopRuleState()
{
	SDwarfUnwindRuleState* pPop; // 330
} /* size: 0, variables: 1 */

// <0044990D> ../common/dwarf_symbols.cpp:343
// function call: 1
void CDwarfCfiState::SetInitRuleState()
{
	{
	}
	CDwarfCfiState::SetInitRuleState(); // 343
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00447EEC> ../common/dwarf_symbols.cpp:343
// variables: 2
void CDwarfCfiState::SetInitRuleState()
{
	const char   __FUNCTION__; // 48588
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 345
	}
} /* size: 0, variables: 1 */

// <004497EB> ../common/dwarf_symbols.cpp:353
// variables: 2
// function calls: 2
void FindRule(SDwarfUnwindRuleState* pState, uint16 nRuleRegister)
{
	{
		int i; // 360
		CDwarfVector<SDwarfUnwindRule>::Count(); // 360
		{
			SDwarfUnwindRule* pCheck; // 362
			CDwarfVector<SDwarfUnwindRule>::operator[](
					int nIndex);  // 362
		}
	}
} /* size: 0 */

// <00447EA6> ../common/dwarf_symbols.cpp:353
// variables: 2
void FindRule(SDwarfUnwindRuleState* pState, uint16 nRuleRegister)
{
	{
		int i; // 360
		{
			SDwarfUnwindRule* pCheck; // 362
		}
	}
} /* size: 0 */

// <00447B83> ../common/dwarf_symbols.cpp:372
// variable: 1
// function calls: 14
void CDwarfCfiState::CopyRuleState()
{
	SDwarfUnwindRuleState* pCopy; // 374
	CDwarfVector<SDwarfUnwindRule>::Clear(); // 37
	CDwarfVector<SDwarfUnwindRule>::CDwarfVector(); // 154
	SDwarfUnwindRuleState::SDwarfUnwindRuleState(); // 374
	CDwarfVector<SDwarfUnwindRule>::Count(); // 376
	CDwarfVector<SDwarfUnwindRule>::Base(); // 376
	CDwarfVector<SDwarfUnwindRule>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<SDwarfUnwindRule>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<SDwarfUnwindRule>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<SDwarfUnwindRule>::GetAppendPtr(
			int nCount);  // 168
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<SDwarfUnwindRule>(const SDwarfUnwindRule* pFrom,
						const SDwarfUnwindRule* pFromEnd,
						SDwarfUnwindRule* pTo);  // 173
	UtlTraitsCopyRange<SDwarfUnwindRule>(const SDwarfUnwindRule* pFrom,
						const SDwarfUnwindRule* pFromEnd,
						SDwarfUnwindRule* pTo);  // 168
	CDwarfVector<SDwarfUnwindRule>::Append(
		const SDwarfUnwindRule* pElt,
		int nCount);  // 376
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <00447A8F> ../common/dwarf_symbols.cpp:382
// function calls: 4
void CDwarfUnwindTable::CDwarfUnwindTable()
{
	CDwarfVector<SDwarfUnwindRuleSet>::Clear(); // 37
	CDwarfVector<SDwarfUnwindRuleSet>::CDwarfVector(); // 382
	CDwarfVector<SDwarfUnwindRule>::Clear(); // 37
	CDwarfVector<SDwarfUnwindRule>::CDwarfVector(); // 382
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00447A72> ../common/dwarf_symbols.cpp:382
void CDwarfUnwindTable::CDwarfUnwindTable()
{
} /* size: 0 */

// <0044998D> ../common/dwarf_symbols.cpp:388
// function calls: 2
void CDwarfUnwindTable::Empty()
{
	CDwarfVector<SDwarfUnwindRuleSet>::Empty(); // 392
	CDwarfVector<SDwarfUnwindRule>::Empty(); // 393
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00447A55> ../common/dwarf_symbols.cpp:388
void CDwarfUnwindTable::Empty()
{
} /* size: 0 */

// <00447578> ../common/dwarf_symbols.cpp:396
// variables: 5
// function calls: 17
void CDwarfUnwindTable::AddRow(CDwarfCfiState* pCfiState)
{
	SDwarfUnwindRuleSet* pSrcRow; // 398
	SDwarfUnwindRuleSet* pDstRow; // 405
	const char   __FUNCTION__; // 47300
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 407
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 410
	}
	CDwarfVector<SDwarfUnwindRuleSet>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<SDwarfUnwindRuleSet>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<SDwarfUnwindRuleSet>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<SDwarfUnwindRuleSet>::GetAppendPtr(
			int nCount);  // 405
	CDwarfVector<SDwarfUnwindRule>::Count(); // 407
	CDwarfVector<SDwarfUnwindRule>::Count(); // 408
	CDwarfVector<SDwarfUnwindRule>::Base(); // 411
	CDwarfVector<SDwarfUnwindRule>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<SDwarfUnwindRule>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<SDwarfUnwindRule>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<SDwarfUnwindRule>::GetAppendPtr(
			int nCount);  // 168
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<SDwarfUnwindRule>(const SDwarfUnwindRule* pFrom,
						const SDwarfUnwindRule* pFromEnd,
						SDwarfUnwindRule* pTo);  // 173
	UtlTraitsCopyRange<SDwarfUnwindRule>(const SDwarfUnwindRule* pFrom,
						const SDwarfUnwindRule* pFromEnd,
						SDwarfUnwindRule* pTo);  // 168
	CDwarfVector<SDwarfUnwindRule>::Append(
		const SDwarfUnwindRule* pElt,
		int nCount);  // 411
	CDwarfCfiState::AdvanceCurRowIndex(); // 413
} /* size: 0, variables: 3, inline expansions: 17 (0 bytes) */

// <00449A1C> ../common/dwarf_symbols.cpp:418
// variable: 1
void SModuleSection::GetMemHeld(size_t* pMaxContig)
{
	size_t nContig; // 420
} /* size: 0, variables: 1 */

// <0044731A> ../common/dwarf_symbols.cpp:431
// variable: 1
// function calls: 7
void SCompilationUnit::GetMemHeld(size_t* pMaxContig)
{
	size_t nSize; // 433
	CDwarfVector<CDwarfModule::SRelVirtRange>::GetMemHeld(
			size_t* pMaxContig);  // 435
	CDwarfVector<CDwarfModule::SAbbrevCode>::GetMemHeld(
			size_t* pMaxContig);  // 436
	CDwarfVector<CDwarfModule::SAbbrevEntry>::GetMemHeld(
			size_t* pMaxContig);  // 437
	CDwarfVector<CDwarfModule::SSymbol>::GetMemHeld(
			size_t* pMaxContig);  // 438
	CDwarfVector<char>::GetMemHeld(
			size_t* pMaxContig);  // 439
	CDwarfVector<unsigned int>::GetMemHeld(
			size_t* pMaxContig);  // 440
	CDwarfVector<CDwarfModule::SSourceLine>::GetMemHeld(
			size_t* pMaxContig);  // 441
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <00446AB0> ../common/dwarf_symbols.cpp:448
// function calls: 43
void CDwarfModule::CDwarfModule()
{
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 448
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 448
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 448
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 448
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 448
	CDwarfVector<EDwarfSymbolKind>::Clear(); // 37
	CDwarfVector<EDwarfSymbolKind>::CDwarfVector(); // 448
	CDwarfVector<char>::Clear(); // 37
	CDwarfVector<char>::CDwarfVector(); // 448
	CDwarfVector<CDwarfModule::SDebugInfoEntry>::Clear(); // 37
	CDwarfVector<CDwarfModule::SDebugInfoEntry>::CDwarfVector(); // 448
	CDwarfVector<CDwarfModule::SCompilationUnit>::Clear(); // 37
	CDwarfVector<CDwarfModule::SCompilationUnit>::CDwarfVector(); // 448
	CDwarfVector<CDwarfModule::SRelVirtRange>::Clear(); // 37
	CDwarfVector<CDwarfModule::SRelVirtRange>::CDwarfVector(); // 871
	CDwarfVector<CDwarfModule::SAbbrevCode>::Clear(); // 37
	CDwarfVector<CDwarfModule::SAbbrevCode>::CDwarfVector(); // 871
	CDwarfVector<CDwarfModule::SAbbrevEntry>::Clear(); // 37
	CDwarfVector<CDwarfModule::SAbbrevEntry>::CDwarfVector(); // 871
	CDwarfVector<CDwarfModule::SSymbol>::Clear(); // 37
	CDwarfVector<CDwarfModule::SSymbol>::CDwarfVector(); // 871
	CDwarfVector<char>::Clear(); // 37
	CDwarfVector<char>::CDwarfVector(); // 871
	CDwarfVector<unsigned int>::Clear(); // 37
	CDwarfVector<unsigned int>::CDwarfVector(); // 871
	CDwarfVector<CDwarfModule::SSourceLine>::Clear(); // 37
	CDwarfVector<CDwarfModule::SSourceLine>::CDwarfVector(); // 871
	SCompilationUnit::SCompilationUnit(); // 448
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Clear(); // 37
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::CDwarfVector(); // 448
	CDwarfVector<SDwarfCieInfo>::Clear(); // 37
	CDwarfVector<SDwarfCieInfo>::CDwarfVector(); // 448
	CDwarfVector<SDwarfFdeInfo>::Clear(); // 37
	CDwarfVector<SDwarfFdeInfo>::CDwarfVector(); // 448
	CDwarfVector<unsigned char>::Clear(); // 37
	CDwarfVector<unsigned char>::CDwarfVector(); // 448
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 453
} /* size: 412, inline expansions: 43 (715 bytes) */

// <00446A93> ../common/dwarf_symbols.cpp:448
void CDwarfModule::CDwarfModule()
{
} /* size: 0 */

// <00446191> ../common/dwarf_symbols.cpp:456
// function calls: 37
void CDwarfModule::~CDwarfModule()
{
	CDwarfModule::Purge(); // 458
	CDwarfVector<unsigned char>::Purge(); // 41
	CDwarfVector<unsigned char>::~CDwarfVector(); // 459
	CDwarfVector<SDwarfFdeInfo>::Purge(); // 41
	CDwarfVector<SDwarfFdeInfo>::~CDwarfVector(); // 459
	CDwarfVector<SDwarfCieInfo>::Purge(); // 41
	CDwarfVector<SDwarfCieInfo>::~CDwarfVector(); // 459
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Purge(); // 41
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::~CDwarfVector(); // 459
	CDwarfVector<CDwarfModule::SSourceLine>::Purge(); // 41
	CDwarfVector<CDwarfModule::SSourceLine>::~CDwarfVector(); // 871
	CDwarfVector<unsigned int>::Purge(); // 41
	CDwarfVector<unsigned int>::~CDwarfVector(); // 871
	CDwarfVector<char>::Purge(); // 41
	CDwarfVector<char>::~CDwarfVector(); // 871
	CDwarfVector<CDwarfModule::SSymbol>::Purge(); // 41
	CDwarfVector<CDwarfModule::SSymbol>::~CDwarfVector(); // 871
	CDwarfVector<CDwarfModule::SAbbrevEntry>::Purge(); // 41
	CDwarfVector<CDwarfModule::SAbbrevEntry>::~CDwarfVector(); // 871
	CDwarfVector<CDwarfModule::SAbbrevCode>::Purge(); // 41
	CDwarfVector<CDwarfModule::SAbbrevCode>::~CDwarfVector(); // 871
	CDwarfVector<CDwarfModule::SRelVirtRange>::Purge(); // 41
	CDwarfVector<CDwarfModule::SRelVirtRange>::~CDwarfVector(); // 871
	SCompilationUnit::~SCompilationUnit(); // 456
	CDwarfVector<CDwarfModule::SCompilationUnit>::Purge(); // 41
	CDwarfVector<CDwarfModule::SCompilationUnit>::~CDwarfVector(); // 459
	CDwarfVector<CDwarfModule::SDebugInfoEntry>::Purge(); // 41
	CDwarfVector<CDwarfModule::SDebugInfoEntry>::~CDwarfVector(); // 459
	CDwarfVector<char>::Purge(); // 41
	CDwarfVector<char>::~CDwarfVector(); // 459
	CDwarfVector<EDwarfSymbolKind>::Purge(); // 41
	CDwarfVector<EDwarfSymbolKind>::~CDwarfVector(); // 459
	CBufferString::~CBufferString(); // 459
	CBufferString::~CBufferString(); // 459
	CBufferString::~CBufferString(); // 459
	CBufferString::~CBufferString(); // 459
	CBufferString::~CBufferString(); // 459
} /* size: 349, inline expansions: 37 (502 bytes) */

// <00446174> ../common/dwarf_symbols.cpp:456
void CDwarfModule::~CDwarfModule()
{
} /* size: 0 */

// <00445C08> ../common/dwarf_symbols.cpp:461
// function calls: 20
void CDwarfModule::Init(const char* pFilePath, uint32 nMultiSlice, uint64 nBaseAddress, uint32 nVirtualSize, uint8 nBuildIdFormat, const void* pBuildId, uint32 nBuildIdSize, uint32 nInfoType)
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 473
	CBufferString::Length(); // 478
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 479
	V_strcmp(const char* s1,
		const char* s2);  // 479
	CBufferString::IsEmpty(); // 1354
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1356
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1359
	CBufferString::GetUnqualifiedFileName(); // 1352
	CBufferString::GetUnqualifiedFileName(); // 1463
	CDwarfModule::SetPrimaryModuleNameFromFilePath(); // 485
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 500
	CBufferString::Length(); // 983
	CBufferString::RemoveTail(
			int nChars);  // 482
} /* size: 594, inline expansions: 20 (767 bytes) */

// <004453D3> ../common/dwarf_symbols.cpp:506
// variables: 2
// function calls: 29
void CDwarfModule::OpenAndParse(const char* pSearchPath)
{
	EOpenResult result; // 518
	{
		int i; // 611
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 515
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 524
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 534
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 535
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 535
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 540
	CDwarfModule::OpenBuildIdFile(
			const char* pSearchPath);  // 556
	CDwarfModule::ProcessSymbolTables(); // 600
	memset(void* __dest,
		int __ch,
		size_t __len);  // 615
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 569
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 574
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 546
} /* size: 935, variables: 1, inline expansions: 29 (1082 bytes) */

// <0044BCA1> ../common/dwarf_symbols.cpp:633
void CDwarfModule::Purge()
{
} /* size: 0 */

// <00445296> ../common/dwarf_symbols.cpp:642
// variables: 4
// function calls: 2
void CDwarfModule::FindDebugInfoEntryByInfoOffset(uint32 nInfoOffset)
{
	{
		int nMin; // 651
		int nMax; // 652
		{
			int nMid; // 655
			SDebugInfoEntry* pEntry; // 656
			CDwarfVector<CDwarfModule::SDebugInfoEntry>::operator[](
					int nIndex);  // 656
		}
	}
	CDwarfVector<CDwarfModule::SDebugInfoEntry>::Count(); // 649
} /* size: 118, inline expansions: 1 (6 bytes) */

// <00444F93> ../common/dwarf_symbols.cpp:675
// variable: 1
// function calls: 12
void CDwarfModule::AddCompilationUnit(uint32 nInfoOffset, uint32 nDwarfOffsetSize, uint32 nDwarfRefAddrSize)
{
	SCompilationUnit* pUnit; // 677
	CDwarfVector<CDwarfModule::SCompilationUnit>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<CDwarfModule::SCompilationUnit>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<CDwarfModule::SCompilationUnit>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<CDwarfModule::SCompilationUnit>::GetAppendPtr(
			int nCount);  // 677
	CDwarfVector<CDwarfModule::SRelVirtRange>::Clear(); // 6548
	CDwarfVector<CDwarfModule::SAbbrevCode>::Clear(); // 6549
	CDwarfVector<CDwarfModule::SAbbrevEntry>::Clear(); // 6550
	CDwarfVector<CDwarfModule::SSymbol>::Clear(); // 6551
	CDwarfVector<char>::Clear(); // 6552
	CDwarfVector<unsigned int>::Clear(); // 6553
	CDwarfVector<CDwarfModule::SSourceLine>::Clear(); // 6554
	SCompilationUnit::Clear(); // 678
} /* size: 332, variables: 1, inline expansions: 12 (749 bytes) */

// <00449A59> ../common/dwarf_symbols.cpp:687
// variable: 1
// function calls: 2
void CDwarfModule::FindCompilationUnitByInfoOffset(uint32 nInfoOffset)
{
	{
		int i; // 689
		CDwarfVector<CDwarfModule::SCompilationUnit>::Count(); // 689
		CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
				int nIndex);  // 691
	}
} /* size: 0 */

// <00444F5C> ../common/dwarf_symbols.cpp:687
// variable: 1
void CDwarfModule::FindCompilationUnitByInfoOffset(uint32 nInfoOffset)
{
	{
		int i; // 689
	}
} /* size: 0 */

// <00444E95> ../common/dwarf_symbols.cpp:700
// variable: 1
// function calls: 2
void CDwarfModule::FindCompilationUnitByEntryInfoOffset(uint32 nInfoOffset)
{
	{
		int i; // 702
		CDwarfVector<CDwarfModule::SCompilationUnit>::Count(); // 702
		CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
				int nIndex);  // 704
	}
} /* size: 0 */

// <00449B07> ../common/dwarf_symbols.cpp:715
// variable: 1
// function calls: 2
void CDwarfModule::FindCompilationUnitByLineOffset(uint32 nLineOffset)
{
	{
		int i; // 717
		CDwarfVector<CDwarfModule::SCompilationUnit>::Count(); // 717
		CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
				int nIndex);  // 719
	}
} /* size: 0 */

// <00444E5E> ../common/dwarf_symbols.cpp:715
// variable: 1
void CDwarfModule::FindCompilationUnitByLineOffset(uint32 nLineOffset)
{
	{
		int i; // 717
	}
} /* size: 0 */

// <00444D1C> ../common/dwarf_symbols.cpp:728
// variables: 4
// function calls: 3
void CDwarfModule::FindCompilationUnitByRelAddress(uint32 nRelVirt)
{
	{
		int nMin; // 737
		int nMax; // 738
		{
			int nMid; // 741
			SAddrToCompilationUnit* pRange; // 742
			CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::operator[](
					int nIndex);  // 742
			CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
					int nIndex);  // 749
		}
	}
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Count(); // 735
} /* size: 0, inline expansions: 1 (0 bytes) */

// <004449EF> ../common/dwarf_symbols.cpp:761
// variables: 5
// function calls: 8
void CDwarfModule::FindSymbol(uint32 nFindKindMask, uint64 nForAddress, SDwarfSymbolInfo* pInfo, uint32* pSymDisp)
{
	uint32 nRelVirt; // 771
	SCompilationUnit* pUnit; // 780
	SSymbol* pSym; // 781
	{
		int i; // 782
		CDwarfVector<CDwarfModule::SCompilationUnit>::Count(); // 782
		CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
				int nIndex);  // 784
	}
	{
		int i; // 800
	}
	CDwarfModule::GetVirtualSize(); // 475
	CDwarfModule::ContainsAddress(
			uint64 nAddr);  // 766
	CDwarfVector<char>::operator[](
			int nIndex);  // 1073
	CDwarfModule::GetSymbolName(
			const SSymbol* pSym);  // 873
	CDwarfVector<CDwarfModule::SCompilationUnit>::GetIndex(
		const SCompilationUnit* pPtr);  // 877
	CDwarfModule::FillOutSymbolExtInfo(
				SCompilationUnit* pUnit,
				SSymbol* pIntSymbol,
				SDwarfSymbolInfo* pExtSymbol);  // 815
} /* size: 441, variables: 3, inline expansions: 6 (287 bytes) */

// <00444763> ../common/dwarf_symbols.cpp:824
// variables: 6
// function calls: 7
void CDwarfModule::FindSourceLine(uint64 nForAddress, SDwarfSourceLineInfo* pInfo, uint32* pLineDisp)
{
	uint32 nRelVirt; // 833
	SCompilationUnit* pUnit; // 842
	SSourceLine* pLine; // 843
	{
		int i; // 844
		CDwarfVector<CDwarfModule::SCompilationUnit>::Count(); // 844
		CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
				int nIndex);  // 846
		CDwarfVector<CDwarfModule::SSourceLine>::Count(); // 4674
		{
			int nMid; // 4683
			SSourceLine* pLine; // 4684
			CDwarfVector<CDwarfModule::SSourceLine>::operator[](
					int nIndex);  // 4684
		}
		CDwarfModule::FindSourceLine(
				SCompilationUnit* pUnit,
				uint32 nRelVirt);  // 850
	}
	CDwarfModule::GetVirtualSize(); // 475
	CDwarfModule::ContainsAddress(
			uint64 nAddr);  // 828
} /* size: 330, variables: 3, inline expansions: 2 (75 bytes) */

// <00449BB5> ../common/dwarf_symbols.cpp:871
// function calls: 3
void CDwarfModule::FillOutSymbolExtInfo(SCompilationUnit* pUnit, SSymbol* pIntSymbol, SDwarfSymbolInfo* pExtSymbol)
{
	CDwarfVector<char>::operator[](
			int nIndex);  // 1073
	CDwarfModule::GetSymbolName(
			const SSymbol* pSym);  // 873
	CDwarfVector<CDwarfModule::SCompilationUnit>::GetIndex(
		const SCompilationUnit* pPtr);  // 877
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0044471F> ../common/dwarf_symbols.cpp:871
void CDwarfModule::FillOutSymbolExtInfo(SCompilationUnit* pUnit, SSymbol* pIntSymbol, SDwarfSymbolInfo* pExtSymbol)
{
} /* size: 0 */

// <004444B4> ../common/dwarf_symbols.cpp:880
// variables: 4
// function calls: 6
void CDwarfModule::VisitSymbolsInUnit(uint32 nVisitKindMask, SCompilationUnit* pUnit, pDwarfSymbolVisitor pFn, void* pContext)
{
	{
		int j; // 885
		{
			SSymbol* pSymbol; // 887
			SDwarfSymbolInfo visitInfo; // 894
			EDwarfVisitResult result; // 897
			CDwarfVector<CDwarfModule::SSymbol>::operator[](
					int nIndex);  // 887
			CDwarfVector<char>::operator[](
					int nIndex);  // 1073
			CDwarfModule::GetSymbolName(
					const SSymbol* pSym);  // 873
			CDwarfVector<CDwarfModule::SCompilationUnit>::GetIndex(
				const SCompilationUnit* pPtr);  // 877
			CDwarfModule::FillOutSymbolExtInfo(
						SCompilationUnit* pUnit,
						SSymbol* pIntSymbol,
						SDwarfSymbolInfo* pExtSymbol);  // 895
		}
		CDwarfVector<CDwarfModule::SSymbol>::Count(); // 885
	}
} /* size: 0 */

// <004442F7> ../common/dwarf_symbols.cpp:907
// variables: 4
// function calls: 2
void CDwarfModule::VisitAllSymbols(uint32 nVisitKindMask, pDwarfSymbolVisitor pFn, void* pContext)
{
	{
		int i; // 911
		{
			SCompilationUnit* pUnit; // 913
			CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
					int nIndex);  // 913
		}
		CDwarfVector<CDwarfModule::SCompilationUnit>::Count(); // 911
	}
	{
		int i; // 920
		{
			SCompilationUnit* pUnit; // 922
		}
	}
} /* size: 0 */

// <00449CB1> ../common/dwarf_symbols.cpp:930
// function calls: 3
void CDwarfModule::FillOutSourceLineExtInfo(SCompilationUnit* pUnit, SSourceLine* pIntLine, SDwarfSourceLineInfo* pExtLine)
{
	CDwarfVector<char>::Base(); // 932
	CDwarfVector<unsigned int>::operator[](
			int nIndex);  // 932
	CDwarfVector<CDwarfModule::SCompilationUnit>::GetIndex(
		const SCompilationUnit* pPtr);  // 936
} /* size: 111, inline expansions: 3 (58 bytes) */

// <004442B3> ../common/dwarf_symbols.cpp:930
void CDwarfModule::FillOutSourceLineExtInfo(SCompilationUnit* pUnit, SSourceLine* pIntLine, SDwarfSourceLineInfo* pExtLine)
{
} /* size: 0 */

// <00449D98> ../common/dwarf_symbols.cpp:940
// variables: 4
// function calls: 6
void CDwarfModule::VisitSourceLinesInUnit(uint32 nFlags, SCompilationUnit* pUnit, pDwarfSourceLineVisitor pFn, void* pContext)
{
	{
		int j; // 945
		CDwarfVector<CDwarfModule::SSourceLine>::Count(); // 945
		{
			SSourceLine* pLine; // 947
			SDwarfSourceLineInfo visitInfo; // 949
			EDwarfVisitResult result; // 952
			CDwarfVector<CDwarfModule::SSourceLine>::operator[](
					int nIndex);  // 947
			CDwarfVector<char>::Base(); // 932
			CDwarfVector<unsigned int>::operator[](
					int nIndex);  // 932
			CDwarfVector<CDwarfModule::SCompilationUnit>::GetIndex(
				const SCompilationUnit* pPtr);  // 936
			CDwarfModule::FillOutSourceLineExtInfo(
						SCompilationUnit* pUnit,
						SSourceLine* pIntLine,
						SDwarfSourceLineInfo* pExtLine);  // 950
		}
	}
} /* size: 0 */

// <0044420E> ../common/dwarf_symbols.cpp:940
// variables: 4
void CDwarfModule::VisitSourceLinesInUnit(uint32 nFlags, SCompilationUnit* pUnit, pDwarfSourceLineVisitor pFn, void* pContext)
{
	{
		int j; // 945
		{
			SSourceLine* pLine; // 947
			SDwarfSourceLineInfo visitInfo; // 949
			EDwarfVisitResult result; // 952
		}
	}
} /* size: 0 */

// <00443EF3> ../common/dwarf_symbols.cpp:962
// variables: 6
// function calls: 9
void CDwarfModule::VisitAllSourceLines(uint32 nFlags, pDwarfSourceLineVisitor pFn, void* pContext)
{
	{
		int i; // 966
		{
			SCompilationUnit* pUnit; // 968
			CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
					int nIndex);  // 968
			{
				int j; // 945
				CDwarfVector<CDwarfModule::SSourceLine>::Count(); // 945
				{
					SSourceLine* pLine; // 947
					SDwarfSourceLineInfo visitInfo; // 949
					EDwarfVisitResult result; // 952
					CDwarfVector<CDwarfModule::SCompilationUnit>::GetIndex(
						const SCompilationUnit* pPtr);  // 936
					CDwarfVector<char>::Base(); // 932
					CDwarfVector<unsigned int>::operator[](
							int nIndex);  // 932
					CDwarfModule::FillOutSourceLineExtInfo(
								SCompilationUnit* pUnit,
								SSourceLine* pIntLine,
								SDwarfSourceLineInfo* pExtLine);  // 950
					CDwarfVector<CDwarfModule::SSourceLine>::operator[](
							int nIndex);  // 947
				}
			}
			CDwarfModule::VisitSourceLinesInUnit(
						uint32 nFlags,
						SCompilationUnit* pUnit,
						pDwarfSourceLineVisitor pFn,
						void* pContext);  // 969
		}
		CDwarfVector<CDwarfModule::SCompilationUnit>::Count(); // 966
	}
} /* size: 0 */

// <00443D7B> ../common/dwarf_symbols.cpp:976
// variables: 4
// function calls: 3
void CDwarfModule::VisitAllStackFrameData(pDwarfFdeInfoVisitor pFn, void* pContext)
{
	{
		int i; // 979
		{
			SDwarfFdeInfo* pFde; // 981
			SDwarfCieInfo* pCie; // 982
			EDwarfVisitResult result; // 984
			CDwarfVector<SDwarfFdeInfo>::operator[](
					int nIndex);  // 981
			CDwarfVector<SDwarfCieInfo>::operator[](
					int nIndex);  // 982
		}
		CDwarfVector<SDwarfFdeInfo>::Count(); // 979
	}
} /* size: 0 */

// <00443B1C> ../common/dwarf_symbols.cpp:992
// variables: 5
// function calls: 7
void CDwarfModule::FindFrameData(uint64 nForAddress, SDwarfCieInfo** pCie, uint8** pCieInstr, SDwarfFdeInfo** pFde, uint8** pFdeInstr)
{
	uint32 nRelVirt; // 1008
	int nMin; // 1010
	int nMax; // 1011
	{
		int nMid; // 1014
		SDwarfFdeInfo* pScan; // 1015
		CDwarfVector<SDwarfFdeInfo>::operator[](
				int nIndex);  // 1015
		CDwarfVector<SDwarfCieInfo>::operator[](
				int nIndex);  // 1022
		CDwarfVector<unsigned char>::Base(); // 1023
		CDwarfVector<unsigned char>::Base(); // 1025
	}
	CDwarfModule::GetVirtualSize(); // 475
	CDwarfModule::ContainsAddress(
			uint64 nAddr);  // 998
	CDwarfVector<SDwarfFdeInfo>::Count(); // 1003
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <0044356B> ../common/dwarf_symbols.cpp:1037
// variables: 4
// function calls: 20
void CDwarfModule::BuildFrameUnwindTable(const SDwarfCieInfo* pCie, const SDwarfFdeInfo* pFde, CDwarfUnwindTable* pTable)
{
	CDwarfCfiState cfiState; // 1046
	CDwarfVector<SDwarfUnwindRule>::Clear(); // 37
	CDwarfVector<SDwarfUnwindRule>::CDwarfVector(); // 154
	SDwarfUnwindRuleState::SDwarfUnwindRuleState(); // 221
	CDwarfCfiState::CDwarfCfiState(); // 1046
	CDwarfVector<SDwarfUnwindRuleSet>::Empty(); // 392
	CDwarfVector<SDwarfUnwindRule>::Empty(); // 393
	CDwarfUnwindTable::Empty(); // 1041
	CDwarfCfiState::UpdateLocation(
			uint32 nRva);  // 1047
	CDwarfVector<SDwarfUnwindRuleSet>::Count(); // 1076
	{
		int i; // 287
		CDwarfVector<SDwarfUnwindRule>::Count(); // 287
		CDwarfVector<SDwarfUnwindRule>::operator[](
				int nIndex);  // 289
	}
	CDwarfCfiState::GetCfaOp(); // 1081
	{
		int i; // 299
		CDwarfVector<SDwarfUnwindRule>::operator[](
				int nIndex);  // 301
	}
	CDwarfCfiState::GetCfaRefRegister(); // 1082
	CDwarfVector<unsigned char>::Base(); // 1067
	{
		int i; // 299
		CDwarfVector<SDwarfUnwindRule>::operator[](
				int nIndex);  // 301
	}
	CDwarfCfiState::GetCfaRefRegister(); // 1084
	CDwarfVector<unsigned char>::Base(); // 1057
	{
	}
	CDwarfCfiState::SetInitRuleState(); // 343
	CDwarfCfiState::SetInitRuleState(); // 1062
} /* size: 0, variables: 1, inline expansions: 16 (0 bytes) */

// <004434CA> ../common/dwarf_symbols.cpp:1091
// variable: 1
void CDwarfModule::FatalParseProblem(const char* pFormat, ...)
{
	va_list args; // 1095
} /* size: 193, variables: 1 */

// <00443429> ../common/dwarf_symbols.cpp:1102
// variable: 1
void CDwarfModule::SymbolProblem(const char* pFormat, ...)
{
	va_list args; // 1106
} /* size: 193, variables: 1 */

// <00443388> ../common/dwarf_symbols.cpp:1113
// variable: 1
void CDwarfModule::SourceLineProblem(const char* pFormat, ...)
{
	va_list args; // 1117
} /* size: 193, variables: 1 */

// <004432E7> ../common/dwarf_symbols.cpp:1124
// variable: 1
void CDwarfModule::FrameDataProblem(const char* pFormat, ...)
{
	va_list args; // 1128
} /* size: 0, variables: 1 */

// <00443246> ../common/dwarf_symbols.cpp:1135
// variable: 1
void CDwarfModule::CfiProblem(const char* pFormat, ...)
{
	va_list args; // 1139
} /* size: 0, variables: 1 */

// <00442B37> ../common/dwarf_symbols.cpp:1146
// variables: 4
// function calls: 27
void CDwarfModule::GetMemHeld(size_t* pMaxContig)
{
	size_t nSize; // 1148
	{
		int i; // 1156
		SModuleSection::GetMemHeld(
				size_t* pMaxContig);  // 1158
	}
	{
		int i; // 1168
		CDwarfVector<CDwarfModule::SCompilationUnit>::Count(); // 1168
		CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
				int nIndex);  // 1170
	}
	{
		int i; // 1172
	}
	CBufferString::AllocSize(); // 875
	CBufferString::NonfixedAllocSize(); // 1411
	GetMemHeld(const CBufferString* pStrBuf,
			size_t* pMaxContig);  // 1150
	CBufferString::AllocSize(); // 875
	CBufferString::NonfixedAllocSize(); // 1411
	GetMemHeld(const CBufferString* pStrBuf,
			size_t* pMaxContig);  // 1151
	CBufferString::AllocSize(); // 875
	CBufferString::NonfixedAllocSize(); // 1411
	GetMemHeld(const CBufferString* pStrBuf,
			size_t* pMaxContig);  // 1152
	CBufferString::AllocSize(); // 875
	CBufferString::NonfixedAllocSize(); // 1411
	GetMemHeld(const CBufferString* pStrBuf,
			size_t* pMaxContig);  // 1153
	CBufferString::AllocSize(); // 875
	CBufferString::NonfixedAllocSize(); // 1411
	GetMemHeld(const CBufferString* pStrBuf,
			size_t* pMaxContig);  // 1154
	SModuleSection::GetMemHeld(
			size_t* pMaxContig);  // 1160
	CDwarfVector<EDwarfSymbolKind>::GetMemHeld(
			size_t* pMaxContig);  // 1162
	CDwarfVector<char>::GetMemHeld(
			size_t* pMaxContig);  // 1163
	CDwarfVector<CDwarfModule::SDebugInfoEntry>::GetMemHeld(
			size_t* pMaxContig);  // 1165
	CDwarfVector<CDwarfModule::SCompilationUnit>::GetMemHeld(
			size_t* pMaxContig);  // 1167
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::GetMemHeld(
			size_t* pMaxContig);  // 1177
	CDwarfVector<SDwarfCieInfo>::GetMemHeld(
			size_t* pMaxContig);  // 1179
	CDwarfVector<SDwarfFdeInfo>::GetMemHeld(
			size_t* pMaxContig);  // 1180
	CDwarfVector<unsigned char>::GetMemHeld(
			size_t* pMaxContig);  // 1181
} /* size: 0, variables: 1, inline expansions: 24 (0 bytes) */

// <00442ACC> ../common/dwarf_symbols.cpp:1186
// variable: 1
void CDwarfModule::GetMemUsed(size_t* pMaxContig)
{
	size_t nContig; // 1188
} /* size: 0, variables: 1 */

// <00442A3D> ../common/dwarf_symbols.cpp:1199
void CDwarfModule::MatchPrimaryBuildId(const uint8* pId, int nIdSize)
{
} /* size: 57 */

// <00442A0B> ../common/dwarf_symbols.cpp:1213
void CDwarfModule::GetBreakpadOsName()
{
} /* size: 0 */

// <004429D9> ../common/dwarf_symbols.cpp:1228
void CDwarfModule::GetBreakpadArchName()
{
} /* size: 0 */

// <0044269C> ../common/dwarf_symbols.cpp:1245
// variable: 1
// function calls: 13
void CDwarfModule::GetBreakpadModuleId(CBufferString* pStrBuf)
{
	const uint8* Guid; // 1271
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1319
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1265
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1266
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1323
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <004422C9> ../common/dwarf_symbols.cpp:1326
// variable: 1
// function calls: 16
void CDwarfModule::GetBreakpadModuleCodeId(CBufferString* pStrBuf)
{
	{
		int i; // 1346
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1334
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1375
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1338
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1337
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1379
} /* size: 0, inline expansions: 16 (0 bytes) */

// <00442247> ../common/dwarf_symbols.cpp:1382
void CDwarfModule::GetSourceMappingsInfo(uint32* pFileOffset, uint32* pBytes)
{
} /* size: 0 */

// <00449FA5> ../common/dwarf_symbols.cpp:1409
// variable: 1
// function calls: 2
void GetMemHeld(const CBufferString* pStrBuf, size_t* pMaxContig)
{
	size_t nContig; // 1411
	CBufferString::AllocSize(); // 875
	CBufferString::NonfixedAllocSize(); // 1411
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00442210> ../common/dwarf_symbols.cpp:1409
// variable: 1
void GetMemHeld(const CBufferString* pStrBuf, size_t* pMaxContig)
{
	size_t nContig; // 1411
} /* size: 0, variables: 1 */

// <00441F90> ../common/dwarf_symbols.cpp:1422
// variables: 2
// function calls: 4
void CDwarfModule::PrintProblem(const char* pClass, const char* pFormat, typedef __va_list_tag __va_list_tag* args)
{
	char printBuf; // 1424
	int nLen; // 1429
	V_strcpy_safe<1500>(char& pDest,
				const char* pSrc);  // 1426
	V_strcat_safe<1500>(char& pDest,
				const char* pSrc,
				int nMaxCharsToCopy);  // 1427
	V_strcat_safe<1500>(char& pDest,
				const char* pSrc,
				int nMaxCharsToCopy);  // 1428
	V_strlen(const char* str); // 1429
} /* size: 208, variables: 2, inline expansions: 4 (90 bytes) */

// <00441D52> ../common/dwarf_symbols.cpp:1438
// function calls: 10
void CDwarfModule::Clear()
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1444
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1446
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1455
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1456
} /* size: 211, inline expansions: 10 (197 bytes) */

// <0044A355> ../common/dwarf_symbols.cpp:1461
// function calls: 7
void CDwarfModule::SetPrimaryModuleNameFromFilePath()
{
	CBufferString::IsEmpty(); // 1354
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1356
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 1359
	CBufferString::GetUnqualifiedFileName(); // 1352
	CBufferString::GetUnqualifiedFileName(); // 1463
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00441D35> ../common/dwarf_symbols.cpp:1461
void CDwarfModule::SetPrimaryModuleNameFromFilePath()
{
} /* size: 0 */

// <00441A7D> ../common/dwarf_symbols.cpp:1469
// variables: 3
// function calls: 4
void CDwarfModule::OpenFile(const char* pFilePath, bool bIsSplit)
{
	EOpenResult result; // 1471
	const char   __FUNCTION__; // 23460
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1473
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1507
} /* size: 0, variables: 2, inline expansions: 4 (123 bytes) */

// <0044D4C7> ../common/dwarf_symbols.cpp:1511
// variable: 1
// function calls: 4
void CDwarfModule::OpenSplitFile(const char* pFilePath)
{
	EOpenResult result; // 1513
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1533
	CDwarfModule::OpenSplitFile(
			const char* pFilePath);  // 1511
} /* size: 273, variables: 1, inline expansions: 4 (221 bytes) */

// <00441A46> ../common/dwarf_symbols.cpp:1511
// variable: 1
void CDwarfModule::OpenSplitFile(const char* pFilePath)
{
	EOpenResult result; // 1513
} /* size: 0, variables: 1 */

// <004410EE> ../common/dwarf_symbols.cpp:1543
// variables: 8
// function calls: 35
void CDwarfModule::OpenSplitFileOnPath(const char* pSearchPath, const char* pFileName)
{
	{
		const char* pScan; // 1552
		CPathBufferString pathPart; // 1553
		const char* pFileNamePathSep; // 1616
		{
			const char* pSep; // 1563
			CPathBufferString filePath; // 1591
			EOpenResult attempt; // 1594
			{
				const char* pSep2; // 1565
				strchr(const char* __s,
					int __c);  // 1565
			}
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 1592
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 1582
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 1591
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 1594
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 1603
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 1603
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 1587
			strchr(const char* __s,
				int __c);  // 1563
			CBufferString::Length(); // 1588
		}
		{
			EOpenResult attempt; // 1607
		}
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1553
		strchr(const char* __s,
			int __c);  // 1616
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1627
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1627
		strchr(const char* __s,
			int __c);  // 1619
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1627
	}
} /* size: 770 */

// <0044DB50> ../common/dwarf_symbols.cpp:1632
// variables: 2
void CDwarfModule::OpenBuildIdFile(const char* pSearchPath)
{
	char buildIdFile; // 1649
	char* pIdBufEnd; // 1650
} /* size: 0, variables: 2 */

// <0044D6D5> ../common/dwarf_symbols.cpp:1632
// variables: 7
// function calls: 3
void CDwarfModule::OpenBuildIdFile(const char* pSearchPath)
{
	char buildIdFile; // 1649
	char* pIdBufEnd; // 1650
	{
		char* pEnd; // 1688
		V_strncpy<long unsigned int>(char* pDest,
						const char* pSrc,
						long unsigned int maxLenInChars);  // 1686
		{
			int i; // 1697
		}
		{
			int i; // 1704
		}
	}
	{
		char* pEnd; // 1656
		V_strncpy<long unsigned int>(char* pDest,
						const char* pSrc,
						long unsigned int maxLenInChars);  // 1654
		strcpy(char* __dest,
			const char* __src);  // 1668
		{
			int i; // 1670
		}
	}
} /* size: 704, variables: 2 */

// <0044104D> ../common/dwarf_symbols.cpp:1632
// variables: 7
void CDwarfModule::OpenBuildIdFile(const char* pSearchPath)
{
	char buildIdFile; // 1649
	char* pIdBufEnd; // 1650
	{
		char* pEnd; // 1656
		{
			int i; // 1670
		}
	}
	{
		char* pEnd; // 1688
		{
			int i; // 1697
		}
		{
			int i; // 1704
		}
	}
} /* size: 0, variables: 2 */

// <0044084B> ../common/dwarf_symbols.cpp:1715
// variables: 3
// function calls: 29
void CDwarfModule::OpenDebugLinkFile(const char* pSearchPath)
{
	EOpenResult result; // 1717
	{
		CPathBufferString filePath; // 1729
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1729
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1732
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1732
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1733
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1740
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1745
	}
	{
		CPathBufferString fileName; // 1748
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1748
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 1758
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 1762
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 1771
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1773
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1778
	}
	CBufferString::IsEmpty(); // 1727
} /* size: 654, variables: 1, inline expansions: 1 (0 bytes) */

// <004403F7> ../common/dwarf_symbols.cpp:1783
// variables: 3
// function calls: 17
void CDwarfModule::Close()
{
	{
		int i; // 1790
	}
	{
		int i; // 1801
		CDwarfVector<CDwarfModule::SCompilationUnit>::Count(); // 1801
		CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
				int nIndex);  // 1803
	}
	{
		int i; // 1806
	}
	CDwarfVector<EDwarfSymbolKind>::Clear(); // 95
	CDwarfVector<EDwarfSymbolKind>::Purge(); // 1796
	CDwarfVector<char>::Clear(); // 95
	CDwarfVector<char>::Purge(); // 1798
	CDwarfVector<CDwarfModule::SDebugInfoEntry>::Clear(); // 95
	CDwarfVector<CDwarfModule::SDebugInfoEntry>::Purge(); // 1800
	CDwarfVector<CDwarfModule::SCompilationUnit>::Clear(); // 95
	CDwarfVector<CDwarfModule::SCompilationUnit>::Purge(); // 1805
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Clear(); // 95
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Purge(); // 1810
	CDwarfVector<SDwarfCieInfo>::Clear(); // 95
	CDwarfVector<SDwarfCieInfo>::Purge(); // 1811
	CDwarfVector<SDwarfFdeInfo>::Clear(); // 95
	CDwarfVector<SDwarfFdeInfo>::Purge(); // 1812
	CDwarfVector<unsigned char>::Purge(); // 1813
} /* size: 479, inline expansions: 15 (440 bytes) */

// <0043FC50> ../common/dwarf_symbols.cpp:1818
// variables: 2
// function calls: 36
void CDwarfModule::ClearFile()
{
	{
		int i; // 1848
		CDwarfVector<CDwarfModule::SCompilationUnit>::Count(); // 1848
		CDwarfVector<CDwarfModule::SRelVirtRange>::Clear(); // 6548
		CDwarfVector<CDwarfModule::SAbbrevCode>::Clear(); // 6549
		CDwarfVector<CDwarfModule::SAbbrevEntry>::Clear(); // 6550
		CDwarfVector<CDwarfModule::SSymbol>::Clear(); // 6551
		CDwarfVector<char>::Clear(); // 6552
		CDwarfVector<unsigned int>::Clear(); // 6553
		CDwarfVector<CDwarfModule::SSourceLine>::Clear(); // 6554
		SCompilationUnit::Clear(); // 1850
		CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
				int nIndex);  // 1850
	}
	{
		int i; // 1853
		CDwarfVector<CDwarfModule::SRelVirtRange>::Clear(); // 6548
		CDwarfVector<CDwarfModule::SAbbrevCode>::Clear(); // 6549
		CDwarfVector<CDwarfModule::SAbbrevEntry>::Clear(); // 6550
		CDwarfVector<CDwarfModule::SSymbol>::Clear(); // 6551
		CDwarfVector<char>::Clear(); // 6552
		CDwarfVector<unsigned int>::Clear(); // 6553
		CDwarfVector<CDwarfModule::SSourceLine>::Clear(); // 6554
		SCompilationUnit::Clear(); // 1855
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1820
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1839
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1840
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1841
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1842
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1843
	CDwarfVector<EDwarfSymbolKind>::Clear(); // 1845
	CDwarfVector<char>::Clear(); // 1846
	CDwarfVector<CDwarfModule::SDebugInfoEntry>::Clear(); // 1847
	CDwarfVector<CDwarfModule::SCompilationUnit>::Clear(); // 1852
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Clear(); // 1857
	CDwarfVector<SDwarfCieInfo>::Clear(); // 1858
	CDwarfVector<SDwarfFdeInfo>::Clear(); // 1859
	CDwarfVector<unsigned char>::Clear(); // 1860
} /* size: 794, inline expansions: 18 (397 bytes) */

// <0043FAD8> ../common/dwarf_symbols.cpp:1863
// variable: 1
void CDwarfModule::ReadHeader(bool bNested)
{
	uint8 data; // 1865
} /* size: 359, variables: 1 */

// <0043F82D> ../common/dwarf_symbols.cpp:1905
// variables: 2
// function calls: 3
void CDwarfModule::ReadElfHeader(uint8* pMagic)
{
	EOpenResult result; // 1907
	uint8 data; // 1908
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1910
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1961
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1945
} /* size: 440, variables: 2, inline expansions: 3 (29 bytes) */

// <00435288> ../common/dwarf_symbols.cpp:1980
// variables: 4
// function calls: 7
void FindElfVirtualSize<Elf64_Ehdr, CDwarfModule::Elf64_Phdr>(Elf64_Ehdr* pHdr)
{
	CDwarfVector<Elf64_Phdr> pProgHdrs; // 2002
	{
		int i; // 2013
	}
	{
		int i; // 2055
		{
			uint64 nSize; // 2066
		}
	}
	CDwarfVector<Elf64_Phdr>::Clear(); // 37
	CDwarfVector<Elf64_Phdr>::CDwarfVector(); // 2002
	CDwarfVector<Elf64_Phdr>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<Elf64_Phdr>::EnsureCapacity(
			int nEntries);  // 122
	CDwarfVector<Elf64_Phdr>::SetCount(
		int nCount);  // 2003
	CDwarfVector<Elf64_Phdr>::Purge(); // 41
	CDwarfVector<Elf64_Phdr>::~CDwarfVector(); // 2080
} /* size: 730, variables: 1, inline expansions: 7 (160 bytes) */

// <00434F4F> ../common/dwarf_symbols.cpp:1980
// variables: 4
// function calls: 7
void FindElfVirtualSize<Elf32_Ehdr, CDwarfModule::Elf32_Phdr>(Elf32_Ehdr* pHdr)
{
	CDwarfVector<Elf32_Phdr> pProgHdrs; // 2002
	{
		int i; // 2013
	}
	{
		int i; // 2055
		{
			uint64 nSize; // 2066
		}
	}
	CDwarfVector<Elf32_Phdr>::Clear(); // 37
	CDwarfVector<Elf32_Phdr>::CDwarfVector(); // 2002
	CDwarfVector<Elf32_Phdr>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<Elf32_Phdr>::EnsureCapacity(
			int nEntries);  // 122
	CDwarfVector<Elf32_Phdr>::SetCount(
		int nCount);  // 2003
	CDwarfVector<Elf32_Phdr>::Purge(); // 41
	CDwarfVector<Elf32_Phdr>::~CDwarfVector(); // 2080
} /* size: 730, variables: 1, inline expansions: 7 (163 bytes) */

// <0043F624> ../common/dwarf_symbols.cpp:2082
// variables: 3
void CDwarfModule::ReadMachoSlice(int nSlice, bool bBigEndian)
{
	uint32 nNumArch; // 2084
	fat_arch arch; // 2112
	{
		uint32 i; // 2113
	}
} /* size: 451, variables: 2 */

// <0043F4B7> ../common/dwarf_symbols.cpp:2137
// variable: 1
// function call: 1
void CDwarfModule::ReadMachoHeader(uint8* pMagic, int nSize)
{
	EOpenResult result; // 2139
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2141
} /* size: 219, variables: 1, inline expansions: 1 (5 bytes) */

// <00434BD5> ../common/dwarf_symbols.cpp:2188
// variables: 7
// function calls: 7
void FindMachoVirtualSize<mach_header_64, segment_command_64, 25, CDwarfModule::section_64>(mach_header_64* pHdr)
{
	CDwarfVector<unsigned char> loadCmds; // 2204
	load_command* pCmd; // 2215
	{
		uint32 i; // 2216
		{
			segment_command_64* pSeg; // 2220
		}
	}
	{
		uint32 i; // 2264
		{
			segment_command_64* pSeg; // 2268
			{
				uint64 nSize; // 2277
			}
		}
	}
	CDwarfVector<unsigned char>::Clear(); // 37
	CDwarfVector<unsigned char>::CDwarfVector(); // 2204
	CDwarfVector<unsigned char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<unsigned char>::EnsureCapacity(
			int nEntries);  // 122
	CDwarfVector<unsigned char>::SetCount(
		int nCount);  // 2205
	CDwarfVector<unsigned char>::Purge(); // 41
	CDwarfVector<unsigned char>::~CDwarfVector(); // 2294
} /* size: 696, variables: 2, inline expansions: 7 (187 bytes) */

// <0043485B> ../common/dwarf_symbols.cpp:2188
// variables: 7
// function calls: 7
void FindMachoVirtualSize<mach_header, segment_command, 1, CDwarfModule::section>(mach_header* pHdr)
{
	CDwarfVector<unsigned char> loadCmds; // 2204
	load_command* pCmd; // 2215
	{
		uint32 i; // 2216
		{
			segment_command* pSeg; // 2220
		}
	}
	{
		uint32 i; // 2264
		{
			segment_command* pSeg; // 2268
			{
				uint64 nSize; // 2277
			}
		}
	}
	CDwarfVector<unsigned char>::Clear(); // 37
	CDwarfVector<unsigned char>::CDwarfVector(); // 2204
	CDwarfVector<unsigned char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<unsigned char>::EnsureCapacity(
			int nEntries);  // 122
	CDwarfVector<unsigned char>::SetCount(
		int nCount);  // 2205
	CDwarfVector<unsigned char>::Purge(); // 41
	CDwarfVector<unsigned char>::~CDwarfVector(); // 2294
} /* size: 696, variables: 2, inline expansions: 7 (187 bytes) */

// <0043F485> ../common/dwarf_symbols.cpp:2300
void CDwarfModule::HasRequiredDebugInfo()
{
} /* size: 377 */

// <0043F3F9> ../common/dwarf_symbols.cpp:2383
// variable: 1
void CDwarfModule::ParseModule()
{
	EOpenResult result; // 2385
} /* size: 77, variables: 1 */

// <004341D2> ../common/dwarf_symbols.cpp:2409
// variables: 7
// function calls: 17
void ParseElfSections<Elf32_Ehdr, CDwarfModule::Elf32_Shdr>()
{
	Elf32_Ehdr* pHdr; // 2411
	CDwarfVector<Elf32_Shdr> pSecHdrs; // 2428
	int nStrSize; // 2442
	CDwarfVector<char> pSecHdrStrs; // 2443
	{
		int i; // 2451
		{
			const char* pName; // 2470
			int nSecIdx; // 2485
			CDwarfModule::ParseElfNote(
					uint32 nNoteOffset,
					uint32 nNoteSize);  // 2467
		}
	}
	CDwarfVector<Elf32_Shdr>::Clear(); // 37
	CDwarfVector<Elf32_Shdr>::CDwarfVector(); // 2428
	CDwarfVector<Elf32_Shdr>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<Elf32_Shdr>::EnsureCapacity(
			int nEntries);  // 122
	CDwarfVector<Elf32_Shdr>::SetCount(
		int nCount);  // 2429
	CDwarfVector<Elf32_Shdr>::operator[](
			int nIndex);  // 2437
	CDwarfVector<Elf32_Shdr>::operator[](
			int nIndex);  // 2442
	CDwarfVector<char>::Clear(); // 37
	CDwarfVector<char>::CDwarfVector(); // 2443
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 122
	CDwarfVector<char>::SetCount(
		int nCount);  // 2444
	CDwarfVector<char>::Purge(); // 41
	CDwarfVector<char>::~CDwarfVector(); // 2501
	CDwarfVector<Elf32_Shdr>::Purge(); // 41
	CDwarfVector<Elf32_Shdr>::~CDwarfVector(); // 2501
} /* size: 1011, variables: 4, inline expansions: 16 (341 bytes) */

// <00433B55> ../common/dwarf_symbols.cpp:2409
// variables: 7
// function calls: 17
void ParseElfSections<Elf64_Ehdr, CDwarfModule::Elf64_Shdr>()
{
	Elf64_Ehdr* pHdr; // 2411
	CDwarfVector<Elf64_Shdr> pSecHdrs; // 2428
	int nStrSize; // 2442
	CDwarfVector<char> pSecHdrStrs; // 2443
	{
		int i; // 2451
		{
			const char* pName; // 2470
			int nSecIdx; // 2485
			CDwarfModule::ParseElfNote(
					uint32 nNoteOffset,
					uint32 nNoteSize);  // 2467
		}
	}
	CDwarfVector<Elf64_Shdr>::Clear(); // 37
	CDwarfVector<Elf64_Shdr>::CDwarfVector(); // 2428
	CDwarfVector<Elf64_Shdr>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<Elf64_Shdr>::EnsureCapacity(
			int nEntries);  // 122
	CDwarfVector<Elf64_Shdr>::SetCount(
		int nCount);  // 2429
	CDwarfVector<Elf64_Shdr>::operator[](
			int nIndex);  // 2437
	CDwarfVector<Elf64_Shdr>::operator[](
			int nIndex);  // 2442
	CDwarfVector<char>::Clear(); // 37
	CDwarfVector<char>::CDwarfVector(); // 2443
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 122
	CDwarfVector<char>::SetCount(
		int nCount);  // 2444
	CDwarfVector<Elf64_Shdr>::Purge(); // 41
	CDwarfVector<Elf64_Shdr>::~CDwarfVector(); // 2501
	CDwarfVector<char>::Purge(); // 41
	CDwarfVector<char>::~CDwarfVector(); // 2501
} /* size: 1033, variables: 4, inline expansions: 16 (350 bytes) */

// <0044A4FD> ../common/dwarf_symbols.cpp:2503
// variables: 3
void CDwarfModule::ParseElfNote(uint32 nNoteOffset, uint32 nNoteSize)
{
	CDwarfVector<unsigned char> noteData; // 2517
	uint8* pScan; // 2524
	bool bFound; // 2525
} /* size: 0, variables: 3 */

// <0044A044> ../common/dwarf_symbols.cpp:2503
// variables: 8
// function calls: 8
void CDwarfModule::ParseElfNote(uint32 nNoteSize, uint32 nNoteOffset)
{
	CDwarfVector<unsigned char> noteData; // 2517
	uint8* pScan; // 2524
	bool bFound; // 2525
	CDwarfVector<unsigned char>::Clear(); // 37
	CDwarfVector<unsigned char>::CDwarfVector(); // 2517
	CDwarfVector<unsigned char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<unsigned char>::EnsureCapacity(
			int nEntries);  // 122
	CDwarfVector<unsigned char>::SetCount(
		int nCount);  // 2518
	{
		uint32 nNameLen; // 2539
		uint32 nBodyLen; // 2541
		uint32 nType; // 2543
		char* pName; // 2551
		uint8* pBody; // 2559
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2570
	}
	CDwarfVector<unsigned char>::Purge(); // 41
	CDwarfVector<unsigned char>::~CDwarfVector(); // 2583
} /* size: 440, variables: 3, inline expansions: 7 (126 bytes) */

// <0043F358> ../common/dwarf_symbols.cpp:2503
// variables: 8
void CDwarfModule::ParseElfNote(uint32 nNoteOffset, uint32 nNoteSize)
{
	CDwarfVector<unsigned char> noteData; // 2517
	uint8* pScan; // 2524
	bool bFound; // 2525
	{
		uint32 nNameLen; // 2539
		uint32 nBodyLen; // 2541
		uint32 nType; // 2543
		char* pName; // 2551
		uint8* pBody; // 2559
	}
} /* size: 0, variables: 3 */

// <0044A5B9> ../common/dwarf_symbols.cpp:2585
// variables: 4
// function calls: 12
void CDwarfModule::ParseGnuDebugLink(uint32 nSecOffset, uint32 nSecSize)
{
	CDwarfVector<unsigned char> secData; // 2599
	uint8* pScan; // 2606
	uint32 nSepIndex; // 2607
	CDwarfVector<unsigned char>::Clear(); // 37
	CDwarfVector<unsigned char>::CDwarfVector(); // 2599
	CDwarfVector<unsigned char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<unsigned char>::EnsureCapacity(
			int nEntries);  // 122
	CDwarfVector<unsigned char>::SetCount(
		int nCount);  // 2600
	{
		uint32 i; // 2608
	}
	CDwarfVector<unsigned char>::Purge(); // 41
	CDwarfVector<unsigned char>::~CDwarfVector(); // 2639
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 2636
	CDwarfModule::ParseGnuDebugLink(
				uint32 nSecOffset,
				uint32 nSecSize);  // 2585
} /* size: 438, variables: 3, inline expansions: 12 (664 bytes) */

// <0043F2ED> ../common/dwarf_symbols.cpp:2585
// variables: 4
void CDwarfModule::ParseGnuDebugLink(uint32 nSecOffset, uint32 nSecSize)
{
	CDwarfVector<unsigned char> secData; // 2599
	uint8* pScan; // 2606
	uint32 nSepIndex; // 2607
	{
		uint32 i; // 2608
	}
} /* size: 0, variables: 3 */

// <00433630> ../common/dwarf_symbols.cpp:2642
// variables: 12
// function calls: 13
void ParseMachoSections<mach_header, segment_command, 1, section, CDwarfModule::nlist>()
{
	mach_header* pHdr; // 2644
	CDwarfVector<unsigned char> loadCmds; // 2660
	load_command* pCmd; // 2668
	{
		uint32 i; // 2669
		{
			segment_command* pSeg; // 2673
			{
				section* pSec; // 2676
				{
					uint32 nSec; // 2677
					{
						EDwarfSymbolKind symKind; // 2700
						{
							const char* pName; // 2683
							int nSecIdx; // 2684
						}
						CDwarfVector<EDwarfSymbolKind>::EnsureCapacity(
								int nEntries);  // 98
						CDwarfVector<EDwarfSymbolKind>::EnsureCapacity(
								int nEntries);  // 149
						CDwarfVector<EDwarfSymbolKind>::GetInsertPtr(
								int nIndex,
								int nCount);  // 160
						CDwarfVector<EDwarfSymbolKind>::GetAppendPtr(
								int nCount);  // 164
						CDwarfVector<EDwarfSymbolKind>::Append(
							const EDwarfSymbolKind& elt);  // 2709
					}
				}
			}
		}
		{
			symtab_command* pSymTab; // 2717
		}
		{
			uuid_command* pUuid; // 2734
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2742
		}
	}
	CDwarfVector<unsigned char>::Clear(); // 37
	CDwarfVector<unsigned char>::CDwarfVector(); // 2660
	CDwarfVector<unsigned char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<unsigned char>::EnsureCapacity(
			int nEntries);  // 122
	CDwarfVector<unsigned char>::SetCount(
		int nCount);  // 2661
	CDwarfVector<unsigned char>::Purge(); // 41
	CDwarfVector<unsigned char>::~CDwarfVector(); // 2750
} /* size: 903, variables: 3, inline expansions: 7 (137 bytes) */

// <004330F9> ../common/dwarf_symbols.cpp:2642
// variables: 12
// function calls: 13
void ParseMachoSections<mach_header_64, segment_command_64, 25, section_64, CDwarfModule::nlist_64>()
{
	mach_header_64* pHdr; // 2644
	CDwarfVector<unsigned char> loadCmds; // 2660
	load_command* pCmd; // 2668
	{
		uint32 i; // 2669
		{
			segment_command_64* pSeg; // 2673
			{
				section_64* pSec; // 2676
				{
					uint32 nSec; // 2677
					{
						EDwarfSymbolKind symKind; // 2700
						{
							const char* pName; // 2683
							int nSecIdx; // 2684
						}
						CDwarfVector<EDwarfSymbolKind>::EnsureCapacity(
								int nEntries);  // 98
						CDwarfVector<EDwarfSymbolKind>::EnsureCapacity(
								int nEntries);  // 149
						CDwarfVector<EDwarfSymbolKind>::GetInsertPtr(
								int nIndex,
								int nCount);  // 160
						CDwarfVector<EDwarfSymbolKind>::GetAppendPtr(
								int nCount);  // 164
						CDwarfVector<EDwarfSymbolKind>::Append(
							const EDwarfSymbolKind& elt);  // 2709
					}
				}
			}
		}
		{
			symtab_command* pSymTab; // 2717
		}
		{
			uuid_command* pUuid; // 2734
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2742
		}
	}
	CDwarfVector<unsigned char>::Clear(); // 37
	CDwarfVector<unsigned char>::CDwarfVector(); // 2660
	CDwarfVector<unsigned char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<unsigned char>::EnsureCapacity(
			int nEntries);  // 122
	CDwarfVector<unsigned char>::SetCount(
		int nCount);  // 2661
	CDwarfVector<unsigned char>::Purge(); // 41
	CDwarfVector<unsigned char>::~CDwarfVector(); // 2750
} /* size: 890, variables: 3, inline expansions: 7 (137 bytes) */

// <0043EB02> ../common/dwarf_symbols.cpp:2752
// variables: 12
// function calls: 23
void CDwarfModule::BuildAbbrevIndex(SCompilationUnit* pUnit)
{
	uint8* pAbbrevData; // 2754
	uint8* pAbbrevEnd; // 2755
	{
		uint32 nCodeOffs; // 2765
		uint64 nCode; // 2767
		uint64 nTag; // 2778
		bool bChildren; // 2785
		SAbbrevCode* pAbbrev; // 2802
		SAbbrevEntry* pFinalEntry; // 2850
		{
			uint64 nAttr; // 2822
			uint64 nForm; // 2823
			SAbbrevEntry* pEntry; // 2845
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 2822
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 2823
			CDwarfVector<CDwarfModule::SAbbrevEntry>::EnsureCapacity(
					int nEntries);  // 98
			CDwarfVector<CDwarfModule::SAbbrevEntry>::EnsureCapacity(
					int nEntries);  // 149
			CDwarfVector<CDwarfModule::SAbbrevEntry>::GetInsertPtr(
					int nIndex,
					int nCount);  // 160
			CDwarfVector<CDwarfModule::SAbbrevEntry>::GetAppendPtr(
					int nCount);  // 2845
		}
		CDwarfModule::DecodeLeb128Full(
				uint8** pBytes);  // 1188
		CDwarfModule::DecodeLeb128(
				uint8** pBytes);  // 2767
		CDwarfModule::DecodeLeb128Full(
				uint8** pBytes);  // 1188
		CDwarfModule::DecodeLeb128(
				uint8** pBytes);  // 2778
		{
			int nOldCount; // 138
			CDwarfVector<CDwarfModule::SAbbrevCode>::EnsureCapacity(
					int nEntries);  // 98
			CDwarfVector<CDwarfModule::SAbbrevCode>::EnsureCapacity(
					int nEntries);  // 122
			CDwarfVector<CDwarfModule::SAbbrevCode>::SetCount(
				int nCount);  // 139
			memset(void* __dest,
				int __ch,
				size_t __len);  // 140
		}
		CDwarfVector<CDwarfModule::SAbbrevCode>::EnsureCountZeroed(
					int nCount);  // 2801
		CDwarfVector<CDwarfModule::SAbbrevCode>::operator[](
				int nIndex);  // 2802
		CDwarfVector<CDwarfModule::SAbbrevEntry>::Count(); // 2810
		CDwarfVector<CDwarfModule::SAbbrevEntry>::EnsureCapacity(
				int nEntries);  // 98
		CDwarfVector<CDwarfModule::SAbbrevEntry>::EnsureCapacity(
				int nEntries);  // 149
		CDwarfVector<CDwarfModule::SAbbrevEntry>::GetInsertPtr(
				int nIndex,
				int nCount);  // 160
		CDwarfVector<CDwarfModule::SAbbrevEntry>::GetAppendPtr(
				int nCount);  // 2850
	}
} /* size: 1288, variables: 2 */

// <0043E86A> ../common/dwarf_symbols.cpp:2863
// variables: 3
// function calls: 7
void CDwarfModule::AddSymbolName(const char* pNamePrefix, int nNamePrefixChars, const char* pName)
{
	int nNameChars; // 2867
	uint32 nNameOffset; // 2869
	char* pNameBuf; // 2870
	CDwarfVector<char>::Count(); // 2869
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<char>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<char>::GetAppendPtr(
			int nCount);  // 2870
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2871
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2872
} /* size: 201, variables: 3, inline expansions: 7 (356 bytes) */

// <0043E73D> ../common/dwarf_symbols.cpp:2877
// variables: 4
// function calls: 2
void CDwarfModule::FindSymbol(uint32 nFindKindMask, SCompilationUnit* pUnit, uint32 nRelVirt)
{
	int nMin; // 2891
	int nMax; // 2892
	{
		int nMid; // 2895
		SSymbol* pSym; // 2896
		CDwarfVector<CDwarfModule::SSymbol>::operator[](
				int nIndex);  // 2896
	}
	CDwarfVector<CDwarfModule::SSymbol>::Count(); // 2886
} /* size: 212, variables: 2, inline expansions: 1 (3 bytes) */

// <0043E4D7> ../common/dwarf_symbols.cpp:2941
// variables: 4
// function calls: 4
void CDwarfModule::AddSymbol(SCompilationUnit* pUnit, const char* pNamePrefix, int nNamePrefixChars, const char* pName, uint32 nRelVirtStart, uint32 nRelVirtEnd, uint32 nInfoOffset, EDwarfSymbolKind eKind)
{
	uint32 nKindBit; // 2950
	const char   __FUNCTION__; // 9644
	SSymbol* pSym; // 2980
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2972
	}
	CDwarfVector<CDwarfModule::SSymbol>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<CDwarfModule::SSymbol>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<CDwarfModule::SSymbol>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<CDwarfModule::SSymbol>::GetAppendPtr(
			int nCount);  // 2980
} /* size: 0, variables: 3, inline expansions: 4 (484 bytes) */

// <0044B630> ../common/dwarf_symbols.cpp:2998
// function calls: 4
void CDwarfModule::UpdateSymbolName(SSymbol* pSym, const char* pNamePrefix, int nNamePrefixChars, const char* pName)
{
	SSymbol::HasName(); // 3003
	CDwarfVector<char>::operator[](
			int nIndex);  // 1073
	CDwarfModule::GetSymbolName(
			const SSymbol* pSym);  // 3005
	CDwarfModule::UpdateSymbolName(
			SSymbol* pSym,
			const char* pNamePrefix,
			int nNamePrefixChars,
			const char* pName);  // 2998
} /* size: 0, inline expansions: 4 (0 bytes) */

// <0043E486> ../common/dwarf_symbols.cpp:2998
void CDwarfModule::UpdateSymbolName(SSymbol* pSym, const char* pNamePrefix, int nNamePrefixChars, const char* pName)
{
} /* size: 0 */

// <0043E1A1> ../common/dwarf_symbols.cpp:3014
// variables: 2
// function calls: 7
void CDwarfModule::UpdateIncompleteSymbol(SIncompleteSymbol* pIncSymEntry, const char* pNamePrefix, int nNamePrefixChars, const char* pName)
{
	SCompilationUnit* pIncUnit; // 3019
	SSymbol* pIncSym; // 3020
	CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
			int nIndex);  // 3019
	CDwarfVector<CDwarfModule::SSymbol>::operator[](
			int nIndex);  // 3020
	SSymbol::HasName(); // 3003
	CDwarfVector<char>::operator[](
			int nIndex);  // 1073
	CDwarfModule::GetSymbolName(
			const SSymbol* pSym);  // 3005
	CDwarfModule::UpdateSymbolName(
			SSymbol* pSym,
			const char* pNamePrefix,
			int nNamePrefixChars,
			const char* pName);  // 2998
	CDwarfModule::UpdateSymbolName(
			SSymbol* pSym,
			const char* pNamePrefix,
			int nNamePrefixChars,
			const char* pName);  // 3021
} /* size: 139, variables: 2, inline expansions: 7 (126 bytes) */

// <0043DCCA> ../common/dwarf_symbols.cpp:3026
// variables: 5
// function calls: 18
void CDwarfModule::RemoveSymbol(SCompilationUnit* pUnit, SSymbol* pSym)
{
	{
		uint32 nNameChars; // 3030
		{
			int i; // 3036
			{
				SCompilationUnit* pScanUnit; // 3038
				SSymbol* pScanSym; // 3039
				{
					int j; // 3040
					CDwarfVector<CDwarfModule::SSymbol>::Count(); // 3040
				}
				CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
						int nIndex);  // 3038
				CDwarfVector<CDwarfModule::SSymbol>::Base(); // 3039
			}
			CDwarfVector<CDwarfModule::SCompilationUnit>::Count(); // 3036
		}
		CDwarfVector<char>::operator[](
				int nIndex);  // 1073
		CDwarfModule::GetSymbolName(
				const SSymbol* pSym);  // 3030
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 109
		V_memmove(void* dest,
				const void* src,
				ptrdiff_t count);  // 134
		UtlTraitsMoveRange<char>(char* pFrom,
					char* pFromEnd,
					char* pTo);  // 127
		UtlTraitsMoveRange<char>(char* pFrom,
					char* pFromEnd,
					char* pTo);  // 175
		CDwarfVector<char>::Remove(
			int nIndex,
			int nCount);  // 3031
	}
	SSymbol::HasName(); // 3028
	CDwarfVector<CDwarfModule::SSymbol>::GetIndex(
		const SSymbol* pPtr);  // 3051
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 109
	V_memmove(void* dest,
			const void* src,
			ptrdiff_t count);  // 134
	UtlTraitsMoveRange<char>(char* pFrom,
				char* pFromEnd,
				char* pTo);  // 127
	UtlTraitsMoveRange<CDwarfModule::SSymbol>(SSymbol* pFrom,
							SSymbol* pFromEnd,
							SSymbol* pTo);  // 175
	CDwarfVector<CDwarfModule::SSymbol>::Remove(
		int nIndex,
		int nCount);  // 3051
} /* size: 0, inline expansions: 7 (0 bytes) */

// <0043D800> ../common/dwarf_symbols.cpp:3054
// variables: 7
// function calls: 9
void CDwarfModule::ParseRangeList(uint32 nListOffset, uint64 nBaseRelVal, CDwarfVector<CDwarfModule::SRelVirtRange>* pList)
{
	uint64 nBaseSelMarker; // 3086
	uint8* pData; // 3089
	uint8* pSectionEnd; // 3090
	{
		uint64 nStartVal; // 3099
		uint64 nEndVal; // 3100
		{
			SRelVirtRange* pRange; // 3127
			uint64 nVal; // 3129
			CDwarfVector<CDwarfModule::SRelVirtRange>::EnsureCapacity(
					int nEntries);  // 98
			CDwarfVector<CDwarfModule::SRelVirtRange>::EnsureCapacity(
					int nEntries);  // 149
			CDwarfVector<CDwarfModule::SRelVirtRange>::GetInsertPtr(
					int nIndex,
					int nCount);  // 160
			CDwarfVector<CDwarfModule::SRelVirtRange>::GetAppendPtr(
					int nCount);  // 3127
			CDwarfModule::GetVirtualSize(); // 3137
			CDwarfModule::GetVirtualSize(); // 3153
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 3102
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 3104
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3087
} /* size: 823, variables: 3, inline expansions: 1 (22 bytes) */

// <0043B92C> ../common/dwarf_symbols.cpp:3166
// variables: 51
// function calls: 73
void CDwarfModule::ParseCompilationUnitEntries(SCompilationUnit* pUnit, CDwarfVector<CDwarfModule::SIncompleteSymbol>* pIncomplete, int* pCurIncomplete, bool bSpecOnly)
{
	uint8* pData; // 3171
	uint8* pDataEnd; // 3172
	int pNamePrefixStack; // 3173
	int nStartIncomplete; // 3174
	CDwarfVector<char> namePrefix; // 3175
	CDwarfVector<CDwarfModule::SRelVirtRange> rangeList; // 3176
	bool bCuAttrsOnly; // 3177
	int nDepth; // 3203
	const char   __FUNCTION__; // 5743
	{
		uint32 nCuInfoOffset; // 3206
		uint64 nCode; // 3234
		SAbbrevCode* pAbbrev; // 3258
		SAbbrevEntry* pAbbrevEntry; // 3273
		const char* pName; // 3288
		uint32 nStringNameRef; // 3289
		uint64 nLowPcVal; // 3290
		uint64 nHighPcVal; // 3291
		uint32 nHighPcForm; // 3292
		uint32 nRanges; // 3293
		uint32 nSpecification; // 3294
		uint32 nSibling; // 3295
		uint32 nAbstractOrigin; // 3296
		uint32 nLinkageName; // 3297
		uint8 nInline; // 3298
		EDwarfSymbolKind eSymKind; // 3299
		SDebugInfoEntry* pDie; // 3708
		uint32 nLowPcRel; // 3726
		uint32 nHighPcRel; // 3727
		{
			uint32 nAttr; // 3312
			uint32 nForm; // 3313
			const char* pStr; // 3336
			uint64 nVal; // 3337
			bool bIsCuRelRef; // 3338
			{
				uint64 nNewForm; // 3326
				CDwarfModule::DecodeLeb128Full(
						uint8** pBytes);  // 1188
				CDwarfModule::DecodeLeb128(
						uint8** pBytes);  // 3326
			}
			{
				int nChars; // 3511
				char* pDstName; // 3513
				CDwarfVector<char>::Count(); // 3512
				CDwarfVector<char>::EnsureCapacity(
						int nEntries);  // 98
				CDwarfVector<char>::EnsureCapacity(
						int nEntries);  // 149
				CDwarfVector<char>::GetInsertPtr(
						int nIndex,
						int nCount);  // 160
				CDwarfVector<char>::GetAppendPtr(
						int nCount);  // 3513
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 3514
			}
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 3417
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 3465
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 3461
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 3409
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 3404
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 3399
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 3394
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 3359
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 3370
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 3366
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 3355
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 3351
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 3343
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 3381
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 3438
			CDwarfModule::DecodeSignedLeb128(
						uint8** pBytes);  // 3378
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3718
		}
		{
			int i; // 3906
		}
		{
			bool bHaveRange; // 3957
			{
				SSymbol* pAddedSym; // 3972
				{
					SIncompleteSymbol* pIncSym; // 3984
					CDwarfVector<CDwarfModule::SIncompleteSymbol>::EnsureCapacity(
							int nEntries);  // 98
					CDwarfVector<CDwarfModule::SIncompleteSymbol>::EnsureCapacity(
							int nEntries);  // 149
					CDwarfVector<CDwarfModule::SIncompleteSymbol>::GetInsertPtr(
							int nIndex,
							int nCount);  // 160
					CDwarfVector<CDwarfModule::SIncompleteSymbol>::GetAppendPtr(
							int nCount);  // 3984
					CDwarfVector<CDwarfModule::SCompilationUnit>::GetIndex(
						const SCompilationUnit* pPtr);  // 3985
					CDwarfVector<CDwarfModule::SSymbol>::GetIndex(
						const SSymbol* pPtr);  // 3987
				}
			}
			{
				SIncompleteSymbol* pIncSymEntry; // 4031
			}
			CDwarfVector<CDwarfModule::SIncompleteSymbol>::Count(); // 4020
			CDwarfVector<CDwarfModule::SIncompleteSymbol>::operator[](
					int nIndex);  // 4021
			CDwarfVector<CDwarfModule::SIncompleteSymbol>::Count(); // 4028
			CDwarfVector<CDwarfModule::SIncompleteSymbol>::operator[](
					int nIndex);  // 4029
		}
		{
			int nNameChars; // 4059
			char* pDst; // 4060
			CDwarfVector<char>::EnsureCapacity(
					int nEntries);  // 98
			CDwarfVector<char>::EnsureCapacity(
					int nEntries);  // 149
			CDwarfVector<char>::GetInsertPtr(
					int nIndex,
					int nCount);  // 160
			CDwarfVector<char>::GetAppendPtr(
					int nCount);  // 4060
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 4061
		}
		CDwarfModule::DecodeLeb128Full(
				uint8** pBytes);  // 1188
		CDwarfModule::DecodeLeb128(
				uint8** pBytes);  // 3234
		CDwarfVector<CDwarfModule::SIncompleteSymbol>::Count(); // 3223
		CDwarfVector<CDwarfModule::SIncompleteSymbol>::operator[](
				int nIndex);  // 3224
		CDwarfVector<CDwarfModule::SAbbrevCode>::Count(); // 3252
		CDwarfVector<CDwarfModule::SAbbrevCode>::operator[](
				int nIndex);  // 3258
		CDwarfVector<CDwarfModule::SAbbrevEntry>::operator[](
				int nIndex);  // 3273
		CDwarfVector<CDwarfModule::SDebugInfoEntry>::Count(); // 3716
		CDwarfVector<CDwarfModule::SDebugInfoEntry>::operator[](
				int nIndex);  // 3718
		CDwarfVector<CDwarfModule::SDebugInfoEntry>::EnsureCapacity(
				int nEntries);  // 98
		CDwarfVector<CDwarfModule::SDebugInfoEntry>::EnsureCapacity(
				int nEntries);  // 149
		CDwarfVector<CDwarfModule::SDebugInfoEntry>::GetInsertPtr(
				int nIndex,
				int nCount);  // 160
		CDwarfVector<CDwarfModule::SDebugInfoEntry>::GetAppendPtr(
				int nCount);  // 3721
		CDwarfVector<char>::EnsureCapacity(
				int nEntries);  // 98
		CDwarfVector<char>::EnsureCapacity(
				int nEntries);  // 122
		CDwarfVector<char>::SetCount(
			int nCount);  // 3248
	}
	{
		int nIncomplete; // 4099
		SSymbol* pSym; // 4100
		{
			int i; // 4084
			{
				SIncompleteSymbol* pIncSymEntry; // 4086
				{
					const char* pAltDecName; // 4089
					const char* pAltName; // 4090
					CDwarfModule::GetNameRefString(
							NameRef_t nRef);  // 4089
				}
				CDwarfVector<CDwarfModule::SIncompleteSymbol>::operator[](
						int nIndex);  // 4086
			}
		}
		{
			int i; // 4101
			CDwarfVector<CDwarfModule::SSymbol>::Count(); // 4101
		}
		CDwarfVector<CDwarfModule::SSymbol>::Base(); // 4100
	}
	CDwarfVector<char>::Clear(); // 37
	CDwarfVector<char>::CDwarfVector(); // 3175
	CDwarfVector<CDwarfModule::SRelVirtRange>::Clear(); // 37
	CDwarfVector<CDwarfModule::SRelVirtRange>::CDwarfVector(); // 3176
	CDwarfVector<CDwarfModule::SRelVirtRange>::Purge(); // 41
	CDwarfVector<CDwarfModule::SRelVirtRange>::~CDwarfVector(); // 4147
	CDwarfVector<char>::Purge(); // 41
	CDwarfVector<char>::~CDwarfVector(); // 4147
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<char>::EnsureCapacity(
			int nEntries);  // 3199
} /* size: 0, variables: 9, inline expansions: 10 (312 bytes) */

// <0043B59E> ../common/dwarf_symbols.cpp:4149
// variables: 10
// function calls: 5
void CDwarfModule::ParseCompilationUnit(uint32 nInfoOffset, CDwarfVector<CDwarfModule::SIncompleteSymbol>* pIncomplete)
{
	uint8* pData; // 4152
	uint8* pDataSectionEnd; // 4153
	uint32 nUnitSize; // 4160
	uint16 nUnitVersion; // 4161
	uint64 nAbbrevOffset; // 4162
	uint8 nAddrSize; // 4163
	uint32 nDwarfOffsetSize; // 4174
	uint8* pUnitEnd; // 4176
	uint32 nDwarfRefAddrSize; // 4190
	SCompilationUnit* pUnit; // 4216
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 4167
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 4183
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 4201
	CDwarfVector<CDwarfModule::SCompilationUnit>::GetIndex(
		const SCompilationUnit* pPtr);  // 4247
	CDwarfVector<CDwarfModule::SCompilationUnit>::RemoveLast(); // 4243
} /* size: 438, variables: 10, inline expansions: 5 (67 bytes) */

// <0044C0F9> ../common/dwarf_symbols.cpp:4250
// variables: 3
void CDwarfModule::ParseCompilationUnits()
{
	uint32 nInfoOffset; // 4271
	uint32 nTotalSymbols; // 4272
	CDwarfVector<CDwarfModule::SIncompleteSymbol> incomplete; // 4273
} /* size: 0, variables: 3 */

// <0044BD57> ../common/dwarf_symbols.cpp:4250
// variables: 10
// function calls: 9
void CDwarfModule::ParseCompilationUnits()
{
	uint32 nInfoOffset; // 4271
	uint32 nTotalSymbols; // 4272
	CDwarfVector<CDwarfModule::SIncompleteSymbol> incomplete; // 4273
	{
		int nCu; // 4298
		CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
				int nIndex);  // 4304
	}
	CDwarfVector<CDwarfModule::SIncompleteSymbol>::Clear(); // 37
	CDwarfVector<CDwarfModule::SIncompleteSymbol>::CDwarfVector(); // 4273
	CDwarfVector<CDwarfModule::SIncompleteSymbol>::Purge(); // 41
	CDwarfVector<CDwarfModule::SIncompleteSymbol>::~CDwarfVector(); // 4378
	{
		int i; // 4310
		{
			SIncompleteSymbol* pIncSymEntry; // 4312
			CDwarfVector<CDwarfModule::SIncompleteSymbol>::operator[](
					int nIndex);  // 4312
			{
				int nOriginDie; // 4322
				{
					SDebugInfoEntry* pOriginDie; // 4325
					CDwarfVector<CDwarfModule::SDebugInfoEntry>::operator[](
							int nIndex);  // 4325
				}
			}
		}
	}
	{
		int nCurIncomplete; // 4350
		{
			int i; // 4351
			CDwarfVector<CDwarfModule::SCompilationUnit>::Count(); // 4351
			CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
					int nIndex);  // 4353
		}
	}
} /* size: 502, variables: 3, inline expansions: 4 (48 bytes) */

// <0043B4ED> ../common/dwarf_symbols.cpp:4250
// variables: 10
void CDwarfModule::ParseCompilationUnits()
{
	uint32 nInfoOffset; // 4271
	uint32 nTotalSymbols; // 4272
	CDwarfVector<CDwarfModule::SIncompleteSymbol> incomplete; // 4273
	{
		int nCu; // 4298
	}
	{
		int i; // 4310
		{
			SIncompleteSymbol* pIncSymEntry; // 4312
			{
				int nOriginDie; // 4322
				{
					SDebugInfoEntry* pOriginDie; // 4325
				}
			}
		}
	}
	{
		int nCurIncomplete; // 4350
		{
			int i; // 4351
		}
	}
} /* size: 0, variables: 3 */

// <0043AF9A> ../common/dwarf_symbols.cpp:4380
// variables: 14
// function calls: 8
void CDwarfModule::ParseAddressRanges()
{
	uint8* pTable; // 4395
	uint8* pSectionEnd; // 4396
	{
		const int  nSetHdrSize; // 4399
		uint32 nSetSize; // 4406
		uint16 nSetVersion; // 4407
		uint64 nInfoOffset; // 4408
		uint8 nAddrSize; // 4409
		uint8 nSegmentSize; // 4410
		uint32 nDwarfOffsetSize; // 4421
		uint8* pSetEnd; // 4428
		SCompilationUnit* pUnit; // 4462
		{
			uint64 nAddr; // 4480
			uint64 nSize; // 4481
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 4483
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 4485
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4414
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4430
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 4439
		{
			int i; // 689
			CDwarfVector<CDwarfModule::SCompilationUnit>::Count(); // 689
			CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
					int nIndex);  // 691
		}
		CDwarfModule::FindCompilationUnitByInfoOffset(
						uint32 nInfoOffset);  // 4462
	}
} /* size: 765, variables: 2 */

// <0043AA80> ../common/dwarf_symbols.cpp:4526
// variables: 8
// function calls: 20
void CDwarfModule::BuildAddrToCuMap()
{
	SAddrToCompilationUnit* pSrc; // 4578
	SAddrToCompilationUnit* pDst; // 4579
	{
		int i; // 4535
		{
			SCompilationUnit* pUnit; // 4537
			SRelVirtRange* pUnitRange; // 4538
			SAddrToCompilationUnit* pMapEntry; // 4539
			{
				int j; // 4540
				CDwarfVector<CDwarfModule::SRelVirtRange>::Count(); // 4540
			}
			CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
					int nIndex);  // 4537
			CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::EnsureCapacity(
					int nEntries);  // 98
			CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::EnsureCapacity(
					int nEntries);  // 149
			CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::GetInsertPtr(
					int nIndex,
					int nCount);  // 160
			CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::GetAppendPtr(
					int nCount);  // 4539
			CDwarfVector<CDwarfModule::SRelVirtRange>::Base(); // 4538
			CDwarfVector<CDwarfModule::SRelVirtRange>::Count(); // 4539
		}
		CDwarfVector<CDwarfModule::SCompilationUnit>::Count(); // 4535
	}
	{
		int i; // 4580
		CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Count(); // 4580
		CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Base(); // 4586
	}
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Count(); // 4554
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Base(); // 4554
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Base(); // 4578
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Base(); // 4633
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::EnsureCapacity(
			int nEntries);  // 122
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::SetCount(
		int nCount);  // 4639
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Clear(); // 95
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Purge(); // 4635
} /* size: 603, variables: 2, inline expansions: 9 (286 bytes) */

// <0044B7E2> ../common/dwarf_symbols.cpp:4667
// variables: 4
// function calls: 2
void CDwarfModule::FindSourceLine(SCompilationUnit* pUnit, uint32 nRelVirt)
{
	int nMin; // 4679
	int nMax; // 4680
	CDwarfVector<CDwarfModule::SSourceLine>::Count(); // 4674
	{
		int nMid; // 4683
		SSourceLine* pLine; // 4684
		CDwarfVector<CDwarfModule::SSourceLine>::operator[](
				int nIndex);  // 4684
	}
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <0043AA13> ../common/dwarf_symbols.cpp:4667
// variables: 4
void CDwarfModule::FindSourceLine(SCompilationUnit* pUnit, uint32 nRelVirt)
{
	int nMin; // 4679
	int nMax; // 4680
	{
		int nMid; // 4683
		SSourceLine* pLine; // 4684
	}
} /* size: 0, variables: 2 */

// <0043A79A> ../common/dwarf_symbols.cpp:4726
// variables: 2
// function calls: 6
void CDwarfModule::StartSourceLine(SCompilationUnit* pUnit, uint64 nAddr, uint32 nFileIndex, uint32 nLine, SSourceLine* pPreviousLine)
{
	uint32 nRelVirt; // 4735
	SSourceLine* pLine; // 4743
	CDwarfModule::EndSourceLine(
			SSourceLine* pLine,
			uint64 nAddr);  // 4775
	CDwarfModule::EndSourceLine(
			SSourceLine* pLine,
			uint64 nAddr);  // 4750
	CDwarfVector<CDwarfModule::SSourceLine>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<CDwarfModule::SSourceLine>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<CDwarfModule::SSourceLine>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<CDwarfModule::SSourceLine>::GetAppendPtr(
			int nCount);  // 4757
} /* size: 314, variables: 2, inline expansions: 6 (652 bytes) */

// <0044B8D0> ../common/dwarf_symbols.cpp:4775
// function call: 1
void CDwarfModule::EndSourceLine(SSourceLine* pLine, uint64 nAddr)
{
	CDwarfModule::EndSourceLine(
			SSourceLine* pLine,
			uint64 nAddr);  // 4775
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0043A763> ../common/dwarf_symbols.cpp:4775
void CDwarfModule::EndSourceLine(SSourceLine* pLine, uint64 nAddr)
{
} /* size: 0 */

// <00439D66> ../common/dwarf_symbols.cpp:4794
// variables: 12
// function calls: 23
void CDwarfModule::ExecuteLineProgram(SCompilationUnit* pUnit, uint8* pProgram, uint8* pProgramEnd, SLineProgramInfo* pProgInfo, uint32* pHighestRelVirt)
{
	uint32 nFile; // 4804
	uint32 nLine; // 4805
	uint64 nAddr; // 4806
	SSourceLine* pStartedLine; // 4807
	bool bIgnorableLine; // 4808
	{
		uint8 nOpcode; // 4811
		{
			uint64 nSize; // 4818
			uint8* pExtArgs; // 4825
			{
				uint32 nRelVirt; // 4857
			}
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 4818
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 4881
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 4894
			CDwarfModule::EndSourceLine(
					SSourceLine* pLine,
					uint64 nAddr);  // 4775
			CDwarfModule::EndSourceLine(
					SSourceLine* pLine,
					uint64 nAddr);  // 4843
			CDwarfVector<CDwarfModule::SSourceLine>::RemoveLast(); // 4841
		}
		{
			uint32 nIgnoreLine; // 5023
			uint16 nFixedVal; // 5037
			{
				uint64 nDecoded; // 4945
				CDwarfModule::DecodeLeb128Full(
						uint8** pBytes);  // 1188
				CDwarfModule::DecodeLeb128(
						uint8** pBytes);  // 4945
				CDwarfModule::EndSourceLine(
						SSourceLine* pLine,
						uint64 nAddr);  // 4775
				CDwarfModule::EndSourceLine(
						SSourceLine* pLine,
						uint64 nAddr);  // 4956
			}
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 5008
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 5057
			CDwarfModule::DecodeSignedLeb128(
						uint8** pBytes);  // 4991
			CDwarfModule::DecodeSpecialLineOp(
						uint64* pAddr,
						uint32* pLine,
						uint8 nOpcode,
						SLineProgramInfo* pProgInfo);  // 5028
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 5039
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 4997
			CDwarfVector<unsigned int>::Count(); // 4998
		}
		CDwarfModule::DecodeSpecialLineOp(
					uint64* pAddr,
					uint32* pLine,
					uint8 nOpcode,
					SLineProgramInfo* pProgInfo);  // 4916
	}
} /* size: 1914, variables: 5 */

// <0044D469> ../common/dwarf_symbols.cpp:5075
// variables: 5
void CDwarfModule::ParseSourceLines()
{
	CPathBufferString tmpPath; // 5088
	uint32 nTotalLineEntries; // 5089
	uint32 nTotalLineCuRefs; // 5090
	uint8* pTable; // 5092
	uint8* pSectionEnd; // 5093
} /* size: 0, variables: 5 */

// <0044C14D> ../common/dwarf_symbols.cpp:5075
// variables: 28
// function calls: 71
void CDwarfModule::ParseSourceLines()
{
	CPathBufferString tmpPath; // 5088
	uint32 nTotalLineEntries; // 5089
	uint32 nTotalLineCuRefs; // 5090
	uint8* pTable; // 5092
	uint8* pSectionEnd; // 5093
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 5088
	{
		uint32 nLineOffset; // 5102
		uint32 nLineSize; // 5103
		uint16 nLineVersion; // 5104
		uint64 nHeaderSize; // 5105
		SLineProgramInfo progInfo; // 5106
		CDwarfVector<unsigned char> pOpcodeSizes; // 5107
		uint32 nDwarfOffsetSize; // 5118
		uint8* pLineEnd; // 5125
		uint8* pProgram; // 5144
		SCompilationUnit* pUnit; // 5185
		CDwarfVector<char*> pIncludesIndex; // 5193
		char* pIncPath; // 5194
		uint32 nHighestRelVirt; // 5291
		CDwarfVector<unsigned char>::Clear(); // 37
		CDwarfVector<unsigned char>::CDwarfVector(); // 5107
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 5111
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 5127
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 5136
		{
			uint8* pOpSize; // 5170
			CDwarfVector<unsigned char>::EnsureCapacity(
					int nEntries);  // 98
			CDwarfVector<unsigned char>::EnsureCapacity(
					int nEntries);  // 122
			CDwarfVector<unsigned char>::SetCount(
				int nCount);  // 5170
			{
				int i; // 5171
				CDwarfModule::DecodeLeb128Full(
						uint8** pBytes);  // 1188
				CDwarfModule::DecodeLeb128(
						uint8** pBytes);  // 5179
			}
		}
		{
			int i; // 717
			CDwarfVector<CDwarfModule::SCompilationUnit>::Count(); // 717
			CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](
					int nIndex);  // 719
		}
		CDwarfModule::FindCompilationUnitByLineOffset(
						uint32 nLineOffset);  // 5185
		CDwarfVector<char::Clear(); // 37
		CDwarfVector<char::CDwarfVector(); // 5193
		CDwarfVector<char::EnsureCapacity(
				int nEntries);  // 98
		CDwarfVector<char::EnsureCapacity(
				int nEntries);  // 149
		CDwarfVector<char::GetInsertPtr(
				int nIndex,
				int nCount);  // 160
		CDwarfVector<char::GetAppendPtr(
				int nCount);  // 164
		CDwarfVector<char::Append(
			char* const& elt);  // 5209
		CDwarfVector<char::Purge(); // 41
		CDwarfVector<char::~CDwarfVector(); // 5309
		CDwarfVector<unsigned char>::Purge(); // 41
		CDwarfVector<unsigned char>::~CDwarfVector(); // 5309
		{
			char* pTableName; // 5228
			int nChars; // 5229
			uint64 nIncDir; // 5233
			const char* pDir; // 5240
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 5257
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 5233
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 5235
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 5237
			CDwarfVector<char>::Count(); // 5239
			CDwarfVector<unsigned int>::EnsureCapacity(
					int nEntries);  // 98
			CDwarfVector<unsigned int>::EnsureCapacity(
					int nEntries);  // 149
			CDwarfVector<unsigned int>::GetInsertPtr(
					int nIndex,
					int nCount);  // 160
			CDwarfVector<unsigned int>::GetAppendPtr(
					int nCount);  // 164
			CDwarfVector<unsigned int>::Append(
				const unsigned int& elt);  // 5239
			CDwarfVector<char::operator[](
					int nIndex);  // 5250
			{
				int nDirChars; // 5263
				char* pDstName; // 5264
				CDwarfVector<char>::EnsureCapacity(
						int nEntries);  // 98
				CDwarfVector<char>::EnsureCapacity(
						int nEntries);  // 149
				CDwarfVector<char>::GetInsertPtr(
						int nIndex,
						int nCount);  // 160
				CDwarfVector<char>::GetAppendPtr(
						int nCount);  // 5264
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 5265
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 5270
			}
			{
				char* pDstName; // 5274
				CDwarfVector<char>::EnsureCapacity(
						int nEntries);  // 98
				CDwarfVector<char>::EnsureCapacity(
						int nEntries);  // 149
				CDwarfVector<char>::GetInsertPtr(
						int nIndex,
						int nCount);  // 160
				CDwarfVector<char>::GetAppendPtr(
						int nCount);  // 5274
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 5275
			}
			CDwarfVector<char>::Count(); // 917
			CDwarfVector<char>::operator[](
					int nIndex);  // 917
			SCompilationUnit::GetCompileDir(); // 5252
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 5258
		}
		CDwarfVector<CDwarfModule::SSourceLine>::Count(); // 5297
		CDwarfVector<CDwarfModule::SSourceLine>::Base(); // 5297
		CDwarfVector<CDwarfModule::SSourceLine>::Count(); // 5299
		CDwarfVector<CDwarfModule::SSourceLine>::operator[](
				int nIndex);  // 5300
		CDwarfVector<char::Purge(); // 41
		CDwarfVector<char::~CDwarfVector(); // 5309
		CDwarfVector<unsigned char>::Purge(); // 41
		CDwarfVector<unsigned char>::~CDwarfVector(); // 5309
	}
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 5317
} /* size: 2363, variables: 5, inline expansions: 5 (87 bytes) */

// <00439BD8> ../common/dwarf_symbols.cpp:5075
// variables: 27
void CDwarfModule::ParseSourceLines()
{
	CPathBufferString tmpPath; // 5088
	uint32 nTotalLineEntries; // 5089
	uint32 nTotalLineCuRefs; // 5090
	uint8* pTable; // 5092
	uint8* pSectionEnd; // 5093
	{
		uint32 nLineOffset; // 5102
		uint32 nLineSize; // 5103
		uint16 nLineVersion; // 5104
		uint64 nHeaderSize; // 5105
		SLineProgramInfo progInfo; // 5106
		CDwarfVector<unsigned char> pOpcodeSizes; // 5107
		uint32 nDwarfOffsetSize; // 5118
		uint8* pLineEnd; // 5125
		uint8* pProgram; // 5144
		SCompilationUnit* pUnit; // 5185
		CDwarfVector<char*> pIncludesIndex; // 5193
		char* pIncPath; // 5194
		uint32 nHighestRelVirt; // 5291
		{
			uint8* pOpSize; // 5170
			{
				int i; // 5171
			}
		}
		{
			char* pTableName; // 5228
			int nChars; // 5229
			uint64 nIncDir; // 5233
			const char* pDir; // 5240
			{
				int nDirChars; // 5263
				char* pDstName; // 5264
			}
			{
				char* pDstName; // 5274
			}
		}
	}
} /* size: 0, variables: 5 */

// <0044B9A6> ../common/dwarf_symbols.cpp:5319
// variables: 2
// function calls: 2
void CDwarfModule::FindCie(uint32 nInfoOffset)
{
	{
		int i; // 5323
		CDwarfVector<SDwarfCieInfo>::Count(); // 5323
		{
			SDwarfCieInfo* pCie; // 5325
			CDwarfVector<SDwarfCieInfo>::operator[](
					int nIndex);  // 5325
		}
	}
} /* size: 0 */

// <00439B92> ../common/dwarf_symbols.cpp:5319
// variables: 2
void CDwarfModule::FindCie(uint32 nInfoOffset)
{
	{
		int i; // 5323
		{
			SDwarfCieInfo* pCie; // 5325
		}
	}
} /* size: 0 */

// <004394EA> ../common/dwarf_symbols.cpp:5334
// variables: 7
// function calls: 16
void CDwarfModule::ParseCie(uint8* pTable, uint8* pTableEnd, SDwarfCieInfo* pCie)
{
	uint8 nTableVersion; // 5336
	bool bHaveAugData; // 5354
	uint8* pAugStart; // 5355
	uint64 nCodeAlign; // 5389
	int64 nDataAlign; // 5402
	uint64 nReturnReg; // 5415
	{
		uint64 nAugDataBytes; // 5438
		CDwarfModule::DecodeLeb128Full(
				uint8** pBytes);  // 1188
		CDwarfModule::DecodeLeb128(
				uint8** pBytes);  // 5438
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 5344
	CDwarfModule::DecodeLeb128Full(
			uint8** pBytes);  // 1188
	CDwarfModule::DecodeLeb128(
			uint8** pBytes);  // 5389
	CDwarfModule::DecodeSignedLeb128(
				uint8** pBytes);  // 5402
	CDwarfVector<unsigned char>::Count(); // 5460
	CDwarfVector<unsigned char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<unsigned char>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<unsigned char>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<unsigned char>::GetAppendPtr(
			int nCount);  // 168
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<SDwarfUnwindRule>(const SDwarfUnwindRule* pFrom,
						const SDwarfUnwindRule* pFromEnd,
						SDwarfUnwindRule* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 168
	CDwarfVector<unsigned char>::Append(
		const unsigned char* pElt,
		int nCount);  // 5468
} /* size: 1027, variables: 6, inline expansions: 14 (818 bytes) */

// <00439068> ../common/dwarf_symbols.cpp:5474
// variable: 1
// function calls: 12
void CDwarfModule::ParseFde(uint8* pTable, uint8* pTableEnd, SDwarfFdeInfo* pFde)
{
	uint64 nVal64; // 5476
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 5484
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 5501
	CDwarfVector<unsigned char>::Count(); // 5524
	CDwarfVector<unsigned char>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<unsigned char>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<unsigned char>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<unsigned char>::GetAppendPtr(
			int nCount);  // 168
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<SDwarfUnwindRule>(const SDwarfUnwindRule* pFrom,
						const SDwarfUnwindRule* pFromEnd,
						SDwarfUnwindRule* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 168
	CDwarfVector<unsigned char>::Append(
		const unsigned char* pElt,
		int nCount);  // 5532
} /* size: 651, variables: 1, inline expansions: 12 (673 bytes) */

// <0043898A> ../common/dwarf_symbols.cpp:5538
// variables: 15
// function calls: 19
void CDwarfModule::ParseFrameData()
{
	const char* pSectionName; // 5550
	uint8* pTable; // 5576
	uint8* pSectionEnd; // 5577
	{
		uint32 nTableOffset; // 5586
		uint32 nTableSize; // 5587
		uint32 nTableId; // 5588
		uint8* pTableEnd; // 5605
		{
			SDwarfCieInfo* pCie; // 5619
			CDwarfVector<SDwarfCieInfo>::EnsureCapacity(
					int nEntries);  // 98
			CDwarfVector<SDwarfCieInfo>::EnsureCapacity(
					int nEntries);  // 149
			CDwarfVector<SDwarfCieInfo>::GetInsertPtr(
					int nIndex,
					int nCount);  // 160
			CDwarfVector<SDwarfCieInfo>::GetAppendPtr(
					int nCount);  // 5619
		}
		{
			SDwarfCieInfo* pCie; // 5628
			SDwarfFdeInfo* pFde; // 5659
			int nCieIndex; // 5660
			{
				int i; // 5323
				CDwarfVector<SDwarfCieInfo>::Count(); // 5323
				{
					SDwarfCieInfo* pCie; // 5325
					CDwarfVector<SDwarfCieInfo>::operator[](
							int nIndex);  // 5325
				}
			}
			CDwarfModule::FindCie(
				uint32 nInfoOffset);  // 5640
			CDwarfVector<SDwarfFdeInfo>::EnsureCapacity(
					int nEntries);  // 98
			CDwarfVector<SDwarfFdeInfo>::EnsureCapacity(
					int nEntries);  // 149
			CDwarfVector<SDwarfFdeInfo>::GetInsertPtr(
					int nIndex,
					int nCount);  // 160
			CDwarfVector<SDwarfFdeInfo>::GetAppendPtr(
					int nCount);  // 5659
			CDwarfVector<SDwarfCieInfo>::GetIndex(
				const SDwarfCieInfo* pPtr);  // 5660
			{
				int i; // 5323
				CDwarfVector<SDwarfCieInfo>::Count(); // 5323
				{
					SDwarfCieInfo* pCie; // 5325
					CDwarfVector<SDwarfCieInfo>::operator[](
							int nIndex);  // 5325
				}
			}
			CDwarfModule::FindCie(
				uint32 nInfoOffset);  // 5645
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 5592
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 5607
	}
	CDwarfVector<SDwarfFdeInfo>::Count(); // 5676
	CDwarfVector<SDwarfFdeInfo>::Base(); // 5676
} /* size: 1078, variables: 3, inline expansions: 2 (0 bytes) */

// <0043875E> ../common/dwarf_symbols.cpp:5686
// variable: 1
// function calls: 4
void CDwarfModule::UpdateCfiLocation(CDwarfUnwindTable* pTable, CDwarfCfiState* pCfiState, uint32 nRelVirt, bool bAdvance)
{
	uint32 nCurVirt; // 5697
	CDwarfCfiState::GetLocation(); // 5697
	CDwarfCfiState::IsDirty(); // 5730
	CDwarfCfiState::UpdateLocation(
			uint32 nRva);  // 5737
	CDwarfCfiState::SetDirty(
		bool bVal);  // 5741
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <00436EAF> ../common/dwarf_symbols.cpp:5746
// variables: 19
// function calls: 71
void CDwarfModule::ExecuteCfi(CDwarfUnwindTable* pTable, CDwarfCfiState* pCfiState, const SDwarfCieInfo* pCie, uint8* pInstr, uint32 nInstrBytes)
{
	uint8* pInstrEnd; // 5752
	SDwarfUnwindRule* pRule; // 5753
	int64 nI64; // 5754
	uint64 nU64; // 5755
	uint16 nRegister; // 5756
	const char   __FUNCTION__; // 50637
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5762
	}
	{
		uint8 nUpperBits; // 5781
		{
			uint8 nOpCode; // 5841
			CDwarfCfiState::PushRuleState(); // 6138
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 6113
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 5846
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 5870
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 5879
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 6005
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 6014
			{
				int i; // 360
				CDwarfVector<SDwarfUnwindRule>::Count(); // 360
				{
					SDwarfUnwindRule* pCheck; // 362
					CDwarfVector<SDwarfUnwindRule>::operator[](
							int nIndex);  // 362
				}
			}
			FindRule(SDwarfUnwindRuleState* pState,
				uint16 nRuleRegister);  // 182
			CDwarfCfiState::FindInitRule(
					uint16 nRuleRegister);  // 6122
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 5983
			{
				int i; // 287
				CDwarfVector<SDwarfUnwindRule>::Count(); // 287
				CDwarfVector<SDwarfUnwindRule>::operator[](
						int nIndex);  // 289
			}
			CDwarfCfiState::GetCfaOp(); // 5945
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 5951
			{
				int i; // 299
				CDwarfVector<SDwarfUnwindRule>::operator[](
						int nIndex);  // 301
			}
			CDwarfCfiState::GetCfaRefRegister(); // 5958
			CDwarfVector<SDwarfUnwindRule>::Purge(); // 41
			CDwarfVector<SDwarfUnwindRule>::~CDwarfVector(); // 154
			SDwarfUnwindRuleState::~SDwarfUnwindRuleState(); // 337
			CDwarfCfiState::PopRuleState(); // 6142
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 5908
			CDwarfModule::DecodeSignedLeb128(
						uint8** pBytes);  // 5917
			{
				int i; // 287
				CDwarfVector<SDwarfUnwindRule>::Count(); // 287
				CDwarfVector<SDwarfUnwindRule>::operator[](
						int nIndex);  // 289
			}
			CDwarfCfiState::GetCfaOp(); // 5962
			CDwarfModule::DecodeSignedLeb128(
						uint8** pBytes);  // 5968
			{
				int i; // 299
				CDwarfVector<SDwarfUnwindRule>::operator[](
						int nIndex);  // 301
			}
			CDwarfCfiState::GetCfaRefRegister(); // 5975
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 6045
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 6054
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 6065
			CDwarfModule::DecodeSignedLeb128(
						uint8** pBytes);  // 6074
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 6025
			CDwarfModule::DecodeSignedLeb128(
						uint8** pBytes);  // 6034
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 5994
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 5888
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 5897
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 6085
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 6094
			{
				int i; // 287
				CDwarfVector<SDwarfUnwindRule>::Count(); // 287
				CDwarfVector<SDwarfUnwindRule>::operator[](
						int nIndex);  // 289
			}
			CDwarfCfiState::GetCfaOp(); // 5928
			CDwarfModule::DecodeLeb128Full(
					uint8** pBytes);  // 1188
			CDwarfModule::DecodeLeb128(
					uint8** pBytes);  // 5934
			{
				int i; // 311
				CDwarfVector<SDwarfUnwindRule>::operator[](
						int nIndex);  // 313
			}
			CDwarfCfiState::GetCfaOffset(); // 5941
		}
		{
			int i; // 360
			CDwarfVector<SDwarfUnwindRule>::Count(); // 360
			{
				SDwarfUnwindRule* pCheck; // 362
				CDwarfVector<SDwarfUnwindRule>::operator[](
						int nIndex);  // 362
			}
		}
		FindRule(SDwarfUnwindRuleState* pState,
			uint16 nRuleRegister);  // 182
		CDwarfCfiState::FindInitRule(
				uint16 nRuleRegister);  // 5823
		CDwarfModule::DecodeLeb128Full(
				uint8** pBytes);  // 1188
		CDwarfModule::DecodeLeb128(
				uint8** pBytes);  // 5809
	}
	CDwarfCfiState::IsDirty(); // 5762
	CDwarfCfiState::IsDirty(); // 6166
} /* size: 0, variables: 6, inline expansions: 2 (0 bytes) */

// <00436D91> ../common/dwarf_symbols.cpp:6175
// variable: 1
void CDwarfModule::ReadSectionData(SModuleSection* pSection)
{
	uint32 nOffset; // 6179
} /* size: 194, variables: 1 */

// <00436D05> ../common/dwarf_symbols.cpp:6199
// variables: 3
void CDwarfModule::ReadAllSectionData()
{
	{
		int i; // 6214
		{
			SModuleSection* pSection; // 6216
			EOpenResult result; // 6225
		}
	}
} /* size: 150 */

// <00436BDA> ../common/dwarf_symbols.cpp:6245
// function calls: 2
void CDwarfModule::ProcessDebugInfo()
{
	CDwarfModule::ParseCompilationUnits(); // 6260
	CDwarfModule::ParseSourceLines(); // 6261
} /* size: 107, inline expansions: 2 (22 bytes) */

// <00432A3A> ../common/dwarf_symbols.cpp:6277
// variables: 7
void CDwarfModule::ProcessElfSymbolTable<Elf32_Sym>(const SSymbolTableCuDesc* pTableDesc)
{
	SCompilationUnit* pUnit; // 6279
	Elf32_Sym* pSymbol; // 6280
	Elf32_Sym* pSymbolsEnd; // 6281
	char* pStrings; // 6282
	uint32 nStringSize; // 6283
	{
		EDwarfSymbolKind eSymKind; // 6294
		{
			const char* pName; // 6311
		}
	}
} /* size: 0, variables: 5 */

// <004329A6> ../common/dwarf_symbols.cpp:6277
// variables: 7
void CDwarfModule::ProcessElfSymbolTable<Elf64_Sym>(const SSymbolTableCuDesc* pTableDesc)
{
	SCompilationUnit* pUnit; // 6279
	Elf64_Sym* pSymbol; // 6280
	Elf64_Sym* pSymbolsEnd; // 6281
	char* pStrings; // 6282
	uint32 nStringSize; // 6283
	{
		EDwarfSymbolKind eSymKind; // 6294
		{
			const char* pName; // 6311
		}
	}
} /* size: 0, variables: 5 */

// <00432912> ../common/dwarf_symbols.cpp:6355
// variables: 7
void CDwarfModule::ProcessMachoSymbolTable<nlist>(const SSymbolTableCuDesc* pTableDesc)
{
	SCompilationUnit* pUnit; // 6357
	nlist* pSymbol; // 6358
	nlist* pSymbolsEnd; // 6359
	char* pStrings; // 6360
	uint32 nStringSize; // 6361
	{
		EDwarfSymbolKind eSymKind; // 6370
		{
			const char* pName; // 6383
		}
	}
} /* size: 0, variables: 5 */

// <0043287E> ../common/dwarf_symbols.cpp:6355
// variables: 7
void CDwarfModule::ProcessMachoSymbolTable<nlist_64>(const SSymbolTableCuDesc* pTableDesc)
{
	SCompilationUnit* pUnit; // 6357
	nlist_64* pSymbol; // 6358
	nlist_64* pSymbolsEnd; // 6359
	char* pStrings; // 6360
	uint32 nStringSize; // 6361
	{
		EDwarfSymbolKind eSymKind; // 6370
		{
			const char* pName; // 6383
		}
	}
} /* size: 0, variables: 5 */

// <0044BA77> ../common/dwarf_symbols.cpp:6428
// variables: 3
void CDwarfModule::ProcessSymbolTables()
{
	EOpenResult result; // 6440
	int nFound; // 6441
	int nSymbols; // 6442
} /* size: 0, variables: 3 */

// <0044A9EB> ../common/dwarf_symbols.cpp:6428
// variables: 13
// function calls: 42
void CDwarfModule::ProcessSymbolTables()
{
	EOpenResult result; // 6440
	int nFound; // 6441
	int nSymbols; // 6442
	{
		int i; // 6444
		{
			const SSymbolTableCuDesc* pDesc; // 6446
			CDwarfVector<CDwarfModule::SRelVirtRange>::Clear(); // 6548
			CDwarfVector<CDwarfModule::SAbbrevCode>::Clear(); // 6549
			CDwarfVector<CDwarfModule::SAbbrevEntry>::Clear(); // 6550
			CDwarfVector<CDwarfModule::SSymbol>::Clear(); // 6551
			CDwarfVector<char>::Clear(); // 6552
			CDwarfVector<unsigned int>::Clear(); // 6553
			CDwarfVector<CDwarfModule::SSourceLine>::Clear(); // 6554
			SCompilationUnit::Clear(); // 6285
			{
				EDwarfSymbolKind eSymKind; // 6294
				{
					const char* pName; // 6311
				}
			}
			CDwarfModule::ProcessElfSymbolTable<Elf64_Sym>(
							const SSymbolTableCuDesc* pTableDesc);  // 6463
			CDwarfVector<CDwarfModule::SRelVirtRange>::Clear(); // 6548
			CDwarfVector<CDwarfModule::SAbbrevCode>::Clear(); // 6549
			CDwarfVector<CDwarfModule::SAbbrevEntry>::Clear(); // 6550
			CDwarfVector<CDwarfModule::SSymbol>::Clear(); // 6551
			CDwarfVector<char>::Clear(); // 6552
			CDwarfVector<unsigned int>::Clear(); // 6553
			CDwarfVector<CDwarfModule::SSourceLine>::Clear(); // 6554
			SCompilationUnit::Clear(); // 6363
			{
				EDwarfSymbolKind eSymKind; // 6370
				CDwarfVector<EDwarfSymbolKind>::Count(); // 6372
				CDwarfVector<EDwarfSymbolKind>::operator[](
						int nIndex);  // 6374
				{
					const char* pName; // 6383
				}
			}
			CDwarfVector<CDwarfModule::SSymbol>::Count(); // 6411
			CDwarfVector<CDwarfModule::SSymbol>::Base(); // 6411
			CDwarfModule::ProcessMachoSymbolTable<nlist_64>(
								const SSymbolTableCuDesc* pTableDesc);  // 6477
			CDwarfVector<CDwarfModule::SRelVirtRange>::Clear(); // 6548
			CDwarfVector<CDwarfModule::SAbbrevCode>::Clear(); // 6549
			CDwarfVector<CDwarfModule::SAbbrevEntry>::Clear(); // 6550
			CDwarfVector<CDwarfModule::SSymbol>::Clear(); // 6551
			CDwarfVector<char>::Clear(); // 6552
			CDwarfVector<unsigned int>::Clear(); // 6553
			CDwarfVector<CDwarfModule::SSourceLine>::Clear(); // 6554
			SCompilationUnit::Clear(); // 6363
			{
				EDwarfSymbolKind eSymKind; // 6370
				CDwarfVector<EDwarfSymbolKind>::Count(); // 6372
				CDwarfVector<EDwarfSymbolKind>::operator[](
						int nIndex);  // 6374
				{
					const char* pName; // 6383
				}
			}
			CDwarfModule::ProcessMachoSymbolTable<nlist>(
							const SSymbolTableCuDesc* pTableDesc);  // 6470
			CDwarfVector<CDwarfModule::SRelVirtRange>::Clear(); // 6548
			CDwarfVector<CDwarfModule::SAbbrevCode>::Clear(); // 6549
			CDwarfVector<CDwarfModule::SAbbrevEntry>::Clear(); // 6550
			CDwarfVector<CDwarfModule::SSymbol>::Clear(); // 6551
			CDwarfVector<char>::Clear(); // 6552
			CDwarfVector<unsigned int>::Clear(); // 6553
			CDwarfVector<CDwarfModule::SSourceLine>::Clear(); // 6554
			SCompilationUnit::Clear(); // 6285
			{
				EDwarfSymbolKind eSymKind; // 6294
				{
					const char* pName; // 6311
				}
			}
			CDwarfModule::ProcessElfSymbolTable<Elf32_Sym>(
							const SSymbolTableCuDesc* pTableDesc);  // 6456
		}
	}
} /* size: 2243, variables: 3 */

// <00436B7A> ../common/dwarf_symbols.cpp:6428
// variables: 5
void CDwarfModule::ProcessSymbolTables()
{
	EOpenResult result; // 6440
	int nFound; // 6441
	int nSymbols; // 6442
	{
		int i; // 6444
		{
			const SSymbolTableCuDesc* pDesc; // 6446
		}
	}
} /* size: 0, variables: 3 */

// <0044BACB> ../common/dwarf_symbols.cpp:6498
// variables: 2
void CDwarfModule::DecodeLeb128Full(uint8** pBytes)
{
	uint64 nVal; // 6500
	int nShift; // 6501
} /* size: 0, variables: 2 */

// <00436ABF> ../common/dwarf_symbols.cpp:6518
// variables: 2
void CDwarfModule::DecodeSignedLeb128Full(uint8** pBytes)
{
	uint64 nVal; // 6520
	int nShift; // 6521
} /* size: 142, variables: 2 */

// <0044BB21> ../common/dwarf_symbols.cpp:6542
// function calls: 7
void SCompilationUnit::Clear()
{
	CDwarfVector<CDwarfModule::SRelVirtRange>::Clear(); // 6548
	CDwarfVector<CDwarfModule::SAbbrevCode>::Clear(); // 6549
	CDwarfVector<CDwarfModule::SAbbrevEntry>::Clear(); // 6550
	CDwarfVector<CDwarfModule::SSymbol>::Clear(); // 6551
	CDwarfVector<char>::Clear(); // 6552
	CDwarfVector<unsigned int>::Clear(); // 6553
	CDwarfVector<CDwarfModule::SSourceLine>::Clear(); // 6554
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00436AA2> ../common/dwarf_symbols.cpp:6542
void SCompilationUnit::Clear()
{
} /* size: 0 */

// <00436677> ../common/dwarf_symbols.cpp:6563
// function calls: 21
void SCompilationUnit::Purge()
{
	CDwarfVector<CDwarfModule::SRelVirtRange>::Clear(); // 95
	CDwarfVector<CDwarfModule::SRelVirtRange>::Purge(); // 6565
	CDwarfVector<CDwarfModule::SAbbrevCode>::Clear(); // 95
	CDwarfVector<CDwarfModule::SAbbrevCode>::Purge(); // 6566
	CDwarfVector<CDwarfModule::SAbbrevEntry>::Clear(); // 95
	CDwarfVector<CDwarfModule::SAbbrevEntry>::Purge(); // 6567
	CDwarfVector<CDwarfModule::SSymbol>::Clear(); // 95
	CDwarfVector<CDwarfModule::SSymbol>::Purge(); // 6568
	CDwarfVector<char>::Clear(); // 95
	CDwarfVector<char>::Purge(); // 6569
	CDwarfVector<unsigned int>::Clear(); // 95
	CDwarfVector<unsigned int>::Purge(); // 6570
	CDwarfVector<CDwarfModule::SSourceLine>::Purge(); // 6571
	CDwarfVector<CDwarfModule::SRelVirtRange>::Clear(); // 6548
	CDwarfVector<CDwarfModule::SAbbrevCode>::Clear(); // 6549
	CDwarfVector<CDwarfModule::SAbbrevEntry>::Clear(); // 6550
	CDwarfVector<CDwarfModule::SSymbol>::Clear(); // 6551
	CDwarfVector<char>::Clear(); // 6552
	CDwarfVector<unsigned int>::Clear(); // 6553
	CDwarfVector<CDwarfModule::SSourceLine>::Clear(); // 6554
	SCompilationUnit::Clear(); // 6573
} /* size: 325, inline expansions: 21 (511 bytes) */

// <00436523> ../common/dwarf_symbols.cpp:6576
// variable: 1
// function calls: 4
void SCompilationUnit::AddVirtRange(uint32 nStart, uint32 nEnd)
{
	SRelVirtRange* pRange; // 6582
	CDwarfVector<CDwarfModule::SRelVirtRange>::EnsureCapacity(
			int nEntries);  // 98
	CDwarfVector<CDwarfModule::SRelVirtRange>::EnsureCapacity(
			int nEntries);  // 149
	CDwarfVector<CDwarfModule::SRelVirtRange>::GetInsertPtr(
			int nIndex,
			int nCount);  // 160
	CDwarfVector<CDwarfModule::SRelVirtRange>::GetAppendPtr(
			int nCount);  // 6582
} /* size: 190, variables: 1, inline expansions: 4 (345 bytes) */


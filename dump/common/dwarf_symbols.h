
//
// common/dwarf_symbols.h
//
//	referenced by: libtier0.so
//
//	functions: 44
//	classes: 4
//	structs: 7
//

// <00419A7F> ../common/dwarf_symbols.h:34
// member functions: 4
// member variables: 5
// struct size: 24
struct SDwarfSymbolInfo {
	const char * pName; /* 0 8 */
	uint32 nRelVirtStart; /* 8 4 */
	uint32 nRelVirtEnd; /* 12 4 */
	EDwarfSymbolKind eKind; /* 16 1 */
	int nCompilationUnit; /* 20 4 */
	/* ../common/dwarf_symbols.h:42 */
	bool IsEqualVirt(const SDwarfSymbolInfo* , const SDwarfSymbolInfo* );
	/* ../common/dwarf_symbols.h:47 */
	bool OverlapsVirt(const SDwarfSymbolInfo* , const SDwarfSymbolInfo* );
	/* ../common/dwarf_symbols.h:52 */
	bool IsEqual(const SDwarfSymbolInfo* , const SDwarfSymbolInfo* );
	/* ../common/dwarf_symbols.h:63 */
	bool IsEqualOrNested(const SDwarfSymbolInfo* , const SDwarfSymbolInfo* , bool* );
};

// <00419B82> ../common/dwarf_symbols.h:67
// member variables: 6
// struct size: 32
struct SDwarfSourceLineInfo {
	const char * pFileName; /* 0 8 */
	uint32 nFileLine; /* 8 4 */
	uint32 nRelVirtStart; /* 12 4 */
	uint32 nRelVirtEnd; /* 16 4 */
	int nCompilationUnit; /* 20 4 */
	int nCuFileIndex; /* 24 4 */
};

// <00419BEF> ../common/dwarf_symbols.h:77
// member variables: 7
// struct size: 16
struct SDwarfCieInfo {
	uint32 nInfoOffset; /* 0 4 */
	uint8 nCodeAlign; /* 4 1 */
	int8 nDataAlign; /* 5 1 */
	uint16 nReturnReg; /* 6 2 */
	uint32 nInitialInstrOffset; /* 8 4 */
	uint16 nInitialInstrBytes; /* 12 2 */
	uint8 ptrEncoding; /* 14 1 */
};

// <00419C6B> ../common/dwarf_symbols.h:90
// member variables: 5
// struct size: 16
struct SDwarfFdeInfo {
	uint32 nRelVirtStart; /* 0 4 */
	uint32 nRelVirtEnd; /* 4 4 */
	uint32 nInstrOffset; /* 8 4 */
	uint16 nInstrBytes; /* 12 2 */
	uint16 nCieIndex; /* 14 2 */
};

// <00419D0C> ../common/dwarf_symbols.h:128
// member variables: 5
// struct size: 12
struct SDwarfUnwindRule {
	uint16 nRuleRegister; /* 0 2 */
	uint16 nSetInRow; /* 2 2 */
	uint16 op; /* 4 2 */
	uint16 nRefRegister; /* 6 2 */
	int32 nOffset; /* 8 4 */
};

// <00419D69> ../common/dwarf_symbols.h:142
// member variables: 3
// struct size: 8
struct SDwarfUnwindRuleSet {
	uint32 nRelVirtStart; /* 0 4 */
	uint16 nRulesIndex; /* 4 2 */
	uint16 nNumRules; /* 6 2 */
};

// <0044871C> ../common/dwarf_symbols.h:154
void SDwarfUnwindRuleState::SDwarfUnwindRuleState()
{
} /* size: 0 */

// <004486FF> ../common/dwarf_symbols.h:154
inline void SDwarfUnwindRuleState::SDwarfUnwindRuleState()
{
} /* size: 0 */

// <00448613> ../common/dwarf_symbols.h:154
void SDwarfUnwindRuleState::~SDwarfUnwindRuleState()
{
} /* size: 0 */

// <004485F6> ../common/dwarf_symbols.h:154
inline void SDwarfUnwindRuleState::~SDwarfUnwindRuleState()
{
} /* size: 0 */

// <0041A149> ../common/dwarf_symbols.h:154
// member variables: 3
// struct size: 32
struct SDwarfUnwindRuleState {
	SDwarfUnwindRuleSet ruleSet; /* 0 8 */
	DwarfUnwindRuleVector_t ruleStorage; /* 8 16 */
	SDwarfUnwindRuleState * pNext; /* 24 8 */
};

// <0041A18A> ../common/dwarf_symbols.h:161
// member functions: 40
// member variables: 4
// class size: 24
class CDwarfCfiState {
	/* ../common/dwarf_symbols.h:164 */
	void CDwarfCfiState(CDwarfCfiState* );
	/* ../common/dwarf_symbols.h:165 */
	void ~CDwarfCfiState(CDwarfCfiState* );
	/* ../common/dwarf_symbols.h:167 */
	uint32 GetLocation(const CDwarfCfiState* );
	/* ../common/dwarf_symbols.h:171 */
	void UpdateLocation(CDwarfCfiState* , uint32);
	/* ../common/dwarf_symbols.h:176 */
	SDwarfUnwindRule* FindRule(CDwarfCfiState* , uint16);
	/* ../common/dwarf_symbols.h:180 */
	SDwarfUnwindRule* FindInitRule(CDwarfCfiState* , uint16);
	/* ../common/dwarf_symbols.h:184 */
	uint16 UpdateRule(CDwarfCfiState* , uint16, uint16, uint16, int32);
	/* ../common/dwarf_symbols.h:185 */
	void ClearRules(CDwarfCfiState* );
	/* ../common/dwarf_symbols.h:187 */
	uint16 GetCurRowIndex(const CDwarfCfiState* );
	/* ../common/dwarf_symbols.h:191 */
	void AdvanceCurRowIndex(CDwarfCfiState* );
	/* ../common/dwarf_symbols.h:196 */
	EDwarfUnwindOp GetCfaOp(const CDwarfCfiState* );
	/* ../common/dwarf_symbols.h:197 */
	uint16 GetCfaRefRegister(const CDwarfCfiState* );
	/* ../common/dwarf_symbols.h:198 */
	int32 GetCfaOffset(const CDwarfCfiState* );
	/* ../common/dwarf_symbols.h:200 */
	void PushRuleState(CDwarfCfiState* );
	/* ../common/dwarf_symbols.h:201 */
	bool PopRuleState(CDwarfCfiState* );
	/* ../common/dwarf_symbols.h:203 */
	void SetInitRuleState(CDwarfCfiState* );
	/* ../common/dwarf_symbols.h:205 */
	bool IsDirty(const CDwarfCfiState* );
	/* ../common/dwarf_symbols.h:209 */
	void SetDirty(CDwarfCfiState* , bool);
protected:
	/* ../common/dwarf_symbols.h:215 */
	SDwarfUnwindRule* FindRule(SDwarfUnwindRuleState* , uint16);
	/* ../common/dwarf_symbols.h:216 */
	SDwarfUnwindRuleState* CopyRuleState(CDwarfCfiState* );
	SDwarfUnwindRuleState * m_pRuleState; /* 0 8 */
	SDwarfUnwindRuleState * m_pInitRuleState; /* 8 8 */
	uint16 m_nCurRowIndex; /* 16 2 */
	bool m_bRuleSetDirty; /* 18 1 */
	void CDwarfCfiState(class CDwarfCfiState *); /* linkage=_ZN14CDwarfCfiStateC4Ev */
	void ~CDwarfCfiState(class CDwarfCfiState *); /* linkage=_ZN14CDwarfCfiStateD4Ev */
	uint32 GetLocation(const class CDwarfCfiState  *); /* linkage=_ZNK14CDwarfCfiState11GetLocationEv */
	void UpdateLocation(class CDwarfCfiState *, uint32); /* linkage=_ZN14CDwarfCfiState14UpdateLocationEj */
	class SDwarfUnwindRule * FindRule(class CDwarfCfiState *, uint16); /* linkage=_ZN14CDwarfCfiState8FindRuleEt */
	class SDwarfUnwindRule * FindInitRule(class CDwarfCfiState *, uint16); /* linkage=_ZN14CDwarfCfiState12FindInitRuleEt */
	uint16 UpdateRule(class CDwarfCfiState *, uint16, uint16, uint16, int32); /* linkage=_ZN14CDwarfCfiState10UpdateRuleEttti */
	void ClearRules(class CDwarfCfiState *); /* linkage=_ZN14CDwarfCfiState10ClearRulesEv */
	uint16 GetCurRowIndex(const class CDwarfCfiState  *); /* linkage=_ZNK14CDwarfCfiState14GetCurRowIndexEv */
	void AdvanceCurRowIndex(class CDwarfCfiState *); /* linkage=_ZN14CDwarfCfiState18AdvanceCurRowIndexEv */
	/* <4494d9> ../common/dwarf_symbols.cpp:285 */
	enum EDwarfUnwindOp GetCfaOp(const class CDwarfCfiState  *); /* linkage=_ZNK14CDwarfCfiState8GetCfaOpEv */
	/* <44958c> ../common/dwarf_symbols.cpp:297 */
	uint16 GetCfaRefRegister(const class CDwarfCfiState  *); /* linkage=_ZNK14CDwarfCfiState17GetCfaRefRegisterEv */
	/* <44963f> ../common/dwarf_symbols.cpp:309 */
	int32 GetCfaOffset(const class CDwarfCfiState  *); /* linkage=_ZNK14CDwarfCfiState12GetCfaOffsetEv */
	/* <4498bc> ../common/dwarf_symbols.cpp:321 */
	void PushRuleState(class CDwarfCfiState *); /* linkage=_ZN14CDwarfCfiState13PushRuleStateEv */
	/* <4496f2> ../common/dwarf_symbols.cpp:328 */
	bool PopRuleState(class CDwarfCfiState *); /* linkage=_ZN14CDwarfCfiState12PopRuleStateEv */
	/* <44990d> ../common/dwarf_symbols.cpp:343 */
	void SetInitRuleState(class CDwarfCfiState *); /* linkage=_ZN14CDwarfCfiState16SetInitRuleStateEv */
	bool IsDirty(const class CDwarfCfiState  *); /* linkage=_ZNK14CDwarfCfiState7IsDirtyEv */
	void SetDirty(class CDwarfCfiState *, bool); /* linkage=_ZN14CDwarfCfiState8SetDirtyEb */
	/* <4497eb> ../common/dwarf_symbols.cpp:353 */
	class SDwarfUnwindRule * FindRule(class SDwarfUnwindRuleState *, uint16); /* linkage=_ZN14CDwarfCfiState8FindRuleEP21SDwarfUnwindRuleStatet */
	class SDwarfUnwindRuleState * CopyRuleState(class CDwarfCfiState *); /* linkage=_ZN14CDwarfCfiState13CopyRuleStateEv */
};

// <00448D43> ../common/dwarf_symbols.h:167
inline void CDwarfCfiState::GetLocation()
{
} /* size: 0 */

// <00448D1E> ../common/dwarf_symbols.h:171
inline void CDwarfCfiState::UpdateLocation(uint32 nRva)
{
} /* size: 0 */

// <00448CF9> ../common/dwarf_symbols.h:176
inline void CDwarfCfiState::FindRule(uint16 nRuleRegister)
{
} /* size: 0 */

// <00448CD4> ../common/dwarf_symbols.h:180
inline void CDwarfCfiState::FindInitRule(uint16 nRuleRegister)
{
} /* size: 0 */

// <00448CBB> ../common/dwarf_symbols.h:191
inline void CDwarfCfiState::AdvanceCurRowIndex()
{
} /* size: 0 */

// <00448CA2> ../common/dwarf_symbols.h:205
inline void CDwarfCfiState::IsDirty()
{
} /* size: 0 */

// <00448C7D> ../common/dwarf_symbols.h:209
inline void CDwarfCfiState::SetDirty(bool bVal)
{
} /* size: 0 */

// <0041A81C> ../common/dwarf_symbols.h:226
// member functions: 6
// member variables: 4
// class size: 40
class CDwarfUnwindTable {
	/* ../common/dwarf_symbols.h:229 */
	void CDwarfUnwindTable(CDwarfUnwindTable* );
	/* ../common/dwarf_symbols.h:231 */
	void Empty(CDwarfUnwindTable* );
	/* ../common/dwarf_symbols.h:233 */
	void AddRow(CDwarfUnwindTable* , CDwarfCfiState* );
	uint32 m_nRelVirtStart; /* 0 4 */
	uint32 m_nRelVirtEnd; /* 4 4 */
	CDwarfVector<SDwarfUnwindRuleSet> m_ruleSets; /* 8 16 */
	DwarfUnwindRuleVector_t m_ruleStorage; /* 24 16 */
	void CDwarfUnwindTable(class CDwarfUnwindTable *); /* linkage=_ZN17CDwarfUnwindTableC4Ev */
	/* <44998d> ../common/dwarf_symbols.cpp:388 */
	void Empty(class CDwarfUnwindTable *); /* linkage=_ZN17CDwarfUnwindTable5EmptyEv */
	void AddRow(class CDwarfUnwindTable *, class CDwarfCfiState *); /* linkage=_ZN17CDwarfUnwindTable6AddRowEP14CDwarfCfiState */
};

// <0041A91D> ../common/dwarf_symbols.h:253
// member functions: 275
// member variables: 46
// static member variables: 4
// class size: 1,160
class CDwarfModule {
	/* ../common/dwarf_symbols.h:259 */
	enum {
		k_EInfoType_None = 0,
		k_EInfoType_Sections = 1,
		k_EInfoType_CompilationUnits = 2,
		k_EInfoType_SourceFiles = 4,
		k_EInfoType_SourceLines = 8,
		k_EInfoType_CodeSymbols = 16,
		k_EInfoType_DataSymbols = 32,
		k_EInfoType_OtherSymbols = 64,
		k_EInfoType_PublicCodeSymbols = 128,
		k_EInfoType_PublicDataSymbols = 256,
		k_EInfoType_PublicOtherSymbols = 512,
		k_EInfoType_AllDebugSymbolKinds = 112,
		k_EInfoType_AllPublicSymbolKinds = 896,
		k_EInfoType_AllSymbolKinds = 1008,
		k_EInfoType_SymbolsAndSource = 1023,
		k_EInfoType_StackFrameData = 1024,
		k_EInfoType_All = 4294967295,
	};
	/* ../common/dwarf_symbols.h:294 */
	enum EOpenResult {
		k_EOpenResult_Success = 0,
		k_EOpenResult_Unknown = 129,
		k_EOpenResult_InvalidDebugInfo = 130,
		k_EOpenResult_InvalidFormat = 131,
		k_EOpenResult_NoDebugInfo = 132,
		k_EOpenResult_DebugInfoMismatch = 133,
		k_EOpenResult_NoDebugIdentity = 134,
		k_EOpenResult_FileNotFound = 135,
		k_EOpenResult_SplitFileNotFound = 136,
		k_EOpenResult_InternalError = 137,
		k_EOpenResult_Unsupported = 138,
		k_EOpenResult_IoError = 139,
	};
	/* ../common/dwarf_symbols.h:379 */
	enum EBinaryFormat {
		EFmtInvalid = 0,
		EFmtElf32 = 1,
		EFmtElf64 = 2,
		EFmtMacho32 = 3,
		EFmtMacho64 = 4,
	};
	/* ../common/dwarf_symbols.h:388 */
	enum ECpuArch {
		ECpuArchInvalid = 0,
		ECpuArchX86 = 1,
		ECpuArchX86_64 = 2,
		ECpuArchARM = 3,
		ECpuArchARM_64 = 4,
	};
	/* ../common/dwarf_symbols.h:592 */
	union {
		uint8 m_anyHdr; /* 0 1 */
		Elf32_Ehdr m_elfHdr32; /* 0 52 */
		Elf64_Ehdr m_elfHdr64; /* 0 64 */
		mach_header m_machoHdr32; /* 0 28 */
		mach_header_64 m_machoHdr64; /* 0 32 */
	};
	/* ../common/dwarf_symbols.h:616 */
	enum EModuleSection {
		ESectionDebugInfo = 0,
		ESectionDebugAbbrev = 1,
		ESectionDebugStr = 2,
		ESectionDebugLine = 3,
		ESectionDebugRanges = 4,
		ESectionDebugAranges = 5,
		ESectionDebugPubNames = 6,
		ESectionDebugFrame = 7,
		ESectionEhFrame = 8,
		ESectionUnwindInfo = 9,
		ESectionSymTab = 10,
		ESectionStrTab = 11,
		ESectionDynSym = 12,
		ESectionDynStr = 13,
		EModuleSectionCount = 14,
	};
	/* ../common/dwarf_symbols.h:645 */
	struct SModuleSectionDesc {
		const char * pName; /* 0 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:652 */
	struct SModuleSection {
		uint32 nFileOffset; /* 0 4 */
		uint32 nSize; /* 4 4 */
		uint8 * pData; /* 8 8 */
		/* ../common/dwarf_symbols.h:658 */
		size_t GetMemHeld(const SModuleSection* , size_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:704 */
	struct SDebugInfoEntry {
		uint32 nInfoOffset; /* 0 4 */
		uint32 nSpecOffset; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:715 */
	struct SAbbrevCode {
		uint32 nTag:31; /* 0: 0 4 */
		uint32 bChildren:1; /* 0:31 4 */
		uint32 nEntriesOffset; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:722 */
	struct SAbbrevEntry {
		uint16 nAttr; /* 0 2 */
		uint16 nForm; /* 2 2 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:728 */
	struct SSymbol {
		uint32 nRelVirtStart; /* 0 4 */
		uint32 nRelVirtEnd; /* 4 4 */
		uint32 nNameOffset; /* 8 4 */
		EDwarfSymbolKind eKind; /* 12 1 */
		/* ../common/dwarf_symbols.h:736 */
		bool HasAddress(const SSymbol* );
		/* ../common/dwarf_symbols.h:741 */
		bool HasRange(const SSymbol* );
		/* ../common/dwarf_symbols.h:745 */
		bool HasName(const SSymbol* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:785 */
	struct SIncompleteSymbol {
		uint32 nCuIndex:31; /* 0: 0 4 */
		uint32 bHasOriginOffset:1; /* 0:31 4 */
		uint32 nSymbolIndex; /* 4 4 */
		uint32 nRefOffset; /* 8 4 */
		NameRef_t nAltNameRef; /* 12 4 */
	};
	/* ../common/dwarf_symbols.h:684 */
	typedef uint32 NameRef_t;
	/* ../common/dwarf_symbols.h:832 */
	struct SSourceLine {
		uint32 nRelVirtStart; /* 0 4 */
		uint32 nRelVirtEnd; /* 4 4 */
		uint32 nFileNameIndex; /* 8 4 */
		uint32 nLine; /* 12 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:864 */
	struct SRelVirtRange {
		uint32 nRelVirtStart; /* 0 4 */
		uint32 nRelVirtEnd; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:871 */
	struct SCompilationUnit {
		uint32 nDwarfOffsetSize; /* 0 4 */
		uint32 nDwarfRefAddrSize; /* 4 4 */
		CDwarfVector<CDwarfModule::SRelVirtRange> pVirtRangesRaw; /* 8 16 */
		uint32 nRelVirtStart; /* 24 4 */
		uint32 nRelVirtEnd; /* 28 4 */
		CDwarfVector<CDwarfModule::SAbbrevCode> pAbbrevIndex; /* 32 16 */
		CDwarfVector<CDwarfModule::SAbbrevEntry> pAbbrevEntries; /* 48 16 */
		CDwarfVector<CDwarfModule::SSymbol> pSymbols; /* 64 16 */
		CDwarfVector<char> pFileNames; /* 80 16 */
		CDwarfVector<unsigned int> pFileNameIndex; /* 96 16 */
		CDwarfVector<CDwarfModule::SSourceLine> pSourceLines; /* 112 16 */
		uint32 nHeaderOffset; /* 128 4 */
		uint32 nEntriesOffset; /* 132 4 */
		uint32 nEntriesSize; /* 136 4 */
		uint32 nAbbrevOffset; /* 140 4 */
		uint32 nLineOffset; /* 144 4 */
		uint32 nCompileDirIndex; /* 148 4 */
		/* ../common/dwarf_symbols.h:908 */
		void Clear(SCompilationUnit* );
		/* ../common/dwarf_symbols.h:909 */
		void Purge(SCompilationUnit* );
		/* ../common/dwarf_symbols.h:911 */
		bool AddVirtRange(SCompilationUnit* , uint32, uint32);
		/* ../common/dwarf_symbols.h:913 */
		size_t GetMemHeld(const SCompilationUnit* , size_t* );
		/* ../common/dwarf_symbols.h:915 */
		const char* GetCompileDir(const SCompilationUnit* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:923 */
	enum EPseudoCompilationUnit {
		EPseudoCuSymTab = 0,
		EPseudoCuDynSym = 1,
		EPseudoCuCount = 2,
	};
	/* ../common/dwarf_symbols.h:935 */
	struct SSymbolTableCuDesc {
		EPseudoCompilationUnit nPseudoCu; /* 0 4 */
		EModuleSection nTableSection; /* 4 4 */
		EModuleSection nStringSection; /* 8 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:944 */
	struct SAddrToCompilationUnit {
		uint32 nRelVirtStart; /* 0 4 */
		uint32 nRelVirtEnd; /* 4 4 */
		int nCompilationUnit; /* 8 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:1021 */
	struct SLineProgramInfo {
		uint8 nMinInstrSize; /* 0 1 */
		uint8 nMaxInstrSize; /* 1 1 */
		uint8 nDefaultIsStmt; /* 2 1 */
		int8 nLineBase; /* 3 1 */
		uint8 nLineRange; /* 4 1 */
		uint8 nOpcodeBase; /* 5 1 */
	};
	/* ../common/dwarf_symbols.h:256 */
	void CDwarfModule(CDwarfModule* );
	/* ../common/dwarf_symbols.h:257 */
	void ~CDwarfModule(CDwarfModule* );
	/* ../common/dwarf_symbols.h:284 */
	bool Init(CDwarfModule* , const char* , uint32, uint64, uint32, uint8, const void* , uint32, uint32);
	/* ../common/dwarf_symbols.h:292 */
	void Purge(CDwarfModule* );
	/* ../common/dwarf_symbols.h:316 */
	EOpenResult OpenAndParse(CDwarfModule* , const char* );
	/* ../common/dwarf_symbols.h:317 */
	void Close(CDwarfModule* );
	static const uint32 k_AllSymbolKindMask = 4294967295; /* 0 0 */
	/* ../common/dwarf_symbols.h:321 */
	bool FindSymbol(CDwarfModule* , uint32, uint64, SDwarfSymbolInfo* , uint32* );
	/* ../common/dwarf_symbols.h:325 */
	bool FindSourceLine(CDwarfModule* , uint64, SDwarfSourceLineInfo* , uint32* );
	/* ../common/dwarf_symbols.h:333 */
	void VisitAllSymbols(CDwarfModule* , uint32, pDwarfSymbolVisitor, void* );
	/* ../common/dwarf_symbols.h:344 */
	void VisitAllSourceLines(CDwarfModule* , uint32, pDwarfSourceLineVisitor, void* );
	/* ../common/dwarf_symbols.h:349 */
	void VisitAllStackFrameData(CDwarfModule* , pDwarfFdeInfoVisitor, void* );
	/* ../common/dwarf_symbols.h:352 */
	bool FindFrameData(CDwarfModule* , uint64, SDwarfCieInfo** , uint8** , SDwarfFdeInfo** , uint8** );
	/* ../common/dwarf_symbols.h:361 */
	bool BuildFrameUnwindTable(CDwarfModule* , const SDwarfCieInfo* , const SDwarfFdeInfo* , CDwarfUnwindTable* );
	/* ../common/dwarf_symbols.h:365 */
	void FatalParseProblem(CDwarfModule* , const char* , ...);
	/* ../common/dwarf_symbols.h:366 */
	void SymbolProblem(CDwarfModule* , const char* , ...);
	/* ../common/dwarf_symbols.h:367 */
	void SourceLineProblem(CDwarfModule* , const char* , ...);
	/* ../common/dwarf_symbols.h:368 */
	void FrameDataProblem(CDwarfModule* , const char* , ...);
	/* ../common/dwarf_symbols.h:369 */
	void CfiProblem(CDwarfModule* , const char* , ...);
	/* ../common/dwarf_symbols.h:375 */
	size_t GetMemHeld(const CDwarfModule* , size_t* );
	/* ../common/dwarf_symbols.h:377 */
	size_t GetMemUsed(const CDwarfModule* , size_t* );
	/* ../common/dwarf_symbols.h:397 */
	bool IsElf(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:401 */
	bool IsMacho(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:405 */
	EBinaryFormat GetBinaryFormat(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:409 */
	ECpuArch GetCpuArch(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:414 */
	bool MatchPrimaryBuildId(CDwarfModule* , const uint8* , int);
	/* ../common/dwarf_symbols.h:415 */
	uint8 GetPrimaryBuildIdFormat(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:419 */
	const void* GetPrimaryBuildIdData(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:423 */
	uint32 GetPrimaryBuildIdSize(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:428 */
	const char* GetBreakpadOsName(CDwarfModule* );
	/* ../common/dwarf_symbols.h:429 */
	const char* GetBreakpadArchName(CDwarfModule* );
	/* ../common/dwarf_symbols.h:430 */
	const char* GetBreakpadModuleId(CDwarfModule* , CBufferString* );
	/* ../common/dwarf_symbols.h:431 */
	const char* GetBreakpadModuleCodeId(CDwarfModule* , CBufferString* );
	/* ../common/dwarf_symbols.h:435 */
	const char* GetSourceMappingsInfo(CDwarfModule* , uint32* , uint32* );
	/* ../common/dwarf_symbols.h:437 */
	bool IsOpen(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:441 */
	int GetNumFailedOpenAttempts(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:445 */
	const char* GetPrimaryFilePath(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:449 */
	const char* GetUnqualifiedPrimaryFileName(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:454 */
	const char* GetPrimaryModuleName(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:460 */
	const char* GetActualDebugFilePath(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:464 */
	uint64 GetBaseAddress(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:468 */
	uint32 GetVirtualSize(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:472 */
	bool ContainsAddress(const CDwarfModule* , uint64);
	/* ../common/dwarf_symbols.h:478 */
	int GetNumCompilationUnits(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:483 */
	const char* GetCompileDirectory(const CDwarfModule* , int);
	/* ../common/dwarf_symbols.h:488 */
	int GetNumSourceFiles(const CDwarfModule* , int);
	/* ../common/dwarf_symbols.h:492 */
	const char* GetSourceFile(const CDwarfModule* , int, int);
	/* ../common/dwarf_symbols.h:499 */
	int GetNumFatalParseProblems(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:503 */
	int GetNumSymbolProblems(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:507 */
	int GetNumSourceLineProblems(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:511 */
	int GetNumFrameDataProblems(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:515 */
	int GetTotalParseProblems(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:522 */
	int GetNumCfiProblems(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:527 */
	CDwarfModule* GetNextModule(CDwarfModule* );
	/* ../common/dwarf_symbols.h:531 */
	CDwarfModule** GetNextModuleLink(CDwarfModule* );
	/* ../common/dwarf_symbols.h:535 */
	void SetNextModule(CDwarfModule* , CDwarfModule* );
	/* ../common/dwarf_symbols.h:540 */
	bool IsCodeSymbolKind(EDwarfSymbolKind);
	/* ../common/dwarf_symbols.h:545 */
	bool IsDataSymbolKind(EDwarfSymbolKind);
	/* ../common/dwarf_symbols.h:550 */
	bool IsOtherSymbolKind(EDwarfSymbolKind);
protected:
	uint32 m_nInfoType; /* 0 4 */
	uint32 m_nMultiSlice; /* 4 4 */
	int m_nFailedOpenAttempts; /* 8 4 */
	int m_nFatalParseProblems; /* 12 4 */
	int m_nSymbolProblems; /* 16 4 */
	int m_nSourceLineProblems; /* 20 4 */
	int m_nFrameDataProblems; /* 24 4 */
	int m_nCfiProblems; /* 28 4 */
	CBufferString m_primaryFilePath; /* 32 16 */
	const char * m_pPrimaryFilePathFileName; /* 48 8 */
	CBufferString m_primaryModuleName; /* 56 16 */
	CBufferString m_debugFilePath; /* 72 16 */
	uint64 m_nBaseAddress; /* 88 8 */
	uint32 m_nExplicitVirtualSize; /* 96 4 */
	uint32 m_nFileVirtualSize; /* 100 4 */
	uint32 m_nPointerSize; /* 104 4 */
	uint32 m_nPageSize; /* 108 4 */
	uint32 m_nMultiSliceBase; /* 112 4 */
	FILE * m_pFile; /* 120 8 */
	CDwarfModule * m_pNext; /* 128 8 */
	EBinaryFormat m_format; /* 136 4 */
	ECpuArch m_cpuArch; /* 140 4 */
	union {
		uint8 m_anyHdr; /* 144 1 */
		Elf32_Ehdr m_elfHdr32; /* 144 52 */
		Elf64_Ehdr m_elfHdr64; /* 144 64 */
		mach_header m_machoHdr32; /* 144 28 */
		mach_header_64 m_machoHdr64; /* 144 32 */
	}; /* 144 64 */
	uint64 m_nSymModuleBaseAddress; /* 208 8 */
	uint8 m_nPrimaryBuildIdFormat; /* 216 1 */
	int m_nPrimaryBuildIdSize; /* 220 4 */
	uint8 m_primaryBuildId[64]; /* 224 64 */
	uint8 m_nFileBuildIdFormat; /* 288 1 */
	int m_nFileBuildIdSize; /* 292 4 */
	uint8 m_fileBuildId[64]; /* 296 64 */
	CBufferString m_primaryDebugLink; /* 360 16 */
	CBufferString m_fileDebugLink; /* 376 16 */
	static const const struct SModuleSectionDesc s_sectionDescs[14]; /* 0 0 */
	SModuleSection m_sections[14]; /* 392 224 */
	bool m_bReadSection[14]; /* 616 14 */
	EModuleSection m_frameDataSection; /* 632 4 */
	SModuleSection m_sourceMappingsSection; /* 640 16 */
	CDwarfVector<EDwarfSymbolKind> m_pRawSectionSymbolKind; /* 656 16 */
	CDwarfVector<char> m_pSymbolNames; /* 672 16 */
	CDwarfUndecorateName m_undecorator; /* 688 72 */
	static const uint32 k_nStrpOffsetMark = 2147483648; /* 0 0 */
	/* ../common/dwarf_symbols.h:688 */
	const char* GetNameRefString(const CDwarfModule* , NameRef_t);
	CDwarfVector<CDwarfModule::SDebugInfoEntry> m_pDies; /* 760 16 */
	/* ../common/dwarf_symbols.h:751 */
	int CompareSymbol(const void* , const void* );
	/* ../common/dwarf_symbols.h:795 */
	int CompareIncompleteSymbol(const void* , const void* );
	/* ../common/dwarf_symbols.h:840 */
	int CompareSourceLine(const void* , const void* );
	CDwarfVector<CDwarfModule::SCompilationUnit> m_pCompilationUnits; /* 776 16 */
	SCompilationUnit m_pseudoCu[2]; /* 792 304 */
	static struct SSymbolTableCuDesc s_symbolTableCuDescs[0]; /* 0 0 */
	/* ../common/dwarf_symbols.h:952 */
	int CompareAddrToCompilationUnit(const void* , const void* );
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit> m_pAddrToCuMap; /* 1096 16 */
	/* ../common/dwarf_symbols.h:990 */
	int CompareFdeInfo(const void* , const void* );
	CDwarfVector<SDwarfCieInfo> m_pFrameCies; /* 1112 16 */
	CDwarfVector<SDwarfFdeInfo> m_pFrameFdes; /* 1128 16 */
	CDwarfVector<unsigned char> m_pFrameInstr; /* 1144 16 */
	/* ../common/dwarf_symbols.h:1031 */
	size_t GetMemHeld(const CBufferString* , size_t* );
	/* ../common/dwarf_symbols.h:1033 */
	void PrintProblem(CDwarfModule* , const char* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../common/dwarf_symbols.h:1035 */
	void Clear(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1036 */
	void SetPrimaryModuleNameFromFilePath(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1038 */
	EOpenResult OpenFile(CDwarfModule* , const char* , bool);
	/* ../common/dwarf_symbols.h:1039 */
	EOpenResult OpenSplitFile(CDwarfModule* , const char* );
	/* ../common/dwarf_symbols.h:1040 */
	EOpenResult OpenSplitFileOnPath(CDwarfModule* , const char* , const char* );
	/* ../common/dwarf_symbols.h:1041 */
	EOpenResult OpenBuildIdFile(CDwarfModule* , const char* );
	/* ../common/dwarf_symbols.h:1042 */
	EOpenResult OpenDebugLinkFile(CDwarfModule* , const char* );
	/* ../common/dwarf_symbols.h:1043 */
	void ClearFile(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1045 */
	EOpenResult ReadHeader(CDwarfModule* , bool);
	/* ../common/dwarf_symbols.h:1047 */
	EOpenResult ReadElfHeader(CDwarfModule* , uint8* );
	/* ../common/dwarf_symbols.h:1051 */
	EOpenResult ReadMachoSlice(CDwarfModule* , int, bool);
	/* ../common/dwarf_symbols.h:1052 */
	EOpenResult ReadMachoHeader(CDwarfModule* , uint8* , int);
	/* ../common/dwarf_symbols.h:1056 */
	bool HasRequiredDebugInfo(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1057 */
	EOpenResult ParseModule(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1061 */
	EOpenResult ParseElfNote(CDwarfModule* , uint32, uint32);
	/* ../common/dwarf_symbols.h:1062 */
	EOpenResult ParseGnuDebugLink(CDwarfModule* , uint32, uint32);
	/* ../common/dwarf_symbols.h:1067 */
	bool BuildAbbrevIndex(CDwarfModule* , SCompilationUnit* );
	/* ../common/dwarf_symbols.h:1069 */
	const char* GetSymbolName(CDwarfModule* , const SSymbol* );
	/* ../common/dwarf_symbols.h:1076 */
	uint32 AddSymbolName(CDwarfModule* , const char* , int, const char* );
	/* ../common/dwarf_symbols.h:1079 */
	SSymbol* FindSymbol(CDwarfModule* , uint32, SCompilationUnit* , uint32);
	/* ../common/dwarf_symbols.h:1082 */
	SSymbol* AddSymbol(CDwarfModule* , SCompilationUnit* , const char* , int, const char* , uint32, uint32, uint32, EDwarfSymbolKind);
	/* ../common/dwarf_symbols.h:1090 */
	void UpdateSymbolName(CDwarfModule* , SSymbol* , const char* , int, const char* );
	/* ../common/dwarf_symbols.h:1094 */
	void UpdateIncompleteSymbol(CDwarfModule* , SIncompleteSymbol* , const char* , int, const char* );
	/* ../common/dwarf_symbols.h:1098 */
	void RemoveSymbol(CDwarfModule* , SCompilationUnit* , SSymbol* );
	/* ../common/dwarf_symbols.h:1100 */
	void FillOutSymbolExtInfo(CDwarfModule* , SCompilationUnit* , SSymbol* , SDwarfSymbolInfo* );
	/* ../common/dwarf_symbols.h:1101 */
	bool VisitSymbolsInUnit(CDwarfModule* , uint32, SCompilationUnit* , pDwarfSymbolVisitor, void* );
	/* ../common/dwarf_symbols.h:1106 */
	void FillOutSourceLineExtInfo(CDwarfModule* , SCompilationUnit* , SSourceLine* , SDwarfSourceLineInfo* );
	/* ../common/dwarf_symbols.h:1107 */
	bool VisitSourceLinesInUnit(CDwarfModule* , uint32, SCompilationUnit* , pDwarfSourceLineVisitor, void* );
	/* ../common/dwarf_symbols.h:1112 */
	int FindDebugInfoEntryByInfoOffset(CDwarfModule* , uint32);
	/* ../common/dwarf_symbols.h:1114 */
	SCompilationUnit* AddCompilationUnit(CDwarfModule* , uint32, uint32, uint32);
	/* ../common/dwarf_symbols.h:1115 */
	SCompilationUnit* FindCompilationUnitByInfoOffset(CDwarfModule* , uint32);
	/* ../common/dwarf_symbols.h:1116 */
	SCompilationUnit* FindCompilationUnitByEntryInfoOffset(CDwarfModule* , uint32);
	/* ../common/dwarf_symbols.h:1117 */
	SCompilationUnit* FindCompilationUnitByLineOffset(CDwarfModule* , uint32);
	/* ../common/dwarf_symbols.h:1118 */
	SCompilationUnit* FindCompilationUnitByRelAddress(CDwarfModule* , uint32);
	/* ../common/dwarf_symbols.h:1119 */
	SCompilationUnit* FindCompilationUnitByFullAddress(CDwarfModule* , uint64);
	/* ../common/dwarf_symbols.h:1130 */
	bool ParseRangeList(CDwarfModule* , uint32, uint64, CDwarfVector<CDwarfModule::SRelVirtRange>* );
	/* ../common/dwarf_symbols.h:1132 */
	bool ParseCompilationUnitEntries(CDwarfModule* , SCompilationUnit* , CDwarfVector<CDwarfModule::SIncompleteSymbol>* , int* , bool);
	/* ../common/dwarf_symbols.h:1136 */
	int ParseCompilationUnit(CDwarfModule* , uint32, CDwarfVector<CDwarfModule::SIncompleteSymbol>* );
	/* ../common/dwarf_symbols.h:1138 */
	bool ParseCompilationUnits(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1140 */
	bool ParseAddressRanges(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1141 */
	bool BuildAddrToCuMap(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1143 */
	SSourceLine* FindSourceLine(CDwarfModule* , SCompilationUnit* , uint32);
	/* ../common/dwarf_symbols.h:1144 */
	SSourceLine* StartSourceLine(CDwarfModule* , SCompilationUnit* , uint64, uint32, uint32, SSourceLine* );
	/* ../common/dwarf_symbols.h:1145 */
	bool EndSourceLine(CDwarfModule* , SSourceLine* , uint64);
	/* ../common/dwarf_symbols.h:1146 */
	bool ExecuteLineProgram(CDwarfModule* , SCompilationUnit* , uint8* , uint8* , SLineProgramInfo* , uint32* );
	/* ../common/dwarf_symbols.h:1147 */
	bool ParseSourceLines(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1149 */
	SDwarfCieInfo* FindCie(CDwarfModule* , uint32);
	/* ../common/dwarf_symbols.h:1150 */
	bool ParseCie(CDwarfModule* , uint8* , uint8* , SDwarfCieInfo* );
	/* ../common/dwarf_symbols.h:1151 */
	bool ParseFde(CDwarfModule* , uint8* , uint8* , SDwarfFdeInfo* );
	/* ../common/dwarf_symbols.h:1152 */
	bool ParseFrameData(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1154 */
	bool UpdateCfiLocation(CDwarfModule* , CDwarfUnwindTable* , CDwarfCfiState* , uint32, bool);
	/* ../common/dwarf_symbols.h:1158 */
	bool ExecuteCfi(CDwarfModule* , CDwarfUnwindTable* , CDwarfCfiState* , const SDwarfCieInfo* , uint8* , uint32);
	/* ../common/dwarf_symbols.h:1164 */
	EOpenResult ReadSectionData(CDwarfModule* , SModuleSection* );
	/* ../common/dwarf_symbols.h:1165 */
	EOpenResult ReadAllSectionData(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1167 */
	EOpenResult ProcessDebugInfo(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1173 */
	EOpenResult ProcessSymbolTables(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1175 */
	uint64 DecodeLeb128Full(CDwarfModule* , uint8** );
	/* ../common/dwarf_symbols.h:1176 */
	int64 DecodeSignedLeb128Full(CDwarfModule* , uint8** );
	/* ../common/dwarf_symbols.h:1178 */
	uint64 DecodeLeb128(CDwarfModule* , uint8** );
	/* ../common/dwarf_symbols.h:1190 */
	int64 DecodeSignedLeb128(CDwarfModule* , uint8** );
	/* ../common/dwarf_symbols.h:1208 */
	void DecodeSpecialLineOp(CDwarfModule* , uint64* , uint32* , uint8, SLineProgramInfo* );
	void CDwarfModule(class CDwarfModule *); /* linkage=_ZN12CDwarfModuleC4Ev */
	void ~CDwarfModule(class CDwarfModule *); /* linkage=_ZN12CDwarfModuleD4Ev */
	bool Init(class CDwarfModule *, const char  *, uint32, uint64, uint32, uint8, const void  *, uint32, uint32); /* linkage=_ZN12CDwarfModule4InitEPKcjyjhPKvjj */
	/* <44bca1> ../common/dwarf_symbols.cpp:633 */
	void Purge(class CDwarfModule *); /* linkage=_ZN12CDwarfModule5PurgeEv */
	enum EOpenResult OpenAndParse(class CDwarfModule *, const char  *); /* linkage=_ZN12CDwarfModule12OpenAndParseEPKc */
	void Close(class CDwarfModule *); /* linkage=_ZN12CDwarfModule5CloseEv */
	bool FindSymbol(class CDwarfModule *, uint32, uint64, class SDwarfSymbolInfo *, uint32 *); /* linkage=_ZN12CDwarfModule10FindSymbolEjyP16SDwarfSymbolInfoPj */
	bool FindSourceLine(class CDwarfModule *, uint64, class SDwarfSourceLineInfo *, uint32 *); /* linkage=_ZN12CDwarfModule14FindSourceLineEyP20SDwarfSourceLineInfoPj */
	void VisitAllSymbols(class CDwarfModule *, uint32, pDwarfSymbolVisitor, void *); /* linkage=_ZN12CDwarfModule15VisitAllSymbolsEjPF17EDwarfVisitResultPS_PvPK16SDwarfSymbolInfoES2_ */
	void VisitAllSourceLines(class CDwarfModule *, uint32, pDwarfSourceLineVisitor, void *); /* linkage=_ZN12CDwarfModule19VisitAllSourceLinesEjPF17EDwarfVisitResultPS_PvPK20SDwarfSourceLineInfoES2_ */
	void VisitAllStackFrameData(class CDwarfModule *, pDwarfFdeInfoVisitor, void *); /* linkage=_ZN12CDwarfModule22VisitAllStackFrameDataEPF17EDwarfVisitResultPS_PvPK13SDwarfCieInfoPK13SDwarfFdeInfoES2_ */
	bool FindFrameData(class CDwarfModule *, uint64, class SDwarfCieInfo * *, uint8 * *, class SDwarfFdeInfo * *, uint8 * *); /* linkage=_ZN12CDwarfModule13FindFrameDataEyPP13SDwarfCieInfoPPhPP13SDwarfFdeInfoS4_ */
	bool BuildFrameUnwindTable(class CDwarfModule *, const class SDwarfCieInfo  *, const class SDwarfFdeInfo  *, class CDwarfUnwindTable *); /* linkage=_ZN12CDwarfModule21BuildFrameUnwindTableEPK13SDwarfCieInfoPK13SDwarfFdeInfoP17CDwarfUnwindTable */
	void FatalParseProblem(class CDwarfModule *, const char  *, ...); /* linkage=_ZN12CDwarfModule17FatalParseProblemEPKcz */
	void SymbolProblem(class CDwarfModule *, const char  *, ...); /* linkage=_ZN12CDwarfModule13SymbolProblemEPKcz */
	void SourceLineProblem(class CDwarfModule *, const char  *, ...); /* linkage=_ZN12CDwarfModule17SourceLineProblemEPKcz */
	void FrameDataProblem(class CDwarfModule *, const char  *, ...); /* linkage=_ZN12CDwarfModule16FrameDataProblemEPKcz */
	void CfiProblem(class CDwarfModule *, const char  *, ...); /* linkage=_ZN12CDwarfModule10CfiProblemEPKcz */
	size_t GetMemHeld(const class CDwarfModule  *, size_t *); /* linkage=_ZNK12CDwarfModule10GetMemHeldEPm */
	size_t GetMemUsed(const class CDwarfModule  *, size_t *); /* linkage=_ZNK12CDwarfModule10GetMemUsedEPm */
	bool IsElf(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule5IsElfEv */
	bool IsMacho(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule7IsMachoEv */
	enum EBinaryFormat GetBinaryFormat(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule15GetBinaryFormatEv */
	enum ECpuArch GetCpuArch(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule10GetCpuArchEv */
	bool MatchPrimaryBuildId(class CDwarfModule *, const uint8  *, int); /* linkage=_ZN12CDwarfModule19MatchPrimaryBuildIdEPKhi */
	uint8 GetPrimaryBuildIdFormat(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule23GetPrimaryBuildIdFormatEv */
	const void  * GetPrimaryBuildIdData(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule21GetPrimaryBuildIdDataEv */
	uint32 GetPrimaryBuildIdSize(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule21GetPrimaryBuildIdSizeEv */
	const char  * GetBreakpadOsName(class CDwarfModule *); /* linkage=_ZN12CDwarfModule17GetBreakpadOsNameEv */
	const char  * GetBreakpadArchName(class CDwarfModule *); /* linkage=_ZN12CDwarfModule19GetBreakpadArchNameEv */
	const char  * GetBreakpadModuleId(class CDwarfModule *, class CBufferString *); /* linkage=_ZN12CDwarfModule19GetBreakpadModuleIdEP13CBufferString */
	const char  * GetBreakpadModuleCodeId(class CDwarfModule *, class CBufferString *); /* linkage=_ZN12CDwarfModule23GetBreakpadModuleCodeIdEP13CBufferString */
	const char  * GetSourceMappingsInfo(class CDwarfModule *, uint32 *, uint32 *); /* linkage=_ZN12CDwarfModule21GetSourceMappingsInfoEPjS0_ */
	bool IsOpen(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule6IsOpenEv */
	int GetNumFailedOpenAttempts(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule24GetNumFailedOpenAttemptsEv */
	const char  * GetPrimaryFilePath(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule18GetPrimaryFilePathEv */
	const char  * GetUnqualifiedPrimaryFileName(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule29GetUnqualifiedPrimaryFileNameEv */
	const char  * GetPrimaryModuleName(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule20GetPrimaryModuleNameEv */
	const char  * GetActualDebugFilePath(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule22GetActualDebugFilePathEv */
	uint64 GetBaseAddress(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule14GetBaseAddressEv */
	uint32 GetVirtualSize(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule14GetVirtualSizeEv */
	bool ContainsAddress(const class CDwarfModule  *, uint64); /* linkage=_ZNK12CDwarfModule15ContainsAddressEy */
	int GetNumCompilationUnits(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule22GetNumCompilationUnitsEv */
	const char  * GetCompileDirectory(const class CDwarfModule  *, int); /* linkage=_ZNK12CDwarfModule19GetCompileDirectoryEi */
	int GetNumSourceFiles(const class CDwarfModule  *, int); /* linkage=_ZNK12CDwarfModule17GetNumSourceFilesEi */
	const char  * GetSourceFile(const class CDwarfModule  *, int, int); /* linkage=_ZNK12CDwarfModule13GetSourceFileEii */
	int GetNumFatalParseProblems(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule24GetNumFatalParseProblemsEv */
	int GetNumSymbolProblems(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule20GetNumSymbolProblemsEv */
	int GetNumSourceLineProblems(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule24GetNumSourceLineProblemsEv */
	int GetNumFrameDataProblems(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule23GetNumFrameDataProblemsEv */
	int GetTotalParseProblems(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule21GetTotalParseProblemsEv */
	int GetNumCfiProblems(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule17GetNumCfiProblemsEv */
	class CDwarfModule * GetNextModule(class CDwarfModule *); /* linkage=_ZN12CDwarfModule13GetNextModuleEv */
	class CDwarfModule * * GetNextModuleLink(class CDwarfModule *); /* linkage=_ZN12CDwarfModule17GetNextModuleLinkEv */
	void SetNextModule(class CDwarfModule *, class CDwarfModule *); /* linkage=_ZN12CDwarfModule13SetNextModuleEPS_ */
	bool IsCodeSymbolKind(enum EDwarfSymbolKind); /* linkage=_ZN12CDwarfModule16IsCodeSymbolKindE16EDwarfSymbolKind */
	bool IsDataSymbolKind(enum EDwarfSymbolKind); /* linkage=_ZN12CDwarfModule16IsDataSymbolKindE16EDwarfSymbolKind */
	bool IsOtherSymbolKind(enum EDwarfSymbolKind); /* linkage=_ZN12CDwarfModule17IsOtherSymbolKindE16EDwarfSymbolKind */
	const char  * GetNameRefString(const class CDwarfModule  *, NameRef_t); /* linkage=_ZNK12CDwarfModule16GetNameRefStringEj */
	/* <44922f> ../common/dwarf_symbols.h:751 */
	int CompareSymbol(const void  *, const void  *); /* linkage=_ZN12CDwarfModule13CompareSymbolEPKvS1_ */
	/* <4492b5> ../common/dwarf_symbols.h:795 */
	int CompareIncompleteSymbol(const void  *, const void  *); /* linkage=_ZN12CDwarfModule23CompareIncompleteSymbolEPKvS1_ */
	/* <44933b> ../common/dwarf_symbols.h:840 */
	int CompareSourceLine(const void  *, const void  *); /* linkage=_ZN12CDwarfModule17CompareSourceLineEPKvS1_ */
	/* <4493c1> ../common/dwarf_symbols.h:952 */
	int CompareAddrToCompilationUnit(const void  *, const void  *); /* linkage=_ZN12CDwarfModule28CompareAddrToCompilationUnitEPKvS1_ */
	/* <449453> ../common/dwarf_symbols.h:990 */
	int CompareFdeInfo(const void  *, const void  *); /* linkage=_ZN12CDwarfModule14CompareFdeInfoEPKvS1_ */
	/* <449fa5> ../common/dwarf_symbols.cpp:1409 */
	size_t GetMemHeld(const class CBufferString  *, size_t *); /* linkage=_ZN12CDwarfModule10GetMemHeldEPK13CBufferStringPm */
	void PrintProblem(class CDwarfModule *, const char  *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN12CDwarfModule12PrintProblemEPKcS1_P13__va_list_tag */
	void Clear(class CDwarfModule *); /* linkage=_ZN12CDwarfModule5ClearEv */
	/* <44a355> ../common/dwarf_symbols.cpp:1461 */
	void SetPrimaryModuleNameFromFilePath(class CDwarfModule *); /* linkage=_ZN12CDwarfModule32SetPrimaryModuleNameFromFilePathEv */
	enum EOpenResult OpenFile(class CDwarfModule *, const char  *, bool); /* linkage=_ZN12CDwarfModule8OpenFileEPKcb */
	/* <44d4c7> ../common/dwarf_symbols.cpp:1511 */
	enum EOpenResult OpenSplitFile(class CDwarfModule *, const char  *); /* linkage=_ZN12CDwarfModule13OpenSplitFileEPKc */
	enum EOpenResult OpenSplitFileOnPath(class CDwarfModule *, const char  *, const char  *); /* linkage=_ZN12CDwarfModule19OpenSplitFileOnPathEPKcS1_ */
	/* <44db50> ../common/dwarf_symbols.cpp:1632 */
	enum EOpenResult OpenBuildIdFile(class CDwarfModule *, const char  *); /* linkage=_ZN12CDwarfModule15OpenBuildIdFileEPKc */
	enum EOpenResult OpenDebugLinkFile(class CDwarfModule *, const char  *); /* linkage=_ZN12CDwarfModule17OpenDebugLinkFileEPKc */
	void ClearFile(class CDwarfModule *); /* linkage=_ZN12CDwarfModule9ClearFileEv */
	enum EOpenResult ReadHeader(class CDwarfModule *, bool); /* linkage=_ZN12CDwarfModule10ReadHeaderEb */
	enum EOpenResult ReadElfHeader(class CDwarfModule *, uint8 *); /* linkage=_ZN12CDwarfModule13ReadElfHeaderEPh */
	enum EOpenResult ReadMachoSlice(class CDwarfModule *, int, bool); /* linkage=_ZN12CDwarfModule14ReadMachoSliceEib */
	enum EOpenResult ReadMachoHeader(class CDwarfModule *, uint8 *, int); /* linkage=_ZN12CDwarfModule15ReadMachoHeaderEPhi */
	bool HasRequiredDebugInfo(class CDwarfModule *); /* linkage=_ZN12CDwarfModule20HasRequiredDebugInfoEv */
	enum EOpenResult ParseModule(class CDwarfModule *); /* linkage=_ZN12CDwarfModule11ParseModuleEv */
	/* <44a4fd> ../common/dwarf_symbols.cpp:2503 */
	enum EOpenResult ParseElfNote(class CDwarfModule *, uint32, uint32); /* linkage=_ZN12CDwarfModule12ParseElfNoteEjj */
	/* <44a5b9> ../common/dwarf_symbols.cpp:2585 */
	enum EOpenResult ParseGnuDebugLink(class CDwarfModule *, uint32, uint32); /* linkage=_ZN12CDwarfModule17ParseGnuDebugLinkEjj */
	bool BuildAbbrevIndex(class CDwarfModule *, class SCompilationUnit *); /* linkage=_ZN12CDwarfModule16BuildAbbrevIndexEPNS_16SCompilationUnitE */
	const char  * GetSymbolName(class CDwarfModule *, const class SSymbol  *); /* linkage=_ZN12CDwarfModule13GetSymbolNameEPKNS_7SSymbolE */
	uint32 AddSymbolName(class CDwarfModule *, const char  *, int, const char  *); /* linkage=_ZN12CDwarfModule13AddSymbolNameEPKciS1_ */
	class SSymbol * FindSymbol(class CDwarfModule *, uint32, class SCompilationUnit *, uint32); /* linkage=_ZN12CDwarfModule10FindSymbolEjPNS_16SCompilationUnitEj */
	class SSymbol * AddSymbol(class CDwarfModule *, class SCompilationUnit *, const char  *, int, const char  *, uint32, uint32, uint32, enum EDwarfSymbolKind); /* linkage=_ZN12CDwarfModule9AddSymbolEPNS_16SCompilationUnitEPKciS3_jjj16EDwarfSymbolKind */
	/* <44b630> ../common/dwarf_symbols.cpp:2998 */
	void UpdateSymbolName(class CDwarfModule *, class SSymbol *, const char  *, int, const char  *); /* linkage=_ZN12CDwarfModule16UpdateSymbolNameEPNS_7SSymbolEPKciS3_ */
	void UpdateIncompleteSymbol(class CDwarfModule *, class SIncompleteSymbol *, const char  *, int, const char  *); /* linkage=_ZN12CDwarfModule22UpdateIncompleteSymbolEPNS_17SIncompleteSymbolEPKciS3_ */
	void RemoveSymbol(class CDwarfModule *, class SCompilationUnit *, class SSymbol *); /* linkage=_ZN12CDwarfModule12RemoveSymbolEPNS_16SCompilationUnitEPNS_7SSymbolE */
	/* <449bb5> ../common/dwarf_symbols.cpp:871 */
	void FillOutSymbolExtInfo(class CDwarfModule *, class SCompilationUnit *, class SSymbol *, class SDwarfSymbolInfo *); /* linkage=_ZN12CDwarfModule20FillOutSymbolExtInfoEPNS_16SCompilationUnitEPNS_7SSymbolEP16SDwarfSymbolInfo */
	bool VisitSymbolsInUnit(class CDwarfModule *, uint32, class SCompilationUnit *, pDwarfSymbolVisitor, void *); /* linkage=_ZN12CDwarfModule18VisitSymbolsInUnitEjPNS_16SCompilationUnitEPF17EDwarfVisitResultPS_PvPK16SDwarfSymbolInfoES4_ */
	/* <449cb1> ../common/dwarf_symbols.cpp:930 */
	void FillOutSourceLineExtInfo(class CDwarfModule *, class SCompilationUnit *, class SSourceLine *, class SDwarfSourceLineInfo *); /* linkage=_ZN12CDwarfModule24FillOutSourceLineExtInfoEPNS_16SCompilationUnitEPNS_11SSourceLineEP20SDwarfSourceLineInfo */
	/* <449d98> ../common/dwarf_symbols.cpp:940 */
	bool VisitSourceLinesInUnit(class CDwarfModule *, uint32, class SCompilationUnit *, pDwarfSourceLineVisitor, void *); /* linkage=_ZN12CDwarfModule22VisitSourceLinesInUnitEjPNS_16SCompilationUnitEPF17EDwarfVisitResultPS_PvPK20SDwarfSourceLineInfoES4_ */
	int FindDebugInfoEntryByInfoOffset(class CDwarfModule *, uint32); /* linkage=_ZN12CDwarfModule30FindDebugInfoEntryByInfoOffsetEj */
	class SCompilationUnit * AddCompilationUnit(class CDwarfModule *, uint32, uint32, uint32); /* linkage=_ZN12CDwarfModule18AddCompilationUnitEjjj */
	/* <449a59> ../common/dwarf_symbols.cpp:687 */
	class SCompilationUnit * FindCompilationUnitByInfoOffset(class CDwarfModule *, uint32); /* linkage=_ZN12CDwarfModule31FindCompilationUnitByInfoOffsetEj */
	class SCompilationUnit * FindCompilationUnitByEntryInfoOffset(class CDwarfModule *, uint32); /* linkage=_ZN12CDwarfModule36FindCompilationUnitByEntryInfoOffsetEj */
	/* <449b07> ../common/dwarf_symbols.cpp:715 */
	class SCompilationUnit * FindCompilationUnitByLineOffset(class CDwarfModule *, uint32); /* linkage=_ZN12CDwarfModule31FindCompilationUnitByLineOffsetEj */
	class SCompilationUnit * FindCompilationUnitByRelAddress(class CDwarfModule *, uint32); /* linkage=_ZN12CDwarfModule31FindCompilationUnitByRelAddressEj */
	class SCompilationUnit * FindCompilationUnitByFullAddress(class CDwarfModule *, uint64); /* linkage=_ZN12CDwarfModule32FindCompilationUnitByFullAddressEy */
	bool ParseRangeList(class CDwarfModule *, uint32, uint64, class CDwarfVector<CDwarfModule::SRelVirtRange> *); /* linkage=_ZN12CDwarfModule14ParseRangeListEjyP12CDwarfVectorINS_13SRelVirtRangeEE */
	bool ParseCompilationUnitEntries(class CDwarfModule *, class SCompilationUnit *, class CDwarfVector<CDwarfModule::SIncompleteSymbol> *, int *, bool); /* linkage=_ZN12CDwarfModule27ParseCompilationUnitEntriesEPNS_16SCompilationUnitEP12CDwarfVectorINS_17SIncompleteSymbolEEPib */
	int ParseCompilationUnit(class CDwarfModule *, uint32, class CDwarfVector<CDwarfModule::SIncompleteSymbol> *); /* linkage=_ZN12CDwarfModule20ParseCompilationUnitEjP12CDwarfVectorINS_17SIncompleteSymbolEE */
	/* <44c0f9> ../common/dwarf_symbols.cpp:4250 */
	bool ParseCompilationUnits(class CDwarfModule *); /* linkage=_ZN12CDwarfModule21ParseCompilationUnitsEv */
	bool ParseAddressRanges(class CDwarfModule *); /* linkage=_ZN12CDwarfModule18ParseAddressRangesEv */
	bool BuildAddrToCuMap(class CDwarfModule *); /* linkage=_ZN12CDwarfModule16BuildAddrToCuMapEv */
	/* <44b7e2> ../common/dwarf_symbols.cpp:4667 */
	class SSourceLine * FindSourceLine(class CDwarfModule *, class SCompilationUnit *, uint32); /* linkage=_ZN12CDwarfModule14FindSourceLineEPNS_16SCompilationUnitEj */
	class SSourceLine * StartSourceLine(class CDwarfModule *, class SCompilationUnit *, uint64, uint32, uint32, class SSourceLine *); /* linkage=_ZN12CDwarfModule15StartSourceLineEPNS_16SCompilationUnitEyjjPNS_11SSourceLineE */
	/* <44b8d0> ../common/dwarf_symbols.cpp:4775 */
	bool EndSourceLine(class CDwarfModule *, class SSourceLine *, uint64); /* linkage=_ZN12CDwarfModule13EndSourceLineEPNS_11SSourceLineEy */
	bool ExecuteLineProgram(class CDwarfModule *, class SCompilationUnit *, uint8 *, uint8 *, class SLineProgramInfo *, uint32 *); /* linkage=_ZN12CDwarfModule18ExecuteLineProgramEPNS_16SCompilationUnitEPhS2_PNS_16SLineProgramInfoEPj */
	/* <44d469> ../common/dwarf_symbols.cpp:5075 */
	bool ParseSourceLines(class CDwarfModule *); /* linkage=_ZN12CDwarfModule16ParseSourceLinesEv */
	/* <44b9a6> ../common/dwarf_symbols.cpp:5319 */
	class SDwarfCieInfo * FindCie(class CDwarfModule *, uint32); /* linkage=_ZN12CDwarfModule7FindCieEj */
	bool ParseCie(class CDwarfModule *, uint8 *, uint8 *, class SDwarfCieInfo *); /* linkage=_ZN12CDwarfModule8ParseCieEPhS0_P13SDwarfCieInfo */
	bool ParseFde(class CDwarfModule *, uint8 *, uint8 *, class SDwarfFdeInfo *); /* linkage=_ZN12CDwarfModule8ParseFdeEPhS0_P13SDwarfFdeInfo */
	bool ParseFrameData(class CDwarfModule *); /* linkage=_ZN12CDwarfModule14ParseFrameDataEv */
	bool UpdateCfiLocation(class CDwarfModule *, class CDwarfUnwindTable *, class CDwarfCfiState *, uint32, bool); /* linkage=_ZN12CDwarfModule17UpdateCfiLocationEP17CDwarfUnwindTableP14CDwarfCfiStatejb */
	bool ExecuteCfi(class CDwarfModule *, class CDwarfUnwindTable *, class CDwarfCfiState *, const class SDwarfCieInfo  *, uint8 *, uint32); /* linkage=_ZN12CDwarfModule10ExecuteCfiEP17CDwarfUnwindTableP14CDwarfCfiStatePK13SDwarfCieInfoPhj */
	enum EOpenResult ReadSectionData(class CDwarfModule *, class SModuleSection *); /* linkage=_ZN12CDwarfModule15ReadSectionDataEPNS_14SModuleSectionE */
	enum EOpenResult ReadAllSectionData(class CDwarfModule *); /* linkage=_ZN12CDwarfModule18ReadAllSectionDataEv */
	enum EOpenResult ProcessDebugInfo(class CDwarfModule *); /* linkage=_ZN12CDwarfModule16ProcessDebugInfoEv */
	/* <44ba77> ../common/dwarf_symbols.cpp:6428 */
	enum EOpenResult ProcessSymbolTables(class CDwarfModule *); /* linkage=_ZN12CDwarfModule19ProcessSymbolTablesEv */
	/* <44bacb> ../common/dwarf_symbols.cpp:6498 */
	uint64 DecodeLeb128Full(class CDwarfModule *, uint8 * *); /* linkage=_ZN12CDwarfModule16DecodeLeb128FullEPPh */
	int64 DecodeSignedLeb128Full(class CDwarfModule *, uint8 * *); /* linkage=_ZN12CDwarfModule22DecodeSignedLeb128FullEPPh */
	uint64 DecodeLeb128(class CDwarfModule *, uint8 * *); /* linkage=_ZN12CDwarfModule12DecodeLeb128EPPh */
	int64 DecodeSignedLeb128(class CDwarfModule *, uint8 * *); /* linkage=_ZN12CDwarfModule18DecodeSignedLeb128EPPh */
	void DecodeSpecialLineOp(class CDwarfModule *, uint64 *, uint32 *, uint8, class SLineProgramInfo *); /* linkage=_ZN12CDwarfModule19DecodeSpecialLineOpEPyPjhPNS_16SLineProgramInfoE */
	enum EOpenResult ProcessMachoSymbolTable<nlist_64>(class CDwarfModule *, const class SSymbolTableCuDesc  *); /* linkage=_ZN12CDwarfModule23ProcessMachoSymbolTableI8nlist_64EENS_11EOpenResultEPKNS_18SSymbolTableCuDescE */
	enum EOpenResult ProcessMachoSymbolTable<nlist>(class CDwarfModule *, const class SSymbolTableCuDesc  *); /* linkage=_ZN12CDwarfModule23ProcessMachoSymbolTableI5nlistEENS_11EOpenResultEPKNS_18SSymbolTableCuDescE */
	enum EOpenResult ProcessElfSymbolTable<Elf64_Sym>(class CDwarfModule *, const class SSymbolTableCuDesc  *); /* linkage=_ZN12CDwarfModule21ProcessElfSymbolTableI9Elf64_SymEENS_11EOpenResultEPKNS_18SSymbolTableCuDescE */
	enum EOpenResult ProcessElfSymbolTable<Elf32_Sym>(class CDwarfModule *, const class SSymbolTableCuDesc  *); /* linkage=_ZN12CDwarfModule21ProcessElfSymbolTableI9Elf32_SymEENS_11EOpenResultEPKNS_18SSymbolTableCuDescE */
	enum EOpenResult ParseMachoSections<mach_header_64, segment_command_64, 25, section_64, nlist_64>(class CDwarfModule *); /* linkage=_ZN12CDwarfModule18ParseMachoSectionsI14mach_header_6418segment_command_64Lj25E10section_648nlist_64EENS_11EOpenResultEv */
	enum EOpenResult ParseMachoSections<mach_header, segment_command, 1, section, nlist>(class CDwarfModule *); /* linkage=_ZN12CDwarfModule18ParseMachoSectionsI11mach_header15segment_commandLj1E7section5nlistEENS_11EOpenResultEv */
	enum EOpenResult ParseElfSections<Elf64_Ehdr, Elf64_Shdr>(class CDwarfModule *); /* linkage=_ZN12CDwarfModule16ParseElfSectionsI10Elf64_Ehdr10Elf64_ShdrEENS_11EOpenResultEv */
	enum EOpenResult ParseElfSections<Elf32_Ehdr, Elf32_Shdr>(class CDwarfModule *); /* linkage=_ZN12CDwarfModule16ParseElfSectionsI10Elf32_Ehdr10Elf32_ShdrEENS_11EOpenResultEv */
	enum EOpenResult FindMachoVirtualSize<mach_header, segment_command, 1, section>(class CDwarfModule *, class mach_header *); /* linkage=_ZN12CDwarfModule20FindMachoVirtualSizeI11mach_header15segment_commandLj1E7sectionEENS_11EOpenResultEPT_ */
	enum EOpenResult FindMachoVirtualSize<mach_header_64, segment_command_64, 25, section_64>(class CDwarfModule *, class mach_header_64 *); /* linkage=_ZN12CDwarfModule20FindMachoVirtualSizeI14mach_header_6418segment_command_64Lj25E10section_64EENS_11EOpenResultEPT_ */
	enum EOpenResult FindElfVirtualSize<Elf32_Ehdr, Elf32_Phdr>(class CDwarfModule *, Elf32_Ehdr *); /* linkage=_ZN12CDwarfModule18FindElfVirtualSizeI10Elf32_Ehdr10Elf32_PhdrEENS_11EOpenResultEPT_ */
	enum EOpenResult FindElfVirtualSize<Elf64_Ehdr, Elf64_Phdr>(class CDwarfModule *, Elf64_Ehdr *); /* linkage=_ZN12CDwarfModule18FindElfVirtualSizeI10Elf64_Ehdr10Elf64_PhdrEENS_11EOpenResultEPT_ */
};

// <0042A6E5> ../common/dwarf_symbols.h:253
// member functions: 289
// member variables: 46
// static member variables: 4
// class size: 1,160
class CDwarfModule {
	/* ../common/dwarf_symbols.h:259 */
	enum {
		k_EInfoType_None = 0,
		k_EInfoType_Sections = 1,
		k_EInfoType_CompilationUnits = 2,
		k_EInfoType_SourceFiles = 4,
		k_EInfoType_SourceLines = 8,
		k_EInfoType_CodeSymbols = 16,
		k_EInfoType_DataSymbols = 32,
		k_EInfoType_OtherSymbols = 64,
		k_EInfoType_PublicCodeSymbols = 128,
		k_EInfoType_PublicDataSymbols = 256,
		k_EInfoType_PublicOtherSymbols = 512,
		k_EInfoType_AllDebugSymbolKinds = 112,
		k_EInfoType_AllPublicSymbolKinds = 896,
		k_EInfoType_AllSymbolKinds = 1008,
		k_EInfoType_SymbolsAndSource = 1023,
		k_EInfoType_StackFrameData = 1024,
		k_EInfoType_All = 4294967295,
	};
	/* ../common/dwarf_symbols.h:294 */
	enum EOpenResult {
		k_EOpenResult_Success = 0,
		k_EOpenResult_Unknown = 129,
		k_EOpenResult_InvalidDebugInfo = 130,
		k_EOpenResult_InvalidFormat = 131,
		k_EOpenResult_NoDebugInfo = 132,
		k_EOpenResult_DebugInfoMismatch = 133,
		k_EOpenResult_NoDebugIdentity = 134,
		k_EOpenResult_FileNotFound = 135,
		k_EOpenResult_SplitFileNotFound = 136,
		k_EOpenResult_InternalError = 137,
		k_EOpenResult_Unsupported = 138,
		k_EOpenResult_IoError = 139,
	};
	/* ../common/dwarf_symbols.h:379 */
	enum EBinaryFormat {
		EFmtInvalid = 0,
		EFmtElf32 = 1,
		EFmtElf64 = 2,
		EFmtMacho32 = 3,
		EFmtMacho64 = 4,
	};
	/* ../common/dwarf_symbols.h:388 */
	enum ECpuArch {
		ECpuArchInvalid = 0,
		ECpuArchX86 = 1,
		ECpuArchX86_64 = 2,
		ECpuArchARM = 3,
		ECpuArchARM_64 = 4,
	};
	/* ../common/dwarf_symbols.h:592 */
	union {
		uint8 m_anyHdr; /* 0 1 */
		Elf32_Ehdr m_elfHdr32; /* 0 52 */
		Elf64_Ehdr m_elfHdr64; /* 0 64 */
		mach_header m_machoHdr32; /* 0 28 */
		mach_header_64 m_machoHdr64; /* 0 32 */
	};
	/* ../common/dwarf_symbols.h:616 */
	enum EModuleSection {
		ESectionDebugInfo = 0,
		ESectionDebugAbbrev = 1,
		ESectionDebugStr = 2,
		ESectionDebugLine = 3,
		ESectionDebugRanges = 4,
		ESectionDebugAranges = 5,
		ESectionDebugPubNames = 6,
		ESectionDebugFrame = 7,
		ESectionEhFrame = 8,
		ESectionUnwindInfo = 9,
		ESectionSymTab = 10,
		ESectionStrTab = 11,
		ESectionDynSym = 12,
		ESectionDynStr = 13,
		EModuleSectionCount = 14,
	};
	/* ../common/dwarf_symbols.h:645 */
	struct SModuleSectionDesc {
		const char * pName; /* 0 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:652 */
	struct SModuleSection {
		uint32 nFileOffset; /* 0 4 */
		uint32 nSize; /* 4 4 */
		uint8 * pData; /* 8 8 */
		/* ../common/dwarf_symbols.h:658 */
		size_t GetMemHeld(const SModuleSection* , size_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:704 */
	struct SDebugInfoEntry {
		uint32 nInfoOffset; /* 0 4 */
		uint32 nSpecOffset; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:715 */
	struct SAbbrevCode {
		uint32 nTag:31; /* 0: 0 4 */
		uint32 bChildren:1; /* 0:31 4 */
		uint32 nEntriesOffset; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:722 */
	struct SAbbrevEntry {
		uint16 nAttr; /* 0 2 */
		uint16 nForm; /* 2 2 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:728 */
	struct SSymbol {
		uint32 nRelVirtStart; /* 0 4 */
		uint32 nRelVirtEnd; /* 4 4 */
		uint32 nNameOffset; /* 8 4 */
		EDwarfSymbolKind eKind; /* 12 1 */
		/* ../common/dwarf_symbols.h:736 */
		bool HasAddress(const SSymbol* );
		/* ../common/dwarf_symbols.h:741 */
		bool HasRange(const SSymbol* );
		/* ../common/dwarf_symbols.h:745 */
		bool HasName(const SSymbol* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:785 */
	struct SIncompleteSymbol {
		uint32 nCuIndex:31; /* 0: 0 4 */
		uint32 bHasOriginOffset:1; /* 0:31 4 */
		uint32 nSymbolIndex; /* 4 4 */
		uint32 nRefOffset; /* 8 4 */
		NameRef_t nAltNameRef; /* 12 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:684 */
	typedef uint32 NameRef_t;
	/* ../common/dwarf_symbols.h:832 */
	struct SSourceLine {
		uint32 nRelVirtStart; /* 0 4 */
		uint32 nRelVirtEnd; /* 4 4 */
		uint32 nFileNameIndex; /* 8 4 */
		uint32 nLine; /* 12 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:864 */
	struct SRelVirtRange {
		uint32 nRelVirtStart; /* 0 4 */
		uint32 nRelVirtEnd; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:871 */
	struct SCompilationUnit {
		uint32 nDwarfOffsetSize; /* 0 4 */
		uint32 nDwarfRefAddrSize; /* 4 4 */
		CDwarfVector<CDwarfModule::SRelVirtRange> pVirtRangesRaw; /* 8 16 */
		uint32 nRelVirtStart; /* 24 4 */
		uint32 nRelVirtEnd; /* 28 4 */
		CDwarfVector<CDwarfModule::SAbbrevCode> pAbbrevIndex; /* 32 16 */
		CDwarfVector<CDwarfModule::SAbbrevEntry> pAbbrevEntries; /* 48 16 */
		CDwarfVector<CDwarfModule::SSymbol> pSymbols; /* 64 16 */
		CDwarfVector<char> pFileNames; /* 80 16 */
		CDwarfVector<unsigned int> pFileNameIndex; /* 96 16 */
		CDwarfVector<CDwarfModule::SSourceLine> pSourceLines; /* 112 16 */
		uint32 nHeaderOffset; /* 128 4 */
		uint32 nEntriesOffset; /* 132 4 */
		uint32 nEntriesSize; /* 136 4 */
		uint32 nAbbrevOffset; /* 140 4 */
		uint32 nLineOffset; /* 144 4 */
		uint32 nCompileDirIndex; /* 148 4 */
		/* ../common/dwarf_symbols.h:908 */
		void Clear(SCompilationUnit* );
		/* ../common/dwarf_symbols.h:909 */
		void Purge(SCompilationUnit* );
		/* ../common/dwarf_symbols.h:911 */
		bool AddVirtRange(SCompilationUnit* , uint32, uint32);
		/* ../common/dwarf_symbols.h:913 */
		size_t GetMemHeld(const SCompilationUnit* , size_t* );
		/* ../common/dwarf_symbols.h:915 */
		const char* GetCompileDir(const SCompilationUnit* );
		void ~SCompilationUnit(SCompilationUnit* );
		void SCompilationUnit(SCompilationUnit* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:923 */
	enum EPseudoCompilationUnit {
		EPseudoCuSymTab = 0,
		EPseudoCuDynSym = 1,
		EPseudoCuCount = 2,
	};
	/* ../common/dwarf_symbols.h:935 */
	struct SSymbolTableCuDesc {
		EPseudoCompilationUnit nPseudoCu; /* 0 4 */
		EModuleSection nTableSection; /* 4 4 */
		EModuleSection nStringSection; /* 8 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:944 */
	struct SAddrToCompilationUnit {
		uint32 nRelVirtStart; /* 0 4 */
		uint32 nRelVirtEnd; /* 4 4 */
		int nCompilationUnit; /* 8 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_symbols.h:1021 */
	struct SLineProgramInfo {
		uint8 nMinInstrSize; /* 0 1 */
		uint8 nMaxInstrSize; /* 1 1 */
		uint8 nDefaultIsStmt; /* 2 1 */
		int8 nLineBase; /* 3 1 */
		uint8 nLineRange; /* 4 1 */
		uint8 nOpcodeBase; /* 5 1 */
	};
	/* ../common/dwarf_symbols.h:256 */
	void CDwarfModule(CDwarfModule* );
	/* ../common/dwarf_symbols.h:257 */
	void ~CDwarfModule(CDwarfModule* );
	/* ../common/dwarf_symbols.h:284 */
	bool Init(CDwarfModule* , const char* , uint32, uint64, uint32, uint8, const void* , uint32, uint32);
	/* ../common/dwarf_symbols.h:292 */
	void Purge(CDwarfModule* );
	/* ../common/dwarf_symbols.h:316 */
	EOpenResult OpenAndParse(CDwarfModule* , const char* );
	/* ../common/dwarf_symbols.h:317 */
	void Close(CDwarfModule* );
	static const uint32 k_AllSymbolKindMask = 4294967295; /* 0 0 */
	/* ../common/dwarf_symbols.h:321 */
	bool FindSymbol(CDwarfModule* , uint32, uint64, SDwarfSymbolInfo* , uint32* );
	/* ../common/dwarf_symbols.h:325 */
	bool FindSourceLine(CDwarfModule* , uint64, SDwarfSourceLineInfo* , uint32* );
	/* ../common/dwarf_symbols.h:333 */
	void VisitAllSymbols(CDwarfModule* , uint32, pDwarfSymbolVisitor, void* );
	/* ../common/dwarf_symbols.h:344 */
	void VisitAllSourceLines(CDwarfModule* , uint32, pDwarfSourceLineVisitor, void* );
	/* ../common/dwarf_symbols.h:349 */
	void VisitAllStackFrameData(CDwarfModule* , pDwarfFdeInfoVisitor, void* );
	/* ../common/dwarf_symbols.h:352 */
	bool FindFrameData(CDwarfModule* , uint64, SDwarfCieInfo** , uint8** , SDwarfFdeInfo** , uint8** );
	/* ../common/dwarf_symbols.h:361 */
	bool BuildFrameUnwindTable(CDwarfModule* , const SDwarfCieInfo* , const SDwarfFdeInfo* , CDwarfUnwindTable* );
	/* ../common/dwarf_symbols.h:365 */
	void FatalParseProblem(CDwarfModule* , const char* , ...);
	/* ../common/dwarf_symbols.h:366 */
	void SymbolProblem(CDwarfModule* , const char* , ...);
	/* ../common/dwarf_symbols.h:367 */
	void SourceLineProblem(CDwarfModule* , const char* , ...);
	/* ../common/dwarf_symbols.h:368 */
	void FrameDataProblem(CDwarfModule* , const char* , ...);
	/* ../common/dwarf_symbols.h:369 */
	void CfiProblem(CDwarfModule* , const char* , ...);
	/* ../common/dwarf_symbols.h:375 */
	size_t GetMemHeld(const CDwarfModule* , size_t* );
	/* ../common/dwarf_symbols.h:377 */
	size_t GetMemUsed(const CDwarfModule* , size_t* );
	/* ../common/dwarf_symbols.h:397 */
	bool IsElf(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:401 */
	bool IsMacho(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:405 */
	EBinaryFormat GetBinaryFormat(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:409 */
	ECpuArch GetCpuArch(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:414 */
	bool MatchPrimaryBuildId(CDwarfModule* , const uint8* , int);
	/* ../common/dwarf_symbols.h:415 */
	uint8 GetPrimaryBuildIdFormat(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:419 */
	const void* GetPrimaryBuildIdData(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:423 */
	uint32 GetPrimaryBuildIdSize(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:428 */
	const char* GetBreakpadOsName(CDwarfModule* );
	/* ../common/dwarf_symbols.h:429 */
	const char* GetBreakpadArchName(CDwarfModule* );
	/* ../common/dwarf_symbols.h:430 */
	const char* GetBreakpadModuleId(CDwarfModule* , CBufferString* );
	/* ../common/dwarf_symbols.h:431 */
	const char* GetBreakpadModuleCodeId(CDwarfModule* , CBufferString* );
	/* ../common/dwarf_symbols.h:435 */
	const char* GetSourceMappingsInfo(CDwarfModule* , uint32* , uint32* );
	/* ../common/dwarf_symbols.h:437 */
	bool IsOpen(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:441 */
	int GetNumFailedOpenAttempts(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:445 */
	const char* GetPrimaryFilePath(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:449 */
	const char* GetUnqualifiedPrimaryFileName(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:454 */
	const char* GetPrimaryModuleName(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:460 */
	const char* GetActualDebugFilePath(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:464 */
	uint64 GetBaseAddress(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:468 */
	uint32 GetVirtualSize(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:472 */
	bool ContainsAddress(const CDwarfModule* , uint64);
	/* ../common/dwarf_symbols.h:478 */
	int GetNumCompilationUnits(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:483 */
	const char* GetCompileDirectory(const CDwarfModule* , int);
	/* ../common/dwarf_symbols.h:488 */
	int GetNumSourceFiles(const CDwarfModule* , int);
	/* ../common/dwarf_symbols.h:492 */
	const char* GetSourceFile(const CDwarfModule* , int, int);
	/* ../common/dwarf_symbols.h:499 */
	int GetNumFatalParseProblems(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:503 */
	int GetNumSymbolProblems(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:507 */
	int GetNumSourceLineProblems(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:511 */
	int GetNumFrameDataProblems(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:515 */
	int GetTotalParseProblems(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:522 */
	int GetNumCfiProblems(const CDwarfModule* );
	/* ../common/dwarf_symbols.h:527 */
	CDwarfModule* GetNextModule(CDwarfModule* );
	/* ../common/dwarf_symbols.h:531 */
	CDwarfModule** GetNextModuleLink(CDwarfModule* );
	/* ../common/dwarf_symbols.h:535 */
	void SetNextModule(CDwarfModule* , CDwarfModule* );
	/* ../common/dwarf_symbols.h:540 */
	bool IsCodeSymbolKind(EDwarfSymbolKind);
	/* ../common/dwarf_symbols.h:545 */
	bool IsDataSymbolKind(EDwarfSymbolKind);
	/* ../common/dwarf_symbols.h:550 */
	bool IsOtherSymbolKind(EDwarfSymbolKind);
protected:
	uint32 m_nInfoType; /* 0 4 */
	uint32 m_nMultiSlice; /* 4 4 */
	int m_nFailedOpenAttempts; /* 8 4 */
	int m_nFatalParseProblems; /* 12 4 */
	int m_nSymbolProblems; /* 16 4 */
	int m_nSourceLineProblems; /* 20 4 */
	int m_nFrameDataProblems; /* 24 4 */
	int m_nCfiProblems; /* 28 4 */
	CBufferString m_primaryFilePath; /* 32 16 */
	const char * m_pPrimaryFilePathFileName; /* 48 8 */
	CBufferString m_primaryModuleName; /* 56 16 */
	CBufferString m_debugFilePath; /* 72 16 */
	uint64 m_nBaseAddress; /* 88 8 */
	uint32 m_nExplicitVirtualSize; /* 96 4 */
	uint32 m_nFileVirtualSize; /* 100 4 */
	uint32 m_nPointerSize; /* 104 4 */
	uint32 m_nPageSize; /* 108 4 */
	uint32 m_nMultiSliceBase; /* 112 4 */
	FILE * m_pFile; /* 120 8 */
	CDwarfModule * m_pNext; /* 128 8 */
	EBinaryFormat m_format; /* 136 4 */
	ECpuArch m_cpuArch; /* 140 4 */
	union {
		uint8 m_anyHdr; /* 144 1 */
		Elf32_Ehdr m_elfHdr32; /* 144 52 */
		Elf64_Ehdr m_elfHdr64; /* 144 64 */
		mach_header m_machoHdr32; /* 144 28 */
		mach_header_64 m_machoHdr64; /* 144 32 */
	}; /* 144 64 */
	uint64 m_nSymModuleBaseAddress; /* 208 8 */
	uint8 m_nPrimaryBuildIdFormat; /* 216 1 */
	int m_nPrimaryBuildIdSize; /* 220 4 */
	uint8 m_primaryBuildId[64]; /* 224 64 */
	uint8 m_nFileBuildIdFormat; /* 288 1 */
	int m_nFileBuildIdSize; /* 292 4 */
	uint8 m_fileBuildId[64]; /* 296 64 */
	CBufferString m_primaryDebugLink; /* 360 16 */
	CBufferString m_fileDebugLink; /* 376 16 */
	static const const struct SModuleSectionDesc s_sectionDescs[14]; /* 0 0 */
	SModuleSection m_sections[14]; /* 392 224 */
	bool m_bReadSection[14]; /* 616 14 */
	EModuleSection m_frameDataSection; /* 632 4 */
	SModuleSection m_sourceMappingsSection; /* 640 16 */
	CDwarfVector<EDwarfSymbolKind> m_pRawSectionSymbolKind; /* 656 16 */
	CDwarfVector<char> m_pSymbolNames; /* 672 16 */
	CDwarfUndecorateName m_undecorator; /* 688 72 */
	static const uint32 k_nStrpOffsetMark = 2147483648; /* 0 0 */
	/* ../common/dwarf_symbols.h:688 */
	const char* GetNameRefString(const CDwarfModule* , NameRef_t);
	CDwarfVector<CDwarfModule::SDebugInfoEntry> m_pDies; /* 760 16 */
	/* ../common/dwarf_symbols.h:751 */
	int CompareSymbol(const void* , const void* );
	/* ../common/dwarf_symbols.h:795 */
	int CompareIncompleteSymbol(const void* , const void* );
	/* ../common/dwarf_symbols.h:840 */
	int CompareSourceLine(const void* , const void* );
	CDwarfVector<CDwarfModule::SCompilationUnit> m_pCompilationUnits; /* 776 16 */
	SCompilationUnit m_pseudoCu[2]; /* 792 304 */
	static struct SSymbolTableCuDesc s_symbolTableCuDescs[0]; /* 0 0 */
	/* ../common/dwarf_symbols.h:952 */
	int CompareAddrToCompilationUnit(const void* , const void* );
	CDwarfVector<CDwarfModule::SAddrToCompilationUnit> m_pAddrToCuMap; /* 1096 16 */
	/* ../common/dwarf_symbols.h:990 */
	int CompareFdeInfo(const void* , const void* );
	CDwarfVector<SDwarfCieInfo> m_pFrameCies; /* 1112 16 */
	CDwarfVector<SDwarfFdeInfo> m_pFrameFdes; /* 1128 16 */
	CDwarfVector<unsigned char> m_pFrameInstr; /* 1144 16 */
	/* ../common/dwarf_symbols.h:1031 */
	size_t GetMemHeld(const CBufferString* , size_t* );
	/* ../common/dwarf_symbols.h:1033 */
	void PrintProblem(CDwarfModule* , const char* , const char* , typedef __va_list_tag __va_list_tag* );
	/* ../common/dwarf_symbols.h:1035 */
	void Clear(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1036 */
	void SetPrimaryModuleNameFromFilePath(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1038 */
	EOpenResult OpenFile(CDwarfModule* , const char* , bool);
	/* ../common/dwarf_symbols.h:1039 */
	EOpenResult OpenSplitFile(CDwarfModule* , const char* );
	/* ../common/dwarf_symbols.h:1040 */
	EOpenResult OpenSplitFileOnPath(CDwarfModule* , const char* , const char* );
	/* ../common/dwarf_symbols.h:1041 */
	EOpenResult OpenBuildIdFile(CDwarfModule* , const char* );
	/* ../common/dwarf_symbols.h:1042 */
	EOpenResult OpenDebugLinkFile(CDwarfModule* , const char* );
	/* ../common/dwarf_symbols.h:1043 */
	void ClearFile(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1045 */
	EOpenResult ReadHeader(CDwarfModule* , bool);
	/* ../common/dwarf_symbols.h:1047 */
	EOpenResult ReadElfHeader(CDwarfModule* , uint8* );
	/* ../common/dwarf_symbols.h:1051 */
	EOpenResult ReadMachoSlice(CDwarfModule* , int, bool);
	/* ../common/dwarf_symbols.h:1052 */
	EOpenResult ReadMachoHeader(CDwarfModule* , uint8* , int);
	/* ../common/dwarf_symbols.h:1056 */
	bool HasRequiredDebugInfo(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1057 */
	EOpenResult ParseModule(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1061 */
	EOpenResult ParseElfNote(CDwarfModule* , uint32, uint32);
	/* ../common/dwarf_symbols.h:1062 */
	EOpenResult ParseGnuDebugLink(CDwarfModule* , uint32, uint32);
	/* ../common/dwarf_symbols.h:1067 */
	bool BuildAbbrevIndex(CDwarfModule* , SCompilationUnit* );
	/* ../common/dwarf_symbols.h:1069 */
	const char* GetSymbolName(CDwarfModule* , const SSymbol* );
	/* ../common/dwarf_symbols.h:1076 */
	uint32 AddSymbolName(CDwarfModule* , const char* , int, const char* );
	/* ../common/dwarf_symbols.h:1079 */
	SSymbol* FindSymbol(CDwarfModule* , uint32, SCompilationUnit* , uint32);
	/* ../common/dwarf_symbols.h:1082 */
	SSymbol* AddSymbol(CDwarfModule* , SCompilationUnit* , const char* , int, const char* , uint32, uint32, uint32, EDwarfSymbolKind);
	/* ../common/dwarf_symbols.h:1090 */
	void UpdateSymbolName(CDwarfModule* , SSymbol* , const char* , int, const char* );
	/* ../common/dwarf_symbols.h:1094 */
	void UpdateIncompleteSymbol(CDwarfModule* , SIncompleteSymbol* , const char* , int, const char* );
	/* ../common/dwarf_symbols.h:1098 */
	void RemoveSymbol(CDwarfModule* , SCompilationUnit* , SSymbol* );
	/* ../common/dwarf_symbols.h:1100 */
	void FillOutSymbolExtInfo(CDwarfModule* , SCompilationUnit* , SSymbol* , SDwarfSymbolInfo* );
	/* ../common/dwarf_symbols.h:1101 */
	bool VisitSymbolsInUnit(CDwarfModule* , uint32, SCompilationUnit* , pDwarfSymbolVisitor, void* );
	/* ../common/dwarf_symbols.h:1106 */
	void FillOutSourceLineExtInfo(CDwarfModule* , SCompilationUnit* , SSourceLine* , SDwarfSourceLineInfo* );
	/* ../common/dwarf_symbols.h:1107 */
	bool VisitSourceLinesInUnit(CDwarfModule* , uint32, SCompilationUnit* , pDwarfSourceLineVisitor, void* );
	/* ../common/dwarf_symbols.h:1112 */
	int FindDebugInfoEntryByInfoOffset(CDwarfModule* , uint32);
	/* ../common/dwarf_symbols.h:1114 */
	SCompilationUnit* AddCompilationUnit(CDwarfModule* , uint32, uint32, uint32);
	/* ../common/dwarf_symbols.h:1115 */
	SCompilationUnit* FindCompilationUnitByInfoOffset(CDwarfModule* , uint32);
	/* ../common/dwarf_symbols.h:1116 */
	SCompilationUnit* FindCompilationUnitByEntryInfoOffset(CDwarfModule* , uint32);
	/* ../common/dwarf_symbols.h:1117 */
	SCompilationUnit* FindCompilationUnitByLineOffset(CDwarfModule* , uint32);
	/* ../common/dwarf_symbols.h:1118 */
	SCompilationUnit* FindCompilationUnitByRelAddress(CDwarfModule* , uint32);
	/* ../common/dwarf_symbols.h:1119 */
	SCompilationUnit* FindCompilationUnitByFullAddress(CDwarfModule* , uint64);
	/* ../common/dwarf_symbols.h:1130 */
	bool ParseRangeList(CDwarfModule* , uint32, uint64, CDwarfVector<CDwarfModule::SRelVirtRange>* );
	/* ../common/dwarf_symbols.h:1132 */
	bool ParseCompilationUnitEntries(CDwarfModule* , SCompilationUnit* , CDwarfVector<CDwarfModule::SIncompleteSymbol>* , int* , bool);
	/* ../common/dwarf_symbols.h:1136 */
	int ParseCompilationUnit(CDwarfModule* , uint32, CDwarfVector<CDwarfModule::SIncompleteSymbol>* );
	/* ../common/dwarf_symbols.h:1138 */
	bool ParseCompilationUnits(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1140 */
	bool ParseAddressRanges(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1141 */
	bool BuildAddrToCuMap(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1143 */
	SSourceLine* FindSourceLine(CDwarfModule* , SCompilationUnit* , uint32);
	/* ../common/dwarf_symbols.h:1144 */
	SSourceLine* StartSourceLine(CDwarfModule* , SCompilationUnit* , uint64, uint32, uint32, SSourceLine* );
	/* ../common/dwarf_symbols.h:1145 */
	bool EndSourceLine(CDwarfModule* , SSourceLine* , uint64);
	/* ../common/dwarf_symbols.h:1146 */
	bool ExecuteLineProgram(CDwarfModule* , SCompilationUnit* , uint8* , uint8* , SLineProgramInfo* , uint32* );
	/* ../common/dwarf_symbols.h:1147 */
	bool ParseSourceLines(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1149 */
	SDwarfCieInfo* FindCie(CDwarfModule* , uint32);
	/* ../common/dwarf_symbols.h:1150 */
	bool ParseCie(CDwarfModule* , uint8* , uint8* , SDwarfCieInfo* );
	/* ../common/dwarf_symbols.h:1151 */
	bool ParseFde(CDwarfModule* , uint8* , uint8* , SDwarfFdeInfo* );
	/* ../common/dwarf_symbols.h:1152 */
	bool ParseFrameData(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1154 */
	bool UpdateCfiLocation(CDwarfModule* , CDwarfUnwindTable* , CDwarfCfiState* , uint32, bool);
	/* ../common/dwarf_symbols.h:1158 */
	bool ExecuteCfi(CDwarfModule* , CDwarfUnwindTable* , CDwarfCfiState* , const SDwarfCieInfo* , uint8* , uint32);
	/* ../common/dwarf_symbols.h:1164 */
	EOpenResult ReadSectionData(CDwarfModule* , SModuleSection* );
	/* ../common/dwarf_symbols.h:1165 */
	EOpenResult ReadAllSectionData(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1167 */
	EOpenResult ProcessDebugInfo(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1173 */
	EOpenResult ProcessSymbolTables(CDwarfModule* );
	/* ../common/dwarf_symbols.h:1175 */
	uint64 DecodeLeb128Full(CDwarfModule* , uint8** );
	/* ../common/dwarf_symbols.h:1176 */
	int64 DecodeSignedLeb128Full(CDwarfModule* , uint8** );
	/* ../common/dwarf_symbols.h:1178 */
	uint64 DecodeLeb128(CDwarfModule* , uint8** );
	/* ../common/dwarf_symbols.h:1190 */
	int64 DecodeSignedLeb128(CDwarfModule* , uint8** );
	/* ../common/dwarf_symbols.h:1208 */
	void DecodeSpecialLineOp(CDwarfModule* , uint64* , uint32* , uint8, SLineProgramInfo* );
	/* ../common/dwarf_symbols.cpp:6355 */
	EOpenResult ProcessMachoSymbolTable<nlist_64>(CDwarfModule* , const SSymbolTableCuDesc* );
	/* ../common/dwarf_symbols.cpp:6355 */
	EOpenResult ProcessMachoSymbolTable<nlist>(CDwarfModule* , const SSymbolTableCuDesc* );
	/* ../common/dwarf_symbols.cpp:6277 */
	EOpenResult ProcessElfSymbolTable<Elf64_Sym>(CDwarfModule* , const SSymbolTableCuDesc* );
	/* ../common/dwarf_symbols.cpp:6277 */
	EOpenResult ProcessElfSymbolTable<Elf32_Sym>(CDwarfModule* , const SSymbolTableCuDesc* );
	/* ../common/dwarf_symbols.cpp:2642 */
	EOpenResult ParseMachoSections<mach_header_64, segment_command_64, 25, section_64, nlist_64>(CDwarfModule* );
	/* ../common/dwarf_symbols.cpp:2642 */
	EOpenResult ParseMachoSections<mach_header, segment_command, 1, section, nlist>(CDwarfModule* );
	/* ../common/dwarf_symbols.cpp:2409 */
	EOpenResult ParseElfSections<Elf64_Ehdr, Elf64_Shdr>(CDwarfModule* );
	/* ../common/dwarf_symbols.cpp:2409 */
	EOpenResult ParseElfSections<Elf32_Ehdr, Elf32_Shdr>(CDwarfModule* );
	/* ../common/dwarf_symbols.cpp:2188 */
	EOpenResult FindMachoVirtualSize<mach_header, segment_command, 1, section>(CDwarfModule* , mach_header* );
	/* ../common/dwarf_symbols.cpp:2188 */
	EOpenResult FindMachoVirtualSize<mach_header_64, segment_command_64, 25, section_64>(CDwarfModule* , mach_header_64* );
	/* ../common/dwarf_symbols.cpp:1980 */
	EOpenResult FindElfVirtualSize<Elf32_Ehdr, Elf32_Phdr>(CDwarfModule* , Elf32_Ehdr* );
	/* ../common/dwarf_symbols.cpp:1980 */
	EOpenResult FindElfVirtualSize<Elf64_Ehdr, Elf64_Phdr>(CDwarfModule* , Elf64_Ehdr* );
	void CDwarfModule(class CDwarfModule *); /* linkage=_ZN12CDwarfModuleC4Ev */
	void ~CDwarfModule(class CDwarfModule *); /* linkage=_ZN12CDwarfModuleD4Ev */
	bool Init(class CDwarfModule *, const char  *, uint32, uint64, uint32, uint8, const void  *, uint32, uint32); /* linkage=_ZN12CDwarfModule4InitEPKcjyjhPKvjj */
	/* <44bca1> ../common/dwarf_symbols.cpp:633 */
	void Purge(class CDwarfModule *); /* linkage=_ZN12CDwarfModule5PurgeEv */
	enum EOpenResult OpenAndParse(class CDwarfModule *, const char  *); /* linkage=_ZN12CDwarfModule12OpenAndParseEPKc */
	void Close(class CDwarfModule *); /* linkage=_ZN12CDwarfModule5CloseEv */
	bool FindSymbol(class CDwarfModule *, uint32, uint64, class SDwarfSymbolInfo *, uint32 *); /* linkage=_ZN12CDwarfModule10FindSymbolEjyP16SDwarfSymbolInfoPj */
	bool FindSourceLine(class CDwarfModule *, uint64, class SDwarfSourceLineInfo *, uint32 *); /* linkage=_ZN12CDwarfModule14FindSourceLineEyP20SDwarfSourceLineInfoPj */
	void VisitAllSymbols(class CDwarfModule *, uint32, pDwarfSymbolVisitor, void *); /* linkage=_ZN12CDwarfModule15VisitAllSymbolsEjPF17EDwarfVisitResultPS_PvPK16SDwarfSymbolInfoES2_ */
	void VisitAllSourceLines(class CDwarfModule *, uint32, pDwarfSourceLineVisitor, void *); /* linkage=_ZN12CDwarfModule19VisitAllSourceLinesEjPF17EDwarfVisitResultPS_PvPK20SDwarfSourceLineInfoES2_ */
	void VisitAllStackFrameData(class CDwarfModule *, pDwarfFdeInfoVisitor, void *); /* linkage=_ZN12CDwarfModule22VisitAllStackFrameDataEPF17EDwarfVisitResultPS_PvPK13SDwarfCieInfoPK13SDwarfFdeInfoES2_ */
	bool FindFrameData(class CDwarfModule *, uint64, class SDwarfCieInfo * *, uint8 * *, class SDwarfFdeInfo * *, uint8 * *); /* linkage=_ZN12CDwarfModule13FindFrameDataEyPP13SDwarfCieInfoPPhPP13SDwarfFdeInfoS4_ */
	bool BuildFrameUnwindTable(class CDwarfModule *, const class SDwarfCieInfo  *, const class SDwarfFdeInfo  *, class CDwarfUnwindTable *); /* linkage=_ZN12CDwarfModule21BuildFrameUnwindTableEPK13SDwarfCieInfoPK13SDwarfFdeInfoP17CDwarfUnwindTable */
	void FatalParseProblem(class CDwarfModule *, const char  *, ...); /* linkage=_ZN12CDwarfModule17FatalParseProblemEPKcz */
	void SymbolProblem(class CDwarfModule *, const char  *, ...); /* linkage=_ZN12CDwarfModule13SymbolProblemEPKcz */
	void SourceLineProblem(class CDwarfModule *, const char  *, ...); /* linkage=_ZN12CDwarfModule17SourceLineProblemEPKcz */
	void FrameDataProblem(class CDwarfModule *, const char  *, ...); /* linkage=_ZN12CDwarfModule16FrameDataProblemEPKcz */
	void CfiProblem(class CDwarfModule *, const char  *, ...); /* linkage=_ZN12CDwarfModule10CfiProblemEPKcz */
	size_t GetMemHeld(const class CDwarfModule  *, size_t *); /* linkage=_ZNK12CDwarfModule10GetMemHeldEPm */
	size_t GetMemUsed(const class CDwarfModule  *, size_t *); /* linkage=_ZNK12CDwarfModule10GetMemUsedEPm */
	bool IsElf(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule5IsElfEv */
	bool IsMacho(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule7IsMachoEv */
	enum EBinaryFormat GetBinaryFormat(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule15GetBinaryFormatEv */
	enum ECpuArch GetCpuArch(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule10GetCpuArchEv */
	bool MatchPrimaryBuildId(class CDwarfModule *, const uint8  *, int); /* linkage=_ZN12CDwarfModule19MatchPrimaryBuildIdEPKhi */
	uint8 GetPrimaryBuildIdFormat(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule23GetPrimaryBuildIdFormatEv */
	const void  * GetPrimaryBuildIdData(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule21GetPrimaryBuildIdDataEv */
	uint32 GetPrimaryBuildIdSize(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule21GetPrimaryBuildIdSizeEv */
	const char  * GetBreakpadOsName(class CDwarfModule *); /* linkage=_ZN12CDwarfModule17GetBreakpadOsNameEv */
	const char  * GetBreakpadArchName(class CDwarfModule *); /* linkage=_ZN12CDwarfModule19GetBreakpadArchNameEv */
	const char  * GetBreakpadModuleId(class CDwarfModule *, class CBufferString *); /* linkage=_ZN12CDwarfModule19GetBreakpadModuleIdEP13CBufferString */
	const char  * GetBreakpadModuleCodeId(class CDwarfModule *, class CBufferString *); /* linkage=_ZN12CDwarfModule23GetBreakpadModuleCodeIdEP13CBufferString */
	const char  * GetSourceMappingsInfo(class CDwarfModule *, uint32 *, uint32 *); /* linkage=_ZN12CDwarfModule21GetSourceMappingsInfoEPjS0_ */
	bool IsOpen(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule6IsOpenEv */
	int GetNumFailedOpenAttempts(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule24GetNumFailedOpenAttemptsEv */
	const char  * GetPrimaryFilePath(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule18GetPrimaryFilePathEv */
	const char  * GetUnqualifiedPrimaryFileName(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule29GetUnqualifiedPrimaryFileNameEv */
	const char  * GetPrimaryModuleName(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule20GetPrimaryModuleNameEv */
	const char  * GetActualDebugFilePath(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule22GetActualDebugFilePathEv */
	uint64 GetBaseAddress(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule14GetBaseAddressEv */
	uint32 GetVirtualSize(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule14GetVirtualSizeEv */
	bool ContainsAddress(const class CDwarfModule  *, uint64); /* linkage=_ZNK12CDwarfModule15ContainsAddressEy */
	int GetNumCompilationUnits(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule22GetNumCompilationUnitsEv */
	const char  * GetCompileDirectory(const class CDwarfModule  *, int); /* linkage=_ZNK12CDwarfModule19GetCompileDirectoryEi */
	int GetNumSourceFiles(const class CDwarfModule  *, int); /* linkage=_ZNK12CDwarfModule17GetNumSourceFilesEi */
	const char  * GetSourceFile(const class CDwarfModule  *, int, int); /* linkage=_ZNK12CDwarfModule13GetSourceFileEii */
	int GetNumFatalParseProblems(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule24GetNumFatalParseProblemsEv */
	int GetNumSymbolProblems(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule20GetNumSymbolProblemsEv */
	int GetNumSourceLineProblems(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule24GetNumSourceLineProblemsEv */
	int GetNumFrameDataProblems(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule23GetNumFrameDataProblemsEv */
	int GetTotalParseProblems(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule21GetTotalParseProblemsEv */
	int GetNumCfiProblems(const class CDwarfModule  *); /* linkage=_ZNK12CDwarfModule17GetNumCfiProblemsEv */
	class CDwarfModule * GetNextModule(class CDwarfModule *); /* linkage=_ZN12CDwarfModule13GetNextModuleEv */
	class CDwarfModule * * GetNextModuleLink(class CDwarfModule *); /* linkage=_ZN12CDwarfModule17GetNextModuleLinkEv */
	void SetNextModule(class CDwarfModule *, class CDwarfModule *); /* linkage=_ZN12CDwarfModule13SetNextModuleEPS_ */
	bool IsCodeSymbolKind(enum EDwarfSymbolKind); /* linkage=_ZN12CDwarfModule16IsCodeSymbolKindE16EDwarfSymbolKind */
	bool IsDataSymbolKind(enum EDwarfSymbolKind); /* linkage=_ZN12CDwarfModule16IsDataSymbolKindE16EDwarfSymbolKind */
	bool IsOtherSymbolKind(enum EDwarfSymbolKind); /* linkage=_ZN12CDwarfModule17IsOtherSymbolKindE16EDwarfSymbolKind */
	const char  * GetNameRefString(const class CDwarfModule  *, NameRef_t); /* linkage=_ZNK12CDwarfModule16GetNameRefStringEj */
	/* <44922f> ../common/dwarf_symbols.h:751 */
	int CompareSymbol(const void  *, const void  *); /* linkage=_ZN12CDwarfModule13CompareSymbolEPKvS1_ */
	/* <4492b5> ../common/dwarf_symbols.h:795 */
	int CompareIncompleteSymbol(const void  *, const void  *); /* linkage=_ZN12CDwarfModule23CompareIncompleteSymbolEPKvS1_ */
	/* <44933b> ../common/dwarf_symbols.h:840 */
	int CompareSourceLine(const void  *, const void  *); /* linkage=_ZN12CDwarfModule17CompareSourceLineEPKvS1_ */
	/* <4493c1> ../common/dwarf_symbols.h:952 */
	int CompareAddrToCompilationUnit(const void  *, const void  *); /* linkage=_ZN12CDwarfModule28CompareAddrToCompilationUnitEPKvS1_ */
	/* <449453> ../common/dwarf_symbols.h:990 */
	int CompareFdeInfo(const void  *, const void  *); /* linkage=_ZN12CDwarfModule14CompareFdeInfoEPKvS1_ */
	/* <449fa5> ../common/dwarf_symbols.cpp:1409 */
	size_t GetMemHeld(const class CBufferString  *, size_t *); /* linkage=_ZN12CDwarfModule10GetMemHeldEPK13CBufferStringPm */
	void PrintProblem(class CDwarfModule *, const char  *, const char  *, class typedef __va_list_tag __va_list_tag *); /* linkage=_ZN12CDwarfModule12PrintProblemEPKcS1_P13__va_list_tag */
	void Clear(class CDwarfModule *); /* linkage=_ZN12CDwarfModule5ClearEv */
	/* <44a355> ../common/dwarf_symbols.cpp:1461 */
	void SetPrimaryModuleNameFromFilePath(class CDwarfModule *); /* linkage=_ZN12CDwarfModule32SetPrimaryModuleNameFromFilePathEv */
	enum EOpenResult OpenFile(class CDwarfModule *, const char  *, bool); /* linkage=_ZN12CDwarfModule8OpenFileEPKcb */
	/* <44d4c7> ../common/dwarf_symbols.cpp:1511 */
	enum EOpenResult OpenSplitFile(class CDwarfModule *, const char  *); /* linkage=_ZN12CDwarfModule13OpenSplitFileEPKc */
	enum EOpenResult OpenSplitFileOnPath(class CDwarfModule *, const char  *, const char  *); /* linkage=_ZN12CDwarfModule19OpenSplitFileOnPathEPKcS1_ */
	/* <44db50> ../common/dwarf_symbols.cpp:1632 */
	enum EOpenResult OpenBuildIdFile(class CDwarfModule *, const char  *); /* linkage=_ZN12CDwarfModule15OpenBuildIdFileEPKc */
	enum EOpenResult OpenDebugLinkFile(class CDwarfModule *, const char  *); /* linkage=_ZN12CDwarfModule17OpenDebugLinkFileEPKc */
	void ClearFile(class CDwarfModule *); /* linkage=_ZN12CDwarfModule9ClearFileEv */
	enum EOpenResult ReadHeader(class CDwarfModule *, bool); /* linkage=_ZN12CDwarfModule10ReadHeaderEb */
	enum EOpenResult ReadElfHeader(class CDwarfModule *, uint8 *); /* linkage=_ZN12CDwarfModule13ReadElfHeaderEPh */
	enum EOpenResult ReadMachoSlice(class CDwarfModule *, int, bool); /* linkage=_ZN12CDwarfModule14ReadMachoSliceEib */
	enum EOpenResult ReadMachoHeader(class CDwarfModule *, uint8 *, int); /* linkage=_ZN12CDwarfModule15ReadMachoHeaderEPhi */
	bool HasRequiredDebugInfo(class CDwarfModule *); /* linkage=_ZN12CDwarfModule20HasRequiredDebugInfoEv */
	enum EOpenResult ParseModule(class CDwarfModule *); /* linkage=_ZN12CDwarfModule11ParseModuleEv */
	/* <44a4fd> ../common/dwarf_symbols.cpp:2503 */
	enum EOpenResult ParseElfNote(class CDwarfModule *, uint32, uint32); /* linkage=_ZN12CDwarfModule12ParseElfNoteEjj */
	/* <44a5b9> ../common/dwarf_symbols.cpp:2585 */
	enum EOpenResult ParseGnuDebugLink(class CDwarfModule *, uint32, uint32); /* linkage=_ZN12CDwarfModule17ParseGnuDebugLinkEjj */
	bool BuildAbbrevIndex(class CDwarfModule *, class SCompilationUnit *); /* linkage=_ZN12CDwarfModule16BuildAbbrevIndexEPNS_16SCompilationUnitE */
	const char  * GetSymbolName(class CDwarfModule *, const class SSymbol  *); /* linkage=_ZN12CDwarfModule13GetSymbolNameEPKNS_7SSymbolE */
	uint32 AddSymbolName(class CDwarfModule *, const char  *, int, const char  *); /* linkage=_ZN12CDwarfModule13AddSymbolNameEPKciS1_ */
	class SSymbol * FindSymbol(class CDwarfModule *, uint32, class SCompilationUnit *, uint32); /* linkage=_ZN12CDwarfModule10FindSymbolEjPNS_16SCompilationUnitEj */
	class SSymbol * AddSymbol(class CDwarfModule *, class SCompilationUnit *, const char  *, int, const char  *, uint32, uint32, uint32, enum EDwarfSymbolKind); /* linkage=_ZN12CDwarfModule9AddSymbolEPNS_16SCompilationUnitEPKciS3_jjj16EDwarfSymbolKind */
	/* <44b630> ../common/dwarf_symbols.cpp:2998 */
	void UpdateSymbolName(class CDwarfModule *, class SSymbol *, const char  *, int, const char  *); /* linkage=_ZN12CDwarfModule16UpdateSymbolNameEPNS_7SSymbolEPKciS3_ */
	void UpdateIncompleteSymbol(class CDwarfModule *, class SIncompleteSymbol *, const char  *, int, const char  *); /* linkage=_ZN12CDwarfModule22UpdateIncompleteSymbolEPNS_17SIncompleteSymbolEPKciS3_ */
	void RemoveSymbol(class CDwarfModule *, class SCompilationUnit *, class SSymbol *); /* linkage=_ZN12CDwarfModule12RemoveSymbolEPNS_16SCompilationUnitEPNS_7SSymbolE */
	/* <449bb5> ../common/dwarf_symbols.cpp:871 */
	void FillOutSymbolExtInfo(class CDwarfModule *, class SCompilationUnit *, class SSymbol *, class SDwarfSymbolInfo *); /* linkage=_ZN12CDwarfModule20FillOutSymbolExtInfoEPNS_16SCompilationUnitEPNS_7SSymbolEP16SDwarfSymbolInfo */
	bool VisitSymbolsInUnit(class CDwarfModule *, uint32, class SCompilationUnit *, pDwarfSymbolVisitor, void *); /* linkage=_ZN12CDwarfModule18VisitSymbolsInUnitEjPNS_16SCompilationUnitEPF17EDwarfVisitResultPS_PvPK16SDwarfSymbolInfoES4_ */
	/* <449cb1> ../common/dwarf_symbols.cpp:930 */
	void FillOutSourceLineExtInfo(class CDwarfModule *, class SCompilationUnit *, class SSourceLine *, class SDwarfSourceLineInfo *); /* linkage=_ZN12CDwarfModule24FillOutSourceLineExtInfoEPNS_16SCompilationUnitEPNS_11SSourceLineEP20SDwarfSourceLineInfo */
	/* <449d98> ../common/dwarf_symbols.cpp:940 */
	bool VisitSourceLinesInUnit(class CDwarfModule *, uint32, class SCompilationUnit *, pDwarfSourceLineVisitor, void *); /* linkage=_ZN12CDwarfModule22VisitSourceLinesInUnitEjPNS_16SCompilationUnitEPF17EDwarfVisitResultPS_PvPK20SDwarfSourceLineInfoES4_ */
	int FindDebugInfoEntryByInfoOffset(class CDwarfModule *, uint32); /* linkage=_ZN12CDwarfModule30FindDebugInfoEntryByInfoOffsetEj */
	class SCompilationUnit * AddCompilationUnit(class CDwarfModule *, uint32, uint32, uint32); /* linkage=_ZN12CDwarfModule18AddCompilationUnitEjjj */
	/* <449a59> ../common/dwarf_symbols.cpp:687 */
	class SCompilationUnit * FindCompilationUnitByInfoOffset(class CDwarfModule *, uint32); /* linkage=_ZN12CDwarfModule31FindCompilationUnitByInfoOffsetEj */
	class SCompilationUnit * FindCompilationUnitByEntryInfoOffset(class CDwarfModule *, uint32); /* linkage=_ZN12CDwarfModule36FindCompilationUnitByEntryInfoOffsetEj */
	/* <449b07> ../common/dwarf_symbols.cpp:715 */
	class SCompilationUnit * FindCompilationUnitByLineOffset(class CDwarfModule *, uint32); /* linkage=_ZN12CDwarfModule31FindCompilationUnitByLineOffsetEj */
	class SCompilationUnit * FindCompilationUnitByRelAddress(class CDwarfModule *, uint32); /* linkage=_ZN12CDwarfModule31FindCompilationUnitByRelAddressEj */
	class SCompilationUnit * FindCompilationUnitByFullAddress(class CDwarfModule *, uint64); /* linkage=_ZN12CDwarfModule32FindCompilationUnitByFullAddressEy */
	bool ParseRangeList(class CDwarfModule *, uint32, uint64, class CDwarfVector<CDwarfModule::SRelVirtRange> *); /* linkage=_ZN12CDwarfModule14ParseRangeListEjyP12CDwarfVectorINS_13SRelVirtRangeEE */
	bool ParseCompilationUnitEntries(class CDwarfModule *, class SCompilationUnit *, class CDwarfVector<CDwarfModule::SIncompleteSymbol> *, int *, bool); /* linkage=_ZN12CDwarfModule27ParseCompilationUnitEntriesEPNS_16SCompilationUnitEP12CDwarfVectorINS_17SIncompleteSymbolEEPib */
	int ParseCompilationUnit(class CDwarfModule *, uint32, class CDwarfVector<CDwarfModule::SIncompleteSymbol> *); /* linkage=_ZN12CDwarfModule20ParseCompilationUnitEjP12CDwarfVectorINS_17SIncompleteSymbolEE */
	/* <44c0f9> ../common/dwarf_symbols.cpp:4250 */
	bool ParseCompilationUnits(class CDwarfModule *); /* linkage=_ZN12CDwarfModule21ParseCompilationUnitsEv */
	bool ParseAddressRanges(class CDwarfModule *); /* linkage=_ZN12CDwarfModule18ParseAddressRangesEv */
	bool BuildAddrToCuMap(class CDwarfModule *); /* linkage=_ZN12CDwarfModule16BuildAddrToCuMapEv */
	/* <44b7e2> ../common/dwarf_symbols.cpp:4667 */
	class SSourceLine * FindSourceLine(class CDwarfModule *, class SCompilationUnit *, uint32); /* linkage=_ZN12CDwarfModule14FindSourceLineEPNS_16SCompilationUnitEj */
	class SSourceLine * StartSourceLine(class CDwarfModule *, class SCompilationUnit *, uint64, uint32, uint32, class SSourceLine *); /* linkage=_ZN12CDwarfModule15StartSourceLineEPNS_16SCompilationUnitEyjjPNS_11SSourceLineE */
	/* <44b8d0> ../common/dwarf_symbols.cpp:4775 */
	bool EndSourceLine(class CDwarfModule *, class SSourceLine *, uint64); /* linkage=_ZN12CDwarfModule13EndSourceLineEPNS_11SSourceLineEy */
	bool ExecuteLineProgram(class CDwarfModule *, class SCompilationUnit *, uint8 *, uint8 *, class SLineProgramInfo *, uint32 *); /* linkage=_ZN12CDwarfModule18ExecuteLineProgramEPNS_16SCompilationUnitEPhS2_PNS_16SLineProgramInfoEPj */
	/* <44d469> ../common/dwarf_symbols.cpp:5075 */
	bool ParseSourceLines(class CDwarfModule *); /* linkage=_ZN12CDwarfModule16ParseSourceLinesEv */
	/* <44b9a6> ../common/dwarf_symbols.cpp:5319 */
	class SDwarfCieInfo * FindCie(class CDwarfModule *, uint32); /* linkage=_ZN12CDwarfModule7FindCieEj */
	bool ParseCie(class CDwarfModule *, uint8 *, uint8 *, class SDwarfCieInfo *); /* linkage=_ZN12CDwarfModule8ParseCieEPhS0_P13SDwarfCieInfo */
	bool ParseFde(class CDwarfModule *, uint8 *, uint8 *, class SDwarfFdeInfo *); /* linkage=_ZN12CDwarfModule8ParseFdeEPhS0_P13SDwarfFdeInfo */
	bool ParseFrameData(class CDwarfModule *); /* linkage=_ZN12CDwarfModule14ParseFrameDataEv */
	bool UpdateCfiLocation(class CDwarfModule *, class CDwarfUnwindTable *, class CDwarfCfiState *, uint32, bool); /* linkage=_ZN12CDwarfModule17UpdateCfiLocationEP17CDwarfUnwindTableP14CDwarfCfiStatejb */
	bool ExecuteCfi(class CDwarfModule *, class CDwarfUnwindTable *, class CDwarfCfiState *, const class SDwarfCieInfo  *, uint8 *, uint32); /* linkage=_ZN12CDwarfModule10ExecuteCfiEP17CDwarfUnwindTableP14CDwarfCfiStatePK13SDwarfCieInfoPhj */
	enum EOpenResult ReadSectionData(class CDwarfModule *, class SModuleSection *); /* linkage=_ZN12CDwarfModule15ReadSectionDataEPNS_14SModuleSectionE */
	enum EOpenResult ReadAllSectionData(class CDwarfModule *); /* linkage=_ZN12CDwarfModule18ReadAllSectionDataEv */
	enum EOpenResult ProcessDebugInfo(class CDwarfModule *); /* linkage=_ZN12CDwarfModule16ProcessDebugInfoEv */
	/* <44ba77> ../common/dwarf_symbols.cpp:6428 */
	enum EOpenResult ProcessSymbolTables(class CDwarfModule *); /* linkage=_ZN12CDwarfModule19ProcessSymbolTablesEv */
	/* <44bacb> ../common/dwarf_symbols.cpp:6498 */
	uint64 DecodeLeb128Full(class CDwarfModule *, uint8 * *); /* linkage=_ZN12CDwarfModule16DecodeLeb128FullEPPh */
	int64 DecodeSignedLeb128Full(class CDwarfModule *, uint8 * *); /* linkage=_ZN12CDwarfModule22DecodeSignedLeb128FullEPPh */
	uint64 DecodeLeb128(class CDwarfModule *, uint8 * *); /* linkage=_ZN12CDwarfModule12DecodeLeb128EPPh */
	int64 DecodeSignedLeb128(class CDwarfModule *, uint8 * *); /* linkage=_ZN12CDwarfModule18DecodeSignedLeb128EPPh */
	void DecodeSpecialLineOp(class CDwarfModule *, uint64 *, uint32 *, uint8, class SLineProgramInfo *); /* linkage=_ZN12CDwarfModule19DecodeSpecialLineOpEPyPjhPNS_16SLineProgramInfoE */
	enum EOpenResult ProcessMachoSymbolTable<nlist_64>(class CDwarfModule *, const class SSymbolTableCuDesc  *); /* linkage=_ZN12CDwarfModule23ProcessMachoSymbolTableI8nlist_64EENS_11EOpenResultEPKNS_18SSymbolTableCuDescE */
	enum EOpenResult ProcessMachoSymbolTable<nlist>(class CDwarfModule *, const class SSymbolTableCuDesc  *); /* linkage=_ZN12CDwarfModule23ProcessMachoSymbolTableI5nlistEENS_11EOpenResultEPKNS_18SSymbolTableCuDescE */
	enum EOpenResult ProcessElfSymbolTable<Elf64_Sym>(class CDwarfModule *, const class SSymbolTableCuDesc  *); /* linkage=_ZN12CDwarfModule21ProcessElfSymbolTableI9Elf64_SymEENS_11EOpenResultEPKNS_18SSymbolTableCuDescE */
	enum EOpenResult ProcessElfSymbolTable<Elf32_Sym>(class CDwarfModule *, const class SSymbolTableCuDesc  *); /* linkage=_ZN12CDwarfModule21ProcessElfSymbolTableI9Elf32_SymEENS_11EOpenResultEPKNS_18SSymbolTableCuDescE */
	enum EOpenResult ParseMachoSections<mach_header_64, segment_command_64, 25, section_64, nlist_64>(class CDwarfModule *); /* linkage=_ZN12CDwarfModule18ParseMachoSectionsI14mach_header_6418segment_command_64Lj25E10section_648nlist_64EENS_11EOpenResultEv */
	enum EOpenResult ParseMachoSections<mach_header, segment_command, 1, section, nlist>(class CDwarfModule *); /* linkage=_ZN12CDwarfModule18ParseMachoSectionsI11mach_header15segment_commandLj1E7section5nlistEENS_11EOpenResultEv */
	enum EOpenResult ParseElfSections<Elf64_Ehdr, Elf64_Shdr>(class CDwarfModule *); /* linkage=_ZN12CDwarfModule16ParseElfSectionsI10Elf64_Ehdr10Elf64_ShdrEENS_11EOpenResultEv */
	enum EOpenResult ParseElfSections<Elf32_Ehdr, Elf32_Shdr>(class CDwarfModule *); /* linkage=_ZN12CDwarfModule16ParseElfSectionsI10Elf32_Ehdr10Elf32_ShdrEENS_11EOpenResultEv */
	enum EOpenResult FindMachoVirtualSize<mach_header, segment_command, 1, section>(class CDwarfModule *, class mach_header *); /* linkage=_ZN12CDwarfModule20FindMachoVirtualSizeI11mach_header15segment_commandLj1E7sectionEENS_11EOpenResultEPT_ */
	enum EOpenResult FindMachoVirtualSize<mach_header_64, segment_command_64, 25, section_64>(class CDwarfModule *, class mach_header_64 *); /* linkage=_ZN12CDwarfModule20FindMachoVirtualSizeI14mach_header_6418segment_command_64Lj25E10section_64EENS_11EOpenResultEPT_ */
	enum EOpenResult FindElfVirtualSize<Elf32_Ehdr, Elf32_Phdr>(class CDwarfModule *, Elf32_Ehdr *); /* linkage=_ZN12CDwarfModule18FindElfVirtualSizeI10Elf32_Ehdr10Elf32_PhdrEENS_11EOpenResultEPT_ */
	enum EOpenResult FindElfVirtualSize<Elf64_Ehdr, Elf64_Phdr>(class CDwarfModule *, Elf64_Ehdr *); /* linkage=_ZN12CDwarfModule18FindElfVirtualSizeI10Elf64_Ehdr10Elf64_PhdrEENS_11EOpenResultEPT_ */
};

// <00420607> ../common/dwarf_symbols.h:256
void CDwarfModule::CDwarfModule()
{
} /* size: 0 */

// <00420674> ../common/dwarf_symbols.h:257
void CDwarfModule::~CDwarfModule()
{
} /* size: 0 */

// <00421C4A> ../common/dwarf_symbols.h:437
inline void CDwarfModule::IsOpen()
{
} /* size: 0 */

// <00421C31> ../common/dwarf_symbols.h:441
inline void CDwarfModule::GetNumFailedOpenAttempts()
{
} /* size: 0 */

// <00421C18> ../common/dwarf_symbols.h:445
inline void CDwarfModule::GetPrimaryFilePath()
{
} /* size: 0 */

// <00421BFF> ../common/dwarf_symbols.h:454
inline void CDwarfModule::GetPrimaryModuleName()
{
} /* size: 0 */

// <00421BE6> ../common/dwarf_symbols.h:464
inline void CDwarfModule::GetBaseAddress()
{
} /* size: 0 */

// <00448C64> ../common/dwarf_symbols.h:468
inline void CDwarfModule::GetVirtualSize()
{
} /* size: 0 */

// <00448C3E> ../common/dwarf_symbols.h:472
inline void CDwarfModule::ContainsAddress(uint64 nAddr)
{
} /* size: 0 */

// <00421B8E> ../common/dwarf_symbols.h:527
inline void CDwarfModule::GetNextModule()
{
} /* size: 0 */

// <00421B75> ../common/dwarf_symbols.h:531
inline void CDwarfModule::GetNextModuleLink()
{
} /* size: 0 */

// <00421B4F> ../common/dwarf_symbols.h:535
inline void CDwarfModule::SetNextModule(CDwarfModule* pNext)
{
} /* size: 0 */

// <00448C18> ../common/dwarf_symbols.h:688
inline void CDwarfModule::GetNameRefString(NameRef_t nRef)
{
} /* size: 0 */

// <00448BFF> ../common/dwarf_symbols.h:745
inline void SSymbol::HasName()
{
} /* size: 0 */

// <0044922F> ../common/dwarf_symbols.h:751
// variables: 2
// function call: 1
void CompareSymbol(const void* pV1, const void* pV2)
{
	const SSymbol* p1; // 753
	const SSymbol* p2; // 754
	CompareSymbol(const void* pV1,
			const void* pV2);  // 751
} /* size: 75, variables: 2, inline expansions: 1 (17 bytes) */

// <00448BC2> ../common/dwarf_symbols.h:751
// variables: 2
inline void CompareSymbol(const void* pV1, const void* pV2)
{
	const SSymbol* p1; // 753
	const SSymbol* p2; // 754
} /* size: 0, variables: 2 */

// <004492B5> ../common/dwarf_symbols.h:795
// variables: 2
// function call: 1
void CompareIncompleteSymbol(const void* pV1, const void* pV2)
{
	const SIncompleteSymbol* p1; // 797
	const SIncompleteSymbol* p2; // 798
	CompareIncompleteSymbol(const void* pV1,
				const void* pV2);  // 795
} /* size: 85, variables: 2, inline expansions: 1 (17 bytes) */

// <00448B85> ../common/dwarf_symbols.h:795
// variables: 2
inline void CompareIncompleteSymbol(const void* pV1, const void* pV2)
{
	const SIncompleteSymbol* p1; // 797
	const SIncompleteSymbol* p2; // 798
} /* size: 0, variables: 2 */

// <0044933B> ../common/dwarf_symbols.h:840
// variables: 2
// function call: 1
void CompareSourceLine(const void* pV1, const void* pV2)
{
	const SSourceLine* p1; // 842
	const SSourceLine* p2; // 843
	CompareSourceLine(const void* pV1,
				const void* pV2);  // 840
} /* size: 49, variables: 2, inline expansions: 1 (17 bytes) */

// <00448B48> ../common/dwarf_symbols.h:840
// variables: 2
inline void CompareSourceLine(const void* pV1, const void* pV2)
{
	const SSourceLine* p1; // 842
	const SSourceLine* p2; // 843
} /* size: 0, variables: 2 */

// <00447303> ../common/dwarf_symbols.h:871
void SCompilationUnit::SCompilationUnit()
{
} /* size: 0 */

// <004472E6> ../common/dwarf_symbols.h:871
inline void SCompilationUnit::SCompilationUnit()
{
} /* size: 0 */

// <004472CF> ../common/dwarf_symbols.h:871
void SCompilationUnit::~SCompilationUnit()
{
} /* size: 0 */

// <004472B2> ../common/dwarf_symbols.h:871
inline void SCompilationUnit::~SCompilationUnit()
{
} /* size: 0 */

// <00448B2F> ../common/dwarf_symbols.h:915
inline void SCompilationUnit::GetCompileDir()
{
} /* size: 0 */

// <004493C1> ../common/dwarf_symbols.h:952
// variables: 2
// function call: 1
void CompareAddrToCompilationUnit(const void* pV1, const void* pV2)
{
	const SAddrToCompilationUnit* p1; // 954
	const SAddrToCompilationUnit* p2; // 955
	CompareAddrToCompilationUnit(const void* pV1,
					const void* pV2);  // 952
} /* size: 71, variables: 2, inline expansions: 1 (20 bytes) */

// <00448AF2> ../common/dwarf_symbols.h:952
// variables: 2
inline void CompareAddrToCompilationUnit(const void* pV1, const void* pV2)
{
	const SAddrToCompilationUnit* p1; // 954
	const SAddrToCompilationUnit* p2; // 955
} /* size: 0, variables: 2 */

// <00449453> ../common/dwarf_symbols.h:990
// variables: 2
// function call: 1
void CompareFdeInfo(const void* pV1, const void* pV2)
{
	const SDwarfFdeInfo* p1; // 992
	const SDwarfFdeInfo* p2; // 993
	CompareFdeInfo(const void* pV1,
			const void* pV2);  // 990
} /* size: 49, variables: 2, inline expansions: 1 (17 bytes) */

// <00448AB5> ../common/dwarf_symbols.h:990
// variables: 2
inline void CompareFdeInfo(const void* pV1, const void* pV2)
{
	const SDwarfFdeInfo* p1; // 992
	const SDwarfFdeInfo* p2; // 993
} /* size: 0, variables: 2 */

// <00448A8F> ../common/dwarf_symbols.h:1069
inline void CDwarfModule::GetSymbolName(const SSymbol* pSym)
{
} /* size: 0 */

// <00448A5C> ../common/dwarf_symbols.h:1178
// variable: 1
inline void CDwarfModule::DecodeLeb128(uint8** pBytes)
{
	uint8 nByte; // 1181
} /* size: 0, variables: 1 */

// <00448A29> ../common/dwarf_symbols.h:1190
// variable: 1
inline void CDwarfModule::DecodeSignedLeb128(uint8** pBytes)
{
	uint8 nByte; // 1193
} /* size: 0, variables: 1 */

// <004489C2> ../common/dwarf_symbols.h:1208
// variables: 2
inline void CDwarfModule::DecodeSpecialLineOp(uint64* pAddr, uint32* pLine, uint8 nOpcode, SLineProgramInfo* pProgInfo)
{
	uint8 nAdjOpcode; // 1213
	uint8 nAdvance; // 1214
} /* size: 0, variables: 2 */



//
// tier0/keyvalues.cpp
//
//	referenced by: libtier0.so
//
//	functions: 211
//	classes: 5
//	struct: 1
//

// <001FB625> tier0/keyvalues.cpp:107
// member variables: 2
// struct size: 8
struct kvbinaryheader_t {
	uint32 m_nKVFourCC; /* 0 4 */
	uint32 m_nChecksum; /* 4 4 */
};

// <0021F0B5> tier0/keyvalues.cpp:117
void CDefaultKeyValuesErrorSpew::CDefaultKeyValuesErrorSpew()
{
} /* size: 0 */

// <0021F098> tier0/keyvalues.cpp:117
inline void CDefaultKeyValuesErrorSpew::CDefaultKeyValuesErrorSpew()
{
} /* size: 0 */

// <001FB674> tier0/keyvalues.cpp:117
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class CDefaultKeyValuesErrorSpew : public IKeyValuesErrorSpew {
public:
	/* class IKeyValuesErrorSpew <ancestor>; */ /* 0 8 */
	void ~CDefaultKeyValuesErrorSpew(CDefaultKeyValuesErrorSpew* );
	void CDefaultKeyValuesErrorSpew(CDefaultKeyValuesErrorSpew* , CDefaultKeyValuesErrorSpew& );
	void CDefaultKeyValuesErrorSpew(CDefaultKeyValuesErrorSpew* , const CDefaultKeyValuesErrorSpew& );
	void CDefaultKeyValuesErrorSpew(CDefaultKeyValuesErrorSpew* );
	/* tier0/keyvalues.cpp:120 */
	virtual void Warning(CDefaultKeyValuesErrorSpew* , const char* );
	void ~CDefaultKeyValuesErrorSpew(class CDefaultKeyValuesErrorSpew *); /* linkage=_ZN26CDefaultKeyValuesErrorSpewD4Ev */
	void CDefaultKeyValuesErrorSpew(class CDefaultKeyValuesErrorSpew *, class CDefaultKeyValuesErrorSpew &); /* linkage=_ZN26CDefaultKeyValuesErrorSpewC4EOS_ */
	void CDefaultKeyValuesErrorSpew(class CDefaultKeyValuesErrorSpew *, const class CDefaultKeyValuesErrorSpew  &); /* linkage=_ZN26CDefaultKeyValuesErrorSpewC4ERKS_ */
	void CDefaultKeyValuesErrorSpew(class CDefaultKeyValuesErrorSpew *); /* linkage=_ZN26CDefaultKeyValuesErrorSpewC4Ev */
	virtual void Warning(class CDefaultKeyValuesErrorSpew *, const char  *); /* linkage=_ZN26CDefaultKeyValuesErrorSpew7WarningEPKc */
} __attribute__((__packed__));

// <001ED6B8> tier0/keyvalues.cpp:129
// member functions: 18
// member variables: 7
// class size: 296
class CKeyValuesErrorStack {
	/* tier0/keyvalues.cpp:132 */
	void CKeyValuesErrorStack(CKeyValuesErrorStack* , IKeyValuesErrorSpew* );
	/* tier0/keyvalues.cpp:146 */
	void ~CKeyValuesErrorStack(CKeyValuesErrorStack* );
	/* tier0/keyvalues.cpp:151 */
	void SetFilename(CKeyValuesErrorStack* , const char* );
	/* tier0/keyvalues.cpp:159 */
	int Push(CKeyValuesErrorStack* , HKeySymbol);
	/* tier0/keyvalues.cpp:171 */
	void Pop(CKeyValuesErrorStack* );
	/* tier0/keyvalues.cpp:178 */
	void Reset(CKeyValuesErrorStack* , int, HKeySymbol);
	/* tier0/keyvalues.cpp:186 */
	void ReportError(CKeyValuesErrorStack* , const char* );
	/* tier0/keyvalues.cpp:207 */
	bool EncounteredAnyErrors(CKeyValuesErrorStack* );
	/* tier0/keyvalues.cpp:212 */
	void ClearErrorFlag(CKeyValuesErrorStack* );
private:
	HKeySymbol m_errorStack[64]; /* 0 256 */
	const char * m_pFilename; /* 256 8 */
	int m_errorIndex; /* 264 4 */
	int m_maxErrorIndex; /* 268 4 */
	bool m_bEncounteredErrors; /* 272 1 */
	CDefaultKeyValuesErrorSpew m_DefaultSpew; /* 273 8 */
	IKeyValuesErrorSpew * m_pErrorSpew; /* 288 8 */
	void CKeyValuesErrorStack(class CKeyValuesErrorStack *, class IKeyValuesErrorSpew *); /* linkage=_ZN20CKeyValuesErrorStackC4EP19IKeyValuesErrorSpew */
	void ~CKeyValuesErrorStack(class CKeyValuesErrorStack *); /* linkage=_ZN20CKeyValuesErrorStackD4Ev */
	void SetFilename(class CKeyValuesErrorStack *, const char  *); /* linkage=_ZN20CKeyValuesErrorStack11SetFilenameEPKc */
	int Push(class CKeyValuesErrorStack *, class HKeySymbol); /* linkage=_ZN20CKeyValuesErrorStack4PushE10HKeySymbol */
	void Pop(class CKeyValuesErrorStack *); /* linkage=_ZN20CKeyValuesErrorStack3PopEv */
	void Reset(class CKeyValuesErrorStack *, int, class HKeySymbol); /* linkage=_ZN20CKeyValuesErrorStack5ResetEi10HKeySymbol */
	void ReportError(class CKeyValuesErrorStack *, const char  *); /* linkage=_ZN20CKeyValuesErrorStack11ReportErrorEPKc */
	bool EncounteredAnyErrors(class CKeyValuesErrorStack *); /* linkage=_ZN20CKeyValuesErrorStack20EncounteredAnyErrorsEv */
	void ClearErrorFlag(class CKeyValuesErrorStack *); /* linkage=_ZN20CKeyValuesErrorStack14ClearErrorFlagEv */
};

// <0021F07C> tier0/keyvalues.cpp:132
void CKeyValuesErrorStack::CKeyValuesErrorStack(IKeyValuesErrorSpew* pSpew)
{
} /* size: 0 */

// <0021F057> tier0/keyvalues.cpp:132
inline void CKeyValuesErrorStack::CKeyValuesErrorStack(IKeyValuesErrorSpew* pSpew)
{
} /* size: 0 */

// <0021F040> tier0/keyvalues.cpp:146
void CKeyValuesErrorStack::~CKeyValuesErrorStack()
{
} /* size: 0 */

// <0021F027> tier0/keyvalues.cpp:146
inline void CKeyValuesErrorStack::~CKeyValuesErrorStack()
{
} /* size: 0 */

// <0021F002> tier0/keyvalues.cpp:151
inline void CKeyValuesErrorStack::SetFilename(const char* pFilename)
{
} /* size: 0 */

// <0021EFDD> tier0/keyvalues.cpp:159
inline void CKeyValuesErrorStack::Push(HKeySymbol symName)
{
} /* size: 0 */

// <00221408> tier0/keyvalues.cpp:171
void CKeyValuesErrorStack::Pop()
{
	{
	}
} /* size: 23 */

// <0021EF9C> tier0/keyvalues.cpp:171
// variables: 2
inline void CKeyValuesErrorStack::Pop()
{
	const char   __FUNCTION__; // 53563
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 174
	}
} /* size: 0, variables: 1 */

// <0021EF43> tier0/keyvalues.cpp:178
// variables: 2
inline void CKeyValuesErrorStack::Reset(int stackLevel, HKeySymbol symName)
{
	const char   __FUNCTION__; // 53612
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 180
	}
} /* size: 0, variables: 1 */

// <0021E9EB> tier0/keyvalues.cpp:186
// variable: 1
// function calls: 19
void CKeyValuesErrorStack::ReportError(const char* pError)
{
	{
		int i; // 189
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 81
		CFmtStrN<256>::String(); // 199
		CDefaultKeyValuesErrorSpew::Warning(
			const char* text);  // 199
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 199
		HKeySymbol::HKeySymbol(
				uint32 index);  // 191
		HKeySymbol::operator==(
				const HKeySymbol& other);  // 191
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 81
	CFmtStrN<256>::String(); // 188
	CDefaultKeyValuesErrorSpew::Warning(
		const char* text);  // 188
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 188
	CDefaultKeyValuesErrorSpew::Warning(
		const char* text);  // 203
} /* size: 568, inline expansions: 9 (283 bytes) */

// <0021E9D2> tier0/keyvalues.cpp:207
inline void CKeyValuesErrorStack::EncounteredAnyErrors()
{
} /* size: 0 */

// <0021E9B9> tier0/keyvalues.cpp:212
inline void CKeyValuesErrorStack::ClearErrorFlag()
{
} /* size: 0 */

// <00213317> tier0/keyvalues.cpp:233
void CKeyValuesTokenReader::~CKeyValuesTokenReader()
{
} /* size: 0 */

// <002132FA> tier0/keyvalues.cpp:233
inline void CKeyValuesTokenReader::~CKeyValuesTokenReader()
{
} /* size: 0 */

// <001ED872> tier0/keyvalues.cpp:233
// member functions: 8
// member variables: 8
// class size: 544
class CKeyValuesTokenReader {
	/* tier0/keyvalues.cpp:236 */
	void CKeyValuesTokenReader(CKeyValuesTokenReader* , CKeyValuesErrorStack* , KeyValues* , CUtlBuffer& );
	/* tier0/keyvalues.cpp:238 */
	const char* ReadToken(CKeyValuesTokenReader* , bool& , bool& );
	/* tier0/keyvalues.cpp:239 */
	void SeekBackOneToken(CKeyValuesTokenReader* );
private:
	CKeyValuesErrorStack * m_pErrorStack; /* 0 8 */
	KeyValues * m_pKeyValues; /* 8 8 */
	CUtlBuffer & m_Buffer; /* 16 8 */
	KeyValuesTokenBuffer_t m_tokenBuf; /* 24 512 */
	int m_nTokensRead; /* 536 4 */
	bool m_bUsePriorToken; /* 540 1 */
	bool m_bPriorTokenWasQuoted; /* 541 1 */
	bool m_bPriorTokenWasConditional; /* 542 1 */
	void ~CKeyValuesTokenReader(CKeyValuesTokenReader* );
	void CKeyValuesTokenReader(class CKeyValuesTokenReader *, class CKeyValuesErrorStack *, class KeyValues *, class CUtlBuffer &); /* linkage=_ZN21CKeyValuesTokenReaderC4EP20CKeyValuesErrorStackP9KeyValuesR10CUtlBuffer */
	/* <2262b4> tier0/keyvalues.cpp:260 */
	const char  * ReadToken(class CKeyValuesTokenReader *, bool &, bool &); /* linkage=_ZN21CKeyValuesTokenReader9ReadTokenERbS0_ */
	/* <225c06> tier0/keyvalues.cpp:354 */
	void SeekBackOneToken(class CKeyValuesTokenReader *); /* linkage=_ZN21CKeyValuesTokenReader16SeekBackOneTokenEv */
	void ~CKeyValuesTokenReader(class CKeyValuesTokenReader *); /* linkage=_ZN21CKeyValuesTokenReaderD4Ev */
};

// <0021E8C6> tier0/keyvalues.cpp:255
// function calls: 3
void CKeyValuesTokenReader::CKeyValuesTokenReader(CKeyValuesErrorStack* pErrorStack, KeyValues* pKeyValues, CUtlBuffer& buf)
{
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<500>::CBufferStringN(); // 256
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0021E886> tier0/keyvalues.cpp:255
void CKeyValuesTokenReader::CKeyValuesTokenReader(CKeyValuesErrorStack* pErrorStack, KeyValues* pKeyValues, CUtlBuffer& buf)
{
} /* size: 0 */

// <002262B4> tier0/keyvalues.cpp:260
// variables: 2
// function calls: 3
void CKeyValuesTokenReader::ReadToken(bool& wasQuoted, bool& wasConditional)
{
	const char* c; // 290
	bool bConditionalStart; // 319
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 267
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <00225C4D> tier0/keyvalues.cpp:260
// variables: 3
// function calls: 22
void CKeyValuesTokenReader::ReadToken(bool& wasQuoted, bool& wasConditional)
{
	const char* c; // 290
	bool bConditionalStart; // 319
	CUtlBuffer::IsValid(); // 273
	CUtlBuffer::IsValid(); // 280
	{
		CUtlCharConversion* pConversion; // 300
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 304
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 307
	CBufferString::AppendChar(
			char ch,
			bool bExact);  // 312
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 313
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 351
	CBufferString::AppendChar(
			char ch,
			bool bExact);  // 345
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 672
	CUtlBuffer::BGetTypeBin<char>(
				char& dest);  // 1040
	CUtlBuffer::BGetChar(
		char* pOutChar);  // 937
	CUtlBuffer::GetChar(); // 347
	V_isspace(int c); // 342
} /* size: 686, variables: 2, inline expansions: 19 (433 bytes) */

// <0021E829> tier0/keyvalues.cpp:260
// variables: 3
void CKeyValuesTokenReader::ReadToken(bool& wasQuoted, bool& wasConditional)
{
	const char* c; // 290
	bool bConditionalStart; // 319
	{
		CUtlCharConversion* pConversion; // 300
	}
} /* size: 0, variables: 2 */

// <00225C06> tier0/keyvalues.cpp:354
void CKeyValuesTokenReader::SeekBackOneToken()
{
	{
	}
} /* size: 0 */

// <0021E7A4> tier0/keyvalues.cpp:354
// variables: 3
void CKeyValuesTokenReader::SeekBackOneToken()
{
	const char   __FUNCTION__; // 53904
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 358
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 364
	}
} /* size: 0, variables: 1 */

// <001FBA32> tier0/keyvalues.cpp:374
// member functions: 10
// member variables: 2
// class size: 16
class CKeyErrorContext {
	/* tier0/keyvalues.cpp:377 */
	void CKeyErrorContext(CKeyErrorContext* , CKeyValuesErrorStack* , HKeySymbol);
	/* tier0/keyvalues.cpp:381 */
	void ~CKeyErrorContext(CKeyErrorContext* );
	/* tier0/keyvalues.cpp:385 */
	void Reset(CKeyErrorContext* , HKeySymbol);
	/* tier0/keyvalues.cpp:389 */
	int GetStackLevel(const CKeyErrorContext* );
private:
	/* tier0/keyvalues.cpp:394 */
	void Init(CKeyErrorContext* , HKeySymbol);
	CKeyValuesErrorStack * m_pErrorStack; /* 0 8 */
	int m_stackLevel; /* 8 4 */
	void CKeyErrorContext(class CKeyErrorContext *, class CKeyValuesErrorStack *, class HKeySymbol); /* linkage=_ZN16CKeyErrorContextC4EP20CKeyValuesErrorStack10HKeySymbol */
	void ~CKeyErrorContext(class CKeyErrorContext *); /* linkage=_ZN16CKeyErrorContextD4Ev */
	void Reset(class CKeyErrorContext *, class HKeySymbol); /* linkage=_ZN16CKeyErrorContext5ResetE10HKeySymbol */
	int GetStackLevel(const class CKeyErrorContext  *); /* linkage=_ZNK16CKeyErrorContext13GetStackLevelEv */
	void Init(class CKeyErrorContext *, class HKeySymbol); /* linkage=_ZN16CKeyErrorContext4InitE10HKeySymbol */
};

// <0021E783> tier0/keyvalues.cpp:377
void CKeyErrorContext::CKeyErrorContext(CKeyValuesErrorStack* pErrorStack, HKeySymbol symName)
{
} /* size: 0 */

// <0021E750> tier0/keyvalues.cpp:377
inline void CKeyErrorContext::CKeyErrorContext(CKeyValuesErrorStack* pErrorStack, HKeySymbol symName)
{
} /* size: 0 */

// <0021E739> tier0/keyvalues.cpp:381
void CKeyErrorContext::~CKeyErrorContext()
{
} /* size: 0 */

// <0021E720> tier0/keyvalues.cpp:381
inline void CKeyErrorContext::~CKeyErrorContext()
{
} /* size: 0 */

// <0021E6FA> tier0/keyvalues.cpp:385
inline void CKeyErrorContext::Reset(HKeySymbol symName)
{
} /* size: 0 */

// <0021E6E1> tier0/keyvalues.cpp:389
inline void CKeyErrorContext::GetStackLevel()
{
} /* size: 0 */

// <0021E6BB> tier0/keyvalues.cpp:394
inline void CKeyErrorContext::Init(HKeySymbol symName)
{
} /* size: 0 */

// <0021E675> tier0/keyvalues.cpp:472
void CKeyValues_Data::Internal_GetSubKey()
{
} /* size: 29 */

// <0021E570> tier0/keyvalues.cpp:488
// function call: 1
void CKeyValues_Data::Internal_SetSubKey(KeyValues* pSub)
{
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 509
	}
} /* size: 0 */

// <0021E553> tier0/keyvalues.cpp:519
void CKeyValues_Data::ResolveSubKeyValue()
{
} /* size: 0 */

// <0021E50C> tier0/keyvalues.cpp:527
void CKeyValues_Data::Internal_SetHasEscapeSequences(bool bUsesEscapeSequences)
{
} /* size: 28 */

// <0021E4DA> tier0/keyvalues.cpp:532
void CKeyValues_Data::Internal_HasEscapeSequences()
{
} /* size: 15 */

// <0021E3B2> tier0/keyvalues.cpp:541
// function calls: 4
void KeyValues::KeyValues(const char* setName)
{
	HKeySymbol::HKeySymbol(
			uint32 index);  // 630
	HKeySymbol::operator uint32(); // 630
	CKeyValues_Data::CKeyValues_Data(); // 541
	KeyValues::Init(); // 546
} /* size: 62, inline expansions: 4 (28 bytes) */

// <0021E388> tier0/keyvalues.cpp:541
void KeyValues::KeyValues(const char* setName)
{
} /* size: 0 */

// <0021E1D9> tier0/keyvalues.cpp:550
// function calls: 5
void KeyValues::KeyValues(const KeyValues* pOther, bool)
{
	{
		{
		}
	}
	{
		HKeySymbol::HKeySymbol(
				uint32 index);  // 630
		HKeySymbol::operator uint32(); // 630
		CKeyValues_Data::CKeyValues_Data(); // 550
		KeyValues::Init(); // 552
	}
	{
	}
	KeyValues::KeyValues(
			const KeyValues* pOther,
			bool);  // 550
} /* size: 0, inline expansions: 1 (26 bytes) */

// <0021E186> tier0/keyvalues.cpp:550
// variables: 2
void KeyValues::KeyValues(const KeyValues* pOther, bool)
{
	const char   __FUNCTION__; // 53715
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 555
	}
} /* size: 0, variables: 1 */

// <0021E01F> tier0/keyvalues.cpp:561
// function calls: 4
void KeyValues::KeyValues(const char* setName, const char* firstKey, const char* firstValue)
{
	HKeySymbol::HKeySymbol(
			uint32 index);  // 630
	HKeySymbol::operator uint32(); // 630
	CKeyValues_Data::CKeyValues_Data(); // 561
	KeyValues::Init(); // 566
} /* size: 94, inline expansions: 4 (20 bytes) */

// <0021DFDB> tier0/keyvalues.cpp:561
void KeyValues::KeyValues(const char* setName, const char* firstKey, const char* firstValue)
{
} /* size: 0 */

// <0021DE74> tier0/keyvalues.cpp:574
// function calls: 4
void KeyValues::KeyValues(const char* setName, const char* firstKey, const wchar_t* firstValue)
{
	HKeySymbol::HKeySymbol(
			uint32 index);  // 630
	HKeySymbol::operator uint32(); // 630
	CKeyValues_Data::CKeyValues_Data(); // 574
	KeyValues::Init(); // 579
} /* size: 94, inline expansions: 4 (20 bytes) */

// <0021DE30> tier0/keyvalues.cpp:574
void KeyValues::KeyValues(const char* setName, const char* firstKey, const wchar_t* firstValue)
{
} /* size: 0 */

// <0021DCC9> tier0/keyvalues.cpp:587
// function calls: 4
void KeyValues::KeyValues(const char* setName, const char* firstKey, int firstValue)
{
	HKeySymbol::HKeySymbol(
			uint32 index);  // 630
	HKeySymbol::operator uint32(); // 630
	CKeyValues_Data::CKeyValues_Data(); // 587
	KeyValues::Init(); // 592
} /* size: 94, inline expansions: 4 (20 bytes) */

// <0021DC85> tier0/keyvalues.cpp:587
void KeyValues::KeyValues(const char* setName, const char* firstKey, int firstValue)
{
} /* size: 0 */

// <0021DADF> tier0/keyvalues.cpp:600
// function calls: 4
void KeyValues::KeyValues(const char* setName, const char* firstKey, const char* firstValue, const char* secondKey, const char* secondValue)
{
	HKeySymbol::HKeySymbol(
			uint32 index);  // 630
	HKeySymbol::operator uint32(); // 630
	CKeyValues_Data::CKeyValues_Data(); // 600
	KeyValues::Init(); // 605
} /* size: 122, inline expansions: 4 (20 bytes) */

// <0021DA81> tier0/keyvalues.cpp:600
void KeyValues::KeyValues(const char* setName, const char* firstKey, const char* firstValue, const char* secondKey, const char* secondValue)
{
} /* size: 0 */

// <0021D8DB> tier0/keyvalues.cpp:614
// function calls: 4
void KeyValues::KeyValues(const char* setName, const char* firstKey, int firstValue, const char* secondKey, int secondValue)
{
	HKeySymbol::HKeySymbol(
			uint32 index);  // 630
	HKeySymbol::operator uint32(); // 630
	CKeyValues_Data::CKeyValues_Data(); // 614
	KeyValues::Init(); // 619
} /* size: 122, inline expansions: 4 (20 bytes) */

// <0021D87D> tier0/keyvalues.cpp:614
void KeyValues::KeyValues(const char* setName, const char* firstKey, int firstValue, const char* secondKey, int secondValue)
{
} /* size: 0 */

// <0021D7EC> tier0/keyvalues.cpp:628
// function calls: 2
void CKeyValues_Data::CKeyValues_Data()
{
	HKeySymbol::HKeySymbol(
			uint32 index);  // 630
	HKeySymbol::operator uint32(); // 630
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0021D7CF> tier0/keyvalues.cpp:628
void CKeyValues_Data::CKeyValues_Data()
{
} /* size: 0 */

// <00226394> tier0/keyvalues.cpp:646
void KeyValues::Init()
{
} /* size: 0 */

// <0021D72A> tier0/keyvalues.cpp:658
// function call: 1
void KeyValues::~KeyValues()
{
	CKeyValues_Data::~CKeyValues_Data(); // 663
} /* size: 31, inline expansions: 1 (9 bytes) */

// <0021D70D> tier0/keyvalues.cpp:658
void KeyValues::~KeyValues()
{
} /* size: 0 */

// <0021D686> tier0/keyvalues.cpp:669
// function call: 1
void CKeyValues_Data::Internal_ClearAll()
{
	HKeySymbol::HKeySymbol(
			uint32 index);  // 671
} /* size: 43, inline expansions: 1 (0 bytes) */

// <0021D5D4> tier0/keyvalues.cpp:678
// variables: 2
void CKeyValues_Data::Internal_ClearData()
{
	const char   __FUNCTION__; // 53958
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 681
	}
} /* size: 0, variables: 1 */

// <0021D4CE> tier0/keyvalues.cpp:733
// variables: 2
void KeyValues::RemoveEverything()
{
	KeyValues* dat; // 735
	KeyValues* datNext; // 736
} /* size: 164, variables: 2 */

// <0021D40A> tier0/keyvalues.cpp:761
void KeyValues::RecursiveSaveToFile(CUtlBuffer& buf, int indentLevel, bool bWriteRootKey, bool bWriteEmptySubKeys)
{
} /* size: 39 */

// <0021D38A> tier0/keyvalues.cpp:783
// function call: 1
void CKeyValues_Data::Internal_GetName()
{
	HKeySymbol::HKeySymbol(
			uint32 index);  // 785
} /* size: 63, inline expansions: 1 (0 bytes) */

// <0021D31E> tier0/keyvalues.cpp:788
// variables: 2
void KeyValues::GetName()
{
	const char   __FUNCTION__; // 53666
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 790
	}
} /* size: 9, variables: 1 */

// <002263D8> tier0/keyvalues.cpp:797
// function calls: 3
void CKeyValues_Data::Internal_GetNameSymbol()
{
	HKeySymbol::HKeySymbol(
			uint32 index);  // 801
	HKeySymbol::HKeySymbol(
			uint32 index);  // 806
	CKeyValues_Data::Internal_GetNameSymbol(); // 797
} /* size: 102, inline expansions: 3 (49 bytes) */

// <0021D301> tier0/keyvalues.cpp:797
void CKeyValues_Data::Internal_GetNameSymbol()
{
} /* size: 0 */

// <0021D295> tier0/keyvalues.cpp:810
// variables: 2
void KeyValues::GetNameSymbol()
{
	const char   __FUNCTION__; // 53823
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 812
	}
} /* size: 9, variables: 1 */

// <0021D22D> tier0/keyvalues.cpp:816
// function call: 1
void CKeyValues_Data::Internal_GetNameSymbolCaseSensitive()
{
	HKeySymbol::HKeySymbol(
			uint32 index);  // 818
} /* size: 30, inline expansions: 1 (0 bytes) */

// <0021D1C1> tier0/keyvalues.cpp:821
// variables: 2
void KeyValues::GetNameSymbolCaseSensitive()
{
	const char   __FUNCTION__; // 54164
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 823
	}
} /* size: 9, variables: 1 */

// <0021D154> tier0/keyvalues.cpp:831
void KeyValues::UsesEscapeSequences(bool state)
{
} /* size: 13 */

// <0021CA04> tier0/keyvalues.cpp:840
// variables: 7
// function calls: 15
void KeyValues::LoadFromFile(IBaseFileSystem* filesystem, const char* resourceName, const char* pathID, GetSymbolProc_t pfnEvaluateSymbolProc, void* pEvaluateSymbolContext, const char* pEmptyKeyReplacement)
{
	FileHandle_t f; // 842
	int64 fileSize; // 847
	unsigned int bufSize; // 854
	char* buffer; // 856
	const char   __FUNCTION__; // 53796
	bool bRetOK; // 860
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 857
	}
	CFileSystemPassThru::GetOptimalIOConstraints(
				FileHandle_t hFile,
				unsigned int* pOffsetAlign,
				unsigned int* pSizeAlign,
				unsigned int* pBufferAlign);  // 844
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 845
	IFileSystem::GetOptimalReadSize<unsigned int>(
					FileHandle_t hFile,
					unsigned int nLogicalSize);  // 854
	CFileSystemPassThru::AllocOptimalReadBuffer(
				FileHandle_t hFile,
				unsigned int nSize,
				unsigned int nOffset);  // 188
	CFileSystemPassThru::AllocOptimalReadBuffer(
				FileHandle_t hFile,
				unsigned int nSize,
				unsigned int nOffset);  // 856
	CFileSystemPassThru::ReadEx(
		void* pOutput,
		int destSize,
		int size,
		FileHandle_t file);  // 860
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 189
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 189
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 189
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 189
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 189
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 189
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 189
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 189
	CFileSystemPassThru::FreeOptimalReadBuffer(
				void* p);  // 871
} /* size: 0, variables: 6, inline expansions: 15 (1651 bytes) */

// <0021C892> tier0/keyvalues.cpp:880
// variable: 1
void KeyValues::SaveToFile(IBaseFileSystem* filesystem, const char* resourceName, const char* pathID, bool bWriteEmptySubkeys)
{
	FileHandle_t f; // 883
} /* size: 191, variables: 1 */

// <002264AE> tier0/keyvalues.cpp:901
// variable: 1
// function call: 1
void KeyValues::WriteIndents(IBaseFileSystem* filesystem, FileHandle_t f, CUtlBuffer* pBuf, int indentLevel)
{
	{
		int i; // 903
		KeyValues::InternalWrite(
				IBaseFileSystem* filesystem,
				FileHandle_t f,
				CUtlBuffer* pBuf,
				const void* pData,
				int len);  // 905
	}
} /* size: 0 */

// <0021C836> tier0/keyvalues.cpp:901
// variable: 1
void KeyValues::WriteIndents(IBaseFileSystem* filesystem, FileHandle_t f, CUtlBuffer* pBuf, int indentLevel)
{
	{
		int i; // 903
	}
} /* size: 0 */

// <0021C5B9> tier0/keyvalues.cpp:912
// variables: 4
// function calls: 3
void KeyValues::WriteConvertedString(IBaseFileSystem* filesystem, FileHandle_t f, CUtlBuffer* pBuf, const char* pszString)
{
	int len; // 916
	char* convertedString; // 917
	int j; // 918
	{
		int i; // 919
	}
	V_strlen(const char* str); // 916
	V_strlen(const char* str); // 935
	KeyValues::InternalWrite(
			IBaseFileSystem* filesystem,
			FileHandle_t f,
			CUtlBuffer* pBuf,
			const void* pData,
			int len);  // 935
} /* size: 324, variables: 3, inline expansions: 3 (98 bytes) */

// <002265D5> tier0/keyvalues.cpp:941
void KeyValues::InternalWrite(IBaseFileSystem* filesystem, FileHandle_t f, CUtlBuffer* pBuf, const void* pData, int len)
{
} /* size: 0 */

// <00218FD1> tier0/keyvalues.cpp:959
// variables: 24
// function calls: 63
void KeyValues::RecursiveSaveToFile(IBaseFileSystem* filesystem, FileHandle_t f, CUtlBuffer* pBuf, int indentLevel, bool bWriteEmptySubkeys, bool bWriteRootKey)
{
	int nIndentInc; // 972
	{
		KeyValues* dat; // 973
		{
			const char* pString; // 995
			{
				int i; // 903
				KeyValues::InternalWrite(
						IBaseFileSystem* filesystem,
						FileHandle_t f,
						CUtlBuffer* pBuf,
						const void* pData,
						int len);  // 905
			}
			KeyValues::WriteIndents(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					int indentLevel);  // 1003
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1004
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1006
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1010
		}
		{
			const wchar_t* pWSValue; // 1016
			{
				char* pUTF8Buffer; // 1019
				int result; // 1021
				{
					const char* pName; // 1026
					{
						int i; // 903
						KeyValues::InternalWrite(
								IBaseFileSystem* filesystem,
								FileHandle_t f,
								CUtlBuffer* pBuf,
								const void* pData,
								int len);  // 905
					}
					KeyValues::WriteIndents(
							IBaseFileSystem* filesystem,
							FileHandle_t f,
							CUtlBuffer* pBuf,
							int indentLevel);  // 1024
					KeyValues::InternalWrite(
							IBaseFileSystem* filesystem,
							FileHandle_t f,
							CUtlBuffer* pBuf,
							const void* pData,
							int len);  // 1025
					V_strlen(const char* str); // 1027
					KeyValues::InternalWrite(
							IBaseFileSystem* filesystem,
							FileHandle_t f,
							CUtlBuffer* pBuf,
							const void* pData,
							int len);  // 1027
					KeyValues::InternalWrite(
							IBaseFileSystem* filesystem,
							FileHandle_t f,
							CUtlBuffer* pBuf,
							const void* pData,
							int len);  // 1028
					KeyValues::InternalWrite(
							IBaseFileSystem* filesystem,
							FileHandle_t f,
							CUtlBuffer* pBuf,
							const void* pData,
							int len);  // 1032
				}
			}
		}
		{
			const char* pName; // 1043
			char buf; // 1047
			{
				int i; // 903
				KeyValues::InternalWrite(
						IBaseFileSystem* filesystem,
						FileHandle_t f,
						CUtlBuffer* pBuf,
						const void* pData,
						int len);  // 905
			}
			KeyValues::WriteIndents(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					int indentLevel);  // 1041
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1042
			V_strlen(const char* str); // 1044
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1044
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1045
			V_strlen(const char* str); // 1050
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1050
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1051
		}
		{
			const char* pName; // 1059
			char buf; // 1063
			{
				int i; // 903
				KeyValues::InternalWrite(
						IBaseFileSystem* filesystem,
						FileHandle_t f,
						CUtlBuffer* pBuf,
						const void* pData,
						int len);  // 905
			}
			KeyValues::WriteIndents(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					int indentLevel);  // 1057
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1058
			V_strlen(const char* str); // 1060
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1060
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1061
			V_strlen(const char* str); // 1067
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1067
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1068
		}
		{
			const char* pName; // 1076
			char buf; // 1080
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1083
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1084
			{
				int i; // 903
				KeyValues::InternalWrite(
						IBaseFileSystem* filesystem,
						FileHandle_t f,
						CUtlBuffer* pBuf,
						const void* pData,
						int len);  // 905
			}
			KeyValues::WriteIndents(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					int indentLevel);  // 1074
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1075
			V_strlen(const char* str); // 1077
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1077
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1078
			V_strlen(const char* str); // 1083
		}
		{
			Color outColor; // 1090
			CPathBufferString temp; // 1091
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 1091
			{
				int i; // 903
				KeyValues::InternalWrite(
						IBaseFileSystem* filesystem,
						FileHandle_t f,
						CUtlBuffer* pBuf,
						const void* pData,
						int len);  // 905
			}
			KeyValues::WriteIndents(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					int indentLevel);  // 1094
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1095
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1097
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 1099
			KeyValues::InternalWrite(
					IBaseFileSystem* filesystem,
					FileHandle_t f,
					CUtlBuffer* pBuf,
					const void* pData,
					int len);  // 1101
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 1103
		}
		CKeyValues_Data::Internal_GetDataType(); // 983
	}
	{
		int i; // 903
		KeyValues::InternalWrite(
				IBaseFileSystem* filesystem,
				FileHandle_t f,
				CUtlBuffer* pBuf,
				const void* pData,
				int len);  // 905
	}
	KeyValues::WriteIndents(
			IBaseFileSystem* filesystem,
			FileHandle_t f,
			CUtlBuffer* pBuf,
			int indentLevel);  // 964
	KeyValues::InternalWrite(
			IBaseFileSystem* filesystem,
			FileHandle_t f,
			CUtlBuffer* pBuf,
			const void* pData,
			int len);  // 965
	KeyValues::InternalWrite(
			IBaseFileSystem* filesystem,
			FileHandle_t f,
			CUtlBuffer* pBuf,
			const void* pData,
			int len);  // 967
	{
		int i; // 903
		KeyValues::InternalWrite(
				IBaseFileSystem* filesystem,
				FileHandle_t f,
				CUtlBuffer* pBuf,
				const void* pData,
				int len);  // 905
	}
	KeyValues::WriteIndents(
			IBaseFileSystem* filesystem,
			FileHandle_t f,
			CUtlBuffer* pBuf,
			int indentLevel);  // 968
	KeyValues::InternalWrite(
			IBaseFileSystem* filesystem,
			FileHandle_t f,
			CUtlBuffer* pBuf,
			const void* pData,
			int len);  // 969
	{
		int i; // 903
		KeyValues::InternalWrite(
				IBaseFileSystem* filesystem,
				FileHandle_t f,
				CUtlBuffer* pBuf,
				const void* pData,
				int len);  // 905
	}
	KeyValues::WriteIndents(
			IBaseFileSystem* filesystem,
			FileHandle_t f,
			CUtlBuffer* pBuf,
			int indentLevel);  // 1114
	KeyValues::InternalWrite(
			IBaseFileSystem* filesystem,
			FileHandle_t f,
			CUtlBuffer* pBuf,
			const void* pData,
			int len);  // 1115
} /* size: 7461, variables: 1, inline expansions: 7 (1102 bytes) */

// <002186C3> tier0/keyvalues.cpp:1122
// variables: 8
// function calls: 25
void KeyValues::RecursiveSaveToLocalizationFile(IBaseFileSystem* filesystem, FileHandle_t f, int indentLevel, bool bAsUTF8)
{
	CUtlBuffer localizationKVbuf; // 1127
	{
		uint8 marker; // 1134
		CUtlBuffer::TellPut(); // 1138
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 1138
	}
	{
		const char* pszUTF8; // 1145
		int nUTF8Length; // 1146
		int nWideBufBytes; // 1149
		ucs2* pszWideBuf; // 1150
		short unsigned int marker; // 1159
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
			char c);  // 1143
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 1145
	}
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1168
} /* size: 633, variables: 1, inline expansions: 6 (108 bytes) */

// <002185DB> tier0/keyvalues.cpp:1173
// variables: 3
// function call: 1
void KeyValues::FindKey(HKeySymbol keySymbol)
{
	const char   __FUNCTION__; // 53666
	KeyValues* dat; // 1176
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1175
	}
	HKeySymbol::operator==(
			const HKeySymbol& other);  // 1179
} /* size: 74, variables: 2, inline expansions: 1 (0 bytes) */

// <00227BE7> tier0/keyvalues.cpp:1191
// variable: 1
// function call: 1
void KeyValues::FindKey(const char* keyName, bool bCreate)
{
	KeyValues* pParent; // 1205
	KeyValues::FindKey(
		const char* keyName,
		bool bCreate);  // 1191
} /* size: 86, variables: 1, inline expansions: 1 (17 bytes) */

// <0021856A> tier0/keyvalues.cpp:1191
// variables: 4
void KeyValues::FindKey(const char* keyName, bool bCreate)
{
	const char   __FUNCTION__; // 53666
	KeyValues* pParent; // 1205
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1196
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1197
	}
} /* size: 0, variables: 2 */

// <00227232> tier0/keyvalues.cpp:1209
// variables: 7
// function calls: 32
void KeyValues::FindKeyAndParent(const char* keyName, KeyValues** pParent, bool bCreate)
{
	CUtlVector<char, CUtlMemory<char, int> > szBuf; // 1227
	const char* subStr; // 1228
	const char* searchStr; // 1229
	HKeySymbol iSearchStr; // 1252
	KeyValues* lastItem; // 1259
	KeyValues* dat; // 1260
	V_isempty(const char* pszString); // 1221
	strchr(const char* __s,
		int __c);  // 186
	V_strchr(const char* s,
		char c);  // 1228
	CUtlMemory<char, int>::ValidateGrowSize(); // 475
	CUtlMemory<char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char, CUtlMemory<char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<char, CUtlMemory<char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char, CUtlMemory<char, int> >::CUtlVector(); // 1227
	{
		int size; // 1234
		{
		}
		{
		}
		CUtlMemory<char, int>::Grow(
			int num);  // 806
		CUtlVectorBase<char, CUtlMemory<char, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<char, CUtlMemory<char, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<char, CUtlMemory<char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<char, CUtlMemory<char, int> >::AddMultipleToTail(
					int num);  // 1071
		CUtlVectorBase<char, CUtlMemory<char, int> >::EnsureCount(
				int num);  // 1237
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 1238
		CUtlMemory<char, int>::operator[](
				int i);  // 588
		CUtlVectorBase<char, CUtlMemory<char, int> >::operator[](
				int i);  // 1239
		V_strlen(const char* str); // 1240
	}
	HKeySymbol::HKeySymbol(
			uint32 index);  // 1253
	HKeySymbol::operator==(
			const HKeySymbol& other);  // 1253
	HKeySymbol::operator==(
			const HKeySymbol& other);  // 1267
	CUtlMemory<char, int>::Purge(); // 903
	CUtlMemory<char, int>::Purge(); // 1799
	CUtlVectorBase<char, CUtlMemory<char, int> >::Purge(); // 560
	ValidateAlignment<char>(void); // 508
	CUtlMemory<char, int>::Purge(); // 510
	CUtlMemory<char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<char, CUtlMemory<char, int> >::~CUtlVector(); // 1318
	KeyValues::FindKeyAndParent(
			const char* keyName,
			KeyValues** pParent,
			bool bCreate);  // 1209
} /* size: 0, variables: 6, inline expansions: 20 (814 bytes) */

// <0021842E> tier0/keyvalues.cpp:1209
// variables: 12
void KeyValues::FindKeyAndParent(const char* keyName, KeyValues** pParent, bool bCreate)
{
	const char   __FUNCTION__; // 53904
	CUtlVector<char, CUtlMemory<char, int> > szBuf; // 1227
	const char* subStr; // 1228
	const char* searchStr; // 1229
	HKeySymbol iSearchStr; // 1252
	KeyValues* lastItem; // 1259
	KeyValues* dat; // 1260
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1216
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1217
	}
	{
		int size; // 1234
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1235
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1236
		}
	}
} /* size: 0, variables: 7 */

// <002182D4> tier0/keyvalues.cpp:1325
// variables: 5
void KeyValues::CreateNewKey()
{
	int newID; // 1327
	KeyValues* pLastChild; // 1330
	char buf; // 1344
	{
		KeyValues* dat; // 1332
		{
			int val; // 1335
		}
	}
} /* size: 176, variables: 3 */

// <002271B2> tier0/keyvalues.cpp:1354
// variable: 1
void KeyValues::CreateKey(const char* keyName)
{
	KeyValues* pLastChild; // 1356
} /* size: 0, variables: 1 */

// <002181DC> tier0/keyvalues.cpp:1363
// variable: 1
void KeyValues::CreatePeerKey(const char* keyName)
{
	KeyValues* dat; // 1365
} /* size: 92, variables: 1 */

// <002180E1> tier0/keyvalues.cpp:1377
// variable: 1
void KeyValues::CreateKeyUsingKnownLastChild(const char* keyName, KeyValues* pLastChild)
{
	KeyValues* dat; // 1380
} /* size: 97, variables: 1 */

// <00217ED5> tier0/keyvalues.cpp:1391
// variables: 6
void KeyValues::AddSubkeyUsingKnownLastChild(KeyValues* pSubkey, KeyValues* pLastChild)
{
	const char   __FUNCTION__; // 54213
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1394
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1395
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1400
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1405
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1406
	}
} /* size: 0, variables: 1 */

// <00217D46> tier0/keyvalues.cpp:1416
// variables: 4
void KeyValues::AddSubKey(KeyValues* pSubkey)
{
	const char   __FUNCTION__; // 53715
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1419
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1420
	}
	{
		KeyValues* pTempDat; // 1429
	}
} /* size: 0, variables: 1 */

// <00217C7F> tier0/keyvalues.cpp:1439
// variables: 2
void KeyValues::FindAndDeleteSubKey(const char* keyName)
{
	KeyValues* pParent; // 1441
	KeyValues* subKey; // 1442
} /* size: 91, variables: 2 */

// <00217BF0> tier0/keyvalues.cpp:1452
// variables: 2
void KeyValues::Count()
{
	int nRet; // 1454
	{
		KeyValues* pIter; // 1455
	}
} /* size: 74, variables: 1 */

// <00217B4C> tier0/keyvalues.cpp:1462
// variables: 2
void KeyValues::Element(int nIndex)
{
	int nCount; // 1464
	{
		KeyValues* pIter; // 1465
	}
} /* size: 74, variables: 1 */

// <00227CC6> tier0/keyvalues.cpp:1481
// variable: 1
// function call: 1
void KeyValues::RemoveSubKey(KeyValues* subKey, bool bDelete, bool bOptional)
{
	{
		KeyValues* kv; // 1494
		{
		}
	}
	KeyValues::RemoveSubKey(
			KeyValues* subKey,
			bool bDelete,
			bool bOptional);  // 1481
} /* size: 0, inline expansions: 1 (172 bytes) */

// <00217AD6> tier0/keyvalues.cpp:1481
// variables: 3
void KeyValues::RemoveSubKey(KeyValues* subKey, bool bDelete, bool bOptional)
{
	const char   __FUNCTION__; // 53796
	{
		KeyValues* kv; // 1494
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1512
		}
	}
} /* size: 0, variables: 1 */

// <0021794E> tier0/keyvalues.cpp:1523
// variables: 5
void KeyValues::InsertSubKey(int nIndex, KeyValues* pSubKey)
{
	const char   __FUNCTION__; // 53796
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1526
	}
	{
		int nCurrentIndex; // 1536
		{
			KeyValues* pIter; // 1537
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1548
		}
	}
} /* size: 0, variables: 1 */

// <002178BF> tier0/keyvalues.cpp:1553
// variable: 1
void KeyValues::ContainsSubKey(KeyValues* pSubKey)
{
	{
		KeyValues* pIter; // 1555
	}
} /* size: 72 */

// <0021772A> tier0/keyvalues.cpp:1565
// variables: 5
void KeyValues::SwapSubKey(KeyValues* pExistingSubkey, KeyValues* pNewSubKey)
{
	const char   __FUNCTION__; // 53742
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1567
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1570
	}
	{
		KeyValues* kv; // 1582
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1596
		}
	}
} /* size: 0, variables: 1 */

// <00217505> tier0/keyvalues.cpp:1600
// variables: 5
// function calls: 2
void KeyValues::ElideSubKey(KeyValues* pSubKey)
{
	CUnalignedPointer<KeyValues*> ppPointerToFix; // 1603
	const char   __FUNCTION__; // 53769
	{
		KeyValues* pKeyIter; // 1604
		{
			KeyValues* pChildIter; // 1623
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1650
	}
	_CUnalignedPointer_Base<KeyValues::_Initialize(
			KeyValues** pOriginal);  // 145
	CUnalignedPointer<KeyValues::CUnalignedPointer(
				Pointer_t pOriginal);  // 1603
} /* size: 0, variables: 2, inline expansions: 2 (16 bytes) */

// <00217489> tier0/keyvalues.cpp:1657
// variable: 1
void KeyValues::FindLastSubKey()
{
	KeyValues* pLastChild; // 1664
} /* size: 62, variables: 1 */

// <0021741D> tier0/keyvalues.cpp:1674
// variables: 2
void KeyValues::GetFirstSubKey()
{
	const char   __FUNCTION__; // 53850
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1676
	}
} /* size: 9, variables: 1 */

// <002173D1> tier0/keyvalues.cpp:1683
// variables: 2
void KeyValues::GetNextKey()
{
	const char   __FUNCTION__; // 53742
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1685
	}
} /* size: 9, variables: 1 */

// <00217390> tier0/keyvalues.cpp:1692
void KeyValues::SetNextKey(KeyValues* pDat)
{
} /* size: 9 */

// <002172DA> tier0/keyvalues.cpp:1698
// variables: 3
// function call: 1
void KeyValues::GetFirstTrueSubKey()
{
	const char   __FUNCTION__; // 53958
	KeyValues* pRet; // 1701
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1700
	}
	CKeyValues_Data::Internal_GetDataType(); // 1702
} /* size: 49, variables: 2, inline expansions: 1 (0 bytes) */

// <00217244> tier0/keyvalues.cpp:1708
// variables: 3
// function call: 1
void KeyValues::GetNextTrueSubKey()
{
	const char   __FUNCTION__; // 53931
	KeyValues* pRet; // 1711
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1710
	}
	CKeyValues_Data::Internal_GetDataType(); // 1712
} /* size: 32, variables: 2, inline expansions: 1 (0 bytes) */

// <0021718E> tier0/keyvalues.cpp:1718
// variables: 3
// function call: 1
void KeyValues::GetFirstValue()
{
	const char   __FUNCTION__; // 53823
	KeyValues* pRet; // 1721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1720
	}
	CKeyValues_Data::Internal_GetDataType(); // 1722
} /* size: 49, variables: 2, inline expansions: 1 (0 bytes) */

// <002170F8> tier0/keyvalues.cpp:1728
// variables: 3
// function call: 1
void KeyValues::GetNextValue()
{
	const char   __FUNCTION__; // 53796
	KeyValues* pRet; // 1731
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1730
	}
	CKeyValues_Data::Internal_GetDataType(); // 1733
} /* size: 32, variables: 2, inline expansions: 1 (0 bytes) */

// <00216FD1> tier0/keyvalues.cpp:1744
// variables: 3
// function call: 1
void CKeyValues_Data::Internal_GetInt()
{
	const char   __FUNCTION__; // 53877
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1762
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1767
	}
	CKeyValues_Data::BlindlyReinterpretUnion<int>(); // 1749
} /* size: 0, variables: 1, inline expansions: 1 (2 bytes) */

// <00216F26> tier0/keyvalues.cpp:1773
// variable: 1
void KeyValues::GetInt(const char* keyName, int defaultValue)
{
	KeyValues* dat; // 1775
} /* size: 56, variables: 1 */

// <00216DAF> tier0/keyvalues.cpp:1787
// variables: 4
// function call: 1
void CKeyValues_Data::Internal_GetUint64()
{
	const char   __FUNCTION__; // 53958
	{
		uint64 uiResult; // 1795
	}
	{
		uint64 uiResult; // 1801
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1816
	}
	CKeyValues_Data::BlindlyReinterpretUnion<int>(); // 1792
} /* size: 264, variables: 1, inline expansions: 1 (0 bytes) */

// <00216D04> tier0/keyvalues.cpp:1822
// variable: 1
void KeyValues::GetUint64(const char* keyName, uint64 defaultValue)
{
	KeyValues* dat; // 1824
} /* size: 57, variables: 1 */

// <002266E0> tier0/keyvalues.cpp:1836
void* CKeyValues_Data::Internal_GetPtr()
{
} /* size: 27 */

// <00216CC8> tier0/keyvalues.cpp:1836
// variables: 2
void* CKeyValues_Data::Internal_GetPtr()
{
	const char   __FUNCTION__; // 53877
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1858
	}
} /* size: 0, variables: 1 */

// <00216C18> tier0/keyvalues.cpp:1864
// variable: 1
void* KeyValues::GetPtr(const char* keyName, void* defaultValue)
{
	KeyValues* dat; // 1866
} /* size: 57, variables: 1 */

// <00216B5B> tier0/keyvalues.cpp:1878
// variables: 2
void CKeyValues_Data::Internal_GetFloat()
{
	const char   __FUNCTION__; // 53931
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1899
	}
} /* size: 187, variables: 1 */

// <00216AB0> tier0/keyvalues.cpp:1905
// variable: 1
void KeyValues::GetFloat(const char* keyName, float defaultValue)
{
	KeyValues* dat; // 1907
} /* size: 58, variables: 1 */

// <002166E3> tier0/keyvalues.cpp:1919
// variables: 4
// function calls: 5
void CKeyValues_Data::Internal_GetString(const char* defaultValue, char* pScratchSpace, size_t nScratchSpaceCount)
{
	char conversionBuf; // 1931
	int nConvertedLength; // 1932
	const char   __FUNCTION__; // 53958
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2003
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 1996
	V_strlen(const char* str); // 1974
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 1977
} /* size: 527, variables: 3, inline expansions: 5 (81 bytes) */

// <002165F8> tier0/keyvalues.cpp:2009
// variable: 1
void KeyValues::GetString(const char* keyName, const char* defaultValue, char* pScratchSpace, size_t nScratchSpaceCount)
{
	KeyValues* dat; // 2011
} /* size: 86, variables: 1 */

// <002160F9> tier0/keyvalues.cpp:2020
// variables: 9
// function calls: 6
void CKeyValues_Data::Internal_GetWString(const wchar_t* defaultValue, wchar_t* pScratchSpace, size_t nScratchSpaceCount)
{
	wchar_t conversionBuf; // 2030
	int nConvertedLength; // 2031
	const char   __FUNCTION__; // 53985
	{
		const char* pStringValue; // 2038
		int bufSize; // 2039
		wchar_t* pDelete; // 2040
		wchar_t* pWBuf; // 2041
		int result; // 2051
		V_strlen(const char* str); // 2039
		V_wcslen(const wchar_t* pwch); // 2056
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 2059
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2126
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 2119
} /* size: 808, variables: 3, inline expansions: 2 (31 bytes) */

// <0021600E> tier0/keyvalues.cpp:2132
// variable: 1
void KeyValues::GetWString(const char* keyName, const wchar_t* defaultValue, wchar_t* pScratchSpace, size_t nScratchSpaceCount)
{
	KeyValues* dat; // 2134
} /* size: 86, variables: 1 */

// <00215EFD> tier0/keyvalues.cpp:2145
// variables: 4
void CKeyValues_Data::Internal_GetColor(Color color)
{
	{
		float a; // 2162
		float b; // 2162
		float c; // 2162
		float d; // 2162
	}
} /* size: 345 */

// <00215E52> tier0/keyvalues.cpp:2173
// variable: 1
void KeyValues::GetColor(const char* keyName, const Color& defaultColor)
{
	KeyValues* dat; // 2175
} /* size: 56, variables: 1 */

// <00215DF0> tier0/keyvalues.cpp:2186
void CKeyValues_Data::Internal_SetColor(Color value)
{
} /* size: 43 */

// <00215D05> tier0/keyvalues.cpp:2196
// function calls: 2
void CKeyValues_Data::ResolveColorValue()
{
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 2199
} /* size: 7, inline expansions: 2 (0 bytes) */

// <00215C5A> tier0/keyvalues.cpp:2202
// variable: 1
void KeyValues::SetColor(const char* keyName, Color value)
{
	KeyValues* dat; // 2204
} /* size: 54, variables: 1 */

// <002155CD> tier0/keyvalues.cpp:2214
// variables: 15
// function calls: 6
void CKeyValues_Data::Internal_SetFromString(types_t type, const char* szString)
{
	char* szDup; // 2216
	const char   __FUNCTION__; // 54061
	{
		int len; // 2221
		V_strlen(const char* str); // 2221
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 2223
	}
	{
		int64 nIntValue; // 2256
	}
	{
		int bufSize; // 2264
		wchar_t* pDelete; // 2266
		wchar_t* pWBuf; // 2267
		int result; // 2277
		{
			_DebuggerBreakInlineExpressionWrapper(void); // 2278
		}
		V_strlen(const char* str); // 2264
	}
	{
		float a; // 2298
		float b; // 2298
		float c; // 2298
		float d; // 2298
		Color color; // 2300
		Color::Color(); // 2300
	}
	{
		uint64 uintValue; // 2311
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2317
	}
} /* size: 0, variables: 2 */

// <002154FE> tier0/keyvalues.cpp:2327
// variable: 1
void KeyValues::SetFromString(const char* keyName, types_t type, const char* szValue)
{
	KeyValues* dat; // 2329
} /* size: 53, variables: 1 */

// <00215239> tier0/keyvalues.cpp:2336
// variables: 2
// function calls: 5
void CKeyValues_Data::Internal_SetString(const char* value)
{
	int len; // 2344
	char* szDup; // 2355
	V_strlen(const char* str); // 2344
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 2369
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 2361
} /* size: 406, variables: 2, inline expansions: 5 (142 bytes) */

// <00226687> tier0/keyvalues.cpp:2386
void CKeyValues_Data::ResolveStringValue()
{
} /* size: 17 */

// <00215169> tier0/keyvalues.cpp:2395
// variable: 1
void KeyValues::SetString(const char* keyName, const char* value)
{
	KeyValues* dat; // 2397
} /* size: 54, variables: 1 */

// <00214F1F> tier0/keyvalues.cpp:2407
// variables: 2
// function calls: 5
void CKeyValues_Data::Internal_SetWString(const wchar_t* value)
{
	int len; // 2415
	wchar_t* szDup; // 2417
	V_wcslen(const wchar_t* pwch); // 2415
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 2431
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 2423
} /* size: 225, variables: 2, inline expansions: 5 (69 bytes) */

// <00214F02> tier0/keyvalues.cpp:2447
void CKeyValues_Data::ResolveWStringValue()
{
} /* size: 0 */

// <00214E4F> tier0/keyvalues.cpp:2453
// variable: 1
void KeyValues::SetWString(const char* keyName, const wchar_t* value)
{
	KeyValues* dat; // 2455
} /* size: 54, variables: 1 */

// <00214DED> tier0/keyvalues.cpp:2465
void CKeyValues_Data::Internal_SetInt(int value)
{
} /* size: 43 */

// <00214DBB> tier0/keyvalues.cpp:2472
void CKeyValues_Data::ResolveIntValue()
{
} /* size: 7 */

// <00214D08> tier0/keyvalues.cpp:2478
// variable: 1
void KeyValues::SetInt(const char* keyName, int value)
{
	KeyValues* dat; // 2480
} /* size: 54, variables: 1 */

// <00214CA6> tier0/keyvalues.cpp:2490
void CKeyValues_Data::Internal_SetUint64(uint64 value)
{
} /* size: 43 */

// <00214C74> tier0/keyvalues.cpp:2511
void CKeyValues_Data::ResolveUint64Value()
{
} /* size: 17 */

// <00214BC1> tier0/keyvalues.cpp:2517
// variable: 1
void KeyValues::SetUint64(const char* keyName, uint64 value)
{
	KeyValues* dat; // 2519
} /* size: 54, variables: 1 */

// <00214B5F> tier0/keyvalues.cpp:2529
void CKeyValues_Data::Internal_SetFloat(float value)
{
} /* size: 54 */

// <00214B2D> tier0/keyvalues.cpp:2536
void CKeyValues_Data::ResolveFloatValue()
{
} /* size: 9 */

// <00214A78> tier0/keyvalues.cpp:2542
// variable: 1
void KeyValues::SetFloat(const char* keyName, float value)
{
	KeyValues* dat; // 2544
} /* size: 62, variables: 1 */

// <00214906> tier0/keyvalues.cpp:2551
// variables: 2
// function calls: 3
void CKeyValues_Data::Internal_SetName(const char* setName)
{
	HKeySymbol hCaseSensitiveKeyName; // 2553
	HKeySymbol hCaseInsensitiveKeyName; // 2553
	HKeySymbol::HKeySymbol(
			uint32 index);  // 2553
	HKeySymbol::HKeySymbol(
			uint32 index);  // 2553
	HKeySymbol::operator==(
			const HKeySymbol& other);  // 2557
} /* size: 132, variables: 2, inline expansions: 3 (7 bytes) */

// <002266B0> tier0/keyvalues.cpp:2564
void CKeyValues_Data::Internal_SetNameFrom(const CKeyValues_Data& other)
{
} /* size: 63 */

// <00214872> tier0/keyvalues.cpp:2570
void KeyValues::SetName(const char* setName)
{
} /* size: 9 */

// <00214810> tier0/keyvalues.cpp:2578
void CKeyValues_Data::Internal_SetPtr(void* value)
{
} /* size: 43 */

// <002147D9> tier0/keyvalues.cpp:2585
void* CKeyValues_Data::ResolvePtrValue()
{
} /* size: 8 */

// <00214726> tier0/keyvalues.cpp:2591
// variable: 1
void KeyValues::SetPtr(const char* keyName, void* value)
{
	KeyValues* dat; // 2593
} /* size: 54, variables: 1 */

// <002146FC> tier0/keyvalues.cpp:2600
void CKeyValues_Data::Internal_CopyName(const CKeyValues_Data& src)
{
} /* size: 0 */

// <00226725> tier0/keyvalues.cpp:2606
// function call: 1
void CKeyValues_Data::Internal_CopyData(const CKeyValues_Data& src)
{
	CKeyValues_Data::Internal_CopyData(
				const CKeyValues_Data& src);  // 2606
} /* size: 279, inline expansions: 1 (207 bytes) */

// <002146B8> tier0/keyvalues.cpp:2606
// variables: 2
void CKeyValues_Data::Internal_CopyData(const CKeyValues_Data& src)
{
	const char   __FUNCTION__; // 53931
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2640
	}
} /* size: 0, variables: 1 */

// <00214545> tier0/keyvalues.cpp:2650
// variable: 1
void KeyValues::RecursiveCopyKeyValues(const KeyValues& src)
{
	{
		KeyValues* pSub; // 2680
	}
} /* size: 171 */

// <00214487> tier0/keyvalues.cpp:2693
// function call: 1
void KeyValues::operator=(const KeyValues& src)
{
	KeyValues::Init(); // 2696
} /* size: 62, inline expansions: 1 (16 bytes) */

// <002143A2> tier0/keyvalues.cpp:2705
// variables: 3
void KeyValues::CopySubkeys(KeyValues* pParent)
{
	KeyValues* pPrev; // 2709
	{
		KeyValues* sub; // 2710
		{
			KeyValues* dat; // 2713
		}
	}
} /* size: 124, variables: 1 */

// <002142CE> tier0/keyvalues.cpp:2733
// variable: 1
void KeyValues::MakeCopy()
{
	KeyValues* newKeyValue; // 2735
} /* size: 78, variables: 1 */

// <00214204> tier0/keyvalues.cpp:2753
// variable: 1
// function call: 1
void KeyValues::IsEmpty(const char* keyName)
{
	KeyValues* dat; // 2755
	CKeyValues_Data::Internal_GetDataType(); // 2759
} /* size: 65, variables: 1, inline expansions: 1 (0 bytes) */

// <0021413D> tier0/keyvalues.cpp:2768
// variable: 1
void KeyValues::Clear()
{
	KeyValues* pSub; // 2770
} /* size: 70, variables: 1 */

// <00214084> tier0/keyvalues.cpp:2782
// variable: 1
// function call: 1
void KeyValues::GetDataType(const char* keyName)
{
	KeyValues* dat; // 2784
	CKeyValues_Data::Internal_GetDataType(); // 2787
} /* size: 34, variables: 1, inline expansions: 1 (7 bytes) */

// <00213E93> tier0/keyvalues.cpp:2797
// variables: 6
// function calls: 3
void KeyValues::AppendIncludedKeys(CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> >& includedKeys)
{
	KeyValues* insertSpot; // 2800
	int includeCount; // 2801
	const char   __FUNCTION__; // 53958
	{
		int i; // 2802
		{
			KeyValues* kv; // 2804
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2805
			}
			CUtlMemory<KeyValues::operator[](
					int i);  // 588
			CUtlVectorBase<KeyValues::operator[](
					int i);  // 2804
		}
	}
	CUtlVectorBase<KeyValues::Count(); // 2801
} /* size: 0, variables: 3, inline expansions: 1 (4 bytes) */

// <0021377C> tier0/keyvalues.cpp:2816
// variables: 7
// function calls: 16
void KeyValues::ParseIncludedKeys(const char* resourceName, const char* filetoinclude, IBaseFileSystem* pFileSystem, const char* pPathID, CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> >& includedKeys, GetSymbolProc_t pfnEvaluateSymbolProc, void* pEvaluateSymbolContext, const char* pEmptyKeyReplacement)
{
	const char   __FUNCTION__; // 53931
	char fullpath; // 2830
	int len; // 2834
	KeyValues* newKV; // 2856
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2819
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2820
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2821
	}
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 2831
	V_strlen(const char* str); // 2834
	V_strncat<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars,
					int nMaxCharsToCopy);  // 2854
	CUtlMemory<KeyValues::NumAllocated(); // 1196
	CUtlMemory<KeyValues::Base(); // 112
	CUtlVectorBase<KeyValues::Base(); // 368
	CUtlVectorBase<KeyValues::ResetDbgInfo(); // 824
	CUtlMemory<KeyValues::IsGrowable(); // 823
	CUtlMemory<KeyValues::IsExternallyAllocated(); // 859
	CUtlMemory<KeyValues::IsExternallyAllocated(); // 861
	CUtlMemory<KeyValues::Grow(
		int num);  // 806
	CUtlVectorBase<KeyValues::GrowMemory(
			int num);  // 1198
	CUtlMemory<KeyValues::operator[](
			int i);  // 602
	CUtlVectorBase<KeyValues::Element(
		int i);  // 1201
	CopyConstruct<KeyValues*>(KeyValues** pMemory,
					KeyValues* const& src);  // 1201
	CUtlVectorBase<KeyValues::AddToTail(
			KeyValues* const& src);  // 2864
} /* size: 0, variables: 4, inline expansions: 16 (712 bytes) */

// <002135E8> tier0/keyvalues.cpp:2879
// variables: 5
// function calls: 3
void KeyValues::MergeBaseKeys(CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> >& baseKeys)
{
	int includeCount; // 2881
	int i; // 2882
	const char   __FUNCTION__; // 53823
	{
		KeyValues* kv; // 2885
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2886
		}
		CUtlMemory<KeyValues::operator[](
				int i);  // 588
		CUtlVectorBase<KeyValues::operator[](
				int i);  // 2885
	}
	CUtlVectorBase<KeyValues::Count(); // 2881
} /* size: 0, variables: 3, inline expansions: 1 (4 bytes) */

// <002133DA> tier0/keyvalues.cpp:2896
// variables: 6
// function call: 1
void KeyValues::RecursiveMergeKeyValues(KeyValues* baseKV)
{
	const char   __FUNCTION__; // 54088
	{
		KeyValues* baseChild; // 2902
		{
			bool bFoundMatch; // 2906
			{
				KeyValues* newChild; // 2909
				V_strcmp(const char* s1,
					const char* s2);  // 2911
			}
			{
				KeyValues* dat; // 2922
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2923
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <002287FA> tier0/keyvalues.cpp:2932
// variables: 3
void KeyValues::EvaluateConditional(CKeyValuesErrorStack* pErrorStack, const char* pExpressionString, GetSymbolProc_t pfnEvaluateSymbolProc, void* pEvaluateSymbolContext)
{
	CExpressionEvaluator eval; // 2936
	bool bResult; // 2937
	bool bValid; // 2938
} /* size: 0, variables: 3 */

// <00211E8C> tier0/keyvalues.cpp:2950
// variables: 18
// function calls: 69
void KeyValues::LoadFromBuffer(const char* resourceName, CUtlBuffer& buf, IBaseFileSystem* pFileSystem, const char* pPathID, GetSymbolProc_t pfnEvaluateSymbolProc, IKeyValuesErrorSpew* pErrorSpew, void* pEvaluateSymbolContext, const char* pEmptyKeyReplacement)
{
	KeyValues* pPreviousKey; // 2952
	KeyValues* pCurrentKey; // 2953
	CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> > includedKeys; // 2954
	CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> > baseKeys; // 2955
	bool wasQuoted; // 2956
	bool wasConditional; // 2957
	CKeyValuesErrorStack errorStack; // 2958
	CKeyValuesTokenReader tokenReader; // 2959
	const char   __FUNCTION__; // 53850
	bool bErrors; // 3088
	{
		bool bAccepted; // 2964
		const char* s; // 2967
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3014
		}
		{
			CUtlString errorText; // 3046
			CUtlString::CUtlString(); // 3046
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 3048
			CUtlString::~CUtlString(); // 3049
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 267
		CKeyValuesTokenReader::ReadToken(
				bool& wasQuoted,
				bool& wasConditional);  // 2967
		CUtlBuffer::IsValid(); // 2968
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 267
		CKeyValuesTokenReader::ReadToken(
				bool& wasQuoted,
				bool& wasConditional);  // 3029
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 267
		CKeyValuesTokenReader::ReadToken(
				bool& wasQuoted,
				bool& wasConditional);  // 2980
		KeyValues::EvaluateConditional(
					CKeyValuesErrorStack* pErrorStack,
					const char* pExpressionString,
					GetSymbolProc_t pfnEvaluateSymbolProc,
					void* pEvaluateSymbolContext);  // 3033
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 267
		CKeyValuesTokenReader::ReadToken(
				bool& wasQuoted,
				bool& wasConditional);  // 3036
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 267
		CKeyValuesTokenReader::ReadToken(
				bool& wasQuoted,
				bool& wasConditional);  // 2996
	}
	{
		int i; // 3069
		{
			KeyValues* kv; // 3072
		}
	}
	{
		int i; // 3080
		{
			KeyValues* kv; // 3083
		}
	}
	HKeySymbol::HKeySymbol(); // 132
	IKeyValuesErrorSpew::IKeyValuesErrorSpew(); // 117
	CDefaultKeyValuesErrorSpew::CDefaultKeyValuesErrorSpew(); // 132
	CKeyValuesErrorStack::CKeyValuesErrorStack(
				IKeyValuesErrorSpew* pSpew);  // 2958
	CUtlMemory<KeyValues::ValidateGrowSize(); // 475
	CUtlMemory<KeyValues::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<KeyValues::ResetDbgInfo(); // 530
	CUtlVectorBase<KeyValues::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<KeyValues::CUtlVector(); // 2954
	CUtlMemory<KeyValues::ValidateGrowSize(); // 475
	CUtlMemory<KeyValues::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<KeyValues::ResetDbgInfo(); // 530
	CUtlVectorBase<KeyValues::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<KeyValues::CUtlVector(); // 2955
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<500>::CBufferStringN(); // 256
	CKeyValuesTokenReader::CKeyValuesTokenReader(
				CKeyValuesErrorStack* pErrorStack,
				KeyValues* pKeyValues,
				CUtlBuffer& buf);  // 2959
	CKeyValuesErrorStack::SetFilename(
			const char* pFilename);  // 2961
	CUtlBuffer::IsValid(); // 3064
	CKeyValuesErrorStack::EncounteredAnyErrors(); // 3088
	CKeyValuesErrorStack::SetFilename(
			const char* pFilename);  // 3089
	CBufferString::~CBufferString(); // 587
	CBufferStringN<500>::~CBufferStringN(); // 233
	CKeyValuesTokenReader::~CKeyValuesTokenReader(); // 3092
	CKeyValuesErrorStack::ClearErrorFlag(); // 3090
	CKeyValuesErrorStack::~CKeyValuesErrorStack(); // 3092
	CUtlMemory<KeyValues::Purge(); // 903
	CUtlMemory<KeyValues::Purge(); // 1799
	CUtlVectorBase<KeyValues::Purge(); // 560
	ValidateAlignment<KeyValues*>(void); // 508
	CUtlMemory<KeyValues::Purge(); // 510
	CUtlMemory<KeyValues::~CUtlMemory(); // 562
	CUtlVectorBase<KeyValues::~CUtlVectorBase(); // 410
	CUtlVector<KeyValues::~CUtlVector(); // 3092
	CUtlMemory<KeyValues::Purge(); // 903
	CUtlMemory<KeyValues::Purge(); // 1799
	CUtlVectorBase<KeyValues::Purge(); // 560
	ValidateAlignment<KeyValues*>(void); // 508
	CUtlMemory<KeyValues::Purge(); // 510
	CUtlMemory<KeyValues::~CUtlMemory(); // 562
	CUtlVectorBase<KeyValues::~CUtlVectorBase(); // 410
	CUtlVector<KeyValues::~CUtlVector(); // 3092
} /* size: 2670, variables: 10, inline expansions: 43 (1095 bytes) */

// <00211AA8> tier0/keyvalues.cpp:3098
// variables: 4
// function calls: 7
void KeyValues::LoadFromBuffer(const char* resourceName, const char* pBuffer, IBaseFileSystem* pFileSystem, const char* pPathID, GetSymbolProc_t pfnEvaluateSymbolProc, IKeyValuesErrorSpew* pErrorSpew, void* pEvaluateSymbolContext, const char* pEmptyKeyReplacement)
{
	int nLen; // 3103
	CUtlBuffer buf; // 3112
	{
		int nUTF8Len; // 3116
		char* pUTF8Buf; // 3117
	}
	V_strlen(const char* str); // 3103
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 3122
} /* size: 521, variables: 2, inline expansions: 7 (181 bytes) */

// <002104D6> tier0/keyvalues.cpp:3127
// variables: 29
// function calls: 48
void KeyValues::RecursiveLoadFromBuffer(CKeyValuesErrorStack* pErrorStack, const char* resourceName, CKeyValuesTokenReader& tokenReader, GetSymbolProc_t pfnEvaluateSymbolProc, void* pEvaluateSymbolContext, const char* pEmptyKeyReplacement)
{
	CKeyErrorContext errorReport; // 3129
	bool wasQuoted; // 3130
	bool wasConditional; // 3131
	CKeyErrorContext errorKey; // 3139
	KeyValues* pLastChild; // 3144
	const char   __FUNCTION__; // 54088
	{
		bool bAccepted; // 3149
		const char* name; // 3152
		KeyValues* dat; // 3179
		const char* value; // 3184
		bool bFoundConditional; // 3186
		{
			KeyValues* pExistingKey; // 3218
		}
		{
			int len; // 3255
			char* pIEnd; // 3258
			char* pFEnd; // 3259
			const char* pSEnd; // 3260
			int64 ival; // 3262
			bool bIntOverflow; // 3266
			double doubleVal; // 3269
			float fval; // 3270
			bool bFloatOverOrUnderflow; // 3271
			const char* peek; // 3323
			{
				int64 retVal; // 3290
				{
					int i; // 3291
					{
						char digit; // 3293
					}
				}
			}
			V_strlen(const char* str); // 3255
			FastASCIIToLower<char>(char c); // 3276
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 267
			CKeyValuesTokenReader::ReadToken(
					bool& wasQuoted,
					bool& wasConditional);  // 3323
			KeyValues::EvaluateConditional(
						CKeyValuesErrorStack* pErrorStack,
						const char* pExpressionString,
						GetSymbolProc_t pfnEvaluateSymbolProc,
						void* pEvaluateSymbolContext);  // 3326
			{
			}
			CKeyValuesTokenReader::SeekBackOneToken(); // 3330
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3334
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3337
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3345
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3350
		}
		KeyValues::EvaluateConditional(
					CKeyValuesErrorStack* pErrorStack,
					const char* pExpressionString,
					GetSymbolProc_t pfnEvaluateSymbolProc,
					void* pEvaluateSymbolContext);  // 3189
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 267
		CKeyValuesTokenReader::ReadToken(
				bool& wasQuoted,
				bool& wasConditional);  // 3152
		{
		}
		CKeyValuesErrorStack::Reset(
			int stackLevel,
			HKeySymbol symName);  // 387
		CKeyErrorContext::Reset(
			HKeySymbol symName);  // 3181
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 267
		CKeyValuesTokenReader::ReadToken(
				bool& wasQuoted,
				bool& wasConditional);  // 3184
		HKeySymbol::HKeySymbol(
				uint32 index);  // 3241
		{
		}
		CKeyValuesErrorStack::Reset(
			int stackLevel,
			HKeySymbol symName);  // 387
		CKeyErrorContext::Reset(
			HKeySymbol symName);  // 3241
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 267
		CKeyValuesTokenReader::ReadToken(
				bool& wasQuoted,
				bool& wasConditional);  // 3192
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 267
		CKeyValuesTokenReader::ReadToken(
				bool& wasQuoted,
				bool& wasConditional);  // 3205
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 267
		CKeyValuesTokenReader::ReadToken(
				bool& wasQuoted,
				bool& wasConditional);  // 3212
		KeyValues::EvaluateConditional(
					CKeyValuesErrorStack* pErrorStack,
					const char* pExpressionString,
					GetSymbolProc_t pfnEvaluateSymbolProc,
					void* pEvaluateSymbolContext);  // 3209
	}
	CKeyValuesErrorStack::Push(
		HKeySymbol symName);  // 396
	CKeyErrorContext::Init(
		HKeySymbol symName);  // 379
	CKeyErrorContext::CKeyErrorContext(
			CKeyValuesErrorStack* pErrorStack,
			HKeySymbol symName);  // 3129
	HKeySymbol::HKeySymbol(
			uint32 index);  // 3139
	CKeyValuesErrorStack::Push(
		HKeySymbol symName);  // 396
	CKeyErrorContext::Init(
		HKeySymbol symName);  // 379
	CKeyErrorContext::CKeyErrorContext(
			CKeyValuesErrorStack* pErrorStack,
			HKeySymbol symName);  // 3139
	CKeyValuesErrorStack::Pop(); // 383
	CKeyErrorContext::~CKeyErrorContext(); // 3358
	CKeyValuesErrorStack::Pop(); // 383
	CKeyErrorContext::~CKeyErrorContext(); // 3358
	CKeyValuesErrorStack::Pop(); // 383
	CKeyErrorContext::~CKeyErrorContext(); // 3358
} /* size: 0, variables: 6, inline expansions: 13 (891 bytes) */

// <001FEE7F> tier0/keyvalues.cpp:3361
// member functions: 4
// member variable: 1
// class size: 4
class CBinaryKVHeaderWriter {
	/* tier0/keyvalues.cpp:3364 */
	void StartHeader(CBinaryKVHeaderWriter* , CUtlBuffer& );
	/* tier0/keyvalues.cpp:3372 */
	void FinishHeader(CBinaryKVHeaderWriter* , CUtlBuffer& );
	int m_nHeaderPos; /* 0 4 */
	void StartHeader(class CBinaryKVHeaderWriter *, class CUtlBuffer &); /* linkage=_ZN21CBinaryKVHeaderWriter11StartHeaderER10CUtlBuffer */
	void FinishHeader(class CBinaryKVHeaderWriter *, class CUtlBuffer &); /* linkage=_ZN21CBinaryKVHeaderWriter12FinishHeaderER10CUtlBuffer */
};

// <002104A3> tier0/keyvalues.cpp:3364
// variable: 1
inline void CBinaryKVHeaderWriter::StartHeader(CUtlBuffer& buffer)
{
	kvbinaryheader_t header; // 3367
} /* size: 0, variables: 1 */

// <0021045D> tier0/keyvalues.cpp:3372
// variables: 2
inline void CBinaryKVHeaderWriter::FinishHeader(CUtlBuffer& buffer)
{
	uint nPos; // 3375
	kvbinaryheader_t* pHeader; // 3377
} /* size: 0, variables: 2 */

// <0020FB06> tier0/keyvalues.cpp:3387
// variables: 18
// function calls: 31
void KeyValues::WriteAsBinary(CUtlBuffer& buffer)
{
	CBinaryKVHeaderWriter header; // 3396
	bool bRet; // 3400
	CUtlBuffer::IsText(); // 3389
	CUtlBuffer::IsValid(); // 3392
	CUtlBuffer::TellPut(); // 3366
	CBinaryKVHeaderWriter::StartHeader(
			CUtlBuffer& buffer);  // 3397
	CUtlBuffer::TellPut(); // 3375
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 3377
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
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
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
	XXH3_64bits_internal(const void* input,
				size_t len,
				XXH64_hash_t seed64,
				const void* secret,
				size_t secretLen,
				XXH3_hashLong64_f f_hashLong);  // 6455
	XXH_INLINE_XXH3_64bits(const void* input,
				size_t length);  // 3378
	CBinaryKVHeaderWriter::FinishHeader(
			CUtlBuffer& buffer);  // 3403
	CUtlBuffer::IsValid(); // 3404
} /* size: 539, variables: 2, inline expansions: 15 (1680 bytes) */

// <0020E31D> tier0/keyvalues.cpp:3410
// variables: 17
// function calls: 77
void KeyValues::WriteAsBinaryInternal(CUtlBuffer& buffer)
{
	{
		KeyValues* dat; // 3415
		{
			types_t type; // 3417
			{
				const char* pStringValue; // 3435
			}
			{
				const wchar_t* pWSValue; // 3448
				int nLength; // 3449
				{
					int k; // 3451
					CByteswap::IsSwappingBytes(); // 1208
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 1166
					CUtlBuffer::PeekPut(
						int offset);  // 1210
					CUtlBuffer::PutTypeBin<short int>(
								short int src);  // 1204
					{
					}
					{
						int i; // 200
						{
							int i; // 214
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 91
						V_memcpy(void* dest,
							const void* src,
							size_t count);  // 218
						LowLevelByteSwap<short int>(short int* output,
										short int* input);  // 202
					}
					CByteswap::SwapBufferToTargetEndian<short int>(
										short int* outputBuffer,
										short int* inputBuffer,
										int count);  // 170
					CByteswap::SwapBufferToTargetEndian<short int>(
										short int* outputBuffer,
										short int* inputBuffer,
										int count);  // 1214
					CUtlBuffer::PutTypeBin<short int>(
								short int src);  // 1240
					CUtlBuffer::IsText(); // 1238
					GetFmtStr<short int>(int nRadix,
								bool bPrint);  // 1244
					CUtlBuffer::PutType<short int>(
								short int src);  // 1236
					CUtlBuffer::PutType<short int>(
								short int src);  // 1325
					CUtlBuffer::PutShort(
						short int s);  // 3453
				}
				V_wcslen(const wchar_t* pwch); // 3449
				CUtlBuffer::PutShort(
					short int s);  // 3450
			}
			{
				Color tempColor; // 3477
			}
			CKeyValues_Data::Internal_GetDataType(); // 3417
			CUtlBuffer::IsText(); // 1366
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<void*>(
						void* src);  // 1204
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<void*>(void** output,
							void** input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<void*>(
							void** outputBuffer,
							void** inputBuffer,
							int count);  // 170
			CByteswap::SwapBufferToTargetEndian<void*>(
							void** outputBuffer,
							void** inputBuffer,
							int count);  // 1214
			CUtlBuffer::PutTypeBin<void*>(
						void* src);  // 1368
			CUtlBuffer::PutPtr(
				void* p);  // 1363
			CUtlBuffer::PutPtr(
				void* p);  // 3486
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<float>(
						float src);  // 1204
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<float>(float* output,
							float* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<float>(
							float* outputBuffer,
							float* inputBuffer,
							int count);  // 170
			CByteswap::SwapBufferToTargetEndian<float>(
							float* outputBuffer,
							float* inputBuffer,
							int count);  // 1214
			CUtlBuffer::PutTypeBin<float>(
						float src);  // 1240
			GetFmtStr<float>(int nRadix,
					bool bPrint);  // 1244
			CUtlBuffer::PutType<float>(
					float src);  // 1236
			CUtlBuffer::PutType<float>(
					float src);  // 1355
			CUtlBuffer::PutFloat(
				float f);  // 3472
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<int>(int* output,
							int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<int>(
							int* outputBuffer,
							int* inputBuffer,
							int count);  // 170
			CByteswap::SwapBufferToTargetEndian<int>(
							int* outputBuffer,
							int* inputBuffer,
							int count);  // 1214
			CUtlBuffer::PutTypeBin<float>(
						float src);  // 1204
			CUtlBuffer::PutTypeBin<int>(
					int src);  // 1240
			GetFmtStr<int>(int nRadix,
					bool bPrint);  // 1244
			CUtlBuffer::PutType<int>(
					int src);  // 1236
			CUtlBuffer::PutType<int>(
					int src);  // 1335
			CUtlBuffer::PutInt(
				int i);  // 3460
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<long long int>(long long int* output,
								long long int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<long long int>(
								long long int* outputBuffer,
								long long int* inputBuffer,
								int count);  // 170
			CByteswap::SwapBufferToTargetEndian<long long int>(
								long long int* outputBuffer,
								long long int* inputBuffer,
								int count);  // 1214
			CUtlBuffer::PutTypeBin<void*>(
						void* src);  // 1204
			CUtlBuffer::PutTypeBin<long long int>(
							long long int src);  // 1240
			GetFmtStr<long long int>(int nRadix,
						bool bPrint);  // 1244
			CUtlBuffer::PutType<long long int>(
						long long int src);  // 1236
			CUtlBuffer::PutType<long long int>(
						long long int src);  // 1340
			CUtlBuffer::PutInt64(
				int64 i);  // 3466
		}
	}
	CUtlBuffer::IsValid(); // 3498
} /* size: 0, inline expansions: 1 (7 bytes) */

// <00226920> tier0/keyvalues.cpp:3501
// variables: 20
// function calls: 29
void KeyValues::IsValidBinaryKVBuffer(CUtlBuffer& buffer)
{
	const void* pBuf; // 3510
	CUtlBuffer::IsText(); // 3503
	CUtlBuffer::IsValid(); // 3506
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 3510
	{
		const kvbinaryheader_t* pHeader; // 3513
		{
			const char* pTest; // 3525
			CUtlBuffer::TellPut(); // 3527
		}
		{
			uint32 nChecksum; // 3516
			CUtlBuffer::TellMaxPut(); // 3516
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
				XXH_xorshift64(xxh_u64 v64,
						int shift);  // 4646
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
			XXH3_64bits_internal(const void* input,
						size_t len,
						XXH64_hash_t seed64,
						const void* secret,
						size_t secretLen,
						XXH3_hashLong64_f f_hashLong);  // 6455
			XXH_INLINE_XXH3_64bits(const void* input,
						size_t length);  // 3516
		}
	}
	KeyValues::IsValidBinaryKVBuffer(
				CUtlBuffer& buffer);  // 3501
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <0022458E> tier0/keyvalues.cpp:3501
// variables: 20
// function calls: 26
void CUtlBuffer& buffer, const KeyValues::IsValidBinaryKVBuffer()
{
	const void* pBuf; // 3510
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 3510
	{
		const kvbinaryheader_t* pHeader; // 3513
		{
			const char* pTest; // 3525
			CUtlBuffer::TellPut(); // 3527
		}
		{
			uint32 nChecksum; // 3516
			CUtlBuffer::TellMaxPut(); // 3516
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
				XXH_xorshift64(xxh_u64 v64,
						int shift);  // 4646
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
			XXH3_64bits_internal(const void* input,
						size_t len,
						XXH64_hash_t seed64,
						const void* secret,
						size_t secretLen,
						XXH3_hashLong64_f f_hashLong);  // 6455
			XXH_INLINE_XXH3_64bits(const void* input,
						size_t length);  // 3516
		}
	}
} /* size: 468, variables: 1, inline expansions: 2 (10 bytes) */

// <0020E2AF> tier0/keyvalues.cpp:3501
// variables: 4
void KeyValues::IsValidBinaryKVBuffer(CUtlBuffer& buffer)
{
	const void* pBuf; // 3510
	{
		const kvbinaryheader_t* pHeader; // 3513
		{
			uint32 nChecksum; // 3516
		}
		{
			const char* pTest; // 3525
		}
	}
} /* size: 0, variables: 1 */

// <0022803E> tier0/keyvalues.cpp:3535
// variable: 1
// function calls: 3
void KeyValues::ReadAsBinary(CUtlBuffer& buffer)
{
	KeyValuesTokenBuffer_t token; // 3543
	CUtlBuffer::IsText(); // 3503
	CUtlBuffer::IsValid(); // 3506
	KeyValues::IsValidBinaryKVBuffer(
				CUtlBuffer& buffer);  // 3537
} /* size: 83, variables: 1, inline expansions: 3 (24 bytes) */

// <00227E14> tier0/keyvalues.cpp:3535
// variable: 1
// function calls: 7
void KeyValues::ReadAsBinary(CUtlBuffer& buffer)
{
	KeyValuesTokenBuffer_t token; // 3543
	KeyValues::Init(); // 3541
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<500>::CBufferStringN(); // 3543
	CBufferString::~CBufferString(); // 587
	CBufferStringN<500>::~CBufferStringN(); // 3553
	KeyValues::Init(); // 3548
} /* size: 191, variables: 1, inline expansions: 7 (106 bytes) */

// <0020E278> tier0/keyvalues.cpp:3535
// variable: 1
void KeyValues::ReadAsBinary(CUtlBuffer& buffer)
{
	KeyValuesTokenBuffer_t token; // 3543
} /* size: 0, variables: 1 */

// <0020BC3B> tier0/keyvalues.cpp:3555
// variables: 15
// function calls: 121
void KeyValues::ReadAsBinaryInternal(CUtlBuffer& buffer, CBufferString* pTokenBuffer, int nRecursion)
{
	KeyValues* dat; // 3562
	types_t type; // 3563
	int nPeers; // 3564
	const char   __FUNCTION__; // 54012
	{
		CUtlBuffer::IsValid(); // 3557
		_DebuggerBreakInlineExpressionWrapper(void); // 3557
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3572
	}
	{
		KeyValues* pSub; // 3581
	}
	{
		int nLength; // 3608
		wchar_t* pTempWSValue; // 3615
		wchar_t* pDelete; // 3616
		{
			int k; // 3628
			CUtlBuffer::BGetShort(
					short int* pOutShort);  // 951
			CUtlBuffer::GetShort(); // 3630
		}
		CUtlBuffer::BGetShort(
				short int* pOutShort);  // 951
		CUtlBuffer::GetShort(); // 3608
		CUtlBuffer::TellGet(); // 615
		CUtlBuffer::GetBytesRemaining(); // 3611
		CBufferString::LengthAllocatedBytes(); // 3617
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 808
		CBufferString::GetForModify(); // 3620
	}
	{
		Color tempColor; // 3662
		Color::Color(); // 3662
		CUtlBuffer::IsText(); // 1047
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 3663
		CUtlBuffer::IsText(); // 1047
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 3664
		CUtlBuffer::IsText(); // 1047
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 3665
		CUtlBuffer::IsText(); // 1047
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 3666
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3680
	}
	CUtlBuffer::IsText(); // 1047
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<unsigned char>(
					unsigned char& dest);  // 672
	CUtlBuffer::BGetTypeBin<unsigned char>(
					unsigned char& dest);  // 1049
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 913
	StringToNumber<short unsigned int>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
	CUtlBuffer::BGetTypeText<short unsigned int>(
					short unsigned int& value,
					int nRadix);  // 1053
	CUtlBuffer::BGetUnsignedChar(
			unsigned char* pOutUChar);  // 1043
	CUtlBuffer::BGetUnsignedChar(
			unsigned char* pOutUChar);  // 944
	CUtlBuffer::GetUnsignedChar(); // 3563
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 913
	StringToNumber<short unsigned int>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
	CUtlBuffer::BGetTypeText<short unsigned int>(
					short unsigned int& value,
					int nRadix);  // 1053
	CUtlBuffer::BGetUnsignedChar(
			unsigned char* pOutUChar);  // 1043
	CUtlBuffer::IsText(); // 1047
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<unsigned char>(
					unsigned char& dest);  // 672
	CUtlBuffer::BGetTypeBin<unsigned char>(
					unsigned char& dest);  // 1049
	CUtlBuffer::BGetUnsignedChar(
			unsigned char* pOutUChar);  // 944
	CUtlBuffer::GetUnsignedChar(); // 3685
	CKeyValues_Data::Internal_GetDataType(); // 3572
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 3575
	CUtlBuffer::BGetInt64(
			int64* pOutInt64);  // 972
	CUtlBuffer::GetInt64(); // 1016
	CUtlBuffer::GetPtr(); // 3672
	CUtlBuffer::IsText(); // 928
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 913
	StringToNumber<float>(char* pString,
				char** ppEnd,
				int nRadix);  // 915
	CUtlBuffer::BGetTypeText<float>(
				float& value,
				int nRadix);  // 929
	CUtlBuffer::BGetType<float>(
			float& dest);  // 926
	{
		uintp pData; // 716
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 716
		CByteswap::IsSwappingBytes(); // 731
		{
			int i; // 200
			{
				int i; // 214
			}
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 218
			LowLevelByteSwap<float>(float* output,
						float* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<float>(
						float* outputBuffer,
						float* inputBuffer,
						int count);  // 170
		CByteswap::SwapBufferToTargetEndian<float>(
						float* outputBuffer,
						float* inputBuffer,
						int count);  // 733
	}
	CUtlBuffer::BGetTypeBin<float>(
				float& dest);  // 705
	CUtlBuffer::BGetTypeBin<float>(
				float& dest);  // 930
	CUtlBuffer::BGetType<float>(
			float& dest);  // 1121
	CUtlBuffer::BGetFloat(
			float* pOutFloat);  // 1000
	CUtlBuffer::GetFloat(); // 3657
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 3645
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 3603
	CUtlBuffer::BGetInt64(
			int64* pOutInt64);  // 972
	CUtlBuffer::GetInt64(); // 3651
	CKeyValues_Data::Internal_GetDataType(); // 3680
	CUtlBuffer::IsValid(); // 3682
	CUtlBuffer::IsValid(); // 3697
} /* size: 0, variables: 4, inline expansions: 52 (2793 bytes) */

// <0020B2E4> tier0/keyvalues.cpp:3703
// variables: 18
// function calls: 31
void KeyValues::WriteAsBinaryFiltered(CUtlBuffer& buffer)
{
	CBinaryKVHeaderWriter header; // 3712
	bool bRet; // 3716
	CUtlBuffer::IsText(); // 3705
	CUtlBuffer::IsValid(); // 3708
	CUtlBuffer::TellPut(); // 3366
	CBinaryKVHeaderWriter::StartHeader(
			CUtlBuffer& buffer);  // 3713
	CUtlBuffer::TellPut(); // 3375
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 3377
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
		XXH_xorshift64(xxh_u64 v64,
				int shift);  // 4646
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
	XXH3_64bits_internal(const void* input,
				size_t len,
				XXH64_hash_t seed64,
				const void* secret,
				size_t secretLen,
				XXH3_hashLong64_f f_hashLong);  // 6455
	XXH_INLINE_XXH3_64bits(const void* input,
				size_t length);  // 3378
	CBinaryKVHeaderWriter::FinishHeader(
			CUtlBuffer& buffer);  // 3719
	CUtlBuffer::IsValid(); // 3720
} /* size: 539, variables: 2, inline expansions: 15 (1680 bytes) */

// <00209A8B> tier0/keyvalues.cpp:3726
// variables: 17
// function calls: 77
void KeyValues::WriteAsBinaryFilteredInternal(CUtlBuffer& buffer)
{
	{
		KeyValues* dat; // 3732
		{
			types_t type; // 3741
			{
				const char* pStringValue; // 3757
			}
			{
				const wchar_t* pWSValue; // 3770
				int nLength; // 3771
				{
					int k; // 3773
					CByteswap::IsSwappingBytes(); // 1208
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 1166
					CUtlBuffer::PeekPut(
						int offset);  // 1210
					CUtlBuffer::PutTypeBin<short int>(
								short int src);  // 1204
					{
					}
					{
						int i; // 200
						{
							int i; // 214
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 91
						V_memcpy(void* dest,
							const void* src,
							size_t count);  // 218
						LowLevelByteSwap<short int>(short int* output,
										short int* input);  // 202
					}
					CByteswap::SwapBufferToTargetEndian<short int>(
										short int* outputBuffer,
										short int* inputBuffer,
										int count);  // 170
					CByteswap::SwapBufferToTargetEndian<short int>(
										short int* outputBuffer,
										short int* inputBuffer,
										int count);  // 1214
					CUtlBuffer::PutTypeBin<short int>(
								short int src);  // 1240
					CUtlBuffer::IsText(); // 1238
					GetFmtStr<short int>(int nRadix,
								bool bPrint);  // 1244
					CUtlBuffer::PutType<short int>(
								short int src);  // 1236
					CUtlBuffer::PutType<short int>(
								short int src);  // 1325
					CUtlBuffer::PutShort(
						short int s);  // 3775
				}
				V_wcslen(const wchar_t* pwch); // 3771
				CUtlBuffer::PutShort(
					short int s);  // 3772
			}
			{
				Color tempColor; // 3799
			}
			CKeyValues_Data::Internal_GetDataType(); // 3741
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
									long long unsigned int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
									long long unsigned int* outputBuffer,
									long long unsigned int* inputBuffer,
									int count);  // 170
			CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
									long long unsigned int* outputBuffer,
									long long unsigned int* inputBuffer,
									int count);  // 1214
			CUtlBuffer::PutTypeBin<void*>(
						void* src);  // 1204
			CUtlBuffer::PutTypeBin<long long unsigned int>(
								long long unsigned int src);  // 1240
			GetFmtStr<long long unsigned int>(int nRadix,
								bool bPrint);  // 1244
			CUtlBuffer::PutType<long long unsigned int>(
							long long unsigned int src);  // 1236
			CUtlBuffer::PutType<long long unsigned int>(
							long long unsigned int src);  // 1350
			CUtlBuffer::PutUnsignedInt64(
					uint64 i);  // 3788
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<int>(int* output,
							int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<int>(
							int* outputBuffer,
							int* inputBuffer,
							int count);  // 170
			CByteswap::SwapBufferToTargetEndian<int>(
							int* outputBuffer,
							int* inputBuffer,
							int count);  // 1214
			CUtlBuffer::PutTypeBin<float>(
						float src);  // 1204
			CUtlBuffer::PutTypeBin<int>(
					int src);  // 1240
			GetFmtStr<int>(int nRadix,
					bool bPrint);  // 1244
			CUtlBuffer::PutType<int>(
					int src);  // 1236
			CUtlBuffer::PutType<int>(
					int src);  // 1335
			CUtlBuffer::PutInt(
				int i);  // 3782
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<float>(
						float src);  // 1204
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<float>(float* output,
							float* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<float>(
							float* outputBuffer,
							float* inputBuffer,
							int count);  // 170
			CByteswap::SwapBufferToTargetEndian<float>(
							float* outputBuffer,
							float* inputBuffer,
							int count);  // 1214
			CUtlBuffer::PutTypeBin<float>(
						float src);  // 1240
			GetFmtStr<float>(int nRadix,
					bool bPrint);  // 1244
			CUtlBuffer::PutType<float>(
					float src);  // 1236
			CUtlBuffer::PutType<float>(
					float src);  // 1355
			CUtlBuffer::PutFloat(
				float f);  // 3794
			CUtlBuffer::IsText(); // 1366
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<void*>(
						void* src);  // 1204
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<void*>(void** output,
							void** input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<void*>(
							void** outputBuffer,
							void** inputBuffer,
							int count);  // 170
			CByteswap::SwapBufferToTargetEndian<void*>(
							void** outputBuffer,
							void** inputBuffer,
							int count);  // 1214
			CUtlBuffer::PutTypeBin<void*>(
						void* src);  // 1368
			CUtlBuffer::PutPtr(
				void* p);  // 1363
			CUtlBuffer::PutPtr(
				void* p);  // 3808
		}
	}
	CUtlBuffer::IsValid(); // 3821
} /* size: 0, inline expansions: 1 (9 bytes) */

// <0020978B> tier0/keyvalues.cpp:3824
// variable: 1
// function calls: 10
void KeyValues::ReadAsBinaryFiltered(CUtlBuffer& buffer)
{
	KeyValuesTokenBuffer_t token; // 3832
	CUtlBuffer::IsText(); // 3503
	CUtlBuffer::IsValid(); // 3506
	KeyValues::IsValidBinaryKVBuffer(
				CUtlBuffer& buffer);  // 3826
	KeyValues::Init(); // 3830
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<500>::CBufferStringN(); // 3832
	CBufferString::~CBufferString(); // 587
	CBufferStringN<500>::~CBufferStringN(); // 3842
	KeyValues::Init(); // 3837
} /* size: 268, variables: 1, inline expansions: 10 (189 bytes) */

// <0020953A> tier0/keyvalues.cpp:3844
// variable: 1
// function calls: 8
void ReadAndSetString(CUtlBuffer& buffer, KeyValues* pKV, const char* pName)
{
	KeyValuesTokenBuffer_t token; // 3848
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<500>::CBufferStringN(); // 3848
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3850
	CBufferString::~CBufferString(); // 587
	CBufferStringN<500>::~CBufferStringN(); // 3851
} /* size: 173, variables: 1, inline expansions: 8 (181 bytes) */

// <00207515> tier0/keyvalues.cpp:3854
// variables: 17
// function calls: 103
void KeyValues::ReadAsBinaryFilteredInternal(CUtlBuffer& buffer, CBufferString* pTokenBuffer, int nRecursion)
{
	int nPeers; // 3864
	{
		types_t type; // 3867
		{
			KeyValues* newKey; // 3876
			KeyValues::CreateKey(
					const char* keyName);  // 3876
		}
		{
			const char* name; // 3886
			{
				int nLength; // 3898
				wchar_t* wsValue; // 3906
				{
					int k; // 3908
					CUtlBuffer::BGetShort(
							short int* pOutShort);  // 951
					CUtlBuffer::GetShort(); // 3910
				}
				CUtlBuffer::BGetShort(
						short int* pOutShort);  // 951
				CUtlBuffer::GetShort(); // 3898
				CUtlBuffer::TellGet(); // 615
				CUtlBuffer::GetBytesRemaining(); // 3901
			}
			{
				int value; // 3920
				CUtlBuffer::BGetInt(
					int* pOutInt);  // 965
				CUtlBuffer::GetInt(); // 3920
			}
			{
				uint64 value; // 3927
				CUtlBuffer::BGetInt64(
						int64* pOutInt64);  // 972
				CUtlBuffer::GetInt64(); // 3927
			}
			{
				float value; // 3934
				CUtlBuffer::IsText(); // 928
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 913
				StringToNumber<float>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
				CUtlBuffer::BGetTypeText<float>(
							float& value,
							int nRadix);  // 929
				CUtlBuffer::BGetType<float>(
						float& dest);  // 926
				{
					uintp pData; // 716
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 716
					CByteswap::IsSwappingBytes(); // 731
					{
						int i; // 200
						{
							int i; // 214
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 91
						V_memcpy(void* dest,
							const void* src,
							size_t count);  // 218
						LowLevelByteSwap<float>(float* output,
									float* input);  // 202
					}
					CByteswap::SwapBufferToTargetEndian<float>(
									float* outputBuffer,
									float* inputBuffer,
									int count);  // 170
					CByteswap::SwapBufferToTargetEndian<float>(
									float* outputBuffer,
									float* inputBuffer,
									int count);  // 733
				}
				CUtlBuffer::BGetTypeBin<float>(
							float& dest);  // 705
				CUtlBuffer::BGetTypeBin<float>(
							float& dest);  // 930
				CUtlBuffer::BGetType<float>(
						float& dest);  // 1121
				CUtlBuffer::BGetFloat(
						float* pOutFloat);  // 1000
				CUtlBuffer::GetFloat(); // 3934
			}
			{
				unsigned char c0; // 3941
				unsigned char c1; // 3942
				unsigned char c2; // 3943
				unsigned char c3; // 3944
				CUtlBuffer::IsText(); // 1047
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 690
				CUtlBuffer::BGetTypeBin<unsigned char>(
								unsigned char& dest);  // 672
				CUtlBuffer::BGetTypeBin<unsigned char>(
								unsigned char& dest);  // 1049
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 913
				StringToNumber<short unsigned int>(char* pString,
									char** ppEnd,
									int nRadix);  // 915
				CUtlBuffer::BGetTypeText<short unsigned int>(
								short unsigned int& value,
								int nRadix);  // 1053
				CUtlBuffer::BGetUnsignedChar(
						unsigned char* pOutUChar);  // 1043
				CUtlBuffer::BGetUnsignedChar(
						unsigned char* pOutUChar);  // 944
				CUtlBuffer::GetUnsignedChar(); // 3941
				CUtlBuffer::IsText(); // 1047
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 690
				CUtlBuffer::BGetTypeBin<unsigned char>(
								unsigned char& dest);  // 672
				CUtlBuffer::BGetTypeBin<unsigned char>(
								unsigned char& dest);  // 1049
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 913
				StringToNumber<short unsigned int>(char* pString,
									char** ppEnd,
									int nRadix);  // 915
				CUtlBuffer::BGetTypeText<short unsigned int>(
								short unsigned int& value,
								int nRadix);  // 1053
				CUtlBuffer::BGetUnsignedChar(
						unsigned char* pOutUChar);  // 1043
				CUtlBuffer::BGetUnsignedChar(
						unsigned char* pOutUChar);  // 944
				CUtlBuffer::GetUnsignedChar(); // 3942
				CUtlBuffer::IsText(); // 1047
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 690
				CUtlBuffer::BGetTypeBin<unsigned char>(
								unsigned char& dest);  // 672
				CUtlBuffer::BGetTypeBin<unsigned char>(
								unsigned char& dest);  // 1049
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 913
				StringToNumber<short unsigned int>(char* pString,
									char** ppEnd,
									int nRadix);  // 915
				CUtlBuffer::BGetTypeText<short unsigned int>(
								short unsigned int& value,
								int nRadix);  // 1053
				CUtlBuffer::BGetUnsignedChar(
						unsigned char* pOutUChar);  // 1043
				CUtlBuffer::BGetUnsignedChar(
						unsigned char* pOutUChar);  // 944
				CUtlBuffer::GetUnsignedChar(); // 3943
				CUtlBuffer::IsText(); // 1047
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 690
				CUtlBuffer::BGetTypeBin<unsigned char>(
								unsigned char& dest);  // 672
				CUtlBuffer::BGetTypeBin<unsigned char>(
								unsigned char& dest);  // 1049
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 913
				StringToNumber<short unsigned int>(char* pString,
									char** ppEnd,
									int nRadix);  // 915
				CUtlBuffer::BGetTypeText<short unsigned int>(
								short unsigned int& value,
								int nRadix);  // 1053
				CUtlBuffer::BGetUnsignedChar(
						unsigned char* pOutUChar);  // 1043
				CUtlBuffer::BGetUnsignedChar(
						unsigned char* pOutUChar);  // 944
				CUtlBuffer::GetUnsignedChar(); // 3944
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 3945
			}
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 3886
			CUtlBuffer::BGetInt64(
					int64* pOutInt64);  // 972
			CUtlBuffer::GetInt64(); // 1016
			CUtlBuffer::GetPtr(); // 3951
		}
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlBuffer::IsText(); // 1047
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 3867
		CUtlBuffer::IsValid(); // 3960
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 3861
	CUtlBuffer::IsValid(); // 3964
} /* size: 1883, variables: 1, inline expansions: 4 (140 bytes) */

// <00206C99> tier0/keyvalues.cpp:3997
// variables: 16
// function calls: 9
void KeyValues::UnpackIntoStructure(const KeyValuesUnpackStructure* pUnpackTable, void* pDest)
{
	uint8* dest; // 3999
	{
		uint8* dest_field; // 4002
		KeyValues* find_it; // 4003
		{
			float default_value; // 4008
		}
		{
			Vector* dest_v; // 4016
			const char* src_string; // 4017
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 4022
		}
		{
			float* dest_f; // 4028
			const char* src_string; // 4029
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 4034
		}
		{
			float* dest_f; // 4040
			const char* src_string; // 4041
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 4046
		}
		{
			char* dest_s; // 4052
			const char* pDefault; // 4053
			V_strncpy<long unsigned int>(char* pDest,
							const char* pSrc,
							long unsigned int maxLenInChars);  // 4058
		}
		{
			int* dest_i; // 4066
			int default_int; // 4067
		}
		{
			Vector* dest_v; // 4076
			{
				Color c; // 4079
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 4079
			}
			Vector::operator*=(
					float fl);  // 4092
		}
	}
} /* size: 768, variables: 1 */

// <00206A3C> tier0/keyvalues.cpp:4105
// variables: 3
// function calls: 2
void KeyValues::ProcessResolutionKeys(const char* pResString)
{
	KeyValues* pSubKey; // 4113
	{
		char normalKeyName; // 4128
		char* pString; // 4132
		V_strncpy<long unsigned int>(char* pDest,
						const char* pSrc,
						long unsigned int maxLenInChars);  // 4129
		V_stristr_fast(char* pStr,
				const char* pSearch);  // 4132
	}
} /* size: 301, variables: 1 */

// <00205D13> tier0/keyvalues.cpp:4153
// variables: 25
// function calls: 12
void KeyValues::MergeFrom(const KeyValues* kvMerge, MergeKeyValuesOp_t eOp)
{
	const char   __FUNCTION__; // 53715
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4155
	}
	{
		{
			const KeyValues* sub; // 4169
			{
				const char* szName; // 4171
				KeyValues* subStorage; // 4173
			}
		}
		{
			const KeyValues* val; // 4183
			{
				const char* szName; // 4185
			}
		}
		{
			KeyValues* sub; // 4197
			{
				const char* szName; // 4199
				KeyValues* subStorage; // 4201
			}
		}
		{
			KeyValues* val; // 4211
			{
				const char* szName; // 4213
			}
		}
		{
			KeyValues* sub; // 4222
			{
				const char* szName; // 4224
				KeyValues* subStorage; // 4226
			}
		}
		{
			KeyValues* val; // 4232
			{
				const char* szName; // 4234
			}
		}
		{
			KeyValues* sub; // 4244
			{
				const char* szName; // 4246
				{
					KeyValues* subStorage; // 4247
				}
			}
		}
		{
			KeyValues* val; // 4252
			{
				const char* szName; // 4254
			}
		}
		{
			CKeySymbol::operator HKeySymbol(); // 4162
			HKeySymbol::HKeySymbol(); // 629
			CKeySymbol::CKeySymbol(
					const char* pszSymbolName);  // 4162
		}
		operator()(const class* __closure,
				const char* s); // 4162
		{
			CKeySymbol::operator HKeySymbol(); // 4163
			HKeySymbol::HKeySymbol(); // 629
			CKeySymbol::CKeySymbol(
					const char* pszSymbolName);  // 4163
		}
		operator()(const class* __closure,
				const char* s); // 4163
		{
			CKeySymbol::operator HKeySymbol(); // 4164
			HKeySymbol::HKeySymbol(); // 629
			CKeySymbol::CKeySymbol(
					const char* pszSymbolName);  // 4164
		}
		operator()(const class* __closure,
				const char* s); // 4164
	}
} /* size: 1168, variables: 1 */

// <00205B9B> tier0/keyvalues.cpp:4263
// variables: 3
// function call: 1
void KeyValues::MergeFromTemporary(const KeyValues* kvMerge, MergeKeyValuesOp_t eOp)
{
	CTemporaryKeyValues* pTempKV; // 4265
	HTemporaryKeyValueAllocationScope hPrevScope; // 4268
	KeyValues* pCopy; // 4270
	CTemporaryKeyValues::CTemporaryKeyValues(); // 4265
} /* size: 152, variables: 3, inline expansions: 1 (0 bytes) */

// <00205B61> tier0/keyvalues.cpp:4285
// variable: 1
const char* ParseStringToken(const char* szStringVal, const char ** ppEndOfParse)
{
	const char* pszResult; // 4291
} /* size: 0, variables: 1 */

// <002056BC> tier0/keyvalues.cpp:4304
// variables: 8
// function calls: 9
void FromString(const char* szName, const char* szStringVal, const char ** ppEndOfParse)
{

do_sub_key: // 4373
	KeyValues* kv; // 4312
	char chName; // 4316
	char chValue; // 4317
	{
		const char* szEnd; // 4321
		const char* szVarValue; // 4323
		const char* szVarName; // 4324
		{
			const char* szInt; // 4359
			StringAfterPrefix<char const>(const char* str,
							const char* prefix);  // 4359
		}
		{
			KeyValues* pSubKey; // 4375
		}
		V_isspace(int c); // 4288
		V_isspace(int c); // 4293
		ParseStringToken(const char* szStringVal,
				const char ** ppEndOfParse);  // 4324
		V_strncpy<int>(char* pDest,
				const char* pSrc,
				int maxLenInChars);  // 4332
		V_isspace(int c); // 4288
		V_isspace(int c); // 4293
		ParseStringToken(const char* szStringVal,
				const char ** ppEndOfParse);  // 4342
		V_strncpy<int>(char* pDest,
				const char* pSrc,
				int maxLenInChars);  // 4349
	}
} /* size: 809, variables: 3, goto labels: 1 */

// <0022815F> tier0/keyvalues.cpp:4396
// function calls: 4
void CKeyValues_Data::Internal_IsEqual(CKeyValues_Data* pRHS)
{
	Color::operator==(
			const Color& rhs);  // 4418
	V_strcmp(const char* s1,
		const char* s2);  // 4404
	V_wcscmp(const wchar_t* s1,
		const wchar_t* s2);  // 4406
	CKeyValues_Data::Internal_IsEqual(
			CKeyValues_Data* pRHS);  // 4396
} /* size: 349, inline expansions: 4 (318 bytes) */

// <00205678> tier0/keyvalues.cpp:4396
// variables: 2
void CKeyValues_Data::Internal_IsEqual(CKeyValues_Data* pRHS)
{
	const char   __FUNCTION__; // 53904
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4420
	}
} /* size: 0, variables: 1 */

// <00205510> tier0/keyvalues.cpp:4426
// variables: 3
// function call: 1
void KeyValues::IsEqual(KeyValues* pRHS)
{
	{
		KeyValues* pkv; // 4438
		KeyValues* pkvRHS; // 4439
		bool bRet; // 4440
	}
	CKeyValues_Data::Internal_GetDataType(); // 4435
} /* size: 173, inline expansions: 1 (0 bytes) */

// <0020537E> tier0/keyvalues.cpp:4471
// variables: 2
void KeyValues::Dump(IKeyValuesDumpContext* pDump, int nIndentLevel)
{
	{
		KeyValues* val; // 4477
	}
	{
		KeyValues* sub; // 4484
	}
} /* size: 201 */

// <0020523C> tier0/keyvalues.cpp:4500
// variables: 4
void KeyValues::AddKey(const char* keyName)
{
	KeyValues* lastItem; // 4502
	KeyValues* dat; // 4503
	const char   __FUNCTION__; // 53639
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4512
	}
} /* size: 157, variables: 3 */

// <0020518E> tier0/keyvalues.cpp:4535
// variable: 1
void KeyValues::AddString(const char* keyName, const char* value)
{
	KeyValues* dat; // 4537
} /* size: 37, variables: 1 */

// <002050DE> tier0/keyvalues.cpp:4541
// variable: 1
void KeyValues::AddFloat(const char* keyName, float value)
{
	KeyValues* dat; // 4543
} /* size: 54, variables: 1 */

// <00205030> tier0/keyvalues.cpp:4550
// variable: 1
void KeyValues::AddInt(const char* keyName, int value)
{
	KeyValues* dat; // 4552
} /* size: 54, variables: 1 */

// <00204F82> tier0/keyvalues.cpp:4559
// variable: 1
void KeyValues::AddUint64(const char* keyName, uint64 value)
{
	KeyValues* dat; // 4561
} /* size: 54, variables: 1 */

// <00204ED4> tier0/keyvalues.cpp:4569
// variable: 1
void KeyValues::AddPtr(const char* keyName, void* value)
{
	KeyValues* dat; // 4571
} /* size: 54, variables: 1 */

// <00204DD5> tier0/keyvalues.cpp:4582
void IKeyValuesDumpContextAsText::KvBeginKey(KeyValues* pKey, int nIndentLevel)
{
} /* size: 155 */

// <0020487D> tier0/keyvalues.cpp:4599
// variables: 15
// function call: 1
void IKeyValuesDumpContextAsText::KvWriteValue(KeyValues* val, int nIndentLevel)
{
	{
		int n; // 4628
		char* chBuffer; // 4629
	}
	{
		float fl; // 4638
		char* chBuffer; // 4639
	}
	{
		void* ptr; // 4648
		char* chBuffer; // 4649
	}
	{
		const wchar_t* wsz; // 4658
		int nLen; // 4659
		int numBytes; // 4660
		char* chBuffer; // 4661
		bool bSuccess; // 4663
		V_wcslen(const wchar_t* pwch); // 4659
	}
	{
		uint64 n; // 4672
		char* chBuffer; // 4673
	}
	{
		int n; // 4683
		char* chBuffer; // 4684
	}
} /* size: 876 */

// <002047E3> tier0/keyvalues.cpp:4695
void IKeyValuesDumpContextAsText::KvEndKey(KeyValues* pKey, int nIndentLevel)
{
} /* size: 86 */

// <002046A1> tier0/keyvalues.cpp:4709
// variables: 2
// function calls: 2
void IKeyValuesDumpContextAsText::KvWriteIndent(int nIndentLevel)
{
	int numIndentBytes; // 4711
	char* pchIndent; // 4712
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 4713
} /* size: 213, variables: 2, inline expansions: 2 (47 bytes) */

// <002044FB> tier0/keyvalues.cpp:4719
// variable: 1
// function calls: 2
void CKeyValuesDumpContextAsDevMsg::KvBeginKey(KeyValues* pKey, int nIndentLevel)
{
	ConVarRef r_developer; // 4721
	ConVarRef::CheckAccess(); // 129
	ConVarRef::GetInt(); // 4722
} /* size: 195, variables: 1, inline expansions: 2 (16 bytes) */

// <00204470> tier0/keyvalues.cpp:4729
void CKeyValuesDumpContextAsDevMsg::KvWriteText(const char* szText)
{
} /* size: 69 */

// <002043BA> tier0/keyvalues.cpp:4742
// function call: 1
void CKeyValuesDumpContextToBufferString::KvWriteText(const char* szText)
{
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 4744
} /* size: 43, inline expansions: 1 (21 bytes) */

// <0020435B> tier0/keyvalues.cpp:4748
void CKeyValuesDumpContextToLoggingChannel::KvWriteText(const char* szText)
{
} /* size: 29 */

// <00204127> tier0/keyvalues.cpp:4825
// variables: 4
// function call: 1
void LoadTemporaryFromFile(bool bUseEscapeSequences, IBaseFileSystem* pFileSystem, const char* pFileName, const char* pPathID, GetSymbolProc_t pfnEvaluateSymbolProc, void* pEvaluateSymbolContext, const char* pEmptyKeyReplacement)
{
	CTemporaryKeyValues* pTempKV; // 4827
	HTemporaryKeyValueAllocationScope hPrevScope; // 4830
	KeyValues* pRoot; // 4833
	bool bOk; // 4835
	CTemporaryKeyValues::CTemporaryKeyValues(); // 4827
} /* size: 235, variables: 4, inline expansions: 1 (0 bytes) */

// <00203F77> tier0/keyvalues.cpp:4845
// variables: 4
// function call: 1
void ReadTemporaryAsBinary(bool bUseEscapeSequences, CUtlBuffer& buffer)
{
	CTemporaryKeyValues* pTempKV; // 4847
	HTemporaryKeyValueAllocationScope hPrevScope; // 4850
	KeyValues* pRoot; // 4853
	bool bOk; // 4855
	CTemporaryKeyValues::CTemporaryKeyValues(); // 4847
} /* size: 193, variables: 4, inline expansions: 1 (0 bytes) */

// <00203D2C> tier0/keyvalues.cpp:4865
// variables: 4
// function call: 1
void LoadTemporaryFromBuffer(bool bUseEscapeSequences, const char* pResourceName, CUtlBuffer& buf, IBaseFileSystem* pFileSystem, const char* pPathID, GetSymbolProc_t pfnEvaluateSymbolProc, void* pEvaluateSymbolContext, const char* pEmptyKeyReplacement)
{
	CTemporaryKeyValues* pTempKV; // 4867
	HTemporaryKeyValueAllocationScope hPrevScope; // 4870
	KeyValues* pRoot; // 4873
	bool bOk; // 4875
	CTemporaryKeyValues::CTemporaryKeyValues(); // 4867
} /* size: 242, variables: 4, inline expansions: 1 (0 bytes) */

// <00203ACA> tier0/keyvalues.cpp:4885
// variables: 4
// function call: 1
void LoadTemporaryFromBuffer(bool bUseEscapeSequences, const char* resourceName, const char* pBuffer, IBaseFileSystem* pFileSystem, const char* pPathID, GetSymbolProc_t pfnEvaluateSymbolProc, IKeyValuesErrorSpew* pErrorSpew, void* pEvaluateSymbolContext, const char* pEmptyKeyReplacement)
{
	CTemporaryKeyValues* pTempKV; // 4887
	HTemporaryKeyValueAllocationScope hPrevScope; // 4890
	KeyValues* pRoot; // 4893
	bool bOk; // 4895
	CTemporaryKeyValues::CTemporaryKeyValues(); // 4887
} /* size: 243, variables: 4, inline expansions: 1 (0 bytes) */

// <00203A02> tier0/keyvalues.cpp:4907
// variable: 1
// function call: 1
bool GetGameInfoBool(const char* keyName, bool defaultValue)
{
	KeyValues* pGameInfo; // 4914
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 4920
} /* size: 79, variables: 1, inline expansions: 1 (19 bytes) */

// <00203979> tier0/keyvalues.cpp:4923
// variable: 1
int GetGameInfoInt(const char* keyName, int defaultValue)
{
	KeyValues* pGameInfo; // 4930
} /* size: 71, variables: 1 */

// <002038F0> tier0/keyvalues.cpp:4939
// variable: 1
uint64 GetGameInfoUint64(const char* keyName, uint64 defaultValue)
{
	KeyValues* pGameInfo; // 4946
} /* size: 72, variables: 1 */

// <00203865> tier0/keyvalues.cpp:4955
// variable: 1
float GetGameInfoFloat(const char* keyName, float defaultValue)
{
	KeyValues* pGameInfo; // 4962
} /* size: 86, variables: 1 */

// <002037A4> tier0/keyvalues.cpp:4971
// variable: 1
const char* GetGameInfoString(const char* keyName, const char* defaultValue, char* pScratchSpace, size_t nScratchSpaceCount)
{
	KeyValues* pGameInfo; // 4978
} /* size: 100, variables: 1 */

// <00203732> tier0/keyvalues.cpp:4987
// variable: 1
KeyValues* GetGameInfoKey(const char* keyName)
{
	KeyValues* pGameInfo; // 4994
} /* size: 72, variables: 1 */


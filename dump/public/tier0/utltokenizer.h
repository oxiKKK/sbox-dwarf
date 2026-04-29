
//
// public/tier0/utltokenizer.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 24
//	classes: 3
//	struct: 1
//

// <055B5969> ../public/tier0/utltokenizer.h:58
// member functions: 58
// member variables: 5
// class size: 40
class CUtlTokenReference {
	/* ../public/tier0/utltokenizer.h:64 */
	void CUtlTokenReference(CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:65 */
	void CUtlTokenReference(CUtlTokenReference* , const CUtlTokenReference& );
	/* ../public/tier0/utltokenizer.h:66 */
	void MakeInvalid(CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:67 */
	void Init(CUtlTokenReference* , const char* , const char* , const char* , int);
	/* ../public/tier0/utltokenizer.h:68 */
	void ~CUtlTokenReference(CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:76 */
	bool IsValid(const CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:79 */
	const char* AsString(const CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:81 */
	CUtlStringToken MakeStringToken(const CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:84 */
	void AsString(const CUtlTokenReference* , CBufferString* );
	/* ../public/tier0/utltokenizer.h:87 */
	void AsUnescapedString(const CUtlTokenReference* , CBufferString* );
	/* ../public/tier0/utltokenizer.h:90 */
	void AsUnquotedString(const CUtlTokenReference* , CBufferString* );
	/* ../public/tier0/utltokenizer.h:93 */
	char GetFirstChar(const CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:96 */
	const char* GetPreamblePtr(const CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:99 */
	const char* GetStartPtr(const CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:102 */
	const char* GetLastPtr(const CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:105 */
	const char* GetEndPtr(const CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:107 */
	int GetTokenSize(const CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:110 */
	void GetPreamble(const CUtlTokenReference* , CBufferString* );
	/* ../public/tier0/utltokenizer.h:120 */
	bool IsIdentifier(const CUtlTokenReference* , bool, bool);
	/* ../public/tier0/utltokenizer.h:123 */
	bool IsNumber(const CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:126 */
	bool IsInteger(const CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:129 */
	bool IsFloat(const CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:132 */
	bool IsSpecialFloat(const CUtlTokenReference* , double* );
	/* ../public/tier0/utltokenizer.h:135 */
	bool IsBool(const CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:137 */
	bool IsWhitespace(const CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:140 */
	bool IsStringLiteral(const CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:143 */
	bool IsMultiLineStringLiteral(const CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:146 */
	bool IsEqual(const CUtlTokenReference* , const char* , bool);
	/* ../public/tier0/utltokenizer.h:154 */
	bool MakeSafeIdentifier(CBufferString* );
private:
	char * m_pLocalStrCopy; /* 0 8 */
	const char * m_pPreambleStart; /* 8 8 */
	const char * m_pStart; /* 16 8 */
	const char * m_pEnd; /* 24 8 */
	int m_nTokenNumber; /* 32 4 */
	void CUtlTokenReference(class CUtlTokenReference *); /* linkage=_ZN18CUtlTokenReferenceC4Ev */
	void CUtlTokenReference(class CUtlTokenReference *, const class CUtlTokenReference  &); /* linkage=_ZN18CUtlTokenReferenceC4ERKS_ */
	/* <6e9ba5c> tier0_perproject/utltokenizer.cpp:49 */
	void MakeInvalid(class CUtlTokenReference *); /* linkage=_ZN18CUtlTokenReference11MakeInvalidEv */
	/* <6e9ba99> tier0_perproject/utltokenizer.cpp:67 */
	void Init(class CUtlTokenReference *, const char  *, const char  *, const char  *, int); /* linkage=_ZN18CUtlTokenReference4InitEPKcS1_S1_i */
	void ~CUtlTokenReference(class CUtlTokenReference *); /* linkage=_ZN18CUtlTokenReferenceD4Ev */
	/* <6e9bb0a> tier0_perproject/utltokenizer.cpp:276 */
	bool IsValid(const class CUtlTokenReference  *); /* linkage=_ZNK18CUtlTokenReference7IsValidEv */
	const char  * AsString(const class CUtlTokenReference  *); /* linkage=_ZNK18CUtlTokenReference8AsStringEv */
	class CUtlStringToken MakeStringToken(const class CUtlTokenReference  *); /* linkage=_ZNK18CUtlTokenReference15MakeStringTokenEv */
	void AsString(const class CUtlTokenReference  *, class CBufferString *); /* linkage=_ZNK18CUtlTokenReference8AsStringEP13CBufferString */
	void AsUnescapedString(const class CUtlTokenReference  *, class CBufferString *); /* linkage=_ZNK18CUtlTokenReference17AsUnescapedStringEP13CBufferString */
	void AsUnquotedString(const class CUtlTokenReference  *, class CBufferString *); /* linkage=_ZNK18CUtlTokenReference16AsUnquotedStringEP13CBufferString */
	char GetFirstChar(const class CUtlTokenReference  *); /* linkage=_ZNK18CUtlTokenReference12GetFirstCharEv */
	const char  * GetPreamblePtr(const class CUtlTokenReference  *); /* linkage=_ZNK18CUtlTokenReference14GetPreamblePtrEv */
	const char  * GetStartPtr(const class CUtlTokenReference  *); /* linkage=_ZNK18CUtlTokenReference11GetStartPtrEv */
	const char  * GetLastPtr(const class CUtlTokenReference  *); /* linkage=_ZNK18CUtlTokenReference10GetLastPtrEv */
	const char  * GetEndPtr(const class CUtlTokenReference  *); /* linkage=_ZNK18CUtlTokenReference9GetEndPtrEv */
	int GetTokenSize(const class CUtlTokenReference  *); /* linkage=_ZNK18CUtlTokenReference12GetTokenSizeEv */
	void GetPreamble(const class CUtlTokenReference  *, class CBufferString *); /* linkage=_ZNK18CUtlTokenReference11GetPreambleEP13CBufferString */
	/* <6e9bf99> tier0_perproject/utltokenizer.cpp:331 */
	bool IsIdentifier(const class CUtlTokenReference  *, bool, bool); /* linkage=_ZNK18CUtlTokenReference12IsIdentifierEbb */
	bool IsNumber(const class CUtlTokenReference  *); /* linkage=_ZNK18CUtlTokenReference8IsNumberEv */
	bool IsInteger(const class CUtlTokenReference  *); /* linkage=_ZNK18CUtlTokenReference9IsIntegerEv */
	bool IsFloat(const class CUtlTokenReference  *); /* linkage=_ZNK18CUtlTokenReference7IsFloatEv */
	bool IsSpecialFloat(const class CUtlTokenReference  *, double *); /* linkage=_ZNK18CUtlTokenReference14IsSpecialFloatEPd */
	/* <6e9be9a> tier0_perproject/utltokenizer.cpp:437 */
	bool IsBool(const class CUtlTokenReference  *); /* linkage=_ZNK18CUtlTokenReference6IsBoolEv */
	bool IsWhitespace(const class CUtlTokenReference  *); /* linkage=_ZNK18CUtlTokenReference12IsWhitespaceEv */
	bool IsStringLiteral(const class CUtlTokenReference  *); /* linkage=_ZNK18CUtlTokenReference15IsStringLiteralEv */
	bool IsMultiLineStringLiteral(const class CUtlTokenReference  *); /* linkage=_ZNK18CUtlTokenReference24IsMultiLineStringLiteralEv */
	/* <6e9be31> tier0_perproject/utltokenizer.cpp:529 */
	bool IsEqual(const class CUtlTokenReference  *, const char  *, bool); /* linkage=_ZNK18CUtlTokenReference7IsEqualEPKcb */
	bool MakeSafeIdentifier(class CBufferString *); /* linkage=_ZN18CUtlTokenReference18MakeSafeIdentifierEP13CBufferString */
};

// <0644C297> ../public/tier0/utltokenizer.h:64
void CUtlTokenReference::CUtlTokenReference()
{
} /* size: 0 */

// <0644C27B> ../public/tier0/utltokenizer.h:68
void CUtlTokenReference::~CUtlTokenReference()
{
} /* size: 0 */

// <06E9B2D7> ../public/tier0/utltokenizer.h:96
inline void CUtlTokenReference::GetPreamblePtr()
{
} /* size: 0 */

// <06E9B2BE> ../public/tier0/utltokenizer.h:99
inline void CUtlTokenReference::GetStartPtr()
{
} /* size: 0 */

// <06E9B2A5> ../public/tier0/utltokenizer.h:105
inline void CUtlTokenReference::GetEndPtr()
{
} /* size: 0 */

// <055E74DE> ../public/tier0/utltokenizer.h:107
inline void CUtlTokenReference::GetTokenSize()
{
} /* size: 0 */

// <0320D1CB> ../public/tier0/utltokenizer.h:123
inline void CUtlTokenReference::IsNumber()
{
} /* size: 0 */

// <06E92916> ../public/tier0/utltokenizer.h:171
void TokenWarning_t::TokenWarning_t()
{
} /* size: 0 */

// <06E928FA> ../public/tier0/utltokenizer.h:171
inline void TokenWarning_t::TokenWarning_t()
{
} /* size: 0 */

// <0644F4DF> ../public/tier0/utltokenizer.h:171
void TokenWarning_t::~TokenWarning_t()
{
} /* size: 0 */

// <0644F4C3> ../public/tier0/utltokenizer.h:171
inline void TokenWarning_t::~TokenWarning_t()
{
} /* size: 0 */

// <055B5DBF> ../public/tier0/utltokenizer.h:171
// member function: 1
// member variables: 2
// struct size: 16
struct TokenWarning_t {
	CUtlString m_WarningText; /* 0 8 */
	const char * m_pSrcPosition; /* 8 8 */
	void ~TokenWarning_t(TokenWarning_t* );
};

// <064675FC> ../public/tier0/utltokenizer.h:180
void CUtlTokenizer::~CUtlTokenizer()
{
} /* size: 0 */

// <064675E0> ../public/tier0/utltokenizer.h:180
inline void CUtlTokenizer::~CUtlTokenizer()
{
} /* size: 0 */

// <056E7322> ../public/tier0/utltokenizer.h:180
// variables: 2
// function calls: 36
void CUtlTokenizer::~CUtlTokenizer()
{
	{
		int i; // 1721
		CUtlMemory<TokenWarning_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 171
		TokenWarning_t::~TokenWarning_t(); // 1526
		Destruct<TokenWarning_t>(TokenWarning_t* pMemory); // 1723
	}
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::RemoveAll(); // 1798
	CUtlMemory<TokenWarning_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<TokenWarning_t, int>::Purge(); // 903
	CUtlMemory<TokenWarning_t, int>::Purge(); // 1799
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::Purge(); // 560
	ValidateAlignment<TokenWarning_t>(void); // 508
	CUtlMemory<TokenWarning_t, int>::Purge(); // 510
	CUtlMemory<TokenWarning_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::~CUtlVector(); // 180
	CUtlString::~CUtlString(); // 180
	{
		int i; // 1721
		CUtlMemory<CUtlTokenReference, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Element(
			int i);  // 1723
		Destruct<CUtlTokenReference>(CUtlTokenReference* pMemory); // 1723
	}
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlTokenReference, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CUtlTokenReference, int>::ConvertToExternalMemory(
				CUtlTokenReference* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CUtlTokenReference, int>::Purge_FixedGrowable(
				CUtlTokenReference* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CUtlTokenReference, int>::Purge_FixedGrowable(
				CUtlTokenReference* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Purge(); // 560
	ValidateAlignment<CUtlTokenReference>(void); // 508
	CUtlMemory<CUtlTokenReference, int>::Purge(); // 903
	CUtlMemory<CUtlTokenReference, int>::Purge(); // 510
	CUtlMemory<CUtlTokenReference, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CUtlTokenReference, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CUtlTokenReference, 8>::~CUtlVectorFixedGrowable(); // 180
} /* size: 378, inline expansions: 28 (1425 bytes) */

// <055B5E07> ../public/tier0/utltokenizer.h:180
// member functions: 100
// member variables: 16
// class size: 744
class CUtlTokenizer {
	/* ../public/tier0/utltokenizer.h:332 */
	enum ReadBlockResult_t {
		RBRESULT_NO_BLOCK = 0,
		RBRESULT_SUCCESS = 1,
		RBRESULT_MISMATCHED = 2,
	};
	/* ../public/tier0/utltokenizer.h:186 */
	void CUtlTokenizer(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:189 */
	void CUtlTokenizer(CUtlTokenizer* , const char* , const char* );
	/* ../public/tier0/utltokenizer.h:190 */
	void Init(CUtlTokenizer* , const char* , const char* );
	/* ../public/tier0/utltokenizer.h:193 */
	void CUtlTokenizer(CUtlTokenizer* , const char* , int, const char* );
	/* ../public/tier0/utltokenizer.h:194 */
	void Init(CUtlTokenizer* , const char* , int, const char* );
	/* ../public/tier0/utltokenizer.h:205 */
	void SetTokenDelimiters(CUtlTokenizer* , const char* );
	/* ../public/tier0/utltokenizer.h:208 */
	void SetParseStringsAsAtomicTokens(CUtlTokenizer* , bool);
	/* ../public/tier0/utltokenizer.h:211 */
	void SetSkipComments(CUtlTokenizer* , bool);
	/* ../public/tier0/utltokenizer.h:212 */
	bool GetSkipComments(const CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:215 */
	void SetSkipWhitespace(CUtlTokenizer* , bool);
	/* ../public/tier0/utltokenizer.h:216 */
	bool GetSkipWhitespace(const CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:219 */
	void SetWhitespaceIsDelimiter(CUtlTokenizer* , bool);
	/* ../public/tier0/utltokenizer.h:223 */
	void SetAllowBackslashStringEscapes(CUtlTokenizer* , bool);
	/* ../public/tier0/utltokenizer.h:231 */
	bool ConsumeIdentifier(CUtlTokenizer* , CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:234 */
	bool ConsumeAtomicToken(CUtlTokenizer* , const char* , bool);
	/* ../public/tier0/utltokenizer.h:238 */
	bool ConsumeArbitraryToken(CUtlTokenizer* , CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:239 */
	bool ConsumeNextToken(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:243 */
	bool ConsumeUntilAtomic(CUtlTokenizer* , const char* , bool, CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:247 */
	bool ConsumeArbitraryBytes(CUtlTokenizer* , int);
	/* ../public/tier0/utltokenizer.h:255 */
	bool PeekIdentifier(CUtlTokenizer* , int);
	/* ../public/tier0/utltokenizer.h:258 */
	bool PeekAtomicToken(CUtlTokenizer* , int, const char* , bool);
	/* ../public/tier0/utltokenizer.h:261 */
	bool PeekToken(CUtlTokenizer* , int, CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:271 */
	const char* GetCurrentPreamblePtr(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:276 */
	const char* GetCurrentReadPtr(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:280 */
	int GetCurrentLineNumber(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:284 */
	uint32 GetCurrentSourceOffset(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:292 */
	bool AnyTokensRemaining(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:295 */
	void Rewind(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:298 */
	int GetLineNumberForToken(const CUtlTokenizer* , const CUtlTokenReference& );
	/* ../public/tier0/utltokenizer.h:301 */
	int GetLineNumberForSourcePosition(const CUtlTokenizer* , const char* );
	/* ../public/tier0/utltokenizer.h:304 */
	const char* GetFilename(const CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:307 */
	bool GetLastConsumedToken(const CUtlTokenizer* , CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:311 */
	void GetCurrentPreamble(CUtlTokenizer* , CBufferString* );
	/* ../public/tier0/utltokenizer.h:314 */
	uint32 GetSourceOffsetForToken(const CUtlTokenizer* , const CUtlTokenReference& );
	/* ../public/tier0/utltokenizer.h:317 */
	const char* GetSourceStartPtr(const CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:320 */
	const char* GetSourceEndPtr(const CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:326 */
	bool HasWarnings(const CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:327 */
	int GetWarningCount(const CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:328 */
	const TokenWarning_t& GetWarning(const CUtlTokenizer* , int);
	/* ../public/tier0/utltokenizer.h:330 */
	bool IsDelimiterOrWhitespace(const CUtlTokenizer* , const CUtlTokenReference& );
	/* ../public/tier0/utltokenizer.h:342 */
	ReadBlockResult_t ReadBalancedBlockAsSingleToken(CUtlTokenizer* , const char* , const char* , CUtlTokenReference* );
private:
	/* ../public/tier0/utltokenizer.h:345 */
	void Clear(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:346 */
	bool ReadUpThroughToken(CUtlTokenizer* , int);
	/* ../public/tier0/utltokenizer.h:347 */
	bool ReadToken(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:348 */
	bool ReadTokenChars(CUtlTokenizer* , const char** , const char** , const char** );
	/* ../public/tier0/utltokenizer.h:349 */
	void ResetLookahead(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:351 */
	bool ConsumeMultilineStringDelimiter(CUtlTokenizer* , const char* , const char* );
	/* ../public/tier0/utltokenizer.h:352 */
	bool ConsumeCPPComment(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:353 */
	bool ConsumeCComment(CUtlTokenizer* );
	characterset_t m_TokenDelimiters; /* 0 256 */
	const char * m_pSrcStart; /* 256 8 */
	const char * m_pSrcReadCursor; /* 264 8 */
	const char * m_pSrcEnd; /* 272 8 */
	CUtlVectorFixedGrowable<CUtlTokenReference, 8> m_LookaheadTokens __attribute__((__aligned__(8))); /* 280 352 */
	CUtlTokenReference m_LastConsumedToken; /* 632 40 */
	CUtlString m_Filename; /* 672 8 */
	CUtlVector<TokenWarning_t, CUtlMemory<TokenWarning_t, int> > m_Warnings; /* 680 32 */
	bool m_bParseStringsAsAtomicTokens; /* 712 1 */
	bool m_bSkipComments; /* 713 1 */
	bool m_bSkipWhitespace; /* 714 1 */
	bool m_bWhiteSpaceIsDelimiter; /* 715 1 */
	bool m_bAllowBackslashStringEscapes; /* 716 1 */
	int m_nNextTokenIndex; /* 720 4 */
	const char * m_pLastLineNumberInput; /* 728 8 */
	int m_nLastLineNumberOutput; /* 736 4 */
	void ~CUtlTokenizer(CUtlTokenizer* );
	void CUtlTokenizer(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizerC4Ev */
	void CUtlTokenizer(class CUtlTokenizer *, const char  *, const char  *); /* linkage=_ZN13CUtlTokenizerC4EPKcS1_ */
	/* <6e9c1da> tier0_perproject/utltokenizer.cpp:714 */
	void Init(class CUtlTokenizer *, const char  *, const char  *); /* linkage=_ZN13CUtlTokenizer4InitEPKcS1_ */
	void CUtlTokenizer(class CUtlTokenizer *, const char  *, int, const char  *); /* linkage=_ZN13CUtlTokenizerC4EPKciS1_ */
	/* <6e9c368> tier0_perproject/utltokenizer.cpp:721 */
	void Init(class CUtlTokenizer *, const char  *, int, const char  *); /* linkage=_ZN13CUtlTokenizer4InitEPKciS1_ */
	void SetTokenDelimiters(class CUtlTokenizer *, const char  *); /* linkage=_ZN13CUtlTokenizer18SetTokenDelimitersEPKc */
	void SetParseStringsAsAtomicTokens(class CUtlTokenizer *, bool); /* linkage=_ZN13CUtlTokenizer29SetParseStringsAsAtomicTokensEb */
	void SetSkipComments(class CUtlTokenizer *, bool); /* linkage=_ZN13CUtlTokenizer15SetSkipCommentsEb */
	bool GetSkipComments(const class CUtlTokenizer  *); /* linkage=_ZNK13CUtlTokenizer15GetSkipCommentsEv */
	void SetSkipWhitespace(class CUtlTokenizer *, bool); /* linkage=_ZN13CUtlTokenizer17SetSkipWhitespaceEb */
	bool GetSkipWhitespace(const class CUtlTokenizer  *); /* linkage=_ZNK13CUtlTokenizer17GetSkipWhitespaceEv */
	void SetWhitespaceIsDelimiter(class CUtlTokenizer *, bool); /* linkage=_ZN13CUtlTokenizer24SetWhitespaceIsDelimiterEb */
	void SetAllowBackslashStringEscapes(class CUtlTokenizer *, bool); /* linkage=_ZN13CUtlTokenizer30SetAllowBackslashStringEscapesEb */
	bool ConsumeIdentifier(class CUtlTokenizer *, class CUtlTokenReference *); /* linkage=_ZN13CUtlTokenizer17ConsumeIdentifierEP18CUtlTokenReference */
	/* <6e9cab9> tier0_perproject/utltokenizer.cpp:886 */
	bool ConsumeAtomicToken(class CUtlTokenizer *, const char  *, bool); /* linkage=_ZN13CUtlTokenizer18ConsumeAtomicTokenEPKcb */
	/* <6e9c75c> tier0_perproject/utltokenizer.cpp:868 */
	bool ConsumeArbitraryToken(class CUtlTokenizer *, class CUtlTokenReference *); /* linkage=_ZN13CUtlTokenizer21ConsumeArbitraryTokenEP18CUtlTokenReference */
	bool ConsumeNextToken(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer16ConsumeNextTokenEv */
	bool ConsumeUntilAtomic(class CUtlTokenizer *, const char  *, bool, class CUtlTokenReference *); /* linkage=_ZN13CUtlTokenizer18ConsumeUntilAtomicEPKcbP18CUtlTokenReference */
	bool ConsumeArbitraryBytes(class CUtlTokenizer *, int); /* linkage=_ZN13CUtlTokenizer21ConsumeArbitraryBytesEi */
	/* <6e9c475> tier0_perproject/utltokenizer.cpp:812 */
	bool PeekIdentifier(class CUtlTokenizer *, int); /* linkage=_ZN13CUtlTokenizer14PeekIdentifierEi */
	/* <6e9c5dc> tier0_perproject/utltokenizer.cpp:823 */
	bool PeekAtomicToken(class CUtlTokenizer *, int, const char  *, bool); /* linkage=_ZN13CUtlTokenizer15PeekAtomicTokenEiPKcb */
	bool PeekToken(class CUtlTokenizer *, int, class CUtlTokenReference *); /* linkage=_ZN13CUtlTokenizer9PeekTokenEiP18CUtlTokenReference */
	/* <6e9d029> tier0_perproject/utltokenizer.cpp:1333 */
	const char  * GetCurrentPreamblePtr(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer21GetCurrentPreamblePtrEv */
	/* <6e9d180> tier0_perproject/utltokenizer.cpp:1349 */
	const char  * GetCurrentReadPtr(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer17GetCurrentReadPtrEv */
	int GetCurrentLineNumber(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer20GetCurrentLineNumberEv */
	uint32 GetCurrentSourceOffset(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer22GetCurrentSourceOffsetEv */
	/* <6e9cecd> tier0_perproject/utltokenizer.cpp:1273 */
	bool AnyTokensRemaining(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer18AnyTokensRemainingEv */
	void Rewind(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer6RewindEv */
	int GetLineNumberForToken(const class CUtlTokenizer  *, const class CUtlTokenReference  &); /* linkage=_ZNK13CUtlTokenizer21GetLineNumberForTokenERK18CUtlTokenReference */
	/* <6e9cf17> tier0_perproject/utltokenizer.cpp:1293 */
	int GetLineNumberForSourcePosition(const class CUtlTokenizer  *, const char  *); /* linkage=_ZNK13CUtlTokenizer30GetLineNumberForSourcePositionEPKc */
	const char  * GetFilename(const class CUtlTokenizer  *); /* linkage=_ZNK13CUtlTokenizer11GetFilenameEv */
	bool GetLastConsumedToken(const class CUtlTokenizer  *, class CUtlTokenReference *); /* linkage=_ZNK13CUtlTokenizer20GetLastConsumedTokenEP18CUtlTokenReference */
	void GetCurrentPreamble(class CUtlTokenizer *, class CBufferString *); /* linkage=_ZN13CUtlTokenizer18GetCurrentPreambleEP13CBufferString */
	/* <6e9d265> tier0_perproject/utltokenizer.cpp:1395 */
	uint32 GetSourceOffsetForToken(const class CUtlTokenizer  *, const class CUtlTokenReference  &); /* linkage=_ZNK13CUtlTokenizer23GetSourceOffsetForTokenERK18CUtlTokenReference */
	const char  * GetSourceStartPtr(const class CUtlTokenizer  *); /* linkage=_ZNK13CUtlTokenizer17GetSourceStartPtrEv */
	const char  * GetSourceEndPtr(const class CUtlTokenizer  *); /* linkage=_ZNK13CUtlTokenizer15GetSourceEndPtrEv */
	bool HasWarnings(const class CUtlTokenizer  *); /* linkage=_ZNK13CUtlTokenizer11HasWarningsEv */
	int GetWarningCount(const class CUtlTokenizer  *); /* linkage=_ZNK13CUtlTokenizer15GetWarningCountEv */
	const class TokenWarning_t  & GetWarning(const class CUtlTokenizer  *, int); /* linkage=_ZNK13CUtlTokenizer10GetWarningEi */
	bool IsDelimiterOrWhitespace(const class CUtlTokenizer  *, const class CUtlTokenReference  &); /* linkage=_ZNK13CUtlTokenizer23IsDelimiterOrWhitespaceERK18CUtlTokenReference */
	enum ReadBlockResult_t ReadBalancedBlockAsSingleToken(class CUtlTokenizer *, const char  *, const char  *, class CUtlTokenReference *); /* linkage=_ZN13CUtlTokenizer30ReadBalancedBlockAsSingleTokenEPKcS1_P18CUtlTokenReference */
	/* <6e9c189> tier0_perproject/utltokenizer.cpp:693 */
	void Clear(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer5ClearEv */
	bool ReadUpThroughToken(class CUtlTokenizer *, int); /* linkage=_ZN13CUtlTokenizer18ReadUpThroughTokenEi */
	bool ReadToken(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer9ReadTokenEv */
	bool ReadTokenChars(class CUtlTokenizer *, const char  * *, const char  * *, const char  * *); /* linkage=_ZN13CUtlTokenizer14ReadTokenCharsEPPKcS2_S2_ */
	void ResetLookahead(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer14ResetLookaheadEv */
	bool ConsumeMultilineStringDelimiter(class CUtlTokenizer *, const char  *, const char  *); /* linkage=_ZN13CUtlTokenizer31ConsumeMultilineStringDelimiterEPKcS1_ */
	bool ConsumeCPPComment(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer17ConsumeCPPCommentEv */
	bool ConsumeCComment(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer15ConsumeCCommentEv */
	void ~CUtlTokenizer(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizerD4Ev */
} __attribute__((__aligned__(8)));

// <06E8EA0F> ../public/tier0/utltokenizer.h:180
// member functions: 99
// member variables: 16
// class size: 744
class CUtlTokenizer {
	/* ../public/tier0/utltokenizer.h:332 */
	enum ReadBlockResult_t {
		RBRESULT_NO_BLOCK = 0,
		RBRESULT_SUCCESS = 1,
		RBRESULT_MISMATCHED = 2,
	};
	/* ../public/tier0/utltokenizer.h:186 */
	void CUtlTokenizer(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:189 */
	void CUtlTokenizer(CUtlTokenizer* , const char* , const char* );
	/* ../public/tier0/utltokenizer.h:190 */
	void Init(CUtlTokenizer* , const char* , const char* );
	/* ../public/tier0/utltokenizer.h:193 */
	void CUtlTokenizer(CUtlTokenizer* , const char* , int, const char* );
	/* ../public/tier0/utltokenizer.h:194 */
	void Init(CUtlTokenizer* , const char* , int, const char* );
	/* ../public/tier0/utltokenizer.h:205 */
	void SetTokenDelimiters(CUtlTokenizer* , const char* );
	/* ../public/tier0/utltokenizer.h:208 */
	void SetParseStringsAsAtomicTokens(CUtlTokenizer* , bool);
	/* ../public/tier0/utltokenizer.h:211 */
	void SetSkipComments(CUtlTokenizer* , bool);
	/* ../public/tier0/utltokenizer.h:212 */
	bool GetSkipComments(const CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:215 */
	void SetSkipWhitespace(CUtlTokenizer* , bool);
	/* ../public/tier0/utltokenizer.h:216 */
	bool GetSkipWhitespace(const CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:219 */
	void SetWhitespaceIsDelimiter(CUtlTokenizer* , bool);
	/* ../public/tier0/utltokenizer.h:223 */
	void SetAllowBackslashStringEscapes(CUtlTokenizer* , bool);
	/* ../public/tier0/utltokenizer.h:231 */
	bool ConsumeIdentifier(CUtlTokenizer* , CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:234 */
	bool ConsumeAtomicToken(CUtlTokenizer* , const char* , bool);
	/* ../public/tier0/utltokenizer.h:238 */
	bool ConsumeArbitraryToken(CUtlTokenizer* , CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:239 */
	bool ConsumeNextToken(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:243 */
	bool ConsumeUntilAtomic(CUtlTokenizer* , const char* , bool, CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:247 */
	bool ConsumeArbitraryBytes(CUtlTokenizer* , int);
	/* ../public/tier0/utltokenizer.h:255 */
	bool PeekIdentifier(CUtlTokenizer* , int);
	/* ../public/tier0/utltokenizer.h:258 */
	bool PeekAtomicToken(CUtlTokenizer* , int, const char* , bool);
	/* ../public/tier0/utltokenizer.h:261 */
	bool PeekToken(CUtlTokenizer* , int, CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:271 */
	const char* GetCurrentPreamblePtr(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:276 */
	const char* GetCurrentReadPtr(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:280 */
	int GetCurrentLineNumber(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:284 */
	uint32 GetCurrentSourceOffset(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:292 */
	bool AnyTokensRemaining(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:295 */
	void Rewind(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:298 */
	int GetLineNumberForToken(const CUtlTokenizer* , const CUtlTokenReference& );
	/* ../public/tier0/utltokenizer.h:301 */
	int GetLineNumberForSourcePosition(const CUtlTokenizer* , const char* );
	/* ../public/tier0/utltokenizer.h:304 */
	const char* GetFilename(const CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:307 */
	bool GetLastConsumedToken(const CUtlTokenizer* , CUtlTokenReference* );
	/* ../public/tier0/utltokenizer.h:311 */
	void GetCurrentPreamble(CUtlTokenizer* , CBufferString* );
	/* ../public/tier0/utltokenizer.h:314 */
	uint32 GetSourceOffsetForToken(const CUtlTokenizer* , const CUtlTokenReference& );
	/* ../public/tier0/utltokenizer.h:317 */
	const char* GetSourceStartPtr(const CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:320 */
	const char* GetSourceEndPtr(const CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:326 */
	bool HasWarnings(const CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:327 */
	int GetWarningCount(const CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:328 */
	const TokenWarning_t& GetWarning(const CUtlTokenizer* , int);
	/* ../public/tier0/utltokenizer.h:330 */
	bool IsDelimiterOrWhitespace(const CUtlTokenizer* , const CUtlTokenReference& );
	/* ../public/tier0/utltokenizer.h:342 */
	ReadBlockResult_t ReadBalancedBlockAsSingleToken(CUtlTokenizer* , const char* , const char* , CUtlTokenReference* );
private:
	/* ../public/tier0/utltokenizer.h:345 */
	void Clear(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:346 */
	bool ReadUpThroughToken(CUtlTokenizer* , int);
	/* ../public/tier0/utltokenizer.h:347 */
	bool ReadToken(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:348 */
	bool ReadTokenChars(CUtlTokenizer* , const char** , const char** , const char** );
	/* ../public/tier0/utltokenizer.h:349 */
	void ResetLookahead(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:351 */
	bool ConsumeMultilineStringDelimiter(CUtlTokenizer* , const char* , const char* );
	/* ../public/tier0/utltokenizer.h:352 */
	bool ConsumeCPPComment(CUtlTokenizer* );
	/* ../public/tier0/utltokenizer.h:353 */
	bool ConsumeCComment(CUtlTokenizer* );
	characterset_t m_TokenDelimiters; /* 0 256 */
	const char * m_pSrcStart; /* 256 8 */
	const char * m_pSrcReadCursor; /* 264 8 */
	const char * m_pSrcEnd; /* 272 8 */
	CUtlVectorFixedGrowable<CUtlTokenReference, 8> m_LookaheadTokens __attribute__((__aligned__(8))); /* 280 352 */
	CUtlTokenReference m_LastConsumedToken; /* 632 40 */
	CUtlString m_Filename; /* 672 8 */
	CUtlVector<TokenWarning_t, CUtlMemory<TokenWarning_t, int> > m_Warnings; /* 680 32 */
	bool m_bParseStringsAsAtomicTokens; /* 712 1 */
	bool m_bSkipComments; /* 713 1 */
	bool m_bSkipWhitespace; /* 714 1 */
	bool m_bWhiteSpaceIsDelimiter; /* 715 1 */
	bool m_bAllowBackslashStringEscapes; /* 716 1 */
	int m_nNextTokenIndex; /* 720 4 */
	const char * m_pLastLineNumberInput; /* 728 8 */
	int m_nLastLineNumberOutput; /* 736 4 */
	void CUtlTokenizer(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizerC4Ev */
	void CUtlTokenizer(class CUtlTokenizer *, const char  *, const char  *); /* linkage=_ZN13CUtlTokenizerC4EPKcS1_ */
	/* <6e9c1da> tier0_perproject/utltokenizer.cpp:714 */
	void Init(class CUtlTokenizer *, const char  *, const char  *); /* linkage=_ZN13CUtlTokenizer4InitEPKcS1_ */
	void CUtlTokenizer(class CUtlTokenizer *, const char  *, int, const char  *); /* linkage=_ZN13CUtlTokenizerC4EPKciS1_ */
	/* <6e9c368> tier0_perproject/utltokenizer.cpp:721 */
	void Init(class CUtlTokenizer *, const char  *, int, const char  *); /* linkage=_ZN13CUtlTokenizer4InitEPKciS1_ */
	void SetTokenDelimiters(class CUtlTokenizer *, const char  *); /* linkage=_ZN13CUtlTokenizer18SetTokenDelimitersEPKc */
	void SetParseStringsAsAtomicTokens(class CUtlTokenizer *, bool); /* linkage=_ZN13CUtlTokenizer29SetParseStringsAsAtomicTokensEb */
	void SetSkipComments(class CUtlTokenizer *, bool); /* linkage=_ZN13CUtlTokenizer15SetSkipCommentsEb */
	bool GetSkipComments(const class CUtlTokenizer  *); /* linkage=_ZNK13CUtlTokenizer15GetSkipCommentsEv */
	void SetSkipWhitespace(class CUtlTokenizer *, bool); /* linkage=_ZN13CUtlTokenizer17SetSkipWhitespaceEb */
	bool GetSkipWhitespace(const class CUtlTokenizer  *); /* linkage=_ZNK13CUtlTokenizer17GetSkipWhitespaceEv */
	void SetWhitespaceIsDelimiter(class CUtlTokenizer *, bool); /* linkage=_ZN13CUtlTokenizer24SetWhitespaceIsDelimiterEb */
	void SetAllowBackslashStringEscapes(class CUtlTokenizer *, bool); /* linkage=_ZN13CUtlTokenizer30SetAllowBackslashStringEscapesEb */
	bool ConsumeIdentifier(class CUtlTokenizer *, class CUtlTokenReference *); /* linkage=_ZN13CUtlTokenizer17ConsumeIdentifierEP18CUtlTokenReference */
	/* <6e9cab9> tier0_perproject/utltokenizer.cpp:886 */
	bool ConsumeAtomicToken(class CUtlTokenizer *, const char  *, bool); /* linkage=_ZN13CUtlTokenizer18ConsumeAtomicTokenEPKcb */
	/* <6e9c75c> tier0_perproject/utltokenizer.cpp:868 */
	bool ConsumeArbitraryToken(class CUtlTokenizer *, class CUtlTokenReference *); /* linkage=_ZN13CUtlTokenizer21ConsumeArbitraryTokenEP18CUtlTokenReference */
	bool ConsumeNextToken(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer16ConsumeNextTokenEv */
	bool ConsumeUntilAtomic(class CUtlTokenizer *, const char  *, bool, class CUtlTokenReference *); /* linkage=_ZN13CUtlTokenizer18ConsumeUntilAtomicEPKcbP18CUtlTokenReference */
	bool ConsumeArbitraryBytes(class CUtlTokenizer *, int); /* linkage=_ZN13CUtlTokenizer21ConsumeArbitraryBytesEi */
	/* <6e9c475> tier0_perproject/utltokenizer.cpp:812 */
	bool PeekIdentifier(class CUtlTokenizer *, int); /* linkage=_ZN13CUtlTokenizer14PeekIdentifierEi */
	/* <6e9c5dc> tier0_perproject/utltokenizer.cpp:823 */
	bool PeekAtomicToken(class CUtlTokenizer *, int, const char  *, bool); /* linkage=_ZN13CUtlTokenizer15PeekAtomicTokenEiPKcb */
	bool PeekToken(class CUtlTokenizer *, int, class CUtlTokenReference *); /* linkage=_ZN13CUtlTokenizer9PeekTokenEiP18CUtlTokenReference */
	/* <6e9d029> tier0_perproject/utltokenizer.cpp:1333 */
	const char  * GetCurrentPreamblePtr(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer21GetCurrentPreamblePtrEv */
	/* <6e9d180> tier0_perproject/utltokenizer.cpp:1349 */
	const char  * GetCurrentReadPtr(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer17GetCurrentReadPtrEv */
	int GetCurrentLineNumber(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer20GetCurrentLineNumberEv */
	uint32 GetCurrentSourceOffset(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer22GetCurrentSourceOffsetEv */
	/* <6e9cecd> tier0_perproject/utltokenizer.cpp:1273 */
	bool AnyTokensRemaining(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer18AnyTokensRemainingEv */
	void Rewind(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer6RewindEv */
	int GetLineNumberForToken(const class CUtlTokenizer  *, const class CUtlTokenReference  &); /* linkage=_ZNK13CUtlTokenizer21GetLineNumberForTokenERK18CUtlTokenReference */
	/* <6e9cf17> tier0_perproject/utltokenizer.cpp:1293 */
	int GetLineNumberForSourcePosition(const class CUtlTokenizer  *, const char  *); /* linkage=_ZNK13CUtlTokenizer30GetLineNumberForSourcePositionEPKc */
	const char  * GetFilename(const class CUtlTokenizer  *); /* linkage=_ZNK13CUtlTokenizer11GetFilenameEv */
	bool GetLastConsumedToken(const class CUtlTokenizer  *, class CUtlTokenReference *); /* linkage=_ZNK13CUtlTokenizer20GetLastConsumedTokenEP18CUtlTokenReference */
	void GetCurrentPreamble(class CUtlTokenizer *, class CBufferString *); /* linkage=_ZN13CUtlTokenizer18GetCurrentPreambleEP13CBufferString */
	/* <6e9d265> tier0_perproject/utltokenizer.cpp:1395 */
	uint32 GetSourceOffsetForToken(const class CUtlTokenizer  *, const class CUtlTokenReference  &); /* linkage=_ZNK13CUtlTokenizer23GetSourceOffsetForTokenERK18CUtlTokenReference */
	const char  * GetSourceStartPtr(const class CUtlTokenizer  *); /* linkage=_ZNK13CUtlTokenizer17GetSourceStartPtrEv */
	const char  * GetSourceEndPtr(const class CUtlTokenizer  *); /* linkage=_ZNK13CUtlTokenizer15GetSourceEndPtrEv */
	bool HasWarnings(const class CUtlTokenizer  *); /* linkage=_ZNK13CUtlTokenizer11HasWarningsEv */
	int GetWarningCount(const class CUtlTokenizer  *); /* linkage=_ZNK13CUtlTokenizer15GetWarningCountEv */
	const class TokenWarning_t  & GetWarning(const class CUtlTokenizer  *, int); /* linkage=_ZNK13CUtlTokenizer10GetWarningEi */
	bool IsDelimiterOrWhitespace(const class CUtlTokenizer  *, const class CUtlTokenReference  &); /* linkage=_ZNK13CUtlTokenizer23IsDelimiterOrWhitespaceERK18CUtlTokenReference */
	enum ReadBlockResult_t ReadBalancedBlockAsSingleToken(class CUtlTokenizer *, const char  *, const char  *, class CUtlTokenReference *); /* linkage=_ZN13CUtlTokenizer30ReadBalancedBlockAsSingleTokenEPKcS1_P18CUtlTokenReference */
	/* <6e9c189> tier0_perproject/utltokenizer.cpp:693 */
	void Clear(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer5ClearEv */
	bool ReadUpThroughToken(class CUtlTokenizer *, int); /* linkage=_ZN13CUtlTokenizer18ReadUpThroughTokenEi */
	bool ReadToken(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer9ReadTokenEv */
	bool ReadTokenChars(class CUtlTokenizer *, const char  * *, const char  * *, const char  * *); /* linkage=_ZN13CUtlTokenizer14ReadTokenCharsEPPKcS2_S2_ */
	void ResetLookahead(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer14ResetLookaheadEv */
	bool ConsumeMultilineStringDelimiter(class CUtlTokenizer *, const char  *, const char  *); /* linkage=_ZN13CUtlTokenizer31ConsumeMultilineStringDelimiterEPKcS1_ */
	bool ConsumeCPPComment(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer17ConsumeCPPCommentEv */
	bool ConsumeCComment(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizer15ConsumeCCommentEv */
	void ~CUtlTokenizer(class CUtlTokenizer *); /* linkage=_ZN13CUtlTokenizerD4Ev */
} __attribute__((__aligned__(8)));

// <0644C2B3> ../public/tier0/utltokenizer.h:189
void CUtlTokenizer::CUtlTokenizer(const char* pSource, const char* pFilename)
{
} /* size: 0 */

// <056E3ADB> ../public/tier0/utltokenizer.h:193
void CUtlTokenizer::CUtlTokenizer(const char* pSrcStart, int nLength, const char* pFilename)
{
} /* size: 0 */

// <06E9B28C> ../public/tier0/utltokenizer.h:239
inline void CUtlTokenizer::ConsumeNextToken()
{
} /* size: 0 */

// <056E834B> ../public/tier0/utltokenizer.h:304
inline void CUtlTokenizer::GetFilename()
{
} /* size: 0 */

// <05544666> ../public/tier0/utltokenizer.h:382
bool UtlTokenizer_QuoteAndEscapeString(const char *, CBufferString *)
{
} /* size: 0 */

// <05544688> ../public/tier0/utltokenizer.h:388
bool UtlTokenizer_IsIdentifier(const char *, bool)
{
} /* size: 0 */

// <055446AA> ../public/tier0/utltokenizer.h:392
bool UtlTokenizer_IsSpecialFloat(const char *, double *)
{
} /* size: 0 */

// <055DF9A5> ../public/tier0/utltokenizer.h:397
void UtlTokenizer_RemoveLeadingLine(CBufferString *)
{
} /* size: 0 */

// <055DF92C> ../public/tier0/utltokenizer.h:398
void UtlTokenizer_RemoveAllButLeadingLine(CBufferString *)
{
} /* size: 0 */

// <055DF98B> ../public/tier0/utltokenizer.h:399
void UtlTokenizer_RemoveWhitespaceAtLineStarts(CBufferString *)
{
} /* size: 0 */


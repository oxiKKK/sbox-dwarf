
//
// localize/localize_imp.cpp
//
//	referenced by: liblocalize.so
//
//	functions: 253
//	class: 1
//	struct: 1
//

// <00070CA1> localize/localize_imp.cpp:61
bool ValueIsIntegral(float64 flValue)
{
} /* size: 0 */

// <00070C86> localize/localize_imp.cpp:66
void ClearResolvedInfo(LocResolvedInfo_t* pInfo)
{
} /* size: 0 */

// <00070C5B> localize/localize_imp.cpp:76
const char* MakeSafeReturn(const char* pToken, const char* pValue)
{
} /* size: 0 */

// <0004C21F> localize/localize_imp.cpp:280
// variables: 11
// function calls: 4
const short unsigned int* ReadLocalizationTokenImpl<short unsigned int, short unsigned int, V_UTF16ToUChar32>(const short unsigned int* pStart, char* pToken, int nTokenBufferSize, bool& bQuoted, bool& bOverflow)
{
	char* pTokenOrig; // 288
	int nTokenBufferSizeOrig; // 289
	{
		uchar32 ch32; // 368
		bool bError; // 369
		int nSrcLen; // 370
		int nDstLen; // 371
		V_UChar32ToUTF8Len(uchar32 uVal); // 50
		V_UChar32ToUTF8Len(uchar32 uVal); // 371
	}
	{
		uchar32 ch32; // 429
		bool bError; // 430
		int nSrcLen; // 431
		int nDstLen; // 432
		V_UChar32ToUTF8Len(uchar32 uVal); // 50
		V_UChar32ToUTF8Len(uchar32 uVal); // 432
	}
	{
		CBufferString bufStr; // 457
	}
} /* size: 686, variables: 2 */

// <0004BF93> localize/localize_imp.cpp:280
// variables: 11
// function calls: 3
const char* ReadLocalizationTokenImpl<char, unsigned char, V_UTF8ToUChar32>(const char* pStart, char* pToken, int nTokenBufferSize, bool& bQuoted, bool& bOverflow)
{
	char* pTokenOrig; // 288
	int nTokenBufferSizeOrig; // 289
	{
		uchar32 ch32; // 368
		bool bError; // 369
		int nSrcLen; // 370
		int nDstLen; // 371
	}
	{
		uchar32 ch32; // 429
		bool bError; // 430
		int nSrcLen; // 431
		int nDstLen; // 432
	}
	{
		CBufferString bufStr; // 457
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 457
		CBufferString::~CBufferString(); // 460
	}
} /* size: 471, variables: 2 */

// <00070BF9> localize/localize_imp.cpp:465
const void* ReadLocalizationToken(LocFileFormat_t fileFormat, const void* pStart, char* pToken, int nTokenBufferSize, bool& bQuoted, bool& bOverflow)
{
} /* size: 0 */

// <00070BA9> localize/localize_imp.cpp:478
// variables: 2
const void* ReadToLineEnding(LocFileFormat_t fileFormat, const void* pStart)
{
	{
		const ucs2* pScan; // 484
	}
	{
		const char* pScan; // 493
	}
} /* size: 0 */

// <00070B53> localize/localize_imp.cpp:505
// variables: 2
bool CheckForCondition(LocFileFormat_t fileFormat, const void ** pStart)
{
	{
		const ucs2* pScan; // 511
	}
	{
		const char* pScan; // 528
	}
} /* size: 0 */

// <00070B32> localize/localize_imp.cpp:552
inline bool MayNeedJongSungProcessing(CBufferString* pStr)
{
} /* size: 0 */

// <00070B11> localize/localize_imp.cpp:574
KoreanConsonantResult_t Korean_IsFinalConsonant(uchar32 ch32)
{
} /* size: 0 */

// <00070705> localize/localize_imp.cpp:594
// variables: 17
// function calls: 6
void PostProcessKoreanJongSungRule(char* pUnicodeBuffer, int unicodeBufferSizeInBytes)
{
	const char* unicodeOutput; // 614
	int unicodeBufferSize; // 615
	int originalBufferSize; // 616
	bool bPreviousCharacterEndingConsonant; // 618
	int nPos; // 620
	bool bInEscapeCharacter; // 622
	bool bFindingA; // 623
	bool bFindingB; // 624
	char* pszTemp; // 626
	int nTempPos; // 628
	uchar32 lastKoreanGlyph; // 630
	uchar32 ch32; // 632
	bool bError; // 633
	int nCharBytes; // 634
	{
		bool bStartOfSubstitutionBlock; // 639
		{
			int nBarCount; // 646
			int nSubstPos; // 649
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 742
		Korean_IsFinalConsonant(uchar32 ch32); // 736
		Korean_IsFinalConsonant(uchar32 ch32); // 574
		Korean_IsFinalConsonant(uchar32 ch32); // 677
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 717
	}
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 754
} /* size: 786, variables: 14, inline expansions: 1 (16 bytes) */

// <0006FE82> localize/localize_imp.cpp:760
// variables: 6
// function calls: 34
const char* ConstructString_Impl(bool bAppend, CBufferString* pOut, const char* formatString, int numFormatParameters, const char* const* pArgList, bool bDoKoreanJongSungRule)
{
	const char   __FUNCTION__; // 40958
	const char* searchPos; // 789
	{
		int i; // 778
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 780
		}
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 780
		CBufferString::LengthAllocated(); // 780
	}
	{
		int argindex; // 795
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 796
		}
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 799
		CBufferString::Append(
			char ch,
			bool bExact);  // 805
	}
	CBufferString::LengthAllocated(); // 762
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 764
	CBufferString::Append(
		char ch,
		bool bExact);  // 812
	CBufferString::IsCurBufferFull(); // 833
	CBufferString::IsFixedFull(); // 820
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 564
	strchr(const char* __s,
		int __c);  // 186
	V_strchr(const char* s,
		char c);  // 564
	MayNeedJongSungProcessing(CBufferString* pStr); // 552
	CBufferString::IsEmpty(); // 554
	MayNeedJongSungProcessing(CBufferString* pStr); // 825
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 831
	CBufferString::LengthAllocatedBytes(); // 827
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 895
	V_strlen(const char* str); // 895
	CBufferString::SyncStringChars(); // 828
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 769
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 827
} /* size: 0, variables: 2, inline expansions: 28 (884 bytes) */

// <0006F6C3> localize/localize_imp.cpp:837
// variables: 7
// function calls: 28
const char* ConstructStringKeyValues_Impl(bool bAppend, CBufferString* pOut, const char* pFormatString, KeyValues* pLocalizationVariables, bool bDoKoreanJongSungRule)
{
	{
		bool bShouldAdvance; // 848
		{
			const char* pVarStart; // 865
			const char* pVarEnd; // 866
			{
				char variableName; // 873
				char* pVarSet; // 874
				const char* pValue; // 882
				{
					const char* pScan; // 875
				}
				CBufferString::Append(
					const char* pString,
					int nChars,
					bool bExact);  // 883
			}
			strchr(const char* __s,
				int __c);  // 186
			V_strchr(const char* s,
				char c);  // 484
			FindChar(const char* pStr,
				const char  cSearch);  // 866
		}
		CBufferString::Append(
			char ch,
			bool bExact);  // 893
	}
	CBufferString::IsCurBufferFull(); // 833
	CBufferString::IsFixedFull(); // 901
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 564
	strchr(const char* __s,
		int __c);  // 186
	V_strchr(const char* s,
		char c);  // 564
	MayNeedJongSungProcessing(CBufferString* pStr); // 552
	CBufferString::IsEmpty(); // 554
	MayNeedJongSungProcessing(CBufferString* pStr); // 906
	CBufferString::LengthAllocatedBytes(); // 908
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 895
	V_strlen(const char* str); // 895
	CBufferString::SyncStringChars(); // 909
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 912
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 841
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 908
} /* size: 771, inline expansions: 23 (782 bytes) */

// <0007250E> localize/localize_imp.cpp:929
// variable: 1
// function call: 1
ELanguage MapLanguageStringToEnum(const char* pLanguage)
{
	{
		ELanguage eLang; // 943
		{
		}
	}
	MapLanguageStringToEnum(const char* pLanguage); // 929
} /* size: 0, inline expansions: 1 (50 bytes) */

// <0006F66F> localize/localize_imp.cpp:929
// variables: 3
ELanguage MapLanguageStringToEnum(const char* pLanguage)
{
	const char   __FUNCTION__; // 41039
	{
		ELanguage eLang; // 943
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 946
		}
	}
} /* size: 0, variables: 1 */

// <0006F5EF> localize/localize_imp.cpp:951
// variables: 6
bool ExtractLanguageName(CBufferString* pOut, const char* pFile)
{
	const char* pStart; // 982
	const char* pEnd; // 989
	{
		int i; // 954
		{
			const char* pLangName; // 958
			const char* pPossible; // 968
			{
				const char* pEnd; // 971
			}
		}
	}
} /* size: 0, variables: 2 */

// <0006F36D> localize/localize_imp.cpp:999
// function calls: 6
void InsertLanguageName(CBufferString* pOut, const char* pOrig, int nPrefixLen, int nSkipLen, const char* pLanguage)
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1001
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 1004
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 1007
} /* size: 159, inline expansions: 6 (152 bytes) */

// <0003028E> localize/localize_imp.cpp:1013
// member functions: 321
// member variables: 29
// vtable entries: 94
// class size: 664
class CLocalize : public CTier2AppSystem<ILocalize, 0> {
	/* localize/localize_imp.cpp:1060 */
	struct StringProperties_t {
		CUtlSymbol m_symFileName; /* 0 2 */
		bool m_bIsCoreValveFile; /* 2 1 */
		CUtlSymbol m_symLanguage; /* 4 2 */
		ELanguage m_eLanguage; /* 8 4 */
		uint8 m_nLangPluralVariants; /* 12 1 */
		uint8 m_nLangGenders; /* 13 1 */
		uint8 m_nVariant; /* 14 1 */
		LOC_GENDER m_eGender; /* 15 1 */
		bool m_bValidForPlural; /* 16 1 */
		bool m_bValidForGender; /* 17 1 */
		GenderMap_t m_pGenderMap; /* 24 8 */
		const char * m_pFileName; /* 32 8 */
		/* localize/localize_imp.cpp:1081 */
		void StringProperties_t(StringProperties_t* );
		/* localize/localize_imp.cpp:1092 */
		void StringProperties_t(StringProperties_t* , CUtlSymbol, CUtlSymbol, ELanguage, uint8, uint8, GenderMap_t);
		/* localize/localize_imp.cpp:1104 */
		void SetFromFileName(StringProperties_t* , const char* , const char* , CUtlSymbol);
		/* localize/localize_imp.cpp:1106 */
		void CheckForCoreValve(StringProperties_t* );
	};
	/* localize/localize_imp.cpp:1375 */
	struct LocalizedString_t {
		int m_nValueIndex; /* 0 4 */
		LocalizeInstanceIndex_t m_nNextInstance; /* 4 4 */
		CUtlSymbol m_symFileName; /* 8 2 */
		CUtlSymbol m_symLanguage; /* 10 2 */
		int8 m_eLanguage; /* 12 1 */
		uint8 m_nVariant:6; /* 13: 0 1 */
		uint8 m_bValidForPlural:1; /* 13: 6 1 */
		uint8 m_bValidForGender:1; /* 13: 7 1 */
		uint16 m_nRawGender:3; /* 14: 0 2 */
		uint16 m_nUnused:13; /* 14: 3 2 */
		static const uint8 k_nVariantMax = 61; /* 0 0 */
		static const uint8 k_nAllVariants = 62; /* 0 0 */
		static const uint8 k_nNoVariants = 63; /* 0 0 */
		/* localize/localize_imp.cpp:1405 */
		bool HasNoVariants(const LocalizedString_t* );
		/* localize/localize_imp.cpp:1409 */
		bool HasAllVariants(const LocalizedString_t* );
		/* localize/localize_imp.cpp:1413 */
		bool IsVariantSubString(const LocalizedString_t* );
		/* localize/localize_imp.cpp:1417 */
		int GetRawVariantIndex(const LocalizedString_t* );
		/* localize/localize_imp.cpp:1422 */
		bool IsValidForPlural(const LocalizedString_t* );
		/* localize/localize_imp.cpp:1426 */
		bool IsValidForGender(const LocalizedString_t* );
		/* localize/localize_imp.cpp:1430 */
		bool HasGender(const LocalizedString_t* );
		/* localize/localize_imp.cpp:1434 */
		int GetRawGenderIndex(const LocalizedString_t* );
		/* localize/localize_imp.cpp:1438 */
		ELanguage GetLanguage(const LocalizedString_t* );
		void LocalizedString_t(LocalizedString_t* );
		void LocalizedString_t(LocalizedString_t* , const LocalizedString_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* localize/localize_imp.cpp:1465 */
	struct StringData_t {
		/* localize/localize_imp.cpp:1483 */
		struct AllocMark_t {
			int m_nChars; /* 0 4 */
			int m_nWaste; /* 4 4 */
		};
		CUtlBlockMemory<char, int> m_data; /* 0 16 */
		int m_nChars; /* 16 4 */
		int m_nWaste; /* 20 4 */
		/* localize/localize_imp.cpp:1471 */
		void StringData_t(StringData_t* );
		/* localize/localize_imp.cpp:1478 */
		char& operator[](StringData_t* , int);
		/* localize/localize_imp.cpp:1489 */
		void GetAllocMark(StringData_t* , AllocMark_t* );
		/* localize/localize_imp.cpp:1495 */
		int Add(StringData_t* , const char* );
		/* localize/localize_imp.cpp:1516 */
		const char* AddGetPtr(StringData_t* , const char* );
		/* localize/localize_imp.cpp:1522 */
		void RevertToMark(StringData_t* , AllocMark_t* );
		/* localize/localize_imp.cpp:1528 */
		void Swap(StringData_t* , StringData_t& );
		/* localize/localize_imp.cpp:1535 */
		void Purge(StringData_t* );
		/* localize/localize_imp.cpp:1542 */
		size_t AllocSize(const StringData_t* );
		void ~StringData_t(StringData_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* localize/localize_imp.cpp:1549 */
	struct LocalizationFileInfo_t {
		/* localize/localize_imp.cpp:1551 */
		void LocalizationFileInfo_t(LocalizationFileInfo_t* );
		/* localize/localize_imp.cpp:1555 */
		void ~LocalizationFileInfo_t(LocalizationFileInfo_t* );
		CUtlSymbol m_symName; /* 0 2 */
		CUtlSymbol m_symPathID; /* 2 2 */
		CUtlSymbolTable * m_pTokensUsed; /* 8 8 */
		/* localize/localize_imp.cpp:1569 */
		const char* GetPathID(const LocalizationFileInfo_t* );
		void LocalizationFileInfo_t(LocalizationFileInfo_t* , const LocalizationFileInfo_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* localize/localize_imp.cpp:1580 */
	struct FileChangeDir_t {
		CDirWatcher m_watcher; /* 0 88 */
		void ~FileChangeDir_t(FileChangeDir_t* );
		void FileChangeDir_t(FileChangeDir_t* );
	};
	/* localize/localize_imp.cpp:1591 */
	struct ChangeCallback_t {
		ILocalizationChangeCallback * m_pCallback; /* 0 8 */
		uint32 m_nFlags; /* 8 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CTier2AppSystem<ILocalize, 0> <ancestor>; */ /* 0 48 */
	void CLocalize(CLocalize* , CLocalize& );
	/* localize/localize_imp.cpp:1682 */
	virtual InitReturnVal_t Init(CLocalize* );
	/* localize/localize_imp.cpp:1720 */
	virtual void Shutdown(CLocalize* );
	/* localize/localize_imp.cpp:2178 */
	bool AddFileImpl(CLocalize* , const char* , const char* , const char* , EKeyReplaceStrategy, bool);
	/* localize/localize_imp.cpp:2157 */
	virtual bool AddFile(CLocalize* , const char* , const char* );
	/* localize/localize_imp.cpp:3546 */
	virtual void RemoveAll(CLocalize* );
	/* localize/localize_imp.cpp:3560 */
	virtual void RemoveAllFileStrings(CLocalize* );
	/* localize/localize_imp.cpp:2453 */
	virtual const char* FindUnsafe(CLocalize* , const char* );
	/* localize/localize_imp.cpp:2478 */
	virtual const char* FindUnsafeLocal(CLocalize* , const char* );
	/* localize/localize_imp.cpp:2497 */
	virtual const char* FindSafe(CLocalize* , const char* );
	/* localize/localize_imp.cpp:6212 */
	const char* FindSubLanguageImpl(CLocalize* , const char* );
	/* localize/localize_imp.cpp:6238 */
	virtual const char* FindSubLanguageUnsafe(CLocalize* , const char* );
	/* localize/localize_imp.cpp:6254 */
	virtual const char* FindSubLanguageSafe(CLocalize* , const char* );
	/* localize/localize_imp.cpp:2527 */
	virtual const char* GetLocalizedString(CLocalize* , const char* , CBufferString* );
	/* localize/localize_imp.cpp:2546 */
	virtual LocalizeStringIndex_t FindIndex(CLocalize* , const char* );
	/* localize/localize_imp.cpp:2568 */
	virtual const char* FindLongestInstance(CLocalize* , const char* , ILocalizeTextQuery* , LocalizeInstanceIndex_t* , LocalizeStringIndex_t* );
	/* localize/localize_imp.cpp:2621 */
	virtual LocalizeInstanceIndex_t GetPrimaryInstanceByIndex(CLocalize* , LocalizeStringIndex_t);
	/* localize/localize_imp.cpp:2640 */
	virtual LocalizeInstanceIndex_t GetPrimaryInstanceByToken(CLocalize* , const char* );
	/* localize/localize_imp.cpp:2659 */
	virtual LocalizeInstanceIndex_t GetNextInstanceIndex(CLocalize* , LocalizeInstanceIndex_t);
	/* localize/localize_imp.cpp:2679 */
	virtual const char* GetValueByInstanceIndex(CLocalize* , LocalizeInstanceIndex_t);
	/* localize/localize_imp.cpp:2699 */
	virtual int GetValueVariantByInstanceIndex(CLocalize* , LocalizeInstanceIndex_t);
	/* localize/localize_imp.cpp:3714 */
	virtual const char* GetNameByIndex(CLocalize* , LocalizeStringIndex_t);
	/* localize/localize_imp.cpp:3733 */
	virtual const char* GetValueByIndex(CLocalize* , LocalizeStringIndex_t);
	/* localize/localize_imp.cpp:3790 */
	virtual int GetNumVariantValuesByIndex(CLocalize* , LocalizeStringIndex_t, uint32);
	/* localize/localize_imp.cpp:3827 */
	const char* GetVariantValueByIndexImpl(CLocalize* , LocalizeStringIndex_t, int64, float64, int, int, ELanguage, uint32);
	/* localize/localize_imp.cpp:3900 */
	virtual const char* GetVariantValueByIndex(CLocalize* , LocalizeStringIndex_t, int, uint32);
	/* localize/localize_imp.cpp:3944 */
	virtual const char* GetPluralGenderValueByIndex(CLocalize* , LocalizeStringIndex_t, int, LOC_GENDER, uint32);
	/* localize/localize_imp.cpp:3620 */
	virtual const char* GetCurrentLanguage(CLocalize* );
	/* localize/localize_imp.cpp:3630 */
	virtual ELanguage GetCurrentELanguage(CLocalize* );
	/* localize/localize_imp.cpp:6270 */
	virtual const char* GetCurrentSubLanguage(CLocalize* );
	/* localize/localize_imp.cpp:6285 */
	virtual void SetCurrentSubLanguage(CLocalize* , const char* );
	/* localize/localize_imp.cpp:6297 */
	virtual const char* SetCurrentSubLanguageFromSystem(CLocalize* );
	/* localize/localize_imp.cpp:3655 */
	virtual int GetLinguisticCaseFlags(CLocalize* );
	/* localize/localize_imp.cpp:6605 */
	virtual uint32 GetLocalizeFlags(const CLocalize* );
	/* localize/localize_imp.cpp:6610 */
	virtual void SetLocalizeFlags(CLocalize* , uint32);
	/* localize/localize_imp.cpp:6765 */
	virtual void CheckForFileChanges(CLocalize* );
	/* localize/localize_imp.cpp:3684 */
	virtual LocalizeStringIndex_t GetFirstStringIndex(CLocalize* );
	/* localize/localize_imp.cpp:3692 */
	virtual LocalizeStringIndex_t GetNextStringIndex(CLocalize* , LocalizeStringIndex_t);
	/* localize/localize_imp.cpp:3287 */
	LocalizeStringIndex_t AddStringImpl(CLocalize* , const char* , const char* , EKeyReplaceStrategy, StringProperties_t* );
	/* localize/localize_imp.cpp:3499 */
	LocalizeStringIndex_t AddStringImpl(CLocalize* , const char* , const uchar16* , CUtlSymbol);
	/* localize/localize_imp.cpp:3521 */
	LocalizeStringIndex_t AddStringImpl(CLocalize* , const char* , const uchar32* , CUtlSymbol);
	/* localize/localize_imp.cpp:1121 */
	virtual LocalizeStringIndex_t AddString(CLocalize* , const char* , const char* , const char* );
	/* localize/localize_imp.cpp:4017 */
	virtual void SetValueByIndex(CLocalize* , LocalizeStringIndex_t, const char* );
	/* localize/localize_imp.cpp:4047 */
	virtual bool RemoveStringForLanguage(CLocalize* , const char* , ELanguage);
	/* localize/localize_imp.cpp:2321 */
	virtual bool SaveToFile(CLocalize* , const char* );
	/* localize/localize_imp.cpp:4120 */
	virtual int GetLocalizationFileCount(CLocalize* );
	/* localize/localize_imp.cpp:4128 */
	virtual const char* GetLocalizationFileName(CLocalize* , int);
	/* localize/localize_imp.cpp:3997 */
	virtual const char* GetFileNameByIndex(CLocalize* , LocalizeStringIndex_t);
	/* localize/localize_imp.cpp:2408 */
	virtual void ReloadLocalizationFiles(CLocalize* , uint32, const CUtlVector<int, CUtlMemory<int, int> >* );
	/* localize/localize_imp.cpp:4151 */
	virtual void ConstructString(CLocalize* , char* , int, const char* , int, ...);
	/* localize/localize_imp.cpp:4187 */
	virtual const char* ConstructString(CLocalize* , CBufferString* , const char* , int, ...);
	/* localize/localize_imp.cpp:4198 */
	virtual const char* AppendConstructString(CLocalize* , CBufferString* , const char* , int, ...);
	/* localize/localize_imp.cpp:4209 */
	virtual const char* AppendOrConstructString(CLocalize* , bool, CBufferString* , const char* , int, ...);
	/* localize/localize_imp.cpp:4171 */
	virtual const char* ConstructStringVArgs(CLocalize* , CBufferString* , const char* , int, typedef __va_list_tag __va_list_tag* , bool);
	/* localize/localize_imp.cpp:4166 */
	virtual const char* ConstructStringArgArray(CLocalize* , CBufferString* , const char* , int, const char* const* , bool);
	/* localize/localize_imp.cpp:4223 */
	virtual const char* ConstructString(CLocalize* , CBufferString* , const char* , KeyValues* , bool);
	/* localize/localize_imp.cpp:4231 */
	virtual const char* ConstructString(CLocalize* , CBufferString* , LocalizeStringIndex_t, KeyValues* , bool);
	/* localize/localize_imp.cpp:4256 */
	virtual const char* ConstructStringToken(CLocalize* , CBufferString* , const char* , KeyValues* , bool);
	/* localize/localize_imp.cpp:4323 */
	virtual const char* ConstructDateString(CLocalize* , CBufferString* , LOC_DATE_FORMAT, tm* , bool);
	/* localize/localize_imp.cpp:4550 */
	virtual const char* ConstructDateString(CLocalize* , CBufferString* , LOC_DATE_FORMAT, uint64, bool);
	/* localize/localize_imp.cpp:4567 */
	virtual const char* ConstructRelativeDateString(CLocalize* , CBufferString* , LOC_DATE_FORMAT, uint64, bool);
	/* localize/localize_imp.cpp:4643 */
	virtual const char* ConstructRelativeTimeString(CLocalize* , CBufferString* , LOC_DATE_FORMAT, LOC_DATE_FORMAT, uint64, bool);
	/* localize/localize_imp.cpp:4695 */
	virtual const char* ConstructDurationString(CLocalize* , CBufferString* , LOC_DURATION_FORMAT, int, bool);
	/* localize/localize_imp.cpp:4934 */
	virtual const char* ConstructNumberString(CLocalize* , CBufferString* , LOC_NUMBER_FORMAT, uint64, bool);
	/* localize/localize_imp.cpp:5025 */
	virtual const char* ConstructNumberString(CLocalize* , CBufferString* , LOC_NUMBER_FORMAT, float64, int, bool);
	/* localize/localize_imp.cpp:5193 */
	virtual const char* ConstructOrdinalString(CLocalize* , CBufferString* , LOC_ORDINAL_FORMAT, uint32, bool);
	/* localize/localize_imp.cpp:1156 */
	virtual int GetPluralVariant(const CLocalize* , int64);
	/* localize/localize_imp.cpp:1160 */
	virtual int GetPluralVariant(const CLocalize* , float64, int);
	/* localize/localize_imp.cpp:1164 */
	virtual int GetNumPluralVariants(const CLocalize* );
	/* localize/localize_imp.cpp:5804 */
	const char* FindPluralImpl(CLocalize* , const char* , int64, float64, int, LOC_RESOLVED_INFO_TYPE);
	/* localize/localize_imp.cpp:1170 */
	virtual const char* FindPluralUnsafe(CLocalize* , const char* , int64);
	/* localize/localize_imp.cpp:1174 */
	virtual const char* FindPluralSafe(CLocalize* , const char* , int64);
	/* localize/localize_imp.cpp:1178 */
	virtual const char* FindPluralUnsafe(CLocalize* , const char* , float64, int);
	/* localize/localize_imp.cpp:1182 */
	virtual const char* FindPluralSafe(CLocalize* , const char* , float64, int);
	/* localize/localize_imp.cpp:1187 */
	virtual int GetNumGenderVariants(const CLocalize* );
	/* localize/localize_imp.cpp:1191 */
	virtual int GetNumPluralGenderVariants(const CLocalize* );
	/* localize/localize_imp.cpp:5856 */
	const char* FindPluralCompatibleImpl(CLocalize* , const char* , const char* , int64, float64, int, LOC_RESOLVED_INFO_TYPE);
	/* localize/localize_imp.cpp:1198 */
	virtual const char* FindCompatibleUnsafe(CLocalize* , const char* , const char* );
	/* localize/localize_imp.cpp:1202 */
	virtual const char* FindCompatibleSafe(CLocalize* , const char* , const char* );
	/* localize/localize_imp.cpp:1206 */
	virtual const char* FindPluralCompatibleUnsafe(CLocalize* , const char* , const char* , int64);
	/* localize/localize_imp.cpp:1210 */
	virtual const char* FindPluralCompatibleSafe(CLocalize* , const char* , const char* , int64);
	/* localize/localize_imp.cpp:1214 */
	virtual const char* FindPluralCompatibleUnsafe(CLocalize* , const char* , const char* , float64, int);
	/* localize/localize_imp.cpp:1218 */
	virtual const char* FindPluralCompatibleSafe(CLocalize* , const char* , const char* , float64, int);
	/* localize/localize_imp.cpp:5920 */
	virtual bool ResolveToken(CLocalize* , const char* , LocResolvedInfo_t* );
	/* localize/localize_imp.cpp:5943 */
	bool ResolvePluralImpl(CLocalize* , const char* , int64, float64, int, LOC_RESOLVED_INFO_TYPE, LocResolvedInfo_t* );
	/* localize/localize_imp.cpp:1225 */
	virtual bool ResolvePlural(CLocalize* , const char* , int64, LocResolvedInfo_t* );
	/* localize/localize_imp.cpp:1229 */
	virtual bool ResolvePlural(CLocalize* , const char* , float64, int, LocResolvedInfo_t* );
	/* localize/localize_imp.cpp:5973 */
	bool ResolvePluralCompatibleImpl(CLocalize* , const char* , const char* , int64, float64, int, LOC_RESOLVED_INFO_TYPE, LocResolvedInfo_t* );
	/* localize/localize_imp.cpp:1234 */
	virtual bool ResolveCompatible(CLocalize* , const char* , const char* , LocResolvedInfo_t* );
	/* localize/localize_imp.cpp:1238 */
	virtual bool ResolvePluralCompatible(CLocalize* , const char* , const char* , int64, LocResolvedInfo_t* );
	/* localize/localize_imp.cpp:1242 */
	virtual bool ResolvePluralCompatible(CLocalize* , const char* , const char* , float64, int, LocResolvedInfo_t* );
	/* localize/localize_imp.cpp:6020 */
	const char* GetResolvedPluralCompatibleValueImpl(CLocalize* , const LocResolvedInfo_t* );
	/* localize/localize_imp.cpp:6104 */
	const char* GetResolvedValueImpl(CLocalize* , const LocResolvedInfo_t* );
	/* localize/localize_imp.cpp:1249 */
	virtual const char* GetResolvedValue(CLocalize* , const LocResolvedInfo_t* );
	/* localize/localize_imp.cpp:1729 */
	virtual void InstallChangeCallback(CLocalize* , ILocalizationChangeCallback* , uint32);
	/* localize/localize_imp.cpp:1745 */
	virtual void RemoveChangeCallback(CLocalize* , ILocalizationChangeCallback* );
	/* localize/localize_imp.cpp:1767 */
	virtual void ReloadLocalizationFilesInLanguage(CLocalize* , const char* );
	/* localize/localize_imp.cpp:1859 */
	bool ReadLocalizationBufferImpl(CLocalize* , const char* , const char* , void* , int, EKeyReplaceStrategy, bool);
	/* localize/localize_imp.cpp:1258 */
	virtual bool ReadLocalizationBuffer(CLocalize* , const char* , void* , int, const char* );
	/* localize/localize_imp.cpp:2081 */
	bool AddLocalizationKeyValuesImpl(CLocalize* , const char* , const char* , KeyValues* , EKeyReplaceStrategy);
	/* localize/localize_imp.cpp:1266 */
	virtual bool AddLocalizationKeyValues(CLocalize* , const char* , KeyValues* , const char* );
	/* localize/localize_imp.cpp:2118 */
	bool AddLocalizationKeyValuesImpl(CLocalize* , const char* , const char* , KeyValues3* , EKeyReplaceStrategy);
	/* localize/localize_imp.cpp:1275 */
	virtual bool AddLocalizationKeyValues(CLocalize* , const char* , KeyValues3* , const char* );
	/* localize/localize_imp.cpp:6134 */
	virtual void LocalizedMessageBox(CLocalize* , const char* , const char* );
	/* localize/localize_imp.cpp:6139 */
	virtual ILocalize* GetFallbackImpl(const CLocalize* );
	/* localize/localize_imp.cpp:6144 */
	virtual void SetFallbackImpl(CLocalize* , ILocalize* );
	/* localize/localize_imp.cpp:6149 */
	virtual bool GetTrackingMode(const CLocalize* );
	/* localize/localize_imp.cpp:6154 */
	virtual void SetTrackingMode(CLocalize* , bool);
	/* localize/localize_imp.cpp:6159 */
	virtual bool DoKoreanJongSungRuleInPlace(CLocalize* , char* , int);
	/* localize/localize_imp.cpp:6172 */
	virtual void GetStatsString(CLocalize* , CBufferString* );
	/* localize/localize_imp.cpp:1616 */
	void CLocalize(CLocalize* );
	/* localize/localize_imp.cpp:1671 */
	virtual void ~CLocalize(CLocalize* );
	/* localize/localize_imp.cpp:1298 */
	void SetFileSystem(CLocalize* , IFileSystem* );
	/* localize/localize_imp.cpp:3637 */
	void SetCurrentLanguage(CLocalize* , const char* );
	/* localize/localize_imp.cpp:4136 */
	bool LocalizationFileIsLoaded(CLocalize* , const char* );
	/* localize/localize_imp.cpp:6823 */
	void DumpLocalizationFiles(CLocalize* );
	/* localize/localize_imp.cpp:4676 */
	void AppendDurationUnit(CLocalize* , CBufferString* , int, const char* , const char* );
	/* localize/localize_imp.cpp:6197 */
	void CheckLoadDefaultFiles(CLocalize* );
	/* localize/localize_imp.cpp:6205 */
	void SpewStats(CLocalize* );
	/* localize/localize_imp.cpp:6850 */
	void SpewTokensUsed(CLocalize* );
private:
	/* localize/localize_imp.cpp:1811 */
	bool ReadLocalizationFileImpl(CLocalize* , const char* , const char* , const char* , EKeyReplaceStrategy, bool);
	/* localize/localize_imp.cpp:2263 */
	bool AddAllLanguageFiles(CLocalize* , const char* , const char* , int);
	/* localize/localize_imp.cpp:3662 */
	void BuildDupValueLookup(CLocalize* );
	/* localize/localize_imp.cpp:3676 */
	void DiscardDupValueLookup(CLocalize* );
	/* localize/localize_imp.cpp:3984 */
	int FindExistingValueIndex(CLocalize* , const char* );
	/* localize/localize_imp.cpp:6622 */
	void StartChange(CLocalize* );
	/* localize/localize_imp.cpp:6642 */
	void AddChange(CLocalize* , const char* );
	/* localize/localize_imp.cpp:6659 */
	void EndChange(CLocalize* );
	/* localize/localize_imp.cpp:6687 */
	void AddFileWatch(CLocalize* , const char* , const char* );
	/* localize/localize_imp.cpp:6720 */
	void EnableFileWatch(CLocalize* , bool);
	/* localize/localize_imp.cpp:6734 */
	void HandleFileChange(CLocalize* , const char* );
	/* localize/localize_imp.cpp:6786 */
	void AddTokenHit(CLocalize* , CUtlSymbol, const char* );
	/* localize/localize_imp.cpp:6808 */
	void AddTokenMiss(CLocalize* , const char* , const char* );
	/* localize/localize_imp.cpp:2730 */
	const char* GetPrimaryStringData(CLocalize* , LocalizeInstanceIndex_t);
	/* localize/localize_imp.cpp:5253 */
	bool MapGenderToRawGender(CLocalize* , LOC_GENDER, uint8* );
	/* localize/localize_imp.cpp:5284 */
	uint32 ParseTokenNameFlags(CLocalize* , const char* );
	/* localize/localize_imp.cpp:5329 */
	bool AssertTokenNameFlagsForUsage(CLocalize* , const char* , uint32, uint32);
	/* localize/localize_imp.cpp:5355 */
	uint8 ComputeNumPluralVariants(ELanguage);
	/* localize/localize_imp.cpp:5366 */
	int GetPluralVariantImpl(ELanguage, int64);
	/* localize/localize_imp.cpp:5561 */
	int GetPluralVariantImpl(ELanguage, float64, int);
	/* localize/localize_imp.cpp:5844 */
	uint8 ComputeNumGenders(ELanguage, GenderMap_t* );
	IFileSystem * m_pFileSystem; /* 48 8 */
	CUtlSymbol m_currentLanguage; /* 56 2 */
	ELanguage m_eLanguage; /* 60 4 */
	char m_szSubLanguageFromSettings[16]; /* 64 16 */
	uint32 m_nLocalizeFlags; /* 80 4 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_changedTokens; /* 88 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > * m_pChanges; /* 120 8 */
	int m_nChangedTokens; /* 128 4 */
	int m_nChangeStarts; /* 132 4 */
	bool m_bAddValuesToDupLookup; /* 136 1 */
	bool m_bDoKoreanJongSungRule; /* 137 1 */
	bool m_bInFileChange; /* 138 1 */
	bool m_bTrackingMode; /* 139 1 */
	bool m_bRecordTokensUsed; /* 140 1 */
	ILocalize * m_pFallbackImpl; /* 144 8 */
	/* localize/localize_imp.cpp:1450 */
	typedef struct CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor> TokenMap_t;
	TokenMap_t m_Lookup; /* 152 96 */
	/* localize/localize_imp.cpp:1452 */
	typedef struct CUtlVector<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> > InstanceVector_t;
	InstanceVector_t m_Instances; /* 248 32 */
	int m_nInstancesTotal; /* 280 4 */
	int m_nInstancesFromFiles; /* 284 4 */
	/* localize/localize_imp.cpp:2759 */
	const char* ParseVariantFlags(CLocalize* , const char* , StringProperties_t* );
	/* localize/localize_imp.cpp:2869 */
	void SetStringValueImpl(CLocalize* , LocalizedString_t* , const char* , StringProperties_t* );
	/* localize/localize_imp.cpp:2901 */
	bool AddStringValueImpl(CLocalize* , LocalizeInstanceIndex_t, const char* , const char* , StringProperties_t* );
	/* localize/localize_imp.cpp:3752 */
	bool SkipVariantInstance(CLocalize* , const LocalizedString_t* , uint32, ELanguage);
	StringData_t m_StringData; /* 288 24 */
	CUtlVector<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> > m_LocalizationFiles; /* 312 32 */
	CUtlVector<CLocalize::FileChangeDir_t*, CUtlMemory<CLocalize::FileChangeDir_t*, int> > m_ChangeWatchers; /* 344 32 */
	CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor> m_DupValueLookup; /* 376 96 */
	CUtlVector<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> > m_ChangeCallbacks; /* 472 32 */
	CUtlSymbolTable m_TokenMisses; /* 504 144 */
	uint8 m_nNumPluralVariants; /* 648 1 */
	uint8 m_nNumGenders; /* 649 1 */
	GenderMap_t m_pGenderMap; /* 656 8 */
	void CLocalize(class CLocalize *, class CLocalize &); /* linkage=_ZN9CLocalizeC4ERS_ */
	virtual enum InitReturnVal_t Init(class CLocalize *); /* linkage=_ZN9CLocalize4InitEv */
	virtual void Shutdown(class CLocalize *); /* linkage=_ZN9CLocalize8ShutdownEv */
	bool AddFileImpl(class CLocalize *, const char  *, const char  *, const char  *, enum EKeyReplaceStrategy, bool); /* linkage=_ZN9CLocalize11AddFileImplEPKcS1_S1_19EKeyReplaceStrategyb */
	virtual bool AddFile(class CLocalize *, const char  *, const char  *); /* linkage=_ZN9CLocalize7AddFileEPKcS1_ */
	virtual void RemoveAll(class CLocalize *); /* linkage=_ZN9CLocalize9RemoveAllEv */
	virtual void RemoveAllFileStrings(class CLocalize *); /* linkage=_ZN9CLocalize20RemoveAllFileStringsEv */
	virtual const char  * FindUnsafe(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize10FindUnsafeEPKc */
	virtual const char  * FindUnsafeLocal(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize15FindUnsafeLocalEPKc */
	/* <75d56> localize/localize_imp.cpp:2497 */
	virtual const char  * FindSafe(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize8FindSafeEPKc */
	const char  * FindSubLanguageImpl(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize19FindSubLanguageImplEPKc */
	/* <76e75> localize/localize_imp.cpp:6238 */
	virtual const char  * FindSubLanguageUnsafe(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize21FindSubLanguageUnsafeEPKc */
	/* <76f66> localize/localize_imp.cpp:6254 */
	virtual const char  * FindSubLanguageSafe(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize19FindSubLanguageSafeEPKc */
	virtual const char  * GetLocalizedString(class CLocalize *, const char  *, class CBufferString *); /* linkage=_ZN9CLocalize18GetLocalizedStringEPKcP13CBufferString */
	virtual LocalizeStringIndex_t FindIndex(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize9FindIndexEPKc */
	virtual const char  * FindLongestInstance(class CLocalize *, const char  *, class ILocalizeTextQuery *, LocalizeInstanceIndex_t *, LocalizeStringIndex_t *); /* linkage=_ZN9CLocalize19FindLongestInstanceEPKcP18ILocalizeTextQueryPiPj */
	virtual LocalizeInstanceIndex_t GetPrimaryInstanceByIndex(class CLocalize *, LocalizeStringIndex_t); /* linkage=_ZN9CLocalize25GetPrimaryInstanceByIndexEj */
	virtual LocalizeInstanceIndex_t GetPrimaryInstanceByToken(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize25GetPrimaryInstanceByTokenEPKc */
	virtual LocalizeInstanceIndex_t GetNextInstanceIndex(class CLocalize *, LocalizeInstanceIndex_t); /* linkage=_ZN9CLocalize20GetNextInstanceIndexEi */
	virtual const char  * GetValueByInstanceIndex(class CLocalize *, LocalizeInstanceIndex_t); /* linkage=_ZN9CLocalize23GetValueByInstanceIndexEi */
	virtual int GetValueVariantByInstanceIndex(class CLocalize *, LocalizeInstanceIndex_t); /* linkage=_ZN9CLocalize30GetValueVariantByInstanceIndexEi */
	virtual const char  * GetNameByIndex(class CLocalize *, LocalizeStringIndex_t); /* linkage=_ZN9CLocalize14GetNameByIndexEj */
	virtual const char  * GetValueByIndex(class CLocalize *, LocalizeStringIndex_t); /* linkage=_ZN9CLocalize15GetValueByIndexEj */
	virtual int GetNumVariantValuesByIndex(class CLocalize *, LocalizeStringIndex_t, uint32); /* linkage=_ZN9CLocalize26GetNumVariantValuesByIndexEjj */
	const char  * GetVariantValueByIndexImpl(class CLocalize *, LocalizeStringIndex_t, int64, float64, int, int, enum ELanguage, uint32); /* linkage=_ZN9CLocalize26GetVariantValueByIndexImplEjxdii9ELanguagej */
	virtual const char  * GetVariantValueByIndex(class CLocalize *, LocalizeStringIndex_t, int, uint32); /* linkage=_ZN9CLocalize22GetVariantValueByIndexEjij */
	virtual const char  * GetPluralGenderValueByIndex(class CLocalize *, LocalizeStringIndex_t, int, enum LOC_GENDER, uint32); /* linkage=_ZN9CLocalize27GetPluralGenderValueByIndexEji10LOC_GENDERj */
	/* <74e7d> localize/localize_imp.cpp:3620 */
	virtual const char  * GetCurrentLanguage(class CLocalize *); /* linkage=_ZN9CLocalize18GetCurrentLanguageEv */
	/* <74f76> localize/localize_imp.cpp:3630 */
	virtual enum ELanguage GetCurrentELanguage(class CLocalize *); /* linkage=_ZN9CLocalize19GetCurrentELanguageEv */
	/* <72f47> localize/localize_imp.cpp:6270 */
	virtual const char  * GetCurrentSubLanguage(class CLocalize *); /* linkage=_ZN9CLocalize21GetCurrentSubLanguageEv */
	virtual void SetCurrentSubLanguage(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize21SetCurrentSubLanguageEPKc */
	virtual const char  * SetCurrentSubLanguageFromSystem(class CLocalize *); /* linkage=_ZN9CLocalize31SetCurrentSubLanguageFromSystemEv */
	virtual int GetLinguisticCaseFlags(class CLocalize *); /* linkage=_ZN9CLocalize22GetLinguisticCaseFlagsEv */
	virtual uint32 GetLocalizeFlags(const class CLocalize  *); /* linkage=_ZNK9CLocalize16GetLocalizeFlagsEv */
	/* <781ef> localize/localize_imp.cpp:6610 */
	virtual void SetLocalizeFlags(class CLocalize *, uint32); /* linkage=_ZN9CLocalize16SetLocalizeFlagsEj */
	/* <78e22> localize/localize_imp.cpp:6765 */
	virtual void CheckForFileChanges(class CLocalize *); /* linkage=_ZN9CLocalize19CheckForFileChangesEv */
	/* <7220d> localize/localize_imp.cpp:3684 */
	virtual LocalizeStringIndex_t GetFirstStringIndex(class CLocalize *); /* linkage=_ZN9CLocalize19GetFirstStringIndexEv */
	/* <72237> localize/localize_imp.cpp:3692 */
	virtual LocalizeStringIndex_t GetNextStringIndex(class CLocalize *, LocalizeStringIndex_t); /* linkage=_ZN9CLocalize18GetNextStringIndexEj */
	LocalizeStringIndex_t AddStringImpl(class CLocalize *, const char  *, const char  *, enum EKeyReplaceStrategy, class StringProperties_t *); /* linkage=_ZN9CLocalize13AddStringImplEPKcS1_19EKeyReplaceStrategyPNS_18StringProperties_tE */
	LocalizeStringIndex_t AddStringImpl(class CLocalize *, const char  *, const uchar16  *, class CUtlSymbol); /* linkage=_ZN9CLocalize13AddStringImplEPKcPKt10CUtlSymbol */
	LocalizeStringIndex_t AddStringImpl(class CLocalize *, const char  *, const uchar32  *, class CUtlSymbol); /* linkage=_ZN9CLocalize13AddStringImplEPKcPKw10CUtlSymbol */
	/* <7912b> localize/localize_imp.cpp:1121 */
	virtual LocalizeStringIndex_t AddString(class CLocalize *, const char  *, const char  *, const char  *); /* linkage=_ZN9CLocalize9AddStringEPKcS1_S1_ */
	virtual void SetValueByIndex(class CLocalize *, LocalizeStringIndex_t, const char  *); /* linkage=_ZN9CLocalize15SetValueByIndexEjPKc */
	virtual bool RemoveStringForLanguage(class CLocalize *, const char  *, enum ELanguage); /* linkage=_ZN9CLocalize23RemoveStringForLanguageEPKc9ELanguage */
	virtual bool SaveToFile(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize10SaveToFileEPKc */
	/* <72302> localize/localize_imp.cpp:4120 */
	virtual int GetLocalizationFileCount(class CLocalize *); /* linkage=_ZN9CLocalize24GetLocalizationFileCountEv */
	/* <72444> localize/localize_imp.cpp:4128 */
	virtual const char  * GetLocalizationFileName(class CLocalize *, int); /* linkage=_ZN9CLocalize23GetLocalizationFileNameEi */
	virtual const char  * GetFileNameByIndex(class CLocalize *, LocalizeStringIndex_t); /* linkage=_ZN9CLocalize18GetFileNameByIndexEj */
	virtual void ReloadLocalizationFiles(class CLocalize *, uint32, const class CUtlVector<int, CUtlMemory<int, int> >  *); /* linkage=_ZN9CLocalize23ReloadLocalizationFilesEjPK10CUtlVectorIi10CUtlMemoryIiiEE */
	virtual void ConstructString(class CLocalize *, char *, int, const char  *, int, ...); /* linkage=_ZN9CLocalize15ConstructStringEPciPKciz */
	virtual const char  * ConstructString(class CLocalize *, class CBufferString *, const char  *, int, ...); /* linkage=_ZN9CLocalize15ConstructStringEP13CBufferStringPKciz */
	virtual const char  * AppendConstructString(class CLocalize *, class CBufferString *, const char  *, int, ...); /* linkage=_ZN9CLocalize21AppendConstructStringEP13CBufferStringPKciz */
	virtual const char  * AppendOrConstructString(class CLocalize *, bool, class CBufferString *, const char  *, int, ...); /* linkage=_ZN9CLocalize23AppendOrConstructStringEbP13CBufferStringPKciz */
	virtual const char  * ConstructStringVArgs(class CLocalize *, class CBufferString *, const char  *, int, class typedef __va_list_tag __va_list_tag *, bool); /* linkage=_ZN9CLocalize20ConstructStringVArgsEP13CBufferStringPKciP13__va_list_tagb */
	/* <74445> localize/localize_imp.cpp:4166 */
	virtual const char  * ConstructStringArgArray(class CLocalize *, class CBufferString *, const char  *, int, const char  * const *, bool); /* linkage=_ZN9CLocalize23ConstructStringArgArrayEP13CBufferStringPKciPKS3_b */
	virtual const char  * ConstructString(class CLocalize *, class CBufferString *, const char  *, class KeyValues *, bool); /* linkage=_ZN9CLocalize15ConstructStringEP13CBufferStringPKcP9KeyValuesb */
	/* <744ea> localize/localize_imp.cpp:4231 */
	virtual const char  * ConstructString(class CLocalize *, class CBufferString *, LocalizeStringIndex_t, class KeyValues *, bool); /* linkage=_ZN9CLocalize15ConstructStringEP13CBufferStringjP9KeyValuesb */
	/* <7584e> localize/localize_imp.cpp:4256 */
	virtual const char  * ConstructStringToken(class CLocalize *, class CBufferString *, const char  *, class KeyValues *, bool); /* linkage=_ZN9CLocalize20ConstructStringTokenEP13CBufferStringPKcP9KeyValuesb */
	virtual const char  * ConstructDateString(class CLocalize *, class CBufferString *, enum LOC_DATE_FORMAT, class tm *, bool); /* linkage=_ZN9CLocalize19ConstructDateStringEP13CBufferString15LOC_DATE_FORMATP2tmb */
	/* <77057> localize/localize_imp.cpp:4550 */
	virtual const char  * ConstructDateString(class CLocalize *, class CBufferString *, enum LOC_DATE_FORMAT, uint64, bool); /* linkage=_ZN9CLocalize19ConstructDateStringEP13CBufferString15LOC_DATE_FORMATyb */
	virtual const char  * ConstructRelativeDateString(class CLocalize *, class CBufferString *, enum LOC_DATE_FORMAT, uint64, bool); /* linkage=_ZN9CLocalize27ConstructRelativeDateStringEP13CBufferString15LOC_DATE_FORMATyb */
	virtual const char  * ConstructRelativeTimeString(class CLocalize *, class CBufferString *, enum LOC_DATE_FORMAT, enum LOC_DATE_FORMAT, uint64, bool); /* linkage=_ZN9CLocalize27ConstructRelativeTimeStringEP13CBufferString15LOC_DATE_FORMATS2_yb */
	virtual const char  * ConstructDurationString(class CLocalize *, class CBufferString *, enum LOC_DURATION_FORMAT, int, bool); /* linkage=_ZN9CLocalize23ConstructDurationStringEP13CBufferString19LOC_DURATION_FORMATib */
	virtual const char  * ConstructNumberString(class CLocalize *, class CBufferString *, enum LOC_NUMBER_FORMAT, uint64, bool); /* linkage=_ZN9CLocalize21ConstructNumberStringEP13CBufferString17LOC_NUMBER_FORMATyb */
	virtual const char  * ConstructNumberString(class CLocalize *, class CBufferString *, enum LOC_NUMBER_FORMAT, float64, int, bool); /* linkage=_ZN9CLocalize21ConstructNumberStringEP13CBufferString17LOC_NUMBER_FORMATdib */
	/* <77a6b> localize/localize_imp.cpp:5193 */
	virtual const char  * ConstructOrdinalString(class CLocalize *, class CBufferString *, enum LOC_ORDINAL_FORMAT, uint32, bool); /* linkage=_ZN9CLocalize22ConstructOrdinalStringEP13CBufferString18LOC_ORDINAL_FORMATjb */
	virtual int GetPluralVariant(const class CLocalize  *, int64); /* linkage=_ZNK9CLocalize16GetPluralVariantEx */
	virtual int GetPluralVariant(const class CLocalize  *, float64, int); /* linkage=_ZNK9CLocalize16GetPluralVariantEdi */
	virtual int GetNumPluralVariants(const class CLocalize  *); /* linkage=_ZNK9CLocalize20GetNumPluralVariantsEv */
	const char  * FindPluralImpl(class CLocalize *, const char  *, int64, float64, int, enum LOC_RESOLVED_INFO_TYPE); /* linkage=_ZN9CLocalize14FindPluralImplEPKcxdi22LOC_RESOLVED_INFO_TYPE */
	/* <75f91> localize/localize_imp.cpp:1170 */
	virtual const char  * FindPluralUnsafe(class CLocalize *, const char  *, int64); /* linkage=_ZN9CLocalize16FindPluralUnsafeEPKcx */
	virtual const char  * FindPluralSafe(class CLocalize *, const char  *, int64); /* linkage=_ZN9CLocalize14FindPluralSafeEPKcx */
	/* <75efc> localize/localize_imp.cpp:1178 */
	virtual const char  * FindPluralUnsafe(class CLocalize *, const char  *, float64, int); /* linkage=_ZN9CLocalize16FindPluralUnsafeEPKcdi */
	virtual const char  * FindPluralSafe(class CLocalize *, const char  *, float64, int); /* linkage=_ZN9CLocalize14FindPluralSafeEPKcdi */
	virtual int GetNumGenderVariants(const class CLocalize  *); /* linkage=_ZNK9CLocalize20GetNumGenderVariantsEv */
	virtual int GetNumPluralGenderVariants(const class CLocalize  *); /* linkage=_ZNK9CLocalize26GetNumPluralGenderVariantsEv */
	const char  * FindPluralCompatibleImpl(class CLocalize *, const char  *, const char  *, int64, float64, int, enum LOC_RESOLVED_INFO_TYPE); /* linkage=_ZN9CLocalize24FindPluralCompatibleImplEPKcS1_xdi22LOC_RESOLVED_INFO_TYPE */
	/* <76017> localize/localize_imp.cpp:1198 */
	virtual const char  * FindCompatibleUnsafe(class CLocalize *, const char  *, const char  *); /* linkage=_ZN9CLocalize20FindCompatibleUnsafeEPKcS1_ */
	virtual const char  * FindCompatibleSafe(class CLocalize *, const char  *, const char  *); /* linkage=_ZN9CLocalize18FindCompatibleSafeEPKcS1_ */
	/* <7614b> localize/localize_imp.cpp:1206 */
	virtual const char  * FindPluralCompatibleUnsafe(class CLocalize *, const char  *, const char  *, int64); /* linkage=_ZN9CLocalize26FindPluralCompatibleUnsafeEPKcS1_x */
	virtual const char  * FindPluralCompatibleSafe(class CLocalize *, const char  *, const char  *, int64); /* linkage=_ZN9CLocalize24FindPluralCompatibleSafeEPKcS1_x */
	/* <760a2> localize/localize_imp.cpp:1214 */
	virtual const char  * FindPluralCompatibleUnsafe(class CLocalize *, const char  *, const char  *, float64, int); /* linkage=_ZN9CLocalize26FindPluralCompatibleUnsafeEPKcS1_di */
	virtual const char  * FindPluralCompatibleSafe(class CLocalize *, const char  *, const char  *, float64, int); /* linkage=_ZN9CLocalize24FindPluralCompatibleSafeEPKcS1_di */
	virtual bool ResolveToken(class CLocalize *, const char  *, class LocResolvedInfo_t *); /* linkage=_ZN9CLocalize12ResolveTokenEPKcP17LocResolvedInfo_t */
	/* <761e5> localize/localize_imp.cpp:5943 */
	bool ResolvePluralImpl(class CLocalize *, const char  *, int64, float64, int, enum LOC_RESOLVED_INFO_TYPE, class LocResolvedInfo_t *); /* linkage=_ZN9CLocalize17ResolvePluralImplEPKcxdi22LOC_RESOLVED_INFO_TYPEP17LocResolvedInfo_t */
	virtual bool ResolvePlural(class CLocalize *, const char  *, int64, class LocResolvedInfo_t *); /* linkage=_ZN9CLocalize13ResolvePluralEPKcxP17LocResolvedInfo_t */
	virtual bool ResolvePlural(class CLocalize *, const char  *, float64, int, class LocResolvedInfo_t *); /* linkage=_ZN9CLocalize13ResolvePluralEPKcdiP17LocResolvedInfo_t */
	bool ResolvePluralCompatibleImpl(class CLocalize *, const char  *, const char  *, int64, float64, int, enum LOC_RESOLVED_INFO_TYPE, class LocResolvedInfo_t *); /* linkage=_ZN9CLocalize27ResolvePluralCompatibleImplEPKcS1_xdi22LOC_RESOLVED_INFO_TYPEP17LocResolvedInfo_t */
	virtual bool ResolveCompatible(class CLocalize *, const char  *, const char  *, class LocResolvedInfo_t *); /* linkage=_ZN9CLocalize17ResolveCompatibleEPKcS1_P17LocResolvedInfo_t */
	virtual bool ResolvePluralCompatible(class CLocalize *, const char  *, const char  *, int64, class LocResolvedInfo_t *); /* linkage=_ZN9CLocalize23ResolvePluralCompatibleEPKcS1_xP17LocResolvedInfo_t */
	virtual bool ResolvePluralCompatible(class CLocalize *, const char  *, const char  *, float64, int, class LocResolvedInfo_t *); /* linkage=_ZN9CLocalize23ResolvePluralCompatibleEPKcS1_diP17LocResolvedInfo_t */
	const char  * GetResolvedPluralCompatibleValueImpl(class CLocalize *, const class LocResolvedInfo_t  *); /* linkage=_ZN9CLocalize36GetResolvedPluralCompatibleValueImplEPK17LocResolvedInfo_t */
	const char  * GetResolvedValueImpl(class CLocalize *, const class LocResolvedInfo_t  *); /* linkage=_ZN9CLocalize20GetResolvedValueImplEPK17LocResolvedInfo_t */
	virtual const char  * GetResolvedValue(class CLocalize *, const class LocResolvedInfo_t  *); /* linkage=_ZN9CLocalize16GetResolvedValueEPK17LocResolvedInfo_t */
	/* <728c5> localize/localize_imp.cpp:1729 */
	virtual void InstallChangeCallback(class CLocalize *, class ILocalizationChangeCallback *, uint32); /* linkage=_ZN9CLocalize21InstallChangeCallbackEP27ILocalizationChangeCallbackj */
	virtual void RemoveChangeCallback(class CLocalize *, class ILocalizationChangeCallback *); /* linkage=_ZN9CLocalize20RemoveChangeCallbackEP27ILocalizationChangeCallback */
	virtual void ReloadLocalizationFilesInLanguage(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize33ReloadLocalizationFilesInLanguageEPKc */
	bool ReadLocalizationBufferImpl(class CLocalize *, const char  *, const char  *, void *, int, enum EKeyReplaceStrategy, bool); /* linkage=_ZN9CLocalize26ReadLocalizationBufferImplEPKcS1_Pvi19EKeyReplaceStrategyb */
	virtual bool ReadLocalizationBuffer(class CLocalize *, const char  *, void *, int, const char  *); /* linkage=_ZN9CLocalize22ReadLocalizationBufferEPKcPviS1_ */
	bool AddLocalizationKeyValuesImpl(class CLocalize *, const char  *, const char  *, class KeyValues *, enum EKeyReplaceStrategy); /* linkage=_ZN9CLocalize28AddLocalizationKeyValuesImplEPKcS1_P9KeyValues19EKeyReplaceStrategy */
	virtual bool AddLocalizationKeyValues(class CLocalize *, const char  *, class KeyValues *, const char  *); /* linkage=_ZN9CLocalize24AddLocalizationKeyValuesEPKcP9KeyValuesS1_ */
	bool AddLocalizationKeyValuesImpl(class CLocalize *, const char  *, const char  *, class KeyValues3 *, enum EKeyReplaceStrategy); /* linkage=_ZN9CLocalize28AddLocalizationKeyValuesImplEPKcS1_P10KeyValues319EKeyReplaceStrategy */
	virtual bool AddLocalizationKeyValues(class CLocalize *, const char  *, class KeyValues3 *, const char  *); /* linkage=_ZN9CLocalize24AddLocalizationKeyValuesEPKcP10KeyValues3S1_ */
	virtual void LocalizedMessageBox(class CLocalize *, const char  *, const char  *); /* linkage=_ZN9CLocalize19LocalizedMessageBoxEPKcS1_ */
	virtual class ILocalize * GetFallbackImpl(const class CLocalize  *); /* linkage=_ZNK9CLocalize15GetFallbackImplEv */
	virtual void SetFallbackImpl(class CLocalize *, class ILocalize *); /* linkage=_ZN9CLocalize15SetFallbackImplEP9ILocalize */
	virtual bool GetTrackingMode(const class CLocalize  *); /* linkage=_ZNK9CLocalize15GetTrackingModeEv */
	virtual void SetTrackingMode(class CLocalize *, bool); /* linkage=_ZN9CLocalize15SetTrackingModeEb */
	/* <72ca6> localize/localize_imp.cpp:6159 */
	virtual bool DoKoreanJongSungRuleInPlace(class CLocalize *, char *, int); /* linkage=_ZN9CLocalize27DoKoreanJongSungRuleInPlaceEPci */
	virtual void GetStatsString(class CLocalize *, class CBufferString *); /* linkage=_ZN9CLocalize14GetStatsStringEP13CBufferString */
	void CLocalize(class CLocalize *); /* linkage=_ZN9CLocalizeC4Ev */
	virtual void ~CLocalize(class CLocalize *); /* linkage=_ZN9CLocalizeD4Ev */
	void SetFileSystem(class CLocalize *, class IFileSystem *); /* linkage=_ZN9CLocalize13SetFileSystemEP11IFileSystem */
	void SetCurrentLanguage(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize18SetCurrentLanguageEPKc */
	bool LocalizationFileIsLoaded(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize24LocalizationFileIsLoadedEPKc */
	void DumpLocalizationFiles(class CLocalize *); /* linkage=_ZN9CLocalize21DumpLocalizationFilesEv */
	void AppendDurationUnit(class CLocalize *, class CBufferString *, int, const char  *, const char  *); /* linkage=_ZN9CLocalize18AppendDurationUnitEP13CBufferStringiPKcS3_ */
	/* <790a3> localize/localize_imp.cpp:6197 */
	void CheckLoadDefaultFiles(class CLocalize *); /* linkage=_ZN9CLocalize21CheckLoadDefaultFilesEv */
	void SpewStats(class CLocalize *); /* linkage=_ZN9CLocalize9SpewStatsEv */
	/* <76331> localize/localize_imp.cpp:6850 */
	void SpewTokensUsed(class CLocalize *); /* linkage=_ZN9CLocalize14SpewTokensUsedEv */
	bool ReadLocalizationFileImpl(class CLocalize *, const char  *, const char  *, const char  *, enum EKeyReplaceStrategy, bool); /* linkage=_ZN9CLocalize24ReadLocalizationFileImplEPKcS1_S1_19EKeyReplaceStrategyb */
	bool AddAllLanguageFiles(class CLocalize *, const char  *, const char  *, int); /* linkage=_ZN9CLocalize19AddAllLanguageFilesEPKcS1_i */
	void BuildDupValueLookup(class CLocalize *); /* linkage=_ZN9CLocalize19BuildDupValueLookupEv */
	/* <7507c> localize/localize_imp.cpp:3676 */
	void DiscardDupValueLookup(class CLocalize *); /* linkage=_ZN9CLocalize21DiscardDupValueLookupEv */
	int FindExistingValueIndex(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize22FindExistingValueIndexEPKc */
	/* <754ba> localize/localize_imp.cpp:6622 */
	void StartChange(class CLocalize *); /* linkage=_ZN9CLocalize11StartChangeEv */
	void AddChange(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize9AddChangeEPKc */
	/* <754f7> localize/localize_imp.cpp:6659 */
	void EndChange(class CLocalize *); /* linkage=_ZN9CLocalize9EndChangeEv */
	void AddFileWatch(class CLocalize *, const char  *, const char  *); /* linkage=_ZN9CLocalize12AddFileWatchEPKcS1_ */
	/* <77c42> localize/localize_imp.cpp:6720 */
	void EnableFileWatch(class CLocalize *, bool); /* linkage=_ZN9CLocalize15EnableFileWatchEb */
	void HandleFileChange(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize16HandleFileChangeEPKc */
	void AddTokenHit(class CLocalize *, class CUtlSymbol, const char  *); /* linkage=_ZN9CLocalize11AddTokenHitE10CUtlSymbolPKc */
	/* <75b6d> localize/localize_imp.cpp:6808 */
	void AddTokenMiss(class CLocalize *, const char  *, const char  *); /* linkage=_ZN9CLocalize12AddTokenMissEPKcS1_ */
	const char  * GetPrimaryStringData(class CLocalize *, LocalizeInstanceIndex_t); /* linkage=_ZN9CLocalize20GetPrimaryStringDataEi */
	/* <753d8> localize/localize_imp.cpp:5253 */
	bool MapGenderToRawGender(class CLocalize *, enum LOC_GENDER, uint8 *); /* linkage=_ZN9CLocalize20MapGenderToRawGenderE10LOC_GENDERPh */
	uint32 ParseTokenNameFlags(class CLocalize *, const char  *); /* linkage=_ZN9CLocalize19ParseTokenNameFlagsEPKc */
	bool AssertTokenNameFlagsForUsage(class CLocalize *, const char  *, uint32, uint32); /* linkage=_ZN9CLocalize28AssertTokenNameFlagsForUsageEPKcjj */
	/* <7544e> localize/localize_imp.cpp:5355 */
	uint8 ComputeNumPluralVariants(enum ELanguage); /* linkage=_ZN9CLocalize24ComputeNumPluralVariantsE9ELanguage */
	int GetPluralVariantImpl(enum ELanguage, int64); /* linkage=_ZN9CLocalize20GetPluralVariantImplE9ELanguagex */
	int GetPluralVariantImpl(enum ELanguage, float64, int); /* linkage=_ZN9CLocalize20GetPluralVariantImplE9ELanguagedi */
	/* <7547e> localize/localize_imp.cpp:5844 */
	uint8 ComputeNumGenders(enum ELanguage, GenderMap_t *); /* linkage=_ZN9CLocalize17ComputeNumGendersE9ELanguagePPKh */
	/* <7481f> localize/localize_imp.cpp:2759 */
	const char  * ParseVariantFlags(class CLocalize *, const char  *, class StringProperties_t *); /* linkage=_ZN9CLocalize17ParseVariantFlagsEPKcPNS_18StringProperties_tE */
	void SetStringValueImpl(class CLocalize *, class LocalizedString_t *, const char  *, class StringProperties_t *); /* linkage=_ZN9CLocalize18SetStringValueImplEPNS_17LocalizedString_tEPKcPNS_18StringProperties_tE */
	bool AddStringValueImpl(class CLocalize *, LocalizeInstanceIndex_t, const char  *, const char  *, class StringProperties_t *); /* linkage=_ZN9CLocalize18AddStringValueImplEiPKcS1_PNS_18StringProperties_tE */
	/* <7528e> localize/localize_imp.cpp:3752 */
	bool SkipVariantInstance(class CLocalize *, const class LocalizedString_t  *, uint32, enum ELanguage); /* linkage=_ZN9CLocalize19SkipVariantInstanceEPKNS_17LocalizedString_tEj9ELanguage */
};

// <0006F33D> localize/localize_imp.cpp:1081
inline void StringProperties_t::StringProperties_t()
{
} /* size: 0 */

// <0006F308> localize/localize_imp.cpp:1092
void StringProperties_t::StringProperties_t(CUtlSymbol symFileName, CUtlSymbol symLanguage, ELanguage eLanguage, uint8 nLangPluralVariants, uint8 nLangGenders, GenderMap_t pGenderMap)
{
} /* size: 0 */

// <0006F2A1> localize/localize_imp.cpp:1092
inline void StringProperties_t::StringProperties_t(CUtlSymbol symFileName, CUtlSymbol symLanguage, ELanguage eLanguage, uint8 nLangPluralVariants, uint8 nLangGenders, GenderMap_t pGenderMap)
{
} /* size: 0 */

// <0006F288> localize/localize_imp.cpp:1106
inline void StringProperties_t::CheckForCoreValve()
{
} /* size: 0 */

// <0007912B> localize/localize_imp.cpp:1121
// variables: 2
// function calls: 12
void CLocalize::AddString(const char* pToken, const char* unicodeString, const char* fileName)
{
	StringProperties_t props; // 1124
	LocalizeStringIndex_t nTokenIndex; // 1125
	CLocalize::StartChange(); // 1123
	CUtlSymbol::CUtlSymbol(); // 1093
	CUtlSymbol::CUtlSymbol(); // 1093
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1094
	CUtlSymbol::IsValid(); // 1095
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 1112
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 1113
	StringProperties_t::CheckForCoreValve(); // 1096
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1097
	StringProperties_t::StringProperties_t(
				CUtlSymbol symFileName,
				CUtlSymbol symLanguage,
				ELanguage eLanguage,
				uint8 nLangPluralVariants,
				uint8 nLangGenders,
				GenderMap_t pGenderMap);  // 1124
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 1124
	{
	}
	CLocalize::AddString(
			const char* pToken,
			const char* unicodeString,
			const char* fileName);  // 1121
} /* size: 458, variables: 2, inline expansions: 12 (445 bytes) */

// <0006F205> localize/localize_imp.cpp:1121
// variables: 4
inline void CLocalize::AddString(const char* pToken, const char* unicodeString, const char* fileName)
{
	StringProperties_t props; // 1124
	LocalizeStringIndex_t nTokenIndex; // 1125
	const char   __FUNCTION__; // 40671
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1127
	}
} /* size: 0, variables: 3 */

// <0006F1A6> localize/localize_imp.cpp:1156
void CLocalize::GetPluralVariant(int64 nQuantity)
{
} /* size: 12 */

// <0006F129> localize/localize_imp.cpp:1160
void CLocalize::GetPluralVariant(float64 flQuantity, int nPrecision)
{
} /* size: 12 */

// <0006F0FB> localize/localize_imp.cpp:1164
void CLocalize::GetNumPluralVariants()
{
} /* size: 12 */

// <00075F91> localize/localize_imp.cpp:1170
void CLocalize::FindPluralUnsafe(const char* pToken, int64 nQuantity)
{
} /* size: 21 */

// <0006F0C8> localize/localize_imp.cpp:1170
inline void CLocalize::FindPluralUnsafe(const char* pToken, int64 nQuantity)
{
} /* size: 0 */

// <0006EFEC> localize/localize_imp.cpp:1174
// function call: 1
void CLocalize::FindPluralSafe(const char* pToken, int64 nQuantity)
{
	MakeSafeReturn(const char* pToken,
			const char* pValue);  // 1176
} /* size: 58, inline expansions: 1 (19 bytes) */

// <00075EFC> localize/localize_imp.cpp:1178
void CLocalize::FindPluralUnsafe(const char* pToken, float64 flQuantity, int nPrecision)
{
} /* size: 22 */

// <0006EFAC> localize/localize_imp.cpp:1178
inline void CLocalize::FindPluralUnsafe(const char* pToken, float64 flQuantity, int nPrecision)
{
} /* size: 0 */

// <0006EEB9> localize/localize_imp.cpp:1182
// function call: 1
void CLocalize::FindPluralSafe(const char* pToken, float64 flQuantity, int nPrecision)
{
	MakeSafeReturn(const char* pToken,
			const char* pValue);  // 1184
} /* size: 59, inline expansions: 1 (19 bytes) */

// <0006EE8B> localize/localize_imp.cpp:1187
void CLocalize::GetNumGenderVariants()
{
} /* size: 12 */

// <0006EE5D> localize/localize_imp.cpp:1191
void CLocalize::GetNumPluralGenderVariants()
{
} /* size: 22 */

// <00076017> localize/localize_imp.cpp:1198
void CLocalize::FindCompatibleUnsafe(const char* pToken, const char* pCompatWithToken)
{
} /* size: 24 */

// <0006EE2A> localize/localize_imp.cpp:1198
inline void CLocalize::FindCompatibleUnsafe(const char* pToken, const char* pCompatWithToken)
{
} /* size: 0 */

// <0006ED49> localize/localize_imp.cpp:1202
// function call: 1
void CLocalize::FindCompatibleSafe(const char* pToken, const char* pCompatWithToken)
{
	MakeSafeReturn(const char* pToken,
			const char* pValue);  // 1204
} /* size: 61, inline expansions: 1 (19 bytes) */

// <0007614B> localize/localize_imp.cpp:1206
void CLocalize::FindPluralCompatibleUnsafe(const char* pToken, const char* pCompatWithToken, int64 nQuantity)
{
} /* size: 22 */

// <0006ED09> localize/localize_imp.cpp:1206
inline void CLocalize::FindPluralCompatibleUnsafe(const char* pToken, const char* pCompatWithToken, int64 nQuantity)
{
} /* size: 0 */

// <0006EC11> localize/localize_imp.cpp:1210
// function call: 1
void CLocalize::FindPluralCompatibleSafe(const char* pToken, const char* pCompatWithToken, int64 nQuantity)
{
	MakeSafeReturn(const char* pToken,
			const char* pValue);  // 1212
} /* size: 59, inline expansions: 1 (19 bytes) */

// <000760A2> localize/localize_imp.cpp:1214
void CLocalize::FindPluralCompatibleUnsafe(const char* pToken, const char* pCompatWithToken, float64 flQuantity, int nPrecision)
{
} /* size: 23 */

// <0006EBC4> localize/localize_imp.cpp:1214
inline void CLocalize::FindPluralCompatibleUnsafe(const char* pToken, const char* pCompatWithToken, float64 flQuantity, int nPrecision)
{
} /* size: 0 */

// <0006EAB5> localize/localize_imp.cpp:1218
// function call: 1
void CLocalize::FindPluralCompatibleSafe(const char* pToken, const char* pCompatWithToken, float64 flQuantity, int nPrecision)
{
	MakeSafeReturn(const char* pToken,
			const char* pValue);  // 1220
} /* size: 60, inline expansions: 1 (19 bytes) */

// <0006E900> localize/localize_imp.cpp:1225
// function calls: 3
void CLocalize::ResolvePlural(const char* pToken, int64 nQuantity, LocResolvedInfo_t* pInfo)
{
	ClearResolvedInfo(LocResolvedInfo_t* pInfo); // 5945
	V_isempty(const char* pszString); // 5947
	CLocalize::ResolvePluralImpl(
				const char* pToken,
				int64 nQuantity,
				float64 flQuantity,
				int nPrecision,
				LOC_RESOLVED_INFO_TYPE eResolved,
				LocResolvedInfo_t* pInfo);  // 1227
} /* size: 228, inline expansions: 3 (190 bytes) */

// <0006E736> localize/localize_imp.cpp:1229
// function calls: 3
void CLocalize::ResolvePlural(const char* pToken, float64 flQuantity, int nPrecision, LocResolvedInfo_t* pInfo)
{
	ClearResolvedInfo(LocResolvedInfo_t* pInfo); // 5945
	V_isempty(const char* pszString); // 5947
	CLocalize::ResolvePluralImpl(
				const char* pToken,
				int64 nQuantity,
				float64 flQuantity,
				int nPrecision,
				LOC_RESOLVED_INFO_TYPE eResolved,
				LocResolvedInfo_t* pInfo);  // 1231
} /* size: 212, inline expansions: 3 (174 bytes) */

// <0006E681> localize/localize_imp.cpp:1234
void CLocalize::ResolveCompatible(const char* pToken, const char* pCompatWithToken, LocResolvedInfo_t* pInfo)
{
} /* size: 35 */

// <0006E5B5> localize/localize_imp.cpp:1238
void CLocalize::ResolvePluralCompatible(const char* pToken, const char* pCompatWithToken, int64 nQuantity, LocResolvedInfo_t* pInfo)
{
} /* size: 34 */

// <0006E4D2> localize/localize_imp.cpp:1242
void CLocalize::ResolvePluralCompatible(const char* pToken, const char* pCompatWithToken, float64 flQuantity, int nPrecision, LocResolvedInfo_t* pInfo)
{
} /* size: 37 */

// <0006E46C> localize/localize_imp.cpp:1249
void CLocalize::GetResolvedValue(const LocResolvedInfo_t* pInfo)
{
} /* size: 9 */

// <0006E367> localize/localize_imp.cpp:1258
// variable: 1
// function call: 1
void CLocalize::ReadLocalizationBuffer(const char* pFromFile, void* memBlock, int fileSize, const char* pForLanguage)
{
	bool bSucc; // 1261
	CLocalize::StartChange(); // 1260
} /* size: 133, variables: 1, inline expansions: 1 (42 bytes) */

// <0006E277> localize/localize_imp.cpp:1266
// variable: 1
// function call: 1
void CLocalize::AddLocalizationKeyValues(const char* pFromFile, KeyValues* pRoot, const char* pForLanguage)
{
	bool bSucc; // 1269
	CLocalize::StartChange(); // 1268
} /* size: 111, variables: 1, inline expansions: 1 (39 bytes) */

// <0006E187> localize/localize_imp.cpp:1275
// variable: 1
// function call: 1
void CLocalize::AddLocalizationKeyValues(const char* pFromFile, KeyValues3* pRoot, const char* pForLanguage)
{
	bool bSucc; // 1278
	CLocalize::StartChange(); // 1277
} /* size: 111, variables: 1, inline expansions: 1 (39 bytes) */

// <0006E161> localize/localize_imp.cpp:1298
inline void CLocalize::SetFileSystem(IFileSystem* pFileSystem)
{
} /* size: 0 */

// <00060AFC> localize/localize_imp.cpp:1375
void LocalizedString_t::LocalizedString_t(const LocalizedString_t &)
{
} /* size: 0 */

// <00060ADA> localize/localize_imp.cpp:1375
inline void LocalizedString_t::LocalizedString_t(const LocalizedString_t &)
{
} /* size: 0 */

// <00047C01> localize/localize_imp.cpp:1375
void LocalizedString_t::LocalizedString_t()
{
} /* size: 0 */

// <00047BE4> localize/localize_imp.cpp:1375
inline void LocalizedString_t::LocalizedString_t()
{
} /* size: 0 */

// <0006E148> localize/localize_imp.cpp:1405
inline void LocalizedString_t::HasNoVariants()
{
} /* size: 0 */

// <0006E12F> localize/localize_imp.cpp:1409
inline void LocalizedString_t::HasAllVariants()
{
} /* size: 0 */

// <0006E116> localize/localize_imp.cpp:1413
inline void LocalizedString_t::IsVariantSubString()
{
} /* size: 0 */

// <0006E0FD> localize/localize_imp.cpp:1417
inline void LocalizedString_t::GetRawVariantIndex()
{
} /* size: 0 */

// <0006E0E4> localize/localize_imp.cpp:1422
inline void LocalizedString_t::IsValidForPlural()
{
} /* size: 0 */

// <0006E0CB> localize/localize_imp.cpp:1426
inline void LocalizedString_t::IsValidForGender()
{
} /* size: 0 */

// <0006E0B2> localize/localize_imp.cpp:1430
inline void LocalizedString_t::HasGender()
{
} /* size: 0 */

// <0006E099> localize/localize_imp.cpp:1438
inline void LocalizedString_t::GetLanguage()
{
} /* size: 0 */

// <0006D5D6> localize/localize_imp.cpp:1465
void StringData_t::~StringData_t()
{
} /* size: 0 */

// <0006D5B9> localize/localize_imp.cpp:1465
inline void StringData_t::~StringData_t()
{
} /* size: 0 */

// <0006E082> localize/localize_imp.cpp:1471
void StringData_t::StringData_t()
{
} /* size: 0 */

// <0006E069> localize/localize_imp.cpp:1471
inline void StringData_t::StringData_t()
{
} /* size: 0 */

// <0006E043> localize/localize_imp.cpp:1478
inline void StringData_t::operator[](int nIndex)
{
} /* size: 0 */

// <0006E01D> localize/localize_imp.cpp:1489
inline void StringData_t::GetAllocMark(AllocMark_t* pMark)
{
} /* size: 0 */

// <0006D8FD> localize/localize_imp.cpp:1495
// variables: 5
// function calls: 25
void StringData_t::Add(const char* pStr)
{
	int nStrChars; // 1497
	const char   __FUNCTION__; // 40519
	int nIndex; // 1502
	char* pData; // 1509
	{
		int* _pCrash; // 1500
	}
	CUtlBlockMemory<char, int>::NumElementsInBlock(); // 79
	CUtlBlockMemory<char, int>::BlockSize(); // 1498
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1500
	V_strlen(const char* str); // 1497
	CUtlBlockMemory<char, int>::NumElementsInBlock(); // 227
	CUtlBlockMemory<char, int>::NumAllocated(); // 78
	CUtlBlockMemory<char, int>::Count(); // 326
	{
	}
	CUtlBlockMemory<char, int>::NumElementsInBlock(); // 333
	{
	}
	CUtlBlockMemory<char, int>::MajorIndex(
			int i);  // 335
	CUtlBlockMemory<char, int>::MajorIndex(
			int i);  // 336
	CUtlBlockMemory<char, int>::NumElementsInBlock(); // 227
	CUtlBlockMemory<char, int>::NumAllocated(); // 78
	CUtlBlockMemory<char, int>::Count(); // 344
	CUtlBlockMemory<char, int>::Grow(
		int num);  // 247
	CUtlBlockMemory<char, int>::Grow(
		int num);  // 345
	CUtlBlockMemory<char, int>::EnsureContiguousCapacity(
				int start,
				int num);  // 1502
	CUtlBlockMemory<char, int>::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<char, int>::IsIdxValid(
			int i);  // 191
	CUtlBlockMemory<char, int>::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<char, int>::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<char, int>::operator[](
			int i);  // 1509
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1510
	CUtlBlockMemory<char, int>::NumElementsInBlock(); // 79
	CUtlBlockMemory<char, int>::BlockSize(); // 1507
} /* size: 638, variables: 4, inline expansions: 25 (665 bytes) */

// <0006D8CA> localize/localize_imp.cpp:1516
// variable: 1
inline void StringData_t::AddGetPtr(const char* pStr)
{
	int nIndex; // 1518
} /* size: 0, variables: 1 */

// <0006D8A4> localize/localize_imp.cpp:1522
inline void StringData_t::RevertToMark(AllocMark_t* pMark)
{
} /* size: 0 */

// <0006D87E> localize/localize_imp.cpp:1528
inline void StringData_t::Swap(StringData_t& other)
{
} /* size: 0 */

// <0006D865> localize/localize_imp.cpp:1535
inline void StringData_t::Purge()
{
} /* size: 0 */

// <0006D84C> localize/localize_imp.cpp:1542
inline void StringData_t::AllocSize()
{
} /* size: 0 */

// <0004949F> localize/localize_imp.cpp:1549
void LocalizationFileInfo_t::LocalizationFileInfo_t(const LocalizationFileInfo_t &)
{
} /* size: 0 */

// <0004947D> localize/localize_imp.cpp:1549
inline void LocalizationFileInfo_t::LocalizationFileInfo_t(const LocalizationFileInfo_t &)
{
} /* size: 0 */

// <0006D835> localize/localize_imp.cpp:1551
void LocalizationFileInfo_t::LocalizationFileInfo_t()
{
} /* size: 0 */

// <0006D81C> localize/localize_imp.cpp:1551
inline void LocalizationFileInfo_t::LocalizationFileInfo_t()
{
} /* size: 0 */

// <0006D805> localize/localize_imp.cpp:1555
void LocalizationFileInfo_t::~LocalizationFileInfo_t()
{
} /* size: 0 */

// <0006D7EC> localize/localize_imp.cpp:1555
inline void LocalizationFileInfo_t::~LocalizationFileInfo_t()
{
} /* size: 0 */

// <0006D7D3> localize/localize_imp.cpp:1569
inline void LocalizationFileInfo_t::GetPathID()
{
} /* size: 0 */

// <0004E3F5> localize/localize_imp.cpp:1580
void FileChangeDir_t::FileChangeDir_t()
{
} /* size: 0 */

// <0004E3D8> localize/localize_imp.cpp:1580
inline void FileChangeDir_t::FileChangeDir_t()
{
} /* size: 0 */

// <0004E3C1> localize/localize_imp.cpp:1580
void FileChangeDir_t::~FileChangeDir_t()
{
} /* size: 0 */

// <0004E3A4> localize/localize_imp.cpp:1580
inline void FileChangeDir_t::~FileChangeDir_t()
{
} /* size: 0 */

// <0006D7B1> localize/localize_imp.cpp:1610
void* __CreateCLocalizeILocalize_interface(void)
{
} /* size: 12 */

// <0006C4B9> localize/localize_imp.cpp:1616
// variables: 8
// function calls: 76
void CLocalize::CLocalize()
{
	{
		{
			int i; // 1643
			{
				GenderMap_t pMap; // 1645
				uint8 nGenders; // 1646
				{
					int j; // 1647
				}
				{
				}
			}
		}
	}
	{
		IAppSystem::IAppSystem(); // 246
		ILocalize::ILocalize(); // 120
		CBaseAppSystem<ILocalize>::CBaseAppSystem(); // 171
		CTier0AppSystem<ILocalize, 0>::CTier0AppSystem(); // 225
		CTier1AppSystem<ILocalize, 0>::CTier1AppSystem(); // 48
		CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
		CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
		CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
		CTier2AppSystem<ILocalize, 0>::CTier2AppSystem(); // 1619
		CUtlMemory<CUtlHashMap<char const::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashMap<char const::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CUtlHashMap<char const::ResetDbgInfo(); // 530
		CUtlVectorBase<CUtlHashMap<char const::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CUtlHashMap<char const::CUtlVector(); // 154
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 245
		CVariableBitStringBase::CVariableBitStringBase(); // 302
		CBitStringT<CVariableBitStringBase>::ClearAllBits(); // 310
		CBitStringT<CVariableBitStringBase>::CBitStringT(); // 216
		CBitString::CBitString(); // 154
		CUtlMemory<CUtlHashMap<char const::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashMap<char const::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 154
		InvalidIndex(void); // 157
		InvalidIndex(void); // 158
		InvalidIndex(void); // 159
		CUtlHashMap<char const::CUtlHashMap(
				int cElementsExpected);  // 1617
		CUtlSymbol::CUtlSymbol(); // 1619
		CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlString, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 1619
		CUtlMemory<CLocalize::LocalizedString_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 472
		CUtlMemory<CLocalize::LocalizedString_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CLocalize::LocalizedString_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 419
		CUtlVector<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::CUtlVector(
				int growSize,
				int initCapacity);  // 1618
		CUtlBlockMemory<char, int>::CUtlBlockMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 1472
		StringData_t::StringData_t(); // 1619
		CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::CUtlVector(); // 1619
		CUtlMemory<CLocalize::FileChangeDir_t::ValidateGrowSize(); // 475
		CUtlMemory<CLocalize::FileChangeDir_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CLocalize::FileChangeDir_t::ResetDbgInfo(); // 530
		CUtlVectorBase<CLocalize::FileChangeDir_t::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CLocalize::FileChangeDir_t::CUtlVector(); // 1619
		CUtlMemory<CUtlHashMap<char const::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashMap<char const::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CUtlHashMap<char const::ResetDbgInfo(); // 530
		CUtlVectorBase<CUtlHashMap<char const::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CUtlHashMap<char const::CUtlVector(); // 154
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 245
		CVariableBitStringBase::CVariableBitStringBase(); // 302
		CBitStringT<CVariableBitStringBase>::ClearAllBits(); // 310
		CBitStringT<CVariableBitStringBase>::CBitStringT(); // 216
		CBitString::CBitString(); // 154
		CUtlMemory<CUtlHashMap<char const::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashMap<char const::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 154
		InvalidIndex(void); // 157
		InvalidIndex(void); // 158
		InvalidIndex(void); // 159
		CUtlHashMap<char const::CUtlHashMap(
				int cElementsExpected);  // 1619
		CUtlMemory<CLocalize::ChangeCallback_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CLocalize::ChangeCallback_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::CUtlVector(); // 1619
		CUtlSymbol::operator=(
				const CUtlSymbol& src);  // 1622
		{
			int i; // 1643
			{
				GenderMap_t pMap; // 1645
				uint8 nGenders; // 1646
				{
					int j; // 1647
				}
				{
				}
			}
		}
		CUtlSymbol::CUtlSymbol(
				UtlSymId_t id);  // 1622
	}
} /* size: 0 */

// <0006C442> localize/localize_imp.cpp:1616
// variables: 6
void CLocalize::CLocalize()
{
	const char   __FUNCTION__; // 40671
	{
		int i; // 1643
		{
			GenderMap_t pMap; // 1645
			uint8 nGenders; // 1646
			{
				int j; // 1647
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1655
			}
		}
	}
} /* size: 0, variables: 1 */

// <0006A4E6> localize/localize_imp.cpp:1671
// variables: 6
// function calls: 156
void CLocalize::~CLocalize()
{
	{
		int i; // 359
	}
	CUtlBlockMemory<char, int>::Purge(); // 354
	CUtlBlockMemory<char, int>::Purge(); // 1537
	StringData_t::Purge(); // 1673
	{
		int i; // 1721
		CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Element(
			int i);  // 1723
		LocalizationFileInfo_t::~LocalizationFileInfo_t(); // 1526
		Destruct<CLocalize::LocalizationFileInfo_t>(LocalizationFileInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::Purge(); // 903
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Purge(); // 1674
	{
		int i; // 1807
		CUtlMemory<CLocalize::FileChangeDir_t::operator[](
				int i);  // 602
		CUtlVectorBase<CLocalize::FileChangeDir_t::Element(
			int i);  // 1809
		ValidateAlignment<UtlLinkedListElem_t<CUtlString, unsigned int> >(void); // 508
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::IsExternallyAllocated(); // 905
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::Purge(); // 903
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::Purge(); // 510
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::~CUtlMemory(); // 462
		~CUtlLinkedList(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this); // 487
		CUtlString::~CUtlString(); // 487
		CDirWatcher::~CDirWatcher(); // 1580
		FileChangeDir_t::~FileChangeDir_t(); // 1809
	}
	CUtlVectorBase<CLocalize::FileChangeDir_t::RemoveAll(); // 1798
	CUtlMemory<CLocalize::FileChangeDir_t::Purge(); // 903
	CUtlMemory<CLocalize::FileChangeDir_t::IsExternallyAllocated(); // 905
	CUtlMemory<CLocalize::FileChangeDir_t::Purge(); // 1799
	CUtlVectorBase<CLocalize::FileChangeDir_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<CLocalize::FileChangeDir_t::Purge(); // 1811
	CUtlVectorBase<CLocalize::FileChangeDir_t::PurgeAndDeleteElements(); // 6722
	CLocalize::EnableFileWatch(
			bool bEnable);  // 1675
	CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CLocalize::ChangeCallback_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CLocalize::ChangeCallback_t, int>::Purge(); // 903
	CUtlMemory<CLocalize::ChangeCallback_t, int>::Purge(); // 1799
	CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::Purge(); // 560
	ValidateAlignment<CLocalize::ChangeCallback_t>(void); // 508
	CUtlMemory<CLocalize::ChangeCallback_t, int>::Purge(); // 510
	CUtlMemory<CLocalize::ChangeCallback_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::~CUtlVector(); // 1676
	CUtlVectorBase<CUtlHashMap<char const::RemoveAll(); // 1798
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 1799
	CUtlVectorBase<CUtlHashMap<char const::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlHashMap<char const::Purge(); // 792
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::Purge(); // 793
	CUtlHashMap<char const::Purge(); // 165
	ValidateAlignment<CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>::Node_t>(void); // 508
	CUtlMemory<CUtlHashMap<char const::Purge(); // 510
	CUtlMemory<CUtlHashMap<char const::~CUtlMemory(); // 166
	CVariableBitStringBase::~CVariableBitStringBase(); // 61
	CBitStringT<CVariableBitStringBase>::~CBitStringT(); // 212
	CBitString::~CBitString(); // 166
	CUtlVectorBase<CUtlHashMap<char const::RemoveAll(); // 1798
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::Purge(); // 1799
	CUtlVectorBase<CUtlHashMap<char const::Purge(); // 560
	ValidateAlignment<CUtlHashMap<char const*, int, StringEqualFunctor, StringHashFunctor>::HashBucket_t>(void); // 508
	CUtlMemory<CUtlHashMap<char const::Purge(); // 510
	CUtlMemory<CUtlHashMap<char const::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlHashMap<char const::~CUtlVectorBase(); // 410
	CUtlVector<CUtlHashMap<char const::~CUtlVector(); // 166
	CUtlHashMap<char const::~CUtlHashMap(); // 1676
	CUtlVectorBase<CLocalize::FileChangeDir_t::RemoveAll(); // 1798
	CUtlMemory<CLocalize::FileChangeDir_t::IsExternallyAllocated(); // 905
	CUtlMemory<CLocalize::FileChangeDir_t::Purge(); // 903
	CUtlMemory<CLocalize::FileChangeDir_t::Purge(); // 1799
	CUtlVectorBase<CLocalize::FileChangeDir_t::Purge(); // 560
	ValidateAlignment<CLocalize::FileChangeDir_t*>(void); // 508
	CUtlMemory<CLocalize::FileChangeDir_t::Purge(); // 510
	CUtlMemory<CLocalize::FileChangeDir_t::~CUtlMemory(); // 562
	CUtlVectorBase<CLocalize::FileChangeDir_t::~CUtlVectorBase(); // 410
	CUtlVector<CLocalize::FileChangeDir_t::~CUtlVector(); // 1676
	{
		int i; // 1721
		CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Element(
			int i);  // 1723
		LocalizationFileInfo_t::~LocalizationFileInfo_t(); // 1526
		Destruct<CLocalize::LocalizationFileInfo_t>(LocalizationFileInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::Purge(); // 903
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Purge(); // 560
	ValidateAlignment<CLocalize::LocalizationFileInfo_t>(void); // 508
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::Purge(); // 510
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::~CUtlVector(); // 1676
	{
		int i; // 359
	}
	CUtlBlockMemory<char, int>::Purge(); // 354
	CUtlBlockMemory<char, int>::Purge(); // 132
	CUtlBlockMemory<char, int>::~CUtlBlockMemory(); // 1465
	StringData_t::~StringData_t(); // 1676
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CLocalize::LocalizedString_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CLocalize::LocalizedString_t, int>::Purge(); // 903
	CUtlMemory<CLocalize::LocalizedString_t, int>::Purge(); // 1799
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::Purge(); // 560
	ValidateAlignment<CLocalize::LocalizedString_t>(void); // 508
	CUtlMemory<CLocalize::LocalizedString_t, int>::Purge(); // 510
	CUtlMemory<CLocalize::LocalizedString_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::~CUtlVector(); // 1676
	CUtlVectorBase<CUtlHashMap<char const::RemoveAll(); // 1798
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 1799
	CUtlVectorBase<CUtlHashMap<char const::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlHashMap<char const::Purge(); // 792
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::Purge(); // 793
	CUtlHashMap<char const::Purge(); // 165
	ValidateAlignment<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::Node_t>(void); // 508
	CUtlMemory<CUtlHashMap<char const::Purge(); // 510
	CUtlMemory<CUtlHashMap<char const::~CUtlMemory(); // 166
	CVariableBitStringBase::~CVariableBitStringBase(); // 61
	CBitStringT<CVariableBitStringBase>::~CBitStringT(); // 212
	CBitString::~CBitString(); // 166
	CUtlVectorBase<CUtlHashMap<char const::RemoveAll(); // 1798
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::Purge(); // 1799
	CUtlVectorBase<CUtlHashMap<char const::Purge(); // 560
	ValidateAlignment<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::HashBucket_t>(void); // 508
	CUtlMemory<CUtlHashMap<char const::Purge(); // 510
	CUtlMemory<CUtlHashMap<char const::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlHashMap<char const::~CUtlVectorBase(); // 410
	CUtlVector<CUtlHashMap<char const::~CUtlVector(); // 166
	CUtlHashMap<char const::~CUtlHashMap(); // 1676
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1676
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<ILocalize, 0>::~CTier2AppSystem(); // 1676
} /* size: 1372, inline expansions: 133 (4576 bytes) */

// <0006A47F> localize/localize_imp.cpp:1671
void CLocalize::~CLocalize()
{
} /* size: 36 */

// <0006A055> localize/localize_imp.cpp:1682
// variables: 3
// function calls: 11
void CLocalize::Init()
{
	InitReturnVal_t nRetVal; // 1684
	{
		KeyValues* pGameInfo; // 1692
		KeyValues* pLocKey; // 1693
		KeyValues::GetBool(
			const char* keyName,
			bool defaultValue);  // 1696
		KeyValues::GetBool(
			const char* keyName,
			bool defaultValue);  // 1700
		KeyValues::GetBool(
			const char* keyName,
			bool defaultValue);  // 1704
	}
	CTier0AppSystem<ILocalize, 0>::Init(); // 71
	CTier2AppSystem<ILocalize, 0>::Init(); // 1684
	CUtlSymbol::IsValid(); // 3622
	CLocalize::GetCurrentLanguage(); // 3620
	CLocalize::GetCurrentLanguage(); // 1712
	CLocalize::GetCurrentSubLanguage(); // 1713
	CLocalize::CheckLoadDefaultFiles(); // 6197
	CLocalize::CheckLoadDefaultFiles(); // 1715
} /* size: 326, variables: 1, inline expansions: 8 (161 bytes) */

// <00069FB2> localize/localize_imp.cpp:1720
// function calls: 2
void CLocalize::Shutdown()
{
	CTier0AppSystem<ILocalize, 0>::Shutdown(); // 85
	CTier2AppSystem<ILocalize, 0>::Shutdown(); // 1722
} /* size: 33, inline expansions: 2 (56 bytes) */

// <000728C5> localize/localize_imp.cpp:1729
// variables: 3
// function calls: 15
void CLocalize::InstallChangeCallback(ILocalizationChangeCallback* pCallback, uint32 nFlags)
{
	ChangeCallback_t* pEntry; // 1740
	{
		int i; // 1731
		CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::Count(); // 1731
		CUtlMemory<CLocalize::ChangeCallback_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::operator[](
				int i);  // 1733
	}
	{
		int i; // 1731
	}
	CLocalize::InstallChangeCallback(
				ILocalizationChangeCallback* pCallback,
				uint32 nFlags);  // 1729
	CUtlMemory<CLocalize::ChangeCallback_t, int>::NumAllocated(); // 1143
	CUtlMemory<CLocalize::ChangeCallback_t, int>::IsGrowable(); // 823
	CUtlMemory<CLocalize::ChangeCallback_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CLocalize::ChangeCallback_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CLocalize::ChangeCallback_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::AddToTail(); // 1156
	CUtlMemory<CLocalize::ChangeCallback_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::AddToTailGetPtr(); // 1740
} /* size: 418, variables: 1, inline expansions: 12 (1109 bytes) */

// <00069F65> localize/localize_imp.cpp:1729
// variables: 2
void CLocalize::InstallChangeCallback(ILocalizationChangeCallback* pCallback, uint32 nFlags)
{
	ChangeCallback_t* pEntry; // 1740
	{
		int i; // 1731
	}
} /* size: 0, variables: 1 */

// <00069D30> localize/localize_imp.cpp:1745
// variable: 1
// function calls: 9
void CLocalize::RemoveChangeCallback(ILocalizationChangeCallback* pCallback)
{
	{
		int i; // 1747
		CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::Count(); // 1747
		CUtlMemory<CLocalize::ChangeCallback_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::operator[](
				int i);  // 1749
		CUtlMemory<CLocalize::ChangeCallback_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::Element(
			int i);  // 1114
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1114
		CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::ShiftElementsLeft(
					int elem,
					int num);  // 1608
		CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::Remove(
			int elem);  // 1751
	}
} /* size: 146 */

// <000496F2> localize/localize_imp.cpp:1761
void LocalizationFileInfoRaw_t::LocalizationFileInfoRaw_t()
{
} /* size: 0 */

// <000496D5> localize/localize_imp.cpp:1761
inline void LocalizationFileInfoRaw_t::LocalizationFileInfoRaw_t()
{
} /* size: 0 */

// <00044927> localize/localize_imp.cpp:1761
void LocalizationFileInfoRaw_t::~LocalizationFileInfoRaw_t()
{
} /* size: 0 */

// <0004490A> localize/localize_imp.cpp:1761
inline void LocalizationFileInfoRaw_t::~LocalizationFileInfoRaw_t()
{
} /* size: 0 */

// <0003D707> localize/localize_imp.cpp:1761
// member functions: 2
// member variables: 2
// struct size: 16
struct LocalizationFileInfoRaw_t {
	CUtlString pFilename; /* 0 8 */
	const char * pPathID; /* 8 8 */
	void ~LocalizationFileInfoRaw_t(LocalizationFileInfoRaw_t* );
	void LocalizationFileInfoRaw_t(LocalizationFileInfoRaw_t* );
};

// <000690AF> localize/localize_imp.cpp:1767
// variables: 10
// function calls: 49
void CLocalize::ReloadLocalizationFilesInLanguage(const char* pLanguage)
{
	CUtlVector<LocalizationFileInfoRaw_t, CUtlMemory<LocalizationFileInfoRaw_t, int> > filelist; // 1771
	const char* pOldLanguage; // 1775
	{
		int i; // 1777
		{
			const char* szFileName; // 1779
			const char* langptr; // 1781
			{
				CPathBufferString fileName; // 1784
				{
					int j; // 1787
					{
						int index; // 1791
						CUtlMemory<LocalizationFileInfoRaw_t, int>::operator[](
								int i);  // 602
						CUtlVectorBase<LocalizationFileInfoRaw_t, CUtlMemory<LocalizationFileInfoRaw_t, int> >::Element(
							int i);  // 1148
						CUtlString::CUtlString(); // 1761
						LocalizationFileInfoRaw_t::LocalizationFileInfoRaw_t(); // 1479
						Construct<LocalizationFileInfoRaw_t>(LocalizationFileInfoRaw_t* pMemory); // 1148
						CUtlMemory<LocalizationFileInfoRaw_t, int>::Grow(
							int num);  // 806
						CUtlVectorBase<LocalizationFileInfoRaw_t, CUtlMemory<LocalizationFileInfoRaw_t, int> >::GrowMemory(
								int num);  // 1145
						CUtlVectorBase<LocalizationFileInfoRaw_t, CUtlMemory<LocalizationFileInfoRaw_t, int> >::AddToTail(); // 1791
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 776
						CBufferString::String(); // 1792
						CUtlString::operator=(
								const char* src);  // 1792
						CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::operator[](
								int i);  // 1793
						CUtlSymbol::IsValid(); // 1571
						LocalizationFileInfo_t::GetPathID(); // 1793
					}
					CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Count(); // 1787
					CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::operator[](
							int i);  // 1789
				}
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 1784
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1797
			}
			CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::operator[](
					int i);  // 4130
			CLocalize::GetLocalizationFileName(
						int index);  // 1779
			strstr(const char* __haystack,
				const char* __needle);  // 247
			V_strstr(const char* s1,
				const char* search);  // 1781
		}
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Count(); // 4122
		CLocalize::GetLocalizationFileCount(); // 1777
	}
	{
		int i; // 1800
		CUtlString::Get(); // 1802
	}
	CLocalize::StartChange(); // 1769
	CUtlMemory<LocalizationFileInfoRaw_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<LocalizationFileInfoRaw_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<LocalizationFileInfoRaw_t, CUtlMemory<LocalizationFileInfoRaw_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<LocalizationFileInfoRaw_t, CUtlMemory<LocalizationFileInfoRaw_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<LocalizationFileInfoRaw_t, CUtlMemory<LocalizationFileInfoRaw_t, int> >::CUtlVector(); // 1771
	{
		int i; // 1721
		CUtlMemory<LocalizationFileInfoRaw_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<LocalizationFileInfoRaw_t, CUtlMemory<LocalizationFileInfoRaw_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1761
		LocalizationFileInfoRaw_t::~LocalizationFileInfoRaw_t(); // 1526
		Destruct<LocalizationFileInfoRaw_t>(LocalizationFileInfoRaw_t* pMemory); // 1723
	}
	CUtlVectorBase<LocalizationFileInfoRaw_t, CUtlMemory<LocalizationFileInfoRaw_t, int> >::RemoveAll(); // 1798
	CUtlMemory<LocalizationFileInfoRaw_t, int>::Purge(); // 903
	CUtlMemory<LocalizationFileInfoRaw_t, int>::Purge(); // 1799
	CUtlVectorBase<LocalizationFileInfoRaw_t, CUtlMemory<LocalizationFileInfoRaw_t, int> >::Purge(); // 560
	CUtlVectorBase<LocalizationFileInfoRaw_t, CUtlMemory<LocalizationFileInfoRaw_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<LocalizationFileInfoRaw_t, CUtlMemory<LocalizationFileInfoRaw_t, int> >::~CUtlVector(); // 1806
} /* size: 971, variables: 2, inline expansions: 12 (659 bytes) */

// <00068824> localize/localize_imp.cpp:1811
// variables: 7
// function calls: 23
void CLocalize::ReadLocalizationFileImpl(const char* pRelativePath, const char* pPathID, const char* pForLanguage, EKeyReplaceStrategy eReplace, bool bNoAssert)
{
	FileHandle_t hFile; // 1818
	int64 nFileSize64; // 1823
	int nFileSize; // 1830
	int nBufferSize; // 1831
	uint8* pMemBlock; // 1832
	bool bReadOK; // 1833
	bool bSuccess; // 1851
	CFileSystemPassThru::GetOptimalIOConstraints(
				FileHandle_t hFile,
				unsigned int* pOffsetAlign,
				unsigned int* pSizeAlign,
				unsigned int* pBufferAlign);  // 844
	AlignValue<int>(int val,
			uintp alignment);  // 845
	IFileSystem::GetOptimalReadSize<int>(
				FileHandle_t hFile,
				int nLogicalSize);  // 1831
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 1849
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
				void* p);  // 1852
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
				void* p);  // 1837
} /* size: 1045, variables: 7, inline expansions: 23 (2280 bytes) */

// <00067ACB> localize/localize_imp.cpp:1859
// variables: 25
// function calls: 24
void CLocalize::ReadLocalizationBufferImpl(const char* pFromFile, const char* pForLanguage, void* pRawBlock, int fileSize, EKeyReplaceStrategy eReplace, bool bNoAssert)
{
	const uint8* pByteData; // 1862
	LocFileFormat_t fileFormat; // 1863
	const char   __FUNCTION__; // 41120
	bool bQuoted; // 1913
	bool bSpew; // 1915
	CExpressionEvaluator ExpressionHandler; // 1921
	StringProperties_t props; // 1922
	const void* pData; // 1927
	bool bSuccess; // 1928
	bool bCanBeFlat; // 1929
	states_e state; // 1930
	{
		CByteswap byteSwap; // 1881
		IsMachineBigEndian(void); // 21
		CByteswap::SetTargetBigEndian(
					bool bigEndian);  // 21
		CByteswap::CByteswap(); // 1881
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1901
	}
	{
		char key; // 1935
		bool bKeyOverflow; // 1936
		char valuetoken; // 1960
		bool bValueOverflow; // 1961
		{
			bool bAccepted; // 2026
			{
				char conditional; // 2030
				bool bConditionalOverflow; // 2031
				ReadLocalizationToken(LocFileFormat_t fileFormat,
							const void* pStart,
							char* pToken,
							int nTokenBufferSize,
							bool& bQuoted,
							bool& bOverflow);  // 2032
			}
			V_strcmp(const char* s1,
				const char* s2);  // 2053
			{
				const char* pScan; // 528
			}
			{
				const ucs2* pScan; // 511
			}
			CheckForCondition(LocFileFormat_t fileFormat,
						const void ** pStart);  // 2028
			V_strcmp(const char* s1,
				const char* s2);  // 2054
			V_strcmp(const char* s1,
				const char* s2);  // 2055
		}
		V_strnicmp_fast<int>(const char* s1,
					const char* s2,
					int n);  // 2019
		V_strcmp(const char* s1,
			const char* s2);  // 2009
		ReadLocalizationToken(LocFileFormat_t fileFormat,
					const void* pStart,
					char* pToken,
					int nTokenBufferSize,
					bool& bQuoted,
					bool& bOverflow);  // 1937
		ReadLocalizationToken(LocFileFormat_t fileFormat,
					const void* pStart,
					char* pToken,
					int nTokenBufferSize,
					bool& bQuoted,
					bool& bOverflow);  // 1962
		V_strcmp(const char* s1,
			const char* s2);  // 1974
		{
			const char* pScan; // 493
		}
		{
			const ucs2* pScan; // 484
		}
		ReadToLineEnding(LocFileFormat_t fileFormat,
				const void* pStart);  // 1944
		V_strcmp(const char* s1,
			const char* s2);  // 1988
		V_strcmp(const char* s1,
			const char* s2);  // 1994
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2076
	}
	CUtlSymbol::CUtlSymbol(); // 1082
	CUtlSymbol::CUtlSymbol(); // 1082
	CUtlSymbol::CUtlSymbol(); // 1083
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1083
	CUtlSymbol::CUtlSymbol(); // 1086
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1086
	StringProperties_t::StringProperties_t(); // 1922
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 1923
} /* size: 0, variables: 11, inline expansions: 8 (85 bytes) */

// <00067426> localize/localize_imp.cpp:2081
// variables: 7
// function calls: 20
void CLocalize::AddLocalizationKeyValuesImpl(const char* pFromFile, const char* pForLanguage, KeyValues* pRoot, EKeyReplaceStrategy eReplace)
{
	KeyValues* pTokens; // 2083
	StringProperties_t props; // 2092
	bool bSuccess; // 2095
	const char   __FUNCTION__; // 41174
	{
		KeyValues* pToken; // 2096
		{
			const char* pszKey; // 2098
			V_strnicmp_fast<int>(const char* s1,
						const char* s2,
						int n);  // 2101
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2112
	}
	CUtlSymbol::CUtlSymbol(); // 1082
	CUtlSymbol::CUtlSymbol(); // 1082
	CUtlSymbol::CUtlSymbol(); // 1083
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1083
	CUtlSymbol::CUtlSymbol(); // 1086
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1086
	StringProperties_t::StringProperties_t(); // 2092
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 2093
	CUtlVectorBase<CUtlHashMap<char const::RemoveAll(); // 1798
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 1799
	CUtlVectorBase<CUtlHashMap<char const::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlHashMap<char const::Purge(); // 792
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::Purge(); // 793
	CUtlHashMap<char const::Purge(); // 3678
	CLocalize::DiscardDupValueLookup(); // 2111
} /* size: 0, variables: 4, inline expansions: 19 (704 bytes) */

// <00066674> localize/localize_imp.cpp:2118
// variables: 11
// function calls: 46
void CLocalize::AddLocalizationKeyValuesImpl(const char* pFromFile, const char* pForLanguage, KeyValues3* pRoot, EKeyReplaceStrategy eReplace)
{
	const CKV3MemberName  k_sym_Tokens; // 2120
	const KeyValues3* pTokens; // 2121
	StringProperties_t props; // 2130
	bool bSuccess; // 2133
	const char   __FUNCTION__; // 41174
	{
		const CKV3MemberRef  pToken; // 2134
		CKV3MemberIteratorView<true>& __for_range; // 52049
		iterator __for_begin; // 62590
		iterator __for_end; // 62590
		{
			const char* pszKey; // 2136
			{
			}
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 315
			CKV3MemberRef::CKV3MemberRef(
					CKV3MemberName memberName,
					const KeyValues3* pMemberValue);  // 506
			iterator::operator*(); // 2134
			V_strnicmp_fast<int>(const char* s1,
						const char* s2,
						int n);  // 2139
		}
		CKV3MemberIteratorView<true>::CKV3MemberIteratorView(
					KV3Pointer_t pKV3);  // 925
		KeyValues3::IterateMembers(); // 2134
		{
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 501
			KeyValues3::GetType(); // 501
		}
		{
		}
		iterator::iterator(
			KV3Pointer_t pKV3,
			int nStartingIndex);  // 497
		iterator::iterator(
			KV3Pointer_t pKV3,
			int nStartingIndex);  // 523
		CKV3MemberIteratorView<true>::begin(); // 2134
		{
			KeyValues3::Internal_Type(); // 90
			KeyValues3::GetType(); // 501
			KeyValues3::GetType(); // 501
		}
		{
		}
		iterator::iterator(
			KV3Pointer_t pKV3,
			int nStartingIndex);  // 497
		iterator::iterator(
			KV3Pointer_t pKV3,
			int nStartingIndex);  // 528
		CKV3MemberIteratorView<true>::end(); // 2134
		iterator::operator!=(
				const iterator& rhs);  // 2134
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2150
	}
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 2121
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 2121
	CUtlSymbol::CUtlSymbol(); // 1082
	CUtlSymbol::CUtlSymbol(); // 1082
	CUtlSymbol::CUtlSymbol(); // 1083
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1083
	CUtlSymbol::CUtlSymbol(); // 1086
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1086
	StringProperties_t::StringProperties_t(); // 2130
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 2131
	CUtlVectorBase<CUtlHashMap<char const::RemoveAll(); // 1798
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 1799
	CUtlVectorBase<CUtlHashMap<char const::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlHashMap<char const::Purge(); // 792
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::Purge(); // 793
	CUtlHashMap<char const::Purge(); // 3678
	CLocalize::DiscardDupValueLookup(); // 2149
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 2120
} /* size: 0, variables: 5, inline expansions: 27 (1150 bytes) */

// <0006631C> localize/localize_imp.cpp:2157
// variable: 1
// function calls: 12
void CLocalize::AddFile(const char* szFileName, const char* pPathID)
{
	bool bSucc; // 2171
	CLocalize::StartChange(); // 2168
	CUtlVectorBase<CUtlHashMap<char const::RemoveAll(); // 1798
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 1799
	CUtlVectorBase<CUtlHashMap<char const::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlHashMap<char const::Purge(); // 792
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::Purge(); // 793
	CUtlHashMap<char const::Purge(); // 3678
	CLocalize::DiscardDupValueLookup(); // 2173
} /* size: 341, variables: 1, inline expansions: 12 (619 bytes) */

// <0006540B> localize/localize_imp.cpp:2178
// variables: 9
// function calls: 53
void CLocalize::AddFileImpl(const char* szFileName, const char* pPathID, const char* pForLanguage, EKeyReplaceStrategy eReplace, bool bNoAssert)
{
	bool bSuccess; // 2180
	const char* langptr; // 2183
	LocalizationFileInfo_t search; // 2221
	int lfc; // 2228
	int lf; // 2229
	bool bOk; // 2251
	{
		CPathBufferString fileName; // 2186
		const char* pLanguage; // 2205
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 2186
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 2218
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 2198
		CUtlSymbol::IsValid(); // 3622
		CLocalize::GetCurrentLanguage(); // 3620
		CLocalize::GetCurrentLanguage(); // 2205
		V_strlen(const char* str); // 2209
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 2214
	}
	{
		LocalizationFileInfo_t& entry; // 2232
		CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::operator[](
				int i);  // 2232
	}
	CUtlSymbol::CUtlSymbol(); // 1552
	CUtlSymbol::CUtlSymbol(); // 1552
	LocalizationFileInfo_t::LocalizationFileInfo_t(); // 2221
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 2222
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 2225
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Count(); // 2228
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Element(
		int i);  // 1607
	LocalizationFileInfo_t::~LocalizationFileInfo_t(); // 1526
	Destruct<CLocalize::LocalizationFileInfo_t>(LocalizationFileInfo_t* pMemory); // 1607
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Element(
		int i);  // 1114
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Remove(
		int elem);  // 2242
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::NumAllocated(); // 1196
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::Base(); // 112
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Base(); // 368
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::IsGrowable(); // 823
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Element(
		int i);  // 1201
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 1549
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 1549
	LocalizationFileInfo_t::LocalizationFileInfo_t(
				const LocalizationFileInfo_t  &);  // 1520
	CopyConstruct<CLocalize::LocalizationFileInfo_t>(LocalizationFileInfo_t* pMemory,
							const LocalizationFileInfo_t& src);  // 1201
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::AddToTail(
			const LocalizationFileInfo_t& src);  // 2247
	strstr(const char* __haystack,
		const char* __needle);  // 247
	V_strstr(const char* s1,
		const char* search);  // 2183
} /* size: 1408, variables: 6, inline expansions: 36 (1401 bytes) */

// <00064383> localize/localize_imp.cpp:2263
// variables: 9
// function calls: 59
void CLocalize::AddAllLanguageFiles(const char* baseFileName, const char* pPathID, int nPrefixLen)
{
	bool bSuccess; // 2270
	CPathBufferString szFilePath; // 2273
	CPathBufferString szSearchPath; // 2278
	int nSuccess; // 2281
	int nFail; // 2282
	FileFindHandle_t hFind; // 2283
	const char* file; // 2284
	const char   __FUNCTION__; // 40931
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2314
	}
	CLocalize::StartChange(); // 2265
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
			bool bGrowable);  // 2273
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 2278
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 2279
	FileFindHandle_t::FileFindHandle_t(); // 2283
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 2284
	CFileSystemPassThru::FindFirstEx(
			const char* pWildCard,
			const char* pPathID,
			FileFindHandle_t* pHandle);  // 159
	CFileSystemPassThru::FindFirstEx(
			const char* pWildCard,
			const char* pPathID,
			FileFindHandle_t* pHandle);  // 2284
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 2291
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 128
	CFileSystemPassThru::FindNext(
		FileFindHandle_t& handle);  // 2304
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 2308
	CUtlVectorBase<CUtlHashMap<char const::RemoveAll(); // 1798
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 1799
	CUtlVectorBase<CUtlHashMap<char const::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlHashMap<char const::Purge(); // 792
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::Purge(); // 793
	CUtlHashMap<char const::Purge(); // 3678
	CLocalize::DiscardDupValueLookup(); // 2312
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 130
	CFileSystemPassThru::FindClose(
			FileFindHandle_t& handle);  // 798
	FileFindHandle_t::~FileFindHandle_t(); // 2316
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2316
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2316
} /* size: 0, variables: 8, inline expansions: 59 (4472 bytes) */

// <00063A30> localize/localize_imp.cpp:2321
// variables: 16
// function calls: 23
void CLocalize::SaveToFile(const char* szFileName)
{
	FileHandle_t file; // 2329
	CUtlSymbol symFileName; // 2334
	short unsigned int marker; // 2337
	const char* startStr; // 2341
	const char* endStr; // 2342
	ucs2 unicodeString; // 2345
	int strBytes; // 2346
	ucs2 unicodeQuote; // 2354
	ucs2 unicodeCR; // 2355
	ucs2 unicodeNewline; // 2356
	ucs2 unicodeTab; // 2357
	{
		LocalizeStringIndex_t idx; // 2360
		{
			LocalizeInstanceIndex_t nInstance; // 2362
			{
				const LocalizedString_t& lstr; // 2366
				const char* name; // 2373
				const char* value; // 2374
				CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
						int i);  // 2366
				CUtlSymbol::operator==(
						const CUtlSymbol& src);  // 2367
				LocalizedString_t::IsVariantSubString(); // 2368
				CUtlMemory<CUtlHashMap<char const::Element(
					int i);  // 182
				CUtlHashMap<char const::Key(
					IndexType_t i);  // 2373
				CUtlBlockMemory<char, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<char, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<char, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<char, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<char, int>::operator[](
						int i);  // 1480
				StringData_t::operator[](
						int nIndex);  // 2374
				V_strlen16(const uchar16* puc16); // 2381
				V_strlen16(const uchar16* puc16); // 2389
			}
			CUtlMemory<CUtlHashMap<char const::Element(
				int i);  // 180
			CUtlHashMap<char const::operator[](
					IndexType_t i);  // 2362
			CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
					int i);  // 2362
		}
		CUtlHashMap<char const::MaxElement(); // 3699
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 196
		CUtlHashMap<char const::IsValidIndex(
				IndexType_t i);  // 3704
		CLocalize::GetNextStringIndex(
					LocalizeStringIndex_t index);  // 2360
	}
	V_strlen16(const uchar16* puc16); // 2350
} /* size: 0, variables: 11, inline expansions: 1 (56 bytes) */

// <00063138> localize/localize_imp.cpp:2408
// variables: 6
// function calls: 36
void CLocalize::ReloadLocalizationFiles(uint32 nFlags, const CUtlVector<int, CUtlMemory<int, int> >* pExclusions)
{
	CUtlVector<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> > savedLocalizationFiles; // 2412
	const CUtlVector<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >* pLocalizationFiles; // 2413
	{
		int i; // 2436
		{
			const LocalizationFileInfo_t& entry; // 2443
			{
				int i; // 1531
				CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1531
				CUtlMemory<int, int>::operator[](
						int i);  // 609
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 1533
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::Find(
				const int& src);  // 1563
			CUtlVectorBase<int, CUtlMemory<int, int> >::HasElement(
					const int& src);  // 2438
			CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
					int i);  // 609
			CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Element(
				int i);  // 2443
			CUtlSymbol::IsValid(); // 1571
			LocalizationFileInfo_t::GetPathID(); // 2444
		}
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Count(); // 2436
	}
	CLocalize::StartChange(); // 2410
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::CUtlVector(); // 2412
	{
		int i; // 1721
		CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Element(
			int i);  // 1723
		LocalizationFileInfo_t::~LocalizationFileInfo_t(); // 1526
		Destruct<CLocalize::LocalizationFileInfo_t>(LocalizationFileInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::Purge(); // 903
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Purge(); // 560
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::~CUtlVector(); // 2448
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<CLocalize::LocalizationFileInfo_t*>(LocalizationFileInfo_t *& x,
								LocalizationFileInfo_t *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::Swap(
		CUtlMemory<CLocalize::LocalizationFileInfo_t, int>& mem);  // 1351
	swap<CLocalize::LocalizationFileInfo_t*>(LocalizationFileInfo_t *& __a,
						LocalizationFileInfo_t *& __b);  // 19
	V_swap<CLocalize::LocalizationFileInfo_t*>(LocalizationFileInfo_t *& x,
							LocalizationFileInfo_t *& y);  // 1354
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Swap(
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >& vec);  // 2418
} /* size: 0, variables: 2, inline expansions: 22 (1227 bytes) */

// <00062FFB> localize/localize_imp.cpp:2453
// variable: 1
// function calls: 3
void CLocalize::FindUnsafe(const char* pToken)
{
	LocalizeStringIndex_t idx; // 2460
	V_isempty(const char* pszString); // 2455
	CUtlMemory<CUtlHashMap<char const::Element(
		int i);  // 180
	CUtlHashMap<char const::operator[](
			IndexType_t i);  // 2474
} /* size: 131, variables: 1, inline expansions: 3 (19 bytes) */

// <00062ECA> localize/localize_imp.cpp:2478
// variable: 1
// function calls: 3
void CLocalize::FindUnsafeLocal(const char* pToken)
{
	LocalizeStringIndex_t idx; // 2485
	V_isempty(const char* pszString); // 2480
	CUtlMemory<CUtlHashMap<char const::Element(
		int i);  // 180
	CUtlHashMap<char const::operator[](
			IndexType_t i);  // 2493
} /* size: 76, variables: 1, inline expansions: 3 (14 bytes) */

// <00075D56> localize/localize_imp.cpp:2497
// variable: 1
// function calls: 4
void CLocalize::FindSafe(const char* pToken)
{
	LocalizeStringIndex_t idx; // 2504
	V_isempty(const char* pszString); // 2499
	CLocalize::FindSafe(
		const char* pToken);  // 2497
	CUtlMemory<CUtlHashMap<char const::Element(
		int i);  // 180
	CUtlHashMap<char const::operator[](
			IndexType_t i);  // 2519
} /* size: 160, variables: 1, inline expansions: 4 (69 bytes) */

// <00062E8C> localize/localize_imp.cpp:2497
// variables: 2
void CLocalize::FindSafe(const char* pToken)
{
	LocalizeStringIndex_t idx; // 2504
	const char   __FUNCTION__; // 40644
} /* size: 0, variables: 2 */

// <00062BF8> localize/localize_imp.cpp:2527
// function calls: 9
void CLocalize::GetLocalizedString(const char* szText, CBufferString* pOut)
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 2529
	CBufferString::IsCurBufferFull(); // 833
	CBufferString::IsFixedFull(); // 2534
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 2539
} /* size: 160, inline expansions: 9 (239 bytes) */

// <00062511> localize/localize_imp.cpp:2546
// variables: 5
// function calls: 26
void CLocalize::FindIndex(const char* pToken)
{
	LocalizeStringIndex_t index; // 2557
	V_isempty(const char* pszString); // 2548
	{
		uint32 c; // 366
	}
	FastCaselessStringHashFunctor::operator(
			const char* s);  // 571
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 574
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlHashMap<char const::operator[](
			int i);  // 611
	{
		IndexType_t iNode; // 613
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 618
		FastCaselessStringEqualFunctor::operator(
				const char* a,
				const char* b);  // 618
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 621
	}
	CUtlHashMap<char const::FindInBucket(
			int iBucket,
			const KeyType_t& key);  // 578
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 575
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 589
	CVariableBitStringBase::Size(); // 332
	{
	}
	CVariableBitStringBase::GetInts(); // 333
	CBitStringT<CVariableBitStringBase>::GetBit(
		int bitNum);  // 591
	{
		int iNode2; // 593
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlHashMap<char const::operator[](
				int i);  // 611
		{
			IndexType_t iNode; // 613
			CUtlMemory<CUtlHashMap<char const::operator[](
					int i);  // 618
			CUtlMemory<CUtlHashMap<char const::operator[](
					int i);  // 621
			FastCaselessStringEqualFunctor::operator(
					const char* a,
					const char* b);  // 618
		}
		CUtlHashMap<char const::FindInBucket(
				int iBucket,
				const KeyType_t& key);  // 593
	}
	CUtlHashMap<char const::Find(
		const KeyType_t& key);  // 2557
	CUtlMemory<CUtlHashMap<char const::Element(
		int i);  // 180
	CUtlHashMap<char const::operator[](
			IndexType_t i);  // 2560
	CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
			int i);  // 2560
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 2560
} /* size: 0, variables: 1, inline expansions: 17 (836 bytes) */

// <00061FB4> localize/localize_imp.cpp:2568
// variables: 7
// function calls: 18
void CLocalize::FindLongestInstance(const char* pToken, ILocalizeTextQuery* pQuery, LocalizeInstanceIndex_t* pInstanceIndex, LocalizeStringIndex_t* pTokenIndex)
{
	LocalizeStringIndex_t tokenIndex; // 2575
	const char* pLongestInstance; // 2590
	LocalizeInstanceIndex_t nLongestInstance; // 2591
	{
		LocalizeInstanceIndex_t nInstance; // 2592
		{
			const LocalizedString_t& lstr; // 2594
			const char* pString; // 2602
			int nWidth; // 2603
			CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
					int i);  // 2594
			LocalizedString_t::HasAllVariants(); // 2595
			CUtlBlockMemory<char, int>::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<char, int>::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<char, int>::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<char, int>::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<char, int>::operator[](
					int i);  // 1480
			StringData_t::operator[](
					int nIndex);  // 2602
		}
		CUtlMemory<CUtlHashMap<char const::Element(
			int i);  // 180
		CUtlHashMap<char const::operator[](
				IndexType_t i);  // 2592
		CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
				int i);  // 2592
	}
	CUtlMemory<CUtlHashMap<char const::Element(
		int i);  // 180
	CUtlHashMap<char const::operator[](
			IndexType_t i);  // 2587
	CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
			int i);  // 2587
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 2587
} /* size: 0, variables: 3, inline expansions: 5 (54 bytes) */

// <00061E89> localize/localize_imp.cpp:2621
// variables: 2
// function calls: 2
void CLocalize::GetPrimaryInstanceByIndex(LocalizeStringIndex_t tokenIndex)
{
	const char   __FUNCTION__; // 41093
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2630
	}
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 196
	CUtlHashMap<char const::IsValidIndex(
			IndexType_t i);  // 2628
} /* size: 0, variables: 1, inline expansions: 2 (56 bytes) */

// <00061C7B> localize/localize_imp.cpp:2640
// variable: 1
// function calls: 7
void CLocalize::GetPrimaryInstanceByToken(const char* pToken)
{
	LocalizeStringIndex_t tokenIndex; // 2642
	CUtlMemory<CUtlHashMap<char const::Element(
		int i);  // 180
	CUtlHashMap<char const::operator[](
			IndexType_t i);  // 2650
	CUtlMemory<CUtlHashMap<char const::Element(
		int i);  // 180
	CUtlHashMap<char const::operator[](
			IndexType_t i);  // 2653
	CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
			int i);  // 2650
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 2650
} /* size: 164, variables: 1, inline expansions: 7 (60 bytes) */

// <00061B10> localize/localize_imp.cpp:2659
// variables: 3
// function calls: 3
void CLocalize::GetNextInstanceIndex(LocalizeInstanceIndex_t instanceIndex)
{
	const char   __FUNCTION__; // 40958
	const LocalizedString_t& lstr; // 2672
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2668
	}
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::IsValidIndex(
			int i);  // 2666
	CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
			int i);  // 2672
} /* size: 0, variables: 2, inline expansions: 3 (26 bytes) */

// <00061817> localize/localize_imp.cpp:2679
// variables: 3
// function calls: 9
void CLocalize::GetValueByInstanceIndex(LocalizeInstanceIndex_t instanceIndex)
{
	const char   __FUNCTION__; // 41039
	const LocalizedString_t& lstr; // 2692
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2688
	}
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::IsValidIndex(
			int i);  // 2686
	CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
			int i);  // 2692
	CUtlBlockMemory<char, int>::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<char, int>::IsIdxValid(
			int i);  // 191
	CUtlBlockMemory<char, int>::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<char, int>::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<char, int>::operator[](
			int i);  // 1480
	StringData_t::operator[](
			int nIndex);  // 2693
} /* size: 0, variables: 2, inline expansions: 9 (392 bytes) */

// <0006162A> localize/localize_imp.cpp:2699
// variables: 3
// function calls: 5
void CLocalize::GetValueVariantByInstanceIndex(LocalizeInstanceIndex_t instanceIndex)
{
	const char   __FUNCTION__; // 41223
	const LocalizedString_t& lstr; // 2712
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2708
	}
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::IsValidIndex(
			int i);  // 2706
	CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
			int i);  // 2712
	LocalizedString_t::HasNoVariants(); // 2713
	LocalizedString_t::GetRawVariantIndex(); // 2723
} /* size: 0, variables: 2, inline expansions: 5 (58 bytes) */

// <00061092> localize/localize_imp.cpp:2730
// variables: 2
// function calls: 22
void CLocalize::GetPrimaryStringData(LocalizeInstanceIndex_t nInstance)
{
	const LocalizedString_t& lstr; // 2737
	const LocalizedString_t& lstrSub; // 2744
	CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
			int i);  // 2737
	LocalizedString_t::HasAllVariants(); // 2738
	CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
			int i);  // 2744
	LocalizedString_t::IsVariantSubString(); // 2745
	CUtlBlockMemory<char, int>::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<char, int>::IsIdxValid(
			int i);  // 191
	{
	}
	CUtlBlockMemory<char, int>::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<char, int>::operator[](
			int i);  // 1480
	StringData_t::operator[](
			int nIndex);  // 2749
	CUtlBlockMemory<char, int>::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<char, int>::IsIdxValid(
			int i);  // 191
	{
	}
	CUtlBlockMemory<char, int>::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<char, int>::operator[](
			int i);  // 1480
	StringData_t::operator[](
			int nIndex);  // 2741
	CUtlBlockMemory<char, int>::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<char, int>::MinorIndex(
			int i);  // 193
	CUtlBlockMemory<char, int>::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<char, int>::IsIdxValid(
			int i);  // 191
	{
	}
	CUtlBlockMemory<char, int>::operator[](
			int i);  // 1480
	StringData_t::operator[](
			int nIndex);  // 2753
} /* size: 0, variables: 2, inline expansions: 22 (1066 bytes) */

// <0007481F> localize/localize_imp.cpp:2759
// variables: 3
// function calls: 18
void CLocalize::ParseVariantFlags(const char* pValue, StringProperties_t* pProps)
{
	const char* pValueStart; // 2761
	CBufferString flagStr; // 2784
	{
	}
	{
	}
	{
	}
	{
		LOC_GENDER eGender; // 2824
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 2798
		{
		}
		{
		}
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 2820
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 2825
		V_strcmp(const char* s1,
			const char* s2);  // 2837
		V_strcmp(const char* s1,
			const char* s2);  // 2841
		V_strcmp(const char* s1,
			const char* s2);  // 2845
		V_strcmp(const char* s1,
			const char* s2);  // 2849
		{
		}
		V_strcmp(const char* s1,
			const char* s2);  // 2833
		V_strcmp(const char* s1,
			const char* s2);  // 2829
		V_strcmp(const char* s1,
			const char* s2);  // 2825
		{
		}
		{
		}
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 2784
	CBufferString::~CBufferString(); // 2864
	CLocalize::ParseVariantFlags(
				const char* pValue,
				StringProperties_t* pProps);  // 2759
} /* size: 0, variables: 2, inline expansions: 4 (919 bytes) */

// <00060F1F> localize/localize_imp.cpp:2759
// variables: 12
void CLocalize::ParseVariantFlags(const char* pValue, StringProperties_t* pProps)
{
	const char* pValueStart; // 2761
	const char   __FUNCTION__; // 40877
	CBufferString flagStr; // 2784
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2767
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2775
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2780
	}
	{
		LOC_GENDER eGender; // 2824
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2791
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2804
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2810
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2855
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2860
		}
	}
} /* size: 0, variables: 3 */

// <00060B18> localize/localize_imp.cpp:2869
// variable: 1
// function calls: 12
void CLocalize::SetStringValueImpl(LocalizedString_t* pLocStr, const char* pValue, StringProperties_t* pProps)
{
	int nValueIndex; // 2871
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 2888
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 2889
	CUtlBlockMemory<char, int>::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<char, int>::IsIdxValid(
			int i);  // 191
	CUtlBlockMemory<char, int>::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<char, int>::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<char, int>::operator[](
			int i);  // 1480
	StringData_t::operator[](
			int nIndex);  // 2877
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 438
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 438
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 441
	CUtlHashMap<char const::InsertOrReplace(
			const KeyType_t& key,
			const ElemType_t& insert);  // 2877
} /* size: 0, variables: 1, inline expansions: 12 (489 bytes) */

// <0005F81B> localize/localize_imp.cpp:2901
// variables: 28
// function calls: 53
void CLocalize::AddStringValueImpl(LocalizeInstanceIndex_t nInstanceIndex, const char* pToken, const char* pValue, StringProperties_t* pProps)
{
	const char* pFromFile; // 2903
	LocalizedString_t* pLocStr; // 2904
	bool bSuccess; // 2905
	bool bValidate; // 2907
	const char   __FUNCTION__; // 40904
	LocalizeInstanceIndex_t nNextInstance; // 2915
	uint32 nTokenNameFlags; // 2943
	const char* pSeparator; // 2944
	const char* pSplitStart; // 2945
	const char* pSplit; // 2946
	uint32 nLangGenderBits; // 2985
	LocalizeInstanceIndex_t nPrevInstance; // 2997
	CBufferStringN<100> subStr; // 2998
	uint32 nGenderBits; // 2999
	bool bValidForGender; // 3000
	bool bGenderBitsChecked; // 3001
	const char* pVariantDesc; // 3189
	int nVariantsNeeded; // 3190
	bool bValidForPlural; // 3191
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2910
	}
	{
		LocalizedString_t lstrNext; // 2920
		CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
				int i);  // 2920
		CUtlSymbol::CUtlSymbol(
				const CUtlSymbol& sym);  // 1375
		CUtlSymbol::CUtlSymbol(
				const CUtlSymbol& sym);  // 1375
		LocalizedString_t::LocalizedString_t(
					const LocalizedString_t  &);  // 2920
	}
	{
		int i; // 2988
	}
	{
		LocalizeInstanceIndex_t nSubInstance; // 3089
		LocalizedString_t* pLocStrSub; // 3090
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 3101
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 3085
		CUtlMemory<CLocalize::LocalizedString_t, int>::NumAllocated(); // 1143
		CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::Element(
			int i);  // 1148
		CUtlSymbol::CUtlSymbol(); // 1375
		CUtlSymbol::CUtlSymbol(); // 1375
		LocalizedString_t::LocalizedString_t(); // 1479
		Construct<CLocalize::LocalizedString_t>(LocalizedString_t* pMemory); // 1148
		CUtlMemory<CLocalize::LocalizedString_t, int>::Base(); // 112
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::Base(); // 368
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::AddToTail(); // 3089
		CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
				int i);  // 3090
		CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
				int i);  // 3092
		CUtlSymbol::IsValid(); // 3096
	}
	{
		LocalizeInstanceIndex_t nSubInstance; // 3236
		{
			LocalizedString_t* pLocStrSub; // 3239
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3238
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3240
			}
			CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
					int i);  // 3239
			LocalizedString_t::IsVariantSubString(); // 3240
		}
		CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
				int i);  // 3236
	}
	CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
			int i);  // 2904
	LocalizedString_t::IsVariantSubString(); // 2910
	LocalizedString_t::HasAllVariants(); // 2916
	CUtlSymbol::IsValid(); // 2943
	strstr(const char* __haystack,
		const char* __needle);  // 247
	V_strstr(const char* s1,
		const char* search);  // 2946
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<100>::CBufferStringN(); // 2998
	strstr(const char* __haystack,
		const char* __needle);  // 247
	V_strstr(const char* s1,
		const char* search);  // 3069
	IsPowerOfTwo(uint32 value); // 3041
	V_strlen(const char* str); // 3072
	CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
			int i);  // 3235
	CBufferString::~CBufferString(); // 587
	CBufferStringN<100>::~CBufferStringN(); // 3254
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 2907
} /* size: 0, variables: 19, inline expansions: 19 (320 bytes) */

// <0005EDFA> localize/localize_imp.cpp:3259
// variables: 5
// function calls: 32
void StringProperties_t::SetFromFileName(const char* pFileName, const char* pForLanguage, CUtlSymbol symDefLanguage)
{
	CBufferStringN<40> langName; // 3269
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 3261
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 1112
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 1113
	StringProperties_t::CheckForCoreValve(); // 3263
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 3268
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 3269
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 3272
	ComputeNumPluralVariants(ELanguage eLang); // 3280
	{
	}
	ComputeNumGenders(ELanguage eLang,
				GenderMap_t* pGenderMap);  // 3281
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 3282
	CUtlSymbol::CUtlSymbol(); // 3261
	{
		int i; // 954
		{
			const char* pLangName; // 958
			const char* pPossible; // 968
			{
				const char* pEnd; // 971
				V_strlen(const char* str); // 971
				CBufferString::WriteBuffer(); // 1390
				CBufferString::WriteBuffer(); // 1101
				CBufferString::RemoveAll(); // 901
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 976
			}
		}
	}
	strrchr(const char* __s,
		int __c);  // 204
	V_strrchr(const char* s,
			char c);  // 982
	strchr(const char* __s,
		int __c);  // 186
	V_strchr(const char* s,
		char c);  // 989
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 995
	ExtractLanguageName(CBufferString* pOut,
				const char* pFile);  // 3274
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 3276
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 3276
} /* size: 0, variables: 1, inline expansions: 27 (1073 bytes) */

// <0005DD09> localize/localize_imp.cpp:3287
// variables: 18
// function calls: 55
void CLocalize::AddStringImpl(const char* pToken, const char* pValue, EKeyReplaceStrategy eReplace, StringProperties_t* pProps)
{
	AllocMark_t allocMark; // 3301
	const char* pStableToken; // 3303
	const LocalizeInstanceIndex_t  k_nIsInsert; // 3310
	LocalizeStringIndex_t nTokenIndex; // 3311
	const char   __FUNCTION__; // 40774
	bool bFoundEntry; // 3361
	{
		LocalizeInstanceIndex_t nInstance; // 3324
		{
			const LocalizedString_t& lstr; // 3326
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3344
			}
			CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
					int i);  // 3326
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 3335
			LocalizedString_t::IsVariantSubString(); // 3327
		}
		CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
				int i);  // 3324
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3359
	}
	{
		LocalizeInstanceIndex_t nInstance; // 3364
		{
			const LocalizedString_t& lstr; // 3366
			{
				uint32 nTokenNameFlags; // 3415
				bool bSimpleMatch; // 3424
				CUtlSymbol::IsValid(); // 3415
				V_strncmp<int>(const char* s1,
						const char* s2,
						int count);  // 3443
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3453
			}
			CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
					int i);  // 3366
			LocalizedString_t::IsVariantSubString(); // 3367
			CUtlBlockMemory<char, int>::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<char, int>::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<char, int>::MinorIndex(
					int i);  // 193
			CUtlBlockMemory<char, int>::MajorIndex(
					int i);  // 192
			{
			}
			CUtlBlockMemory<char, int>::operator[](
					int i);  // 1480
			StringData_t::operator[](
					int nIndex);  // 3399
			V_strcmp(const char* s1,
				const char* s2);  // 3399
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 3375
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 3388
		}
		CUtlMemory<CUtlHashMap<char const::Element(
			int i);  // 180
		CUtlHashMap<char const::operator[](
				IndexType_t i);  // 3364
	}
	{
		LocalizeInstanceIndex_t nInstance; // 3472
		LocalizedString_t* pLocStr; // 3473
		CUtlMemory<CLocalize::LocalizedString_t, int>::NumAllocated(); // 1143
		CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::Element(
			int i);  // 1148
		CUtlSymbol::CUtlSymbol(); // 1375
		CUtlSymbol::CUtlSymbol(); // 1375
		LocalizedString_t::LocalizedString_t(); // 1479
		Construct<CLocalize::LocalizedString_t>(LocalizedString_t* pMemory); // 1148
		CUtlMemory<CLocalize::LocalizedString_t, int>::Base(); // 112
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::Base(); // 368
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::AddToTail(); // 3472
		CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
				int i);  // 3473
		CUtlMemory<CUtlHashMap<char const::Element(
			int i);  // 180
		CUtlHashMap<char const::operator[](
				IndexType_t i);  // 3474
		CUtlMemory<CUtlHashMap<char const::Element(
			int i);  // 180
		CUtlHashMap<char const::operator[](
				IndexType_t i);  // 3475
		CUtlSymbol::IsValid(); // 3487
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3495
	}
	V_isempty(const char* pszString); // 3289
	StringData_t::GetAllocMark(
			AllocMark_t* pMark);  // 3302
	CUtlBlockMemory<char, int>::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<char, int>::IsIdxValid(
			int i);  // 191
	CUtlBlockMemory<char, int>::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<char, int>::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<char, int>::operator[](
			int i);  // 1519
	StringData_t::AddGetPtr(
			const char* pStr);  // 3303
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 404
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 404
	CUtlHashMap<char const::FindOrInsert(
			const KeyType_t& key,
			const ElemType_t& insert);  // 3311
	CUtlMemory<CUtlHashMap<char const::Element(
		int i);  // 180
	CUtlHashMap<char const::operator[](
			IndexType_t i);  // 3312
	StringData_t::RevertToMark(
			AllocMark_t* pMark);  // 3320
} /* size: 0, variables: 6, inline expansions: 14 (507 bytes) */

// <0005D869> localize/localize_imp.cpp:3499
// variables: 2
// function calls: 12
void CLocalize::AddStringImpl(const char* pToken, const uchar16* pValue16, CUtlSymbol symFileName)
{
	char pValue; // 3507
	StringProperties_t props; // 3517
	V_isempty(const char* pszString); // 3501
	CUtlSymbol::CUtlSymbol(); // 1093
	CUtlSymbol::CUtlSymbol(); // 1093
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1094
	CUtlSymbol::IsValid(); // 1095
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 1112
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 1113
	StringProperties_t::CheckForCoreValve(); // 1096
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1097
	StringProperties_t::StringProperties_t(
				CUtlSymbol symFileName,
				CUtlSymbol symLanguage,
				ELanguage eLanguage,
				uint8 nLangPluralVariants,
				uint8 nLangGenders,
				GenderMap_t pGenderMap);  // 3517
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 3517
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 3517
} /* size: 0, variables: 2, inline expansions: 12 (0 bytes) */

// <0005D3B7> localize/localize_imp.cpp:3521
// variables: 2
// function calls: 12
void CLocalize::AddStringImpl(const char* pToken, const uchar32* pValue32, CUtlSymbol symFileName)
{
	char pValue; // 3529
	StringProperties_t props; // 3539
	V_isempty(const char* pszString); // 3523
	CUtlSymbol::CUtlSymbol(); // 1093
	CUtlSymbol::CUtlSymbol(); // 1093
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1094
	CUtlSymbol::IsValid(); // 1095
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 1112
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 1113
	StringProperties_t::CheckForCoreValve(); // 1096
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 1097
	StringProperties_t::StringProperties_t(
				CUtlSymbol symFileName,
				CUtlSymbol symLanguage,
				ELanguage eLanguage,
				uint8 nLangPluralVariants,
				uint8 nLangGenders,
				GenderMap_t pGenderMap);  // 3539
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 3539
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 3539
} /* size: 0, variables: 2, inline expansions: 12 (0 bytes) */

// <0005C8BA> localize/localize_imp.cpp:3546
// variables: 3
// function calls: 53
void CLocalize::RemoveAll()
{
	CUtlVectorBase<CUtlHashMap<char const::RemoveAll(); // 1798
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 1799
	CUtlVectorBase<CUtlHashMap<char const::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlHashMap<char const::Purge(); // 792
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::Purge(); // 793
	CUtlHashMap<char const::Purge(); // 3548
	{
		int i; // 359
	}
	CUtlBlockMemory<char, int>::Purge(); // 354
	CUtlBlockMemory<char, int>::Purge(); // 1537
	StringData_t::Purge(); // 3549
	{
		int i; // 1721
		CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Element(
			int i);  // 1723
		LocalizationFileInfo_t::~LocalizationFileInfo_t(); // 1526
		Destruct<CLocalize::LocalizationFileInfo_t>(LocalizationFileInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::Purge(); // 903
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Purge(); // 3550
	{
		int i; // 1807
		CUtlMemory<CLocalize::FileChangeDir_t::operator[](
				int i);  // 602
		CUtlVectorBase<CLocalize::FileChangeDir_t::Element(
			int i);  // 1809
		ValidateAlignment<UtlLinkedListElem_t<CUtlString, unsigned int> >(void); // 508
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::IsExternallyAllocated(); // 905
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::Purge(); // 903
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::Purge(); // 510
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::~CUtlMemory(); // 462
		~CUtlLinkedList(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this); // 487
		CUtlString::~CUtlString(); // 487
		CDirWatcher::~CDirWatcher(); // 1580
		FileChangeDir_t::~FileChangeDir_t(); // 1809
	}
	CUtlVectorBase<CLocalize::FileChangeDir_t::RemoveAll(); // 1798
	CUtlMemory<CLocalize::FileChangeDir_t::Purge(); // 903
	CUtlMemory<CLocalize::FileChangeDir_t::IsExternallyAllocated(); // 905
	CUtlMemory<CLocalize::FileChangeDir_t::Purge(); // 1799
	CUtlVectorBase<CLocalize::FileChangeDir_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<CLocalize::FileChangeDir_t::Purge(); // 1811
	CUtlVectorBase<CLocalize::FileChangeDir_t::PurgeAndDeleteElements(); // 6722
	CLocalize::EnableFileWatch(
			bool bEnable);  // 3553
	CUtlVectorBase<CUtlHashMap<char const::RemoveAll(); // 1798
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 1799
	CUtlVectorBase<CUtlHashMap<char const::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlHashMap<char const::Purge(); // 792
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::Purge(); // 793
	CUtlHashMap<char const::Purge(); // 3678
	CLocalize::DiscardDupValueLookup(); // 3554
} /* size: 836, inline expansions: 38 (2178 bytes) */

// <00059B1F> localize/localize_imp.cpp:3560
// variables: 14
// function calls: 200
void CLocalize::RemoveAllFileStrings()
{
	TokenMap_t lookup; // 3562
	InstanceVector_t instances; // 3563
	StringData_t stringData; // 3564
	{
		int iMap; // 3570
		{
			const char* pToken; // 3572
			const char* pNewToken; // 3573
			LocalizeInstanceIndex_t nPreviousEntry; // 3575
			{
				LocalizeInstanceIndex_t nInstanceIndex; // 3576
				{
					const LocalizedString_t& existingEntry; // 3578
					LocalizeInstanceIndex_t nNewEntryIndex; // 3585
					LocalizedString_t* pNewEntry; // 3586
					CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
							int i);  // 3578
					CUtlSymbol::operator==(
							UtlSymId_t id);  // 3579
					CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::Element(
						int i);  // 1201
					CUtlSymbol::CUtlSymbol(
							const CUtlSymbol& sym);  // 1375
					CUtlSymbol::CUtlSymbol(
							const CUtlSymbol& sym);  // 1375
					LocalizedString_t::LocalizedString_t(
								const LocalizedString_t  &);  // 1520
					CopyConstruct<CLocalize::LocalizedString_t>(LocalizedString_t* pMemory,
											const LocalizedString_t& src);  // 1201
					CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::AddToTail(
							const LocalizedString_t& src);  // 3585
					CUtlBlockMemory<char, int>::MajorIndex(
							int i);  // 243
					CUtlBlockMemory<char, int>::IsIdxValid(
							int i);  // 191
					CUtlBlockMemory<char, int>::MajorIndex(
							int i);  // 192
					CUtlBlockMemory<char, int>::MinorIndex(
							int i);  // 193
					{
					}
					CUtlBlockMemory<char, int>::operator[](
							int i);  // 1480
					StringData_t::operator[](
							int nIndex);  // 3588
					CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
							int i);  // 3592
					CUtlBlockMemory<char, int>::MajorIndex(
							int i);  // 243
					CUtlBlockMemory<char, int>::IsIdxValid(
							int i);  // 191
					CUtlBlockMemory<char, int>::MinorIndex(
							int i);  // 193
					{
					}
					CUtlBlockMemory<char, int>::operator[](
							int i);  // 1519
					StringData_t::AddGetPtr(
							const char* pStr);  // 3597
					CUtlMemory<CUtlHashMap<char const::operator[](
							int i);  // 438
					CopyConstruct<int>(int* pMemory,
								const int& src);  // 438
					CUtlMemory<CUtlHashMap<char const::operator[](
							int i);  // 441
					CUtlHashMap<char const::InsertOrReplace(
							const KeyType_t& key,
							const ElemType_t& insert);  // 203
					CUtlHashMap<char const::Insert(
						const KeyType_t& key,
						const ElemType_t& insert);  // 3600
				}
				CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
						int i);  // 3576
			}
		}
		CUtlHashMap<char const::MaxElement(); // 3570
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 196
		CUtlHashMap<char const::IsValidIndex(
				IndexType_t i);  // 3570
	}
	CUtlBlockMemory<char, int>::CUtlBlockMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 1472
	StringData_t::StringData_t(); // 3564
	CUtlMemory<CUtlHashMap<char const::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashMap<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlHashMap<char const::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlHashMap<char const::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlHashMap<char const::CUtlVector(); // 144
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 245
	CVariableBitStringBase::CVariableBitStringBase(); // 302
	CBitStringT<CVariableBitStringBase>::ClearAllBits(); // 310
	CBitStringT<CVariableBitStringBase>::CBitStringT(); // 216
	CBitString::CBitString(); // 144
	CUtlMemory<CUtlHashMap<char const::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashMap<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 144
	InvalidIndex(void); // 148
	InvalidIndex(void); // 149
	InvalidIndex(void); // 150
	CUtlHashMap<char const::CUtlHashMap(); // 3562
	CUtlMemory<CLocalize::LocalizedString_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CLocalize::LocalizedString_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::CUtlVector(); // 3563
	CLocalize::StartChange(); // 3567
	CUtlMemory<CLocalize::LocalizedString_t, int>::SetGrowSize(
			int nSize);  // 318
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::SetGrowSize(
			int size);  // 3565
	V_swap_through_temp<char**>(char* *& x,
					char* *& y);  // 142
	V_swap_through_temp<int>(int& x,
				int& y);  // 143
	CUtlBlockMemory<char, int>::Swap(
		CUtlBlockMemory<char, int>& mem);  // 1530
	V_swap_through_temp<int>(int& x,
				int& y);  // 1531
	StringData_t::Swap(
		StringData_t& other);  // 3608
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 535
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::HashBucket_t*>(HashBucket_t *& x,
																HashBucket_t *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<CUtlHashMap<char const::Swap(
		CUtlMemory<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::HashBucket_t, in mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::HashBucket_t*>(HashBucket_t *& __a,
																HashBucket_t *& __b);  // 19
	V_swap<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::HashBucket_t*>(HashBucket_t *& x,
																HashBucket_t *& y);  // 1354
	CUtlVectorBase<CUtlHashMap<char const::Swap(
		CUtlVectorBase<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::HashBucket_t vec);  // 839
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 271
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 274
	CVariableBitStringBase::CVariableBitStringBase(
				const CVariableBitStringBase& from);  // 263
	CVariableBitStringBase::CVariableBitStringBase(
				const CVariableBitStringBase& from);  // 61
	CBitStringT<CVariableBitStringBase>::CBitStringT(
			CBitStringT<CVariableBitStringBase> &);  // 212
	CBitString::CBitString(
			CBitString &);  // 235
	CVariableBitStringBase::Size(); // 281
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 283
	CVariableBitStringBase::operator=(
			const CVariableBitStringBase& from);  // 61
	CBitStringT<CVariableBitStringBase>::operator=(
			CBitStringT<CVariableBitStringBase> &);  // 212
	CBitString::operator=(
			CBitString &);  // 236
	CVariableBitStringBase::Size(); // 281
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 283
	CVariableBitStringBase::operator=(
			const CVariableBitStringBase& from);  // 61
	CBitStringT<CVariableBitStringBase>::operator=(
			CBitStringT<CVariableBitStringBase> &);  // 212
	CBitString::operator=(
			CBitString &);  // 237
	CVariableBitStringBase::~CVariableBitStringBase(); // 61
	CBitStringT<CVariableBitStringBase>::~CBitStringT(); // 212
	CBitString::~CBitString(); // 238
	swap<CBitString>(CBitString& __a,
			CBitString& __b);  // 840
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 535
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::Node_t*>(Node_t *& x,
																Node_t *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<CUtlHashMap<char const::Swap(
		CUtlMemory<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::Node_t, int>& mem);  // 841
	swap<int>(int& __a,
			int& __b);  // 842
	swap<int>(int& __a,
			int& __b);  // 846
	CUtlHashMap<char const::Swap(
		CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>& that);  // 3609
	CUtlMemory<CLocalize::LocalizedString_t, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	V_swap_through_temp<CLocalize::LocalizedString_t*>(LocalizedString_t *& x,
								LocalizedString_t *& y);  // 537
	CUtlMemory<CLocalize::LocalizedString_t, int>::Swap(
		CUtlMemory<CLocalize::LocalizedString_t, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<CLocalize::LocalizedString_t*>(LocalizedString_t *& __a,
						LocalizedString_t *& __b);  // 19
	V_swap<CLocalize::LocalizedString_t*>(LocalizedString_t *& x,
						LocalizedString_t *& y);  // 1354
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::Swap(
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >& vec);  // 3610
	{
		int i; // 1721
		CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Element(
			int i);  // 1723
		LocalizationFileInfo_t::~LocalizationFileInfo_t(); // 1526
		Destruct<CLocalize::LocalizationFileInfo_t>(LocalizationFileInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::Purge(); // 903
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Purge(); // 3611
	{
		int i; // 1807
		CUtlMemory<CLocalize::FileChangeDir_t::operator[](
				int i);  // 602
		CUtlVectorBase<CLocalize::FileChangeDir_t::Element(
			int i);  // 1809
		ValidateAlignment<UtlLinkedListElem_t<CUtlString, unsigned int> >(void); // 508
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::IsExternallyAllocated(); // 905
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::Purge(); // 903
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::Purge(); // 510
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::~CUtlMemory(); // 462
		~CUtlLinkedList(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this); // 487
		CUtlString::~CUtlString(); // 487
		CDirWatcher::~CDirWatcher(); // 1580
		FileChangeDir_t::~FileChangeDir_t(); // 1809
	}
	CUtlVectorBase<CLocalize::FileChangeDir_t::RemoveAll(); // 1798
	CUtlMemory<CLocalize::FileChangeDir_t::Purge(); // 903
	CUtlMemory<CLocalize::FileChangeDir_t::IsExternallyAllocated(); // 905
	CUtlMemory<CLocalize::FileChangeDir_t::Purge(); // 1799
	CUtlVectorBase<CLocalize::FileChangeDir_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<CLocalize::FileChangeDir_t::Purge(); // 1811
	CUtlVectorBase<CLocalize::FileChangeDir_t::PurgeAndDeleteElements(); // 6722
	CLocalize::EnableFileWatch(
			bool bEnable);  // 3614
	CUtlVectorBase<CUtlHashMap<char const::RemoveAll(); // 1798
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 1799
	CUtlVectorBase<CUtlHashMap<char const::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlHashMap<char const::Purge(); // 792
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::Purge(); // 793
	CUtlHashMap<char const::Purge(); // 3678
	CLocalize::DiscardDupValueLookup(); // 3615
	{
		int i; // 359
	}
	CUtlBlockMemory<char, int>::Purge(); // 354
	CUtlBlockMemory<char, int>::Purge(); // 132
	CUtlBlockMemory<char, int>::~CUtlBlockMemory(); // 1465
	StringData_t::~StringData_t(); // 3618
	CUtlMemory<CLocalize::LocalizedString_t, int>::Purge(); // 903
	CUtlMemory<CLocalize::LocalizedString_t, int>::Purge(); // 1799
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::Purge(); // 560
	ValidateAlignment<CLocalize::LocalizedString_t>(void); // 508
	CUtlMemory<CLocalize::LocalizedString_t, int>::Purge(); // 510
	CUtlMemory<CLocalize::LocalizedString_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::~CUtlVector(); // 3618
	CUtlVectorBase<CUtlHashMap<char const::RemoveAll(); // 1798
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 1799
	CUtlVectorBase<CUtlHashMap<char const::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlHashMap<char const::Purge(); // 792
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::Purge(); // 793
	CUtlHashMap<char const::Purge(); // 165
	ValidateAlignment<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::Node_t>(void); // 508
	CUtlMemory<CUtlHashMap<char const::Purge(); // 510
	CUtlMemory<CUtlHashMap<char const::~CUtlMemory(); // 166
	CVariableBitStringBase::~CVariableBitStringBase(); // 61
	CBitStringT<CVariableBitStringBase>::~CBitStringT(); // 212
	CBitString::~CBitString(); // 166
	CUtlVectorBase<CUtlHashMap<char const::RemoveAll(); // 1798
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::Purge(); // 1799
	CUtlVectorBase<CUtlHashMap<char const::Purge(); // 560
	ValidateAlignment<CUtlHashMap<char const*, int, FastCaselessStringEqualFunctor, FastCaselessStringHashFunctor>::HashBucket_t>(void); // 508
	CUtlMemory<CUtlHashMap<char const::Purge(); // 510
	CUtlMemory<CUtlHashMap<char const::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlHashMap<char const::~CUtlVectorBase(); // 410
	CUtlVector<CUtlHashMap<char const::~CUtlVector(); // 166
	CUtlHashMap<char const::~CUtlHashMap(); // 3618
} /* size: 0, variables: 3, inline expansions: 150 (6756 bytes) */

// <00074E7D> localize/localize_imp.cpp:3620
// variable: 1
// function calls: 2
void CLocalize::GetCurrentLanguage()
{
	const char* pLanguage; // 3625
	CUtlSymbol::IsValid(); // 3622
	CLocalize::GetCurrentLanguage(); // 3620
} /* size: 62, variables: 1, inline expansions: 2 (29 bytes) */

// <00059AF9> localize/localize_imp.cpp:3620
// variable: 1
void CLocalize::GetCurrentLanguage()
{
	const char* pLanguage; // 3625
} /* size: 0, variables: 1 */

// <00074F76> localize/localize_imp.cpp:3630
// function calls: 3
void CLocalize::GetCurrentELanguage()
{
	CUtlSymbol::IsValid(); // 3622
	CLocalize::GetCurrentLanguage(); // 3620
	CLocalize::GetCurrentLanguage(); // 3633
} /* size: 53, inline expansions: 3 (49 bytes) */

// <00059AE0> localize/localize_imp.cpp:3630
void CLocalize::GetCurrentELanguage()
{
} /* size: 0 */

// <0005988D> localize/localize_imp.cpp:3637
// variables: 3
// function calls: 4
void CLocalize::SetCurrentLanguage(const char* pLanguage)
{
	const char   __FUNCTION__; // 40904
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3640
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3652
	}
	CUtlSymbol::IsValid(); // 3640
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 3641
	ComputeNumPluralVariants(ELanguage eLang); // 3650
	{
	}
	ComputeNumGenders(ELanguage eLang,
				GenderMap_t* pGenderMap);  // 3651
} /* size: 0, variables: 1, inline expansions: 4 (121 bytes) */

// <0005975D> localize/localize_imp.cpp:3655
// function calls: 4
void CLocalize::GetLinguisticCaseFlags()
{
	CUtlSymbol::IsValid(); // 3622
	CLocalize::GetCurrentLanguage(); // 3620
	CLocalize::GetCurrentLanguage(); // 3633
	CLocalize::GetCurrentELanguage(); // 3657
} /* size: 67, inline expansions: 4 (77 bytes) */

// <0005914F> localize/localize_imp.cpp:3662
// variables: 3
// function calls: 24
void CLocalize::BuildDupValueLookup()
{
	{
		int i; // 3666
		{
			LocalizeInstanceIndex_t nInstance; // 3668
			{
				const LocalizedString_t& lstr; // 3670
				CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
						int i);  // 3670
				CUtlMemory<CUtlHashMap<char const::operator[](
						int i);  // 438
				CopyConstruct<int>(int* pMemory,
							const int& src);  // 438
				CUtlMemory<CUtlHashMap<char const::operator[](
						int i);  // 441
				CUtlHashMap<char const::InsertOrReplace(
						const KeyType_t& key,
						const ElemType_t& insert);  // 3671
				CUtlBlockMemory<char, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<char, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<char, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<char, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<char, int>::operator[](
						int i);  // 1480
				StringData_t::operator[](
						int nIndex);  // 3671
			}
			CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
					int i);  // 3668
		}
		CUtlHashMap<char const::MaxElement(); // 3666
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 196
		CUtlHashMap<char const::IsValidIndex(
				IndexType_t i);  // 3666
	}
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 763
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 766
	CUtlMemory<CUtlHashMap<char const::Base(); // 112
	CUtlVectorBase<CUtlHashMap<char const::Base(); // 766
	memset(void* __dest,
		int __ch,
		size_t __len);  // 766
	CUtlHashMap<char const::RemoveAll(); // 750
	CUtlHashMap<char const::RemoveAll(); // 3664
} /* size: 0, inline expansions: 7 (228 bytes) */

// <0007507C> localize/localize_imp.cpp:3676
// function calls: 10
void CLocalize::DiscardDupValueLookup()
{
	CUtlVectorBase<CUtlHashMap<char const::RemoveAll(); // 1798
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 1799
	CUtlVectorBase<CUtlHashMap<char const::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlHashMap<char const::Purge(); // 792
	CUtlMemory<CUtlHashMap<char const::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashMap<char const::Purge(); // 903
	CUtlMemory<CUtlHashMap<char const::Purge(); // 793
	CUtlHashMap<char const::Purge(); // 3678
} /* size: 0, inline expansions: 10 (0 bytes) */

// <00059136> localize/localize_imp.cpp:3676
void CLocalize::DiscardDupValueLookup()
{
} /* size: 0 */

// <0007220D> localize/localize_imp.cpp:3684
void CLocalize::GetFirstStringIndex()
{
} /* size: 7 */

// <00072237> localize/localize_imp.cpp:3692
// function calls: 3
void CLocalize::GetNextStringIndex(LocalizeStringIndex_t index)
{
	CUtlHashMap<char const::MaxElement(); // 3699
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 196
	CUtlHashMap<char const::IsValidIndex(
			IndexType_t i);  // 3704
} /* size: 78, inline expansions: 3 (28 bytes) */

// <000590F7> localize/localize_imp.cpp:3692
void CLocalize::GetNextStringIndex(LocalizeStringIndex_t index)
{
} /* size: 0 */

// <00058FCC> localize/localize_imp.cpp:3714
// variables: 2
// function calls: 2
void CLocalize::GetNameByIndex(LocalizeStringIndex_t index)
{
	const char   __FUNCTION__; // 40801
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3723
	}
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 196
	CUtlHashMap<char const::IsValidIndex(
			IndexType_t i);  // 3721
} /* size: 0, variables: 1, inline expansions: 2 (56 bytes) */

// <00058E87> localize/localize_imp.cpp:3733
// variables: 2
// function calls: 2
void CLocalize::GetValueByIndex(LocalizeStringIndex_t index)
{
	const char   __FUNCTION__; // 40828
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3742
	}
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 196
	CUtlHashMap<char const::IsValidIndex(
			IndexType_t i);  // 3740
} /* size: 0, variables: 1, inline expansions: 2 (56 bytes) */

// <0007528E> localize/localize_imp.cpp:3752
// function calls: 5
void CLocalize::SkipVariantInstance(const LocalizedString_t* pLocStr, uint32 nFlags, ELanguage eLanguage)
{
	LocalizedString_t::HasAllVariants(); // 3755
	LocalizedString_t::IsValidForPlural(); // 3763
	LocalizedString_t::GetLanguage(); // 3765
	LocalizedString_t::GetLanguage(); // 3782
	LocalizedString_t::GetLanguage(); // 3775
} /* size: 0, inline expansions: 5 (0 bytes) */

// <00058E47> localize/localize_imp.cpp:3752
void CLocalize::SkipVariantInstance(const LocalizedString_t* pLocStr, uint32 nFlags, ELanguage eLanguage)
{
} /* size: 0 */

// <00058B3B> localize/localize_imp.cpp:3790
// variables: 5
// function calls: 9
void CLocalize::GetNumVariantValuesByIndex(LocalizeStringIndex_t index, uint32 nFlags)
{
	const char   __FUNCTION__; // 41120
	int nCount; // 3811
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3799
	}
	{
		LocalizeInstanceIndex_t nInstance; // 3812
		{
			const LocalizedString_t& lstr; // 3814
			CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
					int i);  // 3814
			LocalizedString_t::HasAllVariants(); // 3755
			LocalizedString_t::IsValidForPlural(); // 3763
			LocalizedString_t::GetLanguage(); // 3765
			LocalizedString_t::GetLanguage(); // 3782
			CLocalize::SkipVariantInstance(
						const LocalizedString_t* pLocStr,
						uint32 nFlags,
						ELanguage eLanguage);  // 3815
		}
	}
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 196
	CUtlHashMap<char const::IsValidIndex(
			IndexType_t i);  // 3797
} /* size: 0, variables: 2, inline expansions: 2 (56 bytes) */

// <00058380> localize/localize_imp.cpp:3827
// variables: 10
// function calls: 25
void CLocalize::GetVariantValueByIndexImpl(LocalizeStringIndex_t index, int64 nQuantity, float64 flQuantity, int nPrecision, int nVariant, ELanguage eVarLang, uint32 nFlags)
{
	const char   __FUNCTION__; // 41120
	uint8 nIterIdx; // 3838
	LocalizeInstanceIndex_t nPrimaryInstance; // 3839
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3831
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3835
	}
	{
		LocalizeInstanceIndex_t nInstance; // 3840
		{
			const LocalizedString_t& lstr; // 3842
			{
				ELanguage eInstLang; // 3860
				int nLstrVariant; // 3879
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3865
				}
				LocalizedString_t::GetLanguage(); // 3860
				LocalizedString_t::HasNoVariants(); // 3880
				CUtlBlockMemory<char, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<char, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<char, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<char, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<char, int>::operator[](
						int i);  // 1480
				StringData_t::operator[](
						int nIndex);  // 3887
			}
			CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
					int i);  // 3842
			LocalizedString_t::HasAllVariants(); // 3755
			LocalizedString_t::IsValidForPlural(); // 3763
			LocalizedString_t::GetLanguage(); // 3765
			LocalizedString_t::GetLanguage(); // 3782
			LocalizedString_t::GetLanguage(); // 3775
			CLocalize::SkipVariantInstance(
						const LocalizedString_t* pLocStr,
						uint32 nFlags,
						ELanguage eLanguage);  // 3843
			CUtlBlockMemory<char, int>::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<char, int>::IsIdxValid(
					int i);  // 191
			{
			}
			CUtlBlockMemory<char, int>::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<char, int>::operator[](
					int i);  // 1480
			StringData_t::operator[](
					int nIndex);  // 3853
		}
		CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
				int i);  // 3840
	}
	CUtlMemory<CUtlHashMap<char const::Element(
		int i);  // 180
	CUtlHashMap<char const::operator[](
			IndexType_t i);  // 3839
} /* size: 0, variables: 3, inline expansions: 2 (6 bytes) */

// <0005816C> localize/localize_imp.cpp:3900
// variables: 3
// function calls: 4
void CLocalize::GetVariantValueByIndex(LocalizeStringIndex_t index, int nVariant, uint32 nFlags)
{
	const char   __FUNCTION__; // 41012
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3909
	}
	{
		uint8 nRawGender; // 3924
		CLocalize::MapGenderToRawGender(
					LOC_GENDER eGender,
					uint8* pRawGender);  // 5253
		CLocalize::MapGenderToRawGender(
					LOC_GENDER eGender,
					uint8* pRawGender);  // 3925
	}
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 196
	CUtlHashMap<char const::IsValidIndex(
			IndexType_t i);  // 3907
} /* size: 0, variables: 1, inline expansions: 2 (45 bytes) */

// <00057F34> localize/localize_imp.cpp:3944
// variables: 4
// function calls: 4
void CLocalize::GetPluralGenderValueByIndex(LocalizeStringIndex_t index, int nPlural, LOC_GENDER eGender, uint32 nFlags)
{
	const char   __FUNCTION__; // 41147
	uint8 nRawGender; // 3968
	int nVariant; // 3975
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3953
	}
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 196
	CUtlHashMap<char const::IsValidIndex(
			IndexType_t i);  // 3951
	CLocalize::MapGenderToRawGender(
				LOC_GENDER eGender,
				uint8* pRawGender);  // 5253
	CLocalize::MapGenderToRawGender(
				LOC_GENDER eGender,
				uint8* pRawGender);  // 3969
} /* size: 0, variables: 3, inline expansions: 4 (122 bytes) */

// <00057940> localize/localize_imp.cpp:3984
// variables: 5
// function calls: 22
void CLocalize::FindExistingValueIndex(const char* value)
{
	int nIndex; // 3986
	{
		uint32 c; // 354
	}
	StringHashFunctor::operator(
			const char* s);  // 571
	CUtlVectorBase<CUtlHashMap<char const::Count(); // 574
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 575
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlHashMap<char const::operator[](
			int i);  // 611
	{
		IndexType_t iNode; // 613
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 618
		V_strcmp(const char* s1,
			const char* s2);  // 127
		StringEqualFunctor::operator(
				const char* a,
				const char* b);  // 618
	}
	CUtlHashMap<char const::FindInBucket(
			int iBucket,
			const KeyType_t& key);  // 578
	ModPowerOfTwo<unsigned int, int>(unsigned int a,
					int b);  // 589
	CVariableBitStringBase::Size(); // 332
	{
	}
	CVariableBitStringBase::GetInts(); // 333
	CBitStringT<CVariableBitStringBase>::GetBit(
		int bitNum);  // 591
	{
		int iNode2; // 593
		CUtlMemory<CUtlHashMap<char const::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlHashMap<char const::operator[](
				int i);  // 611
		{
			IndexType_t iNode; // 613
			CUtlMemory<CUtlHashMap<char const::operator[](
					int i);  // 618
			V_strcmp(const char* s1,
				const char* s2);  // 127
			StringEqualFunctor::operator(
					const char* a,
					const char* b);  // 618
		}
		CUtlHashMap<char const::FindInBucket(
				int iBucket,
				const KeyType_t& key);  // 593
	}
	CUtlHashMap<char const::Find(
		const KeyType_t& key);  // 3986
	CUtlMemory<CUtlHashMap<char const::Element(
		int i);  // 180
	CUtlHashMap<char const::operator[](
			IndexType_t i);  // 3989
} /* size: 0, variables: 1, inline expansions: 13 (580 bytes) */

// <00057786> localize/localize_imp.cpp:3997
// variables: 3
// function calls: 4
void CLocalize::GetFileNameByIndex(LocalizeStringIndex_t index)
{
	const char   __FUNCTION__; // 40904
	const LocalizedString_t& lstr; // 4010
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4006
	}
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 196
	CUtlHashMap<char const::IsValidIndex(
			IndexType_t i);  // 4004
	CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
			int i);  // 4010
} /* size: 0, variables: 2, inline expansions: 4 (89 bytes) */

// <000574BB> localize/localize_imp.cpp:4017
// variables: 3
// function calls: 7
void CLocalize::SetValueByIndex(LocalizeStringIndex_t index, const char* pNewValue)
{
	const char   __FUNCTION__; // 40828
	LocalizedString_t* pLocStr; // 4036
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4026
	}
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 196
	CUtlHashMap<char const::IsValidIndex(
			IndexType_t i);  // 4024
	CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
			int i);  // 4036
	CLocalize::StartChange(); // 4039
	CUtlMemory<CUtlHashMap<char const::Element(
		int i);  // 182
	CUtlHashMap<char const::Key(
		IndexType_t i);  // 4040
} /* size: 0, variables: 2, inline expansions: 7 (125 bytes) */

// <00057025> localize/localize_imp.cpp:4047
// variables: 9
// function calls: 13
void CLocalize::RemoveStringForLanguage(const char* pToken, ELanguage eLang)
{
	LocalizeStringIndex_t idx; // 4054
	bool bFound; // 4067
	LocalizeInstanceIndex_t nPrevInstance; // 4068
	LocalizeInstanceIndex_t nNextInstance; // 4069
	const char   __FUNCTION__; // 41039
	{
		LocalizeInstanceIndex_t nInstance; // 4070
		{
			LocalizedString_t* pLocStr; // 4072
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4088
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4092
			}
			CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
					int i);  // 4086
			CUtlSymbol::IsValid(); // 4090
			CUtlMemory<CUtlHashMap<char const::Element(
				int i);  // 180
			CUtlHashMap<char const::operator[](
					IndexType_t i);  // 4082
			LocalizedString_t::GetLanguage(); // 4076
			CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
					int i);  // 4072
		}
		CUtlMemory<CUtlHashMap<char const::Element(
			int i);  // 180
		CUtlHashMap<char const::operator[](
				IndexType_t i);  // 4070
	}
	V_isempty(const char* pszString); // 4049
	CUtlMemory<CUtlHashMap<char const::Element(
		int i);  // 180
	CUtlHashMap<char const::operator[](
			IndexType_t i);  // 4109
} /* size: 0, variables: 5, inline expansions: 3 (27 bytes) */

// <00072302> localize/localize_imp.cpp:4120
// function call: 1
void CLocalize::GetLocalizationFileCount()
{
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Count(); // 4122
} /* size: 11, inline expansions: 1 (0 bytes) */

// <0005700C> localize/localize_imp.cpp:4120
void CLocalize::GetLocalizationFileCount()
{
} /* size: 0 */

// <00072444> localize/localize_imp.cpp:4128
// function calls: 2
void CLocalize::GetLocalizationFileName(int index)
{
	CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::operator[](
			int i);  // 4130
} /* size: 26, inline expansions: 2 (28 bytes) */

// <00056FE6> localize/localize_imp.cpp:4128
void CLocalize::GetLocalizationFileName(int index)
{
} /* size: 0 */

// <00056E9A> localize/localize_imp.cpp:4136
// variables: 2
// function calls: 3
void CLocalize::LocalizationFileIsLoaded(const char* name)
{
	int c; // 4138
	{
		int i; // 4139
		CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::operator[](
				int i);  // 4141
	}
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Count(); // 4138
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00056C76> localize/localize_imp.cpp:4151
// variables: 2
// function calls: 4
void CLocalize::ConstructString(char* unicodeOutput, int unicodeBufferSizeInBytes, const char* formatString, int numFormatParameters, ...)
{
	va_list argList; // 4153
	CBufferString wrapOut; // 4156
	CBufferString::SetFixedPtr(
			char* pBuffer,
			int nBufferChars,
			int nStringChars,
			bool bFreeBuffer);  // 4157
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 4156
	CBufferString::~CBufferString(); // 4161
} /* size: 273, variables: 2, inline expansions: 4 (71 bytes) */

// <00074445> localize/localize_imp.cpp:4166
void CLocalize::ConstructStringArgArray(CBufferString* pOut, const char* formatString, int numFormatParameters, const char* const* pArgList, bool bAppend)
{
} /* size: 24 */

// <00056A62> localize/localize_imp.cpp:4171
// variables: 4
// function call: 1
void CLocalize::ConstructStringVArgs(CBufferString* pOut, const char* formatString, int numFormatParameters, typedef __va_list_tag __va_list_tag* argList, bool bAppend)
{
	const char* formatParams; // 4173
	const char   __FUNCTION__; // 40958
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4174
	}
	{
		int i; // 4179
	}
	CLocalize::ConstructStringArgArray(
				CBufferString* pOut,
				const char* formatString,
				int numFormatParameters,
				const char* const* pArgList,
				bool bAppend);  // 4184
} /* size: 0, variables: 2, inline expansions: 1 (27 bytes) */

// <00056938> localize/localize_imp.cpp:4187
// variable: 1
// function calls: 3
void CLocalize::ConstructString(CBufferString* pOut, const char* formatString, int numFormatParameters, ...)
{
	va_list argList; // 4189
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4195
} /* size: 219, variables: 1, inline expansions: 3 (86 bytes) */

// <0005680E> localize/localize_imp.cpp:4198
// variable: 1
// function calls: 3
void CLocalize::AppendConstructString(CBufferString* pOut, const char* formatString, int numFormatParameters, ...)
{
	va_list argList; // 4200
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4206
} /* size: 219, variables: 1, inline expansions: 3 (86 bytes) */

// <000566CA> localize/localize_imp.cpp:4209
// variable: 1
// function calls: 3
void CLocalize::AppendOrConstructString(bool bAppend, CBufferString* pOut, const char* formatString, int numFormatParameters, ...)
{
	va_list argList; // 4211
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4217
} /* size: 219, variables: 1, inline expansions: 3 (86 bytes) */

// <00056614> localize/localize_imp.cpp:4223
void CLocalize::ConstructString(CBufferString* pOut, const char* formatString, KeyValues* localizationVariables, bool bAppend)
{
} /* size: 24 */

// <000744EA> localize/localize_imp.cpp:4231
// variable: 1
// function calls: 12
void CLocalize::ConstructString(CBufferString* pOut, LocalizeStringIndex_t unlocalizedTextSymbol, KeyValues* localizationVariables, bool bAppend)
{
	const char* pFormatString; // 4236
	CBufferString::LengthAllocated(); // 4233
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4234
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 4243
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4244
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 4241
	CLocalize::ConstructString(
			CBufferString* pOut,
			LocalizeStringIndex_t unlocalizedTextSymbol,
			KeyValues* localizationVariables,
			bool bAppend);  // 4231
} /* size: 247, variables: 1, inline expansions: 12 (408 bytes) */

// <000565BA> localize/localize_imp.cpp:4231
// variable: 1
void CLocalize::ConstructString(CBufferString* pOut, LocalizeStringIndex_t unlocalizedTextSymbol, KeyValues* localizationVariables, bool bAppend)
{
	const char* pFormatString; // 4236
} /* size: 0, variables: 1 */

// <0007584E> localize/localize_imp.cpp:4256
// variable: 1
// function calls: 10
void CLocalize::ConstructStringToken(CBufferString* pOut, const char* pToken, KeyValues* localizationVariables, bool bAppend)
{
	LocalizeStringIndex_t index; // 4258
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 4271
	CBufferString::IsCurBufferFull(); // 833
	CBufferString::IsFixedFull(); // 4272
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4276
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 4269
	CLocalize::ConstructStringToken(
				CBufferString* pOut,
				const char* pToken,
				KeyValues* localizationVariables,
				bool bAppend);  // 4256
} /* size: 259, variables: 1, inline expansions: 10 (376 bytes) */

// <00056560> localize/localize_imp.cpp:4256
// variable: 1
void CLocalize::ConstructStringToken(CBufferString* pOut, const char* pToken, KeyValues* localizationVariables, bool bAppend)
{
	LocalizeStringIndex_t index; // 4258
} /* size: 0, variables: 1 */

// <00072604> localize/localize_imp.cpp:4280
// function calls: 4
const char* LocFormatToPrintFormat(const char* pLocFormat, const char* pDefault)
{
	V_strcmp(const char* s1,
		const char* s2);  // 4301
	V_strcmp(const char* s1,
		const char* s2);  // 4289
	V_strcmp(const char* s1,
		const char* s2);  // 4294
	LocFormatToPrintFormat(const char* pLocFormat,
				const char* pDefault);  // 4280
} /* size: 106, inline expansions: 4 (50 bytes) */

// <00056532> localize/localize_imp.cpp:4280
const char* LocFormatToPrintFormat(const char* pLocFormat, const char* pDefault)
{
} /* size: 0 */

// <00056511> localize/localize_imp.cpp:4310
bool CheckEmptyOrUnderscore(const char* pLocFormat)
{
} /* size: 0 */

// <00054E8D> localize/localize_imp.cpp:4323
// variables: 23
// function calls: 70
void CLocalize::ConstructDateString(CBufferString* pOut, LOC_DATE_FORMAT format, tm* pTime, bool bAppend)
{
	const char* pszMonth; // 4325
	const char* pszMonthShort; // 4326
	const char* pszDayOfWeek; // 4327
	const char* pszDayOfWeekShort; // 4328
	const char* pszDayNumFormat; // 4329
	const char* pszMonthNumFormat; // 4330
	const char* pszYearNumFormat; // 4331
	const char* pszHourNumFormat; // 4332
	const char* pszAM; // 4333
	const char* pszPM; // 4334
	char szYear; // 4336
	char szMonthNum; // 4340
	char szDay; // 4343
	int nHour; // 4360
	char szHour; // 4361
	const char* pszAMPM; // 4362
	char szMinute; // 4378
	char szSecond; // 4381
	const char* pToken; // 4389
	const char* pStrings; // 4390
	int nStrings; // 4391
	const char   __FUNCTION__; // 40931
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4545
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 4325
	V_isempty(const char* pszString); // 6256
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 6254
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 4325
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 4325
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 4326
	V_isempty(const char* pszString); // 6256
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 6254
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 4326
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 4326
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 4327
	V_isempty(const char* pszString); // 6256
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 6254
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 4327
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 4327
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 4328
	V_isempty(const char* pszString); // 6256
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 6254
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 4328
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 4328
	CLocalize::FindSubLanguageUnsafe(
				const char* pToken);  // 6238
	CLocalize::FindSubLanguageUnsafe(
				const char* pToken);  // 4329
	CLocalize::FindSubLanguageUnsafe(
				const char* pToken);  // 6238
	CLocalize::FindSubLanguageUnsafe(
				const char* pToken);  // 4330
	CLocalize::FindSubLanguageUnsafe(
				const char* pToken);  // 6238
	CLocalize::FindSubLanguageUnsafe(
				const char* pToken);  // 4331
	CLocalize::FindSubLanguageUnsafe(
				const char* pToken);  // 6238
	CLocalize::FindSubLanguageUnsafe(
				const char* pToken);  // 4332
	CLocalize::FindSubLanguageUnsafe(
				const char* pToken);  // 6238
	CLocalize::FindSubLanguageUnsafe(
				const char* pToken);  // 4333
	CLocalize::FindSubLanguageUnsafe(
				const char* pToken);  // 6238
	CLocalize::FindSubLanguageUnsafe(
				const char* pToken);  // 4334
	V_strcmp(const char* s1,
		const char* s2);  // 4338
	CheckEmptyOrUnderscore(const char* pLocFormat); // 4363
	CheckEmptyOrUnderscore(const char* pLocFormat); // 4363
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 4386
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 6254
	V_isempty(const char* pszString); // 6256
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 4546
	CLocalize::ConstructStringArgArray(
				CBufferString* pOut,
				const char* formatString,
				int numFormatParameters,
				const char* const* pArgList,
				bool bAppend);  // 4546
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4547
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4538
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4542
} /* size: 3433, variables: 22, inline expansions: 70 (3076 bytes) */

// <00077057> localize/localize_imp.cpp:4550
// variables: 2
void CLocalize::ConstructDateString(CBufferString* pOut, LOC_DATE_FORMAT format, uint64 nTime, bool bAppend)
{
	time_t timeVal; // 4552
	tm timeVals; // 4553
} /* size: 143, variables: 2 */

// <00054677> localize/localize_imp.cpp:4567
// variables: 6
// function calls: 21
void CLocalize::ConstructRelativeDateString(CBufferString* pOut, LOC_DATE_FORMAT fallbackFormat, uint64 nRelativeTime, bool bAppend)
{
	tm tmThen; // 4574
	tm tmNow; // 4575
	time_t tThen; // 4577
	time_t tNow; // 4578
	int daysThen; // 4589
	int daysNow; // 4590
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 4571
	CLocalize::ConstructDateString(
				CBufferString* pOut,
				LOC_DATE_FORMAT format,
				uint64 nTime,
				bool bAppend);  // 4640
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 6254
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 4612
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 4598
	CBufferString::IsCurBufferFull(); // 833
	CBufferString::IsFixedFull(); // 4599
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4603
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4617
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 6254
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 4598
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 6254
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 4605
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 4605
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 4612
} /* size: 660, variables: 6, inline expansions: 21 (678 bytes) */

// <00054381> localize/localize_imp.cpp:4643
// variables: 6
// function calls: 4
void CLocalize::ConstructRelativeTimeString(CBufferString* pOut, LOC_DATE_FORMAT timeFormat, LOC_DATE_FORMAT fallbackFormat, uint64 nRelativeTime, bool bAppend)
{
	tm tmThen; // 4650
	tm tmNow; // 4651
	time_t tThen; // 4653
	time_t tNow; // 4654
	int daysThen; // 4665
	int daysNow; // 4666
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 4647
	CLocalize::ConstructDateString(
				CBufferString* pOut,
				LOC_DATE_FORMAT format,
				uint64 nTime,
				bool bAppend);  // 4673
} /* size: 364, variables: 6, inline expansions: 4 (120 bytes) */

// <00053F6D> localize/localize_imp.cpp:4676
// variables: 2
// function calls: 9
void CLocalize::AppendDurationUnit(CBufferString* pOut, int nUnits, const char* pTokenNotOne, const char* pTokenOne)
{
	char szUnits; // 4683
	const char* pUnitName; // 4687
	CBufferString::IsEmpty(); // 4678
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 4685
	V_isempty(const char* pszString); // 6240
	CLocalize::FindSubLanguageUnsafe(
				const char* pToken);  // 6238
	CLocalize::FindSubLanguageUnsafe(
				const char* pToken);  // 4687
	CheckEmptyOrUnderscore(const char* pLocFormat); // 4688
	CBufferString::Append(
		char ch,
		bool bExact);  // 4690
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 4691
	CBufferString::Append(
		char ch,
		bool bExact);  // 4680
} /* size: 351, variables: 2, inline expansions: 9 (259 bytes) */

// <00053383> localize/localize_imp.cpp:4695
// variables: 21
// function calls: 20
void CLocalize::ConstructDurationString(CBufferString* pOut, LOC_DURATION_FORMAT format, int nSeconds, bool bAppend)
{
	int ss; // 4702
	int mm; // 4703
	int hh; // 4704
	int days; // 4705
	const char   __FUNCTION__; // 41039
	{
		char szHH; // 4719
		char szMM; // 4722
		char szSS; // 4725
		char szDays; // 4728
		CLocalize::FindSubLanguageSafe(
					const char* pToken);  // 6254
		CLocalize::FindSubLanguageSafe(
					const char* pToken);  // 4735
		CLocalize::FindSubLanguageSafe(
					const char* pToken);  // 6254
		CLocalize::FindSubLanguageSafe(
					const char* pToken);  // 4758
		CLocalize::FindSubLanguageSafe(
					const char* pToken);  // 6254
		CLocalize::FindSubLanguageSafe(
					const char* pToken);  // 4748
	}
	{
		char szHH; // 4773
		char szMM; // 4776
		char szSS; // 4779
		char szDays; // 4782
		const char* pTokens; // 4785
		const char* pStrings; // 4786
		int nStartString; // 4787
		int nStrings; // 4839
		const char* pToken; // 4841
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4838
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4847
		}
		CLocalize::FindSubLanguageSafe(
					const char* pToken);  // 6254
		CLocalize::FindSubLanguageSafe(
					const char* pToken);  // 4854
		CLocalize::ConstructStringArgArray(
					CBufferString* pOut,
					const char* formatString,
					int numFormatParameters,
					const char* const* pArgList,
					bool bAppend);  // 4854
	}
	{
		int nUnits; // 4865
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4901
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 4699
	CBufferString::IsCurBufferFull(); // 833
	CBufferString::IsFixedFull(); // 4904
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4908
} /* size: 2255, variables: 5, inline expansions: 11 (210 bytes) */

// <00072738> localize/localize_imp.cpp:4911
// variable: 1
// function calls: 3
const char* CheckLocNumberString(const char* _pIn)
{
	const uint8* pIn; // 4913
	V_strcmp(const char* s1,
		const char* s2);  // 4922
	V_strcmp(const char* s1,
		const char* s2);  // 4926
	CheckLocNumberString(const char* _pIn); // 4911
} /* size: 100, variables: 1, inline expansions: 3 (62 bytes) */

// <00053355> localize/localize_imp.cpp:4911
// variable: 1
const char* CheckLocNumberString(const char* _pIn)
{
	const uint8* pIn; // 4913
} /* size: 0, variables: 1 */

// <0005295E> localize/localize_imp.cpp:4934
// variables: 10
// function calls: 33
void CLocalize::ConstructNumberString(CBufferString* pOut, LOC_NUMBER_FORMAT format, uint64 nValue, bool bAppend)
{
	bool bNegSign; // 4941
	const char* pszNegative; // 4967
	const char* pszGrouping; // 4968
	int nGroupingCount; // 4969
	CBufferStringN<40> localStr; // 4977
	int nCurGroup; // 4979
	int nChars; // 5003
	char* pDst; // 5004
	{
		char chDigit; // 4982
		CBufferString::Append(
			char ch,
			bool bExact);  // 4983
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 4993
	}
	{
		const char* pSrc; // 5011
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 5011
		CBufferString::Length(); // 5011
		CBufferString::IsCurBufferFull(); // 833
		CBufferString::IsFixedFull(); // 5017
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4958
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 6254
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 4967
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 6254
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 4968
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<40>::CBufferStringN(); // 4977
	CBufferString::Length(); // 5004
	CBufferString::GetAppendPtr(
			int nChars,
			bool bExact,
			int* pActual);  // 5004
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 5022
	CBufferString::~CBufferString(); // 587
	CBufferStringN<40>::~CBufferStringN(); // 4977
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 5000
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 4938
	CBufferString::Append(
		char ch,
		bool bExact);  // 4963
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 4964
} /* size: 892, variables: 8, inline expansions: 25 (717 bytes) */

// <000517AA> localize/localize_imp.cpp:5025
// variables: 13
// function calls: 53
void CLocalize::ConstructNumberString(CBufferString* pOut, LOC_NUMBER_FORMAT format, float64 flValue, int nPrecision, bool bAppend)
{
	bool bNegSign; // 5038
	const char* pszNegative; // 5066
	const char* pszGrouping; // 5096
	const char* pszDecimalPoint; // 5097
	int nGroupingCount; // 5098
	uint64 nValue; // 5130
	CBufferStringN<60> localStr; // 5132
	int nCurGroup; // 5147
	int nChars; // 5171
	char* pDst; // 5172
	{
		char chDigit; // 5138
		CBufferString::Append(
			char ch,
			bool bExact);  // 5139
	}
	{
		char chDigit; // 5150
		CBufferString::Append(
			char ch,
			bool bExact);  // 5151
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 5161
	}
	{
		const char* pSrc; // 5179
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 5179
		CBufferString::Length(); // 5179
		CBufferString::IsCurBufferFull(); // 833
		CBufferString::IsFixedFull(); // 5185
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 5035
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 5128
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 6254
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 5066
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 6254
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 5096
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 6254
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 5097
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<60>::CBufferStringN(); // 5132
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 5144
	CBufferString::Length(); // 5172
	CBufferString::GetAppendPtr(
			int nChars,
			bool bExact,
			int* pActual);  // 5172
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 5190
	CBufferString::~CBufferString(); // 587
	CBufferStringN<60>::~CBufferStringN(); // 5132
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 5168
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 5029
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 5072
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 5073
	CBufferString::Append(
		char ch,
		bool bExact);  // 5092
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 5093
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 5078
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 5084
	CBufferString::IsCurBufferFull(); // 833
	CBufferString::IsFixedFull(); // 5085
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 5089
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 6254
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 5082
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 5082
	ValueIsIntegral(float64 flValue); // 5107
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 5127
} /* size: 1924, variables: 10, inline expansions: 44 (1375 bytes) */

// <00077A6B> localize/localize_imp.cpp:5193
// variable: 1
// function calls: 6
void CLocalize::ConstructOrdinalString(CBufferString* pOut, LOC_ORDINAL_FORMAT format, uint32 nValue, bool bAppend)
{
	uint32 nSelector; // 5212
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 5197
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 5209
} /* size: 126, variables: 1, inline expansions: 6 (138 bytes) */

// <00077133> localize/localize_imp.cpp:5193
// variables: 3
// function calls: 31
void CLocalize::ConstructOrdinalString(CBufferString* pOut, LOC_ORDINAL_FORMAT format, uint32 nValue, bool bAppend)
{
	uint32 nSelector; // 5212
	{
		const char* pszPrefix; // 5216
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 5216
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 5216
		CLocalize::FindSubLanguageUnsafe(
					const char* pToken);  // 6238
		CLocalize::FindSubLanguageUnsafe(
					const char* pToken);  // 5219
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 5223
		V_isempty(const char* pszString); // 6240
		CLocalize::FindSubLanguageUnsafe(
					const char* pToken);  // 6238
		CLocalize::FindSubLanguageUnsafe(
					const char* pToken);  // 5216
	}
	{
		const char* pszSuffix; // 5234
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 5234
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 5234
		CLocalize::FindSubLanguageUnsafe(
					const char* pToken);  // 6238
		CLocalize::FindSubLanguageUnsafe(
					const char* pToken);  // 5237
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 5241
		V_isempty(const char* pszString); // 6240
		CLocalize::FindSubLanguageUnsafe(
					const char* pToken);  // 6238
		CLocalize::FindSubLanguageUnsafe(
					const char* pToken);  // 5234
	}
	CBufferString::IsCurBufferFull(); // 833
	CBufferString::IsFixedFull(); // 5245
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 5250
} /* size: 881, variables: 1, inline expansions: 5 (136 bytes) */

// <0005172E> localize/localize_imp.cpp:5193
// variables: 3
void CLocalize::ConstructOrdinalString(CBufferString* pOut, LOC_ORDINAL_FORMAT format, uint32 nValue, bool bAppend)
{
	uint32 nSelector; // 5212
	{
		const char* pszPrefix; // 5216
	}
	{
		const char* pszSuffix; // 5234
	}
} /* size: 0, variables: 1 */

// <000753D8> localize/localize_imp.cpp:5253
// function call: 1
void CLocalize::MapGenderToRawGender(LOC_GENDER eGender, uint8* pRawGender)
{
	CLocalize::MapGenderToRawGender(
				LOC_GENDER eGender,
				uint8* pRawGender);  // 5253
} /* size: 0, inline expansions: 1 (0 bytes) */

// <000516FB> localize/localize_imp.cpp:5253
void CLocalize::MapGenderToRawGender(LOC_GENDER eGender, uint8* pRawGender)
{
} /* size: 0 */

// <00051493> localize/localize_imp.cpp:5284
// variables: 4
// function calls: 5
void CLocalize::ParseTokenNameFlags(const char* pToken)
{
	const char* pUsageChars; // 5288
	uint32 nTokenFlags; // 5302
	const char   __FUNCTION__; // 40931
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5318
	}
	strrchr(const char* __s,
		int __c);  // 204
	V_strrchr(const char* s,
			char c);  // 5288
	V_strcmp(const char* s1,
		const char* s2);  // 5293
	V_strcmp(const char* s1,
		const char* s2);  // 5294
	V_strcmp(const char* s1,
		const char* s2);  // 5295
} /* size: 0, variables: 3, inline expansions: 5 (74 bytes) */

// <000512CA> localize/localize_imp.cpp:5329
// variables: 6
void CLocalize::AssertTokenNameFlagsForUsage(const char* pToken, uint32 nUsageFlags, uint32 nIgnoreFlags)
{
	uint32 nTokenFlags; // 5331
	uint32 nFlagsDiff; // 5332
	const char   __FUNCTION__; // 41174
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5340
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5344
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5348
	}
} /* size: 0, variables: 3 */

// <0007544E> localize/localize_imp.cpp:5355
void ComputeNumPluralVariants(ELanguage eLang)
{
} /* size: 0 */

// <00072852> localize/localize_imp.cpp:5355
void ComputeNumPluralVariants(ELanguage eLang)
{
	{
	}
} /* size: 43 */

// <0005128D> localize/localize_imp.cpp:5355
// variables: 2
void ComputeNumPluralVariants(ELanguage eLang)
{
	const char   __FUNCTION__; // 41066
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5359
	}
} /* size: 0, variables: 1 */

// <000511A1> localize/localize_imp.cpp:5366
// variables: 5
void GetPluralVariantImpl(ELanguage eLang, int64 nQuantity)
{
	int nMod10; // 5368
	int nMod100; // 5369
	bool bWasNegative; // 5370
	const char   __FUNCTION__; // 40958
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5556
	}
} /* size: 0, variables: 4 */

// <00050F74> localize/localize_imp.cpp:5561
// variables: 13
// function call: 1
void GetPluralVariantImpl(ELanguage eLang, float64 flQuantity, int nPrecision)
{
	bool bWasNegative; // 5684
	const char   __FUNCTION__; // 40958
	uint64 nPow10; // 5697
	uint64 nFullQuantity; // 5703
	uint64 nFraction; // 5704
	uint64 nIntQuantity; // 5705
	int nMod100; // 5706
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5695
	}
	{
		int i; // 5698
	}
	{
		int nOnes; // 5744
		{
			int i; // 5745
			{
				uint32 nDigit; // 5747
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5799
	}
	ValueIsIntegral(float64 flValue); // 5570
} /* size: 0, variables: 7, inline expansions: 1 (30 bytes) */

// <00050D15> localize/localize_imp.cpp:5804
// variables: 3
// function calls: 3
void CLocalize::FindPluralImpl(const char* pToken, int64 nQuantity, float64 flQuantity, int nPrecision, LOC_RESOLVED_INFO_TYPE eResolved)
{
	LocalizeStringIndex_t idx; // 5815
	const char   __FUNCTION__; // 40801
	const char* pVariant; // 5837
	V_isempty(const char* pszString); // 5806
	CLocalize::FindPluralUnsafe(
			const char* pToken,
			int64 nQuantity);  // 5826
	CLocalize::FindPluralUnsafe(
			const char* pToken,
			float64 flQuantity,
			int nPrecision);  // 5822
} /* size: 361, variables: 3, inline expansions: 3 (83 bytes) */

// <0007547E> localize/localize_imp.cpp:5844
void ComputeNumGenders(ELanguage eLang, GenderMap_t* pGenderMap)
{
	{
	}
} /* size: 0 */

// <00050C8F> localize/localize_imp.cpp:5844
// variables: 2
void ComputeNumGenders(ELanguage eLang, GenderMap_t* pGenderMap)
{
	const char   __FUNCTION__; // 40877
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5848
	}
} /* size: 0, variables: 1 */

// <000508AE> localize/localize_imp.cpp:5856
// variables: 6
// function calls: 5
void CLocalize::FindPluralCompatibleImpl(const char* pToken, const char* pCompatWithToken, int64 nQuantity, float64 flQuantity, int nPrecision, LOC_RESOLVED_INFO_TYPE eResolved)
{
	LocalizeStringIndex_t nTokenIdx; // 5877
	const char   __FUNCTION__; // 41066
	LocalizeStringIndex_t nCompatIdx; // 5899
	LocResolvedInfo_t resolvedInfo; // 5907
	LocResolvedInfo_t* pInfo; // 5908
	const char* pVariant; // 5916
	V_isempty(const char* pszString); // 5863
	V_isempty(const char* pszString); // 5863
	CLocalize::FindCompatibleUnsafe(
				const char* pToken,
				const char* pCompatWithToken);  // 5885
	CLocalize::FindPluralCompatibleUnsafe(
					const char* pToken,
					const char* pCompatWithToken,
					float64 flQuantity,
					int nPrecision);  // 5887
	CLocalize::FindPluralCompatibleUnsafe(
					const char* pToken,
					const char* pCompatWithToken,
					int64 nQuantity);  // 5889
} /* size: 878, variables: 6, inline expansions: 5 (144 bytes) */

// <0005078E> localize/localize_imp.cpp:5920
// variables: 2
// function calls: 2
void CLocalize::ResolveToken(const char* pToken, LocResolvedInfo_t* pInfo)
{
	LocalizeStringIndex_t idx; // 5929
	const char   __FUNCTION__; // 40747
	ClearResolvedInfo(LocResolvedInfo_t* pInfo); // 5922
	V_isempty(const char* pszString); // 5924
} /* size: 142, variables: 2, inline expansions: 2 (45 bytes) */

// <000761E5> localize/localize_imp.cpp:5943
// variable: 1
// function calls: 2
void CLocalize::ResolvePluralImpl(const char* pToken, int64 nQuantity, float64 flQuantity, int nPrecision, LOC_RESOLVED_INFO_TYPE eResolved, LocResolvedInfo_t* pInfo)
{
	LocalizeStringIndex_t idx; // 5956
	ClearResolvedInfo(LocResolvedInfo_t* pInfo); // 5945
	V_isempty(const char* pszString); // 5947
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0005070F> localize/localize_imp.cpp:5943
// variables: 2
void CLocalize::ResolvePluralImpl(const char* pToken, int64 nQuantity, float64 flQuantity, int nPrecision, LOC_RESOLVED_INFO_TYPE eResolved, LocResolvedInfo_t* pInfo)
{
	LocalizeStringIndex_t idx; // 5956
	const char   __FUNCTION__; // 40877
} /* size: 0, variables: 2 */

// <000504B3> localize/localize_imp.cpp:5973
// variables: 3
// function calls: 3
void CLocalize::ResolvePluralCompatibleImpl(const char* pToken, const char* pCompatWithToken, int64 nQuantity, float64 flQuantity, int nPrecision, LOC_RESOLVED_INFO_TYPE eResolved, LocResolvedInfo_t* pInfo)
{
	LocalizeStringIndex_t nTokenIdx; // 5996
	const char   __FUNCTION__; // 41147
	LocalizeStringIndex_t nCompatIdx; // 6003
	ClearResolvedInfo(LocResolvedInfo_t* pInfo); // 5975
	V_isempty(const char* pszString); // 5982
	V_isempty(const char* pszString); // 5982
} /* size: 356, variables: 3, inline expansions: 3 (71 bytes) */

// <0004FF90> localize/localize_imp.cpp:6020
// variables: 9
// function calls: 17
void CLocalize::GetResolvedPluralCompatibleValueImpl(const LocResolvedInfo_t* pInfo)
{
	const char   __FUNCTION__; // 41365
	const LocalizedString_t* pCompatStr; // 6034
	const LocalizedString_t* pTokenStr; // 6035
	ELanguage eLang; // 6040
	uint8 nGenders; // 6042
	int nPluralBase; // 6043
	const char* pVariant; // 6097
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6028
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6092
	}
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 196
	CUtlHashMap<char const::IsValidIndex(
			IndexType_t i);  // 6026
	CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
			int i);  // 6034
	CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
			int i);  // 6035
	CUtlMemory<CUtlHashMap<char const::Element(
		int i);  // 180
	CUtlHashMap<char const::operator[](
			IndexType_t i);  // 6035
	LocalizedString_t::GetLanguage(); // 6036
	LocalizedString_t::GetLanguage(); // 6036
	LocalizedString_t::GetLanguage(); // 6040
	LocalizedString_t::HasNoVariants(); // 6048
	CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
			int i);  // 6064
	LocalizedString_t::IsVariantSubString(); // 6065
	LocalizedString_t::HasGender(); // 6070
	LocalizedString_t::HasGender(); // 6049
} /* size: 0, variables: 7, inline expansions: 17 (154 bytes) */

// <0004FDF6> localize/localize_imp.cpp:6104
// variables: 2
// function calls: 2
void CLocalize::GetResolvedValueImpl(const LocResolvedInfo_t* pInfo)
{
	const char   __FUNCTION__; // 40958
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6113
	}
	CUtlMemory<CUtlHashMap<char const::operator[](
			int i);  // 196
	CUtlHashMap<char const::IsValidIndex(
			IndexType_t i);  // 6111
} /* size: 0, variables: 1, inline expansions: 2 (60 bytes) */

// <0004FD4A> localize/localize_imp.cpp:6134
void CLocalize::LocalizedMessageBox(const char* pTitle, const char* pBody)
{
} /* size: 64 */

// <0004FD1C> localize/localize_imp.cpp:6139
void CLocalize::GetFallbackImpl()
{
} /* size: 12 */

// <0004FCDE> localize/localize_imp.cpp:6144
void CLocalize::SetFallbackImpl(ILocalize* pLocalize)
{
} /* size: 12 */

// <0004FCB0> localize/localize_imp.cpp:6149
void CLocalize::GetTrackingMode()
{
} /* size: 12 */

// <0004FC72> localize/localize_imp.cpp:6154
void CLocalize::SetTrackingMode(bool bEnable)
{
} /* size: 12 */

// <00072CA6> localize/localize_imp.cpp:6159
// function call: 1
void CLocalize::DoKoreanJongSungRuleInPlace(char* pUnicodeBuffer, int unicodeBufferSizeInBytes)
{
	CLocalize::DoKoreanJongSungRuleInPlace(
					char* pUnicodeBuffer,
					int unicodeBufferSizeInBytes);  // 6159
} /* size: 51, inline expansions: 1 (28 bytes) */

// <0004FC3F> localize/localize_imp.cpp:6159
void CLocalize::DoKoreanJongSungRuleInPlace(char* pUnicodeBuffer, int unicodeBufferSizeInBytes)
{
} /* size: 0 */

// <0004F557> localize/localize_imp.cpp:6172
// function calls: 29
void CLocalize::GetStatsString(CBufferString* pStrBuf)
{
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 6174
	CUtlSymbol::IsValid(); // 3622
	CLocalize::GetCurrentLanguage(); // 3620
	CLocalize::GetCurrentLanguage(); // 6175
	CUtlHashMap<char const::Count(); // 6178
	CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Count(); // 6180
	CUtlBlockMemory<char, int>::BlockCount(); // 6187
	CUtlBlockMemory<char, int>::NumElementsInBlock(); // 227
	CUtlBlockMemory<char, int>::NumAllocated(); // 233
	CUtlBlockMemory<char, int>::AllocSize(); // 1544
	StringData_t::AllocSize(); // 6185
	CUtlMemory<CLocalize::LocalizedString_t, int>::AllocSize(); // 1867
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::AllocSize(); // 6190
	CUtlMemory<CUtlHashMap<char const::AllocSize(); // 1867
	CUtlVectorBase<CUtlHashMap<char const::AllocSize(); // 258
	CUtlMemory<CUtlHashMap<char const::AllocSize(); // 258
	CUtlHashMap<char const::AllocSize(); // 6189
	CUtlMemory<CUtlHashMap<char const::AllocSize(); // 1867
	CUtlVectorBase<CUtlHashMap<char const::AllocSize(); // 258
	CUtlMemory<CUtlHashMap<char const::AllocSize(); // 258
	CUtlHashMap<char const::AllocSize(); // 6192
	CUtlMemory<CLocalize::LocalizedString_t, int>::AllocSize(); // 1867
	CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::AllocSize(); // 6193
	CUtlBlockMemory<char, int>::NumElementsInBlock(); // 227
	CUtlBlockMemory<char, int>::NumAllocated(); // 233
	CUtlBlockMemory<char, int>::AllocSize(); // 1544
	StringData_t::AllocSize(); // 6194
} /* size: 487, inline expansions: 29 (437 bytes) */

// <000790A3> localize/localize_imp.cpp:6197
// function call: 1
void CLocalize::CheckLoadDefaultFiles()
{
	CLocalize::CheckLoadDefaultFiles(); // 6197
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0004F53E> localize/localize_imp.cpp:6197
void CLocalize::CheckLoadDefaultFiles()
{
} /* size: 0 */

// <0004F392> localize/localize_imp.cpp:6205
// variable: 1
// function calls: 6
void CLocalize::SpewStats()
{
	CBufferString strBuf; // 6207
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 6207
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 6209
	CBufferString::~CBufferString(); // 6210
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <0004EEE4> localize/localize_imp.cpp:6212
// variables: 2
// function calls: 16
void CLocalize::FindSubLanguageImpl(const char* pToken)
{
	{
		LocalizeStringIndex_t idx; // 6216
		{
			const LocalizedString_t& lstr; // 6227
			CUtlMemory<CUtlHashMap<char const::Element(
				int i);  // 180
			CUtlHashMap<char const::operator[](
					IndexType_t i);  // 6227
			CUtlMemory<CLocalize::LocalizedString_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLocalize::LocalizedString_t, CUtlMemory<CLocalize::LocalizedString_t, int> >::operator[](
					int i);  // 6227
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 6228
			CUtlBlockMemory<char, int>::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<char, int>::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<char, int>::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<char, int>::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<char, int>::operator[](
					int i);  // 1480
			StringData_t::operator[](
					int nIndex);  // 6230
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 6216
		CBufferString::~CBufferString(); // 1484
		CFmtBufferStringN<200>::~CFmtBufferStringN(); // 6216
	}
} /* size: 0 */

// <00076E75> localize/localize_imp.cpp:6238
// variable: 1
// function calls: 2
void CLocalize::FindSubLanguageUnsafe(const char* pToken)
{
	const char* pValue; // 6245
	V_isempty(const char* pszString); // 6240
	CLocalize::FindSubLanguageUnsafe(
				const char* pToken);  // 6238
} /* size: 71, variables: 1, inline expansions: 2 (31 bytes) */

// <0004EEB1> localize/localize_imp.cpp:6238
// variable: 1
void CLocalize::FindSubLanguageUnsafe(const char* pToken)
{
	const char* pValue; // 6245
} /* size: 0, variables: 1 */

// <00076F66> localize/localize_imp.cpp:6254
// variable: 1
// function calls: 2
void CLocalize::FindSubLanguageSafe(const char* pToken)
{
	const char* pValue; // 6261
	V_isempty(const char* pszString); // 6256
	CLocalize::FindSubLanguageSafe(
				const char* pToken);  // 6254
} /* size: 79, variables: 1, inline expansions: 2 (31 bytes) */

// <0004EE7E> localize/localize_imp.cpp:6254
// variable: 1
void CLocalize::FindSubLanguageSafe(const char* pToken)
{
	const char* pValue; // 6261
} /* size: 0, variables: 1 */

// <00072F47> localize/localize_imp.cpp:6270
void CLocalize::GetCurrentSubLanguage()
{
} /* size: 37 */

// <0004ED20> localize/localize_imp.cpp:6285
// variables: 2
// function calls: 2
void CLocalize::SetCurrentSubLanguage(const char* pSubLang)
{
	const char   __FUNCTION__; // 40985
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6293
	}
	V_isempty(const char* pszString); // 6293
	V_strcpy_safe<16>(char& pDest,
				const char* pSrc);  // 6294
} /* size: 0, variables: 1, inline expansions: 2 (30 bytes) */

// <0004E991> localize/localize_imp.cpp:6297
// variables: 4
// function calls: 9
void CLocalize::SetCurrentSubLanguageFromSystem()
{
	const char   __FUNCTION__; // 41250
	const char* pEnv; // 6554
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6299
	}
	{
		const char* pScan; // 6561
		strchr(const char* __s,
			int __c);  // 186
		V_strchr(const char* s,
			char c);  // 6561
		strchr(const char* __s,
			int __c);  // 186
		V_strchr(const char* s,
			char c);  // 6586
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 939
		V_ExtractSubstring<16>(char& dest,
					const char* pString,
					const char* pEnd);  // 6592
		V_strlen(const char* str); // 6589
	}
	V_isempty(const char* pszString); // 6299
} /* size: 0, variables: 2, inline expansions: 1 (10 bytes) */

// <0004E963> localize/localize_imp.cpp:6605
void CLocalize::GetLocalizeFlags()
{
} /* size: 8 */

// <000781EF> localize/localize_imp.cpp:6610
// variables: 2
// function call: 1
void CLocalize::SetLocalizeFlags(uint32 nFlags)
{
	uint32 nOldFlags; // 6612
	uint32 nChangedFlags; // 6615
	CLocalize::SetLocalizeFlags(
			uint32 nFlags);  // 6610
} /* size: 35, variables: 2, inline expansions: 1 (11 bytes) */

// <0004E923> localize/localize_imp.cpp:6610
// variables: 2
void CLocalize::SetLocalizeFlags(uint32 nFlags)
{
	uint32 nOldFlags; // 6612
	uint32 nChangedFlags; // 6615
} /* size: 0, variables: 2 */

// <000754BA> localize/localize_imp.cpp:6622
void CLocalize::StartChange()
{
} /* size: 0 */

// <00072D4B> localize/localize_imp.cpp:6622
// variables: 2
// function calls: 8
void CLocalize::StartChange()
{
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 6627
	{
		int i; // 6631
		CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::Count(); // 6631
		CUtlMemory<CLocalize::ChangeCallback_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::operator[](
				int i);  // 6633
	}
} /* size: 180, inline expansions: 1 (69 bytes) */

// <0004E8FD> localize/localize_imp.cpp:6622
// variable: 1
void CLocalize::StartChange()
{
	{
		int i; // 6631
	}
} /* size: 0 */

// <0004E475> localize/localize_imp.cpp:6642
// variables: 2
// function calls: 17
void CLocalize::AddChange(const char* pToken)
{
	const char   __FUNCTION__; // 40671
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6651
	}
	CUtlString::CUtlString(
			const char* pString);  // 6654
	CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CUtlString, int>::IsGrowable(); // 823
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlString, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
			int num);  // 1249
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1514
	Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
	CUtlMemory<CUtlString, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
		int i);  // 1252
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
			CUtlString& src);  // 6654
	CUtlString::~CUtlString(); // 6654
} /* size: 0, variables: 1, inline expansions: 17 (963 bytes) */

// <000754F7> localize/localize_imp.cpp:6659
// variables: 2
// function calls: 14
void CLocalize::EndChange()
{
	{
	}
	{
		int i; // 6667
		CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::Count(); // 6667
		CUtlMemory<CLocalize::ChangeCallback_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::ChangeCallback_t, CUtlMemory<CLocalize::ChangeCallback_t, int> >::operator[](
				int i);  // 6669
	}
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 6682
	CLocalize::EndChange(); // 6659
} /* size: 0, inline expansions: 7 (499 bytes) */

// <0004E40C> localize/localize_imp.cpp:6659
// variables: 3
void CLocalize::EndChange()
{
	const char   __FUNCTION__; // 40671
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6661
	}
	{
		int i; // 6667
	}
} /* size: 0, variables: 1 */

// <0004D7BD> localize/localize_imp.cpp:6687
// variables: 3
// function calls: 46
void CLocalize::AddFileWatch(const char* pFilePath, const char* pPathID)
{
	CPathBufferString fullPath; // 6694
	FileChangeDir_t* pEntry; // 6709
	{
		int i; // 6701
		CUtlVectorBase<CLocalize::FileChangeDir_t::Count(); // 6701
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 503
		CDirWatcher::GetDirName(); // 6703
		CUtlMemory<CLocalize::FileChangeDir_t::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::FileChangeDir_t::operator[](
				int i);  // 6703
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 6703
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 6694
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 6695
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 6718
	FileChangeDir_t::FileChangeDir_t(); // 6709
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 6710
	CUtlMemory<CLocalize::FileChangeDir_t::NumAllocated(); // 1196
	CUtlMemory<CLocalize::FileChangeDir_t::Base(); // 112
	CUtlVectorBase<CLocalize::FileChangeDir_t::Base(); // 368
	CUtlVectorBase<CLocalize::FileChangeDir_t::ResetDbgInfo(); // 824
	CUtlMemory<CLocalize::FileChangeDir_t::IsGrowable(); // 823
	CUtlMemory<CLocalize::FileChangeDir_t::IsExternallyAllocated(); // 859
	CUtlMemory<CLocalize::FileChangeDir_t::IsExternallyAllocated(); // 861
	CUtlMemory<CLocalize::FileChangeDir_t::Grow(
		int num);  // 806
	CUtlVectorBase<CLocalize::FileChangeDir_t::GrowMemory(
			int num);  // 1198
	CUtlMemory<CLocalize::FileChangeDir_t::operator[](
			int i);  // 602
	CUtlVectorBase<CLocalize::FileChangeDir_t::Element(
		int i);  // 1201
	CopyConstruct<CLocalize::FileChangeDir_t*>(FileChangeDir_t** pMemory,
							FileChangeDir_t* const& src);  // 1201
	CUtlVectorBase<CLocalize::FileChangeDir_t::AddToTail(
			FileChangeDir_t* const& src);  // 6716
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 6718
	ValidateAlignment<UtlLinkedListElem_t<CUtlString, unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::~CUtlMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this); // 487
	CUtlString::~CUtlString(); // 487
	CDirWatcher::~CDirWatcher(); // 1580
	FileChangeDir_t::~FileChangeDir_t(); // 6712
} /* size: 896, variables: 2, inline expansions: 37 (1615 bytes) */

// <00077C42> localize/localize_imp.cpp:6720
// variables: 3
// function calls: 24
void CLocalize::EnableFileWatch(bool bEnable)
{
	{
		int i; // 1807
		CUtlMemory<CLocalize::FileChangeDir_t::operator[](
				int i);  // 602
		CUtlVectorBase<CLocalize::FileChangeDir_t::Element(
			int i);  // 1809
		ValidateAlignment<UtlLinkedListElem_t<CUtlString, unsigned int> >(void); // 508
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::IsExternallyAllocated(); // 905
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::Purge(); // 903
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::Purge(); // 510
		CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned int>, unsigned int>::~CUtlMemory(); // 462
		~CUtlLinkedList(const CUtlLinkedList<CUtlString, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString, unsigned i this); // 487
		CUtlString::~CUtlString(); // 487
		CDirWatcher::~CDirWatcher(); // 1580
		FileChangeDir_t::~FileChangeDir_t(); // 1809
	}
	CUtlVectorBase<CLocalize::FileChangeDir_t::RemoveAll(); // 1798
	CUtlMemory<CLocalize::FileChangeDir_t::Purge(); // 903
	CUtlMemory<CLocalize::FileChangeDir_t::IsExternallyAllocated(); // 905
	CUtlMemory<CLocalize::FileChangeDir_t::Purge(); // 1799
	CUtlVectorBase<CLocalize::FileChangeDir_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<CLocalize::FileChangeDir_t::Purge(); // 1811
	CUtlVectorBase<CLocalize::FileChangeDir_t::PurgeAndDeleteElements(); // 6722
	{
		int i; // 6726
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Count(); // 6726
		{
			LocalizationFileInfo_t& entry; // 6728
			CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::operator[](
					int i);  // 6728
			CUtlSymbol::IsValid(); // 1571
			LocalizationFileInfo_t::GetPathID(); // 6729
		}
	}
	CLocalize::EnableFileWatch(
			bool bEnable);  // 6720
} /* size: 332, inline expansions: 8 (458 bytes) */

// <0004D77B> localize/localize_imp.cpp:6720
// variables: 2
void CLocalize::EnableFileWatch(bool bEnable)
{
	{
		int i; // 6726
		{
			LocalizationFileInfo_t& entry; // 6728
		}
	}
} /* size: 0 */

// <0004D1F0> localize/localize_imp.cpp:6734
// variables: 4
// function calls: 19
void CLocalize::HandleFileChange(const char* pFileName)
{
	CPathBufferString relPath; // 6743
	{
		int i; // 6749
		{
			LocalizationFileInfo_t& entry; // 6751
			const char* pCheckPathID; // 6753
			CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::operator[](
					int i);  // 6751
			CUtlSymbol::IsValid(); // 1571
			LocalizationFileInfo_t::GetPathID(); // 6753
			CFileSystemPassThru::FullPathToRelativePath(
						const char* pFullpath,
						const char* pPathId,
						CBufferString* pRelative);  // 132
			CFileSystemPassThru::FullPathToRelativePath(
						const char* pFullpath,
						const char* pPathId,
						CBufferString* pRelative);  // 132
			CFileSystemPassThru::FullPathToRelativePath(
						const char* pFullpath,
						const char* pPathId,
						CBufferString* pRelative);  // 132
			CFileSystemPassThru::FullPathToRelativePath(
						const char* pFullpath,
						const char* pPathId,
						CBufferString* pRelative);  // 6754
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 6755
			CUtlSymbol::IsValid(); // 1571
			LocalizationFileInfo_t::GetPathID(); // 6757
		}
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Count(); // 6749
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 6743
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 6763
} /* size: 534, variables: 1, inline expansions: 5 (69 bytes) */

// <00078E22> localize/localize_imp.cpp:6765
// variables: 2
// function calls: 9
void CLocalize::CheckForFileChanges()
{
	CUtlString changedFile; // 6774
	CLocalize::StartChange(); // 6772
	CUtlString::CUtlString(); // 6774
	{
		int i; // 6775
		CUtlVectorBase<CLocalize::FileChangeDir_t::Count(); // 6775
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 6779
		CUtlMemory<CLocalize::FileChangeDir_t::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::FileChangeDir_t::operator[](
				int i);  // 6777
	}
	CUtlString::~CUtlString(); // 6784
	CLocalize::CheckForFileChanges(); // 6765
} /* size: 269, variables: 1, inline expansions: 4 (254 bytes) */

// <0004D1BD> localize/localize_imp.cpp:6765
// variables: 2
void CLocalize::CheckForFileChanges()
{
	CUtlString changedFile; // 6774
	{
		int i; // 6775
	}
} /* size: 0, variables: 1 */

// <0004CFE6> localize/localize_imp.cpp:6786
// variables: 2
// function calls: 4
void CLocalize::AddTokenHit(CUtlSymbol symFile, const char* pToken)
{
	{
		int j; // 6793
		{
			LocalizationFileInfo_t& file; // 6795
			CUtlSymbol::operator==(
					const CUtlSymbol& src);  // 6796
			CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::operator[](
					int i);  // 6795
		}
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Count(); // 6793
	}
} /* size: 198 */

// <00075B6D> localize/localize_imp.cpp:6808
// function calls: 3
void CLocalize::AddTokenMiss(const char* pDesc, const char* pToken)
{
	CUtlSymbol::operator==(
			UtlSymId_t id);  // 75
	CUtlSymbolTable::HasElement(
			const char* pStr);  // 6814
	{
	}
	CLocalize::AddTokenMiss(
			const char* pDesc,
			const char* pToken);  // 6808
} /* size: 235, inline expansions: 3 (100 bytes) */

// <0004CF8F> localize/localize_imp.cpp:6808
// variables: 2
void CLocalize::AddTokenMiss(const char* pDesc, const char* pToken)
{
	const char   __FUNCTION__; // 40747
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6818
	}
} /* size: 0, variables: 1 */

// <0004CC03> localize/localize_imp.cpp:6823
// variables: 2
// function calls: 13
void CLocalize::DumpLocalizationFiles()
{
	{
		int index; // 6827
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Count(); // 6827
		CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::operator[](
				int i);  // 6831
		CUtlSymbol::IsValid(); // 1571
		LocalizationFileInfo_t::GetPathID(); // 6829
		CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::operator[](
				int i);  // 6830
	}
	{
		int i; // 6837
		CUtlVectorBase<CLocalize::FileChangeDir_t::Count(); // 6837
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 503
		CDirWatcher::GetDirName(); // 6839
		CUtlMemory<CLocalize::FileChangeDir_t::operator[](
				int i);  // 588
		CUtlVectorBase<CLocalize::FileChangeDir_t::operator[](
				int i);  // 6839
	}
} /* size: 257 */

// <0004CB99> localize/localize_imp.cpp:6844
void dump_localization_files(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 16 */

// <00076331> localize/localize_imp.cpp:6850
// variables: 3
// function calls: 9
void CLocalize::SpewTokensUsed()
{
	{
		int index; // 6858
		CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::Count(); // 6858
		{
			LocalizationFileInfo_t& file; // 6860
			CUtlMemory<CLocalize::LocalizationFileInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLocalize::LocalizationFileInfo_t, CUtlMemory<CLocalize::LocalizationFileInfo_t, int> >::operator[](
					int i);  // 6860
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
			CUtlSymbolTable::GetNumStrings(); // 6863
			{
				UtlSymId_t i; // 6865
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
				CUtlSymbolTable::GetNumStrings(); // 6865
				CUtlSymbol::CUtlSymbol(
						UtlSymId_t id);  // 6867
			}
		}
	}
	CLocalize::SpewTokensUsed(); // 6850
} /* size: 360, inline expansions: 1 (230 bytes) */

// <0004CB55> localize/localize_imp.cpp:6850
// variables: 3
void CLocalize::SpewTokensUsed()
{
	{
		int index; // 6858
		{
			LocalizationFileInfo_t& file; // 6860
			{
				UtlSymId_t i; // 6865
			}
		}
	}
} /* size: 0 */

// <0004CAEB> localize/localize_imp.cpp:6873
void dump_loc_tokens_used(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 16 */

// <0004C8BA> localize/localize_imp.cpp:6879
// variable: 1
// function calls: 5
ILocalize* Localize_Create(IFileSystem* pFileSystem, const char* pLanguage, uint32 nFlags)
{
	CLocalize* pLoc; // 6881
	CLocalize::SetFileSystem(
			IFileSystem* pFileSystem);  // 6882
	CLocalize::SetLocalizeFlags(
			uint32 nFlags);  // 6610
	CLocalize::SetLocalizeFlags(
			uint32 nFlags);  // 6884
	CLocalize::CheckLoadDefaultFiles(); // 6197
	CLocalize::CheckLoadDefaultFiles(); // 6885
} /* size: 162, variables: 1, inline expansions: 5 (102 bytes) */


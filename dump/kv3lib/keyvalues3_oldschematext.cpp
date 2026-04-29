
//
// kv3lib/keyvalues3_oldschematext.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 56
//	class: 1
//	struct: 1
//

// <055B99D8> kv3lib/keyvalues3_oldschematext.cpp:27
// member variables: 2
// struct size: 16
struct ReferenceToLoadAsString_t {
	const char * m_pClassName; /* 0 8 */
	const char * m_pMemberName; /* 8 8 */
};

// <055C4595> kv3lib/keyvalues3_oldschematext.cpp:39
// variables: 4
bool IsLegacyReferenceToLoadAsString(const CUtlTokenReference& className, const CUtlTokenReference& memberName)
{
	{
		const ReferenceToLoadAsString_t& ref; // 41
		ReferenceToLoadAsString_t& __for_range; // 56849
		ReferenceToLoadAsString_t* __for_begin; // 56855
		ReferenceToLoadAsString_t* __for_end; // 56855
	}
} /* size: 0 */

// <0293BF8F> kv3lib/keyvalues3_oldschematext.cpp:39
// variables: 4
bool IsLegacyReferenceToLoadAsString(const CUtlTokenReference& className, const CUtlTokenReference& memberName)
{
	{
		const ReferenceToLoadAsString_t& ref; // 41
		ReferenceToLoadAsString_t& __for_range; // 9984
		ReferenceToLoadAsString_t* __for_begin; // 9990
		ReferenceToLoadAsString_t* __for_end; // 9990
	}
} /* size: 0 */

// <0128BB44> kv3lib/keyvalues3_oldschematext.cpp:39
// variables: 4
bool IsLegacyReferenceToLoadAsString(const CUtlTokenReference& className, const CUtlTokenReference& memberName)
{
	{
		const ReferenceToLoadAsString_t& ref; // 41
		ReferenceToLoadAsString_t& __for_range; // 14963
		ReferenceToLoadAsString_t* __for_begin; // 14969
		ReferenceToLoadAsString_t* __for_end; // 14969
	}
} /* size: 0 */

// <00307309> kv3lib/keyvalues3_oldschematext.cpp:39
// variables: 4
bool IsLegacyReferenceToLoadAsString(const CUtlTokenReference& className, const CUtlTokenReference& memberName)
{
	{
		const ReferenceToLoadAsString_t& ref; // 41
		ReferenceToLoadAsString_t& __for_range; // 1130
		ReferenceToLoadAsString_t* __for_begin; // 1136
		ReferenceToLoadAsString_t* __for_end; // 1136
	}
} /* size: 0 */

// <0066C50B> kv3lib/keyvalues3_oldschematext.cpp:39
// variables: 4
bool IsLegacyReferenceToLoadAsString(const CUtlTokenReference& className, const CUtlTokenReference& memberName)
{
	{
		const ReferenceToLoadAsString_t& ref; // 41
		ReferenceToLoadAsString_t& __for_range; // 27116
		ReferenceToLoadAsString_t* __for_begin; // 27122
		ReferenceToLoadAsString_t* __for_end; // 27122
	}
} /* size: 0 */

// <00A44192> kv3lib/keyvalues3_oldschematext.cpp:39
// variables: 4
bool IsLegacyReferenceToLoadAsString(const CUtlTokenReference& className, const CUtlTokenReference& memberName)
{
	{
		const ReferenceToLoadAsString_t& ref; // 41
		ReferenceToLoadAsString_t& __for_range; // 33267
		ReferenceToLoadAsString_t* __for_begin; // 33273
		ReferenceToLoadAsString_t* __for_end; // 33273
	}
} /* size: 0 */

// <00150D13> kv3lib/keyvalues3_oldschematext.cpp:39
// variables: 4
bool IsLegacyReferenceToLoadAsString(const CUtlTokenReference& className, const CUtlTokenReference& memberName)
{
	{
		const ReferenceToLoadAsString_t& ref; // 41
		ReferenceToLoadAsString_t& __for_range; // 25764
		ReferenceToLoadAsString_t* __for_begin; // 25770
		ReferenceToLoadAsString_t* __for_end; // 25770
	}
} /* size: 0 */

// <055B9A2F> kv3lib/keyvalues3_oldschematext.cpp:52
// member functions: 36
// member variables: 8
// class size: 848
class CLoadKV3FromDynData {
	/* kv3lib/keyvalues3_oldschematext.cpp:81 */
	struct LoadedObject_t {
		CUtlString m_ObjName; /* 0 8 */
		KeyValues3 * m_pObject; /* 8 8 */
		bool m_bReferenceResolved; /* 16 1 */
		void ~LoadedObject_t(LoadedObject_t* );
		void LoadedObject_t(LoadedObject_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* kv3lib/keyvalues3_oldschematext.cpp:89 */
	struct UnresolvedElementReference_t {
		CUtlString m_ObjName; /* 0 8 */
		KeyValues3 * m_pTargetKV; /* 8 8 */
		void ~UnresolvedElementReference_t(UnresolvedElementReference_t* );
		void UnresolvedElementReference_t(UnresolvedElementReference_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* kv3lib/keyvalues3_oldschematext.cpp:55 */
	void CLoadKV3FromDynData(CLoadKV3FromDynData* , KeyValues3* , CUtlString* , CUtlBuffer* , const char* );
	/* kv3lib/keyvalues3_oldschematext.cpp:56 */
	void ~CLoadKV3FromDynData(CLoadKV3FromDynData* );
	/* kv3lib/keyvalues3_oldschematext.cpp:57 */
	bool Parse(CLoadKV3FromDynData* );
private:
	/* kv3lib/keyvalues3_oldschematext.cpp:60 */
	bool ReadHeader(CLoadKV3FromDynData* );
	/* kv3lib/keyvalues3_oldschematext.cpp:61 */
	bool ReadObject(CLoadKV3FromDynData* , KeyValues3* , CUtlString* );
	/* kv3lib/keyvalues3_oldschematext.cpp:62 */
	bool HandleMember(CLoadKV3FromDynData* , KeyValues3* , const char* );
	/* kv3lib/keyvalues3_oldschematext.cpp:63 */
	bool ReadValue(CLoadKV3FromDynData* , KeyValues3* );
	/* kv3lib/keyvalues3_oldschematext.cpp:65 */
	bool HandleType(CLoadKV3FromDynData* );
	/* kv3lib/keyvalues3_oldschematext.cpp:67 */
	bool ReadCompoundValue(CLoadKV3FromDynData* , KeyValues3* );
	/* kv3lib/keyvalues3_oldschematext.cpp:68 */
	bool ReadObjectReference(CLoadKV3FromDynData* , KeyValues3* );
	/* kv3lib/keyvalues3_oldschematext.cpp:69 */
	bool ReadLiteralValue(CLoadKV3FromDynData* , KeyValues3* );
	/* kv3lib/keyvalues3_oldschematext.cpp:71 */
	void ReportError(CLoadKV3FromDynData* , const char* );
	/* kv3lib/keyvalues3_oldschematext.cpp:72 */
	void ReportErrorNoLine(CLoadKV3FromDynData* , const char* );
	bool m_bLoadedOk; /* 0 1 */
	CUtlTokenizer m_Tokenizer __attribute__((__aligned__(8))); /* 8 744 */
	bool m_bReadTypes; /* 752 1 */
	KeyValues3 * m_pPrimaryRoot; /* 760 8 */
	CUtlString * m_pOutErrorMessage; /* 768 8 */
	CUtlBuffer * m_pSrcBuffer; /* 776 8 */
	CUtlVector<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> > m_AdditionalRootObjects; /* 784 32 */
	CUtlVector<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int> > m_UnresolvedElementReferences; /* 816 32 */
	/* kv3lib/keyvalues3_oldschematext.cpp:96 */
	bool ResolveUnresolvedReferences(CLoadKV3FromDynData* );
	/* kv3lib/keyvalues3_oldschematext.cpp:98 */
	KeyValues3* AllocTempKV3(CLoadKV3FromDynData* );
	/* kv3lib/keyvalues3_oldschematext.cpp:99 */
	void FreeAllTempKV3(CLoadKV3FromDynData* );
	void CLoadKV3FromDynData(class CLoadKV3FromDynData *, class KeyValues3 *, class CUtlString *, class CUtlBuffer *, const char  *); /* linkage=_ZN19CLoadKV3FromDynDataC4EP10KeyValues3P10CUtlStringP10CUtlBufferPKc */
	void ~CLoadKV3FromDynData(class CLoadKV3FromDynData *); /* linkage=_ZN19CLoadKV3FromDynDataD4Ev */
	bool Parse(class CLoadKV3FromDynData *); /* linkage=_ZN19CLoadKV3FromDynData5ParseEv */
	bool ReadHeader(class CLoadKV3FromDynData *); /* linkage=_ZN19CLoadKV3FromDynData10ReadHeaderEv */
	bool ReadObject(class CLoadKV3FromDynData *, class KeyValues3 *, class CUtlString *); /* linkage=_ZN19CLoadKV3FromDynData10ReadObjectEP10KeyValues3P10CUtlString */
	/* <55c4fe6> kv3lib/keyvalues3_oldschematext.cpp:503 */
	bool HandleMember(class CLoadKV3FromDynData *, class KeyValues3 *, const char  *); /* linkage=_ZN19CLoadKV3FromDynData12HandleMemberEP10KeyValues3PKc */
	bool ReadValue(class CLoadKV3FromDynData *, class KeyValues3 *); /* linkage=_ZN19CLoadKV3FromDynData9ReadValueEP10KeyValues3 */
	bool HandleType(class CLoadKV3FromDynData *); /* linkage=_ZN19CLoadKV3FromDynData10HandleTypeEv */
	bool ReadCompoundValue(class CLoadKV3FromDynData *, class KeyValues3 *); /* linkage=_ZN19CLoadKV3FromDynData17ReadCompoundValueEP10KeyValues3 */
	bool ReadObjectReference(class CLoadKV3FromDynData *, class KeyValues3 *); /* linkage=_ZN19CLoadKV3FromDynData19ReadObjectReferenceEP10KeyValues3 */
	bool ReadLiteralValue(class CLoadKV3FromDynData *, class KeyValues3 *); /* linkage=_ZN19CLoadKV3FromDynData16ReadLiteralValueEP10KeyValues3 */
	void ReportError(class CLoadKV3FromDynData *, const char  *); /* linkage=_ZN19CLoadKV3FromDynData11ReportErrorEPKc */
	/* <55c4f72> kv3lib/keyvalues3_oldschematext.cpp:226 */
	void ReportErrorNoLine(class CLoadKV3FromDynData *, const char  *); /* linkage=_ZN19CLoadKV3FromDynData17ReportErrorNoLineEPKc */
	bool ResolveUnresolvedReferences(class CLoadKV3FromDynData *); /* linkage=_ZN19CLoadKV3FromDynData27ResolveUnresolvedReferencesEv */
	class KeyValues3 * AllocTempKV3(class CLoadKV3FromDynData *); /* linkage=_ZN19CLoadKV3FromDynData12AllocTempKV3Ev */
	void FreeAllTempKV3(class CLoadKV3FromDynData *); /* linkage=_ZN19CLoadKV3FromDynData14FreeAllTempKV3Ev */
} __attribute__((__aligned__(8)));

// <055BE238> kv3lib/keyvalues3_oldschematext.cpp:81
void LoadedObject_t::LoadedObject_t()
{
} /* size: 0 */

// <055BE21C> kv3lib/keyvalues3_oldschematext.cpp:81
inline void LoadedObject_t::LoadedObject_t()
{
} /* size: 0 */

// <055BDB39> kv3lib/keyvalues3_oldschematext.cpp:81
void LoadedObject_t::~LoadedObject_t()
{
} /* size: 0 */

// <055BDB1D> kv3lib/keyvalues3_oldschematext.cpp:81
inline void LoadedObject_t::~LoadedObject_t()
{
} /* size: 0 */

// <055BE152> kv3lib/keyvalues3_oldschematext.cpp:89
void UnresolvedElementReference_t::UnresolvedElementReference_t()
{
} /* size: 0 */

// <055BE136> kv3lib/keyvalues3_oldschematext.cpp:89
inline void UnresolvedElementReference_t::UnresolvedElementReference_t()
{
} /* size: 0 */

// <055BDA6E> kv3lib/keyvalues3_oldschematext.cpp:89
void UnresolvedElementReference_t::~UnresolvedElementReference_t()
{
} /* size: 0 */

// <055BDA52> kv3lib/keyvalues3_oldschematext.cpp:89
inline void UnresolvedElementReference_t::~UnresolvedElementReference_t()
{
} /* size: 0 */

// <055C3B16> kv3lib/keyvalues3_oldschematext.cpp:186
// function calls: 20
void CLoadKV3FromDynData::CLoadKV3FromDynData(KeyValues3* pSingleRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const char* pReferenceFilename)
{
	{
		{
		}
	}
	{
		CUtlBuffer::TellPut(); // 187
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 187
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::CUtlVector(); // 187
		CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this); // 530
		CUtlVectorBase(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElementRefe this); // 187
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 196
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 196
		{
		}
	}
} /* size: 0 */

// <055C3AA8> kv3lib/keyvalues3_oldschematext.cpp:186
// variables: 2
void CLoadKV3FromDynData::CLoadKV3FromDynData(KeyValues3* pSingleRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const char* pReferenceFilename)
{
	const char   __FUNCTION__; // 8366
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
} /* size: 0, variables: 1 */

// <0293B4A2> kv3lib/keyvalues3_oldschematext.cpp:186
// variables: 2
void CLoadKV3FromDynData::CLoadKV3FromDynData(KeyValues3* pSingleRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const char* pReferenceFilename)
{
	const char   __FUNCTION__; // 27037
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
} /* size: 0, variables: 1 */

// <0128B057> kv3lib/keyvalues3_oldschematext.cpp:186
// variables: 2
void CLoadKV3FromDynData::CLoadKV3FromDynData(KeyValues3* pSingleRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const char* pReferenceFilename)
{
	const char   __FUNCTION__; // 32016
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
} /* size: 0, variables: 1 */

// <0030681C> kv3lib/keyvalues3_oldschematext.cpp:186
// variables: 2
void CLoadKV3FromDynData::CLoadKV3FromDynData(KeyValues3* pSingleRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const char* pReferenceFilename)
{
	const char   __FUNCTION__; // 18183
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
} /* size: 0, variables: 1 */

// <0066BA1E> kv3lib/keyvalues3_oldschematext.cpp:186
// variables: 2
void CLoadKV3FromDynData::CLoadKV3FromDynData(KeyValues3* pSingleRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const char* pReferenceFilename)
{
	const char   __FUNCTION__; // 44169
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
} /* size: 0, variables: 1 */

// <00A436A5> kv3lib/keyvalues3_oldschematext.cpp:186
// variables: 2
void CLoadKV3FromDynData::CLoadKV3FromDynData(KeyValues3* pSingleRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const char* pReferenceFilename)
{
	const char   __FUNCTION__; // 50320
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
} /* size: 0, variables: 1 */

// <00150226> kv3lib/keyvalues3_oldschematext.cpp:186
// variables: 2
void CLoadKV3FromDynData::CLoadKV3FromDynData(KeyValues3* pSingleRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const char* pReferenceFilename)
{
	const char   __FUNCTION__; // 42817
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
} /* size: 0, variables: 1 */

// <055C2A8D> kv3lib/keyvalues3_oldschematext.cpp:202
// variables: 4
// function calls: 74
void CLoadKV3FromDynData::~CLoadKV3FromDynData()
{
	{
		{
		}
	}
	{
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 204
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 204
		{
		}
		{
			int i; // 1721
			CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this,
				int i);  // 1723
			CUtlString::~CUtlString(); // 89
			UnresolvedElementReference_t::~UnresolvedElementReference_t(); // 1526
			Destruct<CLoadKV3FromDynData::UnresolvedElementReference_t>(UnresolvedElementReference_t* pMemory); // 1723
		}
		RemoveAll(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this); // 1798
		CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::Purge(); // 903
		CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this); // 560
		ValidateAlignment<CLoadKV3FromDynData::UnresolvedElementReference_t>(void); // 508
		CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::Purge(); // 510
		CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this); // 410
		~CUtlVector(const CUtlVector<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElementRefe this); // 205
		{
			int i; // 1721
			CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Element(
				int i);  // 1723
			CUtlString::~CUtlString(); // 81
			LoadedObject_t::~LoadedObject_t(); // 1526
			Destruct<CLoadKV3FromDynData::LoadedObject_t>(LoadedObject_t* pMemory); // 1723
		}
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::RemoveAll(); // 1798
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::Purge(); // 903
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::Purge(); // 1799
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Purge(); // 560
		ValidateAlignment<CLoadKV3FromDynData::LoadedObject_t>(void); // 508
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::Purge(); // 510
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::~CUtlVector(); // 205
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
		AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8>::Base(); // 237
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
		CUtlTokenizer::~CUtlTokenizer(); // 205
	}
} /* size: 0 */

// <055C2A4F> kv3lib/keyvalues3_oldschematext.cpp:202
// variables: 2
void CLoadKV3FromDynData::~CLoadKV3FromDynData()
{
	const char   __FUNCTION__; // 8393
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 204
	}
} /* size: 0, variables: 1 */

// <0293A449> kv3lib/keyvalues3_oldschematext.cpp:202
// variables: 2
void CLoadKV3FromDynData::~CLoadKV3FromDynData()
{
	const char   __FUNCTION__; // 27064
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 204
	}
} /* size: 0, variables: 1 */

// <01289FFE> kv3lib/keyvalues3_oldschematext.cpp:202
// variables: 2
void CLoadKV3FromDynData::~CLoadKV3FromDynData()
{
	const char   __FUNCTION__; // 32043
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 204
	}
} /* size: 0, variables: 1 */

// <0066A9C5> kv3lib/keyvalues3_oldschematext.cpp:202
// variables: 2
void CLoadKV3FromDynData::~CLoadKV3FromDynData()
{
	const char   __FUNCTION__; // 44196
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 204
	}
} /* size: 0, variables: 1 */

// <0014F1CD> kv3lib/keyvalues3_oldschematext.cpp:202
// variables: 2
void CLoadKV3FromDynData::~CLoadKV3FromDynData()
{
	const char   __FUNCTION__; // 42844
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 204
	}
} /* size: 0, variables: 1 */

// <055C26AF> kv3lib/keyvalues3_oldschematext.cpp:210
// variable: 1
// function calls: 11
void CLoadKV3FromDynData::ReportError(const char* pError)
{
	CUtlTokenReference nextToken; // 212
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 84
	CFmtStrN<256>::Access(); // 215
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 84
	CFmtStrN<256>::Access(); // 219
	CLoadKV3FromDynData::ReportErrorNoLine(
				const char* pError);  // 219
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 219
} /* size: 353, variables: 1, inline expansions: 11 (282 bytes) */

// <055C4F72> kv3lib/keyvalues3_oldschematext.cpp:226
void CLoadKV3FromDynData::ReportErrorNoLine(const char* pError)
{
} /* size: 0 */

// <055C21F6> kv3lib/keyvalues3_oldschematext.cpp:240
// variables: 2
// function calls: 17
void CLoadKV3FromDynData::Parse()
{
	{
		LoadedObject_t& objRecord; // 258
		KeyValues3* pObject; // 260
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::Base(); // 112
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Base(); // 368
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::ResetDbgInfo(); // 824
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::IsGrowable(); // 823
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::GrowMemory(
				int num);  // 1145
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Element(
			int i);  // 1148
		CUtlString::CUtlString(); // 81
		LoadedObject_t::LoadedObject_t(); // 1479
		Construct<CLoadKV3FromDynData::LoadedObject_t>(LoadedObject_t* pMemory); // 1148
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::NumAllocated(); // 1143
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::AddToTail(); // 258
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::operator[](
				int i);  // 258
	}
} /* size: 542 */

// <055C1B75> kv3lib/keyvalues3_oldschematext.cpp:283
// variables: 6
// function calls: 9
void CLoadKV3FromDynData::ReadHeader()
{
	CUtlTokenReference encodingName; // 291
	CUtlTokenReference encodingId; // 292
	CUtlTokenReference formatName; // 302
	CUtlTokenReference formatId; // 303
	V_uuid_t encodingUuid; // 313
	V_uuid_t formatUuid; // 314
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1593
	operator!=(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 329
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 333
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 338
} /* size: 708, variables: 6, inline expansions: 9 (207 bytes) */

// <055C1103> kv3lib/keyvalues3_oldschematext.cpp:351
// variables: 15
// function calls: 21
void CLoadKV3FromDynData::ReadObject(KeyValues3* pTarget, CUtlString* pOutInstanceName)
{
	CUtlTokenReference className; // 357
	CUtlTokenReference instanceName; // 358
	KeyValues3* pObject; // 374
	const char   __FUNCTION__; // 8158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 375
	}
	{
		CUtlTokenReference memberName; // 416
		bool bPrev; // 430
		{
			const ReferenceToLoadAsString_t& ref; // 41
			ReferenceToLoadAsString_t& __for_range; // 56808
			ReferenceToLoadAsString_t* __for_begin; // 56819
			ReferenceToLoadAsString_t* __for_end; // 56830
		}
		IsLegacyReferenceToLoadAsString(const CUtlTokenReference& className,
						const CUtlTokenReference& memberName);  // 431
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 506
		CLoadKV3FromDynData::HandleMember(
				KeyValues3* pObject,
				const char* pMemberName);  // 436
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 419
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 438
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 438
	}
	CUtlString::operator=(
			const char* src);  // 385
	{
		const uint32  m; // 101
		uint32 h; // 102
		uint32 k; // 103
		const int  r; // 104
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 380
	CKV3MemberName::CKV3MemberName<24>(
				const char& str);  // 390
} /* size: 0, variables: 4, inline expansions: 4 (78 bytes) */

// <02938AFD> kv3lib/keyvalues3_oldschematext.cpp:351
// variables: 15
// function calls: 21
void CLoadKV3FromDynData::ReadObject(KeyValues3* pTarget, CUtlString* pOutInstanceName)
{
	CUtlTokenReference className; // 357
	CUtlTokenReference instanceName; // 358
	KeyValues3* pObject; // 374
	const char   __FUNCTION__; // 26829
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 375
	}
	{
		CUtlTokenReference memberName; // 416
		bool bPrev; // 430
		{
			const ReferenceToLoadAsString_t& ref; // 41
			ReferenceToLoadAsString_t& __for_range; // 9943
			ReferenceToLoadAsString_t* __for_begin; // 9954
			ReferenceToLoadAsString_t* __for_end; // 9965
		}
		IsLegacyReferenceToLoadAsString(const CUtlTokenReference& className,
						const CUtlTokenReference& memberName);  // 431
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 506
		CLoadKV3FromDynData::HandleMember(
				KeyValues3* pObject,
				const char* pMemberName);  // 436
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 419
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 438
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 438
	}
	CUtlString::operator=(
			const char* src);  // 385
	{
		const uint32  m; // 101
		uint32 h; // 102
		uint32 k; // 103
		const int  r; // 104
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 380
	CKV3MemberName::CKV3MemberName<24>(
				const char& str);  // 390
} /* size: 0, variables: 4, inline expansions: 4 (78 bytes) */

// <012886B2> kv3lib/keyvalues3_oldschematext.cpp:351
// variables: 15
// function calls: 21
void CLoadKV3FromDynData::ReadObject(KeyValues3* pTarget, CUtlString* pOutInstanceName)
{
	CUtlTokenReference className; // 357
	CUtlTokenReference instanceName; // 358
	KeyValues3* pObject; // 374
	const char   __FUNCTION__; // 31808
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 375
	}
	{
		CUtlTokenReference memberName; // 416
		bool bPrev; // 430
		{
			const ReferenceToLoadAsString_t& ref; // 41
			ReferenceToLoadAsString_t& __for_range; // 14922
			ReferenceToLoadAsString_t* __for_begin; // 14933
			ReferenceToLoadAsString_t* __for_end; // 14944
		}
		IsLegacyReferenceToLoadAsString(const CUtlTokenReference& className,
						const CUtlTokenReference& memberName);  // 431
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 506
		CLoadKV3FromDynData::HandleMember(
				KeyValues3* pObject,
				const char* pMemberName);  // 436
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 419
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 438
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 438
	}
	CUtlString::operator=(
			const char* src);  // 385
	{
		const uint32  m; // 101
		uint32 h; // 102
		uint32 k; // 103
		const int  r; // 104
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 380
	CKV3MemberName::CKV3MemberName<24>(
				const char& str);  // 390
} /* size: 0, variables: 4, inline expansions: 4 (78 bytes) */

// <00303E77> kv3lib/keyvalues3_oldschematext.cpp:351
// variables: 15
// function calls: 21
void CLoadKV3FromDynData::ReadObject(KeyValues3* pTarget, CUtlString* pOutInstanceName)
{
	CUtlTokenReference className; // 357
	CUtlTokenReference instanceName; // 358
	KeyValues3* pObject; // 374
	const char   __FUNCTION__; // 17975
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 375
	}
	{
		CUtlTokenReference memberName; // 416
		bool bPrev; // 430
		{
			const ReferenceToLoadAsString_t& ref; // 41
			ReferenceToLoadAsString_t& __for_range; // 1089
			ReferenceToLoadAsString_t* __for_begin; // 1100
			ReferenceToLoadAsString_t* __for_end; // 1111
		}
		IsLegacyReferenceToLoadAsString(const CUtlTokenReference& className,
						const CUtlTokenReference& memberName);  // 431
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 506
		CLoadKV3FromDynData::HandleMember(
				KeyValues3* pObject,
				const char* pMemberName);  // 436
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 419
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 438
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 438
	}
	CUtlString::operator=(
			const char* src);  // 385
	{
		const uint32  m; // 101
		uint32 h; // 102
		uint32 k; // 103
		const int  r; // 104
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 380
	CKV3MemberName::CKV3MemberName<24>(
				const char& str);  // 390
} /* size: 0, variables: 4, inline expansions: 4 (0 bytes) */

// <00669079> kv3lib/keyvalues3_oldschematext.cpp:351
// variables: 15
// function calls: 21
void CLoadKV3FromDynData::ReadObject(KeyValues3* pTarget, CUtlString* pOutInstanceName)
{
	CUtlTokenReference className; // 357
	CUtlTokenReference instanceName; // 358
	KeyValues3* pObject; // 374
	const char   __FUNCTION__; // 43961
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 375
	}
	{
		CUtlTokenReference memberName; // 416
		bool bPrev; // 430
		{
			const ReferenceToLoadAsString_t& ref; // 41
			ReferenceToLoadAsString_t& __for_range; // 27075
			ReferenceToLoadAsString_t* __for_begin; // 27086
			ReferenceToLoadAsString_t* __for_end; // 27097
		}
		IsLegacyReferenceToLoadAsString(const CUtlTokenReference& className,
						const CUtlTokenReference& memberName);  // 431
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 506
		CLoadKV3FromDynData::HandleMember(
				KeyValues3* pObject,
				const char* pMemberName);  // 436
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 419
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 438
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 438
	}
	CUtlString::operator=(
			const char* src);  // 385
	{
		const uint32  m; // 101
		uint32 h; // 102
		uint32 k; // 103
		const int  r; // 104
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 380
	CKV3MemberName::CKV3MemberName<24>(
				const char& str);  // 390
} /* size: 0, variables: 4, inline expansions: 4 (78 bytes) */

// <00A40D00> kv3lib/keyvalues3_oldschematext.cpp:351
// variables: 15
// function calls: 21
void CLoadKV3FromDynData::ReadObject(KeyValues3* pTarget, CUtlString* pOutInstanceName)
{
	CUtlTokenReference className; // 357
	CUtlTokenReference instanceName; // 358
	KeyValues3* pObject; // 374
	const char   __FUNCTION__; // 50112
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 375
	}
	{
		CUtlTokenReference memberName; // 416
		bool bPrev; // 430
		{
			const ReferenceToLoadAsString_t& ref; // 41
			ReferenceToLoadAsString_t& __for_range; // 33226
			ReferenceToLoadAsString_t* __for_begin; // 33237
			ReferenceToLoadAsString_t* __for_end; // 33248
		}
		IsLegacyReferenceToLoadAsString(const CUtlTokenReference& className,
						const CUtlTokenReference& memberName);  // 431
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 506
		CLoadKV3FromDynData::HandleMember(
				KeyValues3* pObject,
				const char* pMemberName);  // 436
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 419
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 438
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 438
	}
	CUtlString::operator=(
			const char* src);  // 385
	{
		const uint32  m; // 101
		uint32 h; // 102
		uint32 k; // 103
		const int  r; // 104
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 380
	CKV3MemberName::CKV3MemberName<24>(
				const char& str);  // 390
} /* size: 0, variables: 4, inline expansions: 4 (78 bytes) */

// <0014D881> kv3lib/keyvalues3_oldschematext.cpp:351
// variables: 15
// function calls: 21
void CLoadKV3FromDynData::ReadObject(KeyValues3* pTarget, CUtlString* pOutInstanceName)
{
	CUtlTokenReference className; // 357
	CUtlTokenReference instanceName; // 358
	KeyValues3* pObject; // 374
	const char   __FUNCTION__; // 42609
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 375
	}
	{
		CUtlTokenReference memberName; // 416
		bool bPrev; // 430
		{
			const ReferenceToLoadAsString_t& ref; // 41
			ReferenceToLoadAsString_t& __for_range; // 25723
			ReferenceToLoadAsString_t* __for_begin; // 25734
			ReferenceToLoadAsString_t* __for_end; // 25745
		}
		IsLegacyReferenceToLoadAsString(const CUtlTokenReference& className,
						const CUtlTokenReference& memberName);  // 431
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 506
		CLoadKV3FromDynData::HandleMember(
				KeyValues3* pObject,
				const char* pMemberName);  // 436
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 419
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 803
		CBufferString::Access(); // 84
		CFmtStrN<256>::Access(); // 438
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 438
	}
	CUtlString::operator=(
			const char* src);  // 385
	{
		const uint32  m; // 101
		uint32 h; // 102
		uint32 k; // 103
		const int  r; // 104
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 380
	CKV3MemberName::CKV3MemberName<24>(
				const char& str);  // 390
} /* size: 0, variables: 4, inline expansions: 4 (0 bytes) */

// <055C0E23> kv3lib/keyvalues3_oldschematext.cpp:454
// variables: 2
void CLoadKV3FromDynData::HandleType()
{
	CUtlTokenReference typeRoot; // 456
	{
		CUtlTokenReference tupleLength; // 477
	}
} /* size: 441, variables: 1 */

// <055C4FE6> kv3lib/keyvalues3_oldschematext.cpp:503
// variable: 1
// function calls: 5
void CLoadKV3FromDynData::HandleMember(KeyValues3* pObject, const char* pMemberName)
{
	KeyValues3* pMember; // 506
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 506
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <055C0DE0> kv3lib/keyvalues3_oldschematext.cpp:503
// variable: 1
void CLoadKV3FromDynData::HandleMember(KeyValues3* pObject, const char* pMemberName)
{
	KeyValues3* pMember; // 506
} /* size: 0, variables: 1 */

// <055C0B31> kv3lib/keyvalues3_oldschematext.cpp:515
// function calls: 2
void CLoadKV3FromDynData::ReadValue(KeyValues3* target)
{
	CUtlString::Get(); // 304
	CUtlTokenizer::GetFilename(); // 519
} /* size: 375, inline expansions: 2 (42 bytes) */

// <055C073C> kv3lib/keyvalues3_oldschematext.cpp:557
// variables: 4
// function calls: 7
void CLoadKV3FromDynData::ReadCompoundValue(KeyValues3* compoundTarget)
{
	bool bTuple; // 561
	const char* pExpectedEndToken; // 562
	int nArrayIndex; // 582
	{
		KeyValues3* pElement; // 593
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 606
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 606
	}
} /* size: 443, variables: 3 */

// <055C0041> kv3lib/keyvalues3_oldschematext.cpp:622
// variables: 2
// function calls: 24
void CLoadKV3FromDynData::ReadObjectReference(KeyValues3* target)
{
	CUtlTokenReference instanceName; // 624
	{
		UnresolvedElementReference_t& unresolvedReference; // 647
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 645
		CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::NumAllocated(); // 1143
		CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this); // 368
		ResetDbgInfo(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this); // 824
		CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::IsGrowable(); // 823
		CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this,
				int num);  // 1145
		CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this,
			int i);  // 1148
		CUtlString::CUtlString(); // 89
		UnresolvedElementReference_t::UnresolvedElementReference_t(); // 1479
		Construct<CLoadKV3FromDynData::UnresolvedElementReference_t>(UnresolvedElementReference_t* pMemory); // 1148
		AddToTail(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this); // 647
		CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this,
				int i);  // 647
		CUtlString::operator=(
				const char* src);  // 648
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 633
} /* size: 640, variables: 1, inline expansions: 3 (96 bytes) */

// <055BF693> kv3lib/keyvalues3_oldschematext.cpp:663
// variables: 2
// function calls: 28
void CLoadKV3FromDynData::ReadLiteralValue(KeyValues3* target)
{
	CUtlTokenReference memberValue; // 665
	{
		CBufferStringN<128> strUnescaped; // 708
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 708
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 710
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 716
	}
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 683
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 700
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 84
	CFmtStrN<256>::Access(); // 719
	CLoadKV3FromDynData::ReportErrorNoLine(
				const char* pError);  // 719
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 719
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 239
	KeyValues3::SetValueDouble(
			double value);  // 704
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 687
} /* size: 911, variables: 1, inline expansions: 20 (725 bytes) */

// <055BEFA3> kv3lib/keyvalues3_oldschematext.cpp:728
// variables: 13
// function calls: 26
void CLoadKV3FromDynData::ResolveUnresolvedReferences()
{
	int nNumUnresolved; // 730
	const char   __FUNCTION__; // 8552
	{
		int i; // 731
		{
			KeyValues3* pObject; // 733
			UnresolvedElementReference_t& ref; // 735
			{
				int j; // 737
				{
					LoadedObject_t& loadedObject; // 739
					CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::operator[](
							int i);  // 739
					CUtlString::Get(); // 740
					CUtlString::Get(); // 744
				}
				CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Count(); // 737
			}
			CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this,
					int i);  // 735
			CUtlString::Get(); // 757
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 761
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 761
			CUtlString::Get(); // 761
		}
	}
	{
		LoadedObject_t& loadedObject; // 774
		CUtlVector<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >& __for_range; // 36521
		iterator __for_begin; // 16256
		iterator __for_end; // 16256
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 776
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 777
		}
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::Base(); // 112
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Base(); // 102
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::begin(); // 774
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Count(); // 104
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::end(); // 774
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 245
		KeyValues3::IsNull(); // 777
	}
	Count(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedE this); // 730
} /* size: 0, variables: 2, inline expansions: 1 (10 bytes) */

// <0293699D> kv3lib/keyvalues3_oldschematext.cpp:728
// variables: 13
// function calls: 26
void CLoadKV3FromDynData::ResolveUnresolvedReferences()
{
	int nNumUnresolved; // 730
	const char   __FUNCTION__; // 27223
	{
		int i; // 731
		{
			KeyValues3* pObject; // 733
			UnresolvedElementReference_t& ref; // 735
			{
				int j; // 737
				{
					LoadedObject_t& loadedObject; // 739
					CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::operator[](
							int i);  // 739
					CUtlString::Get(); // 740
					CUtlString::Get(); // 744
				}
				CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Count(); // 737
			}
			CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this,
					int i);  // 735
			CUtlString::Get(); // 757
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 761
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 761
			CUtlString::Get(); // 761
		}
	}
	{
		LoadedObject_t& loadedObject; // 774
		CUtlVector<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >& __for_range; // 55192
		iterator __for_begin; // 34927
		iterator __for_end; // 34927
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 776
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 777
		}
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::Base(); // 112
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Base(); // 102
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::begin(); // 774
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Count(); // 104
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::end(); // 774
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 245
		KeyValues3::IsNull(); // 777
	}
	Count(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedE this); // 730
} /* size: 0, variables: 2, inline expansions: 1 (10 bytes) */

// <01286552> kv3lib/keyvalues3_oldschematext.cpp:728
// variables: 13
// function calls: 26
void CLoadKV3FromDynData::ResolveUnresolvedReferences()
{
	int nNumUnresolved; // 730
	const char   __FUNCTION__; // 32202
	{
		int i; // 731
		{
			KeyValues3* pObject; // 733
			UnresolvedElementReference_t& ref; // 735
			{
				int j; // 737
				{
					LoadedObject_t& loadedObject; // 739
					CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::operator[](
							int i);  // 739
					CUtlString::Get(); // 740
					CUtlString::Get(); // 744
				}
				CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Count(); // 737
			}
			CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this,
					int i);  // 735
			CUtlString::Get(); // 757
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 761
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 761
			CUtlString::Get(); // 761
		}
	}
	{
		LoadedObject_t& loadedObject; // 774
		CUtlVector<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >& __for_range; // 60171
		iterator __for_begin; // 39906
		iterator __for_end; // 39906
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 776
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 777
		}
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::Base(); // 112
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Base(); // 102
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::begin(); // 774
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Count(); // 104
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::end(); // 774
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 245
		KeyValues3::IsNull(); // 777
	}
	Count(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedE this); // 730
} /* size: 0, variables: 2, inline expansions: 1 (10 bytes) */

// <00301D17> kv3lib/keyvalues3_oldschematext.cpp:728
// variables: 13
// function calls: 26
void CLoadKV3FromDynData::ResolveUnresolvedReferences()
{
	int nNumUnresolved; // 730
	const char   __FUNCTION__; // 18369
	{
		int i; // 731
		{
			KeyValues3* pObject; // 733
			UnresolvedElementReference_t& ref; // 735
			{
				int j; // 737
				{
					LoadedObject_t& loadedObject; // 739
					CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::operator[](
							int i);  // 739
					CUtlString::Get(); // 740
					CUtlString::Get(); // 744
				}
				CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Count(); // 737
			}
			CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this,
					int i);  // 735
			CUtlString::Get(); // 757
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 761
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 761
			CUtlString::Get(); // 761
		}
	}
	{
		LoadedObject_t& loadedObject; // 774
		CUtlVector<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >& __for_range; // 46338
		iterator __for_begin; // 26073
		iterator __for_end; // 26073
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 776
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 777
		}
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::Base(); // 112
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Base(); // 102
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::begin(); // 774
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Count(); // 104
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::end(); // 774
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 245
		KeyValues3::IsNull(); // 777
	}
	Count(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedE this); // 730
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <00666F19> kv3lib/keyvalues3_oldschematext.cpp:728
// variables: 13
// function calls: 26
void CLoadKV3FromDynData::ResolveUnresolvedReferences()
{
	int nNumUnresolved; // 730
	const char   __FUNCTION__; // 44355
	{
		int i; // 731
		{
			KeyValues3* pObject; // 733
			UnresolvedElementReference_t& ref; // 735
			{
				int j; // 737
				{
					LoadedObject_t& loadedObject; // 739
					CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::operator[](
							int i);  // 739
					CUtlString::Get(); // 740
					CUtlString::Get(); // 744
				}
				CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Count(); // 737
			}
			CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this,
					int i);  // 735
			CUtlString::Get(); // 757
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 761
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 761
			CUtlString::Get(); // 761
		}
	}
	{
		LoadedObject_t& loadedObject; // 774
		CUtlVector<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >& __for_range; // 6788
		iterator __for_begin; // 52059
		iterator __for_end; // 52059
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 776
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 777
		}
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::Base(); // 112
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Base(); // 102
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::begin(); // 774
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Count(); // 104
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::end(); // 774
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 245
		KeyValues3::IsNull(); // 777
	}
	Count(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedE this); // 730
} /* size: 0, variables: 2, inline expansions: 1 (10 bytes) */

// <00A3EBA0> kv3lib/keyvalues3_oldschematext.cpp:728
// variables: 13
// function calls: 26
void CLoadKV3FromDynData::ResolveUnresolvedReferences()
{
	int nNumUnresolved; // 730
	const char   __FUNCTION__; // 50506
	{
		int i; // 731
		{
			KeyValues3* pObject; // 733
			UnresolvedElementReference_t& ref; // 735
			{
				int j; // 737
				{
					LoadedObject_t& loadedObject; // 739
					CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::operator[](
							int i);  // 739
					CUtlString::Get(); // 740
					CUtlString::Get(); // 744
				}
				CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Count(); // 737
			}
			CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this,
					int i);  // 735
			CUtlString::Get(); // 757
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 761
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 761
			CUtlString::Get(); // 761
		}
	}
	{
		LoadedObject_t& loadedObject; // 774
		CUtlVector<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >& __for_range; // 12939
		iterator __for_begin; // 58210
		iterator __for_end; // 58210
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 776
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 777
		}
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::Base(); // 112
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Base(); // 102
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::begin(); // 774
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Count(); // 104
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::end(); // 774
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 245
		KeyValues3::IsNull(); // 777
	}
	Count(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedE this); // 730
} /* size: 0, variables: 2, inline expansions: 1 (10 bytes) */

// <0014B721> kv3lib/keyvalues3_oldschematext.cpp:728
// variables: 13
// function calls: 26
void CLoadKV3FromDynData::ResolveUnresolvedReferences()
{
	int nNumUnresolved; // 730
	const char   __FUNCTION__; // 43003
	{
		int i; // 731
		{
			KeyValues3* pObject; // 733
			UnresolvedElementReference_t& ref; // 735
			{
				int j; // 737
				{
					LoadedObject_t& loadedObject; // 739
					CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::operator[](
							int i);  // 739
					CUtlString::Get(); // 740
					CUtlString::Get(); // 744
				}
				CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Count(); // 737
			}
			CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedElement this,
					int i);  // 735
			CUtlString::Get(); // 757
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 761
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 761
			CUtlString::Get(); // 761
		}
	}
	{
		LoadedObject_t& loadedObject; // 774
		CUtlVector<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >& __for_range; // 5436
		iterator __for_begin; // 50707
		iterator __for_end; // 50707
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 776
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 777
		}
		CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>::Base(); // 112
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Base(); // 102
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::begin(); // 774
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::Count(); // 104
		CUtlVectorBase<CLoadKV3FromDynData::LoadedObject_t, CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int> >::end(); // 774
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 245
		KeyValues3::IsNull(); // 777
	}
	Count(const CUtlVectorBase<CLoadKV3FromDynData::UnresolvedElementReference_t, CUtlMemory<CLoadKV3FromDynData::UnresolvedE this); // 730
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <055BED39> kv3lib/keyvalues3_oldschematext.cpp:788
// variables: 2
// function calls: 5
void CLoadKV3FromDynData::AllocTempKV3()
{
	KeyValues3* pTempMember; // 790
	int nNumExistingTemp; // 791
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 790
} /* size: 0, variables: 2, inline expansions: 5 (399 bytes) */

// <055BEB1D> kv3lib/keyvalues3_oldschematext.cpp:799
// variable: 1
// function calls: 5
void CLoadKV3FromDynData::FreeAllTempKV3()
{
	KeyValues3* pTempMember; // 801
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 801
} /* size: 0, variables: 1, inline expansions: 5 (385 bytes) */


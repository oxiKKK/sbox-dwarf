
//
// animgraph/animparamidmap.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <00F3A624> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.h:16
// variables: 4
// function calls: 51
void CAnimParamIdMap::~CAnimParamIdMap()
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 16
	CUtlVectorBase<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::RemoveAll(); // 1798
	CUtlMemory<CAnimParamHandle, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimParamHandle, int>::Purge(); // 903
	CUtlMemory<CAnimParamHandle, int>::Purge(); // 1799
	CUtlVectorBase<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::Purge(); // 560
	ValidateAlignment<CAnimParamHandle>(void); // 508
	CUtlMemory<CAnimParamHandle, int>::Purge(); // 510
	CUtlMemory<CAnimParamHandle, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::~CUtlVector(); // 16
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::Count(); // 897
			CUtlHashtableEntry<CUtlString, int>::IsValid(); // 899
			CUtlHashtableEntry<CUtlString, int>::MarkInvalid(); // 901
			CUtlString::~CUtlString(); // 51
			CUtlKeyValuePair<CUtlString, int>::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<CUtlString, int> >(CUtlKeyValuePair<CUtlString, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this); // 188
	ValidateAlignment<CUtlHashtableEntry<CUtlString, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this); // 16
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<AnimParamID, int>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<AnimParamID, int>, int>::Count(); // 897
			CUtlHashtableEntry<AnimParamID, int>::IsValid(); // 899
			CUtlHashtableEntry<AnimParamID, int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<AnimParamID, int> >(CUtlKeyValuePair<AnimParamID, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<AnimParamID, int, DefaultHashFunctor<AnimParamID>, DefaultEqualFunctor<AnimParamID>, undefined_t, CUt this); // 188
	ValidateAlignment<CUtlHashtableEntry<AnimParamID, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<AnimParamID, int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<AnimParamID, int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<AnimParamID, int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<AnimParamID, int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<AnimParamID, int, DefaultHashFunctor<AnimParamID>, DefaultEqualFunctor<AnimParamID>, undefined_t, CUt this); // 16
} /* size: 449, inline expansions: 39 (1102 bytes) */

// <00F3A5BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.h:16
void CAnimParamIdMap::~CAnimParamIdMap()
{
} /* size: 36 */

// <00F3A5A1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.h:16
inline void CAnimParamIdMap::~CAnimParamIdMap()
{
} /* size: 0 */

// <00EEE99F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.h:16
// member functions: 16
// member variables: 5
// class size: 336
class CAnimParamIdMap : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CAnimParamIdMap(CAnimParamIdMap* , CAnimParamIdMap& );
	void CAnimParamIdMap(CAnimParamIdMap* , const CAnimParamIdMap& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.cpp:8 */
	void CAnimParamIdMap(CAnimParamIdMap* , const CAnimParameterList& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.cpp:31 */
	int GetParamIndex(const CAnimParamIdMap* , AnimParamID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.cpp:43 */
	int GetParamIndex(const CAnimParamIdMap* , const CUtlString& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.cpp:55 */
	CAnimParamHandle GetParamHandle(const CAnimParamIdMap* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.cpp:66 */
	CAnimParamHandle GetParamHandle(const CAnimParamIdMap* , AnimParamID);
private:
	CUtlHashtable<AnimParamID, int, DefaultHashFunctor<AnimParamID>, DefaultEqualFunctor<AnimParamID>, undefined_t, CUtlMemory<CUtlHashtableEntry<AnimParamID, int>, int> > m_idToIndexMap; /* 16 32 */
	CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int> > m_nameToIndexMap; /* 48 32 */
	CUtlVector<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> > m_indexToHandle; /* 80 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_handleToIndex[7]; /* 112 224 */
	virtual void ~CAnimParamIdMap(CAnimParamIdMap* );
	class CAnimParamHandle GetParamHandle(const class CAnimParamIdMap  *, class AnimParamID); /* linkage=_ZNK15CAnimParamIdMap14GetParamHandleE11AnimParamID */
	void CAnimParamIdMap(class CAnimParamIdMap *, const class CAnimParameterList  &); /* linkage=_ZN15CAnimParamIdMapC4ERK18CAnimParameterList */
	void CAnimParamIdMap(class CAnimParamIdMap *, class CAnimParamIdMap &); /* linkage=_ZN15CAnimParamIdMapC4EOS_ */
	void CAnimParamIdMap(class CAnimParamIdMap *, const class CAnimParamIdMap  &); /* linkage=_ZN15CAnimParamIdMapC4ERKS_ */
	int GetParamIndex(const class CAnimParamIdMap  *, class AnimParamID); /* linkage=_ZNK15CAnimParamIdMap13GetParamIndexE11AnimParamID */
	int GetParamIndex(const class CAnimParamIdMap  *, const class CUtlString  &); /* linkage=_ZNK15CAnimParamIdMap13GetParamIndexERK10CUtlString */
	/* <f9f44a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.cpp:55 */
	class CAnimParamHandle GetParamHandle(const class CAnimParamIdMap  *, int); /* linkage=_ZNK15CAnimParamIdMap14GetParamHandleEi */
	virtual void ~CAnimParamIdMap(class CAnimParamIdMap *); /* linkage=_ZN15CAnimParamIdMapD4Ev */
};

// <00DF4B66> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.h:19
void CAnimParamIdMap::CAnimParamIdMap(const CAnimParameterList& paramList)
{
} /* size: 0 */



//
// public/animationsystem/isequenceuser.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	classes: 2
//

// <00496563> ../public/animationsystem/isequenceuser.h:12
// member functions: 4
// member variable: 1
// class size: 32
class CSequenceList {
	/* ../public/animationsystem/isequenceuser.h:15 */
	const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe GetEntries(const CSequenceList* );
	/* ../public/animationsystem/isequenceuser.h:17 */
	void AddSequence(CSequenceList* , const CUtlString& );
private:
	CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int> > m_entries; /* 0 32 */
	const class CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe GetEntries(const class CSequenceList  *); /* linkage=_ZNK13CSequenceList10GetEntriesEv */
	void AddSequence(class CSequenceList *, const class CUtlString  &); /* linkage=_ZN13CSequenceList11AddSequenceERK10CUtlString */
};

// <0118061B> ../public/animationsystem/isequenceuser.h:17
// variable: 1
inline void CSequenceList::AddSequence(const CUtlString& sequenceName)
{
	{
		int* pValue; // 21
	}
} /* size: 0 */

// <01180187> ../public/animationsystem/isequenceuser.h:41
void ISequenceUser::ISequenceUser()
{
} /* size: 0 */

// <0118016B> ../public/animationsystem/isequenceuser.h:41
inline void ISequenceUser::ISequenceUser()
{
} /* size: 0 */

// <005E2170> ../public/animationsystem/isequenceuser.h:41
inline void ISequenceUser::operator=(const ISequenceUser &)
{
} /* size: 0 */

// <0111EA67> ../public/animationsystem/isequenceuser.h:41
// member functions: 15
// member variable: 1
// static member variable: 1
// vtable entries: 4
// class size: 8
class ISequenceUser {
	void ISequenceUser(ISequenceUser* , ISequenceUser& );
	void ISequenceUser(ISequenceUser* , const ISequenceUser& );
	void ISequenceUser(ISequenceUser* );
	void ~ISequenceUser(ISequenceUser* );
	int ()(void) * * _vptr.ISequenceUser; /* 0 8 */
private:
	static class CClassInfoT<ISequenceUser> m_classInfoISequenceUser; /* 0 0 */
	/* ../public/animationsystem/isequenceuser.h:43 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:16 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:16 */
	virtual const CClassInfo& GetTypeInfo(const ISequenceUser* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:16 */
	virtual void* CastToBase(ISequenceUser* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:16 */
	virtual const void* CastToBase(const ISequenceUser* , ClassID);
	/* ../public/animationsystem/isequenceuser.h:47 */
	virtual void GetSequencesUsed(const ISequenceUser* , CSequenceList& );
	virtual const void  * CastToBase(const class ISequenceUser  *, class ClassID); /* linkage=_ZNK13ISequenceUser10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class ISequenceUser *, class ClassID); /* linkage=_ZN13ISequenceUser10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class ISequenceUser  *); /* linkage=_ZNK13ISequenceUser11GetTypeInfoEv */
	/* <1198340> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnode.cpp:16 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN13ISequenceUser10MyTypeInfoEv */
	void ISequenceUser(class ISequenceUser *); /* linkage=_ZN13ISequenceUserC4Ev */
};

// <011805EA> ../public/animationsystem/isequenceuser.h:43
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 43
	const char   __PRETTY_FUNCTION__; // 44255
} /* size: 0, variables: 2 */


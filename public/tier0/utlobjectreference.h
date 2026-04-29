
//
// public/tier0/utlobjectreference.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 4
//	classes: 2
//

// <00F40B4E> ../public/tier0/utlobjectreference.h:61
// member functions: 44
// member variables: 4
// class size: 32
class CUtlReference<CSheet> {
	/* ../public/tier0/utlobjectreference.h:64 */
	void CUtlReference(CUtlReference<CSheet>* );
	/* ../public/tier0/utlobjectreference.h:71 */
	void CUtlReference(CUtlReference<CSheet>* , CSheet* );
	/* ../public/tier0/utlobjectreference.h:78 */
	void CUtlReference(CUtlReference<CSheet>* , const CUtlReference<CSheet>& );
	/* ../public/tier0/utlobjectreference.h:89 */
	void ~CUtlReference(CUtlReference<CSheet>* );
	/* ../public/tier0/utlobjectreference.h:95 */
	void Set(CUtlReference<CSheet>* , CSheet* );
	/* ../public/tier0/utlobjectreference.h:105 */
	CSheet* operator()(const CUtlReference<CSheet>* );
	/* ../public/tier0/utlobjectreference.h:111 */
	bool IsValid(const CUtlReference<CSheet>* );
	/* ../public/tier0/utlobjectreference.h:117 */
	CSheet* operator CSheet*(CUtlReference<CSheet>* );
	/* ../public/tier0/utlobjectreference.h:123 */
	const CSheet* operator const CSheet*(const CUtlReference<CSheet>* );
	/* ../public/tier0/utlobjectreference.h:130 */
	CSheet* GetObject(CUtlReference<CSheet>* );
	/* ../public/tier0/utlobjectreference.h:136 */
	const CSheet* GetObject(const CUtlReference<CSheet>* );
	/* ../public/tier0/utlobjectreference.h:142 */
	CSheet* Get(CUtlReference<CSheet>* );
	/* ../public/tier0/utlobjectreference.h:148 */
	const CSheet* Get(const CUtlReference<CSheet>* );
	/* ../public/tier0/utlobjectreference.h:154 */
	CSheet* operator->(CUtlReference<CSheet>* );
	/* ../public/tier0/utlobjectreference.h:160 */
	const CSheet* operator->(const CUtlReference<CSheet>* );
	/* ../public/tier0/utlobjectreference.h:166 */
	CUtlReference<CSheet>& operator=(CUtlReference<CSheet>* , const CUtlReference<CSheet>& );
	/* ../public/tier0/utlobjectreference.h:172 */
	CUtlReference<CSheet>& operator=(CUtlReference<CSheet>* , CSheet* );
	/* ../public/tier0/utlobjectreference.h:178 */
	bool operator==(const CUtlReference<CSheet>* , const CSheet* );
	/* ../public/tier0/utlobjectreference.h:184 */
	bool operator==(const CUtlReference<CSheet>* , CSheet* );
	/* ../public/tier0/utlobjectreference.h:190 */
	bool operator==(const CUtlReference<CSheet>* , const CUtlReference<CSheet>& );
	/* ../public/tier0/utlobjectreference.h:197 */
	void AddRef(CUtlReference<CSheet>* , CSheet* );
	/* ../public/tier0/utlobjectreference.h:206 */
	void KillRef(CUtlReference<CSheet>* );
	CUtlReference<CSheet> * m_pNext; /* 0 8 */
	CUtlReference<CSheet> * m_pPrev; /* 8 8 */
	CSheet * m_pObject; /* 16 8 */
	intp m_ThisCheck; /* 24 8 */
	void CUtlReference(class CUtlReference<CSheet> *); /* linkage=_ZN13CUtlReferenceI6CSheetEC4Ev */
	void CUtlReference(class CUtlReference<CSheet> *, class CSheet *); /* linkage=_ZN13CUtlReferenceI6CSheetEC4EPS0_ */
	void CUtlReference(class CUtlReference<CSheet> *, const class CUtlReference<CSheet>  &); /* linkage=_ZN13CUtlReferenceI6CSheetEC4ERKS1_ */
	void ~CUtlReference(class CUtlReference<CSheet> *); /* linkage=_ZN13CUtlReferenceI6CSheetED4Ev */
	void Set(class CUtlReference<CSheet> *, class CSheet *); /* linkage=_ZN13CUtlReferenceI6CSheetE3SetEPS0_ */
	class CSheet * operator()(const class CUtlReference<CSheet>  *); /* linkage=_ZNK13CUtlReferenceI6CSheetEclEv */
	bool IsValid(const class CUtlReference<CSheet>  *); /* linkage=_ZNK13CUtlReferenceI6CSheetE7IsValidEv */
	class CSheet * operator CSheet*(class CUtlReference<CSheet> *); /* linkage=_ZN13CUtlReferenceI6CSheetEcvPS0_Ev */
	const class CSheet  * operator const CSheet*(const class CUtlReference<CSheet>  *); /* linkage=_ZNK13CUtlReferenceI6CSheetEcvPKS0_Ev */
	class CSheet * GetObject(class CUtlReference<CSheet> *); /* linkage=_ZN13CUtlReferenceI6CSheetE9GetObjectEv */
	const class CSheet  * GetObject(const class CUtlReference<CSheet>  *); /* linkage=_ZNK13CUtlReferenceI6CSheetE9GetObjectEv */
	class CSheet * Get(class CUtlReference<CSheet> *); /* linkage=_ZN13CUtlReferenceI6CSheetE3GetEv */
	const class CSheet  * Get(const class CUtlReference<CSheet>  *); /* linkage=_ZNK13CUtlReferenceI6CSheetE3GetEv */
	class CSheet * operator->(class CUtlReference<CSheet> *); /* linkage=_ZN13CUtlReferenceI6CSheetEptEv */
	const class CSheet  * operator->(const class CUtlReference<CSheet>  *); /* linkage=_ZNK13CUtlReferenceI6CSheetEptEv */
	class CUtlReference<CSheet> & operator=(class CUtlReference<CSheet> *, const class CUtlReference<CSheet>  &); /* linkage=_ZN13CUtlReferenceI6CSheetEaSERKS1_ */
	class CUtlReference<CSheet> & operator=(class CUtlReference<CSheet> *, class CSheet *); /* linkage=_ZN13CUtlReferenceI6CSheetEaSEPS0_ */
	bool operator==(const class CUtlReference<CSheet>  *, const class CSheet  *); /* linkage=_ZNK13CUtlReferenceI6CSheetEeqEPKS0_ */
	bool operator==(const class CUtlReference<CSheet>  *, class CSheet *); /* linkage=_ZNK13CUtlReferenceI6CSheetEeqEPS0_ */
	bool operator==(const class CUtlReference<CSheet>  *, const class CUtlReference<CSheet>  &); /* linkage=_ZNK13CUtlReferenceI6CSheetEeqERKS1_ */
	void AddRef(class CUtlReference<CSheet> *, class CSheet *); /* linkage=_ZN13CUtlReferenceI6CSheetE6AddRefEPS0_ */
	void KillRef(class CUtlReference<CSheet> *); /* linkage=_ZN13CUtlReferenceI6CSheetE7KillRefEv */
};

// <00F4B72C> ../public/tier0/utlobjectreference.h:225
void CUtlReferenceList<CSheet>::CUtlReferenceList()
{
} /* size: 0 */

// <00F4B710> ../public/tier0/utlobjectreference.h:225
inline void CUtlReferenceList<CSheet>::CUtlReferenceList()
{
} /* size: 0 */

// <0029C566> ../public/tier0/utlobjectreference.h:225
// member functions: 3
// member variable: 1
// class size: 8
class CUtlReferenceList<CSheet> : public CUtlIntrusiveDList<CUtlReference<CSheet> > {
public:
	/* class CUtlIntrusiveDList<CUtlReference<CSheet> > <ancestor>; */ /* 0 8 */
	/* ../public/tier0/utlobjectreference.h:228 */
	void ~CUtlReferenceList(CUtlReferenceList<CSheet>* );
	void ~CUtlReferenceList(class CUtlReferenceList<CSheet> *); /* linkage=_ZN17CUtlReferenceListI6CSheetED4Ev */
	void CUtlReferenceList(class CUtlReferenceList<CSheet> *); /* linkage=_ZN17CUtlReferenceListI6CSheetEC4Ev */
};

// <00F45773> ../public/tier0/utlobjectreference.h:228
// variables: 2
void CUtlReferenceList<CSheet>::~CUtlReferenceList()
{
	{
		CUtlReference<CSheet>* i; // 233
		{
			CUtlReference<CSheet>* n; // 236
		}
	}
} /* size: 0 */

// <00F45742> ../public/tier0/utlobjectreference.h:228
// variables: 2
inline void CUtlReferenceList<CSheet>::~CUtlReferenceList()
{
	{
		CUtlReference<CSheet>* i; // 233
		{
			CUtlReference<CSheet>* n; // 236
		}
	}
} /* size: 0 */


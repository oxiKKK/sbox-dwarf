
//
// public/tier0/utlsortvector.h
//
//	referenced by: libengine2.so
//
//	functions: 8
//	classes: 3
//

// <023DA5A0> ../public/tier0/utlsortvector.h:28
// member function: 1
// class size: 1
class CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourceReference_t> {
	/* ../public/tier0/utlsortvector.h:31 */
	bool Less(CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourceReference_t>* , const LoadingResourceReference_t& , const LoadingResourceReference_t& , void* );
};

// <023E9064> ../public/tier0/utlsortvector.h:31
inline void CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourceReference_t>::Less(const LoadingResourceReference_t& lhs, const LoadingResourceReference_t& rhs, void *)
{
} /* size: 0 */

// <023F5820> ../public/tier0/utlsortvector.h:38
void ~CUtlSortVector(const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingR this)
{
} /* size: 0 */

// <023F5804> ../public/tier0/utlsortvector.h:38
inline void ~CUtlSortVector(const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingR this)
{
} /* size: 0 */

// <0225AA0D> ../public/tier0/utlsortvector.h:38
// member functions: 27
// member variables: 3
// class size: 48
class CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourceReference_t>, CUtlVector<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReference_t, int> > > : public CUtlVector<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReference_t, int> > {
public:
	/* class CUtlVector<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReference_t, int> > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlsortvector.h:140 */
	void CUtlSortVector(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int, int);
	/* ../public/tier0/utlsortvector.h:146 */
	void CUtlSortVector(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, LoadingResourceReference_t* , int);
	/* ../public/tier0/utlsortvector.h:152 */
	void CUtlSortVector(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingR);
	/* ../public/tier0/utlsortvector.h:170 */
	int Insert(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:180 */
	int InsertAfterEqual(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:198 */
	int InsertIfNotFound(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:414 */
	void Remove(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:402 */
	void FindAndRemove(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:420 */
	void Remove(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int);
	/* ../public/tier0/utlsortvector.h:161 */
	void SetLessContext(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, void* );
	/* ../public/tier0/utlsortvector.h:190 */
	int InsertNoSort(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:246 */
	void RedoSort(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, bool);
	/* ../public/tier0/utlsortvector.h:212 */
	int InsertAfter(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int, const LoadingResourceReference_t& );
protected:
	/* ../public/tier0/utlsortvector.h:96 */
	int AddToHead(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc);
	/* ../public/tier0/utlsortvector.h:97 */
	int AddToTail(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc);
	/* ../public/tier0/utlsortvector.h:98 */
	int InsertBefore(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int);
	/* ../public/tier0/utlsortvector.h:99 */
	int InsertAfter(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int);
	/* ../public/tier0/utlsortvector.h:100 */
	int InsertBefore(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:101 */
	int AddToHead(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:102 */
	int AddToTail(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:103 */
	int AddMultipleToHead(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int);
	/* ../public/tier0/utlsortvector.h:104 */
	int AddMultipleToTail(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int, const LoadingResourceReference_t* );
	/* ../public/tier0/utlsortvector.h:105 */
	int InsertMultipleBefore(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int, int, const LoadingResourceReference_t* );
	/* ../public/tier0/utlsortvector.h:106 */
	int InsertMultipleAfter(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int, int);
	/* ../public/tier0/utlsortvector.h:107 */
	int AddVectorToTail(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const CUtlVector<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReference_t,);
	/* ../public/tier0/utlsortvector.h:115 */
	int CompareHelper(void* , const LoadingResourceReference_t* , const LoadingResourceReference_t* );
	void * m_pLessContext; /* 32 8 */
	bool m_bNeedsSort; /* 40 1 */
private:
	/* ../public/tier0/utlsortvector.h:232 */
	void QuickSort(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourceReference_t>& , int, int);
};

// <023DA069> ../public/tier0/utlsortvector.h:38
// member functions: 31
// member variables: 3
// class size: 48
class CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourceReference_t>, CUtlVector<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReference_t, int> > > : public CUtlVector<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReference_t, int> > {
public:
	/* class CUtlVector<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReference_t, int> > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlsortvector.h:140 */
	void CUtlSortVector(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int, int);
	/* ../public/tier0/utlsortvector.h:146 */
	void CUtlSortVector(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, LoadingResourceReference_t* , int);
	/* ../public/tier0/utlsortvector.h:152 */
	void CUtlSortVector(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingR);
	/* ../public/tier0/utlsortvector.h:170 */
	int Insert(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:180 */
	int InsertAfterEqual(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:198 */
	int InsertIfNotFound(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:414 */
	void Remove(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:402 */
	void FindAndRemove(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:420 */
	void Remove(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int);
	/* ../public/tier0/utlsortvector.h:161 */
	void SetLessContext(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, void* );
	/* ../public/tier0/utlsortvector.h:190 */
	int InsertNoSort(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:246 */
	void RedoSort(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, bool);
	/* ../public/tier0/utlsortvector.h:212 */
	int InsertAfter(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int, const LoadingResourceReference_t& );
protected:
	/* ../public/tier0/utlsortvector.h:96 */
	int AddToHead(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc);
	/* ../public/tier0/utlsortvector.h:97 */
	int AddToTail(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc);
	/* ../public/tier0/utlsortvector.h:98 */
	int InsertBefore(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int);
	/* ../public/tier0/utlsortvector.h:99 */
	int InsertAfter(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int);
	/* ../public/tier0/utlsortvector.h:100 */
	int InsertBefore(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:101 */
	int AddToHead(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:102 */
	int AddToTail(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:103 */
	int AddMultipleToHead(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int);
	/* ../public/tier0/utlsortvector.h:104 */
	int AddMultipleToTail(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int, const LoadingResourceReference_t* );
	/* ../public/tier0/utlsortvector.h:105 */
	int InsertMultipleBefore(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int, int, const LoadingResourceReference_t* );
	/* ../public/tier0/utlsortvector.h:106 */
	int InsertMultipleAfter(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, int, int);
	/* ../public/tier0/utlsortvector.h:107 */
	int AddVectorToTail(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, const CUtlVector<CResourceManifest::LoadingResourceReference_t, CUtlMemory<CResourceManifest::LoadingResourceReference_t,);
	/* ../public/tier0/utlsortvector.h:115 */
	int CompareHelper(void* , const LoadingResourceReference_t* , const LoadingResourceReference_t* );
	void * m_pLessContext; /* 32 8 */
	bool m_bNeedsSort; /* 40 1 */
private:
	/* ../public/tier0/utlsortvector.h:232 */
	void QuickSort(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourceReference_t>& , int, int);
	/* ../public/tier0/utlsortvector.h:315 */
	int FindLessOrEqual<CResourceManifest::LoadingResourceReference_t>(const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingR, const LoadingResourceReference_t& , bool* );
	/* ../public/tier0/utlsortvector.h:345 */
	int FindLessOrEqual<CResourceManifest::LoadingResourceReference_t>(const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingR, const LoadingResourceReference_t& );
	/* ../public/tier0/utlsortvector.h:261 */
	int Find<CResourceManifest::LoadingResourceReference_t>(const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingR, const LoadingResourceReference_t& );
	void ~CUtlSortVector(CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourc);
};

// <023EACFF> ../public/tier0/utlsortvector.h:140
void CUtlSortVector(const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingR this, int nGrowSize, int initSize)
{
} /* size: 0 */

// <023EA76E> ../public/tier0/utlsortvector.h:170
// variables: 3
void Insert(const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::LoadingR this, const LoadingResourceReference_t& src)
{
	const char   __FUNCTION__; // 58979
	int pos; // 174
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
	}
} /* size: 0, variables: 2 */

// <023EA7D0> ../public/tier0/utlsortvector.h:261
// variables: 6
void Find<CResourceManifest::LoadingResourceReference_t>(const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::Lo this, const LoadingResourceReference_t& src)
{
	const char   __FUNCTION__; // 58958
	CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourceReference_t> less; // 265
	int start; // 267
	int endi; // 267
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 263
	}
	{
		int mid; // 270
	}
} /* size: 0, variables: 4 */

// <023E6CD3> ../public/tier0/utlsortvector.h:315
// variables: 6
void FindLessOrEqual<CResourceManifest::LoadingResourceReference_t>(const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::Lo this, const LoadingResourceReference_t& src, bool* pFound)
{
	const char   __FUNCTION__; // 59126
	CUtlSortVectorDefaultLess<CResourceManifest::LoadingResourceReference_t> less; // 319
	int starti; // 320
	int endi; // 320
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 317
	}
	{
		int mid; // 323
	}
} /* size: 0, variables: 4 */

// <023E9028> ../public/tier0/utlsortvector.h:345
// variable: 1
void FindLessOrEqual<CResourceManifest::LoadingResourceReference_t>(const CUtlSortVector<CResourceManifest::LoadingResourceReference_t, CUtlSortVectorDefaultLess<CResourceManifest::Lo this, const LoadingResourceReference_t& src)
{
	bool bFound; // 347
} /* size: 0, variables: 1 */


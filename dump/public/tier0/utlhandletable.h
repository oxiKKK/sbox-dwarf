
//
// public/tier0/utlhandletable.h
//
//	referenced by: libtier0.so
//
//	functions: 15
//	class: 1
//

// <001184DA> ../public/tier0/utlhandletable.h:30
// function calls: 13
void CUtlHandleTable<void, 16>::~CUtlHandleTable()
{
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 22
	CUtlQueue<int, CUtlMemory<int, int> >::~CUtlQueue(); // 30
	CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int>::Purge(); // 903
	CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int>::Purge(); // 1799
	CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int> >::Purge(); // 560
	CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int> >::~CUtlVector(); // 30
} /* size: 121, inline expansions: 13 (392 bytes) */

// <001184BE> ../public/tier0/utlhandletable.h:30
inline void CUtlHandleTable<void, 16>::~CUtlHandleTable()
{
} /* size: 0 */

// <00116C28> ../public/tier0/utlhandletable.h:30
// member functions: 40
// member variables: 3
// class size: 64
class CUtlHandleTable<void, 16> {
	/* ../public/tier0/utlhandletable.h:71 */
	struct EntryType_t {
		/* ../public/tier0/utlhandletable.h:73 */
		void EntryType_t(EntryType_t* );
		unsigned int m_nSerial:31; /* 0: 0 4 */
		unsigned int nInvalid:1; /* 0:31 4 */
		void * m_pData; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhandletable.h:94 */
	void CUtlHandleTable(CUtlHandleTable<void, 16>* );
	/* ../public/tier0/utlhandletable.h:103 */
	UtlHandle_t AddHandle(CUtlHandleTable<void, 16>* );
	/* ../public/tier0/utlhandletable.h:117 */
	void RemoveHandle(CUtlHandleTable<void, 16>* , UtlHandle_t);
	/* ../public/tier0/utlhandletable.h:148 */
	void SetHandle(CUtlHandleTable<void, 16>* , UtlHandle_t, void* );
	/* ../public/tier0/utlhandletable.h:165 */
	void* GetHandle(const CUtlHandleTable<void, 16>* , UtlHandle_t);
	/* ../public/tier0/utlhandletable.h:172 */
	void* GetHandle(const CUtlHandleTable<void, 16>* , UtlHandle_t, bool);
	/* ../public/tier0/utlhandletable.h:183 */
	bool IsHandleValid(const CUtlHandleTable<void, 16>* , UtlHandle_t);
	/* ../public/tier0/utlhandletable.h:208 */
	unsigned int GetValidHandleCount(const CUtlHandleTable<void, 16>* );
	/* ../public/tier0/utlhandletable.h:214 */
	unsigned int GetHandleCount(const CUtlHandleTable<void, 16>* );
	/* ../public/tier0/utlhandletable.h:220 */
	UtlHandle_t GetHandleFromIndex(const CUtlHandleTable<void, 16>* , int);
	/* ../public/tier0/utlhandletable.h:228 */
	int GetIndexFromHandle(const CUtlHandleTable<void, 16>* , UtlHandle_t);
	/* ../public/tier0/utlhandletable.h:289 */
	void MarkHandleInvalid(CUtlHandleTable<void, 16>* , UtlHandle_t);
	/* ../public/tier0/utlhandletable.h:311 */
	void MarkHandleValid(CUtlHandleTable<void, 16>* , UtlHandle_t);
	/* ../public/tier0/utlhandletable.h:333 */
	unsigned int GetHandleCreationCount(const CUtlHandleTable<void, 16>* );
private:
	/* ../public/tier0/utlhandletable.h:242 */
	unsigned int GetSerialNumber(UtlHandle_t);
	/* ../public/tier0/utlhandletable.h:248 */
	unsigned int GetListIndex(UtlHandle_t);
	/* ../public/tier0/utlhandletable.h:254 */
	UtlHandle_t CreateHandle(unsigned int, unsigned int);
	/* ../public/tier0/utlhandletable.h:267 */
	const EntryType_t* GetEntry(const CUtlHandleTable<void, 16>* , UtlHandle_t, bool);
	unsigned int m_nValidHandles; /* 0 4 */
	CUtlVector<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int> > m_list; /* 8 32 */
	CUtlQueue<int, CUtlMemory<int, int> > m_unused; /* 40 24 */
	/* ../public/tier0/utlhandletable.h:60 */
	struct HandleType_t {
		/* ../public/tier0/utlhandletable.h:62 */
		void HandleType_t(HandleType_t* , unsigned int, unsigned int);
		unsigned int nIndex:16; /* 0: 0 4 */
		unsigned int nSerial:16; /* 0:16 4 */
	};
	void ~CUtlHandleTable(CUtlHandleTable<void, 16>* );
	void CUtlHandleTable(class CUtlHandleTable<void, 16> *); /* linkage=_ZN15CUtlHandleTableIvLi16EEC4Ev */
	UtlHandle_t AddHandle(class CUtlHandleTable<void, 16> *); /* linkage=_ZN15CUtlHandleTableIvLi16EE9AddHandleEv */
	void RemoveHandle(class CUtlHandleTable<void, 16> *, UtlHandle_t); /* linkage=_ZN15CUtlHandleTableIvLi16EE12RemoveHandleEj */
	void SetHandle(class CUtlHandleTable<void, 16> *, UtlHandle_t, void *); /* linkage=_ZN15CUtlHandleTableIvLi16EE9SetHandleEjPv */
	void * GetHandle(const class CUtlHandleTable<void, 16>  *, UtlHandle_t); /* linkage=_ZNK15CUtlHandleTableIvLi16EE9GetHandleEj */
	void * GetHandle(const class CUtlHandleTable<void, 16>  *, UtlHandle_t, bool); /* linkage=_ZNK15CUtlHandleTableIvLi16EE9GetHandleEjb */
	bool IsHandleValid(const class CUtlHandleTable<void, 16>  *, UtlHandle_t); /* linkage=_ZNK15CUtlHandleTableIvLi16EE13IsHandleValidEj */
	unsigned int GetValidHandleCount(const class CUtlHandleTable<void, 16>  *); /* linkage=_ZNK15CUtlHandleTableIvLi16EE19GetValidHandleCountEv */
	unsigned int GetHandleCount(const class CUtlHandleTable<void, 16>  *); /* linkage=_ZNK15CUtlHandleTableIvLi16EE14GetHandleCountEv */
	UtlHandle_t GetHandleFromIndex(const class CUtlHandleTable<void, 16>  *, int); /* linkage=_ZNK15CUtlHandleTableIvLi16EE18GetHandleFromIndexEi */
	int GetIndexFromHandle(const class CUtlHandleTable<void, 16>  *, UtlHandle_t); /* linkage=_ZNK15CUtlHandleTableIvLi16EE18GetIndexFromHandleEj */
	void MarkHandleInvalid(class CUtlHandleTable<void, 16> *, UtlHandle_t); /* linkage=_ZN15CUtlHandleTableIvLi16EE17MarkHandleInvalidEj */
	void MarkHandleValid(class CUtlHandleTable<void, 16> *, UtlHandle_t); /* linkage=_ZN15CUtlHandleTableIvLi16EE15MarkHandleValidEj */
	unsigned int GetHandleCreationCount(const class CUtlHandleTable<void, 16>  *); /* linkage=_ZNK15CUtlHandleTableIvLi16EE22GetHandleCreationCountEv */
	unsigned int GetSerialNumber(UtlHandle_t); /* linkage=_ZN15CUtlHandleTableIvLi16EE15GetSerialNumberEj */
	unsigned int GetListIndex(UtlHandle_t); /* linkage=_ZN15CUtlHandleTableIvLi16EE12GetListIndexEj */
	UtlHandle_t CreateHandle(unsigned int, unsigned int); /* linkage=_ZN15CUtlHandleTableIvLi16EE12CreateHandleEjj */
	const class EntryType_t  * GetEntry(const class CUtlHandleTable<void, 16>  *, UtlHandle_t, bool); /* linkage=_ZNK15CUtlHandleTableIvLi16EE8GetEntryEjb */
	void ~CUtlHandleTable(class CUtlHandleTable<void, 16> *); /* linkage=_ZN15CUtlHandleTableIvLi16EED4Ev */
};

// <00118BD3> ../public/tier0/utlhandletable.h:62
void HandleType_t::HandleType_t(unsigned int i, unsigned int s)
{
	{
		{
		}
		{
		}
	}
} /* size: 0 */

// <00118B48> ../public/tier0/utlhandletable.h:62
// variables: 3
inline void HandleType_t::HandleType_t(unsigned int i, unsigned int s)
{
	const char   __FUNCTION__; // 51778
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 64
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 65
	}
} /* size: 0, variables: 1 */

// <00118843> ../public/tier0/utlhandletable.h:73
void EntryType_t::EntryType_t()
{
} /* size: 0 */

// <0011882A> ../public/tier0/utlhandletable.h:73
inline void EntryType_t::EntryType_t()
{
} /* size: 0 */

// <00119CF3> ../public/tier0/utlhandletable.h:94
void CUtlHandleTable<void, 16>::CUtlHandleTable()
{
} /* size: 0 */

// <00119630> ../public/tier0/utlhandletable.h:103
// variables: 2
// function calls: 26
void CUtlHandleTable<void, 16>::AddHandle()
{
	unsigned int nIndex; // 105
	EntryType_t& entry; // 107
	{
	}
	{
	}
	CUtlMemory<int, int>::Count(); // 364
	CUtlQueue<int, CUtlMemory<int, int> >::Count(); // 105
	{
	}
	CUtlMemory<int, int>::operator[](
			int i);  // 134
	CUtlMemory<int, int>::Count(); // 307
	CUtlQueue<int, CUtlMemory<int, int> >::Next_Unchecked(
			QueueIter_t it);  // 142
	CUtlQueue<int, CUtlMemory<int, int> >::RemoveAtHead(
			int& removedElement);  // 119
	CUtlQueue<int, CUtlMemory<int, int> >::RemoveAtHead(); // 105
	CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int> >::operator[](
			int i);  // 107
	{
		{
		}
	}
	{
	}
	HandleType_t::HandleType_t(
			unsigned int i,
			unsigned int s);  // 62
	HandleType_t::HandleType_t(
			unsigned int i,
			unsigned int s);  // 256
	CreateHandle(unsigned int nSerial,
			unsigned int nIndex);  // 113
	CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int>::NumAllocated(); // 1143
	CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int>::Base(); // 112
	CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int> >::Base(); // 368
	CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int>::IsGrowable(); // 823
	CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int> >::Element(
		int i);  // 1148
	EntryType_t::EntryType_t(); // 1479
	Construct<CUtlHandleTable<void, 16>::EntryType_t>(EntryType_t* pMemory); // 1148
	CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int> >::AddToTail(); // 105
} /* size: 764, variables: 2, inline expansions: 26 (1607 bytes) */

// <00119545> ../public/tier0/utlhandletable.h:117
// variables: 5
void CUtlHandleTable<void, 16>::RemoveHandle(UtlHandle_t handle)
{
	const char   __FUNCTION__; // 51778
	unsigned int nIndex; // 119
	EntryType_t& entry; // 124
	bool bStopUsing; // 136
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 120
	}
} /* size: 0, variables: 4 */

// <001195B6> ../public/tier0/utlhandletable.h:148
// variables: 3
void CUtlHandleTable<void, 16>::SetHandle(UtlHandle_t handle, void* pData)
{
	const char   __FUNCTION__; // 54431
	EntryType_t* entry; // 150
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 151
	}
} /* size: 0, variables: 2 */

// <0011950F> ../public/tier0/utlhandletable.h:165
// variable: 1
void* CUtlHandleTable<void, 16>::GetHandle(UtlHandle_t handle)
{
	const EntryType_t* entry; // 167
} /* size: 0, variables: 1 */

// <00118B0D> ../public/tier0/utlhandletable.h:242
void GetSerialNumber(UtlHandle_t handle)
{
} /* size: 0 */

// <00119275> ../public/tier0/utlhandletable.h:248
void GetListIndex(UtlHandle_t handle)
{
} /* size: 0 */

// <00119317> ../public/tier0/utlhandletable.h:254
// variable: 1
void CreateHandle(unsigned int nSerial, unsigned int nIndex)
{
	HandleType_t h; // 256
} /* size: 0, variables: 1 */

// <0011928C> ../public/tier0/utlhandletable.h:267
// variables: 4
void CUtlHandleTable<void, 16>::GetEntry(UtlHandle_t handle, bool checkValidity)
{
	const char   __FUNCTION__; // 53638
	unsigned int nIndex; // 272
	const EntryType_t& entry; // 277
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
	}
} /* size: 0, variables: 3 */


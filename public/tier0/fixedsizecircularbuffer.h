
//
// public/tier0/fixedsizecircularbuffer.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 24
//	classes: 3
//

// <00DF28E3> ../public/tier0/fixedsizecircularbuffer.h:11
// member functions: 30
// member variables: 4
// static member variable: 1
// vtable entries: 2
// class size: 256
class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> {
	void ~CFixedSizeCircularBuffer(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* );
	void CFixedSizeCircularBuffer(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>& );
	void CFixedSizeCircularBuffer(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , const CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>& );
	int ()(void) * * _vptr.CFixedSizeCircularBuffer; /* 0 8 */
	static const int Capacity; /* 0 0 */
	/* ../public/tier0/fixedsizecircularbuffer.h:45 */
	void CFixedSizeCircularBuffer(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* );
	/* ../public/tier0/fixedsizecircularbuffer.h:50 */
	bool IsEmpty(const CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* );
	/* ../public/tier0/fixedsizecircularbuffer.h:58 */
	int Count(const CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* );
	/* ../public/tier0/fixedsizecircularbuffer.h:66 */
	void PushBack(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , const CAnimPathWaypointData& );
	/* ../public/tier0/fixedsizecircularbuffer.h:91 */
	void PopFront(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , int);
	/* ../public/tier0/fixedsizecircularbuffer.h:108 */
	void PopBack(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , int);
	/* ../public/tier0/fixedsizecircularbuffer.h:124 */
	void Clear(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* );
	/* ../public/tier0/fixedsizecircularbuffer.h:136 */
	CAnimPathWaypointData& operator[](CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , int);
	/* ../public/tier0/fixedsizecircularbuffer.h:145 */
	const CAnimPathWaypointData& operator[](const CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , int);
protected:
	/* ../public/tier0/fixedsizecircularbuffer.h:154 */
	int GetAbsoluteIndex(const CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , int);
	/* ../public/tier0/fixedsizecircularbuffer.h:34 */
	virtual void ConstructItem(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , CAnimPathWaypointData& );
	/* ../public/tier0/fixedsizecircularbuffer.h:35 */
	virtual void ReleaseItem(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , CAnimPathWaypointData& );
	CAnimPathWaypointData m_entries[15]; /* 8 240 */
	int m_startIndex; /* 248 4 */
	int m_count; /* 252 4 */
	void ~CFixedSizeCircularBuffer(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EED4Ev */
	void CFixedSizeCircularBuffer(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *, class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> &); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EEC4EOS1_ */
	void CFixedSizeCircularBuffer(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *, const class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>  &); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EEC4ERKS1_ */
	void CFixedSizeCircularBuffer(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EEC4Ev */
	bool IsEmpty(const class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>  *); /* linkage=_ZNK24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE7IsEmptyEv */
	int Count(const class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>  *); /* linkage=_ZNK24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE5CountEv */
	void PushBack(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *, const class CAnimPathWaypointData  &); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE8PushBackERKS0_ */
	void PopFront(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *, int); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE8PopFrontEi */
	void PopBack(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *, int); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE7PopBackEi */
	void Clear(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE5ClearEv */
	class CAnimPathWaypointData & operator[](class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *, int); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EEixEi */
	const class CAnimPathWaypointData  & operator[](const class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>  *, int); /* linkage=_ZNK24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EEixEi */
	int GetAbsoluteIndex(const class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>  *, int); /* linkage=_ZNK24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE16GetAbsoluteIndexEi */
	/* <15cfb2b> ../public/tier0/fixedsizecircularbuffer.h:34 */
	virtual void ConstructItem(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *, class CAnimPathWaypointData &); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE13ConstructItemERS0_ */
	/* <15cfafb> ../public/tier0/fixedsizecircularbuffer.h:35 */
	virtual void ReleaseItem(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *, class CAnimPathWaypointData &); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE11ReleaseItemERS0_ */
};

// <00F302B8> ../public/tier0/fixedsizecircularbuffer.h:11
// member functions: 30
// member variables: 4
// static member variable: 1
// vtable entries: 2
// class size: 608
class CFixedSizeCircularBuffer<CPoseCacheEntry, 12> {
	void ~CFixedSizeCircularBuffer(CFixedSizeCircularBuffer<CPoseCacheEntry, 12>* );
	void CFixedSizeCircularBuffer(CFixedSizeCircularBuffer<CPoseCacheEntry, 12>* , CFixedSizeCircularBuffer<CPoseCacheEntry, 12>& );
	void CFixedSizeCircularBuffer(CFixedSizeCircularBuffer<CPoseCacheEntry, 12>* , const CFixedSizeCircularBuffer<CPoseCacheEntry, 12>& );
	int ()(void) * * _vptr.CFixedSizeCircularBuffer; /* 0 8 */
	static const int Capacity = 12; /* 0 0 */
	/* ../public/tier0/fixedsizecircularbuffer.h:45 */
	void CFixedSizeCircularBuffer(CFixedSizeCircularBuffer<CPoseCacheEntry, 12>* );
	/* ../public/tier0/fixedsizecircularbuffer.h:50 */
	bool IsEmpty(const CFixedSizeCircularBuffer<CPoseCacheEntry, 12>* );
	/* ../public/tier0/fixedsizecircularbuffer.h:58 */
	int Count(const CFixedSizeCircularBuffer<CPoseCacheEntry, 12>* );
	/* ../public/tier0/fixedsizecircularbuffer.h:66 */
	void PushBack(CFixedSizeCircularBuffer<CPoseCacheEntry, 12>* , const CPoseCacheEntry& );
	/* ../public/tier0/fixedsizecircularbuffer.h:91 */
	void PopFront(CFixedSizeCircularBuffer<CPoseCacheEntry, 12>* , int);
	/* ../public/tier0/fixedsizecircularbuffer.h:108 */
	void PopBack(CFixedSizeCircularBuffer<CPoseCacheEntry, 12>* , int);
	/* ../public/tier0/fixedsizecircularbuffer.h:124 */
	void Clear(CFixedSizeCircularBuffer<CPoseCacheEntry, 12>* );
	/* ../public/tier0/fixedsizecircularbuffer.h:136 */
	CPoseCacheEntry& operator[](CFixedSizeCircularBuffer<CPoseCacheEntry, 12>* , int);
	/* ../public/tier0/fixedsizecircularbuffer.h:145 */
	const CPoseCacheEntry& operator[](const CFixedSizeCircularBuffer<CPoseCacheEntry, 12>* , int);
protected:
	/* ../public/tier0/fixedsizecircularbuffer.h:154 */
	int GetAbsoluteIndex(const CFixedSizeCircularBuffer<CPoseCacheEntry, 12>* , int);
	/* ../public/tier0/fixedsizecircularbuffer.h:34 */
	virtual void ConstructItem(CFixedSizeCircularBuffer<CPoseCacheEntry, 12>* , CPoseCacheEntry& );
	/* ../public/tier0/fixedsizecircularbuffer.h:35 */
	virtual void ReleaseItem(CFixedSizeCircularBuffer<CPoseCacheEntry, 12>* , CPoseCacheEntry& );
	CPoseCacheEntry m_entries[12] __attribute__((__aligned__(16))); /* 16 576 */
	int m_startIndex; /* 592 4 */
	int m_count; /* 596 4 */
	void ~CFixedSizeCircularBuffer(class CFixedSizeCircularBuffer<CPoseCacheEntry, 12> *); /* linkage=_ZN24CFixedSizeCircularBufferI15CPoseCacheEntryLi12EED4Ev */
	void CFixedSizeCircularBuffer(class CFixedSizeCircularBuffer<CPoseCacheEntry, 12> *, class CFixedSizeCircularBuffer<CPoseCacheEntry, 12> &); /* linkage=_ZN24CFixedSizeCircularBufferI15CPoseCacheEntryLi12EEC4EOS1_ */
	void CFixedSizeCircularBuffer(class CFixedSizeCircularBuffer<CPoseCacheEntry, 12> *, const class CFixedSizeCircularBuffer<CPoseCacheEntry, 12>  &); /* linkage=_ZN24CFixedSizeCircularBufferI15CPoseCacheEntryLi12EEC4ERKS1_ */
	void CFixedSizeCircularBuffer(class CFixedSizeCircularBuffer<CPoseCacheEntry, 12> *); /* linkage=_ZN24CFixedSizeCircularBufferI15CPoseCacheEntryLi12EEC4Ev */
	bool IsEmpty(const class CFixedSizeCircularBuffer<CPoseCacheEntry, 12>  *); /* linkage=_ZNK24CFixedSizeCircularBufferI15CPoseCacheEntryLi12EE7IsEmptyEv */
	int Count(const class CFixedSizeCircularBuffer<CPoseCacheEntry, 12>  *); /* linkage=_ZNK24CFixedSizeCircularBufferI15CPoseCacheEntryLi12EE5CountEv */
	void PushBack(class CFixedSizeCircularBuffer<CPoseCacheEntry, 12> *, const class CPoseCacheEntry  &); /* linkage=_ZN24CFixedSizeCircularBufferI15CPoseCacheEntryLi12EE8PushBackERKS0_ */
	void PopFront(class CFixedSizeCircularBuffer<CPoseCacheEntry, 12> *, int); /* linkage=_ZN24CFixedSizeCircularBufferI15CPoseCacheEntryLi12EE8PopFrontEi */
	void PopBack(class CFixedSizeCircularBuffer<CPoseCacheEntry, 12> *, int); /* linkage=_ZN24CFixedSizeCircularBufferI15CPoseCacheEntryLi12EE7PopBackEi */
	void Clear(class CFixedSizeCircularBuffer<CPoseCacheEntry, 12> *); /* linkage=_ZN24CFixedSizeCircularBufferI15CPoseCacheEntryLi12EE5ClearEv */
	class CPoseCacheEntry & operator[](class CFixedSizeCircularBuffer<CPoseCacheEntry, 12> *, int); /* linkage=_ZN24CFixedSizeCircularBufferI15CPoseCacheEntryLi12EEixEi */
	const class CPoseCacheEntry  & operator[](const class CFixedSizeCircularBuffer<CPoseCacheEntry, 12>  *, int); /* linkage=_ZNK24CFixedSizeCircularBufferI15CPoseCacheEntryLi12EEixEi */
	int GetAbsoluteIndex(const class CFixedSizeCircularBuffer<CPoseCacheEntry, 12>  *, int); /* linkage=_ZNK24CFixedSizeCircularBufferI15CPoseCacheEntryLi12EE16GetAbsoluteIndexEi */
	/* <f99702> ../public/tier0/fixedsizecircularbuffer.h:34 */
	virtual void ConstructItem(class CFixedSizeCircularBuffer<CPoseCacheEntry, 12> *, class CPoseCacheEntry &); /* linkage=_ZN24CFixedSizeCircularBufferI15CPoseCacheEntryLi12EE13ConstructItemERS0_ */
	virtual void ReleaseItem(class CFixedSizeCircularBuffer<CPoseCacheEntry, 12> *, class CPoseCacheEntry &); /* linkage=_ZN24CFixedSizeCircularBufferI15CPoseCacheEntryLi12EE11ReleaseItemERS0_ */
} __attribute__((__aligned__(16)));

// <01564D28> ../public/tier0/fixedsizecircularbuffer.h:11
// member functions: 30
// member variables: 4
// static member variable: 1
// vtable entries: 2
// class size: 256
class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> {
	void ~CFixedSizeCircularBuffer(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* );
	void CFixedSizeCircularBuffer(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>& );
	void CFixedSizeCircularBuffer(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , const CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>& );
	int ()(void) * * _vptr.CFixedSizeCircularBuffer; /* 0 8 */
	static const int Capacity = 15; /* 0 0 */
	/* ../public/tier0/fixedsizecircularbuffer.h:45 */
	void CFixedSizeCircularBuffer(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* );
	/* ../public/tier0/fixedsizecircularbuffer.h:50 */
	bool IsEmpty(const CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* );
	/* ../public/tier0/fixedsizecircularbuffer.h:58 */
	int Count(const CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* );
	/* ../public/tier0/fixedsizecircularbuffer.h:66 */
	void PushBack(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , const CAnimPathWaypointData& );
	/* ../public/tier0/fixedsizecircularbuffer.h:91 */
	void PopFront(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , int);
	/* ../public/tier0/fixedsizecircularbuffer.h:108 */
	void PopBack(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , int);
	/* ../public/tier0/fixedsizecircularbuffer.h:124 */
	void Clear(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* );
	/* ../public/tier0/fixedsizecircularbuffer.h:136 */
	CAnimPathWaypointData& operator[](CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , int);
	/* ../public/tier0/fixedsizecircularbuffer.h:145 */
	const CAnimPathWaypointData& operator[](const CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , int);
protected:
	/* ../public/tier0/fixedsizecircularbuffer.h:154 */
	int GetAbsoluteIndex(const CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , int);
	/* ../public/tier0/fixedsizecircularbuffer.h:34 */
	virtual void ConstructItem(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , CAnimPathWaypointData& );
	/* ../public/tier0/fixedsizecircularbuffer.h:35 */
	virtual void ReleaseItem(CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>* , CAnimPathWaypointData& );
	CAnimPathWaypointData m_entries[15]; /* 8 240 */
	int m_startIndex; /* 248 4 */
	int m_count; /* 252 4 */
	void ~CFixedSizeCircularBuffer(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EED4Ev */
	void CFixedSizeCircularBuffer(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *, class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> &); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EEC4EOS1_ */
	void CFixedSizeCircularBuffer(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *, const class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>  &); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EEC4ERKS1_ */
	void CFixedSizeCircularBuffer(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EEC4Ev */
	bool IsEmpty(const class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>  *); /* linkage=_ZNK24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE7IsEmptyEv */
	int Count(const class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>  *); /* linkage=_ZNK24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE5CountEv */
	void PushBack(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *, const class CAnimPathWaypointData  &); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE8PushBackERKS0_ */
	void PopFront(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *, int); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE8PopFrontEi */
	void PopBack(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *, int); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE7PopBackEi */
	void Clear(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE5ClearEv */
	class CAnimPathWaypointData & operator[](class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *, int); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EEixEi */
	const class CAnimPathWaypointData  & operator[](const class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>  *, int); /* linkage=_ZNK24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EEixEi */
	int GetAbsoluteIndex(const class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>  *, int); /* linkage=_ZNK24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE16GetAbsoluteIndexEi */
	/* <15cfb2b> ../public/tier0/fixedsizecircularbuffer.h:34 */
	virtual void ConstructItem(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *, class CAnimPathWaypointData &); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE13ConstructItemERS0_ */
	/* <15cfafb> ../public/tier0/fixedsizecircularbuffer.h:35 */
	virtual void ReleaseItem(class CFixedSizeCircularBuffer<CAnimPathWaypointData, 15> *, class CAnimPathWaypointData &); /* linkage=_ZN24CFixedSizeCircularBufferI21CAnimPathWaypointDataLi15EE11ReleaseItemERS0_ */
};

// <015CFB2B> ../public/tier0/fixedsizecircularbuffer.h:34
void CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::ConstructItem(CAnimPathWaypointData& item)
{
} /* size: 5 */

// <0157BB5B> ../public/tier0/fixedsizecircularbuffer.h:34
inline void CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::ConstructItem(CAnimPathWaypointData& item)
{
} /* size: 0 */

// <00F99702> ../public/tier0/fixedsizecircularbuffer.h:34
void CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::ConstructItem(CPoseCacheEntry& item)
{
} /* size: 0 */

// <00F4F9A8> ../public/tier0/fixedsizecircularbuffer.h:34
inline void CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::ConstructItem(CPoseCacheEntry& item)
{
} /* size: 0 */

// <015CFAFB> ../public/tier0/fixedsizecircularbuffer.h:35
void CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::ReleaseItem(CAnimPathWaypointData& item)
{
} /* size: 5 */

// <0157BB80> ../public/tier0/fixedsizecircularbuffer.h:35
inline void CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::ReleaseItem(CAnimPathWaypointData& item)
{
} /* size: 0 */

// <00F4F9CD> ../public/tier0/fixedsizecircularbuffer.h:35
void CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::ReleaseItem(CPoseCacheEntry& item)
{
} /* size: 0 */

// <01584966> ../public/tier0/fixedsizecircularbuffer.h:45
void CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::CFixedSizeCircularBuffer()
{
} /* size: 0 */

// <0158494D> ../public/tier0/fixedsizecircularbuffer.h:45
inline void CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::CFixedSizeCircularBuffer()
{
} /* size: 0 */

// <00F558FC> ../public/tier0/fixedsizecircularbuffer.h:45
void CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::CFixedSizeCircularBuffer()
{
} /* size: 0 */

// <00F558E3> ../public/tier0/fixedsizecircularbuffer.h:45
inline void CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::CFixedSizeCircularBuffer()
{
} /* size: 0 */

// <01582008> ../public/tier0/fixedsizecircularbuffer.h:50
inline void CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::IsEmpty()
{
} /* size: 0 */

// <00F5589A> ../public/tier0/fixedsizecircularbuffer.h:50
inline void CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::IsEmpty()
{
} /* size: 0 */

// <01581FEF> ../public/tier0/fixedsizecircularbuffer.h:58
inline void CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Count()
{
} /* size: 0 */

// <00F557CE> ../public/tier0/fixedsizecircularbuffer.h:58
inline void CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::Count()
{
} /* size: 0 */

// <01581ECB> ../public/tier0/fixedsizecircularbuffer.h:66
// variable: 1
inline void CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::PushBack(const CAnimPathWaypointData& newEntry)
{
	{
		int nIndex; // 81
	}
} /* size: 0 */

// <00F557E7> ../public/tier0/fixedsizecircularbuffer.h:66
// variable: 1
inline void CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::PushBack(const CPoseCacheEntry& newEntry)
{
	{
		int nIndex; // 81
	}
} /* size: 0 */

// <01581E13> ../public/tier0/fixedsizecircularbuffer.h:91
// variable: 1
void CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::PopFront(int nCount)
{
	{
		{
			int i; // 95
		}
	}
} /* size: 0 */

// <01581D5B> ../public/tier0/fixedsizecircularbuffer.h:108
// variable: 1
void CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::PopBack(int nCount)
{
	{
		{
			int i; // 112
		}
	}
} /* size: 0 */

// <01581EFE> ../public/tier0/fixedsizecircularbuffer.h:124
// variable: 1
void CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::Clear()
{
	{
		int i; // 126
	}
} /* size: 0 */

// <01581FA2> ../public/tier0/fixedsizecircularbuffer.h:145
// variables: 2
void CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::operator[](int index)
{
	const char   __FUNCTION__; // 35274
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 147
	}
} /* size: 0, variables: 1 */

// <00F55781> ../public/tier0/fixedsizecircularbuffer.h:145
// variables: 2
void CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::operator[](int index)
{
	const char   __FUNCTION__; // 37597
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 147
	}
} /* size: 0, variables: 1 */

// <0157BBBE> ../public/tier0/fixedsizecircularbuffer.h:154
void CFixedSizeCircularBuffer<CAnimPathWaypointData, 15>::GetAbsoluteIndex(int nRelativeIndex)
{
} /* size: 0 */

// <00F4F95D> ../public/tier0/fixedsizecircularbuffer.h:154
void CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::GetAbsoluteIndex(int nRelativeIndex)
{
} /* size: 0 */


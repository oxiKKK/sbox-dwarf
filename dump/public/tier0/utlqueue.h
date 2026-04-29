
//
// public/tier0/utlqueue.h
//
//	referenced by: libengine2.so
//				   librendersystemvulkan.so
//				   libtier0.so
//
//	functions: 22
//	classes: 2
//

// <05DF9F01> ../public/tier0/utlqueue.h:22
void CUtlQueue<int, CUtlMemory<int, int> >::~CUtlQueue()
{
} /* size: 0 */

// <05DF9EE5> ../public/tier0/utlqueue.h:22
inline void CUtlQueue<int, CUtlMemory<int, int> >::~CUtlQueue()
{
} /* size: 0 */

// <00B8B229> ../public/tier0/utlqueue.h:22
void CUtlQueue<VkSemaphore_T::~CUtlQueue()
{
} /* size: 0 */

// <00B8B20C> ../public/tier0/utlqueue.h:22
inline void CUtlQueue<VkSemaphore_T::~CUtlQueue()
{
} /* size: 0 */

// <05DAAC04> ../public/tier0/utlqueue.h:22
// member functions: 52
// member variables: 3
// class size: 24
class CUtlQueue<int, CUtlMemory<int, int> > {
	/* ../public/tier0/utlqueue.h:104 */
	void CUtlQueue(CUtlQueue<int, CUtlMemory<int, int> >* , int, int);
	/* ../public/tier0/utlqueue.h:110 */
	void CUtlQueue(CUtlQueue<int, CUtlMemory<int, int> >* , int* , int);
	/* ../public/tier0/utlqueue.h:116 */
	int RemoveAtHead(CUtlQueue<int, CUtlMemory<int, int> >* );
	/* ../public/tier0/utlqueue.h:124 */
	bool RemoveAtHead(CUtlQueue<int, CUtlMemory<int, int> >* , int& );
	/* ../public/tier0/utlqueue.h:148 */
	int RemoveAtTail(CUtlQueue<int, CUtlMemory<int, int> >* );
	/* ../public/tier0/utlqueue.h:156 */
	bool RemoveAtTail(CUtlQueue<int, CUtlMemory<int, int> >* , int& );
	/* ../public/tier0/utlqueue.h:179 */
	const int& Head(const CUtlQueue<int, CUtlMemory<int, int> >* );
	/* ../public/tier0/utlqueue.h:192 */
	const int& Tail(const CUtlQueue<int, CUtlMemory<int, int> >* );
	/* ../public/tier0/utlqueue.h:205 */
	void Insert(CUtlQueue<int, CUtlMemory<int, int> >* , const int& );
	/* ../public/tier0/utlqueue.h:243 */
	int* InsertGetPtr(CUtlQueue<int, CUtlMemory<int, int> >* );
	/* ../public/tier0/utlqueue.h:250 */
	bool Check(const CUtlQueue<int, CUtlMemory<int, int> >* , int);
	/* ../public/tier0/utlqueue.h:261 */
	QueueIter_t First(const CUtlQueue<int, CUtlMemory<int, int> >* );
	/* ../public/tier0/utlqueue.h:267 */
	QueueIter_t Next(const CUtlQueue<int, CUtlMemory<int, int> >* , QueueIter_t);
	/* ../public/tier0/utlqueue.h:283 */
	QueueIter_t Last(const CUtlQueue<int, CUtlMemory<int, int> >* );
	/* ../public/tier0/utlqueue.h:289 */
	QueueIter_t Previous(const CUtlQueue<int, CUtlMemory<int, int> >* , QueueIter_t);
	/* ../public/tier0/utlqueue.h:317 */
	bool IsValid(const CUtlQueue<int, CUtlMemory<int, int> >* , QueueIter_t);
	/* ../public/tier0/utlqueue.h:332 */
	int& Element(CUtlQueue<int, CUtlMemory<int, int> >* , QueueIter_t);
	/* ../public/tier0/utlqueue.h:346 */
	const int& Element(const CUtlQueue<int, CUtlMemory<int, int> >* , QueueIter_t);
	/* ../public/tier0/utlqueue.h:352 */
	int Count(const CUtlQueue<int, CUtlMemory<int, int> >* );
	/* ../public/tier0/utlqueue.h:375 */
	bool IsEmpty(const CUtlQueue<int, CUtlMemory<int, int> >* );
	/* ../public/tier0/utlqueue.h:369 */
	int NumAllocated(const CUtlQueue<int, CUtlMemory<int, int> >* );
	/* ../public/tier0/utlqueue.h:381 */
	void RemoveAll(CUtlQueue<int, CUtlMemory<int, int> >* );
	/* ../public/tier0/utlqueue.h:387 */
	void Purge(CUtlQueue<int, CUtlMemory<int, int> >* );
protected:
	/* ../public/tier0/utlqueue.h:305 */
	QueueIter_t Next_Unchecked(const CUtlQueue<int, CUtlMemory<int, int> >* , QueueIter_t);
	/* ../public/tier0/utlqueue.h:311 */
	QueueIter_t Previous_Unchecked(const CUtlQueue<int, CUtlMemory<int, int> >* , QueueIter_t);
	CUtlMemory<int, int> m_memory; /* 0 16 */
	QueueIter_t m_head; /* 16 4 */
	QueueIter_t m_tail; /* 20 4 */
	void ~CUtlQueue(CUtlQueue<int, CUtlMemory<int, int> >* );
	void CUtlQueue(class CUtlQueue<int, CUtlMemory<int, int> > *, int, int); /* linkage=_ZN9CUtlQueueIi10CUtlMemoryIiiEEC4Eii */
	void CUtlQueue(class CUtlQueue<int, CUtlMemory<int, int> > *, int *, int); /* linkage=_ZN9CUtlQueueIi10CUtlMemoryIiiEEC4EPii */
	int RemoveAtHead(class CUtlQueue<int, CUtlMemory<int, int> > *); /* linkage=_ZN9CUtlQueueIi10CUtlMemoryIiiEE12RemoveAtHeadEv */
	bool RemoveAtHead(class CUtlQueue<int, CUtlMemory<int, int> > *, int &); /* linkage=_ZN9CUtlQueueIi10CUtlMemoryIiiEE12RemoveAtHeadERi */
	int RemoveAtTail(class CUtlQueue<int, CUtlMemory<int, int> > *); /* linkage=_ZN9CUtlQueueIi10CUtlMemoryIiiEE12RemoveAtTailEv */
	bool RemoveAtTail(class CUtlQueue<int, CUtlMemory<int, int> > *, int &); /* linkage=_ZN9CUtlQueueIi10CUtlMemoryIiiEE12RemoveAtTailERi */
	const int  & Head(const class CUtlQueue<int, CUtlMemory<int, int> >  *); /* linkage=_ZNK9CUtlQueueIi10CUtlMemoryIiiEE4HeadEv */
	const int  & Tail(const class CUtlQueue<int, CUtlMemory<int, int> >  *); /* linkage=_ZNK9CUtlQueueIi10CUtlMemoryIiiEE4TailEv */
	void Insert(class CUtlQueue<int, CUtlMemory<int, int> > *, const int  &); /* linkage=_ZN9CUtlQueueIi10CUtlMemoryIiiEE6InsertERKi */
	int * InsertGetPtr(class CUtlQueue<int, CUtlMemory<int, int> > *); /* linkage=_ZN9CUtlQueueIi10CUtlMemoryIiiEE12InsertGetPtrEv */
	bool Check(const class CUtlQueue<int, CUtlMemory<int, int> >  *, int); /* linkage=_ZNK9CUtlQueueIi10CUtlMemoryIiiEE5CheckEi */
	enum QueueIter_t First(const class CUtlQueue<int, CUtlMemory<int, int> >  *); /* linkage=_ZNK9CUtlQueueIi10CUtlMemoryIiiEE5FirstEv */
	enum QueueIter_t Next(const class CUtlQueue<int, CUtlMemory<int, int> >  *, enum QueueIter_t); /* linkage=_ZNK9CUtlQueueIi10CUtlMemoryIiiEE4NextE11QueueIter_t */
	enum QueueIter_t Last(const class CUtlQueue<int, CUtlMemory<int, int> >  *); /* linkage=_ZNK9CUtlQueueIi10CUtlMemoryIiiEE4LastEv */
	enum QueueIter_t Previous(const class CUtlQueue<int, CUtlMemory<int, int> >  *, enum QueueIter_t); /* linkage=_ZNK9CUtlQueueIi10CUtlMemoryIiiEE8PreviousE11QueueIter_t */
	bool IsValid(const class CUtlQueue<int, CUtlMemory<int, int> >  *, enum QueueIter_t); /* linkage=_ZNK9CUtlQueueIi10CUtlMemoryIiiEE7IsValidE11QueueIter_t */
	int & Element(class CUtlQueue<int, CUtlMemory<int, int> > *, enum QueueIter_t); /* linkage=_ZN9CUtlQueueIi10CUtlMemoryIiiEE7ElementE11QueueIter_t */
	const int  & Element(const class CUtlQueue<int, CUtlMemory<int, int> >  *, enum QueueIter_t); /* linkage=_ZNK9CUtlQueueIi10CUtlMemoryIiiEE7ElementE11QueueIter_t */
	int Count(const class CUtlQueue<int, CUtlMemory<int, int> >  *); /* linkage=_ZNK9CUtlQueueIi10CUtlMemoryIiiEE5CountEv */
	bool IsEmpty(const class CUtlQueue<int, CUtlMemory<int, int> >  *); /* linkage=_ZNK9CUtlQueueIi10CUtlMemoryIiiEE7IsEmptyEv */
	int NumAllocated(const class CUtlQueue<int, CUtlMemory<int, int> >  *); /* linkage=_ZNK9CUtlQueueIi10CUtlMemoryIiiEE12NumAllocatedEv */
	void RemoveAll(class CUtlQueue<int, CUtlMemory<int, int> > *); /* linkage=_ZN9CUtlQueueIi10CUtlMemoryIiiEE9RemoveAllEv */
	void Purge(class CUtlQueue<int, CUtlMemory<int, int> > *); /* linkage=_ZN9CUtlQueueIi10CUtlMemoryIiiEE5PurgeEv */
	enum QueueIter_t Next_Unchecked(const class CUtlQueue<int, CUtlMemory<int, int> >  *, enum QueueIter_t); /* linkage=_ZNK9CUtlQueueIi10CUtlMemoryIiiEE14Next_UncheckedE11QueueIter_t */
	enum QueueIter_t Previous_Unchecked(const class CUtlQueue<int, CUtlMemory<int, int> >  *, enum QueueIter_t); /* linkage=_ZNK9CUtlQueueIi10CUtlMemoryIiiEE18Previous_UncheckedE11QueueIter_t */
	void ~CUtlQueue(class CUtlQueue<int, CUtlMemory<int, int> > *); /* linkage=_ZN9CUtlQueueIi10CUtlMemoryIiiEED4Ev */
};

// <00B50B73> ../public/tier0/utlqueue.h:22
// member functions: 52
// member variables: 3
// class size: 24
class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> > {
	/* ../public/tier0/utlqueue.h:104 */
	void CUtlQueue(CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* , int, int);
	/* ../public/tier0/utlqueue.h:110 */
	void CUtlQueue(CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* , VkSemaphore_T** , int);
	/* ../public/tier0/utlqueue.h:116 */
	VkSemaphore_T* RemoveAtHead(CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* );
	/* ../public/tier0/utlqueue.h:124 */
	bool RemoveAtHead(CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* , VkSemaphore_T* & );
	/* ../public/tier0/utlqueue.h:148 */
	VkSemaphore_T* RemoveAtTail(CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* );
	/* ../public/tier0/utlqueue.h:156 */
	bool RemoveAtTail(CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* , VkSemaphore_T* & );
	/* ../public/tier0/utlqueue.h:179 */
	VkSemaphore_T* const& Head(const CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* );
	/* ../public/tier0/utlqueue.h:192 */
	VkSemaphore_T* const& Tail(const CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* );
	/* ../public/tier0/utlqueue.h:205 */
	void Insert(CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* , VkSemaphore_T* const& );
	/* ../public/tier0/utlqueue.h:243 */
	VkSemaphore_T** InsertGetPtr(CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* );
	/* ../public/tier0/utlqueue.h:250 */
	bool Check(const CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* , VkSemaphore_T* );
	/* ../public/tier0/utlqueue.h:261 */
	QueueIter_t First(const CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* );
	/* ../public/tier0/utlqueue.h:267 */
	QueueIter_t Next(const CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* , QueueIter_t);
	/* ../public/tier0/utlqueue.h:283 */
	QueueIter_t Last(const CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* );
	/* ../public/tier0/utlqueue.h:289 */
	QueueIter_t Previous(const CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* , QueueIter_t);
	/* ../public/tier0/utlqueue.h:317 */
	bool IsValid(const CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* , QueueIter_t);
	/* ../public/tier0/utlqueue.h:332 */
	VkSemaphore_T* & Element(CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* , QueueIter_t);
	/* ../public/tier0/utlqueue.h:346 */
	VkSemaphore_T* const& Element(const CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* , QueueIter_t);
	/* ../public/tier0/utlqueue.h:352 */
	int Count(const CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* );
	/* ../public/tier0/utlqueue.h:375 */
	bool IsEmpty(const CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* );
	/* ../public/tier0/utlqueue.h:369 */
	int NumAllocated(const CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* );
	/* ../public/tier0/utlqueue.h:381 */
	void RemoveAll(CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* );
	/* ../public/tier0/utlqueue.h:387 */
	void Purge(CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* );
protected:
	/* ../public/tier0/utlqueue.h:305 */
	QueueIter_t Next_Unchecked(const CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* , QueueIter_t);
	/* ../public/tier0/utlqueue.h:311 */
	QueueIter_t Previous_Unchecked(const CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* , QueueIter_t);
	CUtlMemory<VkSemaphore_T*, int> m_memory; /* 0 16 */
	QueueIter_t m_head; /* 16 4 */
	QueueIter_t m_tail; /* 20 4 */
	void ~CUtlQueue(CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >* );
	void CUtlQueue(class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> > *, int, int); /* linkage=_ZN9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEEC4Eii */
	void CUtlQueue(class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> > *, class VkSemaphore_T * *, int); /* linkage=_ZN9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEEC4EPS1_i */
	class VkSemaphore_T * RemoveAtHead(class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> > *); /* linkage=_ZN9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE12RemoveAtHeadEv */
	bool RemoveAtHead(class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> > *, class VkSemaphore_T * &); /* linkage=_ZN9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE12RemoveAtHeadERS1_ */
	class VkSemaphore_T * RemoveAtTail(class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> > *); /* linkage=_ZN9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE12RemoveAtTailEv */
	bool RemoveAtTail(class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> > *, class VkSemaphore_T * &); /* linkage=_ZN9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE12RemoveAtTailERS1_ */
	class VkSemaphore_T * const & Head(const class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >  *); /* linkage=_ZNK9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE4HeadEv */
	class VkSemaphore_T * const & Tail(const class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >  *); /* linkage=_ZNK9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE4TailEv */
	void Insert(class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> > *, class VkSemaphore_T * const &); /* linkage=_ZN9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE6InsertERKS1_ */
	class VkSemaphore_T * * InsertGetPtr(class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> > *); /* linkage=_ZN9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE12InsertGetPtrEv */
	bool Check(const class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >  *, class VkSemaphore_T *); /* linkage=_ZNK9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE5CheckES1_ */
	enum QueueIter_t First(const class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >  *); /* linkage=_ZNK9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE5FirstEv */
	enum QueueIter_t Next(const class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >  *, enum QueueIter_t); /* linkage=_ZNK9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE4NextE11QueueIter_t */
	enum QueueIter_t Last(const class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >  *); /* linkage=_ZNK9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE4LastEv */
	enum QueueIter_t Previous(const class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >  *, enum QueueIter_t); /* linkage=_ZNK9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE8PreviousE11QueueIter_t */
	bool IsValid(const class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >  *, enum QueueIter_t); /* linkage=_ZNK9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE7IsValidE11QueueIter_t */
	class VkSemaphore_T * & Element(class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> > *, enum QueueIter_t); /* linkage=_ZN9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE7ElementE11QueueIter_t */
	class VkSemaphore_T * const & Element(const class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >  *, enum QueueIter_t); /* linkage=_ZNK9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE7ElementE11QueueIter_t */
	int Count(const class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >  *); /* linkage=_ZNK9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE5CountEv */
	bool IsEmpty(const class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >  *); /* linkage=_ZNK9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE7IsEmptyEv */
	int NumAllocated(const class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >  *); /* linkage=_ZNK9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE12NumAllocatedEv */
	void RemoveAll(class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> > *); /* linkage=_ZN9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE9RemoveAllEv */
	void Purge(class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> > *); /* linkage=_ZN9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE5PurgeEv */
	enum QueueIter_t Next_Unchecked(const class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >  *, enum QueueIter_t); /* linkage=_ZNK9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE14Next_UncheckedE11QueueIter_t */
	enum QueueIter_t Previous_Unchecked(const class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> >  *, enum QueueIter_t); /* linkage=_ZNK9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEE18Previous_UncheckedE11QueueIter_t */
	void ~CUtlQueue(class CUtlQueue<VkSemaphore_T*, CUtlMemory<VkSemaphore_T*, int> > *); /* linkage=_ZN9CUtlQueueIP13VkSemaphore_T10CUtlMemoryIS1_iEED4Ev */
};

// <05DE4E17> ../public/tier0/utlqueue.h:104
void CUtlQueue<int, CUtlMemory<int, int> >::CUtlQueue(int growSize, int initSize)
{
} /* size: 0 */

// <05DE4DE6> ../public/tier0/utlqueue.h:104
inline void CUtlQueue<int, CUtlMemory<int, int> >::CUtlQueue(int growSize, int initSize)
{
} /* size: 0 */

// <00B75780> ../public/tier0/utlqueue.h:104
void CUtlQueue<VkSemaphore_T::CUtlQueue(int growSize, int initSize)
{
} /* size: 0 */

// <00B7574F> ../public/tier0/utlqueue.h:104
inline void CUtlQueue<VkSemaphore_T::CUtlQueue(int growSize, int initSize)
{
} /* size: 0 */

// <05DE2E82> ../public/tier0/utlqueue.h:116
// variable: 1
inline void CUtlQueue<int, CUtlMemory<int, int> >::RemoveAtHead()
{
	int temp; // 118
} /* size: 0, variables: 1 */

// <05DDD2CB> ../public/tier0/utlqueue.h:124
// variables: 3
inline void CUtlQueue<int, CUtlMemory<int, int> >::RemoveAtHead(int& removedElement)
{
	const char   __FUNCTION__; // 8161
	QueueIter_t it; // 133
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 126
	}
} /* size: 0, variables: 2 */

// <00118CB3> ../public/tier0/utlqueue.h:124
// variables: 3
inline void CUtlQueue<int, CUtlMemory<int, int> >::RemoveAtHead(int& removedElement)
{
	const char   __FUNCTION__; // 51778
	QueueIter_t it; // 133
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 126
	}
} /* size: 0, variables: 2 */

// <00B7512D> ../public/tier0/utlqueue.h:148
// variable: 1
inline void CUtlQueue<VkSemaphore_T::RemoveAtTail()
{
	VkSemaphore_T* temp; // 150
} /* size: 0, variables: 1 */

// <00B71848> ../public/tier0/utlqueue.h:156
// variables: 2
inline void CUtlQueue<VkSemaphore_T::RemoveAtTail(VkSemaphore_T *& removedElement)
{
	const char   __FUNCTION__; // 26806
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 158
	}
} /* size: 0, variables: 1 */

// <05DE4B45> ../public/tier0/utlqueue.h:205
// variables: 4
void CUtlQueue<int, CUtlMemory<int, int> >::Insert(const int& element)
{
	{
		QueueIter_t nextTail; // 216
		{
			int nOldAllocCount; // 219
			int nNewAllocCount; // 221
			int nGrowAmount; // 222
		}
	}
} /* size: 0 */

// <00B7414B> ../public/tier0/utlqueue.h:205
// variables: 4
void CUtlQueue<VkSemaphore_T::Insert(VkSemaphore_T* const& element)
{
	{
		QueueIter_t nextTail; // 216
		{
			int nOldAllocCount; // 219
			int nNewAllocCount; // 221
			int nGrowAmount; // 222
		}
	}
} /* size: 0 */

// <00118E4A> ../public/tier0/utlqueue.h:205
// variables: 4
// function calls: 15
void CUtlQueue<int, CUtlMemory<int, int> >::Insert(const int& element)
{
	{
		QueueIter_t nextTail; // 216
		{
			int nOldAllocCount; // 219
			int nNewAllocCount; // 221
			int nGrowAmount; // 222
			CUtlMemory<int, int>::IsGrowable(); // 823
			CUtlMemory<int, int>::IsExternallyAllocated(); // 859
			CUtlMemory<int, int>::IsExternallyAllocated(); // 861
			CUtlMemory<int, int>::Grow(
				int num);  // 220
			CUtlQueue<int, CUtlMemory<int, int> >::Next_Unchecked(
					QueueIter_t it);  // 224
			CUtlMemory<int, int>::operator[](
					int i);  // 229
			CUtlMemory<int, int>::operator[](
					int i);  // 229
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 229
		}
		CUtlQueue<int, CUtlMemory<int, int> >::Next_Unchecked(
				QueueIter_t it);  // 216
	}
	CUtlMemory<int, int>::IsGrowable(); // 881
	CUtlMemory<int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 210
	CUtlMemory<int, int>::operator[](
			int i);  // 239
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 239
} /* size: 618, inline expansions: 5 (216 bytes) */

// <05DE060A> ../public/tier0/utlqueue.h:305
void CUtlQueue<int, CUtlMemory<int, int> >::Next_Unchecked(QueueIter_t it)
{
} /* size: 0 */

// <00B6FF0C> ../public/tier0/utlqueue.h:305
void CUtlQueue<VkSemaphore_T::Next_Unchecked(QueueIter_t it)
{
} /* size: 0 */

// <00B6E280> ../public/tier0/utlqueue.h:311
void CUtlQueue<VkSemaphore_T::Previous_Unchecked(QueueIter_t it)
{
} /* size: 0 */

// <00B75152> ../public/tier0/utlqueue.h:352
// variables: 3
// function call: 1
void CUtlQueue<VkSemaphore_T::Count()
{
	const char   __FUNCTION__; // 26680
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 356
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 359
	}
	CUtlMemory<VkSemaphore_T::Count(); // 364
} /* size: 111, variables: 1, inline expansions: 1 (0 bytes) */

// <001193B4> ../public/tier0/utlqueue.h:352
// variables: 3
void CUtlQueue<int, CUtlMemory<int, int> >::Count()
{
	const char   __FUNCTION__; // 53916
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 356
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 359
	}
} /* size: 0, variables: 1 */

// <05DE2EA7> ../public/tier0/utlqueue.h:375
void CUtlQueue<int, CUtlMemory<int, int> >::IsEmpty()
{
} /* size: 0 */

